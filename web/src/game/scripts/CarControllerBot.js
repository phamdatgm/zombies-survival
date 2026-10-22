// CarControllerBot: scripted rival car (level_10 finale, animation-driven via AnimSync) that rams the player car.
import { Vector3, Quaternion, Time, Layers, Physics, GameObject, ForceMode, Rigidbody, Registry } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

// GNOCGPDGKAE: Front=1 Back=2 ...
// Minimal stand-in for UnityEngine.WheelCollider (the engine has none). Used only if no WheelCollider
// component class is registered (Registry.builtin.WheelCollider / G.WheelCollider).
class WheelColliderLite {
  constructor(go) {
    this.gameObject = go; this.transform = go.transform;
    this.suspensionDistance = 0.3; this.suspensionSpring = { spring: 35000, damper: 4500, targetPosition: 0.5 };
    this.mass = 20; this.radius = 0.5; this.motorTorque = 0; this.brakeTorque = 0; this.wheelDampingRate = 0.25;
    this.forwardFriction = { stiffness: 1 }; this.rpm = 0;
  }
  // world pose of the wheel (suspension resolved by a ground raycast)
  GetWorldPose() {
    const t = this.transform; const up = t.up; const p = t.position;
    const hit = this.GetGroundHit();
    const pos = hit ? hit.point.add(up.mul(this.radius)) : p.sub(up.mul(this.suspensionDistance));
    return { pos, rot: t.rotation };
  }
  GetGroundHit() {
    const t = this.transform; const up = t.up;
    const hit = Physics.Raycast(t.position, up.neg(), this.suspensionDistance + this.radius, ~(1 << Layers.NameToLayer('car') | 1 << Layers.NameToLayer('wheel')));
    return hit ? { point: hit.point, normal: hit.normal, collider: hit.collider } : null;
  }
}
function addWheelCollider(go) {
  const Cls = (Registry && Registry.builtin && Registry.builtin.WheelCollider) || G.WheelCollider;
  if (Cls) return go.AddComponent(Cls);
  return new WheelColliderLite(go);
}

// nested class CarControllerBot.OMKEEHNKHPA (wheel)
export class OMKEEHNKHPA {
  constructor() {
    this.CCLKEPFMBEA = null;          // wheel mesh transform
    this.MIPKEALMBHI = null;          // WheelCollider GameObject
    this.EFOGAOHIGOE = null;          // WheelCollider
    this.CLFCMHAEIED = null;          // WheelCollider transform
    this.BNEEFDKFEHI = Vector3.zero;  // WheelCollider local position
    this.EIBJLBMILIG = 0;
    this.PLPKOBBAAJM = 0;             // GNOCGPDGKAE position
    this.GFGJNJIHPHP = false;         // grounded
    this.OLMMLPHFHPG = false;
  }
}

export class CarControllerBot extends GameBehaviour {
  static OMKEEHNKHPA = OMKEEHNKHPA;
  constructor(go, p) {
    super(go, p);
    this.BHDKJIINJNL = null;   // transform
    this.NIIFDMDCOCF = null;   // Rigidbody
    this.CIALNADBDDB = null;   // wheel FL
    this.MFILOBNJBLD = null;   // wheel FR
    this.MIAMAMEGMHK = null;   // wheel RL
    this.HALOAIOMEPG = null;   // wheel RR
    this.NNGMCDMNECH = [];     // GameObject[] wheel meshes
    this.KDCKKOMAGJC = [];     // ParticleSystem[] (exhaust) stopped on hit
    this.FMDPMCFCCCI = null;   // ParticleSystem played after hit
    this.ELCJDFHCLBG = 4;      // wheel count
    this.JMFFPEBJCCE = 0.2;    // suspension distance
    this.CHGMPFEHCDF = 2;      // spring
    this.EHPJLJCBMIJ = 0.01;   // damper
    this.JCKILBMALPM = 1;      // wheel radius
    this.CABOCNMMFEK = 560;    // motor torque
    this.ONLPPKCMCDJ = 1000;   // brake torque
    this.FINKJLKLFIG = 3;      // wheel mass
    this.MDJKIMNDFLI = 25;     // wheel steer
    this.ILHEBLCMAIJ = 0.8;    // forward friction stiffness
    this.EOMPPDDACJM = new Vector3(0, -0.25, 0);
    this.IIIAKHJPNOH = 500;    // rpm accel
    this.LOCDELNAGPO = 1000;   // rpm decel
    this.KKBLFPCHEIH = 0;      // smoothed rpm
    this.AJNDJCBPMFI = true;   // can hit the player
    this.BHOGONFNKJI = false;  // post-hit FX played
    this.CICKKCCHEIG = false;  // engine sound started
    this.EHCBKMHOBKP = 0;      // engine sound start time
    this.PMFPGPPPAPA = 0;      // hit FX time
    this.NOKEAHFEJAE = 10;
    this.JOFOGIDGMNA = true;   // rotate player car after hit
    this.OLHONOOFKPP = [];     // OMKEEHNKHPA[]
  }
  // build wheel colliders
  PPIBCCLIDMH() {
    const w = this.NNGMCDMNECH;
    this.CIALNADBDDB = w[0].transform;
    this.MFILOBNJBLD = w[1].transform;
    this.MIAMAMEGMHK = w[2].transform;
    this.HALOAIOMEPG = w[3].transform;
    this.OLHONOOFKPP = new Array(this.ELCJDFHCLBG).fill(null);
    this.OLHONOOFKPP[0] = this.DCPJJNIFCBM(this.CIALNADBDDB, 1);
    this.OLHONOOFKPP[1] = this.DCPJJNIFCBM(this.MFILOBNJBLD, 1);
    this.OLHONOOFKPP[2] = this.DCPJJNIFCBM(this.MIAMAMEGMHK, 2);
    this.OLHONOOFKPP[3] = this.DCPJJNIFCBM(this.HALOAIOMEPG, 2);
    for (const wh of this.OLHONOOFKPP) {
      if (!wh) continue;
      const wc = wh.EFOGAOHIGOE;
      wc.suspensionDistance = this.JMFFPEBJCCE;
      wc.suspensionSpring = { spring: this.CHGMPFEHCDF, damper: this.EHPJLJCBMIJ, targetPosition: 0.25 };
      wc.mass = this.FINKJLKLFIG;
      wc.radius = this.JCKILBMALPM;
    }
  }
  // create one wheel collider for wheel mesh DDHKDIEBPDH
  DCPJJNIFCBM(DDHKDIEBPDH, PLPKOBBAAJM) {
    if (!alive(DDHKDIEBPDH)) throw new Error('wheel not connected to script!');
    const w = new OMKEEHNKHPA();
    DDHKDIEBPDH.gameObject.layer = Layers.NameToLayer('car');
    const go = new GameObject('WheelCollider' + DDHKDIEBPDH.name);
    go.layer = Layers.NameToLayer('wheel');
    go.transform.SetParent(this.BHDKJIINJNL, true);
    go.transform.position = DDHKDIEBPDH.position.add(this.BHDKJIINJNL.up.mul(this.JMFFPEBJCCE * 0.5));
    const wc = addWheelCollider(go);
    wc.motorTorque = 0.00001;
    wc.wheelDampingRate = 5;
    w.CCLKEPFMBEA = DDHKDIEBPDH;
    w.MIPKEALMBHI = go;
    w.EFOGAOHIGOE = wc;
    w.CLFCMHAEIED = wc.transform;
    w.BNEEFDKFEHI = go.transform.localPosition;
    w.PLPKOBBAAJM = PLPKOBBAAJM;
    const ff = wc.forwardFriction || {}; ff.stiffness = this.ILHEBLCMAIJ; wc.forwardFriction = ff;
    return w;
  }
  Start() {
    this.BHDKJIINJNL = this.transform;
    this.NIIFDMDCOCF = this.GetComponent(Rigidbody);
    this.PPIBCCLIDMH();
    this.LOPCCLDAPAE();
    this.KIDOGHJAMDM();
  }
  LOPCCLDAPAE() { }
  // prepare the player car for the crash (bigger wheels, heavier)
  KIDOGHJAMDM() {
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(car)) return;
    const ws = car.CCHOFMFMCJL;
    if (ws && ws.length) {
      for (let i = 0; i < ws.length; i++) {
        const t = ws[i];
        if (!alive(t)) continue;
        const s = t.localScale;
        if (i === 0) t.localScale = new Vector3(4.0, s.y, s.z);
        else {
          t.localScale = new Vector3(5.0, s.y, s.z);
          const p = t.localPosition;
          t.localPosition = new Vector3(0.4, p.y, p.z);
        }
      }
    }
    car.NIIFDMDCOCF.mass = 500;
  }
  // motor input HCILEAABENL (-1..1): wheel visuals + torque
  HBLIIBFNKIE(HCILEAABENL) {
    const fdt = Time.fixedDeltaTime;
    let throttle = HCILEAABENL;
    if (HCILEAABENL < 0.0) { this.ONLPPKCMCDJ = this.CABOCNMMFEK * 0.5; throttle = 0; }
    const k = Math.min(1, Math.max(0, fdt * 3.0));
    let rpmSum = 0;
    const ws = this.OLHONOOFKPP || [];
    for (const w of ws) {
      const wc = w.EFOGAOHIGOE;
      const pose = wc.GetWorldPose ? wc.GetWorldPose() : { pos: w.CLFCMHAEIED.position, rot: w.CLFCMHAEIED.rotation };
      w.CCLKEPFMBEA.position = pose.pos;
      const e = pose.rot.eulerAngles;
      let ey = e.y;
      if (0.0 < w.CCLKEPFMBEA.localPosition.x) ey += this.MDJKIMNDFLI;
      if (!this.BHOGONFNKJI || 1.0 < w.CCLKEPFMBEA.position.y) w.CCLKEPFMBEA.rotation = Quaternion.Euler(e.x, ey, e.z);
      const rpm = wc.rpm || 0;
      if (!(G.Menu && G.Menu.MDLMIEDLJMC)) {
        const lp = w.CCLKEPFMBEA.localPosition;
        const hit = wc.GetGroundHit ? wc.GetGroundHit() : null;
        let y = lp.y;
        if (!hit) {
          w.OLMMLPHFHPG = false;
          y = y + k * ((w.BNEEFDKFEHI.y - this.JMFFPEBJCCE) - y);
          w.GFGJNJIHPHP = false;
        } else {
          const d = w.CCLKEPFMBEA.position.sub(hit.point);
          y = y - (Vector3.Dot(d, this.BHDKJIINJNL.up) - wc.radius);
          w.GFGJNJIHPHP = true;
        }
        w.CCLKEPFMBEA.localPosition = new Vector3(lp.x, y, lp.z);
      }
      rpmSum += rpm;
    }
    const rpmAbs = Math.abs(rpmSum * 10.0);
    let hi = this.KKBLFPCHEIH + fdt * this.IIIAKHJPNOH;
    const lo = this.KKBLFPCHEIH - fdt * this.LOCDELNAGPO;
    if (rpmAbs <= hi) hi = rpmAbs;
    if (rpmAbs < lo) hi = lo;
    this.KKBLFPCHEIH = hi;
    for (const w of ws) {
      w.EFOGAOHIGOE.motorTorque = throttle * ((throttle * ((this.CABOCNMMFEK * 3040.0) / 5000.0)) / this.ELCJDFHCLBG);
      w.EFOGAOHIGOE.brakeTorque = HCILEAABENL < 0.0 ? this.ONLPPKCMCDJ : 0;
    }
  }
  Update() {
    const SS = G.SoundScript || {};
    if (!this.CICKKCCHEIG) {
      if (this.BHDKJIINJNL.position.x < 14.0) {
        this.HMMPAIOPBJI();
        this.CICKKCCHEIG = true;
        this.EHCBKMHOBKP = Time.time;
      }
    } else {
      const d = Time.time - this.EHCBKMHOBKP;
      if (d < 1.2 && alive(SS.IMKHCBJCJNB)) SS.IMKHCBJCJNB.volume = Math.max(0, d) * (SS.OJMNAEKLGHK ?? 1) * 0.8;
    }
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (!this.BHOGONFNKJI && 0.0 < this.PMFPGPPPAPA && this.PMFPGPPPAPA < Time.time) {
      if (this.FMDPMCFCCCI) this.FMDPMCFCCCI.Play();
      const ps = car && car.ICNPJPLFCBA;
      if (ps) { ps.main.startSize = 1; ps.main.startLifetime = 3; ps.Play(); }
      G.CarController.HCILEAABENL = -1;
      this.BHOGONFNKJI = true;
    }
    if (this.JOFOGIDGMNA && alive(car) && 0.0 < this.PMFPGPPPAPA) {
      const ang = Vector3.Angle(Vector3.right.neg(), car.BHDKJIINJNL.forward);
      if (40.0 < ang) { car.BHDKJIINJNL.Rotate(car.BHDKJIINJNL.up.mul(-70.0 * Time.deltaTime)); return; }
      this.JOFOGIDGMNA = false;
    }
  }
  // start engine sound
  HMMPAIOPBJI() {
    const SS = G.SoundScript || {};
    if (!alive(SS.IMKHCBJCJNB)) return;
    SS.IMKHCBJCJNB.volume = 0;
    SS.GIGBLEBBIEK && SS.GIGBLEBBIEK(SS.IMKHCBJCJNB);
    this.CICKKCCHEIG = true;
  }
  OnCollisionEnter(PNKAOOKHBAI) {
    if (!this.AJNDJCBPMFI) return;
    if (PNKAOOKHBAI.gameObject.layer !== Layers.NameToLayer('car')) return;
    const CC = G.CarController;
    const car = CC && CC.KECGFPHIEHF;
    if (!car) return;
    car.GLEPFMJIDHF = false;
    this.AJNDJCBPMFI = false;
    this.PMFPGPPPAPA = Time.time + 1.55;
    for (const ps of this.KDCKKOMAGJC || []) if (alive(ps)) ps.emission.enabled = false;
    this.MDJKIMNDFLI = 0;
    CC.HCILEAABENL = 0;
    const rb = car.NIIFDMDCOCF;
    const v = rb.velocity, f = car.BHDKJIINJNL.forward;
    const d = Vector3.Dot(v, f);
    rb.velocity = v.sub(f.mul(d * 0.5));
    const at = PNKAOOKHBAI.transform.position.add(Vector3.up.mul(1.8)).add(Vector3.right.mul(1.5));
    rb.AddForceAtPosition(Vector3.right.mul(-700.0), at, ForceMode.Impulse);
    this.StartCoroutine(car.ECBLNBNGONF.OIKFBMHJDBN());
    const SS = G.SoundScript || {};
    if (SS.IMKHCBJCJNB) { SS.IMKHCBJCJNB.Stop(); SS.GIGBLEBBIEK && SS.GIGBLEBBIEK(SS.KOFBPJBKFNP); }
  }
  // yaw by OMDEMNKOGIG deg/s
  DFNPFBNJGBF(OMDEMNKOGIG) {
    const e = this.BHDKJIINJNL.rotation.eulerAngles;
    this.BHDKJIINJNL.rotation = Quaternion.Euler(e.x, e.y + Time.deltaTime * OMDEMNKOGIG, e.z);
  }
}
define('CarControllerBot', CarControllerBot);
G['CarControllerBot.OMKEEHNKHPA'] = OMKEEHNKHPA;
