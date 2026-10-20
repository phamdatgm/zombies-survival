// InMenuUnitClickHandler.cs — Adverty in-menu ad unit click forwarder (IPointerClickHandler).
// [removed: ads] Adverty is not ported: clicks are ignored.
import { GameBehaviour, define } from '../base.js';

export class InMenuUnitClickHandler extends GameBehaviour {
  static MEDGFEGHPCF = 'Click handler expects Collider on Unit.';
  static FDBNBJJDFHH = 0.5;
  constructor(go, p) {
    super(go, p);
    this.MHJEFFHJNFE = null;     // InMenuUnit (Adverty)
    this.HAOCAPNEMCO = null;     // RectTransform
    this.DEEGFDDBLOL = 0;        // Adverty RenderType
    this.LFHNLPHCKPF = null;     // Collider
  }
  Awake() {
    this.HAOCAPNEMCO = this.transform;
    this.MHJEFFHJNFE = this.GetComponent('InMenuUnit');
  }
  // collider is not a BoxCollider while render type expects one
  HKMCNGPDBGA() { return false; }
  // local point -> normalized unit coordinates (unused without Adverty)
  KDGCLHPEMGO(CIGEHLOPCJP) {
    const s = this.HAOCAPNEMCO ? this.HAOCAPNEMCO.sizeDelta : { x: 1, y: 1 };
    const pv = this.HAOCAPNEMCO ? this.HAOCAPNEMCO.pivot : { x: 0.5, y: 0.5 };
    return { x: CIGEHLOPCJP.x / (s.x || 1) + pv.x, y: CIGEHLOPCJP.y / (s.y || 1) + pv.y };
  }
  OnMouseDown() { /* [removed: ads] Adverty BaseUnit.Interact */ }
  OnPointerClick(GFLJNNPANJG) { /* [removed: ads] Adverty BaseUnit.Interact */ }
}
define('InMenuUnitClickHandler', InMenuUnitClickHandler);
