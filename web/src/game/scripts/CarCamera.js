// CarCamera: side-follow camera of the player car (distance grows with speed), crash / finish modes,
// screen-shake coroutine (OIKFBMHJDBN / FPKDIMHPBPM).
import { Vector3, Quaternion, Time, Mathf, Screen, Camera } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

const CCs = () => G.CarController || {};
const clamp0 = (v) => (v < 0 ? 0 : v);           // lower clamp only (as in the binary)
const clamp01 = (v) => (v < 0 ? 0 : v > 1 ? 1 : v);
const CAM_LERP = [1.6, 1.3];                      // static table @0x59ca60, indexed by (CarController.HCILEAABENL > 0)

export class CarCamera extends GameBehaviour {
  static OLIEHFBNIEF = 0;
  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null;            // camera transform
    this.PEOBIGGOKBF = null;            // Camera
    this.PEEMAHNEIHI = null;            // CarController
    this.PGAPMNLLMHM = 0;               // CarCamera.FEGMKACGKGN mode (0 follow, 1 hold, 2 min, 3 max)
    this.MEHDJFDHKNE = false;           // shaking
    this.GNPJEBABCEJ = 0;               // shake offset (z)
    this.MMCJPAFDKPO = 10;              // current distance (x)
    this.DPHNLFKANKO = Vector3.zero;
    this.KCMGAOBDAIL = 6;               // min distance
    this.MMHKIPHOHOK = 11;              // normal max distance
    this.AGPDPHGLLNO = 15;              // max distance (nitro / airborne)
    this.BJMMLAKPLCF = 1.2;             // height at min
    this.JOGMDOOMPBN = 4;               // height at max
    this.NLELOMCJOHP = 1.25;            // back offset at min
    this.DLHADBLLICJ = 0;               // back offset at max
    this.AHPLNGFAPLP = 3;               // pitch at min
    this.FKBDBHDDINH = 10;              // pitch at max
    this.GMGHOBHANGK = -65;             // yaw at min
    this.MINFEKLCEAI = -59;             // yaw at max
    this.LNDBDGLKMLD = Vector3.zero;    // euler angles
    this.LBMCAJJOMIL = 0;               // crash/finish target z
    this.JGHBJBCBFMN = 2;               // crash target y
    this.BEOOOAFPGIK = 0;               // crash fixed x
    this.GLFGDGFAEBK = 0;               // t (min..AGP)
    this.KADAKHHDKKD = 0;               // t (min..MMHK)
    this.JFGADDLBHEO = 0;               // current height
    this.DPKMLEDEBID = 0;               // current back offset
    this.AKEFMNGNIFJ = 0;               // screen height
    this.PCIELBPDKBH = 0;               // screen width
    this.PCNOCPKGJEI = 0;               // speed accumulator
    this.BMDLDAOAFAB = 8;               // airborne height threshold
    this.LFJDBFFFCFJ = 1;               // speed-based back factor
    this.ACLOPJDHIJK = false;           // follow external target
    this.IPAJNEKEJEA = null;            // external target transform
    this.PGNMPLDJELM = 0;               // finish lerp accumulator
  }
  // reset crash targets
  OHIFDCBAEFL() { this.LBMCAJJOMIL = 0; this.JGHBJBCBFMN = 0; }
  // compute height / back offset / rotation from current distance
  IDBHFAEMGOB() {
    const k = this.KCMGAOBDAIL;
    const d = this.MMCJPAFDKPO - k;
    let a = 0;
    if (k !== this.AGPDPHGLLNO) a = clamp0(d / (this.AGPDPHGLLNO - k));
    this.GLFGDGFAEBK = a;
    let b = 0;
    if (k !== this.MMHKIPHOHOK) b = clamp0(d / (this.MMHKIPHOHOK - k));
    a = clamp0(a);
    this.KADAKHHDKKD = b;
    this.JFGADDLBHEO = this.BJMMLAKPLCF + a * (this.JOGMDOOMPBN - this.BJMMLAKPLCF);
    this.DPKMLEDEBID = this.NLELOMCJOHP + a * (this.DLHADBLLICJ - this.NLELOMCJOHP);
    const ex = b * (this.FKBDBHDDINH - this.AHPLNGFAPLP) + this.AHPLNGFAPLP;
    const ey = b * (this.MINFEKLCEAI - this.GMGHOBHANGK) + this.GMGHOBHANGK;
    this.LNDBDGLKMLD = new Vector3(ex, ey, this.LNDBDGLKMLD.z);
    this.LIEHBGFFHFF.rotation = Quaternion.Euler(ex, ey, this.LNDBDGLKMLD.z);
  }
  // lazy init (used by CarCameraIntro)
  KHDFDGMBOIJ() {
    if (alive(this.LIEHBGFFHFF)) return;
    this.LIEHBGFFHFF = this.transform;
    this.PEOBIGGOKBF = this.GetComponent(Camera);
    this.LNDBDGLKMLD = this.LIEHBGFFHFF.rotation.eulerAngles;
    this.GFOMIMMNDBH();
    this.AKEFMNGNIFJ = Screen.height;
    this.PCIELBPDKBH = Screen.width;
  }
  // per-aspect-ratio presets
  GFOMIMMNDBH() {
    const r = Screen.width / Screen.height;
    const set = (kcm, mmhk, nle, dlh, bjm, jog, gmg, min, ahp, fkb) => {
      this.KCMGAOBDAIL = kcm; this.MMHKIPHOHOK = mmhk; this.NLELOMCJOHP = nle; this.DLHADBLLICJ = dlh;
      this.BJMMLAKPLCF = bjm; this.JOGMDOOMPBN = jog; this.GMGHOBHANGK = gmg; this.MINFEKLCEAI = min;
      this.AHPLNGFAPLP = ahp; this.FKBDBHDDINH = fkb;
    };
    let agp;
    if (r <= 1.26) { this.LFJDBFFFCFJ = 1.7; set(10, 16, 2.7, 4.2, 2.0, 4.3, -56, -54, 3, 3); agp = 20; }
    else if (r <= 1.34) { set(9, 14.5, 2.1, 2.5, 1.5, 4.2, -58, -56, 3, 5); this.LFJDBFFFCFJ = 2.0; agp = 18.5; }
    else if (r <= 1.51) { this.LFJDBFFFCFJ = 1.5; set(7, 13, 1.45, 2.0, 1.25, 3.8, -61, -56, 3, 7); agp = 17; }
    else if (1.61 <= r) {
      if (1.8 <= r) {
        if (2.0 <= r) { set(6.3, 10.7, 0.5, -0.5, 1.35, 3.5, -71, -65, 7, 10); agp = 14.7; }
        else { set(6.5, 11, 0.5, -0.5, 1.35, 3.5, -71, -65, 7, 10); agp = 15; }
      } else { set(6, 11, 1.25, 0, 1.2, 4.0, -65, -59, 3, 10); agp = 15; }
    } else { set(7, 12, 1.25, 0.6, 1.25, 4.15, -62, -57, 3, 10); agp = 16; }
    this.AGPDPHGLLNO = agp;
  }
  // follow position: side distance x, height above car, behind car (speed-based)
  AAPGENGOABC() {
    const car = this.PEEMAHNEIHI;
    const p = car.BHDKJIINJNL.position;
    return new Vector3(this.MMCJPAFDKPO, p.y + this.JFGADDLBHEO, p.z - this.DPKMLEDEBID - car.AGKFMCFFBHB * this.LFJDBFFFCFJ);
  }
  // update distance MMCJPAFDKPO from car speed
  BGKJCAIHANB() {
    const car = this.PEEMAHNEIHI;
    const spd = car.AGKGCILIANE();
    const old = this.PCNOCPKGJEI;
    const crashed = !!CCs().MKEGHDPIIFK;
    const carY = car.BHDKJIINJNL.position.y;
    let acc, k;
    if (carY <= this.BMDLDAOAFAB) { acc = this.PCNOCPKGJEI + Time.deltaTime * -300.0; k = 1.0; }
    else {
      let rate = 10, s = car.AGKGCILIANE(); k = 1.0;
      if (10.0 <= s) {
        rate = 20;
        if (15.0 <= car.AGKGCILIANE()) {
          rate = 30;
          if (25.0 <= car.AGKGCILIANE()) {
            if (33.0 <= car.AGKGCILIANE()) {
              if (40.0 <= car.AGKGCILIANE()) { rate = 500; k = 0.5; } else rate = 100;
            } else { rate = 75; k = 1.0; }
          }
        }
      }
      acc = this.PCNOCPKGJEI + rate * Time.deltaTime;
    }
    if (150.0 < acc) acc = 150.0;
    if (acc < 0) acc = 0;
    this.PCNOCPKGJEI = acc;
    let max;
    if ((CCs().HCILEAABENL || 0) <= 1.0 && car.BHDKJIINJNL.position.y <= this.BMDLDAOAFAB) max = this.MMHKIPHOHOK;
    else max = this.AGPDPHGLLNO;
    let target = (spd + old) / 3.0;
    if (crashed) target = 15.0;
    let v = target <= max ? target : max;
    if (target < this.KCMGAOBDAIL) v = this.KCMGAOBDAIL;
    switch (this.PGAPMNLLMHM) {
      case 0: {
        let t = (Time.deltaTime / CAM_LERP[(CCs().HCILEAABENL || 0) > 0 ? 1 : 0]) / k;
        if (t < 0) t = 0;
        this.MMCJPAFDKPO = this.MMCJPAFDKPO + (v - this.MMCJPAFDKPO) * t;
        break;
      }
      case 1: break;
      case 2: this.MMCJPAFDKPO = this.MMHKIPHOHOK; break;
      case 3: this.MMCJPAFDKPO = this.AGPDPHGLLNO; break;
      default: break;
    }
  }
  // screen shake coroutine
  OIKFBMHJDBN() { return this.FPKDIMHPBPM(); }
  // CarCamera.FPKDIMHPBPM (compiler-generated IEnumerator)
  *FPKDIMHPBPM() {
    if (this.MEHDJFDHKNE) return;
    const CC = CCs();
    if (CC.MKEGHDPIIFK && !CC.FNHOMMPGFHK) return;
    this.MEHDJFDHKNE = true;
    const last_max_delta = Time.maximumDeltaTime ?? 0.3333333; // <last_max_delta>5__2
    Time.maximumDeltaTime = 0.02;
    let hitTime = Time.time;                         // <hitTime>5__3
    let shakeCounter = 3;                            // <shakeCounter>5__4
    let shakeDistance = 1.0;                         // <shakeDistance>5__5
    for (;;) {
      const f = (Time.time - hitTime) * 55.0;
      this.GNPJEBABCEJ = Math.sin(f) * shakeDistance;
      if (!CCs().FNHOMMPGFHK) {
        const car = this.PEEMAHNEIHI;
        if (alive(car) && car.BHDKJIINJNL) {
          const p = car.BHDKJIINJNL.position;
          this.LIEHBGFFHFF.position = new Vector3(this.MMCJPAFDKPO, p.y + this.JFGADDLBHEO,
            this.GNPJEBABCEJ + ((p.z - this.DPKMLEDEBID) - car.AGKFMCFFBHB * this.LFJDBFFFCFJ));
        }
      }
      if (6.2831855 < f) { hitTime = Time.time; shakeDistance *= 0.5; shakeCounter--; }
      yield null;
      if (shakeCounter < 1) break;
    }
    this.GNPJEBABCEJ = 0;
    Time.maximumDeltaTime = last_max_delta;
    this.MEHDJFDHKNE = false;
  }
  Update() {
    const car = this.PEEMAHNEIHI;
    if (!alive(car) || !alive(car.NIIFDMDCOCF)) return;
    const CC = CCs();
    const t = this.LIEHBGFFHFF;
    if (!CC.FNHOMMPGFHK) {
      this.BGKJCAIHANB();
      this.IDBHFAEMGOB();
      if (!CC.MKEGHDPIIFK) t.position = this.AAPGENGOABC();
      else {
        // crashed: drift to a fixed point
        if (this.LBMCAJJOMIL === 0.0) {
          const p0 = t.position;
          const vz = car.NIIFDMDCOCF.velocity.z * 0.5;
          this.LBMCAJJOMIL = p0.z + Mathf.Clamp(vz, -3.0, 3.0);
          this.JGHBJBCBFMN = t.position.y + 2.0;
          this.BEOOOAFPGIK = this.MMCJPAFDKPO;
        }
        const p = t.position;
        const k = clamp01(Time.deltaTime * 0.5);
        t.position = new Vector3(this.BEOOOAFPGIK, p.y + (this.JGHBJBCBFMN - p.y) * k, p.z + (this.LBMCAJJOMIL - p.z) * k);
      }
    } else if (!this.ACLOPJDHIJK) {
      // finished: fly ahead
      this.MMCJPAFDKPO = this.MMHKIPHOHOK;
      this.IDBHFAEMGOB();
      if (this.LBMCAJJOMIL === 0.0) this.LBMCAJJOMIL = t.position.z + 42.0;
      const dt = Time.deltaTime;
      const p = t.position;
      const tz = clamp01(dt / 3.0 + this.PGNMPLDJELM);
      const k5 = clamp01(dt * 5.0);
      t.position = new Vector3(p.x + (this.MMCJPAFDKPO - p.x) * k5, p.y + (this.JOGMDOOMPBN - p.y) * k5,
        p.z + tz * ((this.LBMCAJJOMIL + this.GNPJEBABCEJ * 100.0) - p.z));
      this.PGNMPLDJELM += Time.deltaTime * 0.0005;
    } else {
      // follow external target
      const k = clamp01(Time.deltaTime * 0.25);
      const p = t.position, q = this.IPAJNEKEJEA.position;
      t.position = new Vector3(p.x + k * (q.x - p.x), p.y + k * (q.y - p.y), p.z + k * (q.z - p.z));
      t.rotation = Quaternion.Lerp(t.rotation, this.IPAJNEKEJEA.rotation, k);
    }
    if (this.PCIELBPDKBH !== Screen.width || this.AKEFMNGNIFJ !== Screen.height) {
      this.AKEFMNGNIFJ = Screen.height;
      this.PCIELBPDKBH = Screen.width;
      this.GFOMIMMNDBH();
    }
  }
  // follow an external target (e.g. garage / finish cam)
  IBOCKKJLDDJ(BPEGLMBNNME) {
    this.IPAJNEKEJEA = BPEGLMBNNME;
    this.ACLOPJDHIJK = true;
  }
  Start() { this.KHDFDGMBOIJ(); }
}
define('CarCamera', CarCamera);
