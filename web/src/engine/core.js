// Minimal Unity-like runtime on top of three.js.
import * as THREE from 'three';
import { Vector3, Quaternion, U2T, T2U } from './umath.js';

export const Time = {
  time: 0, deltaTime: 0, unscaledDeltaTime: 0, unscaledTime: 0, fixedDeltaTime: 0.0167, timeScale: 1, frameCount: 0,
  realtimeSinceStartup: 0,
};

const _v = new THREE.Vector3(), _q = new THREE.Quaternion(), _s = new THREE.Vector3(), _m = new THREE.Matrix4();

// ---------------------------------------------------------------- Transform facade (Unity space)
export class Transform {
  constructor(go) { this.gameObject = go; this.obj = go.obj; this._children = []; this._parent = null; }
  get transform() { return this; }
  get name() { return this.gameObject.name; }
  get parent() { return this._parent; }
  set parent(p) { this.SetParent(p, true); }
  SetParent(p, worldPositionStays = true) {
    if (p && p.transform) p = p.transform;
    if (p === this._parent) return;
    // UI (RectTransform): worldPositionStays keeps the element's canvas/screen position and on-screen scale (ugui hook)
    let uiKeep = null;
    if (this.gameObject.rect) { if (worldPositionStays && Transform.rectCapture && p && p.gameObject.rect && this._parent) uiKeep = Transform.rectCapture(this); worldPositionStays = false; }
    if (worldPositionStays) {
      this.obj.updateWorldMatrix(true, false);
      _m.copy(this.obj.matrixWorld);
    }
    if (this._parent) this._parent._children.splice(this._parent._children.indexOf(this), 1);
    this._parent = p || null;
    const parentObj = p ? p.obj : this.gameObject.scene.root;
    parentObj.add(this.obj);
    if (p) p._children.push(this);
    if (worldPositionStays) {
      parentObj.updateWorldMatrix(true, false);
      _m.premultiply(new THREE.Matrix4().copy(parentObj.matrixWorld).invert());
      _m.decompose(this.obj.position, this.obj.quaternion, this.obj.scale);
    }
    this.gameObject._updateActiveInHierarchy();
    if (uiKeep) Transform.rectRestore(this, uiKeep);
    for (const h of Transform.hooks) h(this);
  }
  SetSiblingIndex(i) { if (this._parent) { const c = this._parent._children; c.splice(c.indexOf(this), 1); c.splice(Math.max(0, Math.min(i, c.length)), 0, this); for (const h of Transform.hooks) h(this); } }
  get childCount() { return this._children.length; }
  GetChild(i) { return this._children[i]; }
  get root() { let t = this; while (t._parent) t = t._parent; return t; }
  Find(path) {
    let cur = this;
    for (const part of path.split('/')) { cur = cur._children.find((c) => c.gameObject.name === part); if (!cur) return null; }
    return cur;
  }
  FindDeep(name) {
    for (const c of this._children) { if (c.gameObject.name === name) return c; const r = c.FindDeep(name); if (r) return r; }
    return null;
  }
  GetSiblingIndex() { return this._parent ? this._parent._children.indexOf(this) : 0; }
  SetAsLastSibling() { if (this._parent) { const c = this._parent._children; c.splice(c.indexOf(this), 1); c.push(this); for (const h of Transform.hooks) h(this); } }
  SetAsFirstSibling() { if (this._parent) { const c = this._parent._children; c.splice(c.indexOf(this), 1); c.unshift(this); for (const h of Transform.hooks) h(this); } }
  IsChildOf(t) { let c = this; while (c) { if (c === t) return true; c = c._parent; } return false; }
  *[Symbol.iterator]() { yield* this._children.slice(); }

  get localPosition() { return T2U.pos(this.obj.position); }
  set localPosition(v) { U2T.pos(v, this.obj.position); this._moved(); }
  get localRotation() { return T2U.quat(this.obj.quaternion); }
  set localRotation(q) { U2T.quat(q, this.obj.quaternion); this._moved(); }
  get localScale() { const s = this.obj.scale; return new Vector3(s.x, s.y, s.z); }
  set localScale(v) { this.obj.scale.set(v.x, v.y, v.z); this._moved(); }
  get localEulerAngles() { return this.localRotation.eulerAngles; }
  set localEulerAngles(e) { this.localRotation = Quaternion.Euler(e.x, e.y, e.z); }
  get position() { this.obj.updateWorldMatrix(true, false); _v.setFromMatrixPosition(this.obj.matrixWorld); return T2U.pos(_v); }
  set position(v) {
    const p = this.obj.parent; U2T.pos(v, _v);
    if (p) { p.updateWorldMatrix(true, false); p.worldToLocal(_v); }
    this.obj.position.copy(_v); this._moved();
  }
  get rotation() { this.obj.updateWorldMatrix(true, false); this.obj.matrixWorld.decompose(_v, _q, _s); return T2U.quat(_q); }
  set rotation(q) {
    const p = this.obj.parent; U2T.quat(q, _q);
    if (p) { p.updateWorldMatrix(true, false); p.matrixWorld.decompose(_v, this.obj.quaternion, _s); this.obj.quaternion.invert().multiply(_q); }
    else this.obj.quaternion.copy(_q);
    this._moved();
  }
  get eulerAngles() { return this.rotation.eulerAngles; }
  set eulerAngles(e) { this.rotation = Quaternion.Euler(e.x, e.y, e.z); }
  get lossyScale() { this.obj.updateWorldMatrix(true, false); this.obj.matrixWorld.decompose(_v, _q, _s); return new Vector3(_s.x, _s.y, _s.z); }
  get forward() { return this.rotation.rotate(Vector3.forward); }
  set forward(v) { this.rotation = Quaternion.LookRotation(v); }
  get right() { return this.rotation.rotate(Vector3.right); }
  set right(v) { this.rotation = Quaternion.FromToRotation(Vector3.right, v); }
  get up() { return this.rotation.rotate(Vector3.up); }
  set up(v) { this.rotation = Quaternion.FromToRotation(Vector3.up, v); }
  Translate(v, relativeTo = 'Self') {
    if (typeof v === 'number') v = new Vector3(arguments[0], arguments[1], arguments[2]), relativeTo = arguments[3] || 'Self';
    if (relativeTo === 'World' || relativeTo === 0) this.position = this.position.add(v);
    else this.position = this.position.add(this.TransformDirection(v));
  }
  Rotate(x, y, z, space = 'Self') {
    let e = x instanceof Vector3 ? x : new Vector3(x, y, z); if (x instanceof Vector3) space = y || 'Self';
    const q = Quaternion.Euler(e.x, e.y, e.z);
    if (space === 'World' || space === 0) this.rotation = q.mul(this.rotation); else this.localRotation = this.localRotation.mul(q);
  }
  RotateAround(point, axis, angle) {
    const q = Quaternion.AngleAxis(angle, axis);
    const pos = this.position; this.position = point.add(q.rotate(pos.sub(point)));
    this.rotation = q.mul(this.rotation);
  }
  LookAt(target, up = Vector3.up) { const p = target.transform ? target.transform.position : target; this.rotation = Quaternion.LookRotation(p.sub(this.position), up); }
  TransformPoint(v) { this.obj.updateWorldMatrix(true, false); U2T.pos(v, _v).applyMatrix4(this.obj.matrixWorld); return T2U.pos(_v); }
  InverseTransformPoint(v) { this.obj.updateWorldMatrix(true, false); _m.copy(this.obj.matrixWorld).invert(); U2T.pos(v, _v).applyMatrix4(_m); return T2U.pos(_v); }
  TransformDirection(v) { return this.rotation.rotate(v); }
  InverseTransformDirection(v) { return Quaternion.Inverse(this.rotation).rotate(v); }
  TransformVector(v) { return this.TransformPoint(v).sub(this.position); }
  _moved() { this.gameObject._physicsDirty = true; }
  GetComponent(t) { return this.gameObject.GetComponent(t); }
  GetComponentInChildren(t, inc) { return this.gameObject.GetComponentInChildren(t, inc); }
  GetComponentsInChildren(t, inc) { return this.gameObject.GetComponentsInChildren(t, inc); }
}

Transform.hooks = [];

// ---------------------------------------------------------------- GameObject
let _goId = 1;
export class GameObject {
  constructor(name = 'GameObject', scene = World.current) {
    this.id = _goId++;
    this.name = name;
    this.scene = scene;
    this.obj = new THREE.Object3D();
    this.obj.name = name;
    this.obj.userData.go = this;
    this._layer = 0; this.tag = 'Untagged';
    this._active = true; this._activeInHierarchy = true;
    this.components = [];
    this.transform = new Transform(this);
    this.destroyed = false;
    if (scene) { scene.root.add(this.obj); scene.objects.add(this); }
  }
  get gameObject() { return this; }
  get layer() { return this._layer; }
  set layer(v) { if (v === this._layer) return; this._layer = v; for (const h of GameObject.layerHooks) h(this); }
  get activeSelf() { return this._active; }
  get activeInHierarchy() { return this._activeInHierarchy; }
  SetActive(v) { v = !!v; if (v === this._active) return; this._active = v; this._updateActiveInHierarchy(); }
  _updateActiveInHierarchy() {
    const p = this.transform._parent;
    const now = this._active && (!p || p.gameObject._activeInHierarchy);
    if (now !== this._activeInHierarchy) {
      this._activeInHierarchy = now;
      this.obj.visible = now;
      for (const c of this.components) c._onActiveChanged(now);
    } else this.obj.visible = now;
    for (const ch of this.transform._children) ch.gameObject._updateActiveInHierarchy();
  }
  CompareTag(t) { return this.tag === t; }
  AddComponent(Cls, props) {
    const c = new Cls(this, props || {});
    this.components.push(c);
    c._init();
    return c;
  }
  GetComponent(t) { return this.components.find((c) => matchType(c, t)) || null; }
  GetComponents(t) { return this.components.filter((c) => matchType(c, t)); }
  GetComponentInChildren(t, includeInactive = false) {
    const stack = [this];
    while (stack.length) {
      const g = stack.shift();
      if (!includeInactive && !g._activeInHierarchy) continue;
      const c = g.GetComponent(t); if (c) return c;
      for (const ch of g.transform._children) stack.push(ch.gameObject);
    }
    return null;
  }
  GetComponentsInChildren(t, includeInactive = false) {
    const out = []; const rec = (g) => {
      if (!includeInactive && !g._activeInHierarchy) return;
      out.push(...g.GetComponents(t)); for (const ch of g.transform._children) rec(ch.gameObject);
    }; rec(this); return out;
  }
  GetComponentInParent(t) { let g = this; while (g) { const c = g.GetComponent(t); if (c) return c; g = g.transform._parent && g.transform._parent.gameObject; } return null; }
  static Find(name) { for (const g of World.current.objects) if (g.name === name && g._activeInHierarchy) return g; return null; }
  static FindWithTag(tag) { for (const g of World.current.objects) if (g.tag === tag && g._activeInHierarchy) return g; return null; }
  static FindGameObjectsWithTag(tag) { return [...World.current.objects].filter((g) => g.tag === tag && g._activeInHierarchy); }
}

function matchType(c, t) {
  if (typeof t === 'string') return c.constructor.typeName === t || c.constructor.name === t || (c.constructor.aliases || []).includes(t);
  return c instanceof t;
}

// ---------------------------------------------------------------- Component
export class Component {
  constructor(go, props) {
    this.gameObject = go;
    this.props = props;
    this._enabled = props.m_Enabled === undefined ? true : !!props.m_Enabled;
    this._started = false; this._awoken = false; this._onEnabledCalled = false;
    this.destroyed = false;
    this.coroutines = [];
  }
  get transform() { return this.gameObject.transform; }
  get name() { return this.gameObject.name; }
  get tag() { return this.gameObject.tag; }
  get enabled() { return this._enabled; }
  set enabled(v) {
    v = !!v; if (v === this._enabled) return; this._enabled = v;
    if (this.gameObject._activeInHierarchy) { if (v) this._doEnable(); else this._doDisable(); }
  }
  get isActiveAndEnabled() { return this._enabled && this.gameObject._activeInHierarchy; }
  _init() {
    World.current.pendingAwake.push(this);
  }
  _awake() {
    if (this._awoken || this.destroyed) return;
    if (!this.gameObject._activeInHierarchy) return; // awakened later on activation
    this._awoken = true;
    try { this.Awake && this.Awake(); } catch (e) { console.error(this.constructor.name + '.Awake', e); }
    if (this._enabled && this.gameObject._activeInHierarchy) this._doEnable();
  }
  _onActiveChanged(active) {
    if (active) {
      if (!this._awoken) World.current.pendingAwake.push(this);
      else if (this._enabled) this._doEnable();
    } else if (this._awoken) this._doDisable();
  }
  _doEnable() {
    if (this._isEnabledNow) return; this._isEnabledNow = true;
    World.current.active.add(this);
    this.OnEnable && this.OnEnable();
  }
  _doDisable() {
    if (!this._isEnabledNow) return; this._isEnabledNow = false;
    World.current.active.delete(this);
    this.coroutines.length = 0;
    this.OnDisable && this.OnDisable();
  }
  GetComponent(t) { return this.gameObject.GetComponent(t); }
  GetComponents(t) { return this.gameObject.GetComponents(t); }
  GetComponentInChildren(t, inc) { return this.gameObject.GetComponentInChildren(t, inc); }
  GetComponentsInChildren(t, inc) { return this.gameObject.GetComponentsInChildren(t, inc); }
  GetComponentInParent(t) { return this.gameObject.GetComponentInParent(t); }
  CompareTag(t) { return this.gameObject.tag === t; }
  // coroutines: generator functions; yield a number (seconds), null (next frame), {realtime:s}, {until:fn}, another generator
  StartCoroutine(gen) {
    if (typeof gen === 'function') gen = gen.call(this);
    const co = { stack: [gen], wait: 0, until: null, realtime: false, done: false };
    this.coroutines.push(co);
    stepCoroutine(co, 0, 0);
    return co;
  }
  StopCoroutine(co) { if (co) { co.done = true; const i = this.coroutines.indexOf(co); if (i >= 0) this.coroutines.splice(i, 1); } }
  StopAllCoroutines() { for (const c of this.coroutines) c.done = true; this.coroutines.length = 0; }
  Invoke(fnName, delay) { this.StartCoroutine(function* () { yield delay; this[fnName](); }); }
  InvokeRepeating(fnName, delay, rate) { this.StartCoroutine(function* () { yield delay; for (;;) { this[fnName](); yield rate; } }); }
  IsInvoking() { return this.coroutines.length > 0; }
  SendMessage(fn, arg) { for (const c of this.gameObject.components) if (typeof c[fn] === 'function') c[fn](arg); }
  BroadcastMessage(fn, arg) { for (const c of this.gameObject.GetComponentsInChildren(Component, true)) if (typeof c[fn] === 'function') c[fn](arg); }
  CancelInvoke() { this.StopAllCoroutines(); }
  // resolve a serialized reference ('#idx' within the same instantiation, '@asset')
  ref(v) { return this._inst ? this._inst.resolve(v) : null; }
}

export function stepCoroutine(co, dt, udt) {
  if (co.done) return;
  if (co.until) { if (!co.until()) return; co.until = null; }
  if (co.wait > 0) { co.wait -= co.realtime ? udt : dt; if (co.wait > 0) return; }
  while (co.stack.length) {
    const g = co.stack[co.stack.length - 1];
    let r;
    try { r = g.next(); } catch (e) { console.error(e); co.done = true; return; }
    if (r.done) { co.stack.pop(); continue; }
    const y = r.value;
    if (y == null) return;
    if (typeof y === 'number') { co.wait = y; co.realtime = false; return; }
    if (y.realtime !== undefined) { co.wait = y.realtime; co.realtime = true; return; }
    if (y.until) { co.until = y.until; if (!y.until()) return; co.until = null; continue; }
    if (y.next) { co.stack.push(y); continue; }
    if (y.stack) { co.until = () => y.done; return; } // waiting on another coroutine
    return;
  }
  co.done = true;
}

export const WaitForSeconds = (s) => s;
export const WaitForSecondsRealtime = (s) => ({ realtime: s });
export const WaitUntil = (fn) => ({ until: fn });
export const WaitWhile = (fn) => ({ until: () => !fn() });

// ---------------------------------------------------------------- World (current loaded scene set)
export const World = {
  current: null,
};

export class SceneWorld {
  constructor() {
    this.root = new THREE.Scene();
    this.root.matrixWorldAutoUpdate = true;
    this.objects = new Set();
    this.active = new Set();
    this.pendingAwake = [];
    this.pendingDestroy = [];
    this.camera = null;
  }
  flushAwake() {
    let guard = 0;
    while (this.pendingAwake.length && guard++ < 100) {
      const list = this.pendingAwake; this.pendingAwake = [];
      for (const c of list) c._awake();
    }
  }
  update(dt, udt) {
    this.flushAwake();
    for (const c of [...this.active]) {
      if (!c._started && !c.destroyed && c._isEnabledNow) { c._started = true; c.Start && runMaybeCoroutine(c, c.Start()); }
    }
    for (const c of [...this.active]) if (c.Update && c._isEnabledNow && !c.destroyed) safe(c, 'Update');
    for (const c of [...this.active]) {
      if (c.coroutines.length) {
        for (const co of c.coroutines.slice()) stepCoroutine(co, dt, udt);
        c.coroutines = c.coroutines.filter((co) => !co.done);
      }
    }
    for (const c of [...this.active]) if (c.LateUpdate && c._isEnabledNow && !c.destroyed) safe(c, 'LateUpdate');
    this.processDestroy();
  }
  fixedUpdate() {
    this.flushAwake();
    for (const c of [...this.active]) if (c.FixedUpdate && c._isEnabledNow && !c.destroyed && c._started) safe(c, 'FixedUpdate');
  }
  processDestroy() {
    if (!this.pendingDestroy.length) return;
    const list = this.pendingDestroy; this.pendingDestroy = [];
    for (const x of list) destroyNow(x);
  }
}

function safe(c, fn) { try { c[fn](); } catch (e) { console.error(c.constructor.name + '.' + fn, e); } }
export function runMaybeCoroutine(c, r) { if (r && typeof r.next === 'function') c.StartCoroutine(r); }

export function Destroy(x, delay = 0) {
  if (!x) return;
  if (delay > 0) { setTimeoutGame(() => Destroy(x), delay); return; }
  World.current.pendingDestroy.push(x);
}
const timers = [];
export function setTimeoutGame(fn, s) { timers.push({ fn, t: Time.time + s }); }
export function tickTimers() { for (let i = timers.length - 1; i >= 0; i--) if (timers[i].t <= Time.time) { const t = timers.splice(i, 1)[0]; t.fn(); } }
export function clearTimers() { timers.length = 0; }

function destroyNow(x) {
  if (x.destroyed) return;
  if (x instanceof GameObject) {
    for (const ch of x.transform._children.slice()) destroyNow(ch.gameObject);
    for (const c of x.components) destroyComponent(c);
    x.destroyed = true;
    if (x.transform._parent) { const arr = x.transform._parent._children; arr.splice(arr.indexOf(x.transform), 1); }
    x.obj.removeFromParent();
    x.scene.objects.delete(x);
  } else if (x instanceof Component) {
    destroyComponent(x);
    const arr = x.gameObject.components; const i = arr.indexOf(x); if (i >= 0) arr.splice(i, 1);
  }
}
function destroyComponent(c) {
  if (c.destroyed) return;
  if (c._isEnabledNow) c._doDisable();
  c.destroyed = true;
  World.current.active.delete(c);
  try { c.OnDestroy && c.OnDestroy(); } catch (e) { console.error(e); }
  c._dispose && c._dispose();
}

// DontDestroyOnLoad: objects kept across LoadScene
export const persistent = new Set();
export function DontDestroyOnLoad(go) { if (go.gameObject) go = go.gameObject; persistent.add(go.transform.root.gameObject); }

GameObject.prototype.SendMessage = function (fn, arg) { for (const c of this.components) if (typeof c[fn] === 'function') c[fn](arg); };
GameObject.prototype.BroadcastMessage = function (fn, arg) { for (const c of this.GetComponentsInChildren(Component, true)) if (typeof c[fn] === 'function') c[fn](arg); };

GameObject.layerHooks = [];
