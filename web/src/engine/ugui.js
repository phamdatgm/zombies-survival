// Unity UI (uGUI) -> DOM renderer.
// Each RectTransform under a Canvas becomes an absolutely positioned <div>; Images use sprite-atlas
// background positioning, Texts are HTML text, Buttons/EventTriggers dispatch serialized persistent calls.
import { Component, Transform, World, Time } from './core.js';
import { Vector2, Vector3, Color, Mathf } from './umath.js';
import { DB, spriteDef, textureUrl, getMaterialDef } from './assets.js';
import { Audio } from './audio.js';

const UIROOT = () => document.getElementById('ui');
export const UI = { canvases: new Set(), pointerDown: false, fontFamily: 'ZDFont' };

(function injectFont() {
  const st = document.createElement('style');
  st.textContent = `@font-face{font-family:ZDFont;src:url(assets/fonts/SonianoSansUnicodeRegular10.ttf)}
  .ug{position:absolute;box-sizing:border-box;pointer-events:none;transform-origin:50% 50%}
  .ug-img{position:absolute;inset:0;background-repeat:no-repeat;pointer-events:none}
  .ug-txt{position:absolute;inset:0;display:flex;font-family:ZDFont,'Trebuchet MS',sans-serif;white-space:pre-wrap;line-height:1;pointer-events:none;overflow:visible}
  .ug-txt>span{display:block;width:100%}
  .ug-hit{pointer-events:auto;cursor:pointer}
  .ug-canvas{position:absolute;left:0;top:0;transform-origin:0 0;pointer-events:none}`;
  document.head.appendChild(st);
  addEventListener('pointerdown', () => { UI.pointerDown = true; }, true);
  addEventListener('pointerup', () => { UI.pointerDown = false; }, true);
})();

// ---------------------------------------------------------------- RectTransform helpers
function rt(go) { return go.rect; }
function canvasOf(go) { let g = go; while (g) { const c = g.components.find((x) => x instanceof Canvas); if (c) return c; g = g.transform._parent && g.transform._parent.gameObject; } return null; }

// Extend Transform with RectTransform API (only meaningful when go.rect exists)
Object.defineProperties(Transform.prototype, {
  anchoredPosition: { get() { const r = this.gameObject.rect; return r ? new Vector2(r.anchoredPosition[0], r.anchoredPosition[1]) : new Vector2(); }, set(v) { const r = this.gameObject.rect; if (r) { r.anchoredPosition = [v.x, v.y]; uiDirty(); } } },
  sizeDelta: { get() { const r = this.gameObject.rect; return r ? new Vector2(r.sizeDelta[0], r.sizeDelta[1]) : new Vector2(); }, set(v) { const r = this.gameObject.rect; if (r) { r.sizeDelta = [v.x, v.y]; uiDirty(); } } },
  anchorMin: { get() { const r = this.gameObject.rect; return new Vector2(r.anchorMin[0], r.anchorMin[1]); }, set(v) { this.gameObject.rect.anchorMin = [v.x, v.y]; uiDirty(); } },
  anchorMax: { get() { const r = this.gameObject.rect; return new Vector2(r.anchorMax[0], r.anchorMax[1]); }, set(v) { this.gameObject.rect.anchorMax = [v.x, v.y]; uiDirty(); } },
  pivot: { get() { const r = this.gameObject.rect; return new Vector2(r.pivot[0], r.pivot[1]); }, set(v) { this.gameObject.rect.pivot = [v.x, v.y]; uiDirty(); } },
  rect: { get() { const s = rectSize(this.gameObject); const p = this.gameObject.rect ? this.gameObject.rect.pivot : [0.5, 0.5]; return { width: s[0], height: s[1], x: -p[0] * s[0], y: -p[1] * s[1], xMin: -p[0] * s[0], yMin: -p[1] * s[1], xMax: (1 - p[0]) * s[0], yMax: (1 - p[1]) * s[1], size: new Vector2(s[0], s[1]) }; } },
  anchoredPosition3D: { get() { const a = this.anchoredPosition; return new Vector3(a.x, a.y, 0); }, set(v) { this.anchoredPosition = new Vector2(v.x, v.y); } },
  offsetMin: { get() { const r = this.gameObject.rect; return new Vector2(r.anchoredPosition[0] - r.sizeDelta[0] * r.pivot[0], r.anchoredPosition[1] - r.sizeDelta[1] * r.pivot[1]); } },
  offsetMax: { get() { const r = this.gameObject.rect; return new Vector2(r.anchoredPosition[0] + r.sizeDelta[0] * (1 - r.pivot[0]), r.anchoredPosition[1] + r.sizeDelta[1] * (1 - r.pivot[1])); } },
});
export function SetSizeWithCurrentAnchors(t, axis, size) { const r = t.gameObject.rect; const s = rectSize(t.gameObject); r.sizeDelta[axis] += size - s[axis]; uiDirty(); }

// local position <-> anchored position for UI objects
const _lpGet = Object.getOwnPropertyDescriptor(Transform.prototype, 'localPosition');
Object.defineProperty(Transform.prototype, 'localPosition', {
  get() {
    const r = this.gameObject.rect; if (!r || !this._parent || !this._parent.gameObject.rect) return _lpGet.get.call(this);
    const ref = anchorRef(this.gameObject); const z = -this.obj.position.z;
    return new Vector3(ref[0] + r.anchoredPosition[0], ref[1] + r.anchoredPosition[1], z);
  },
  set(v) {
    const r = this.gameObject.rect; if (!r || !this._parent || !this._parent.gameObject.rect) { _lpGet.set.call(this, v); return; }
    const ref = anchorRef(this.gameObject); r.anchoredPosition = [v.x - ref[0], v.y - ref[1]]; uiDirty();
  },
});
// world position for UI = canvas-space position (pixels, origin bottom-left of canvas)
const _pGet = Object.getOwnPropertyDescriptor(Transform.prototype, 'position');
Object.defineProperty(Transform.prototype, 'position', {
  get() {
    if (!this.gameObject.rect) return _pGet.get.call(this);
    const c = uiWorld(this.gameObject); return new Vector3(c[0], c[1], 0);
  },
  set(v) {
    if (!this.gameObject.rect || !this._parent) { _pGet.set.call(this, v); return; }
    const cur = uiWorld(this.gameObject); const ps = uiScaleChain(this._parent.gameObject);
    const cv = canvasOf(this.gameObject); const k = cv ? cv.scale || 1 : 1; ps[0] = (ps[0] || 1) * k; ps[1] = (ps[1] || 1) * k;
    const r = this.gameObject.rect; r.anchoredPosition = [r.anchoredPosition[0] + (v.x - cur[0]) / ps[0], r.anchoredPosition[1] + (v.y - cur[1]) / ps[1]]; uiDirty();
  },
});
// SetParent(p, worldPositionStays=true) for UI: remember screen position + world scale, re-apply in the new parent
Transform.rectCapture = (t) => { const ps = uiScaleChain(t._parent.gameObject); return { pos: t.position, sx: ps[0] || 1, sy: ps[1] || 1 }; };
Transform.rectRestore = (t, k) => {
  const ps = uiScaleChain(t._parent.gameObject), s = t.obj.scale;
  if (Math.abs((ps[0] || 1) - k.sx) > 1e-5 || Math.abs((ps[1] || 1) - k.sy) > 1e-5) s.set(s.x * k.sx / (ps[0] || 1), s.y * k.sy / (ps[1] || 1), s.z);
  t.position = k.pos;
};
function uiScaleChain(go) { let sx = 1, sy = 1, g = go; while (g && g.rect) { if (g.components.some((c) => c instanceof Canvas && c.isRoot)) break; sx *= g.obj.scale.x; sy *= g.obj.scale.y; const p = g.transform._parent; if (!p || !p.gameObject.rect || g.components.some((c) => c instanceof Canvas)) break; g = p.gameObject; } return [sx, sy]; }
function uiWorld(go) {
  // pivot position in canvas units (bottom-left origin) * canvas scale -> screen pixels
  let x = 0, y = 0, g = go;
  const chain = [];
  while (g && g.rect) { chain.push(g); if (g.components.some((c) => c instanceof Canvas)) break; g = g.transform._parent && g.transform._parent.gameObject; }
  // root canvas: pivot at screen center
  const cv = chain[chain.length - 1]; const cs = rectSize(cv); x = cs[0] * cv.rect.pivot[0]; y = cs[1] * cv.rect.pivot[1];
  let sx = 1, sy = 1;
  for (let i = chain.length - 2; i >= 0; i--) {
    const c = chain[i]; const lp = c.transform.localPosition; x += lp.x * sx; y += lp.y * sy; sx *= c.obj.scale.x; sy *= c.obj.scale.y;
  }
  const canvas = cv.components.find((c) => c instanceof Canvas); const k = canvas ? canvas.scale : 1;
  return [x * k, y * k];
}

export function rectSize(go) {
  const r = go.rect; if (!r) return [0, 0];
  const c = go.components.find((x) => x instanceof Canvas);
  if (c && c.isRoot) return [c.width, c.height];
  const p = go.transform._parent; const ps = p && p.gameObject.rect ? rectSize(p.gameObject) : [innerWidth, innerHeight];
  return [(r.anchorMax[0] - r.anchorMin[0]) * ps[0] + r.sizeDelta[0], (r.anchorMax[1] - r.anchorMin[1]) * ps[1] + r.sizeDelta[1]];
}
function anchorRef(go) {
  // anchor reference point relative to the parent's pivot, in parent units
  const r = go.rect; const p = go.transform._parent.gameObject; const ps = rectSize(p); const pp = p.rect.pivot;
  const ax = r.anchorMin[0] + (r.anchorMax[0] - r.anchorMin[0]) * r.pivot[0];
  const ay = r.anchorMin[1] + (r.anchorMax[1] - r.anchorMin[1]) * r.pivot[1];
  return [(ax - pp[0]) * ps[0], (ay - pp[1]) * ps[1]];
}

// keep DOM order/parent in sync with Transform hierarchy changes
Transform.hooks.push((t) => {
  const go = t.gameObject; if (!go.rect) return;
  const p = t._parent;
  if (!go._el) { if (p && p.gameObject._el) attachUI(go); return; }
  if (!p || !p.gameObject.rect) { go._el.remove(); return; }
  const pel = ensureEl(p.gameObject);
  const sibs = p._children; const idx = sibs.indexOf(t);
  let before = null; for (let i = idx + 1; i < sibs.length; i++) { const e = sibs[i].gameObject._el; if (e && e.parentNode === pel) { before = e; break; } }
  pel.insertBefore(go._el, before);
  go._canvas = go.components.find((c) => c instanceof Canvas) || go._canvas;
  _dirty = true;
});
let _dirty = true;
export function uiDirty() { _dirty = true; }

// ---------------------------------------------------------------- base graphic element
function ensureEl(go) {
  if (go._el) return go._el;
  const el = document.createElement('div'); el.className = 'ug'; el.dataset.name = go.name;
  go._el = el; el._go = go;
  const p = go.transform._parent;
  if (p && p.gameObject.rect && !go.components.some((c) => c instanceof Canvas && c.isRoot)) {
    const pel = ensureEl(p.gameObject);
    // keep sibling order
    const sibs = p._children; const idx = sibs.indexOf(go.transform);
    let before = null; for (let i = idx + 1; i < sibs.length; i++) if (sibs[i].gameObject._el && sibs[i].gameObject._el.parentNode === pel) { before = sibs[i].gameObject._el; break; }
    pel.insertBefore(el, before);
  }
  return el;
}

function layoutElement(go, ps) {
  const r = go.rect; const el = go._el; if (!el) return;
  const visible = go.activeInHierarchy;
  if (el._vis !== visible) { el.style.display = visible ? '' : 'none'; el._vis = visible; }
  if (!visible) return;
  let w, h, left, bottom;
  const cv = go._canvas;
  if (cv && cv.isRoot) { w = cv.width; h = cv.height; left = 0; bottom = 0; }
  else {
    w = (r.anchorMax[0] - r.anchorMin[0]) * ps[0] + r.sizeDelta[0];
    h = (r.anchorMax[1] - r.anchorMin[1]) * ps[1] + r.sizeDelta[1];
    left = r.anchorMin[0] * ps[0] + r.anchoredPosition[0] - r.sizeDelta[0] * r.pivot[0];
    bottom = r.anchorMin[1] * ps[1] + r.anchoredPosition[1] - r.sizeDelta[1] * r.pivot[1];
  }
  const top = ps[1] - (bottom + h);
  const s = go.obj.scale; const q = go.obj.quaternion;
  const rotZ = q.z || q.x || q.y ? -2 * Math.atan2(q.z, q.w) * 180 / Math.PI : 0;
  const key = left.toFixed(2) + ',' + top.toFixed(2) + ',' + w.toFixed(2) + ',' + h.toFixed(2) + ',' + s.x.toFixed(3) + ',' + s.y.toFixed(3) + ',' + rotZ.toFixed(2) + ',' + r.pivot[0] + ',' + r.pivot[1];
  if (el._key !== key) {
    el._key = key;
    el.style.left = left + 'px'; el.style.top = top + 'px'; el.style.width = Math.max(0, w) + 'px'; el.style.height = Math.max(0, h) + 'px';
    el.style.transformOrigin = (r.pivot[0] * 100) + '% ' + ((1 - r.pivot[1]) * 100) + '%';
    el.style.transform = (s.x !== 1 || s.y !== 1 || rotZ) ? `rotate(${rotZ}deg) scale(${s.x},${s.y})` : '';
    for (const c of go.components) if (c._onRect) c._onRect(w, h);
  }
  go._size = [w, h];
  for (const ch of go.transform._children) if (ch.gameObject.rect) layoutElement(ch.gameObject, [w, h]);
}

export function layoutUI() {
  for (const c of UI.canvases) if (c.isRoot && !c.destroyed) c._layout();
}

// ---------------------------------------------------------------- components
export class Canvas extends Component {
  static typeName = 'Canvas';
  Awake() {
    const go = this.gameObject;
    this.isRoot = !(go.transform._parent && canvasOf(go.transform._parent.gameObject));
    go._canvas = this;
    this.renderMode = this.props.m_RenderMode ?? 0;
    this.sortingOrder = this.props.m_SortingOrder || 0;
    const el = ensureEl(go);
    if (this.isRoot) {
      go.obj.scale.set(1, 1, 1); // screen-space canvases serialize scale 0
      el.classList.add('ug-canvas');
      UIROOT().appendChild(el);
      el.style.zIndex = String(10 + this.sortingOrder);
    }
    UI.canvases.add(this);
    this.width = innerWidth; this.height = innerHeight; this.scale = 1;
    buildSubtree(go);
  }
  get overrideSorting() { return !!this.props.m_OverrideSorting; }
  _layout() {
    const sc = this.gameObject.GetComponent(CanvasScaler);
    let scale = 1;
    if (sc && sc.props.m_UiScaleMode === 1) {
      const ref = sc.props.m_ReferenceResolution || { x: 1920, y: 1080 };
      const m = sc.props.m_MatchWidthOrHeight || 0;
      const lw = Math.log2(innerWidth / ref.x), lh = Math.log2(innerHeight / ref.y);
      scale = Math.pow(2, lw + (lh - lw) * m);
      if (sc.props.m_ScreenMatchMode === 1) scale = Math.min(innerWidth / ref.x, innerHeight / ref.y);
      if (sc.props.m_ScreenMatchMode === 2) scale = Math.max(innerWidth / ref.x, innerHeight / ref.y);
    } else if (sc) scale = sc.props.m_ScaleFactor || 1;
    this.scale = scale; this.width = innerWidth / scale; this.height = innerHeight / scale;
    const el = this.gameObject._el;
    const k = scale.toFixed(4);
    if (el._sc !== k) { el._sc = k; el.style.transform = `scale(${scale})`; el.style.width = this.width + 'px'; el.style.height = this.height + 'px'; el._key = null; }
    const vis = this.gameObject.activeInHierarchy && this._enabled;
    el.style.display = vis ? '' : 'none'; el._vis = vis;
    if (!vis) return;
    for (const ch of this.gameObject.transform._children) if (ch.gameObject.rect) layoutElement(ch.gameObject, [this.width, this.height]);
  }
  OnEnable() { if (this.gameObject._el) this.gameObject._el.style.display = ''; }
  OnDisable() { if (this.gameObject._el && this.isRoot) this.gameObject._el.style.display = 'none'; }
  _dispose() { UI.canvases.delete(this); if (this.gameObject._el) this.gameObject._el.remove(); }
}

const UI_TYPES = new Set();
function buildSubtree(go) {
  ensureEl(go);
  for (const c of go.components) { if (c._buildDom) c._buildDom(); else if (!c._uiWired) { c._uiWired = true; wirePointerHandlers(c); } }
  for (const ch of go.transform._children) if (ch.gameObject.rect) buildSubtree(ch.gameObject);
}

// Called for objects instantiated under an existing canvas at runtime
export function attachUI(go) {
  if (!go.rect) return;
  const cv = canvasOf(go); if (!cv) return;
  buildSubtree(go);
  uiDirty();
}

export class CanvasScaler extends Component { static typeName = 'CanvasScaler'; }
export class GraphicRaycaster extends Component { static typeName = 'GraphicRaycaster'; }
export class CanvasGroup extends Component {
  static typeName = 'CanvasGroup';
  constructor(go, p) { super(go, p); this._alpha = p.m_Alpha ?? 1; this.interactable = !!(p.m_Interactable ?? 1); this._blocks = !!(p.m_BlocksRaycasts ?? 1); }
  _buildDom() { this._apply(); }
  get alpha() { return this._alpha; } set alpha(v) { this._alpha = v; this._apply(); }
  get blocksRaycasts() { return this._blocks; } set blocksRaycasts(v) { this._blocks = v; this._apply(); }
  _apply() { const el = ensureEl(this.gameObject); el.style.opacity = this._alpha; el.style.pointerEvents = this._blocks ? '' : 'none'; if (!this._blocks) el.classList.add('ug-noblock'); else el.classList.remove('ug-noblock'); }
}

// ---- Graphic base
class Graphic extends Component {
  constructor(go, p) {
    super(go, p);
    const c = p.m_Color || { r: 1, g: 1, b: 1, a: 1 };
    this._color = new Color(c.r, c.g, c.b, c.a);
    this.raycastTarget = !!p.m_RaycastTarget;
    this.materialRef = p.m_Material || null;
  }
  get color() { return this._color; }
  set color(c) { this._color = new Color(c.r, c.g, c.b, c.a ?? 1); this._render(); }
  get material() { return this.materialRef; }
  set material(m) { this.materialRef = m; this._render(); }
  CrossFadeAlpha(a, d) { const c = this._color.clone ? this._color : new Color(this._color.r, this._color.g, this._color.b, this._color.a); this.color = new Color(c.r, c.g, c.b, a); }
  SetAllDirty() { this._render(); }
  _el() { return ensureEl(this.gameObject); }
  OnEnable() { this._render && this._render(); }
  _grayscale() { const d = getMaterialDef(this.materialRef); return d && /grayscale/i.test(d.shader); }
}

export class Image extends Graphic {
  static typeName = 'Image';
  constructor(go, p) {
    super(go, p);
    this._sprite = p.m_Sprite || null; this._type = p.m_Type || 0; this._fillAmount = p.m_FillAmount ?? 1; this.fillMethod = p.m_FillMethod ?? 4; this.fillOrigin = p.m_FillOrigin || 0;
    this.fillClockwise = !!(p.m_FillClockwise ?? 1); this.preserveAspect = !!p.m_PreserveAspect; this.fillCenter = !!(p.m_FillCenter ?? 1); this.ppuMul = p.m_PixelsPerUnitMultiplier || 1;
  }
  _buildDom() {
    const el = this._el();
    if (!this.img) { this.img = document.createElement('div'); this.img.className = 'ug-img'; el.insertBefore(this.img, el.firstChild); }
    if (this.raycastTarget) el.classList.add('ug-hit');
    this._render();
  }
  get sprite() { return this._sprite; } set sprite(s) { this._sprite = s; this._render(); }
  get overrideSprite() { return this._sprite; } set overrideSprite(s) { this.sprite = s; }
  get fillAmount() { return this._fillAmount; } set fillAmount(v) { v = Mathf.Clamp01(v); if (v === this._fillAmount) return; this._fillAmount = v; this._renderFill(); }
  get type() { return this._type; } set type(v) { this._type = v; this._render(); }
  SetNativeSize() { const sd = spriteDef(this._sprite); if (sd && sd.rect) { this.gameObject.rect.sizeDelta = [sd.rect[2], sd.rect[3]]; uiDirty(); } }
  _onRect() { if (this._type === 1) this._render(); }
  _render() {
    if (!this.img) return;
    const st = this.img.style; const c = this._color;
    const visible = this._enabled;
    st.display = visible ? '' : 'none';
    const sd = spriteDef(this._sprite);
    if (!sd) {
      st.backgroundImage = ''; st.webkitMaskImage = st.maskImage = '';
      st.backgroundColor = this._sprite ? 'transparent' : `rgba(${c.r * 255 | 0},${c.g * 255 | 0},${c.b * 255 | 0},${c.a})`;
      this._renderFill(); return;
    }
    const url = textureUrl(sd.tex); const [tw, th] = sd.size || [sd.rect[2], sd.rect[3]];
    const [x, y, w, h] = sd.rect;
    const tinted = Math.abs(c.r - 1) + Math.abs(c.g - 1) + Math.abs(c.b - 1) > 0.01;
    st.opacity = c.a;
    if (this._type === 1 && (sd.border[0] || sd.border[1] || sd.border[2] || sd.border[3])) {
      // 9-slice via border-image on the sprite sub-rect: use a canvas cut of the sprite
      const cut = spriteDataUrl(sd, url, tinted ? c : null);
      st.backgroundImage = ''; st.backgroundColor = 'transparent';
      const [bl, bb, br, bt] = sd.border; // x=left, y=bottom, z=right, w=top
      const k = 1 / this.ppuMul;
      st.borderStyle = 'solid'; st.borderWidth = `${bt * k}px ${br * k}px ${bb * k}px ${bl * k}px`;
      st.borderImageSource = cut ? `url(${cut})` : `url(${url})`;
      st.borderImageSlice = `${bt} ${br} ${bb} ${bl}${this.fillCenter ? ' fill' : ''}`;
      st.borderImageRepeat = 'stretch';
      st.webkitMaskImage = st.maskImage = '';
      st.boxSizing = 'border-box';
    } else {
      st.borderStyle = 'none'; st.borderImageSource = '';
      const bs = `${(tw / w) * 100}% ${(th / h) * 100}%`;
      const px = tw === w ? 0 : (x / (tw - w)) * 100, py = th === h ? 0 : ((th - (y + h)) / (th - h)) * 100;
      const bp = `${px}% ${py}%`;
      st.backgroundImage = `url(${url})`; st.backgroundSize = bs; st.backgroundPosition = bp;
      if (this.preserveAspect) {
        // emulate preserveAspect by inner box
        const go = this.gameObject; const sz = go._size || [w, h]; const ar = w / h; let iw = sz[0], ih = sz[1];
        if (iw / ih > ar) iw = ih * ar; else ih = iw / ar;
        st.inset = 'auto'; st.left = ((sz[0] - iw) / 2) + 'px'; st.top = ((sz[1] - ih) / 2) + 'px'; st.width = iw + 'px'; st.height = ih + 'px';
      }
      if (tinted) {
        st.backgroundColor = `rgb(${c.r * 255 | 0},${c.g * 255 | 0},${c.b * 255 | 0})`; st.backgroundBlendMode = 'multiply';
        st.webkitMaskImage = st.maskImage = `url(${url})`; st.webkitMaskSize = st.maskSize = bs; st.webkitMaskPosition = st.maskPosition = bp; st.webkitMaskRepeat = st.maskRepeat = 'no-repeat';
      } else { st.backgroundColor = 'transparent'; st.backgroundBlendMode = ''; st.webkitMaskImage = st.maskImage = ''; }
    }
    st.filter = this._grayscale() ? 'grayscale(1)' : '';
    this._renderFill();
  }
  _renderFill() {
    if (!this.img) return;
    const st = this.img.style;
    if (this._type !== 3 || this._fillAmount >= 1) { st.clipPath = ''; return; }
    const f = this._fillAmount * 100;
    if (this.fillMethod === 0) st.clipPath = this.fillOrigin === 1 ? `inset(0 0 0 ${100 - f}%)` : `inset(0 ${100 - f}% 0 0)`;
    else if (this.fillMethod === 1) st.clipPath = this.fillOrigin === 1 ? `inset(0 0 ${100 - f}% 0)` : `inset(${100 - f}% 0 0 0)`;
    else {
      // radial: approximate with conic polygon. Angles in CSS space (y down, increasing = clockwise on screen).
      // Unity origins: Radial90 BottomLeft/TopLeft/TopRight/BottomRight, Radial180 Bottom/Left/Top/Right,
      // Radial360 Bottom/Right/Top/Left. Radial90/180 sweep their quadrant/half from q0 (clockwise) or from its far end (counter-clockwise).
      const P = Math.PI, o = this.fillOrigin & 3, cw = this.fillClockwise;
      let cx = 50, cy = 50, start, span;
      if (this.fillMethod === 2) { [cx, cy] = [[0, 100], [0, 0], [100, 0], [100, 100]][o]; span = P / 2; start = [-P / 2, 0, P / 2, P][o] + (cw ? 0 : span); }
      else if (this.fillMethod === 3) { [cx, cy] = [[50, 100], [0, 50], [50, 0], [100, 50]][o]; span = P; start = [P, -P / 2, 0, P / 2][o] + (cw ? 0 : span); }
      else { span = 2 * P; start = [P / 2, 0, -P / 2, P][o]; }
      const n = 32; const pts = [`${cx}% ${cy}%`]; const total = this._fillAmount * span;
      for (let i = 0; i <= n; i++) { const a = start + (cw ? 1 : -1) * total * i / n; pts.push(`${cx + 150 * Math.cos(a)}% ${cy + 150 * Math.sin(a)}%`); }
      st.clipPath = `polygon(${pts.join(',')})`;
    }
  }
  _dispose() { if (this.img) this.img.remove(); }
}

const _cutCache = new Map();
function spriteDataUrl(sd, url, tint) {
  const key = url + '|' + sd.rect.join(',') + (tint ? '|' + tint.r + tint.g + tint.b : '');
  if (_cutCache.has(key)) return _cutCache.get(key);
  _cutCache.set(key, null);
  const img = new window.Image(); img.src = url;
  img.onload = () => {
    const [x, y, w, h] = sd.rect; const cv = document.createElement('canvas'); cv.width = w; cv.height = h;
    const g = cv.getContext('2d'); g.drawImage(img, x, img.height - y - h, w, h, 0, 0, w, h);
    if (tint) { g.globalCompositeOperation = 'multiply'; g.fillStyle = `rgb(${tint.r * 255 | 0},${tint.g * 255 | 0},${tint.b * 255 | 0})`; g.fillRect(0, 0, w, h); g.globalCompositeOperation = 'destination-in'; g.drawImage(img, x, img.height - y - h, w, h, 0, 0, w, h); }
    _cutCache.set(key, cv.toDataURL());
    for (const c of UI.canvases) for (const im of c.gameObject.GetComponentsInChildren(Image, true)) if (im._type === 1 && im._sprite && spriteDef(im._sprite) === sd) im._render();
  };
  return null;
}

export class RawImage extends Graphic {
  static typeName = 'RawImage';
  constructor(go, p) { super(go, p); this._texture = p.m_Texture || null; this.uvRect = p.m_UVRect || { x: 0, y: 0, width: 1, height: 1 }; }
  _buildDom() { const el = this._el(); if (!this.img) { this.img = document.createElement('div'); this.img.className = 'ug-img'; el.insertBefore(this.img, el.firstChild); } if (this.raycastTarget) el.classList.add('ug-hit'); this._render(); }
  get texture() { return this._texture; } set texture(t) { this._texture = t; this._render(); }
  _render() {
    if (!this.img) return; const st = this.img.style; const url = typeof this._texture === 'string' ? (this._texture.startsWith('data:') || this._texture.startsWith('blob:') ? this._texture : textureUrl(this._texture)) : null;
    st.display = this._enabled ? '' : 'none';
    st.backgroundImage = url ? `url(${url})` : ''; st.backgroundSize = `${100 / this.uvRect.width}% ${100 / this.uvRect.height}%`;
    st.opacity = this._color.a;
  }
}

// rich text -> html
function richText(s) {
  s = String(s ?? '').replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;');
  s = s.replace(/&lt;color=(#?[0-9a-zA-Z]+)&gt;/g, (m, c) => `<span style="color:${c.startsWith('#') && c.length === 9 ? '#' + c.slice(1, 7) : c}">`).replace(/&lt;\/color&gt;/g, '</span>');
  s = s.replace(/&lt;size=(\d+)&gt;/g, (m, z) => `<span style="font-size:${z}px">`).replace(/&lt;\/size&gt;/g, '</span>');
  s = s.replace(/&lt;(\/?)(b|i)&gt;/g, '<$1$2>');
  return s.replace(/\n/g, '<br>');
}
const ALIGN = [['flex-start', 'flex-start', 'left'], ['flex-start', 'center', 'center'], ['flex-start', 'flex-end', 'right'], ['center', 'flex-start', 'left'], ['center', 'center', 'center'], ['center', 'flex-end', 'right'], ['flex-end', 'flex-start', 'left'], ['flex-end', 'center', 'center'], ['flex-end', 'flex-end', 'right']];

export class Text extends Graphic {
  static typeName = 'Text';
  constructor(go, p) {
    super(go, p);
    const fd = p.m_FontData || {};
    this._text = p.m_Text == null ? '' : String(p.m_Text);
    this._fontSize = fd.m_FontSize || 14; this.alignment = fd.m_Alignment || 0; this.bestFit = !!fd.m_BestFit; this.minSize = fd.m_MinSize || 1; this.maxSize = fd.m_MaxSize || 300;
    this.fontStyle = fd.m_FontStyle || 0; this.lineSpacing = fd.m_LineSpacing || 1; this.hOverflow = fd.m_HorizontalOverflow || 0; this.vOverflow = fd.m_VerticalOverflow || 0;
  }
  _buildDom() {
    const el = this._el();
    if (!this.box) { this.box = document.createElement('div'); this.box.className = 'ug-txt'; this.span = document.createElement('span'); this.box.appendChild(this.span); el.appendChild(this.box); }
    if (this.raycastTarget) el.classList.add('ug-hit');
    this._render();
  }
  get text() { return this._text; } set text(v) { v = v == null ? '' : String(v); if (v === this._text) return; this._text = v; this._renderText(); }
  get fontSize() { return this._fontSize; } set fontSize(v) { this._fontSize = v; this._render(); }
  get preferredWidth() { return this.span ? this.span.scrollWidth : this._text.length * this._fontSize * 0.5; }
  get preferredHeight() { return this.span ? this.span.scrollHeight : this._fontSize; }
  _renderText() { if (!this.span) return; this.span.innerHTML = richText(this._text); this._wrapMode(); if (this.bestFit) this._fit(); }
  _onRect(w, h) {
    this._w = w; this._h = h;
    this._wrapMode();
    if (this.bestFit) this._fit();
  }
  // browser font metrics are slightly wider than Unity's: a single-line box must not wrap a label that only
  // just overflows, but a long sentence in such a box (e.g. tutorial text) still wraps like Unity's Wrap mode
  _wrapMode() {
    if (!this.box || this.hOverflow === 1 || !this._w) return;
    const st = this.box.style;
    if (this._h >= this._fontSize * 1.9 || /\n/.test(this._text)) { st.whiteSpace = 'pre-wrap'; return; }
    st.whiteSpace = 'pre';
    if (!this.bestFit && this.span.scrollWidth > this._w * 1.15) st.whiteSpace = 'pre-wrap'; // bestFit shrinks instead
  }
  _fit() {
    if (!this.span || !this._w) return;
    let fs = this.maxSize; this.span.style.fontSize = fs + 'px';
    const cs = this.span; let guard = 0;
    while (fs > this.minSize && (cs.scrollWidth > this._w + 1 || cs.scrollHeight > this._h + 1) && guard++ < 60) { fs = Math.max(this.minSize, fs * 0.92); cs.style.fontSize = fs + 'px'; }
  }
  _render() {
    if (!this.box) return;
    const st = this.box.style; const c = this._color;
    st.display = this._enabled ? '' : 'none';
    st.color = `rgba(${c.r * 255 | 0},${c.g * 255 | 0},${c.b * 255 | 0},${c.a})`;
    const [v, h, ta] = ALIGN[this.alignment] || ALIGN[0];
    st.alignItems = v; st.justifyContent = h; this.span.style.textAlign = ta;
    this.span.style.fontSize = this._fontSize + 'px'; this.span.style.lineHeight = (this.lineSpacing * 1.05) + '';
    this.span.style.fontWeight = this.fontStyle & 1 ? 'bold' : 'normal'; this.span.style.fontStyle = this.fontStyle & 2 ? 'italic' : 'normal';
    st.whiteSpace = this.hOverflow === 1 ? 'pre' : 'pre-wrap';
    if (this.hOverflow === 1) { this.span.style.width = 'auto'; st.justifyContent = h; }
    // Outline / Shadow effects
    const fx = this.gameObject.components.filter((x) => x instanceof Shadow);
    st.textShadow = fx.map((e) => e._css()).join(',');
    this._renderText();
  }
  _dispose() { if (this.box) this.box.remove(); }
}

export class Shadow extends Component {
  static typeName = 'Shadow';
  constructor(go, p) { super(go, p); const c = p.m_EffectColor || { r: 0, g: 0, b: 0, a: 0.5 }; this.c = c; this.d = p.m_EffectDistance || { x: 1, y: -1 }; }
  _css() { const c = this.c; const col = `rgba(${c.r * 255 | 0},${c.g * 255 | 0},${c.b * 255 | 0},${c.a})`; return `${this.d.x}px ${-this.d.y}px 0 ${col}`; }
}
export class Outline extends Shadow {
  static typeName = 'Outline';
  _css() { const c = this.c; const col = `rgba(${c.r * 255 | 0},${c.g * 255 | 0},${c.b * 255 | 0},${c.a})`; const x = this.d.x, y = this.d.y; return [[x, y], [-x, y], [x, -y], [-x, -y]].map(([a, b]) => `${a}px ${b}px 0 ${col}`).join(','); }
}

// ---- events
export class UnityEvent {
  constructor(persistent, inst) { this.persistent = persistent || []; this.inst = inst; this.listeners = []; }
  AddListener(fn) { this.listeners.push(fn); }
  RemoveListener(fn) { const i = this.listeners.indexOf(fn); if (i >= 0) this.listeners.splice(i, 1); }
  RemoveAllListeners() { this.listeners.length = 0; }
  Invoke(...args) {
    for (const call of this.persistent) invokePersistent(call, this.inst, args);
    for (const fn of this.listeners.slice()) { try { fn(...args); } catch (e) { console.error(e); } }
  }
}
export function invokePersistent(call, inst, dynArgs = []) {
  if (call.m_CallState === 0) return;
  const target = inst ? inst.resolve(call.m_Target) : null; if (!target) return;
  const a = call.m_Arguments || {};
  let arg;
  switch (call.m_Mode) { case 0: arg = dynArgs[0]; break; case 2: arg = inst.resolve(a.m_ObjectArgument); break; case 3: arg = a.m_IntArgument; break; case 4: arg = a.m_FloatArgument; break; case 5: arg = a.m_StringArgument; break; case 6: arg = !!a.m_BoolArgument; break; }
  const m = call.m_MethodName;
  try {
    if (m === 'SetActive' && target.SetActive) return target.SetActive(arg);
    if (m === 'set_enabled') { target.enabled = arg; return; }
    if (typeof target[m] === 'function') return call.m_Mode === 1 ? target[m]() : target[m](arg);
    // try the method on the GameObject's components
    const go = target.gameObject || target;
    for (const c of go.components || []) if (typeof c[m] === 'function') return call.m_Mode === 1 ? c[m]() : c[m](arg);
    console.warn('UI call: missing method', m, 'on', target.constructor && target.constructor.name, go.name);
  } catch (e) { console.error('UI call', m, e); }
}

export class Selectable extends Component {
  constructor(go, p) {
    super(go, p);
    this._interactable = !!(p.m_Interactable ?? 1);
    this.transition = p.m_Transition ?? 1; this.colors = p.m_Colors; this.targetGraphicRef = p.m_TargetGraphic;
  }
  get interactable() { return this._interactable; } set interactable(v) { this._interactable = !!v; this._state(); }
  get targetGraphic() { return this.ref(this.targetGraphicRef); }
  get image() { return this.targetGraphic; }
  _buildDom() {
    const el = ensureEl(this.gameObject); el.classList.add('ug-hit'); this.el = el;
    el.addEventListener('pointerdown', (e) => { if (!this._ok()) return; this._pressed = true; this._state(); this.onDown && this.onDown(e); });
    el.addEventListener('pointerup', (e) => { if (this._pressed && this._ok()) this.onUp && this.onUp(e); this._pressed = false; this._state(); });
    el.addEventListener('pointerleave', () => { if (this._pressed) { this._pressed = false; this._state(); } });
    this._state();
  }
  _ok() { return this._interactable && this._enabled && this.gameObject.activeInHierarchy && groupsInteractable(this.gameObject); }
  _state() {
    const g = this.targetGraphic; if (!g || !this.colors || this.transition !== 1) return;
    const c = !this._interactable ? this.colors.m_DisabledColor : this._pressed ? this.colors.m_PressedColor : this.colors.m_NormalColor;
    const el = g.gameObject._el; if (!el) return;
    const k = (c.r + c.g + c.b) / 3; el.style.filter = k < 0.99 ? `brightness(${k})` : ''; el.style.opacity = !this._interactable ? c.a : '';
  }
}
function groupsInteractable(go) { let g = go; while (g) { const cg = g.components.find((c) => c instanceof CanvasGroup); if (cg && !cg.interactable) return false; g = g.transform._parent && g.transform._parent.gameObject; } return true; }

export class Button extends Selectable {
  static typeName = 'Button';
  constructor(go, p) { super(go, p); this.onClick = new UnityEvent(p.m_OnClick && p.m_OnClick.m_PersistentCalls && p.m_OnClick.m_PersistentCalls.m_Calls, null); }
  onDeserialize() { this.onClick.inst = this._inst; }
  onUp() { UI.clickSound && UI.clickSound(this); this.onClick.Invoke(); }
  Select() { }
}

export class Toggle extends Selectable {
  static typeName = 'Toggle';
  constructor(go, p) { super(go, p); this._isOn = !!p.m_IsOn; this.graphicRef = p.graphic; this.onValueChanged = new UnityEvent(p.onValueChanged && p.onValueChanged.m_PersistentCalls && p.onValueChanged.m_PersistentCalls.m_Calls, null); }
  onDeserialize() { this.onValueChanged.inst = this._inst; }
  Awake() { this._apply(); }
  get isOn() { return this._isOn; } set isOn(v) { v = !!v; if (v === this._isOn) return; this._isOn = v; this._apply(); this.onValueChanged.Invoke(v); }
  _apply() { const g = this.ref(this.graphicRef); if (g && g.gameObject) { const el = ensureEl(g.gameObject); el.style.visibility = this._isOn ? '' : 'hidden'; } }
  onUp() { this.isOn = !this._isOn; }
}

export class Slider extends Selectable {
  static typeName = 'Slider';
  constructor(go, p) { super(go, p); this._value = p.m_Value ?? 0; this.minValue = p.m_MinValue ?? 0; this.maxValue = p.m_MaxValue ?? 1; this.fillRectRef = p.m_FillRect; this.onValueChanged = new UnityEvent(p.m_OnValueChanged && p.m_OnValueChanged.m_PersistentCalls && p.m_OnValueChanged.m_PersistentCalls.m_Calls, null); }
  onDeserialize() { this.onValueChanged.inst = this._inst; }
  get value() { return this._value; } set value(v) { this._value = Mathf.Clamp(v, this.minValue, this.maxValue); this._apply(); this.onValueChanged.Invoke(this._value); }
  _apply() { const f = this.ref(this.fillRectRef); if (f && f.gameObject && f.gameObject.rect) { f.gameObject.rect.anchorMax = [(this._value - this.minValue) / (this.maxValue - this.minValue || 1), f.gameObject.rect.anchorMax[1]]; uiDirty(); } }
  Awake() { this._apply(); }
  onDown(e) { this._drag(e); const mv = (ev) => this._drag(ev); const up = () => { removeEventListener('pointermove', mv); removeEventListener('pointerup', up); }; addEventListener('pointermove', mv); addEventListener('pointerup', up); }
  _drag(e) { const r = this.el.getBoundingClientRect(); const t = Mathf.Clamp01((e.clientX - r.left) / r.width); this.value = this.minValue + t * (this.maxValue - this.minValue); }
}

// Unity Scrollbar: drives the handle's anchors from value/size (UpdateVisuals); pressing beside the handle pages
// toward the pointer (ClickRepeat), dragging moves the handle (UpdateDrag). Direction: 0 LeftToRight, 1 RightToLeft,
// 2 BottomToTop, 3 TopToBottom
export class Scrollbar extends Selectable {
  static typeName = 'Scrollbar';
  constructor(go, p) {
    super(go, p);
    this._value = Mathf.Clamp01(p.m_Value ?? 0); this._size = Mathf.Clamp01(p.m_Size ?? 0.2); this.direction = p.m_Direction || 0; this.numberOfSteps = p.m_NumberOfSteps || 0; this.handleRectRef = p.m_HandleRect;
    this.onValueChanged = new UnityEvent(p.m_OnValueChanged && p.m_OnValueChanged.m_PersistentCalls && p.m_OnValueChanged.m_PersistentCalls.m_Calls, null);
  }
  onDeserialize() { this.onValueChanged.inst = this._inst; }
  Awake() { this._apply(); }
  get handleRect() { return this.ref(this.handleRectRef); }
  get _axis() { return this.direction >= 2 ? 1 : 0; }
  get _reverse() { return this.direction === 1 || this.direction === 3; }
  get value() { const n = this.numberOfSteps; return n > 1 ? Math.round(this._value * (n - 1)) / (n - 1) : this._value; }
  set value(v) { this._set(v, true); }
  SetValueWithoutNotify(v) { this._set(v, false); }
  get size() { return this._size; } set size(s) { s = Mathf.Clamp01(s); if (s === this._size) return; this._size = s; this._apply(); }
  _set(v, notify) { const prev = this.value; this._value = Mathf.Clamp01(v); if (prev === this.value) return; this._apply(); if (notify) this.onValueChanged.Invoke(this.value); }
  _apply() {
    const h = this.handleRect; const r = h && h.gameObject && h.gameObject.rect; if (!r) return;
    const a = this._axis, mv = this.value * (1 - this._size); const mn = [0, 0], mx = [1, 1];
    if (this._reverse) { mn[a] = 1 - mv - this._size; mx[a] = 1 - mv; } else { mn[a] = mv; mx[a] = mv + this._size; }
    if (r.anchorMin[0] === mn[0] && r.anchorMin[1] === mn[1] && r.anchorMax[0] === mx[0] && r.anchorMax[1] === mx[1]) return;
    r.anchorMin = mn; r.anchorMax = mx; uiDirty();
  }
  _buildDom() { super._buildDom(); this.el.addEventListener('pointerdown', (e) => { e._zdScrollbar = true; }); }
  _hEl() { const h = this.handleRect; return h && h.gameObject && h.gameObject._el; }
  _inHandle(x, y) { const el = this._hEl(); if (!el) return false; const b = el.getBoundingClientRect(); return x >= b.left && x <= b.right && y >= b.top && y <= b.bottom; }
  _step(x, y) { // ClickRepeat: one page (size) toward the pointer
    const el = this._hEl(); if (!el) return; const b = el.getBoundingClientRect();
    const neg = this._axis ? y > (b.top + b.bottom) / 2 : x < (b.left + b.right) / 2; const ch = neg ? this._size : -this._size;
    this.value = Math.round(Mathf.Clamp01(this._value + (this._reverse ? ch : -ch)) * 10000) / 10000;
  }
  _dragTo(x, y, off) { // UpdateDrag: handle centre follows the cursor (minus the grab offset) inside the sliding area
    const h = this.handleRect; const p = h && h.gameObject.transform._parent; const cel = p && p.gameObject._el; if (!cel) return;
    const c = cel.getBoundingClientRect(); const len = this._axis ? c.height : c.width; const rem = len * (1 - this._size); if (rem <= 0) return;
    const cur = this._axis ? c.bottom - y : x - c.left; const t = (cur - off - len * this._size / 2) / rem;
    this.value = this._reverse ? 1 - t : t;
  }
  onDown(e) {
    if (e.button) return;
    const sx = e.clientX, sy = e.clientY; let px = sx, py = sy, dragging = false, off = 0, alive = true;
    const repeat = () => { if (!alive || dragging) return; if (!this._inHandle(px, py)) this._step(px, py); requestAnimationFrame(repeat); };
    if (!this._inHandle(sx, sy)) repeat();
    const mv = (m) => {
      px = m.clientX; py = m.clientY;
      if (!dragging && Math.hypot(px - sx, py - sy) > 10) {
        dragging = true; off = 0;
        if (this._inHandle(sx, sy)) { const b = this._hEl().getBoundingClientRect(); off = this._axis ? (b.top + b.bottom) / 2 - sy : sx - (b.left + b.right) / 2; }
      }
      if (dragging) this._dragTo(px, py, off);
    };
    const up = () => { alive = false; removeEventListener('pointermove', mv); removeEventListener('pointerup', up); removeEventListener('pointercancel', up); };
    addEventListener('pointermove', mv); addEventListener('pointerup', up); addEventListener('pointercancel', up);
  }
}

// EventTrigger: eventID (PointerEnter=0, PointerExit=1, PointerDown=2, PointerUp=3, PointerClick=4)
export class EventTrigger extends Component {
  static typeName = 'EventTrigger';
  _buildDom() {
    const el = ensureEl(this.gameObject); el.classList.add('ug-hit');
    const fire = (id) => { for (const d of this.props.m_Delegates || []) if (d.eventID === id) for (const call of (d.callback.m_PersistentCalls.m_Calls || [])) invokePersistent(call, this._inst, [{}]); };
    let inside = false;
    el.addEventListener('pointerdown', (e) => { el.releasePointerCapture && el.releasePointerCapture(e.pointerId); if (!inside) { inside = true; fire(0); } fire(2); });
    el.addEventListener('pointerenter', (e) => { if (e.buttons || e.pointerType === 'touch') { if (!inside) { inside = true; fire(0); } } });
    el.addEventListener('pointerleave', () => { if (inside) { inside = false; fire(1); } });
    el.addEventListener('pointerup', () => { fire(3); fire(4); if (inside) { inside = false; fire(1); } });
    el.addEventListener('pointercancel', () => { if (inside) { inside = false; fire(1); } });
  }
}

// Scripts implementing IPointerDownHandler / IPointerClickHandler / IPointerUpHandler / drag handlers
export function wirePointerHandlers(comp) {
  const el = ensureEl(comp.gameObject);
  const has = (n) => typeof comp[n] === 'function';
  if (!(has('OnPointerDown') || has('OnPointerClick') || has('OnPointerUp') || has('OnDrag') || has('OnBeginDrag') || has('OnPointerEnter'))) return;
  el.classList.add('ug-hit');
  const ev = (e) => ({ position: new Vector2(e.clientX, innerHeight - e.clientY), pointerId: e.pointerId, delta: new Vector2(e.movementX || 0, -(e.movementY || 0)) });
  let down = false, dragging = false, sx = 0, sy = 0;
  el.addEventListener('pointerdown', (e) => {
    if (!comp.isActiveAndEnabled) return; down = true; dragging = false; sx = e.clientX; sy = e.clientY;
    has('OnPointerDown') && comp.OnPointerDown(ev(e));
    const mv = (m) => {
      if (!down) return;
      if (!dragging && Math.hypot(m.clientX - sx, m.clientY - sy) > 10) { dragging = true; has('OnBeginDrag') && comp.OnBeginDrag(ev(m)); }
      if (dragging) has('OnDrag') && comp.OnDrag(ev(m));
    };
    const up = (u) => {
      removeEventListener('pointermove', mv); removeEventListener('pointerup', up);
      if (!down) return; down = false;
      has('OnPointerUp') && comp.OnPointerUp(ev(u));
      if (dragging) has('OnEndDrag') && comp.OnEndDrag(ev(u)); else has('OnPointerClick') && comp.OnPointerClick(ev(u));
    };
    addEventListener('pointermove', mv); addEventListener('pointerup', up);
  });
  el.addEventListener('pointerenter', (e) => has('OnPointerEnter') && comp.OnPointerEnter(ev(e)));
  el.addEventListener('pointerleave', (e) => has('OnPointerExit') && comp.OnPointerExit(ev(e)));
}

// ---- layout
export class LayoutElement extends Component { static typeName = 'LayoutElement'; get ignoreLayout() { return !!this.props.m_IgnoreLayout; } }
class LayoutGroup extends Component {
  get padding() { const p = this.props.m_Padding || {}; return { left: p.m_Left || 0, right: p.m_Right || 0, top: p.m_Top || 0, bottom: p.m_Bottom || 0 }; }
  get spacing() { return this.props.m_Spacing || 0; } set spacing(v) { this.props.m_Spacing = v; uiDirty(); }
  _children() { return this.transform._children.filter((c) => c.gameObject.activeInHierarchy && c.gameObject.rect && !(c.gameObject.GetComponent(LayoutElement) || {}).ignoreLayout); }
  _arrange(axis) {
    const go = this.gameObject; const size = rectSize(go); const pad = this.padding; const sp = this.spacing;
    const kids = this._children(); if (!kids.length) return;
    const ctrlMain = axis === 0 ? this.props.m_ChildControlWidth : this.props.m_ChildControlHeight;
    const ctrlCross = axis === 0 ? this.props.m_ChildControlHeight : this.props.m_ChildControlWidth;
    const expMain = axis === 0 ? this.props.m_ChildForceExpandWidth : this.props.m_ChildForceExpandHeight;
    const expCross = axis === 0 ? this.props.m_ChildForceExpandHeight : this.props.m_ChildForceExpandWidth;
    const inner = axis === 0 ? size[0] - pad.left - pad.right : size[1] - pad.top - pad.bottom;
    const innerCross = axis === 0 ? size[1] - pad.top - pad.bottom : size[0] - pad.left - pad.right;
    // Unity: a controlled axis uses the child's preferred size (wrapped text height, nested group size), and with
    // m_ChildScale* the child's localScale counts; extra space is shared out only when force-expand is on
    const scMain = axis === 0 ? this.props.m_ChildScaleWidth : this.props.m_ChildScaleHeight;
    const scales = kids.map((k) => { const s = k.gameObject.obj.scale; return Math.abs(axis === 0 ? s.x : s.y) || 1; });
    const sizes = kids.map((k) => { const s = preferredSize(k.gameObject, !!ctrlMain); return axis === 0 ? s : [s[1], s[0]]; });
    const prefs = sizes.map((s, i) => s[0] * (scMain ? scales[i] : 1));
    const P = prefs.reduce((a, b) => a + b, 0) + sp * (kids.length - 1);
    let mains = prefs;
    if (ctrlMain) {
      if (inner > P && expMain) { const extra = (inner - P) / kids.length; mains = prefs.map((p) => p + extra); }
      else if (inner < P && !go.GetComponent(ContentSizeFitter)) { const k = Math.max(0, inner - sp * (kids.length - 1)) / Math.max(1e-6, P - sp * (kids.length - 1)); mains = prefs.map((p) => p * k); }
    }
    const total = mains.reduce((a, b) => a + b, 0) + sp * (kids.length - 1);
    const al = this.props.m_ChildAlignment || 0; const ah = al % 3, av = Math.floor(al / 3); // 0 upper,1 middle,2 lower
    const mainAlign = axis === 0 ? ah : av; const crossAlign = axis === 0 ? av : ah;
    let cursor = (axis === 0 ? pad.left : pad.top) + (inner - total) * (mainAlign / 2);
    const rev = this.props.m_ReverseArrangement; const order = rev ? kids.slice().reverse() : kids;
    order.forEach((k) => {
      const i = kids.indexOf(k); const r = k.gameObject.rect; const m = mains[i]; const cs = ctrlCross ? (expCross ? innerCross : sizes[i][1]) : sizes[i][1];
      r.anchorMin = [0, 1]; r.anchorMax = [0, 1];
      const crossOff = (axis === 0 ? pad.top : pad.left) + (innerCross - cs) * (crossAlign / 2);
      const sm = scMain ? scales[i] : 1; // m is the scaled (occupied) size along the main axis
      if (axis === 0) {
        if (ctrlMain) r.sizeDelta[0] = m / sm; if (ctrlCross) r.sizeDelta[1] = cs;
        const w = r.sizeDelta[0] * sm, h = r.sizeDelta[1];
        r.anchoredPosition = [cursor + w * r.pivot[0], -(crossOff + h * (1 - r.pivot[1]))];
      } else {
        if (ctrlMain) r.sizeDelta[1] = m / sm; if (ctrlCross) r.sizeDelta[0] = cs;
        const w = r.sizeDelta[0], h = r.sizeDelta[1] * sm;
        r.anchoredPosition = [crossOff + w * r.pivot[0], -(cursor + h * (1 - r.pivot[1]))];
      }
      cursor += m + sp;
    });
    // own preferred size (read by a parent group / ContentSizeFitter): the unstretched sum
    this._total = (ctrlMain ? P : total) + (axis === 0 ? pad.left + pad.right : pad.top + pad.bottom);
  }
}
// controlled=true: the parent group drives this axis, so wrapped text height / nested group size apply (Unity
// ILayoutElement); otherwise the serialized rect size (already Unity's layout result) is kept
function preferredSize(go, controlled = false) {
  const le = go.GetComponent(LayoutElement); const r = go.rect;
  let w = r.sizeDelta[0], h = r.sizeDelta[1];
  const t = go.GetComponent(Text);
  if (t && t.span && t._enabled && (controlled || go.GetComponent(ContentSizeFitter))) { if (!controlled) w = t.span.scrollWidth; h = t.span.scrollHeight; }
  if (le) { if (le.props.m_PreferredWidth > 0) w = le.props.m_PreferredWidth; if (le.props.m_PreferredHeight > 0) h = le.props.m_PreferredHeight; if (le.props.m_MinWidth > w) w = le.props.m_MinWidth; if (le.props.m_MinHeight > h) h = le.props.m_MinHeight; }
  const lg = go.components.find((c) => c instanceof LayoutGroup); if (lg && lg._total && (controlled || go.GetComponent(ContentSizeFitter))) { if (lg instanceof HorizontalLayoutGroup) w = lg._total; else h = lg._total; }
  return [w, h];
}
export class HorizontalLayoutGroup extends LayoutGroup { static typeName = 'HorizontalLayoutGroup'; LateUpdate() { this._arrange(0); } }
export class VerticalLayoutGroup extends LayoutGroup { static typeName = 'VerticalLayoutGroup'; LateUpdate() { this._arrange(1); } }
export class GridLayoutGroup extends LayoutGroup {
  static typeName = 'GridLayoutGroup';
  LateUpdate() {
    const cell = this.props.m_CellSize || { x: 100, y: 100 }; const sp = this.props.m_Spacing || { x: 0, y: 0 }; const pad = this.padding;
    const kids = this._children(); const size = rectSize(this.gameObject);
    let cols = this.props.m_Constraint === 1 ? this.props.m_ConstraintCount : Math.max(1, Math.floor((size[0] - pad.left - pad.right + sp.x) / (cell.x + sp.x)));
    kids.forEach((k, i) => { const r = k.gameObject.rect; const cx = i % cols, cy = Math.floor(i / cols); r.anchorMin = [0, 1]; r.anchorMax = [0, 1]; r.sizeDelta = [cell.x, cell.y]; r.anchoredPosition = [pad.left + cx * (cell.x + sp.x) + cell.x * r.pivot[0], -(pad.top + cy * (cell.y + sp.y) + cell.y * (1 - r.pivot[1]))]; });
    this._total = pad.top + pad.bottom + Math.ceil(kids.length / cols) * (cell.y + sp.y);
  }
}
export class ContentSizeFitter extends Component {
  static typeName = 'ContentSizeFitter';
  LateUpdate() {
    const r = this.gameObject.rect; if (!r) return; const p = this.props;
    const s = preferredSize(this.gameObject);
    if (p.m_HorizontalFit === 2) { const t = this.gameObject.GetComponent(Text); r.sizeDelta[0] = t && t.span ? t.span.scrollWidth : s[0]; }
    if (p.m_VerticalFit === 2) { const t = this.gameObject.GetComponent(Text); r.sizeDelta[1] = t && t.span ? t.span.scrollHeight : s[1]; }
  }
}
export class Mask extends Component { static typeName = 'Mask'; _buildDom() { ensureEl(this.gameObject).style.overflow = 'hidden'; } }
export class RectMask2D extends Mask { static typeName = 'RectMask2D'; }
export class ScrollRect extends Component {
  static typeName = 'ScrollRect';
  _buildDom() {
    const el = ensureEl(this.gameObject); el.classList.add('ug-hit');
    const content = this.ref(this.props.m_Content); const horiz = !!this.props.m_Horizontal, vert = !!this.props.m_Vertical;
    let down = false, lx = 0, ly = 0;
    // a press on a child Scrollbar drags the scrollbar (Unity: the Scrollbar takes the drag), not the content
    el.addEventListener('pointerdown', (e) => { if (e._zdScrollbar) return; down = true; lx = e.clientX; ly = e.clientY; });
    addEventListener('pointerup', () => { down = false; });
    addEventListener('pointermove', (e) => {
      if (!down || !content) return; const cv = canvasOf(this.gameObject); const k = cv ? cv.scale : 1;
      const r = content.gameObject.rect; if (horiz) r.anchoredPosition[0] += (e.clientX - lx) / k; if (vert) r.anchoredPosition[1] -= (e.clientY - ly) / k; lx = e.clientX; ly = e.clientY; this._clamp(); this._updateScrollbars(); uiDirty();
    });
    el.addEventListener('wheel', (e) => {
      if (!content) return; const r = content.gameObject.rect;
      const k = e.deltaMode === 1 ? 33 : e.deltaMode === 2 ? 300 : 1; const d = (Math.abs(e.deltaY) >= Math.abs(e.deltaX) ? e.deltaY : e.deltaX) * k;
      if (vert) r.anchoredPosition[1] += d; else if (horiz) r.anchoredPosition[0] -= d; this._clamp(); this._updateScrollbars(); uiDirty();
    });
  }
  // Unity ScrollRect.LateUpdate -> UpdateScrollbars / UpdateScrollbarVisibility: the bound scrollbars follow the content
  // (handle size = view/content, value = normalized position); dragging a scrollbar scrolls the content back
  LateUpdate() { this._updateScrollbars(); }
  _bars() {
    if (!this._barsWired) {
      this._barsWired = true;
      const h = this.ref(this.props.m_HorizontalScrollbar), v = this.ref(this.props.m_VerticalScrollbar);
      this._hBar = h instanceof Scrollbar ? h : null; this._vBar = v instanceof Scrollbar ? v : null;
      if (this._hBar) this._hBar.onValueChanged.AddListener((x) => { if (!this._syncing) this.horizontalNormalizedPosition = x; });
      if (this._vBar) this._vBar.onValueChanged.AddListener((x) => { if (!this._syncing) this.verticalNormalizedPosition = x; });
    }
    return this._hBar || this._vBar;
  }
  _geom(axis) {
    // content bounds relative to the viewport (content is the viewport's child): min edge, content size, view size
    const content = this.ref(this.props.m_Content); if (!content || !content.gameObject.rect) return null;
    const vp = this.ref(this.props.m_Viewport) || this.transform;
    const r = content.gameObject.rect; const cs = rectSize(content.gameObject), vs = rectSize(vp.gameObject);
    const p = content.gameObject.transform._parent; const ps = p && p.gameObject.rect ? rectSize(p.gameObject) : vs;
    return { min: r.anchorMin[axis] * ps[axis] + r.anchoredPosition[axis] - r.sizeDelta[axis] * r.pivot[axis], cs: cs[axis], vs: vs[axis], r };
  }
  _normalized(axis) {
    const g = this._geom(axis); if (!g) return 0;
    if (g.cs <= g.vs + 1e-4) return g.min < 0 ? 1 : 0;
    return -g.min / (g.cs - g.vs);
  }
  _setNormalized(axis, v) {
    const g = this._geom(axis); if (!g) return; const hidden = g.cs - g.vs; if (hidden <= 0) return;
    g.r.anchoredPosition[axis] += -Mathf.Clamp01(v) * hidden - g.min; uiDirty();
  }
  _updateScrollbars() {
    if (!this._bars()) return;
    this._syncing = true;
    try {
      for (const [bar, axis, vis, sp] of [[this._hBar, 0, this.props.m_HorizontalScrollbarVisibility, this.props.m_HorizontalScrollbarSpacing], [this._vBar, 1, this.props.m_VerticalScrollbarVisibility, this.props.m_VerticalScrollbarSpacing]]) {
        if (!bar) continue; const g = this._geom(axis); if (!g) continue;
        if (vis) { // AutoHide (1) / AutoHideAndExpandViewport (2)
          const needed = g.cs > g.vs + 0.01; const bgo = bar.gameObject;
          if (bgo.activeSelf !== needed) bgo.SetActive(needed);
          const vp = this.ref(this.props.m_Viewport);
          if (vis === 2 && vp && vp.gameObject.rect && vp.gameObject.transform._parent === this.transform) {
            const o = 1 - axis; const sd = vp.gameObject.rect.sizeDelta; const want = needed ? -(rectSize(bgo)[o] + (sp || 0)) : 0;
            if (Math.abs(sd[o] - want) > 1e-3) { sd[o] = want; uiDirty(); }
          }
        }
        bar.size = g.cs > 0 ? Mathf.Clamp01(g.vs / g.cs) : 1;
        bar.value = this._normalized(axis);
      }
    } finally { this._syncing = false; }
  }
  _clamp() {
    const content = this.ref(this.props.m_Content); if (!content) return; const vp = this.ref(this.props.m_Viewport) || this.transform;
    const r = content.gameObject.rect; const cs = rectSize(content.gameObject), vs = rectSize(vp.gameObject);
    if (this.props.m_Vertical) r.anchoredPosition[1] = Mathf.Clamp(r.anchoredPosition[1], 0, Math.max(0, cs[1] - vs[1]));
    if (this.props.m_Horizontal) r.anchoredPosition[0] = Mathf.Clamp(r.anchoredPosition[0], -Math.max(0, cs[0] - vs[0]), 0);
  }
  get normalizedPosition() { return new Vector2(this._normalized(0), this._normalized(1)); }
  set normalizedPosition(v) { this._setNormalized(0, v.x); this._setNormalized(1, v.y); }
  get verticalNormalizedPosition() { return this._normalized(1); }
  set verticalNormalizedPosition(v) { this._setNormalized(1, v); }
  get horizontalNormalizedPosition() { return this._normalized(0); }
  set horizontalNormalizedPosition(v) { this._setNormalized(0, v); }
  get horizontalScrollbar() { this._bars(); return this._hBar; }
  get verticalScrollbar() { this._bars(); return this._vBar; }
  StopMovement() { }
  get content() { return this.ref(this.props.m_Content); }
}
export class EventSystem extends Component { static typeName = 'EventSystem'; static current = null; Awake() { EventSystem.current = this; } SetSelectedGameObject() { } IsPointerOverGameObject() { return false; } }
export class StandaloneInputModule extends Component { static typeName = 'StandaloneInputModule'; }
export class CanvasRenderer extends Component { static typeName = 'CanvasRenderer'; SetAlpha(a) { const el = this.gameObject._el; if (el) el.style.opacity = a; } GetAlpha() { return 1; } }

export const UGUI_COMPONENTS_LIST = 0;
export const UGUI_COMPONENTS = { Canvas, CanvasScaler, GraphicRaycaster, CanvasGroup, Image, RawImage, Text, Shadow, Outline, Button, Toggle, Slider, EventTrigger, LayoutElement, HorizontalLayoutGroup, VerticalLayoutGroup, GridLayoutGroup, ContentSizeFitter, Mask, RectMask2D, ScrollRect, Scrollbar, EventSystem, StandaloneInputModule, CanvasRenderer };
