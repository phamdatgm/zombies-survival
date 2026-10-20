// GUITutorialArrowAnim: tutorial arrow bouncing along its own up axis (PingPong 0..33 px at 35 px/s, realtime).
import { Time, Vector2, Vector3, Mathf } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';

export class GUITutorialArrowAnim extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.FJKBPAHAIDA = null;            // parent Transform
    this.LIEHBGFFHFF = null;            // own RectTransform
    this.EDPJENMOOGC = new Vector2();   // start local position
    this.DGBENOFIJDK = new Vector2();   // start anchored position
    this.GMFAMFJABMJ = 0;               // start realtime
    this.JFLPNAABHNP = 33;              // amplitude
  }
  Awake() {
    this.LIEHBGFFHFF = this.transform;
    this.FJKBPAHAIDA = this.LIEHBGFFHFF.parent;
    const lp = this.LIEHBGFFHFF.localPosition; this.EDPJENMOOGC = new Vector2(lp.x, lp.y);
    const ap = this.LIEHBGFFHFF.anchoredPosition; this.DGBENOFIJDK = new Vector2(ap.x, ap.y);
  }
  OnEnable() { this.GMFAMFJABMJ = Time.realtimeSinceStartup; this.INFJJBJJFKC(); }
  Update() { this.INFJJBJJFKC(); }
  // position = parent.TransformPoint(startLocal) - up * PingPong((t - t0) * 35, 33)
  // In world (screen) space, relative to the parent captured in Awake — the arrow stays on its target even after
  // GUIGarage re-parents it to another panel (map tutorial). Amplitude: 33 canvas units.
  INFJJBJJFKC() {
    const rt = this.LIEHBGFFHFF;
    if (!alive(rt) || !alive(this.FJKBPAHAIDA)) return;
    const pp = Mathf.PingPong((Time.realtimeSinceStartup - this.GMFAMFJABMJ) * 35, this.JFLPNAABHNP);
    const a = (rt.localEulerAngles.z || 0) * Math.PI / 180;
    const ux = -Math.sin(a), uy = Math.cos(a); // up axis (parents are not rotated)
    if (!rt.gameObject.rect || rt.parent === this.FJKBPAHAIDA) {
      rt.anchoredPosition = new Vector2(this.DGBENOFIJDK.x - ux * pp, this.DGBENOFIJDK.y - uy * pp);
      return;
    }
    const k = uiScaleOf(this.FJKBPAHAIDA.gameObject), kc = uiScaleOf(null, this.FJKBPAHAIDA.gameObject);
    const p = this.FJKBPAHAIDA.position;
    rt.position = new Vector3(p.x + this.EDPJENMOOGC.x * k - ux * pp * kc, p.y + this.EDPJENMOOGC.y * k - uy * pp * kc, 0);
  }
}
// screen pixels per local unit of children of `go` (its scale chain * canvas scale); uiScaleOf(null, go) = canvas scale only
function uiScaleOf(go, from = go) {
  let s = 1, g = from;
  while (g && g.rect) {
    const cv = g.components.find((c) => c.constructor.typeName === 'Canvas');
    if (cv && cv.isRoot) return s * (cv.scale || 1);
    if (go) s *= g.obj.scale.x || 1;
    g = g.transform._parent && g.transform._parent.gameObject;
  }
  return s;
}
define('GUITutorialArrowAnim', GUITutorialArrowAnim);
