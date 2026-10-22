// FPSCounter: frames-per-second label.
import { Time } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

// Math.Round (banker's rounding, as C# Math.Round(double))
function roundEven(x) { const r = Math.round(x); return (Math.abs(x % 1) === 0.5 && r % 2 !== 0) ? r - 1 : r; }

export class FPSCounter extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.OOOGBGANBFB = 0.5;   // update interval (s)
    this.NPKIOHCDAGI = null;  // Text
    this.FGFBLIKOBLO = 0;     // last update realtime
    this.DLDBFDBCOAP = 0;     // frame count at last update
    this._fps = 0;            // <HOKIBKIFPNL>k__BackingField
  }
  get OPLGMANKCMF() { return this._fps; }        // current fps
  set OPLGMANKCMF(v) { this._fps = v | 0; }
  FAAFMFNBAGJ() { return this._fps; }
  DLKGKCPFLHI(ALLBGCHDGNC) { this._fps = ALLBGCHDGNC | 0; }

  Update() {
    const now = Time.realtimeSinceStartup;
    if (now - this.FGFBLIKOBLO < this.OOOGBGANBFB) return;
    const fps = (Time.frameCount - this.DLDBFDBCOAP) / (now - this.FGFBLIKOBLO);
    this._fps = Number.isFinite(fps) ? roundEven(fps) | 0 : -2147483648;
    if (this.NPKIOHCDAGI) this.NPKIOHCDAGI.text = String(this._fps);
    this.DLDBFDBCOAP = Time.frameCount;
    this.FGFBLIKOBLO = Time.realtimeSinceStartup;
  }
}
define('FPSCounter', FPSCounter);
