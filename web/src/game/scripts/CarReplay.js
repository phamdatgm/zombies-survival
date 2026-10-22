// CarReplay: records the player car path (y, z, pitch every JFMDNCCPHMN physics frames) and plays back a
// ghost car (EMDCJLCBJFJ) from Level.event_replay_ghost.path. Uploading/downloading replays is online-only.
import { Vector3, Quaternion, Time, Physics, Instantiate, Destroy, Resources } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

// replay sample (DDOBJBEDGLL)
export class DDOBJBEDGLL {
  constructor() {
    this.JBEOOOGGKGL = 0; // y
    this.NBMEEIGMHHP = 0; // z
    this.INHGHFGNDIO = 0; // pitch (short, degrees 0..360)
  }
}
G.DDOBJBEDGLL = G.DDOBJBEDGLL || DDOBJBEDGLL;

export class CarReplay extends GameBehaviour {
  static GJHAKPEMGCF = '';   // recorded path string
  static LHNOLEHPJON = null; // Replay
  static MNHJLEBDHHK = [];   // List<DDOBJBEDGLL> playback samples
  static HJPPNJKDEKF = [];   // List<DDOBJBEDGLL> recorded samples
  constructor(go, p) {
    super(go, p);
    this.PEEMAHNEIHI = null;           // CarController (recorder)
    this.LIEHBGFFHFF = null;           // ghost transform
    this.EMDCJLCBJFJ = false;          // this is the ghost car
    this.LIKGCKLECCK = 0;              // fixed frame counter
    this.JFMDNCCPHMN = 5;              // sample interval (fixed frames)
    this.DKNMNCHBFBO = false;          // playing
    this.PLECNHEEKBK = false;          // recording
    this.LNNMJCIFMGH = false;          // playback finished
    this.JJGGCNKJJNO = false;          // initial nudge done
    this.CDKJIPAIACE = 0;              // timer
    this.JHCCDJFEBCC = Vector3.zero;   // last position
    this.IPHIIEPHGCC = Vector3.zero;   // current position
    this.EBDAKFPLPPP = Vector3.zero;   // velocity
    this.KJILHEDCDFO = 0;              // wheel spin angle
    this.LFNBGBNOLOA = [];             // List<Transform> wheels
    this.NAMCKDFDAHE = [];             // List<float> wheel base local y
    this.BLMKFIOGALM = [];             // List<float> wheel radius
    this.JMFFPEBJCCE = 0;              // suspension travel
    this.JCKILBMALPM = 0;              // wheel radius (front)
    this.JIPIHNCHBPP = 0;              // wheel radius (rear, local z < 0)
    this.MIGMJBBGOEB = -1;
    this.POBPHBKJMFG = 0;
  }
  // start recording
  ABMNHLOGIIB() { this.LIKGCKLECCK = 0; this.PLECNHEEKBK = true; }
  Start() {
    if (!this.EMDCJLCBJFJ) {
      this.PEEMAHNEIHI = this.GetComponent('CarController');
      CarReplay.HJPPNJKDEKF.length = 0;
      CarReplay.GJHAKPEMGCF = '';
      return;
    }
    this.LIEHBGFFHFF = this.transform;
    CarReplay.MNHJLEBDHHK.length = 0;
    for (const t of this.LFNBGBNOLOA || []) {
      if (!t) continue;
      this.NAMCKDFDAHE.push(t.localPosition.y);
      if (this.JIPIHNCHBPP <= 0.0 || 0.0 <= t.localPosition.z) this.BLMKFIOGALM.push(this.JCKILBMALPM);
      else this.BLMKFIOGALM.push(this.JIPIHNCHBPP);
    }
  }
  // ghost: small nudge after 0.05 s
  APIAJKNHKCK() {
    if (this.JJGGCNKJJNO) return;
    let t = this.CDKJIPAIACE;
    if (0.05 < t) {
      this.JJGGCNKJJNO = true;
      const p = this.transform.position;
      this.transform.position = new Vector3(p.x + 0.05, p.y, 0);
      t = this.CDKJIPAIACE;
    }
    this.CDKJIPAIACE = t + Time.deltaTime;
  }
  // is a ghost replay available for this event level
  static DJKMCIEIAMH() {
    const l = G.Main && G.Main.NMDEEOMHAGP;
    if (!l || !l.IsEvent) return false;
    const r = l.event_replay_ghost;
    if (!r || !r.path) return false;
    return 0 < r.path.length;
  }
  // wheel spin from forward velocity
  DKBKANHKBND() {
    if (Time.timeScale <= 0.0 || Time.deltaTime <= 0.0) return;
    const dt = Time.deltaTime;
    const p = this.LIEHBGFFHFF.position;
    this.IPHIIEPHGCC = p;
    const last = this.JHCCDJFEBCC;
    this.EBDAKFPLPPP = new Vector3((p.x - last.x) / dt, (p.y - last.y) / dt, (p.z - last.z) / dt);
    this.JHCCDJFEBCC = this.IPHIIEPHGCC;
    this.IPHIIEPHGCC = this.LIEHBGFFHFF.position;
    let a = this.KJILHEDCDFO + Time.deltaTime * this.EBDAKFPLPPP.z * 50.0;
    a = a - ((a / 360.0) | 0) * 360.0;
    if (a < 0.0) a = 0.0;
    this.KJILHEDCDFO = a;
    const q = Quaternion.Euler(this.KJILHEDCDFO, 0, 0);
    for (const t of this.LFNBGBNOLOA || []) if (t) t.localRotation = q;
  }
  // ghost wheels suspension (raycast to ground)
  CDECHFLJBOI() {
    if (Time.timeScale <= 0.0 || Time.deltaTime <= 0.0) return;
    const CC = G.CarController;
    const ground = CC && CC.GGDLOPNIKOB ? CC.GGDLOPNIKOB : 10;
    const ws = this.LFNBGBNOLOA || [];
    for (let i = 0; i < ws.length; i++) {
      const t = ws[i]; if (!t) continue;
      const lp = t.localPosition;
      const base = this.NAMCKDFDAHE[i];
      const low = (base - this.JMFFPEBJCCE) + 0.025;
      const up = this.LIEHBGFFHFF.up;
      const r = this.BLMKFIOGALM[i];
      let y = low;
      const hit = Physics.Raycast(t.position, up.neg(), r + 0.15, 1 << (ground & 31));
      if (hit) y = lp.y - (Vector3.Dot(t.position.sub(hit.point), this.LIEHBGFFHFF.up) - r);
      let v = base + this.JMFFPEBJCCE + 0.1;
      if (y <= v) v = y;
      if (y < low) v = low;
      t.localPosition = new Vector3(lp.x, v, lp.z);
    }
  }
  FixedUpdate() {
    if (this.PLECNHEEKBK) this.MKOCKANJLLP();
    this.LIKGCKLECCK++;
  }
  // record a sample
  MKOCKANJLLP() {
    if (G.CarController && G.CarController.MKEGHDPIIFK) return;
    const n = this.JFMDNCCPHMN;
    const q = n !== 0 ? (this.LIKGCKLECCK / n) | 0 : 0;
    if (this.LIKGCKLECCK !== q * n) return;
    const car = this.PEEMAHNEIHI;
    if (!alive(car)) return;
    const ang = this.NLILMCLNPKF(car.BHDKJIINJNL.forward, Vector3.forward, Vector3.right);
    const s = new DDOBJBEDGLL();
    const p = car.BHDKJIINJNL.position;
    s.JBEOOOGGKGL = p.y;
    s.NBMEEIGMHHP = p.z;
    s.INHGHFGNDIO = Number.isFinite(ang) ? (ang | 0) << 16 >> 16 : 0;
    CarReplay.HJPPNJKDEKF.push(s);
  }
  // load the ghost path from Level.event_replay_ghost.path ("y i z i a i ...")
  JNJNCPAAAAA() {
    if (!CarReplay.DJKMCIEIAMH()) return;
    const parts = G.Main.NMDEEOMHAGP.event_replay_ghost.path.split('i');
    const n = parts.length;
    if (n !== 0 && n % 3 === 0) {
      for (let i = 0; i < n; i++) {
        if (i % 3 !== 0) continue;
        const s = new DDOBJBEDGLL();
        s.JBEOOOGGKGL = parseFloat(parts[i]);
        s.NBMEEIGMHHP = parseFloat(parts[i + 1]);
        s.INHGHFGNDIO = parseInt(parts[i + 2], 10) << 16 >> 16;
        CarReplay.MNHJLEBDHHK.push(s);
      }
    }
    this.LIKGCKLECCK = 0;
    this.DKNMNCHBFBO = true;
  }
  // signed angle FMFMNIAFLOO -> OGJMFGEPEKP around HHBEOLHLEKB, in [0, 360]
  NLILMCLNPKF(FMFMNIAFLOO, OGJMFGEPEKP, HHBEOLHLEKB) {
    const a = Math.acos(Math.max(-1, Math.min(1, Vector3.Dot(FMFMNIAFLOO, OGJMFGEPEKP))));
    let s = -a;
    if (Vector3.Dot(HHBEOLHLEKB, Vector3.Cross(FMFMNIAFLOO, OGJMFGEPEKP)) <= 0.0) s = a;
    let d = s * 57.29578 + 360.0;
    d = d - ((d / 360.0) | 0) * 360.0;
    return d > 360 ? 360 : d < 0 ? 0 : d;
  }
  Update() {
    if (this.EMDCJLCBJFJ) { this.APIAJKNHKCK(); this.CDECHFLJBOI(); }
    if (!this.DKNMNCHBFBO) return;
    this.OFAPJCDIEIO();
    if (this.destroyed || !this.LIEHBGFFHFF) return;
    this.DKBKANHKBND();
  }
  // playback: interpolate between samples
  OFAPJCDIEIO() {
    const n = this.JFMDNCCPHMN;
    const f = (n + this.LIKGCKLECCK) / n;
    const i = Number.isFinite(f) ? f | 0 : -0x80000000;
    const L = CarReplay.MNHJLEBDHHK;
    if (i < L.length) {
      if (0 < i) {
        const a = L[i - 1], b = L[i];
        let t = f - i; if (t < 0) t = 0;
        this.LIEHBGFFHFF.position = new Vector3(t * 0.0 + 0.0, a.JBEOOOGGKGL + t * (b.JBEOOOGGKGL - a.JBEOOOGGKGL), a.NBMEEIGMHHP + t * (b.NBMEEIGMHHP - a.NBMEEIGMHHP));
        this.LIEHBGFFHFF.rotation = Quaternion.Lerp(Quaternion.Euler(a.INHGHFGNDIO, 0, 0), Quaternion.Euler(b.INHGHFGNDIO, 0, 0), t);
      }
    } else if (!this.LNNMJCIFMGH) {
      this.LNNMJCIFMGH = true;
      this.FIOKLNLIDNH();
    }
  }
  // ghost vanishes in a puff of smoke
  FIOKLNLIDNH() {
    const fx = Resources.Load('FX_SmokeGhost');
    if (fx) Instantiate(fx, this.LIEHBGFFHFF.position, Quaternion.identity);
    Destroy(this.gameObject);
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(car) || !alive(car.CDDOBCENBOG)) return;
    const t = car.CDDOBCENBOG.GBIDOPEHPMA; // ghost marker in the GUI
    if (t) Destroy(t.gameObject);
  }
}
define('CarReplay', CarReplay);
