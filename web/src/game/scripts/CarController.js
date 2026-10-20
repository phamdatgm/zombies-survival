// CarController: the player car (Unity WheelCollider vehicle, engine/throttle, nitro, gun, tilt control,
// damage/HP, upgrades from car progress, crash/explosion, effects, sounds, flip counting, finish handling).
// Ported from dump/decompiled/CarController*.c (+ ARM64 disassembly where the pseudo-C lost vector math).
// Axes (verified in code): the car drives along world +Z (start pin z<5, finish z, progress z/FJFNDGAMPHH),
// tilt torque is applied around world X (Vector3.right), X is spring-locked to 0 and yaw is spring-locked so that
// transform.right stays aligned with +/- world right.
import {
  Vector3, Quaternion, Color, Mathf, Random, Time, GameObject, Transform, Destroy, Instantiate, Resources,
  Rigidbody, Collider, BoxCollider, Physics, Layers, ForceMode, MeshFilter, MeshRenderer, AudioSource,
  ParticleSystem, Input, KeyCode, SceneManager, Screen, Debug, Component, SetSizeWithCurrentAnchors,
} from '../../engine/unity.js';
import { GameBehaviour, alive, define, FindObjectOfType, FindObjectsOfType } from '../base.js';
import { materialUniforms } from '../../engine/assets.js';
import { G } from '../G.js';
import { T } from '../util.js';

// ------------------------------------------------------------------ small helpers
const roundEven = (v) => { const f = Math.floor(v), d = v - f; if (d > 0.5) return f + 1; if (d < 0.5) return f; return (f % 2 === 0) ? f : f + 1; }; // C# Math.Round
const toInt = (v) => (Number.isFinite(v) ? Math.trunc(v) : -2147483648);
const randInt = (a, b) => Random.RangeInt(a, b);
// Instantiate(Resources.Load(name), ...) that tolerates a missing asset
const instRes = (name, ...a) => { const k = Resources.Load(name); return k ? Instantiate(k, ...a) : null; };
const isGarage = () => !!(G.Menu && G.Menu.MDLMIEDLJMC);
const daf = () => (G.Main ? G.Main.FBDDKIOEKDM : null) || null;            // player data (DAFNMLEKHAD)
const lvl = () => (G.Main ? G.Main.NMDEEOMHAGP : null) || null;             // current Level
const mainI = () => (G.Main && alive(G.Main.KECGFPHIEHF) ? G.Main.KECGFPHIEHF : null);
const menuI = () => (G.Menu && alive(G.Menu.KECGFPHIEHF) ? G.Menu.KECGFPHIEHF : null);
const SS = () => G.SoundScript || {};
const timeStr = (cs) => (G.Main && G.Main.CHJONPOFGFA ? G.Main.CHJONPOFGFA(cs) : (() => { const t = Math.max(0, cs | 0); const m = Math.floor(t / 6000), s = Math.floor(t / 100) % 60, c = t % 100; return m + ':' + String(s).padStart(2, '0') + '.' + String(c).padStart(2, '0'); })());
const ptsStr = (p, mode) => (G.Main && G.Main.HIIJGDANAIK ? G.Main.HIIJGDANAIK(p, mode) : String(p));
const tr = (k) => { const t = G.Translate && G.Translate.KECGFPHIEHF; return t && t.JJJNIPAKLJF ? t.JJJNIPAKLJF?.(k) : T(k); };
const log = (s) => { if (G.Main && G.Main.GEMDEAMAGPG) G.Main.GEMDEAMAGPG?.(s); };
const logErr = (s) => { if (G.Main && G.Main.EEKNCFLMGDP) G.Main.EEKNCFLMGDP?.(s); else console.warn(s); };
const setText = (t, s) => { if (t) t.text = String(s); };
const callS = (name, ...a) => { const s = G.SoundScript; if (s && typeof s[name] === 'function') return s[name](...a); return undefined; };
const lmBits = (lm) => (typeof lm === 'number' ? lm : lm && (lm.m_Bits ?? lm.value ?? lm.bits) !== undefined ? (lm.m_Bits ?? lm.value ?? lm.bits) : -5);
const btnColor = (btn, key) => { const c = btn && btn.colors && btn.colors[key]; return c ? new Color(c.r, c.g, c.b, c.a ?? 1) : Color.white; };
const imgOf = (btn) => (btn ? (btn.image || btn.targetGraphic || null) : null);
const isEvent = (l) => !!(l && (typeof l.IsEvent === 'function' ? l.IsEvent() : l.IsEvent));
const ecSort = (ec) => (ec ? (typeof ec.sort === 'function' ? ec.sort() : ec.sort) : 0);
const ecTimeLeft = (ec) => (ec ? (typeof ec.TimeLeft === 'function' ? ec.TimeLeft() : ec.TimeLeft) : 0);
// level-progress (DJKGLJOCFCE) accessors (private fields read through its getter methods)
const lpBest = (lp) => (lp.NIDLADCDMOH ? lp.NIDLADCDMOH?.() : lp.ONBPMGJNDOC) | 0;      // best points (0x14)
const lpTime = (lp) => (lp.DLEPICFCEEG ? lp.DLEPICFCEEG?.() : lp.OKKCFECENJB) | 0;      // best time (0x28)
const lpStars = (lp) => (lp.BENNLMFLFMH ? lp.BENNLMFLFMH?.() : lp.ALIHDAANEPI) | 0;     // 0x3C
const lpCount = (lp) => (lp.IHNJILKCLEL ? lp.IHNJILKCLEL?.() : lp.JOAGKFCNAEO) | 0;     // 0x40 finish count

// Material.SetColor("_Color") / SetFloat("_HUE"/"_Saturation"/"_Brightest") on the car paint material
// (shader "Mobile/Diffuse HUE Saturation Brightest", implemented in engine/assets.js with the game's GLSL formula)
function applyHueParams(mat, hue, sat, bright, col) {
  const u = materialUniforms(mat);
  if (!u || !u._HUE) { if (col && mat && mat.color && mat.color.setRGB) mat.color.setRGB(col.r, col.g, col.b); return; }
  u._HUE.value = hue; u._Saturation.value = sat; u._Brightest.value = bright;
  if (col) u.color.value.setRGB(col.r, col.g, col.b);
}

// ------------------------------------------------------------------ WheelCollider emulation
// The engine has no PhysX vehicle; this local component reproduces the UnityEngine.WheelCollider API used by the game
// (raycast suspension + spring/damper, simple slip-limited tire friction, wheel spin, rpm, GetWorldPose/GetGroundHit).
export class WheelColliderEmu extends Component {
  static typeName = 'WheelCollider';
  constructor(go, p) {
    super(go, p || {});
    this.radius = 0.5; this.suspensionDistance = 0.3; this.mass = 20; this.wheelDampingRate = 0.25; this.steerAngle = 0;
    this.motorTorque = 0; this.brakeTorque = 0; this.forceAppPointDistance = 0;
    this._spring = { spring: 35000, damper: 4500, targetPosition: 0.5 };
    this._ff = { extremumSlip: 0.4, extremumValue: 1, asymptoteSlip: 0.8, asymptoteValue: 0.5, stiffness: 1 };
    this._sf = { extremumSlip: 0.2, extremumValue: 1, asymptoteSlip: 0.5, asymptoteValue: 0.75, stiffness: 1 };
    this._w = 0; this._spin = 0; this._hit = null; this._x = 0; this._prevX = null; this._center = null;
  }
  get suspensionSpring() { return { ...this._spring }; } set suspensionSpring(v) { this._spring = { ...this._spring, ...v }; }
  get forwardFriction() { return { ...this._ff }; } set forwardFriction(v) { this._ff = { ...this._ff, ...v }; }
  get sidewaysFriction() { return { ...this._sf }; } set sidewaysFriction(v) { this._sf = { ...this._sf, ...v }; }
  get rpm() { return this._w * 60 / (2 * Math.PI); }
  get isGrounded() { return !!this._hit; }
  get attachedRigidbody() {
    let t = this.transform; while (t) { const rb = t.gameObject.GetComponent(Rigidbody); if (rb && !rb.destroyed) return rb; t = t.parent; } return null;
  }
  get sprungMass() {
    const rb = this.attachedRigidbody; if (!rb) return 0;
    if (this._smFrame !== Time.frameCount || this._smRb !== rb) {
      this._smFrame = Time.frameCount; this._smRb = rb;
      this._smN = rb.gameObject.GetComponentsInChildren(WheelColliderEmu, false).filter((w) => w.enabled).length || 1;
    }
    return rb.mass / this._smN;
  }
  OnDisable() { this._hit = null; this._prevX = null; }
  GetWorldPose() {
    const up = this.transform.up; const o = this.transform.position;
    const ext = this._hit ? Mathf.Clamp(this._hit.distance - this.radius, 0, this.suspensionDistance) : this.suspensionDistance;
    const pos = o.sub(up.mul(ext));
    const rot = this.transform.rotation.mul(Quaternion.Euler(this._spin, this.steerAngle, 0));
    return { pos, rot };
  }
  // returns a WheelHit-like object or null
  GetGroundHit() { return this._hit ? { point: this._hit.point, normal: this._hit.normal, collider: this._hit.collider, forwardSlip: this._slipF || 0, sidewaysSlip: this._slipS || 0, force: this._force || 0, forwardDir: this._fwd, sidewaysDir: this._side } : null; }
  _mask() {
    const L = Layers.matrix; const lay = this.gameObject.layer;
    return L ? (L[lay] >>> 0) : ~((1 << 8) | (1 << 9));
  }
  FixedUpdate() { this._simulate(Time.fixedDeltaTime); }
  _simulate(dt) {
    const rb = this.attachedRigidbody;
    if (!rb || rb.isKinematic || dt <= 0) { this._hit = null; return; }
    const up = this.transform.up, o = this.transform.position, r = this.radius, sd = this.suspensionDistance;
    // suspension raycast (ignores own rigidbody colliders and triggers)
    let hit = null;
    const hits = Physics.RaycastAll(o, up.neg(), sd + r, this._mask(), 1);
    for (const h of hits) { if (!h.collider || h.collider.isTrigger) continue; if (h.collider.attachedRigidbody === rb) continue; if (!hit || h.distance < hit.distance) hit = h; }
    this._hit = hit;
    const I = Math.max(1e-3, 0.5 * this.mass * r * r);
    // drive / brake / damping on the wheel spin
    this._w += (this.motorTorque / I) * dt;
    if (this.brakeTorque > 0) { const dw = this.brakeTorque / I * dt; this._w = Math.abs(this._w) <= dw ? 0 : this._w - Math.sign(this._w) * dw; }
    this._w -= this._w * Math.min(1, this.wheelDampingRate / I * dt);
    this._w = Mathf.Clamp(this._w, -300, 300);
    this._slipF = 0; this._slipS = 0; this._force = 0;
    if (hit) {
      const x = Mathf.Clamp(sd - (hit.distance - r), 0, sd);               // compression
      const xdot = this._prevX === null ? 0 : (x - this._prevX) / dt;
      this._prevX = x;
      const sp = this._spring; const ms = this.sprungMass;
      let F = ms * 9.81 * Math.max(0, Vector3.Dot(up, Vector3.up)) + sp.spring * (x - sp.targetPosition * sd) + sp.damper * xdot;
      if (F < 0) F = 0;
      this._force = F;
      const n = hit.normal.sqrMagnitude > 0 ? hit.normal.normalized : up;
      const pt = hit.point;
      rb.AddForceAtPosition(up.mul(F), pt, ForceMode.Force);
      const vp = rb.GetPointVelocity(pt);
      // bump stop: fully compressed and still closing
      const vUp = Vector3.Dot(vp, up);
      if (hit.distance <= r && vUp < 0) rb.AddForceAtPosition(up.mul(-vUp * ms), pt, ForceMode.Impulse);
      let fwd = this.transform.forward; fwd = fwd.sub(n.mul(Vector3.Dot(fwd, n))).normalized;
      let side = this.transform.right; side = side.sub(n.mul(Vector3.Dot(side, n))).normalized;
      this._fwd = fwd; this._side = side;
      const vLong = Vector3.Dot(vp, fwd), vLat = Vector3.Dot(vp, side);
      // longitudinal: impulse that makes the wheel roll, limited by friction
      const denom = (r * r) / I + 1 / Math.max(1, ms);
      let J = (this._w * r - vLong) / denom;
      const ff = this._ff; const Jmax = F * ff.stiffness * ff.extremumValue * dt;
      if (Math.abs(J) > Jmax) J = Math.sign(J) * F * ff.stiffness * (ff.asymptoteValue + ff.extremumValue) * 0.5 * dt; // sliding: between extremum and asymptote
      rb.AddForceAtPosition(fwd.mul(J), pt, ForceMode.Impulse);
      this._w -= J * r / I;
      const vAfter = vLong + J / Math.max(1, ms);
      this._slipF = (this._w * r - vAfter) / Math.max(Math.abs(vAfter), 1);
      // lateral: kill sideways velocity, limited by friction
      const sf = this._sf; const JlMax = F * sf.stiffness * sf.extremumValue * dt;
      const Jl = Mathf.Clamp(-vLat * ms, -JlMax, JlMax);
      rb.AddForceAtPosition(side.mul(Jl), pt, ForceMode.Impulse);
      this._slipS = vLat;
    } else {
      this._prevX = null;
    }
    this._spin = (this._spin + this._w * Mathf.Rad2Deg * dt) % 360;
  }
}
if (!G.WheelCollider) G.WheelCollider = WheelColliderEmu;

// ------------------------------------------------------------------ nested classes
class CarColor {
  constructor() {
    this.col_preview = new Color(1, 1, 1, 1); // 0x10
    this.col = new Color(1, 1, 1, 1);         // 0x20
    this.hue = 0;                             // 0x30
    this.saturation = 1;                      // 0x34
    this.brightest = 1;                       // 0x38
  }
}
// wheel record
class CILHKIPDPMN {
  constructor() {
    this.CCLKEPFMBEA = null;      // visual wheel Transform
    this.MIPKEALMBHI = null;      // wheel collider GameObject
    this.EFOGAOHIGOE = null;      // WheelCollider
    this.CLFCMHAEIED = null;      // wheel collider Transform
    this.CFPBHBGGNMF = Vector3.zero; // current visual local position
    this.BNEEFDKFEHI = Vector3.zero; // initial local position
    this.EIBJLBMILIG = 0;
    this.PLPKOBBAAJM = 0;         // GNOCGPDGKAE (Front=1, Back=2, Middle=6)
    this.GFGJNJIHPHP = false;     // grounded
  }
}

// ------------------------------------------------------------------ CarController
export class CarController extends GameBehaviour {
  static KECGFPHIEHF = null;          // instance
  static GLGHPCHBONI = 0;             // bonus silver shown on results (x2 offer)
  static IMEIEFHABHH = 2;             // seconds per HP point of garage regeneration
  static HCILEAABENL = -1;            // drive input: -1 brake/hold, 0 none, 1 accel, 1.02 nitro, >1.02 auto (finish)
  static GGDLOPNIKOB = 10;            // "ground" layer
  static AKFEPAADAIM = 0;
  static BOAPLCDFEEF = Vector3.zero;  // gun target point
  static MDLICIBKOGE = Vector3.zero;  // gun shot direction
  static LCJOMOHFJDI = false;         // race started
  static EPDJPJLHCDL = Vector3.zero;  // start position
  static MKEGHDPIIFK = false;         // race over (crash / finish in progress)
  static LNNMJCIFMGH = false;         // race over with finish (true) or crash (false)
  static FNHOMMPGFHK = false;         // finish "fly" animation mode
  static GLBOHAGOBFH = 0;             // cheapest upgrade price
  static PONMLHAPFEG = 50; static MAAIJIBJOPB = 30; static LJJPODOIAPD = 5; static DLOIBCICDLP = 0.2;
  static JJCFJLNNJEJ = 1.02; static GEAPDPCNFGD = 1.1; static HEICGCIDNME = 30; static MMNJLFJIOHI = 4.2;

  constructor(go, p) {
    super(go, p);
    this.NEJKJHMFBMJ = null;  // CarCollision
    this.ECBLNBNGONF = null;  // CarCamera
    this.CDDOBCENBOG = null;  // GUIGameplay
    this.BHDKJIINJNL = null;  // transform
    this.NIIFDMDCOCF = null;  // Rigidbody
    this.ECNAMAJCDGI = null;  // engine AudioSource
    this.PLFPPECDCLG = null;
    this.NCMHCOHPOOB = null;  // MoveBackground
    this.IBOHFAOLGDH = false; // event LearnToFly
    this.KFMKBHIDIAK = false; // event Sprint (time display)
    this.OJDANPGPKPB = false; // event custom points
    this.EMKMCEPMMBG = 0;     // points
    this.NFDOKGHMLFP = 0;     // silver earned
    this.DMPPOBLLDBE = 0;     // bonus silver
    this.HCBODNKILEA = 0;     // car id
    this.CIALNADBDDB = null; this.MFILOBNJBLD = null; this.MIAMAMEGMHK = null; this.HALOAIOMEPG = null; // wheel transforms
    this.NLNCKBKJAJG = null; this.EIAOHIJBDEN = null; this.LIELODIPKNE = null; this.OLDKKPPKHJI = null;
    this.NNGMCDMNECH = []; // wheel GameObjects
    this.JHFGLELIKAO = []; this.HDNABFFKLAJ = []; this.HKKILOJNCPG = []; // wheel upgrade parts (lvl 1/2/3)
    this.OFDMBDCMKEH = []; // parts hidden until crash
    this.EFJBAPKGMLA = []; // body elements (combined in the original)
    this.GEIPPLHMEMP = null; // bool[] hidden OFDMBDCMKEH
    this.ELCJDFHCLBG = 4;    // wheel count
    this.GKOPGBKHNCM = 0;    // wheels upgrade level
    this.AGKFMCFFBHB = 0; this.NDPILGPNEFL = 0;
    this.JMFFPEBJCCE = 0.2;  // suspension distance
    this.LNJIDPJNMJH = 0;
    this.CHGMPFEHCDF = 2;    // suspension spring
    this.EHPJLJCBMIJ = 0.01; // suspension damper
    this.JCKILBMALPM = 1;    // wheel radius
    this.JIPIHNCHBPP = 0;    // back wheel radius (if > 0)
    this.CABOCNMMFEK = 560;  // engine power (max)
    this.ANIFIACMGHD = 0;    // current engine power
    this.OGGEMMINMMO = 50;   // max speed km/h
    this.PHFKCFOILGD = 8;    // nitro acceleration
    this.NHDFFBKLKLP = 0.1;  // tilt factor
    this.ONLPPKCMCDJ = 1000; // brake torque
    this.FINKJLKLFIG = 3;    // wheel mass
    this.ILHEBLCMAIJ = 0.6;  // forward friction stiffness
    this.EOMPPDDACJM = new Vector3(0, -0.25, 0); // center of mass offset
    this.HEGAKOHMBEN = 1;    // damage slow-down factor (armor)
    this.PHKPMGOICOM = 100;  // HP
    this.FJOFMMAGAPG = 100;  // max HP
    this.CFMHHPIGJHD = 0;    // garage regenerated HP
    this.OHMALICOCHK = 0;    // stored HP (revive)
    this.EKNIOGDJDEJ = 0;    // nitro fuel
    this.PBDCHMBBDHO = 280;  // nitro use per second
    this.ICNCDKDODHO = 5000; // nitro capacity
    this.FJGENGBOJPA = -1;   // last shown nitro
    this.JFIDMPAHEAM = 0;
    this.EMAKNGFOILF = false; // low-HP warning active
    this.IJACHFMOLCD = false; this.IONAFPBDCCF = false;
    this.HHDCACBMPJK = 0;    // tilt input
    this.IENMIKJADJF = 1.3;  // tilt input magnitude
    this.HEEHBDDACOJ = null; // SerializableSprings.SpringDirVec3
    this.OFNPMLGJIHJ = 0;
    this.GEHAGJMADEG = 0;    // zombies killed
    this.KPMJLCMMNDN = 0; this.CNPMBEMNNCN = 0; this.CBMGIBJFILD = 0; // task counters (flips back/front, ...)
    this.FPJINMILBPP = false;
    this.EMDKNNFHHMF = 0;    // next flip sound time
    this.DFNKEBHDOIH = Vector3.zero;
    this.NELMAJDILND = new Map(); // Transform -> RaycastHit (gun targets)
    this.EGJHCGOHGOG = null; this.GBDIFNCLMCC = null; // bullet trails
    this.CHGPLACBKLE = null; this.POHGDMCOHFA = null; this.FBHBHHFCLDA = null; // impacts ground/metal/wood
    this.LIJODOABDGG = null; this.FNEIDBGLFIH = null; // gun fx pivots
    this.CABFBDCALLA = null; this.JCLBMEFDDPM = null; // muzzle flashes
    this.EOJFKBECPPD = null; this.JHDGBAALBMP = null; // gun objects
    this.NFMJGGFDDMH = 0;    // ammo
    this.HOFKAPIGLGA = [];   // ammo per gun level
    this.GJIPCFLKJFG = false; this.LGLBCDCKGBI = true; this.NHIHKCCBING = false; this.GMLHNFBOEGK = false;
    this.KKCECHKCJGO = false; // has gun
    this.KAMKFAFOMNP = false; // firing
    this.ODNLEFBNKAE = false; // tutorial pause action pending
    this.JDOJFKOCKFL = 0;
    this.GBLNJIKLCLP = null;  // nitro object
    this.FNLHPDCIFMG = [];    // nitro particles
    this.BNMFJFGALEJ = new Color(1, 1, 1, 0);
    this.JHNCCMPDHFA = 0;     // nitro particle base lifetime
    this.BLBEANOECBB = false; // has nitro
    this.MMIFMGIJPJH = false; // nitro on
    this.KCLGACJMMIA = false; // nitro fading out
    this.COMEHJFGEML = 0;
    this.CFLLLIOJOBD = new Array(5).fill(null); // armor objects
    this.KEGLIKDGCNC = new Array(5).fill(null);
    this.KNOBHBDEKAK = null;  // rotating part (saw/drill)
    this.OJKKICLLELI = 0;
    this.NLGGAKACCMC = null; this.FJGKIKPJBME = null; // smoke pivots
    this.KJOJAFKDHNH = null; this.PCMEAFEIBBC = null; // smoke particles
    this.PKCLOKOFBCA = null; this.DPEHNPPFHMD = null; // their emission modules
    this.IFLDCKJMFND = null;  // fire pivot
    this.DHJMCFBENCP = null;  // fire particle
    this.ICNPJPLFCBA = null;  // low-HP smoke particle
    this.AILDJLHIGKI = Vector3.zero;
    this.CEOJAIIMKBO = 0;
    this.MFEELNHEKHF = false; // destroyed
    this.ODFPBGGPPDK = false; // results shown
    this.MHDBPCGFFDO = 0;     // angle between car forward and world forward
    this.CBPOPFMFNFF = false; // event countdown done
    this.PKNGKDDKNIM = -1; this.KHDKNJAGGHH = 0;
    this.PCAMLKIMMPM = 0;     // race start time
    this.FPHFKCCPAEF = 0;     // race time (1/100 s)
    this.EMJNOGDABPK = 0; this.IHKGIAPDLHD = 0; this.CKGABDBFDIH = Vector3.zero; this.IAPFLMGHKIM = 0; // "too slow" detector
    this.ECBFJDOEKMJ = false; // tutorial scene level_000
    this.KJDJKLPNCHI = false;
    this.EFJKMEHHMAJ = false;
    this.LKPOMFJNLBM = null;  // finish GameObject
    this.FJFNDGAMPHH = 0;     // finish z
    this.CHANMFBMCDE = 0;     // max z reached
    this.GJLAJGCPBEF = 0;     // start y
    this.GJFMGCNOHEP = false; // event level
    this.ABPKOOLKPCL = { force: 300, dampingRatio: 0.6 };  // SpringParams (X lock)
    this.NEMMHHMHLEO = { force: 300, dampingRatio: 0.7 };  // SpringParams (yaw lock)
    this.DBBGNMLGOAO = 15;    // max yaw angle (degrees, cos after Awake)
    this.JMNDKKCCFML = 60;    // yaw correction torque
    this.HJLPGGPNDKA = null;  // body transform (wobble)
    this.LJJPJHDCOBJ = { force: 100, dampingRatio: 0.2 };  // SpringParams (body wobble)
    this.PDGPHDOPDDF = 7; this.DEMOMIOFOIC = 0.5; this.NGFEBDMLKLC = 0.2; // body wobble impulse
    this.GLEPFMJIDHF = true;  // stabilisation springs enabled
    this.OLGPOCHECAF = null; this.EBMKKIEGJCP = null; this.NHKLKMICMOB = null; // springs
    this.ANMJHACFFFH = 0;
    this.GNDOHJDDLAG = new Array(4).fill(null); // CarColor[]
    this.NHEKIOLEIDI = [];    // colorable renderers
    this.ILNODOPHGCL = null;
    this.CCHOFMFMCJL = [null, null];
    this.EGAAKMKKMGA = null;  // combined body object
    this.IICGKJFAHFB = 0;
    this.KEEAFACOAJO = 0;     // flip state (CNMOHEHJDBF None/Front/Back)
    this.ODPJLHICABM = 0;     // flips (one way)
    this.IOKMCIGOMNI = 0;     // flips (other way)
    this.IIIAKHJPNOH = 500; this.LOCDELNAGPO = 1000; // rpm smoothing up/down
    this.KKBLFPCHEIH = 0;     // smoothed wheel rpm
    this.FIMKCLOEDGC = 0; this.DLCLMFKJHGL = 0; this.NNPCIJCJJLA = 0;
    this.GGGBCBPICJN = false; // revive mode (clone flying parts)
    this.IBNAOLDEMOB = Vector3.zero; // revive position
    this.FPLDMGGFKED = false;
    this.HDMBHIMJKBI = false;
    this.CFFNHNOABBF = 0;     // revive window end time (-1 = no revive)
    this.EDFNCPFNAKE = new Map(); // MeshRenderer -> Material[] (originals)
    this.GKMDDGOBFAF = [];    // cloned flying parts
    this.OLHONOOFKPP = [];    // CILHKIPDPMN[] wheels
    this._hiddenByClone = []; // [web] originals hidden by AOOHMIALOJP in revive mode
  }
  onDeserialize(p) {
    super.onDeserialize(p);
    // serialized nested types → runtime objects
    if (this.HEEHBDDACOJ && !(G.Spring && this.HEEHBDDACOJ instanceof G.Spring)) {
      const S = G.SerializableSprings && G.SerializableSprings.SpringDirVec3;
      this.HEEHBDDACOJ = S ? S.from(this.HEEHBDDACOJ) : this.HEEHBDDACOJ;
    }
    if (Array.isArray(this.GNDOHJDDLAG)) this.GNDOHJDDLAG = this.GNDOHJDDLAG.map((c) => { const o = new CarColor(); if (c) Object.assign(o, c); return o; });
    for (const k of ['NNGMCDMNECH', 'JHFGLELIKAO', 'HDNABFFKLAJ', 'HKKILOJNCPG', 'OFDMBDCMKEH', 'FNLHPDCIFMG', 'CFLLLIOJOBD', 'NHEKIOLEIDI', 'HOFKAPIGLGA']) if (!Array.isArray(this[k])) this[k] = this[k] ? [this[k]] : [];
  }

  // C# properties (accessors not present in the dump; mapped to the matching methods) TODO(verify)
  get CHBHHNLILIP() { return this.AGKGCILIANE(); }
  get OKFAJHNCEKN() { return this.DLFDOEBINCP(); }
  set OKFAJHNCEKN(v) { this.NDIMMLBIFCI(v); }

  // add HighlightEffect (HighlightPlus) to an object
  EGGPODAIEBC(MIPKEALMBHI) {
    if (!MIPKEALMBHI) return;
    if (G.HighlightEffect) MIPKEALMBHI.AddComponent(G.HighlightEffect);
  }

  Awake() {
    if (alive(CarController.KECGFPHIEHF) && CarController.KECGFPHIEHF !== this && !isGarage()) {
      if (!(G.CarReplay && G.CarReplay.DJKMCIEIAMH && G.CarReplay.DJKMCIEIAMH?.())) return;
      this.KIHGPFPOIHP(); // (inlined in the original)
      return;
    }
    CarController.KECGFPHIEHF = this;
    this.BHDKJIINJNL = this.transform;
    this.NIIFDMDCOCF = this.GetComponent(Rigidbody);
    this.ECNAMAJCDGI = this.GetComponent(AudioSource);
    this.OLGPOCHECAF = new G.SpringFloat();
    this.OLGPOCHECAF.KOGLNCIFCJK?.(this.ABPKOOLKPCL);
    this.EBMKKIEGJCP = new G.SpringDirVec3();
    this.EBMKKIEGJCP.KOGLNCIFCJK?.(this.NEMMHHMHLEO);
    this.NHKLKMICMOB = new G.SpringAngVec3();
    this.NHKLKMICMOB.KOGLNCIFCJK?.(this.LJJPJHDCOBJ);
    this.NHKLKMICMOB.radianOutput = false;
    this.DBBGNMLGOAO = Math.cos(this.DBBGNMLGOAO * 0.017453292); // cosf (PLT verified); compared with Dot(right, Vector3.right)
  }

  // replay "ghost" car setup: strip gameplay scripts, make the car kinematic, ghost material
  KIHGPFPOIHP() {
    if (!(G.CarReplay && G.CarReplay.DJKMCIEIAMH && G.CarReplay.DJKMCIEIAMH?.())) return;
    const wheel = Layers.NameToLayer('wheel');
    Destroy(this);
    this.enabled = false; // [web] engine destroys at frame end: make sure Start/Update never run on the ghost
    const cc = this.GetComponent('CarCollision');
    if (alive(cc)) { Destroy(cc); cc.enabled = false; }
    if (!this.GBLNJIKLCLP) return;
    this.GBLNJIKLCLP.SetActive(true);
    if (!this.EOJFKBECPPD) return;
    this.EOJFKBECPPD.SetActive(true);
    if (alive(this.JHDGBAALBMP)) this.EOJFKBECPPD.SetActive(true);
    for (const w of this.NNGMCDMNECH || []) this.KDHHDKMBELG(w, false);
    const rb = this.GetComponent(Rigidbody);
    if (!rb) return;
    rb.isKinematic = true;
    const rep = G.CarReplay ? this.gameObject.AddComponent(G.CarReplay) : null;
    if (rep) {
      rep.EMDCJLCBJFJ = true;
      rep.JMFFPEBJCCE = this.JMFFPEBJCCE;
      rep.JCKILBMALPM = this.JCKILBMALPM;
      if (this.JIPIHNCHBPP > 0) rep.JIPIHNCHBPP = this.JIPIHNCHBPP;
    }
    const au = this.gameObject.GetComponent(AudioSource);
    if (alive(au)) Destroy(au);
    const ghost = mainI() ? mainI().PBMGAKJJIMJ : null;
    // [web] the original combines every enabled non-wheel mesh into one MeshFilter with the ghost material and
    // destroys the non-wheel children; mesh combining is not available, so the children keep their own meshes
    // and only get the ghost material (their colliders are disabled instead of destroying them).
    for (const mf of this.GetComponentsInChildren(MeshFilter)) {
      const mr = mf.GetComponent(MeshRenderer);
      if (!alive(mr) || !mr.enabled || !mr.gameObject.activeInHierarchy || mr.gameObject.layer === wheel) continue;
      if (ghost) mr.material = ghost;
    }
    this.gameObject.SetActive(true);
    for (const ch of this.transform) {
      if (ch.gameObject.layer === wheel) {
        const mr = ch.GetComponent(MeshRenderer);
        if (mr && ghost) mr.material = ghost;
        if (rep) (rep.LFNBGBNOLOA || (rep.LFNBGBNOLOA = [])).push(ch);
      } else {
        for (const col of ch.gameObject.GetComponentsInChildren(Collider, true)) col.enabled = false;
      }
    }
  }

  // event-contest comparison: is the new result better than the reference (points, time vs ref points, ref time)
  DADAHEFJBFC(FECKNINKJBG, JGBFJILJCMN, OCMLDOHHNJI, HGCIDJKHPLN) {
    const ec = lvl() && lvl().event_contest;
    const s = ecSort(ec);
    if (s === 0) {
      if (OCMLDOHHNJI < FECKNINKJBG) return true;
      return (0 < JGBFJILJCMN && FECKNINKJBG === OCMLDOHHNJI) && JGBFJILJCMN < HGCIDJKHPLN;
    }
    if (s === 1) return OCMLDOHHNJI < FECKNINKJBG;
    if (JGBFJILJCMN < 1) return false;
    return HGCIDJKHPLN === 0 || (0 < HGCIDJKHPLN && JGBFJILJCMN < HGCIDJKHPLN);
  }

  IBDIAPCKNDO() { this.HHDCACBMPJK = this.IENMIKJADJF; }   // tilt right
  FPLOKMKMFLL() { this.HHDCACBMPJK = -this.IENMIKJADJF; }  // tilt left
  HCBBKPNEMLE() { this.CFFNHNOABBF = -1; }                 // revive no longer possible
  JHMJACIPINH() { CarController.HCILEAABENL = 1; }         // accelerate

  // slow down: remove a fraction of the forward velocity (armor factor HEGAKOHMBEN if FLKHNKPAHGK)
  GCHFPNMJHCA(GFDIKJLIBPM, FLKHNKPAHGK) {
    const rb = this.NIIFDMDCOCF; if (!rb) return;
    const m = FLKHNKPAHGK ? this.HEGAKOHMBEN : 1;
    const v = rb.velocity, f = this.BHDKJIINJNL.forward;
    const d = Vector3.Dot(v, f);
    rb.velocity = v.sub(f.mul(d * (GFDIKJLIBPM * m)));
  }

  // combine child meshes (draw-call optimisation in the original). [web] mesh combining is not available: the
  // children stay as they are; only the bookkeeping that gameplay relies on is kept.
  KDHHDKMBELG(DEPIBMKFMDA, CCMGNIDEBKP) {
    if (!DEPIBMKFMDA) return;
    const mfs = DEPIBMKFMDA.GetComponentsInChildren(MeshFilter);
    if (CCMGNIDEBKP && mfs.length - 1 < 2) return;
    if (CCMGNIDEBKP) {
      for (let i = 1; i < mfs.length; i++) {
        const go = mfs[i].gameObject;
        let isColor = false;
        for (const r of this.NHEKIOLEIDI || []) if (r && r.gameObject === go) isColor = true;
        if (alive(this.KNOBHBDEKAK)) { if (isColor || this.KNOBHBDEKAK === go.transform) continue; } else if (isColor) continue;
        this.EFJBAPKGMLA.push(go); // would be merged into EGAAKMKKMGA and deactivated
      }
    }
    if (G.CarReplay && G.CarReplay.DJKMCIEIAMH && G.CarReplay.DJKMCIEIAMH?.()) DEPIBMKFMDA.layer = Layers.NameToLayer('wheel');
  }

  // tutorial: show the first help item at level start
  MNMBFIBHFBB() {
    const gui = this.CDDOBCENBOG; if (!gui || !gui.LMNKADFDPMO) return;
    const GG = G.GUIGameplay || {};
    const cur = GG.AOFDLCGLMDI ?? -1;
    if (!(cur < gui.LMNKADFDPMO.length) || !(cur < 0)) return;
    const l = lvl(); if (!l || l.id !== -1) return;
    const item = gui.LMNKADFDPMO[0];
    if (!(item && item.is_repeatability)) { const d = daf(); if (d && d.BLGOKNOOEEO && d.BLGOKNOOEEO?.(0)) return; }
    gui.MGNNDFEFHAH?.(0, false);
  }

  GGPLBFNGFAP() { const v = Random.value; return v + v - 1; } // random -1..1

  // set ammo
  NDIMMLBIFCI(ALLBGCHDGNC) {
    this.NFMJGGFDDMH = ALLBGCHDGNC;
    const gui = this.CDDOBCENBOG; if (!alive(gui)) return;
    setText(gui.NGMFAKIBAGI, this.NFMJGGFDDMH);
    if (this.NFMJGGFDDMH < 1) {
      if (!this.NHIHKCCBING) {
        const img = imgOf(gui.ECBEBEJKHKM);
        if (img) img.color = btnColor(gui.ECBEBEJKHKM, 'm_DisabledColor');
        this.NHIHKCCBING = true; this.GJIPCFLKJFG = false;
      }
    } else if (!this.GJIPCFLKJFG) {
      this.GJIPCFLKJFG = true; this.NHIHKCCBING = false;
      const img = imgOf(gui.ECBEBEJKHKM);
      if (img) img.color = new Color(1, 1, 1, 1);
    }
  }

  // engine / wheels: motor & brake torque, visual wheel poses, rpm smoothing (called from FixedUpdate)
  HBLIIBFNKIE(HCILEAABENL) {
    if (this.MFEELNHEKHF) return;
    if (1.02 < HCILEAABENL && !CarController.MKEGHDPIIFK) return;
    const speed = this.AGKGCILIANE();
    const vmax = HCILEAABENL > 1 ? this.OGGEMMINMMO + 10 : this.OGGEMMINMMO;
    const thr = speed > vmax ? 0 : HCILEAABENL;
    const dt = Time.fixedDeltaTime;
    let t0 = thr;
    if (thr < 0) { this.ONLPPKCMCDJ = this.CABOCNMMFEK * 0.5; t0 = 0; }
    const up = this.BHDKJIINJNL.up;
    const k = Mathf.Clamp01(dt * 3);
    let rpm = 0;
    const W = this.OLHONOOFKPP || [];
    for (const w of W) {
      if (!w || !w.EFOGAOHIGOE) continue;
      const wc = w.EFOGAOHIGOE;
      const pose = wc.GetWorldPose();
      w.CCLKEPFMBEA.rotation = pose.rot;
      const r = wc.rpm;
      if (!isGarage()) {
        const hit = wc.GetGroundHit();
        if (!hit) {
          w.GFGJNJIHPHP = false;
          w.CFPBHBGGNMF.y = w.CFPBHBGGNMF.y + k * ((w.BNEEFDKFEHI.y - this.JMFFPEBJCCE) - w.CFPBHBGGNMF.y);
        } else {
          let d = Vector3.Dot(up, w.CCLKEPFMBEA.position.sub(hit.point)) - wc.radius;
          d = Mathf.Clamp(d, -this.JMFFPEBJCCE, this.JMFFPEBJCCE);
          w.CFPBHBGGNMF.y = w.CFPBHBGGNMF.y - d;
          w.GFGJNJIHPHP = true;
          this.GAODICJFPIP(hit.forwardSlip);
        }
        w.CCLKEPFMBEA.localPosition = new Vector3(w.CFPBHBGGNMF.x, w.CFPBHBGGNMF.y, w.CFPBHBGGNMF.z);
      }
      rpm += r;
    }
    rpm = Math.abs(rpm * 10);
    const cur = this.KKBLFPCHEIH;
    const hi = cur + dt * this.IIIAKHJPNOH, lo = cur - dt * this.LOCDELNAGPO;
    let v = rpm > hi ? hi : rpm; if (!(rpm >= lo)) v = lo;
    this.KKBLFPCHEIH = v;
    let power = this.ANIFIACMGHD;
    const sp = this.AGKGCILIANE();
    if (sp < 10) power *= 0.6; else if (sp < 20) power *= 0.8;
    const torque = t0 * ((t0 * ((power * 3040) / 5000)) / this.ELCJDFHCLBG);
    for (const w of W) {
      if (!w || !w.EFOGAOHIGOE) continue;
      w.EFOGAOHIGOE.motorTorque = torque;
      w.EFOGAOHIGOE.brakeTorque = thr < 0 ? this.ONLPPKCMCDJ : 0;
    }
  }

  AGKGCILIANE() { return this.NIIFDMDCOCF ? this.NIIFDMDCOCF.velocity.magnitude * 3.6 : 0; } // speed km/h

  // traction control: reduce engine power while the wheels slip
  GAODICJFPIP(IILDBBGLAKH) {
    if (0.3 <= IILDBBGLAKH && this.CABOCNMMFEK / 3 < this.ANIFIACMGHD) { this.ANIFIACMGHD = this.ANIFIACMGHD - 10; return; }
    this.ANIFIACMGHD = this.ANIFIACMGHD + 10;
    if (this.ANIFIACMGHD <= this.CABOCNMMFEK) return;
    this.ANIFIACMGHD = this.CABOCNMMFEK;
  }

  // HP bar / text
  OFLMLGPBOBL() {
    const gui = this.CDDOBCENBOG; if (!gui) return;
    if (gui.LOAJLCHCJKG) gui.LOAJLCHCJKG.fillAmount = this.PHKPMGOICOM / this.FJOFMMAGAPG;
    if (gui.PHKPMGOICOM) setText(gui.PHKPMGOICOM.CIDKMFLFJEJ, this.PHKPMGOICOM);
  }

  // wheels setup (upgrade level GJHGNOEOAAG)
  PPIBCCLIDMH(GJHGNOEOAAG) {
    const add = [0.3, 0.5, 0.8];
    if (GJHGNOEOAAG - 1 >= 0 && GJHGNOEOAAG - 1 < 3) this.ILHEBLCMAIJ = this.ILHEBLCMAIJ + add[GJHGNOEOAAG - 1];
    for (const g of this.JHFGLELIKAO || []) if (g) g.SetActive(0 < GJHGNOEOAAG);
    for (const g of this.HDNABFFKLAJ || []) if (g) g.SetActive(1 < GJHGNOEOAAG);
    for (const g of this.HKKILOJNCPG || []) if (g) g.SetActive(2 < GJHGNOEOAAG);
    const N = this.NNGMCDMNECH || [];
    const tf = (i) => (N[i] ? N[i].transform : null);
    this.CIALNADBDDB = tf(0); this.MFILOBNJBLD = tf(1); this.MIAMAMEGMHK = tf(2); this.HALOAIOMEPG = tf(3);
    if (N.length === 6) { this.NLNCKBKJAJG = tf(4); this.EIAOHIJBDEN = tf(5); }
    if (N.length === 8) { this.NLNCKBKJAJG = tf(4); this.EIAOHIJBDEN = tf(5); this.LIELODIPKNE = tf(6); this.OLDKKPPKHJI = tf(7); }
    let n = N.length;
    if (n < 4) { Debug.LogError('Wheels error 2'); return; }
    if (n === 5) n = 4;
    if (n === 7) n = 6;
    this.ELCJDFHCLBG = n;
    const W = [];
    W.push(this.DCPJJNIFCBM(this.CIALNADBDDB, 1));
    W.push(this.DCPJJNIFCBM(this.MFILOBNJBLD, 1));
    W.push(this.DCPJJNIFCBM(this.MIAMAMEGMHK, 2));
    W.push(this.DCPJJNIFCBM(this.HALOAIOMEPG, 2));
    if (n === 6 || n === 8) { W.push(this.DCPJJNIFCBM(this.NLNCKBKJAJG, 6)); W.push(this.DCPJJNIFCBM(this.EIAOHIJBDEN, 6)); }
    if (n === 8) { W.push(this.DCPJJNIFCBM(this.LIELODIPKNE, 6)); W.push(this.DCPJJNIFCBM(this.OLDKKPPKHJI, 6)); }
    this.OLHONOOFKPP = W.filter(Boolean);
    for (const w of this.OLHONOOFKPP) {
      const wc = w.EFOGAOHIGOE;
      wc.suspensionDistance = this.JMFFPEBJCCE;
      const s = wc.suspensionSpring; s.spring = this.CHGMPFEHCDF; s.damper = this.EHPJLJCBMIJ; s.targetPosition = 0.25; wc.suspensionSpring = s;
      wc.mass = this.FINKJLKLFIG;
      let rad = this.JIPIHNCHBPP;
      if (rad <= 0 || w.PLPKOBBAAJM !== 2) rad = this.JCKILBMALPM;
      wc.radius = rad;
    }
    if (!isGarage()) return;
    this.CEKLNGNBGLP();
  }

  // create the wheel collider object for a visual wheel
  DCPJJNIFCBM(DDHKDIEBPDH, PLPKOBBAAJM) {
    if (!DDHKDIEBPDH) { console.error('wheel not connected to script!'); return null; }
    const w = new CILHKIPDPMN();
    DDHKDIEBPDH.gameObject.layer = Layers.NameToLayer('car');
    const go = new GameObject('WheelCollider' + DDHKDIEBPDH.name);
    go.layer = Layers.NameToLayer('wheel');
    go.transform.SetParent(this.BHDKJIINJNL, true);
    go.transform.position = DDHKDIEBPDH.position.add(this.BHDKJIINJNL.up.mul(this.JMFFPEBJCCE * 0.5));
    const wc = go.AddComponent(G.WheelCollider || WheelColliderEmu, {});
    wc.motorTorque = 1e-5;
    wc.wheelDampingRate = 5;
    w.CCLKEPFMBEA = DDHKDIEBPDH;
    w.MIPKEALMBHI = go;
    w.EFOGAOHIGOE = wc;
    w.CLFCMHAEIED = wc.transform;
    const lp = go.transform.localPosition;
    w.CFPBHBGGNMF = lp.clone();
    w.BNEEFDKFEHI = lp.clone();
    w.PLPKOBBAAJM = PLPKOBBAAJM;
    const ff = wc.forwardFriction; ff.stiffness = this.ILHEBLCMAIJ; wc.forwardFriction = ff;
    return w;
  }

  // garage: put the visual wheels on the ground
  CEKLNGNBGLP() {
    for (const w of this.OLHONOOFKPP || []) {
      if (!w || !w.CLFCMHAEIED) continue;
      const wc = w.EFOGAOHIGOE;
      const o = w.CLFCMHAEIED.position;
      const up = this.BHDKJIINJNL.up;
      const hit = Physics.Raycast(o, up.neg(), 2, 1 << (CarController.GGDLOPNIKOB & 31));
      if (hit) {
        const p = w.CCLKEPFMBEA.position;
        w.CCLKEPFMBEA.position = new Vector3(p.x, hit.point.y + wc.radius, p.z);
      }
    }
  }

  // gun hit on a target with tag FAEEKPCAEHE (CarCollision handlers, PLFKMIMGIDF.Fire = 1)
  EHLPBKIEJAL(FAEEKPCAEHE, DNEMDNHLGAP) {
    const cc = this.NEJKJHMFBMJ;
    if (!DNEMDNHLGAP || !cc) return;
    const go = DNEMDNHLGAP.gameObject;
    switch (FAEEKPCAEHE) {
      case 'bat': cc.FHFJHOHDHKM?.(1, go, DNEMDNHLGAP); break;
      case 'tramplin_barrel': cc.FMLEBCMDJID?.(1, go, DNEMDNHLGAP); break;
      case 'wood_box': cc.GBLOCBGPAPN?.(1, go, DNEMDNHLGAP); break;
      case 'barrel': case 'barrel_throw': case 'barrel_big': case 'barrel_with_corpses': cc.GLBHMAKJKHB?.(1, go, DNEMDNHLGAP); break;
      case 'zombie': cc.JDLKLAGFELO?.(1, go, DNEMDNHLGAP); break;
      default: break;
    }
  }

  // revive offer (after a fatal hit): wait 3 s, then show the revive window
  *JMCGEKEOJHD(BKMLEMNMGPJ) {
    CarController.MKEGHDPIIFK = true;
    CarController.HCILEAABENL = 0;
    this.HHDCACBMPJK = 0;
    yield 3;
    this.CFFNHNOABBF = Time.time + 6;
    const gui = this.CDDOBCENBOG;
    if (gui && gui.OAEENEPDLMI) {
      gui.OAEENEPDLMI.HEGIHOAJOKK?.(false);
      if (BKMLEMNMGPJ && gui.OANINFFKBGA) gui.OANINFFKBGA.SetActive(false);
    }
  }

  // HP warnings (low-HP smoke and blinking)
  OJOPPNIEGLL() {
    const gui = this.CDDOBCENBOG; if (!alive(gui)) return;
    this.OFLMLGPBOBL();
    if (!this.IONAFPBDCCF) {
      if (gui.LOAJLCHCJKG && gui.LOAJLCHCJKG.fillAmount < 0.3) {
        this.IONAFPBDCCF = true; this.EMAKNGFOILF = true; gui.CGMBBHGDFCM = 0;
        if (alive(this.ICNPJPLFCBA)) this.ICNPJPLFCBA.Play(true);
        return;
      }
    }
    if (!this.IJACHFMOLCD) {
      if (gui.LOAJLCHCJKG && gui.LOAJLCHCJKG.fillAmount < 0.6) { this.EMAKNGFOILF = true; this.IJACHFMOLCD = true; gui.CGMBBHGDFCM = 0; }
    }
  }

  // pause the low-HP smoke
  KIPCFFHJBPB() {
    if (this.HCBODNKILEA === 0) return;
    if (alive(this.ICNPJPLFCBA) && this.ICNPJPLFCBA.isPlaying) { this.ICNPJPLFCBA.Pause(); this.CEOJAIIMKBO = Time.time; }
  }

  // event finish: report the result compared to the replay ghost
  PFANBJGLEJO() {
    const l = lvl(); if (!l) return;
    const rg = l.event_replay_ghost;
    if (!rg) log('event_replay_ghost is NUL!!!!!');
    else log('points: ' + this.EMKMCEPMMBG + ' vs ' + rg.points + ', time: ' + this.FPHFKCCPAEF + ' vs ' + rg.time);
    const better = !rg ? true : this.DADAHEFJBFC(this.EMKMCEPMMBG, this.FPHFKCCPAEF, rg.points, rg.time);
    if (this.CDDOBCENBOG) this.CDDOBCENBOG.MFOBEMEHKEO?.(better, this.EMKMCEPMMBG, this.FPHFKCCPAEF);
  }

  // fire button
  ENFNKCGHPPG() {
    const ts = Time.timeScale;
    if (CarController.LCJOMOHFJDI && this.KKCECHKCJGO && !this.KAMKFAFOMNP && (ts === 1 || (ts === 0 && this.ODNLEFBNKAE))) {
      if (0 < this.NFMJGGFDDMH) this.StartCoroutine(this.ENFNKCGHPPG_co(3));
      if (this.NFMJGGFDDMH < 1 && alive(this.CDDOBCENBOG)) this.CDDOBCENBOG.HNKHJLDJMHB?.(tr('OUT_OF_AMMO'), 5, true, false);
    }
    if (Time.timeScale === 0 && this.ODNLEFBNKAE) {
      if (this.CDDOBCENBOG) this.CDDOBCENBOG.OKIGBJNMOOP?.();
      this.ODNLEFBNKAE = false;
    }
  }

  DLFDOEBINCP() { return this.NFMJGGFDDMH; } // ammo

  // gun burst coroutine (IEnumerator ENFNKCGHPPG(int count))
  *ENFNKCGHPPG_co(LKEBAMJFFKH) {
    const C = CarController;
    let count = LKEBAMJFFKH;
    let key = null;               // <key>5__2
    let final_target_tag = '';    // <final_target_tag>5__3
    let is_destroy_target = false;
    this.KAMKFAFOMNP = true;
    this.BALBOFMAKKO();
    this.NDIMMLBIFCI(this.DLFDOEBINCP() - 1);
    key = null;
    this.NELMAJDILND.clear();
    C.BOAPLCDFEEF = Vector3.zero;
    const pos = this.BHDKJIINJNL.position, fwd = this.BHDKJIINJNL.forward, up = this.BHDKJIINJNL.up;
    const rb = this.NIIFDMDCOCF;
    const castNotSelf = (o, d, dist, mask) => {
      let best = null;
      for (const h of Physics.RaycastAll(o, d, dist, mask)) { if (h.collider && rb && h.collider.attachedRigidbody === rb) continue; if (!best || h.distance < best.distance) best = h; }
      return best;
    };
    for (let i = -3; i !== 4; i++) {
      const mask = lmBits(mainI() ? mainI().DBJNKIMHIIK : -5);
      const o = pos.add(up.mul(i / 1.5)).add(fwd.mul(2.5 - i));
      const hit = castNotSelf(o, fwd, 30, mask);
      if (hit) {
        const t = hit.collider.gameObject.transform;
        if (!this.NELMAJDILND.has(t) && hit.collider.gameObject.layer !== C.GGDLOPNIKOB) this.NELMAJDILND.set(t, hit);
        if (4 < this.NELMAJDILND.size) break;
      }
    }
    for (const [k] of this.NELMAJDILND) {
      if (!alive(key)) { key = k; continue; }
      if (Vector3.Distance(k.position, pos) < Vector3.Distance(key.position, pos)) key = k;
    }
    let muzzle = pos;
    if (alive(this.LIJODOABDGG)) muzzle = this.LIJODOABDGG.position; else Debug.LogError('Not found gun_effect_trans!!!');
    final_target_tag = '';
    let ok;
    const V = Vector3;
    if (!alive(key)) {
      key = null;
      const hit = castNotSelf(muzzle, fwd, 30, 1 << (C.GGDLOPNIKOB & 31));
      if (hit) {
        key = hit.collider.gameObject.transform;
        this.NELMAJDILND.set(key, hit);
        C.BOAPLCDFEEF = hit.point;
        if (alive(this.CHGPLACBKLE)) { if (this.CHGPLACBKLE.LIEHBGFFHFF) this.CHGPLACBKLE.LIEHBGFFHFF.position = C.BOAPLCDFEEF; this.CHGPLACBKLE.BLNLIDHOLOJ?.(); }
      }
      ok = false;
    } else {
      const name = key.gameObject.name;
      C.BOAPLCDFEEF = key.position;
      let impact = null;
      const has = (s) => name.includes(s);
      if (has('barrel_big') || has('zombie_crawl') || has('zombie_dog') || has('zombie_cat')) C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up.mul(0.3)).add(V.forward.mul(-0.5));
      else if (has('walk_shield')) { C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up).add(V.forward.mul(-0.8)); impact = this.POHGDMCOHFA; }
      else if (has('wood_pack_')) { C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up).add(V.forward.mul(-0.8)); impact = this.FBHBHHFCLDA; }
      else if (has('bus_destroy')) { C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up).add(V.forward.mul(-1.2)); impact = this.POHGDMCOHFA; }
      else if (has('car_pack_destroy')) { C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up.mul(0.4)).add(V.forward.mul(-0.5)); impact = this.POHGDMCOHFA; }
      else if (has('tramplin_barrel')) C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up.mul(1.5)).add(V.forward.mul(2));
      else if (has('halloween_crow')) C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up.mul(0.3)).add(V.forward.mul(-0.5));
      else C.BOAPLCDFEEF = C.BOAPLCDFEEF.add(V.up).sub(V.forward);
      if (alive(impact)) { if (impact.LIEHBGFFHFF) impact.LIEHBGFFHFF.position = C.BOAPLCDFEEF; impact.BLNLIDHOLOJ?.(); }
      const d = C.BOAPLCDFEEF.sub(muzzle);
      if (castNotSelf(muzzle, d, d.magnitude, 1 << (C.GGDLOPNIKOB & 31))) { log('ground hit.'); ok = false; }
      else { final_target_tag = key.gameObject.tag; ok = true; }
    }
    this.CHPDPBCCBJP(1);
    is_destroy_target = false;
    callS('GIGBLEBBIEK', SS().OEAJEFIFHGO);
    let dir = fwd;
    if (ok) dir = C.BOAPLCDFEEF.sub(muzzle).normalized;
    C.MDLICIBKOGE = dir;
    // <fire_end_point>5__5 (kept for completeness)
    this._fireEndPoint = muzzle.add(fwd.mul(30 * 1.2));
    for (;;) {
      if (count < 1) { this.KAMKFAFOMNP = false; return; }
      if (alive(this.CABFBDCALLA)) this.CABFBDCALLA.SetActive(true);
      if (alive(this.JCLBMEFDDPM)) this.JCLBMEFDDPM.SetActive(true);
      if (!this.LIJODOABDGG) return;
      // bullet trail from the gun to <fire_end_point> (args from the binary @0xb2d8f0: gun_effect_trans.position, fire_end_point)
      const gunPos = this.LIJODOABDGG.position;
      if (count === 2) { if (this.GBDIFNCLMCC) this.GBDIFNCLMCC.EPHPBNKKJLE?.(gunPos, this._fireEndPoint); }
      else if (count === 3) { if (this.EGJHCGOHGOG) this.EGJHCGOHGOG.EPHPBNKKJLE?.(gunPos, this._fireEndPoint); }
      yield 0.05;
      if (!is_destroy_target && final_target_tag !== '' && alive(key)) { is_destroy_target = true; this.EHLPBKIEJAL(final_target_tag, key); }
      if (alive(this.CABFBDCALLA)) this.CABFBDCALLA.SetActive(false);
      if (alive(this.JCLBMEFDDPM)) this.JCLBMEFDDPM.SetActive(false);
      yield 0.05;
      count = count - 1;
    }
  }

  // zombies counter target of the level tasks (task type 0)
  BBONKOLGOKE() {
    const l = lvl(); if (!l) return 0;
    const tasks = l.tasks; if (!tasks || !tasks.length) return 0;
    let n = 0;
    for (const t of tasks) { if (!t) break; if (t.type === 0) n = t.count | 0; } // LevelTasks {type, count}
    return n;
  }

  // (checks a Menu flag; result unused in the original)
  LOPCCLDAPAE() { if (G.Menu && G.Menu.JOPJDMLGDEF && G.Menu.JOPJDMLGDEF?.()) { /* PLFPPECDCLG == null (unused) */ } }

  // tutorial trigger: show help item MPCJLJAJKMF once the car passes z = NAGJFGEHKIK on level HFDKNJFKOJO
  KKMPDCAMDGN(MPCJLJAJKMF, NAGJFGEHKIK, HFDKNJFKOJO = 0) {
    const l = lvl(); if (!l) return;
    if (l.id !== HFDKNJFKOJO) return;
    if (this.BHDKJIINJNL.position.z <= NAGJFGEHKIK) return;
    const GG = G.GUIGameplay || {};
    if (MPCJLJAJKMF <= (GG.AOFDLCGLMDI ?? -1)) return;
    if ((GG.DEDOFFIOEFO ?? -1) === MPCJLJAJKMF) return;
    const gui = this.CDDOBCENBOG; if (!gui || !gui.LMNKADFDPMO) return;
    const item = gui.LMNKADFDPMO[MPCJLJAJKMF]; if (!item) return;
    const d = daf();
    let doSwitch = true;
    if (!item.is_repeatability) {
      if (d && d.BLGOKNOOEEO && d.BLGOKNOOEEO?.(MPCJLJAJKMF)) {
        if (MPCJLJAJKMF !== 2) return;
        const lp = d.PJDAAMCNMHJ ? d.PJDAAMCNMHJ?.(-1) : null;
        if (!lp) return;
        if (3 < lpStars(lp)) return;
        CarController.HCILEAABENL = 0;
        this.EKNIOGDJDEJ = this.EKNIOGDJDEJ + 300;
        doSwitch = false;
      }
    }
    if (doSwitch) {
      switch (MPCJLJAJKMF) {
        case 1: case 5:
          if (this.NFMJGGFDDMH === 0) this.NDIMMLBIFCI(this.NFMJGGFDDMH + 1);
          this.ODNLEFBNKAE = true; break;
        case 2:
          CarController.HCILEAABENL = 0;
          this.EKNIOGDJDEJ = this.EKNIOGDJDEJ + 300;
          break;
        case 6:
          if (this.NFMJGGFDDMH < 2) this.NDIMMLBIFCI(2);
          this.ODNLEFBNKAE = true; break;
        default: break;
      }
    }
    gui.MGNNDFEFHAH?.(MPCJLJAJKMF, false);
  }

  // body wobble impulse (recoil / hits)
  CHPDPBCCBJP(HHEOPDJMPBH) {
    if (!(0 < this.PDGPHDOPDDF)) return;
    if (!(this.NGFEBDMLKLC < Time.time - this.ANMJHACFFFH)) return;
    let dir = this.BHDKJIINJNL.right;
    if (0 < this.DEMOMIOFOIC) {
      const f = this.BHDKJIINJNL.forward;
      const r = Random.value * 2 - 1;
      dir = dir.add(f.mul(r * this.DEMOMIOFOIC));
    }
    if (!this.NHKLKMICMOB) return;
    this.NHKLKMICMOB.LGLBDMEEIJC?.(dir.neg().mul(this.PDGPHDOPDDF * HHEOPDJMPBH));
    this.ANMJHACFFFH = Time.time;
  }

  // gun effects (bullet trails, impacts, muzzle flashes)
  NCBPCHPNCII() {
    const getC = (go, t) => (go && go.GetComponent ? go.GetComponent(t) : null);
    const trail = instRes('FX_bullet_trail');
    this.EGJHCGOHGOG = getC(trail, 'objDestructorTrail');
    const trail2 = trail ? Instantiate(trail) : null;
    this.GBDIFNCLMCC = getC(trail2, 'objDestructorTrail');
    this.CHGPLACBKLE = getC(instRes('FX_bullet_impact_ground'), 'AutoDestructShuriken');
    this.POHGDMCOHFA = getC(instRes('FX_bullet_impact_metal'), 'AutoDestructShuriken');
    this.FBHBHHFCLDA = getC(instRes('FX_bullet_impact_wood'), 'AutoDestructShuriken');
    if (alive(this.LIJODOABDGG)) {
      this.CABFBDCALLA = instRes('FX_gun_muzzleflare', this.BHDKJIINJNL);
      if (this.CABFBDCALLA) this.CABFBDCALLA.transform.position = this.LIJODOABDGG.position;
    }
    if (alive(this.FNEIDBGLFIH)) {
      this.JCLBMEFDDPM = this.CABFBDCALLA ? Instantiate(this.CABFBDCALLA, this.BHDKJIINJNL) : null;
      if (this.JCLBMEFDDPM) this.JCLBMEFDDPM.transform.position = this.FNEIDBGLFIH.position;
    }
    if (!this.LIJODOABDGG) Debug.LogError('Not found gun_effect_trans!!!');
  }

  // flip performed: +30 points, counter++, +ammo, message (fields passed by name: ref ObscuredInt)
  FKBDELMHMJD(FJOKKOFPECG, HLOKKFLPPBA) {
    this.IKOEIGDJPEK(30, false);
    this[HLOKKFLPPBA] = this[HLOKKFLPPBA] + 1;
    if (this.KKCECHKCJGO) this.NDIMMLBIFCI(this[FJOKKOFPECG] + this.NFMJGGFDDMH);
    if (alive(this.CDDOBCENBOG)) {
      const n = this[FJOKKOFPECG];
      const s = tr('FLIP') + (1 < n ? ' (x' + n + ')' : '');
      this.CDDOBCENBOG.HNKHJLDJMHB?.(s, 1, false, true);
    }
    this.IOKMCIGOMNI = 0;
    this.ODPJLHICABM = 0;
    if (this.EMDKNNFHHMF < Time.time) { callS('FIGKLLNAMLG', SS().MGODLMBHILI); this.EMDKNNFHHMF = Time.time + 5; }
  }

  // add points
  IKOEIGDJPEK(ALLBGCHDGNC, MIBLBGHDLFH = false) {
    if (CarController.MKEGHDPIIFK) return;
    if (this.OJDANPGPKPB && !MIBLBGHDLFH) return;
    this.EMKMCEPMMBG = this.EMKMCEPMMBG + ALLBGCHDGNC;
    const gui = this.CDDOBCENBOG; if (!alive(gui)) return;
    const s = String(this.EMKMCEPMMBG);
    gui.IKDCPJNHOKJ?.(s.length);
    if (gui.EMKMCEPMMBG) { setText(gui.EMKMCEPMMBG.CIDKMFLFJEJ, s); gui.EMKMCEPMMBG.ICMOCEHIFOI?.(); }
  }

  Start() {
    if (!alive(G.Menu && G.Menu.KECGFPHIEHF) && G.Menu) G.Menu.MDLMIEDLJMC = false;
    log('Is Garage: ' + (isGarage() ? 'True' : 'False'));
    // [removed: platform] AccelerometerFix setup
    const C = CarController;
    C.HCILEAABENL = -1;
    this.PCAMLKIMMPM = 0;
    C.LCJOMOHFJDI = false;
    C.EPDJPJLHCDL = Vector3.zero;
    C.MKEGHDPIIFK = false;
    this.EFJKMEHHMAJ = false;
    C.LNNMJCIFMGH = false; C.FNHOMMPGFHK = false;
    this.ANIFIACMGHD = this.CABOCNMMFEK;
    this.GJLAJGCPBEF = this.BHDKJIINJNL.position.y;
    if (this.HEEHBDDACOJ) this.HEEHBDDACOJ.dampingRatio = 0.8;
    if (G.GUIGameplay) G.GUIGameplay.DEDOFFIOEFO = -1;
    if (isGarage()) {
      this.GLEPFMJIDHF = false;
      if (this.NIIFDMDCOCF) this.NIIFDMDCOCF.interpolation = 0;
      this._finishStart();
      return;
    }
    this.ECBLNBNGONF = G.CarCamera ? FindObjectOfType(G.CarCamera) : null;
    if (alive(this.ECBLNBNGONF)) this.ECBLNBNGONF.PEEMAHNEIHI = this;
    this.NCMHCOHPOOB = G.MoveBackground ? FindObjectOfType(G.MoveBackground) : null;
    C.GGDLOPNIKOB = Layers.NameToLayer('ground');
    this.ECBFJDOEKMJ = SceneManager.GetActiveScene().name === 'level_000';
    if (!alive(this.NLGGAKACCMC)) logErr('fx_smoke_pivot not found!');
    else {
      const g = instRes('FX_SmokeCar', this.NLGGAKACCMC.position, this.NLGGAKACCMC.rotation, this.BHDKJIINJNL);
      this.KJOJAFKDHNH = g ? g.GetComponent(ParticleSystem) : null;
      this.PKCLOKOFBCA = this.KJOJAFKDHNH ? this.KJOJAFKDHNH.emission : null;
      if (this.ECBFJDOEKMJ && this.PKCLOKOFBCA) this.PKCLOKOFBCA.enabled = true;
    }
    if (alive(this.FJGKIKPJBME) && alive(this.KJOJAFKDHNH)) {
      const g = Instantiate(this.KJOJAFKDHNH.gameObject, this.FJGKIKPJBME.position, this.FJGKIKPJBME.rotation, this.BHDKJIINJNL);
      this.PCMEAFEIBBC = g ? g.GetComponent(ParticleSystem) : null;
      this.DPEHNPPFHMD = this.PCMEAFEIBBC ? this.PCMEAFEIBBC.emission : null;
      if (this.ECBFJDOEKMJ && this.DPEHNPPFHMD) this.DPEHNPPFHMD.enabled = true;
    }
    if (alive(this.IFLDCKJMFND)) {
      const fire = instRes('FX_fire_car', this.IFLDCKJMFND.position, Quaternion.identity, this.BHDKJIINJNL);
      this.DHJMCFBENCP = fire ? fire.GetComponent(ParticleSystem) : null;
      const smoke = instRes('FX_SmokeLowHp', this.IFLDCKJMFND.position, Quaternion.identity, this.BHDKJIINJNL);
      if (smoke) {
        smoke.transform.localPosition = smoke.transform.localPosition.add(this.AILDJLHIGKI);
        this.ICNPJPLFCBA = smoke.GetComponent(ParticleSystem);
      }
    } else logErr('fx_fire_pivot not found!');
    if (!mainI()) {
      instRes('_MainData');
      const t = G.Translate && G.Translate.KECGFPHIEHF;
      if (t && t.CCEPOBMNPFA && t.CCEPOBMNPFA.DPJAADHMLIA) t.CCEPOBMNPFA.DPJAADHMLIA?.();
    }
    this.CDDOBCENBOG = G.GUIGameplay ? FindObjectOfType(G.GUIGameplay) : null;
    if (!alive(this.CDDOBCENBOG)) {
      const g = instRes('_GUIGameplay');
      if (alive(g)) {
        this.CDDOBCENBOG = g.GetComponent(G.GUIGameplay || 'GUIGameplay');
        if (this.CDDOBCENBOG) {
          this.CDDOBCENBOG.FNOJDNIIENN?.();
          const d = daf();
          if (this.CDDOBCENBOG.BHMJELHKMGP) this.CDDOBCENBOG.BHMJELHKMGP.SetActive(!!(d && d.EFDKHACIIEC && d.EFDKHACIIEC?.()));
        }
      }
    }
    const gui = this.CDDOBCENBOG;
    if (alive(gui)) {
      gui.EGEINPCIEON = this;
      gui.DMFIDCENMJF?.();
      gui.AGGPLIPJHPI?.();
      if (!this.ECBFJDOEKMJ) { if (gui.OJFNCOLKMHP) gui.OJFNCOLKMHP.HEGIHOAJOKK?.(false); }
      else {
        const p = gui.ENEGCNGBBJJ && gui.ENEGCNGBBJJ.transform.parent; if (p) p.gameObject.SetActive(false);
        if (gui.IDHJODIGPEI) gui.IDHJODIGPEI.gameObject.SetActive(false);
      }
      // [removed: platform] GamePadController.FKBCEHJHEBP?.()
    }
    if (!mainI()) {
      logErr('Main script not found.');
      Destroy(this.gameObject);
    }
    this.LKPOMFJNLBM = GameObject.Find('finish');
    if (alive(this.LKPOMFJNLBM)) this.FJFNDGAMPHH = toInt(this.LKPOMFJNLBM.transform.position.z);
    const d = daf();
    if (!d) { if (this.ECNAMAJCDGI) this.ECNAMAJCDGI.Play(); }
    else if (this.ECNAMAJCDGI) {
      if (d.BMMOMBGDEKF && d.BMMOMBGDEKF?.()) { if (!this.ECNAMAJCDGI.isPlaying) this.ECNAMAJCDGI.Play(); }
      else this.ECNAMAJCDGI.Pause();
    }
    if (this.FNLHPDCIFMG && this.FNLHPDCIFMG.length && alive(this.FNLHPDCIFMG[0])) this.JHNCCMPDHFA = this.FNLHPDCIFMG[0].main.startLifetime;
    this.NEJKJHMFBMJ = this.GetComponent(G.CarCollision || 'CarCollision');
    if (!alive(this.NEJKJHMFBMJ)) logErr('CarCollision script not found.');
    const cc = this.NEJKJHMFBMJ;
    if (cc) { cc.HNNICJHLCMM?.(); cc.CFMCPPEAHAF?.(); cc.KMNFKGPKPNE?.(); cc.OKOFPODNOFH?.(); }
    const l = lvl();
    if (l && isEvent(l) && l.event_contest && (l.event_contest.mode === 6 || l.event_contest.mode === 7)) { if (cc) cc.FKJKPFAKBLM?.(); }
    if (gui) gui.CCDFIOJMHGC?.();
    if (l && isEvent(l)) {
      this.GJFMGCNOHEP = true;
      this.KHDKNJAGGHH = Time.time + 0.4;
      if (this.NIIFDMDCOCF) this.NIIFDMDCOCF.interpolation = 0;
      for (const rb of FindObjectsOfType(Rigidbody)) rb.interpolation = 0;
      if (G.CarReplay && G.CarReplay.DJKMCIEIAMH && G.CarReplay.DJKMCIEIAMH?.() && gui) gui.CEFDKCEFHAK?.();
      const ec = l.event_contest;
      if (ec) {
        if (typeof ec.IsUseCustonPoints === 'function' ? ec.IsUseCustonPoints() : ec.IsUseCustonPoints) this.OJDANPGPKPB = true;
        if (ec.mode === 5) this.IBOHFAOLGDH = true;
        if (ec.mode === 2) {
          this.KFMKBHIDIAK = true;
          if (alive(gui) && gui.EMKMCEPMMBG && gui.EMKMCEPMMBG.CIDKMFLFJEJ) {
            const txt = gui.EMKMCEPMMBG.CIDKMFLFJEJ;
            const rt = txt.transform; const ap = rt.anchoredPosition; rt.anchoredPosition = { x: -125, y: ap.y };
            txt.alignment = 3;
            txt.fontSize = 50;
            txt.text = '0:00.00';
            if (gui.GECOFGCABNE) {
              gui.GECOFGCABNE.sprite = gui.JEFMLMOHCAG;
              gui.GECOFGCABNE.transform.localScale = new Vector3(0.9, 0.9, 0.9);
              SetSizeWithCurrentAnchors(gui.GECOFGCABNE.transform, 0, 48);
              gui.GECOFGCABNE.transform.anchoredPosition = { x: -48, y: 4 };
            }
            if (gui.IDHJODIGPEI) { const a = gui.IDHJODIGPEI.anchoredPosition; gui.IDHJODIGPEI.anchoredPosition = { x: a.x + 90, y: a.y }; }
          }
        }
      }
    }
    this._finishStart();
  }
  // tail of Start (LAB_00c20518): upgrades + centre of mass
  _finishStart() {
    this.ENIIFAAKJKN();
    const rb = this.NIIFDMDCOCF;
    if (!rb) return;
    // [web] engine returns zero for an implicit centre of mass: compute it from the colliders first
    if (rb.flushBuild) rb.flushBuild();
    let com = rb.centerOfMass;
    if (com.sqrMagnitude === 0 && rb.body) com = Quaternion.Inverse(rb.rotation).rotate(rb.worldCenterOfMass.sub(rb.position));
    rb.centerOfMass = com.add(this.EOMPPDDACJM);
    this._fixInertia(rb);
  }
  // [web] the engine uses a crude spherical inertia once centerOfMass is set; Unity derives the tensor from the
  // colliders, so rebuild a box tensor from the car's own (non-trigger) colliders (local helper, Rapier space).
  _fixInertia(rb) {
    const body = rb.body;
    if (!body || !body.setAdditionalMassProperties) return;
    const inv = Quaternion.Inverse(rb.rotation), o = rb.position;
    let mn = null, mx = null;
    for (const c of rb.colliders || []) {
      if (!c || c.isTrigger || !c.bounds) continue;
      const b = c.bounds;
      for (let i = 0; i < 8; i++) {
        const w = new Vector3(i & 1 ? b.max.x : b.min.x, i & 2 ? b.max.y : b.min.y, i & 4 ? b.max.z : b.min.z);
        const l = inv.rotate(w.sub(o));
        mn = mn ? Vector3.Min(mn, l) : l; mx = mx ? Vector3.Max(mx, l) : l;
      }
    }
    if (!mn) return;
    const sz = mx.sub(mn), m = rb.mass;
    const Ix = m / 12 * (sz.y * sz.y + sz.z * sz.z), Iy = m / 12 * (sz.x * sz.x + sz.z * sz.z), Iz = m / 12 * (sz.x * sz.x + sz.y * sz.y);
    const com = rb.centerOfMass;
    for (const c of rb.colliders || []) if (c && c._col) c._col.setDensity(0);
    body.setAdditionalMassProperties(m, { x: com.x, y: com.y, z: -com.z }, { x: Ix, y: Iy, z: Iz }, { x: 0, y: 0, z: 0, w: 1 }, true);
  }

  // apply car upgrades from the car progress (engine, wheels, gun, nitro, armor, colour)
  ENIIFAAKJKN() {
    let engine, gun, nitro, armor, color;
    if (!isGarage()) { engine = 3; this.GKOPGBKHNCM = 3; gun = 5; nitro = 5; armor = 5; this.PHKPMGOICOM = -1; this.NCBPCHPNCII(); }
    else { engine = 0; this.GKOPGBKHNCM = 0; gun = 0; nitro = 0; armor = 0; this.PHKPMGOICOM = -1; }
    color = 0;
    const d = daf();
    if (menuI() && d && d.DKJLCJPBPPN && d.DKJLCJPBPPN?.(-1, true)) {
      const cp = d.DKJLCJPBPPN?.(-1, true);
      engine = cp.IDOHKCCDGDG?.(0) | 0;
      this.GKOPGBKHNCM = cp.IDOHKCCDGDG?.(1) | 0;
      gun = cp.IDOHKCCDGDG?.(2) | 0;
      nitro = cp.IDOHKCCDGDG?.(3) | 0;
      armor = cp.IDOHKCCDGDG?.(4) | 0;
      this.PHKPMGOICOM = cp.EAEAJMKGDPD?.() ?? -1;
      color = cp.BGFAMABFPHC?.() | 0;
    }
    if (0 < engine) {
      this.CABOCNMMFEK = this.CABOCNMMFEK * (engine * 0.083 + 1);
      this.OGGEMMINMMO = this.OGGEMMINMMO + engine * 10;
    }
    this.PPIBCCLIDMH(this.GKOPGBKHNCM);
    const ammo = this.HOFKAPIGLGA || [];
    let gi = Math.min(gun, ammo.length - 1); if (gun < 0) gi = 0; if (gi < 0) gi = 0;
    this.NDIMMLBIFCI(ammo[gi] | 0);
    this.KKCECHKCJGO = 0 < gi;
    if (alive(this.EOJFKBECPPD)) this.EOJFKBECPPD.SetActive(this.KKCECHKCJGO);
    if (alive(this.JHDGBAALBMP)) this.JHDGBAALBMP.SetActive(this.KKCECHKCJGO);
    if (!this.KKCECHKCJGO && alive(this.CDDOBCENBOG) && this.CDDOBCENBOG.ECBEBEJKHKM) this.CDDOBCENBOG.ECBEBEJKHKM.gameObject.SetActive(false);
    this.BLBEANOECBB = 0 < nitro;
    this.EKNIOGDJDEJ = Mathf.Clamp01(nitro / 5) * this.ICNCDKDODHO + 0;
    if (alive(this.GBLNJIKLCLP)) this.GBLNJIKLCLP.SetActive(this.BLBEANOECBB);
    if (!this.BLBEANOECBB && alive(this.CDDOBCENBOG) && this.CDDOBCENBOG.BNOMDMCBNNL) this.CDDOBCENBOG.BNOMDMCBNNL.gameObject.SetActive(false);
    const m = mainI();
    const car = m && m.GDPCMIGAPOM ? m.GDPCMIGAPOM[this.HCBODNKILEA] : null;
    const hpArr = car ? car.health_array || [] : [100];
    let ai = Math.min(armor, hpArr.length - 1); if (armor < 0) ai = 0; if (ai < 0) ai = 0;
    this.FJOFMMAGAPG = hpArr[ai] | 0;
    let setMax = this.PHKPMGOICOM === -1;
    if (!setMax && !isGarage()) {
      const l = lvl();
      if (l) { if (l.id === 0 && G.Main && G.Main.LCFFGBBHMPH === 1) setMax = true; if (this.GJFMGCNOHEP) setMax = true; }
    }
    if (setMax) this.PHKPMGOICOM = this.FJOFMMAGAPG;
    if (G.Main && G.Main.LCFFGBBHMPH === 12) this.PHKPMGOICOM = toInt(this.FJOFMMAGAPG * 0.25);
    {
      const hp = this.PHKPMGOICOM, mx = this.FJOFMMAGAPG, lo = toInt(mx * 0.2);
      this.PHKPMGOICOM = lo <= hp ? Math.min(hp, mx) : lo;
    }
    this.HEGAKOHMBEN = (hpArr.length > 1 ? ai / (hpArr.length - 1) : 0) * -0.5 + 1;
    const armorGos = this.CFLLLIOJOBD || [];
    for (let i = 0; i < armorGos.length; i++) {
      if (!alive(armorGos[i])) logErr('Problem with armor: ' + i);
      else armorGos[i].SetActive(i + 1 <= ai);
    }
    this.IODIAKMIMDD();
    this.PCDOLLHPMJE();
    this.OJOPPNIEGLL();
    this.GFAPIMNKMLG(color);
    this.LOPCCLDAPAE();
    this.OENKDDLNKCJ(false);
    log('Car Init. Engine [' + engine + ' lvl]: ' + this.CABOCNMMFEK + ', Wheels: ' + this.GKOPGBKHNCM + '[st=' + this.ILHEBLCMAIJ + '], Gun [' + gi + ' lvl]: ' + this.NFMJGGFDDMH + ', Nitro: ' + nitro + ', HP: ' + this.PHKPMGOICOM);
  }

  // stop the low-HP smoke
  OPEHNMHCDAJ() {
    if (!alive(this.ICNPJPLFCBA)) return;
    if (!this.ICNPJPLFCBA.isPlaying) return;
    this.ICNPJPLFCBA.Stop(true, 1);
  }

  // garage: HP regeneration over real time
  IODIAKMIMDD() {
    if (!(this.PHKPMGOICOM < this.FJOFMMAGAPG)) return;
    const d = daf(); if (!d) return;
    const last = d.FFPNODOKENB; // DateTime of the last HP update (Date in DAFNMLEKHAD.js)
    const ms = last instanceof Date ? last.getTime() : typeof last === 'number' ? last : (last && last.getTime ? last.getTime() : Date.now());
    const sec = toInt((Date.now() - ms) / 1000);
    const k = CarController.IMEIEFHABHH;
    this.CFMHHPIGJHD = k !== 0 ? toInt(sec / k) : 0;
    if (this.FJOFMMAGAPG <= this.CFMHHPIGJHD + this.PHKPMGOICOM) { this.PHKPMGOICOM = this.FJOFMMAGAPG; this.CFMHHPIGJHD = 0; }
    this.PCDOLLHPMJE();
  }

  // garage HP display
  PCDOLLHPMJE() {
    if (!isGarage()) return;
    const mn = menuI(); if (!mn) return;
    const gg = mn.ALPCPBBNEBA; if (!alive(gg)) return;
    const hp = this.CFMHHPIGJHD + this.PHKPMGOICOM;
    if (gg.FICCHPBBBPG) setText(gg.FICCHPBBBPG.CIDKMFLFJEJ, hp + '/' + this.FJOFMMAGAPG); // GUICoins 0x3F0
    if (gg.NFFOABJNEOO) gg.NFFOABJNEOO.fillAmount = hp / this.FJOFMMAGAPG;              // Image 0x3F8
    if (gg.DOODAKOKCBN) gg.DOODAKOKCBN?.(hp, this.FJOFMMAGAPG);
  }

  // tutorial crash: wait, then show the tutorial-crash window
  *FNDOKMIBKCA() {
    CarController.MKEGHDPIIFK = true;
    const d = daf(); if (d && d.JJAPPMFCNFA) d.JJAPPMFCNFA?.(true);
    CarController.HCILEAABENL = 0;
    this.HHDCACBMPJK = 0;
    yield 3;
    if (this.CDDOBCENBOG && this.CDDOBCENBOG.EPLFFONIKMG) this.CDDOBCENBOG.EPLFFONIKMG.HEGIHOAJOKK?.(false);
  }

  // car colour / locked material
  GFAPIMNKMLG(LIJPNHADLDP) {
    const d = daf(); if (!d) return;
    const m = mainI();
    if (!(d.DKJLCJPBPPN && d.DKJLCJPBPPN?.(-1, true))) {
      if (!m) return;
      const mat = m.AKLICMLFBKC;
      const wheels = Layers.NameToLayer('wheels');
      for (const r of this.gameObject.GetComponentsInChildren(MeshRenderer)) {
        if (r.gameObject.layer === wheels) continue;
        const mats = r.materials.slice();
        if (this.GGGBCBPICJN) this.EDFNCPFNAKE.set(r, r.sharedMaterials.slice());
        for (let i = 0; i < mats.length; i++) mats[i] = mat;
        if (mat) r.materials = mats;
      }
      return;
    }
    for (const r of this.NHEKIOLEIDI || []) {
      if (!r || !m) continue;
      if (LIJPNHADLDP === 0) r.material = m.NFFBOJAIMFC;
      else {
        r.material = m.CHNMADAPBIE;
        const mat = r.material;
        const cc = this.GNDOHJDDLAG[LIJPNHADLDP];
        if (!cc || !mat) continue;
        applyHueParams(mat, cc.hue, cc.saturation, cc.brightest, cc.col);
      }
    }
  }

  // show (true: crash) / hide (false: init) the extra parts
  OENKDDLNKCJ(POOJPMFNDMP) {
    if (isGarage()) return;
    const parts = this.OFDMBDCMKEH || [];
    if (POOJPMFNDMP) {
      for (let i = 0; i < parts.length; i++) {
        if (!alive(parts[i])) continue;
        if (this.GEIPPLHMEMP && this.GEIPPLHMEMP[i]) parts[i].SetActive(true);
      }
      if (!alive(this.EGAAKMKKMGA)) return;
      if (!this.EGAAKMKKMGA.activeSelf) return;
      for (const g of this.EFJBAPKGMLA) if (g) g.SetActive(true);
      this.EGAAKMKKMGA.SetActive(false);
      return;
    }
    this.GEIPPLHMEMP = new Array(parts.length).fill(false);
    for (let i = 0; i < parts.length; i++) {
      if (!alive(parts[i])) continue;
      if (parts[i].activeInHierarchy) { parts[i].SetActive(false); this.GEIPPLHMEMP[i] = true; }
    }
    if (0 < this.GKOPGBKHNCM) for (const w of this.NNGMCDMNECH || []) this.KDHHDKMBELG(w, false);
    if (this.HJLPGGPNDKA) this.KDHHDKMBELG(this.HJLPGGPNDKA.gameObject, true);
  }

  // car destroyed (HP 0)
  AEFMMNHIGLH() {
    if (this.MFEELNHEKHF) return;
    if (CarController.MKEGHDPIIFK && !this.GGGBCBPICJN) return;
    this.PHKPMGOICOM = 0;
    this.MFEELNHEKHF = true;
    this.EFJKMEHHMAJ = true;
    let finished = false;
    if (this.GJFMGCNOHEP && this.IBOHFAOLGDH && !(this.BHDKJIINJNL.position.z < this.FJFNDGAMPHH)) { finished = true; this.EFJKMEHHMAJ = false; }
    const gui = this.CDDOBCENBOG;
    if (alive(gui)) {
      gui.HNKHJLDJMHB?.(tr('CRASH_1'), 1, false, true);
      gui.HNKHJLDJMHB?.('', 4, false, false);
      this.OFLMLGPBOBL();
    }
    if (!isGarage()) {
      if (this.ECBLNBNGONF && this.ECBLNBNGONF.OIKFBMHJDBN) this.StartCoroutine(this.ECBLNBNGONF.OIKFBMHJDBN?.());
      if (this.NEJKJHMFBMJ) this.NEJKJHMFBMJ.NDLJJLDOHIA?.(false, this.BHDKJIINJNL.position);
    } else {
      this.FALNNMMGIDA();
      const cg = G.CameraGarage ? FindObjectOfType(G.CameraGarage) : null;
      if (alive(cg) && cg.OIKFBMHJDBN) this.StartCoroutine(cg.OIKFBMHJDBN?.());
    }
    if (!this.ODFPBGGPPDK) { callS('GIGBLEBBIEK', SS().LGDEFJKJLJD); callS('FIGKLLNAMLG', SS().ADFNANLKGBM); }
    if (this.ECNAMAJCDGI) this.ECNAMAJCDGI.Stop();
    this.OENKDDLNKCJ(true);
    if (this.GGGBCBPICJN) {
      this.EDFNCPFNAKE.clear();
      if (alive(this.KNOBHBDEKAK) && this.KNOBHBDEKAK.gameObject.activeSelf) this.HDMBHIMJKBI = true;
    }
    const m = mainI(); if (!m) return;
    this.AKNFDJKEDOC(m.BPNBGKOCLHM);
    for (const w of this.OLHONOOFKPP || []) {
      if (!w) continue;
      if (!isGarage()) this.AOOHMIALOJP(w.CCLKEPFMBEA, 300, 800, false, false);
      else this.AOOHMIALOJP(w.CCLKEPFMBEA, 100, 350, false, false);
      if (w.EFOGAOHIGOE) w.EFOGAOHIGOE.enabled = false;
    }
    if (this.BLBEANOECBB && alive(this.GBLNJIKLCLP)) this.AOOHMIALOJP(this.GBLNJIKLCLP.transform, 30, 60, true, false);
    for (const a of this.CFLLLIOJOBD || []) {
      if (!alive(a) || !a.activeSelf) continue;
      const mr = a.GetComponent(MeshRenderer);
      if (!alive(mr)) { for (const ch of a.transform) this.AOOHMIALOJP(ch, 300, 400, true, false); }
      else this.AOOHMIALOJP(a.transform, 300, 400, true, false);
    }
    if (this.KKCECHKCJGO) {
      if (alive(this.EOJFKBECPPD)) this.AOOHMIALOJP(this.EOJFKBECPPD.transform, 100, 200, true, false);
      if (alive(this.JHDGBAALBMP)) this.AOOHMIALOJP(this.JHDGBAALBMP.transform, 100, 200, true, false);
    }
    const rb = this.NIIFDMDCOCF;
    const f = randInt(250000, 310000);
    if (rb) rb.AddExplosionForce(f, this.BHDKJIINJNL.position.sub(Vector3.up), 3000);
    this.OPEHNMHCDAJ();
    if (isGarage()) return;
    if (this.GGGBCBPICJN) return;
    this.StartCoroutine(this.CDEJPMCFIHK() ? this.FNDOKMIBKCA() : this.FIOKLNLIDNH(finished));
    if (!this.JMAEOBLLHHN()) return;
    if (this.BHDKJIINJNL.position.z <= 250) return;
    const d = daf(); if (d && d.AKHLCOADEAA) d.AKHLCOADEAA?.(true);
  }

  // garage destroy: small explosion effect
  FALNNMMGIDA() {
    const g = instRes('FX_Explosion_Small', new Vector3(0, 0, -30), Quaternion.Euler(-90, 0, 0));
    const s = g ? g.GetComponent('AutoDestructShuriken') : null;
    if (!alive(s)) return;
    if (s.LIEHBGFFHFF) s.LIEHBGFFHFF.position = this.BHDKJIINJNL.position;
    s.HHGIPCGNNOK = false;
    s.BLNLIDHOLOJ?.();
  }

  // replace all car materials (crash "burnt" material)
  AKNFDJKEDOC(PLBEPEHAFMO) {
    const wheels = Layers.NameToLayer('wheels');
    for (const r of this.gameObject.GetComponentsInChildren(MeshRenderer)) {
      if (r.gameObject.layer === wheels) continue;
      const mats = r.materials.slice();
      if (this.GGGBCBPICJN) this.EDFNCPFNAKE.set(r, r.sharedMaterials.slice());
      for (let i = 0; i < mats.length; i++) mats[i] = PLBEPEHAFMO;
      if (PLBEPEHAFMO) r.materials = mats;
    }
  }

  // make a car part fly away (rigidbody + explosion force)
  AOOHMIALOJP(CIIGBEPKIOD, HPHMPIOMFAC, KBBIGFDPBHP, HOGDOEAMJFA, MNCAFCICFGD) {
    if (!CIIGBEPKIOD) return;
    if (this.GGGBCBPICJN) {
      const clone = Instantiate(CIIGBEPKIOD.gameObject, this.BHDKJIINJNL);
      if (!clone) return;
      clone.transform.SetParent(null, true);
      CIIGBEPKIOD.gameObject.SetActive(false);
      this._hiddenByClone.push(CIIGBEPKIOD.gameObject);
      CIIGBEPKIOD = clone.transform;
      this.GKMDDGOBFAF.push(clone);
    }
    const go = CIIGBEPKIOD.gameObject;
    const rb = go.AddComponent(Rigidbody, { m_Mass: 1, m_Drag: 0, m_AngularDrag: 0.05, m_UseGravity: 1 });
    const col = go.GetComponent(Collider);
    const mr = go.GetComponent(MeshRenderer);
    if (alive(mr)) mr.shadowCastingMode = 1;
    if (!alive(col)) {
      // [web] Unity sizes an added BoxCollider to the mesh bounds; approximate from the renderer bounds
      const props = {};
      if (alive(mr) && mr.bounds) {
        const b = mr.bounds, s = CIIGBEPKIOD.lossyScale;
        props.m_Size = [Math.max(0.05, b.size.x / (Math.abs(s.x) || 1)), Math.max(0.05, b.size.y / (Math.abs(s.y) || 1)), Math.max(0.05, b.size.z / (Math.abs(s.z) || 1))];
        const lc = CIIGBEPKIOD.InverseTransformPoint(new Vector3(b.center.x, b.center.y, b.center.z));
        props.m_Center = [lc.x, lc.y, -lc.z];
      }
      go.AddComponent(BoxCollider, props);
    } else col.enabled = true;
    if (HOGDOEAMJFA && G.DynamicObstacle) go.AddComponent(G.DynamicObstacle);
    const f = randInt(HPHMPIOMFAC, KBBIGFDPBHP);
    rb.AddExplosionForce(f, this.BHDKJIINJNL.position.sub(Vector3.up), 1000);
    rb.interpolation = 1;
    void MNCAFCICFGD;
  }

  // tutorial level (-1) and the crash tutorial not yet shown
  CDEJPMCFIHK() {
    const l = lvl(); if (!l) return false;
    if (l.id !== -1) return false;
    const d = daf(); return !(d && d.GDGPFCLJEIL && d.GDGPFCLJEIL?.());
  }

  // game over / finish coroutine
  *FIOKLNLIDNH(CDJLOBFNINN) {
    const C = CarController;
    const _is_finished = CDJLOBFNINN;
    let completed_stars = 0, is_show_stamp_record = false, finishAnimator = null;
    if (C.MKEGHDPIIFK && !this.FPLDMGGFKED) return;
    log('IEnumerator Finish!');
    C.MKEGHDPIIFK = true;
    if (this.GJFMGCNOHEP && this.IBOHFAOLGDH) {
      this.EMKMCEPMMBG = roundEven((this.CHANMFBMCDE - this.FJFNDGAMPHH) * 10);
      if (this.EMKMCEPMMBG < 0) this.EMKMCEPMMBG = 0;
    }
    this.KIGCLEFNGIH('GEHAGJMADEG', 'zombies_kill', 0, 300);
    this.KIGCLEFNGIH('EMKMCEPMMBG', 'points', 0, 5000);
    this.KIGCLEFNGIH('NFDOKGHMLFP', 'silver', 0, 30000);
    C.LNNMJCIFMGH = _is_finished;
    this.FPHFKCCPAEF = 0;
    completed_stars = 0; is_show_stamp_record = false;
    this.HHDCACBMPJK = 0;
    let gui = this.CDDOBCENBOG;
    if (_is_finished) {
      finishAnimator = null;
      const t = Time.time;
      this.FPHFKCCPAEF = roundEven((t - this.PCAMLKIMMPM) * 100);
      if (alive(gui) && this.KFMKBHIDIAK && gui.EMKMCEPMMBG) setText(gui.EMKMCEPMMBG.CIDKMFLFJEJ, timeStr(roundEven((t - this.PCAMLKIMMPM) * 100)));
      const l = lvl();
      if (l ? l.id === 10 : false) {
        if (alive(this.LKPOMFJNLBM)) {
          finishAnimator = this.LKPOMFJNLBM.GetComponent('FinishAnimator');
          if (alive(finishAnimator) && alive(finishAnimator.EKHENFPEGFE)) {
            if (gui && gui.OJFNCOLKMHP) gui.OJFNCOLKMHP.JGDCBENNDFO?.(false);
            C.FNHOMMPGFHK = true;
            this.HHDCACBMPJK = 0;
            C.HCILEAABENL = 35 < this.AGKGCILIANE() ? 0.45 : 0.85;
            finishAnimator.EKHENFPEGFE.SetActive(true);
          }
        }
      }
      if (C.FNHOMMPGFHK && alive(finishAnimator)) {
        yield 5;
        if (this.ECBLNBNGONF) this.ECBLNBNGONF.IBOCKKJLDDJ?.(finishAnimator.DPCNDOEGOKN);
        yield 7;
        C.HCILEAABENL = 0;
      } else if (this.IBOHFAOLGDH) C.HCILEAABENL = 0;
      else C.HCILEAABENL = 1.05;
      // [removed: online] BridgePHP.GenerateJsonPath() for event replays
      finishAnimator = null;
    } else {
      C.HCILEAABENL = 0;
    }
    yield this.FPLDMGGFKED ? 0.5 : 2.5;
    // ---- results
    C.HCILEAABENL = 0;
    gui = this.CDDOBCENBOG;
    const m = mainI();
    if (this.ECNAMAJCDGI && this.ECNAMAJCDGI.isPlaying && m && m.PHHOKLGPEEG) this.StartCoroutine(m.PHHOKLGPEEG?.(this.ECNAMAJCDGI, 1, 1));
    const ss = SS();
    if (ss.LONDFMJFHEL && ss.LONDFMJFHEL.isPlaying && m && m.PHHOKLGPEEG) this.StartCoroutine(m.PHHOKLGPEEG?.(ss.LONDFMJFHEL, 2, 1));
    const d = daf();
    const l = lvl();
    let bVar2, bVar3;
    if (!this.GJFMGCNOHEP) {
      if (d) {
        const prem = d.KHJGIDLMPLJ ? !!d.KHJGIDLMPLJ?.() : false;
        d.JLEEMPONONF?.((d.LOCFCFJIAIH ? d.LOCFCFJIAIH?.() : 0) + (prem ? 2 : 1) * this.NFDOKGHMLFP);
        if (gui) {
          if (gui.FDAKFHOCFAE) gui.FDAKFHOCFAE.SetActive(prem);
          if (gui.NBLCIBNCLIB) gui.NBLCIBNCLIB.gameObject.SetActive(false);
          setText(gui.FCDFNPIANKN, this.EMKMCEPMMBG);
          if (gui.FCKDGOFOOJB && gui.FCKDGOFOOJB.CIDKMFLFJEJ) { setText(gui.FCKDGOFOOJB.CIDKMFLFJEJ, this.NFDOKGHMLFP); gui.FCKDGOFOOJB.CIDKMFLFJEJ.color = new Color(1, 1, 1, 1); }
          setText(gui.IADDBKJFDJJ, this.PHKPMGOICOM);
          setText(gui.KKNMPJFFGKA, timeStr(this.FPHFKCCPAEF));
        }
      }
      bVar2 = true; bVar3 = true;
    } else {
      if (G.Menu) G.Menu.CCCHHLJEBKK = true;
      // [removed: ads] AdvController.JLMIINBOIMN++ on finish
      this.NFDOKGHMLFP = 0;
      if (gui) {
        if (gui.NBLCIBNCLIB) setText(gui.NBLCIBNCLIB, tr('EVENT') + ' ' + (l && l.DBEGLMBGKNL ? l.DBEGLMBGKNL?.() : ''));
        for (const g of gui.NDIPPJKDMIK || []) if (g) g.SetActive(true);
        const win = gui.HKPNHDAKHHO;
        if (win) {
          for (const ch of win.transform) {
            const n = ch.name;
            if (n.includes('silver_block') || n.includes('distance_bar') || n.includes('timer_block') || n.includes('points_block') || n.includes('hp_block')) ch.gameObject.SetActive(false);
          }
        }
      }
      this.PFANBJGLEJO();
      const rp = G.CarReplay ? G.CarReplay.LHNOLEHPJON : null;
      let rtime = rp ? rp.time | 0 : 0, rpts = rp ? rp.points | 0 : 0;
      if (this.DADAHEFJBFC(this.EMKMCEPMMBG, this.FPHFKCCPAEF, rpts, rtime)) { is_show_stamp_record = true; rpts = this.EMKMCEPMMBG; rtime = this.FPHFKCCPAEF; }
      const ec = l ? l.event_contest : null;
      const sort = ecSort(ec);
      if (sort === 0) {
        if (gui) {
          setText(gui.PJJEKBOGJPH, tr('BEST_POINTS') + ':');
          setText(gui.IGMEOLEHCAE, tr('BEST_TIME') + ':');
          setText(gui.PFPPAOMNDKA, ptsStr(rpts, ec ? ec.mode : 0));
          setText(gui.NAFFJNBOAFC, timeStr(rtime));
        }
        bVar2 = false; bVar3 = false;
      } else if (sort === 1) {
        if (gui) { setText(gui.PJJEKBOGJPH, tr('BEST_POINTS') + ':'); setText(gui.PFPPAOMNDKA, ptsStr(rpts, ec ? ec.mode : 0)); }
        bVar3 = false; bVar2 = true;
      } else if (sort === 2) {
        if (gui) { setText(gui.PJJEKBOGJPH, tr('BEST_TIME') + ':'); setText(gui.PFPPAOMNDKA, timeStr(rtime)); }
        bVar3 = false; bVar2 = true;
      } else { bVar2 = true; bVar3 = true; }
    }
    if (gui) gui.CBFONCCJIEE?.();
    let z = this.BHDKJIINJNL.position.z; if (z <= 0) z = 0;
    const prog = z / this.FJFNDGAMPHH;
    const prog01 = Mathf.Clamp01(prog);
    if (gui) {
      if (gui.DCIBJEIKCFL) SetSizeWithCurrentAnchors(gui.DCIBJEIKCFL, 0, prog01 * 718 + 0);
      if (gui.COLHCBFKIKF) { const a = gui.COLHCBFKIKF.anchoredPosition; gui.COLHCBFKIKF.anchoredPosition = { x: prog01 * 716 - 358, y: a.y }; }
      if (bVar3) {
        setText(gui.PJJEKBOGJPH, tr('PROGRESS'));
        setText(gui.PFPPAOMNDKA, Math.max(0, prog * 100).toFixed(2) + ' %');
        const idx = prog < 0 ? 0 : toInt((Math.min(prog, 1) * 100) / 5);
        const pp = l ? l.progress_percent || [] : [];
        if (idx < pp.length) {
          let s = tr('YOU_BEST_X_PERCENT');
          s = s.replace('[x]', '<color=#FAAF3A>' + pp[idx] + '</color>');
          s = s.replace('%', '<color=#FAAF3A>%</color>');
          setText(gui.LEIAFIEOPEP, s);
        } else setText(gui.LEIAFIEOPEP, '');
      }
      if (bVar2) {
        setText(gui.IGMEOLEHCAE, tr('ZOMBIES_KILLED'));
        const k = this.BBONKOLGOKE();
        setText(gui.NAFFJNBOAFC, String(this.GEHAGJMADEG) + (0 < k ? '/' + k : ''));
      }
      if (!C.LNNMJCIFMGH || !l || !l.tasks || !l.tasks.length) { if (gui.KINNGMPNOHN) gui.KINNGMPNOHN.SetActive(false); }
      else {
        if (2 < Screen.width / Screen.height && gui.LAGFGMNBBJA) { gui.LAGFGMNBBJA.anchoredPosition = { x: 0, y: 135 }; gui.LAGFGMNBBJA.localScale = new Vector3(0.85, 0.85, 0.85); }
        if (gui.KINNGMPNOHN) gui.KINNGMPNOHN.SetActive(true);
      }
      if (gui.DFJFDBEEMGN) gui.DFJFDBEEMGN.gameObject.SetActive(false);
      if (gui.KMOAKPCBBGM) gui.KMOAKPCBBGM.gameObject.SetActive(false);
    }
    if (d && d.FJPEKKHDOAK) {
      d.FJPEKKHDOAK?.(1, this.GEHAGJMADEG);
      d.FJPEKKHDOAK?.(5, this.CBMGIBJFILD);
      d.FJPEKKHDOAK?.(2, this.KPMJLCMMNDN);
      d.FJPEKKHDOAK?.(3, this.CNPMBEMNNCN);
      if (this.EFJKMEHHMAJ) d.FJPEKKHDOAK?.(4, 1);
    }
    if (gui && gui.INNIIHAJAOB) gui.INNIIHAJAOB.gameObject.SetActive(false);
    const bonus = roundEven((this.NFDOKGHMLFP * 0.5) / 5) * 5;
    C.GLGHPCHBONI = bonus;
    this.DMPPOBLLDBE = bonus;
    // [removed: ads] "watch an ad to double the silver" offer (Menu.ABLANDDDMOF / NLDJOFLJDKJ, INNIIHAJAOB)
    let lp = null;
    if (l && d && d.DKJLCJPBPPN && d.DKJLCJPBPPN?.(-1, true)) {
      lp = d.PJDAAMCNMHJ ? d.PJDAAMCNMHJ?.(-1) : null;
      const mn = menuI();
      if (mn && alive(mn.LCCECGFFBGC)) mn.LCCECGFFBGC.AFCKJABEJKI?.();
      if (C.LNNMJCIFMGH) {
        if (G.Menu) G.Menu.CCCHHLJEBKK = true;
        if (lp) {
          lp.JLPGAJDGPGG?.(lpCount(lp) + 1);
          const best = lpBest(lp);
          if (!isEvent(l)) {
            if (best < this.EMKMCEPMMBG) lp.MHHDNMHEMKH?.(this.EMKMCEPMMBG);
            const bt = lpTime(lp);
            if (this.FPHFKCCPAEF < bt || bt === 0) lp.FCGMALHHOJK?.(this.FPHFKCCPAEF);
          }
          is_show_stamp_record = !isEvent(l) ? best < this.EMKMCEPMMBG : false;
          if (best === 0) { if (G.Menu) G.Menu.NAHIIOCLEMH = true; if (G.Level) G.Level.last_finished = l.id; }
          const dd = G.Main ? G.Main.FBDDKIOEKDM : null;
          if (dd && dd.PKPKEMMBPNB !== -1 && 0 < l.id) {
            const v = (best === 0 || dd.PKPKEMMBPNB === -10) ? 10 : dd.PKPKEMMBPNB + 2;
            dd.DCLEGMOJBPN?.(v);
            if (G.Menu) G.Menu.JNJPCFMBDIB = false;
          }
          if (l.tasks && l.tasks.length) {
            for (const tk of l.tasks) {
              if (!tk) continue;
              const ty = tk.type;
              let val = 0;
              switch (ty) { case 0: val = this.GEHAGJMADEG; break; case 1: val = this.KPMJLCMMNDN; break; case 2: val = this.CNPMBEMNNCN; break; case 3: val = this.CBMGIBJFILD; break; default: break; }
              lp.PIGJGOGBEPF?.(ty, val);
              log('Set ' + ty + ' = ' + val);
            }
          }
          completed_stars = l.MNPHCGOJNCN ? l.MNPHCGOJNCN?.() : 0;
        }
      }
      if (gui && gui.LDDBLLPFPOO) {
        const go = gui.LDDBLLPFPOO.gameObject;
        let b = false;
        if (!isEvent(l) && lp && lpBest(lp) < 1 && 0 < l.id) {
          const cp = d.DKJLCJPBPPN?.(-1, true);
          if (cp && cp.JOEMNOABHDF && cp.JOEMNOABHDF?.(-1)) {
            if (d.HDABOKNLKGK && 0 < d.HDABOKNLKGK?.()) b = !(G.FuelManager && G.FuelManager.NDMMNFPNIGC);
          }
        }
        go.SetActive(b);
      }
      if (gui && gui.FKLEEIKNJEL) {
        let b = false;
        if (!C.LNNMJCIFMGH && isEvent(l) && l.event_contest) b = 300 < ecTimeLeft(l.event_contest);
        gui.FKLEEIKNJEL.gameObject.SetActive(b);
      }
      if (lp && G.Main && G.Main.LHBBBLINMIE) {
        const stars = lpStars(lp), id = l.id;
        const a = G.Menu && G.Menu.HAPFNAIFOMA ? G.Menu.HAPFNAIFOMA?.(id, true) : 0;
        const b = G.Menu && G.Menu.HAPFNAIFOMA ? G.Menu.HAPFNAIFOMA?.(id, false) : 0;
        if (id - 1 >= 0 && id - 1 < 10) {
          let ok = false;
          if (lpBest(lp) < 1 && !(d.MHBEPDHNNFH && d.MHBEPDHNNFH?.()) && !(d.HDBOCJPHJDD && d.HDBOCJPHJDD?.()) && !(d.KHJGIDLMPLJ && d.KHJGIDLMPLJ?.())) {
            ok = true;
            if (a <= stars && G.Menu) G.Menu.DHDINHBJPFH = true;
            if ((stars === a || stars === b) && G.Menu) { G.Menu.DPDMJEDMEDK = id; G.Menu.MCGFPLMDEKJ = true; }
          }
          if (!ok && G.Menu) G.Menu.DHDINHBJPFH = false;
        }
      }
      // [removed: analytics] AnalyticsController.GMIAJGPBEPN?.(level, percent, mode)
      // [removed: online] BridgePHP.StartServerConnect(...) result upload
    }
    // finalize
    if (C.LNNMJCIFMGH && gui && gui.OJHKPPIFCLM) this.StartCoroutine(gui.OJHKPPIFCLM?.(is_show_stamp_record, completed_stars));
    this.ODFPBGGPPDK = true;
    this.OAMJAHGGKEI();
    if (gui) {
      gui.POCPBLEDNJH?.();
      if (gui.HKPNHDAKHHO) gui.HKPNHDAKHHO.HEGIHOAJOKK?.(false);
    }
  }

  // tutorial level 0 and the tutorial-skip not yet done
  JMAEOBLLHHN() {
    const l = lvl(); if (!l) return false;
    if (l.id !== 0) return false;
    const d = daf(); return !(d && d.JHCIANGHEAK && d.JHCIANGHEAK?.());
  }

  FixedUpdate() {
    const C = CarController;
    const t = this.BHDKJIINJNL; if (!t) return;
    const rb = this.NIIFDMDCOCF;
    this.MHDBPCGFFDO = Vector3.Angle(Vector3.forward, t.forward);
    if (this.GLEPFMJIDHF) {
      if (!C.LCJOMOHFJDI) {
        const p = t.position;
        if (p.z < 5) { const q = t.position; t.position = new Vector3(q.x, q.y, 0); }
      }
      if (!C.MKEGHDPIIFK) {
        const r = t.right;
        if (Vector3.Dot(r, Vector3.right) < this.DBBGNMLGOAO && rb) {
          if (this.MHDBPCGFFDO < 40) {
            const r2 = t.right;
            rb.AddTorque(Vector3.Cross(r2, Vector3.right).mul(this.JMNDKKCCFML), ForceMode.Acceleration);
          } else {
            const av = rb.angularVelocity;
            const f = t.forward;
            rb.angularVelocity = av.sub(t.forward.mul(Vector3.Dot(av, f)));
          }
        }
      }
      if (!this.MFEELNHEKHF && rb) {
        const W = this.OLHONOOFKPP || [];
        let k;
        if (W[0] && W[0].GFGJNJIHPHP && W[this.ELCJDFHCLBG - 1] && W[this.ELCJDFHCLBG - 1].GFGJNJIHPHP) k = (this.HHDCACBMPJK * this.NHDFFBKLKLP) / 3;
        else k = this.HHDCACBMPJK * this.NHDFFBKLKLP;
        rb.AddTorque(Vector3.right.mul(k), ForceMode.VelocityChange);
      }
      if (C.FNHOMMPGFHK && rb) {
        rb.velocity = new Vector3(0, 0, 13.3);
        rb.rotation = Quaternion.Lerp(rb.rotation, Quaternion.identity, Time.fixedDeltaTime * 3);
        const p = rb.position, p2 = rb.position;
        const k = Mathf.Clamp01(Time.fixedDeltaTime * 3);
        rb.position = new Vector3(p.x, p2.y + (this.GJLAJGCPBEF - p2.y) * k, p.z);
      }
      if (alive(this.CDDOBCENBOG) && this.GJFMGCNOHEP && this.ECBLNBNGONF) this.CDDOBCENBOG.LJNIGKAEGON?.(t.position, this.ECBLNBNGONF.PEOBIGGOKBF, true);
    }
    if (1 < C.HCILEAABENL && rb) rb.AddForce(t.forward.mul(this.PHFKCFOILGD * 0.75), ForceMode.Acceleration);
    this.HBLIIBFNKIE(C.HCILEAABENL);
    if (!this.GLEPFMJIDHF) return;
    if (!this.OLGPOCHECAF || !rb) return;
    // X lock spring
    this.OLGPOCHECAF.desValue = 0;
    const p = rb.position;
    const dx = this.OLGPOCHECAF.JGMENGJBLAO?.(rb.position.x);
    rb.MovePosition(new Vector3(p.x + dx, p.y + 0, p.z + 0));
    // yaw lock spring
    const r = t.right;
    const s = Vector3.Dot(r, Vector3.right) >= 0 ? 1 : -1;
    if (!this.EBMKKIEGJCP) return;
    this.EBMKKIEGJCP.desValue = Vector3.right.mul(s);
    this.EBMKKIEGJCP.currentVel = rb.angularVelocity;
    const dv = this.EBMKKIEGJCP.JGMENGJBLAO?.(t.right);
    rb.AddTorque(new Vector3(0, dv.y, 0), ForceMode.VelocityChange);
    // body wobble
    if (!alive(this.HJLPGGPNDKA)) return;
    if (!this.NHKLKMICMOB) return;
    this.NHKLKMICMOB.desValue = Vector3.zero;
    const e = this.HJLPGGPNDKA.localEulerAngles;
    const de = this.NHKLKMICMOB.JGMENGJBLAO?.(this.HJLPGGPNDKA.localEulerAngles);
    this.HJLPGGPNDKA.localEulerAngles = new Vector3(e.x + de.x, e.y + de.y, e.z + de.z);
  }

  // input handling (UI buttons / accelerometer / keyboard)
  JBBIBEPIODK() {
    const C = CarController;
    if (Input.GetKeyDown(KeyCode.Escape)) this.AFPLNBDNJHM();
    if (C.MKEGHDPIIFK) return;
    this.HHDCACBMPJK = 0;
    C.HCILEAABENL = 0;
    const GG = G.GUIGameplay || {};
    if (0 <= (GG.NMHIDJLMFKC ?? -1)) return;
    const gui = this.CDDOBCENBOG; if (!gui) return;
    const GW = G.GUIWindow;
    if (GW && GW.OFEJBBPBBFG && GW.OFEJBBPBBFG === gui.BKLILPKICFN) return;
    if (this.KJDJKLPNCHI) return;
    if (alive(gui)) {
      // [web] keyboard / gamepad mapped onto the on-screen buttons (GamePadController is not ported)
      const accel = gui.FOHPLEABHNI || Input.throttle || Input.brake;
      const nitro = gui.INBDLOCDCPO || Input.nitro;
      const fire = gui.NOACPEOHILF || Input.fire;
      const tilt = Input.tilt;
      const left = gui.FLKNGDJHKHJ || tilt < -0.2, right = gui.OGPFKPJIEFH || tilt > 0.2 || Input.brake;
      if (accel) this.JHMJACIPINH();
      if (nitro) this.FGIKMGFJJDM();
      if (fire) this.ENFNKCGHPPG();
      if (left) this.HHDCACBMPJK = -this.IENMIKJADJF;
      if (right) this.HHDCACBMPJK = this.IENMIKJADJF;
    }
    const d = daf();
    if (d && d.DPJPKMHLGMO && d.DPJPKMHLGMO?.() && !this.ECBFJDOEKMJ) {
      const a = Input.acceleration ? Input.acceleration.x : 0;
      let v = (0.05 < a || a < -0.05) ? a * 3.2 : this.HHDCACBMPJK;
      v = Mathf.Clamp(v, -1, 1);
      this.HHDCACBMPJK = v;
    }
    if (C.LCJOMOHFJDI) return;
    if (0 < C.HCILEAABENL) this.BALBOFMAKKO();
    C.HCILEAABENL = -1;
  }

  // escape / back button
  AFPLNBDNJHM() {
    const gui = this.CDDOBCENBOG; if (!alive(gui)) return;
    if (Time.timeScale > 0 || (gui.MPPPAPJNCNE && gui.MPPPAPJNCNE.gameObject.activeSelf)) {
      if (!CarController.MKEGHDPIIFK) { gui.ButtonPause?.(false); return; }
    }
    const cur = G.GUIWindow ? G.GUIWindow.OFEJBBPBBFG : null;
    if (cur && cur === gui.BKLILPKICFN) { gui.ButtonContinue?.(); return; }
    if (cur && cur === gui.EPLFFONIKMG && gui.EPLFFONIKMG.gameObject.activeSelf) { gui.ButtonTutorialCrashCancel?.(); return; }
    if (cur && cur === gui.OAEENEPDLMI && gui.OAEENEPDLMI.gameObject.activeSelf) { gui.ButtonReviveCancel?.(); }
  }

  // nitro button
  FGIKMGFJJDM() {
    const C = CarController;
    this.BALBOFMAKKO();
    const gui = this.CDDOBCENBOG;
    if (alive(gui)) {
      if (this.EKNIOGDJDEJ <= 0) {
        if (!this.GMLHNFBOEGK) {
          this.GMLHNFBOEGK = true; this.LGLBCDCKGBI = false;
          const img = imgOf(gui.BNOMDMCBNNL); if (img) img.color = btnColor(gui.BNOMDMCBNNL, 'm_DisabledColor');
        }
      } else if (!this.LGLBCDCKGBI) {
        this.LGLBCDCKGBI = true; this.GMLHNFBOEGK = false;
        const img = imgOf(gui.BNOMDMCBNNL); if (img) img.color = new Color(1, 1, 1, 1);
      }
    }
    if (!(C.LCJOMOHFJDI && this.BLBEANOECBB)) return;
    if (this.EKNIOGDJDEJ <= 0) {
      if (alive(gui)) gui.HNKHJLDJMHB?.(tr('OUT_OF_NITRO'), 5, false, false);
      return;
    }
    C.HCILEAABENL = 1.02;
    if (Time.timeScale <= 0) return;
    if (!this.MMIFMGIJPJH) {
      const d = daf(); const ss = SS();
      if (d && d.BMMOMBGDEKF && d.BMMOMBGDEKF?.() && ss.IMKHCBJCJNB) { ss.IMKHCBJCJNB.volume = ss.OJMNAEKLGHK; callS('GIGBLEBBIEK', ss.IMKHCBJCJNB); }
      for (const ps of this.FNLHPDCIFMG || []) { if (!ps) continue; ps.main.startColor = new Color(1, 1, 1, 1); ps.emission.enabled = true; }
      if (alive(gui) && gui.LGHJCLBMOAN) { const img = imgOf(gui.LGHJCLBMOAN); if (img) img.color = btnColor(gui.LGHJCLBMOAN, 'm_PressedColor'); }
      this.MMIFMGIJPJH = true;
    }
    for (const ps of this.FNLHPDCIFMG || []) {
      if (!ps) continue;
      const b = this.JHNCCMPDHFA;
      ps.main.startLifetime = b + b * Math.sin(Time.time * 40) * 0.1; // sinf (PLT verified)
    }
    this.EKNIOGDJDEJ = Mathf.Clamp(this.EKNIOGDJDEJ - Time.deltaTime * this.PBDCHMBBDHO, 0, this.ICNCDKDODHO);
  }

  // race start
  BALBOFMAKKO() {
    const C = CarController;
    if (C.LCJOMOHFJDI || (this.GJFMGCNOHEP && !this.CBPOPFMFNFF)) return;
    C.LCJOMOHFJDI = true;
    this.PCAMLKIMMPM = Time.time;
    C.EPDJPJLHCDL = this.BHDKJIINJNL.position;
    const d = daf(); if (!d) return;
    const ss = SS();
    if (d.LKKDIBOKNMJ && d.LKKDIBOKNMJ?.() && ss.LONDFMJFHEL) { if (!ss.LONDFMJFHEL.isPlaying) callS('HCEFONCADKE', ss.LONDFMJFHEL, true); }
    if (!this.GJFMGCNOHEP) return;
    const ghost = G.Main ? G.Main.FFBJAKPBMOD : null;
    if (alive(ghost) && G.CarReplay) { const r = ghost.GetComponent(G.CarReplay); if (alive(r)) r.JNJNCPAAAAA?.(); }
    if (G.CarReplay) { const r = this.gameObject.AddComponent(G.CarReplay); if (r) r.ABMNHLOGIIB?.(); }
  }

  // show the "upgrade available" hint on the results
  OAMJAHGGKEI() {
    const C = CarController;
    if (C.GLBOHAGOBFH < 1) return;
    const d = daf(); if (!d) return;
    if ((d.LOCFCFJIAIH ? d.LOCFCFJIAIH?.() : 0) < C.GLBOHAGOBFH) return;
    const cp = d.DKJLCJPBPPN ? d.DKJLCJPBPPN?.(-1, true) : null; if (!cp) return;
    if (!(cp.JOEMNOABHDF && cp.JOEMNOABHDF?.(-1))) return;
    const lp = d.PJDAAMCNMHJ ? d.PJDAAMCNMHJ?.(-1) : null; if (!lp) return;
    if (0 < lpBest(lp)) return;
    log('Upgrade is avaliable for buy, cheapest upgrade: ' + C.GLBOHAGOBFH);
    const gui = this.CDDOBCENBOG; if (!gui) return;
    if (gui.LDDBLLPFPOO) gui.LDDBLLPFPOO.gameObject.SetActive(false);
    if (gui.IANIIDCPJGN) gui.IANIIDCPJGN.SetActive(true);
  }

  // "too slow" detector (ends the run when the car barely moves)
  DBHKFBLNNPF() {
    const C = CarController;
    if (!C.LCJOMOHFJDI) return;
    const l = lvl(); if (!l) return;
    if (l.id < 1) return;
    if (C.MKEGHDPIIFK) return;
    let t = this.EMJNOGDABPK;
    if (t === -1) return;
    if (t === 0) { t = Time.time + 1; this.EMJNOGDABPK = t; this.IHKGIAPDLHD = 0; }
    if (t <= Time.time) {
      this.EMJNOGDABPK = 0;
      this.CKGABDBFDIH = Vector3.zero;
      if (1.5 <= this.IHKGIAPDLHD) this.IAPFLMGHKIM = 0;
      else {
        const n = this.IAPFLMGHKIM; this.IAPFLMGHKIM = n + 1;
        if (n === 6) { this.EMJNOGDABPK = -1; this.StartCoroutine(this.FIOKLNLIDNH(false)); log('Too Slow 2'); }
        else if (n === 3) {
          callS('FIGKLLNAMLG', SS().DDDFBDFBFDG);
          if (this.CDDOBCENBOG) this.CDDOBCENBOG.HNKHJLDJMHB?.(tr('TOO_SLOW'), 2, false, true);
          log('Too Slow 1');
        }
      }
    } else {
      const pz = this.BHDKJIINJNL.position.z;
      const back = !(this.CHANMFBMCDE + -0.3 <= pz) && this.MHDBPCGFFDO < 100;
      const c = this.CKGABDBFDIH;
      if (!back && c.sqrMagnitude >= 9.9999994e-11) this.IHKGIAPDLHD = this.IHKGIAPDLHD + Vector3.Distance(this.BHDKJIINJNL.position, c);
    }
    this.CKGABDBFDIH = this.BHDKJIINJNL.position;
  }

  // revive: restore the car at IBNAOLDEMOB
  HOKDBNFEOCB() {
    const bombs = GameObject.FindGameObjectsWithTag('bomb');
    if (alive(this.BHDKJIINJNL)) for (const b of bombs) { if (b && Vector3.Distance(b.transform.position, this.BHDKJIINJNL.position) < 25) Destroy(b); }
    for (const w of this.OLHONOOFKPP || []) {
      if (!w) continue;
      if (w.CCLKEPFMBEA) w.CCLKEPFMBEA.gameObject.SetActive(true);
      if (w.EFOGAOHIGOE) w.EFOGAOHIGOE.enabled = true;
    }
    for (const g of this.GKMDDGOBFAF) if (alive(g)) Destroy(g);
    for (const [r, mats] of this.EDFNCPFNAKE) if (alive(r)) r.materials = mats;
    if (alive(this.EGAAKMKKMGA)) {
      this.EGAAKMKKMGA.SetActive(true);
      // [web] the combined body mesh restored the hidden parts' visuals; re-show the originals instead
      for (const g of this._hiddenByClone) if (alive(g) && !this.OLHONOOFKPP.some((w) => w && w.CCLKEPFMBEA && w.CCLKEPFMBEA.gameObject === g)) g.SetActive(true);
      this._hiddenByClone.length = 0;
    }
    if (this.HDMBHIMJKBI && alive(this.KNOBHBDEKAK)) this.KNOBHBDEKAK.gameObject.SetActive(true);
    if (alive(this.BHDKJIINJNL)) {
      this.BHDKJIINJNL.rotation = Quaternion.identity;
      this.BHDKJIINJNL.position = this.IBNAOLDEMOB;
    }
    this.PHKPMGOICOM = this.OHMALICOCHK;
    this.EMJNOGDABPK = Time.time + 10;
    CarController.MKEGHDPIIFK = false;
    if (alive(this.ECBLNBNGONF)) this.ECBLNBNGONF.OHIFDCBAEFL?.();
    this.MFEELNHEKHF = false;
    this.GGGBCBPICJN = false;
    if (alive(this.ECNAMAJCDGI)) {
      const d = daf();
      if (d && d.BMMOMBGDEKF && d.BMMOMBGDEKF?.() && !this.ECNAMAJCDGI.isPlaying) this.ECNAMAJCDGI.Play();
    }
    this.KEEAFACOAJO = 0;
    this.IOKMCIGOMNI = 0;
    this.ODPJLHICABM = 0;
    if (alive(this.CDDOBCENBOG) && this.CDDOBCENBOG.OJFNCOLKMHP) this.CDDOBCENBOG.OJFNCOLKMHP.HEGIHOAJOKK?.(false);
    this.IJACHFMOLCD = false;
    this.OJOPPNIEGLL();
  }

  // finish: brake all wheels
  KPFMJNAJAIJ() {
    for (const w of this.OLHONOOFKPP || []) {
      if (!w || !w.EFOGAOHIGOE) continue;
      w.EFOGAOHIGOE.motorTorque = -100;
      w.EFOGAOHIGOE.brakeTorque = this.ONLPPKCMCDJ * 100;
    }
  }

  // anti-cheat clamp (field passed by name: ref ObscuredInt)
  KIGCLEFNGIH(ALLBGCHDGNC, DGGEHNEECCD, CHNHFDOHLKB, FPMAPKMIPKO) {
    const v = this[ALLBGCHDGNC];
    if (CHNHFDOHLKB <= v && v <= FPMAPKMIPKO) return;
    logErr('Cheat ' + DGGEHNEECCD + ': ' + v);
    this[ALLBGCHDGNC] = CHNHFDOHLKB;
  }

  DPKGKJMAPLO() { if (this.OHMALICOCHK === 0) this.OHMALICOCHK = this.PHKPMGOICOM; } // remember HP

  // restart the level (LKKLGPDFCHB: spend fuel)
  EDHBFCLPHCO(LKKLGPDFCHB) {
    if (!this.ECNAMAJCDGI) return;
    this.ECNAMAJCDGI.Stop();
    const ss = SS();
    if (ss.IMKHCBJCJNB) ss.IMKHCBJCJNB.Pause();
    if (ss.LONDFMJFHEL) ss.LONDFMJFHEL.Stop();
    if (LKKLGPDFCHB) { const mn = menuI(); if (mn && alive(mn.LCCECGFFBGC)) mn.LCCECGFFBGC.OBAELOECFBH?.(); }
    SceneManager.LoadScene(SceneManager.GetActiveScene().name);
  }

  // revive countdown coroutine
  *HAPAIKKJNCN() {
    if (this.CDDOBCENBOG && this.CDDOBCENBOG.OAEENEPDLMI) this.CDDOBCENBOG.OAEENEPDLMI.JGDCBENNDFO?.(false);
    yield 0.3;
    if (this.CDDOBCENBOG) this.CDDOBCENBOG.PEDBEOIPIIB?.('2');
    yield 1;
    if (this.CDDOBCENBOG) this.CDDOBCENBOG.PEDBEOIPIIB?.('1');
    yield 1;
    this.HOKDBNFEOCB();
  }

  // tutorial step completion + triggers
  PKLGNADJLIG() {
    const C = CarController;
    if (C.MKEGHDPIIFK) return;
    const gui = this.CDDOBCENBOG; if (!gui) return;
    gui.DHFMPHMAMBF?.();
    const GG = G.GUIGameplay || {};
    if (gui.MPPPAPJNCNE && gui.MPPPAPJNCNE.gameObject.activeSelf) {
      if ((GG.NMHIDJLMFKC ?? -1) < 0) {
        if (GG.DEDOFFIOEFO === 0 && 0 < C.HCILEAABENL) gui.OKIGBJNMOOP?.();
        if (GG.DEDOFFIOEFO === 2 && 1 < C.HCILEAABENL && this.JFIDMPAHEAM === 0) { gui.OKIGBJNMOOP?.(); this.JFIDMPAHEAM = Time.fixedTime ?? Time.time; }
        if (GG.DEDOFFIOEFO === 3 && (0.5 < this.HHDCACBMPJK || this.HHDCACBMPJK < -0.5)) gui.OKIGBJNMOOP?.();
        if (GG.DEDOFFIOEFO === 4 && ((Input.anyKey && !Input.GetKey(KeyCode.Escape)) || Input.GetMouseButton(0))) gui.OKIGBJNMOOP?.();
      }
    }
    if (this.KKCECHKCJGO) this.KKMPDCAMDGN(1, 59, -1);
    this.KKMPDCAMDGN(4, 200, -1);
    if (this.BLBEANOECBB) this.KKMPDCAMDGN(2, 182, 0);
    this.KKMPDCAMDGN(3, 281, 0);
    if (this.KKCECHKCJGO) { this.KKMPDCAMDGN(5, 43, 2); if (this.KKCECHKCJGO) this.KKMPDCAMDGN(6, 534, 5); }
    if (this.JFIDMPAHEAM <= 0) return;
    const ft = Time.fixedTime ?? Time.time;
    if (1.1 <= ft - this.JFIDMPAHEAM) { this.JFIDMPAHEAM = 0; return; }
    if (C.HCILEAABENL < 1.02) {
      if (Time.timeScale <= 0) return;
      gui.MGNNDFEFHAH?.(2, false);
      if (G.GUIGameplay) G.GUIGameplay.JHDLBMMDEDG = (G.GUIGameplay.JHDLBMMDEDG || 0) + (G.GUIGameplay.JBJJABGHCMB || 0) / -1.5;
      return;
    }
    if (C.HCILEAABENL <= 1) return;
    gui.KLIPHOLINEP?.();
  }

  // flip detection
  EFIBCONCDIM() {
    if (this.FPJINMILBPP) return;
    if (this.KEEAFACOAJO === 0) {
      if (!(160 < this.MHDBPCGFFDO) || this.MFEELNHEKHF) return;
      const W = this.OLHONOOFKPP || [];
      if (!W[0] || W[0].GFGJNJIHPHP) return;
      if (!W[2] || W[2].GFGJNJIHPHP) return;
      const ex = this.BHDKJIINJNL.eulerAngles.x;
      if (60 <= ex) { if (ex <= 300) return; this.KEEAFACOAJO = 2; }
      else this.KEEAFACOAJO = 1;
      return;
    }
    if (!(0 < this.KEEAFACOAJO && this.MHDBPCGFFDO < 30)) return;
    const ex = this.BHDKJIINJNL.eulerAngles.x;
    if (ex <= 325) {
      if (30 <= ex) return;
      if (this.KEEAFACOAJO !== 1) {
        if (this.KEEAFACOAJO !== 2) return;
        this.KEEAFACOAJO = 0; this.ODPJLHICABM = this.ODPJLHICABM + 1; return;
      }
    } else if (this.KEEAFACOAJO !== 2) {
      if (this.KEEAFACOAJO !== 1) return;
      this.KEEAFACOAJO = 0; this.IOKMCIGOMNI = this.IOKMCIGOMNI + 1; return;
    }
    this.KEEAFACOAJO = 0;
  }

  // screenshot (debug) — not available in the browser build
  FIGLBMANNKF() {
    const d = new Date(); const pad = (n) => String(n).padStart(2, '0');
    log('Screenshot_' + Screen.width + 'x' + Screen.height + '__' + d.getFullYear() + '-' + pad(d.getMonth() + 1) + '-' + pad(d.getDate()) + '-' + pad(d.getHours() % 12) + '-' + pad(d.getMinutes()) + '-' + pad(d.getSeconds()) + '.png');
  }

  Update() {
    const C = CarController;
    if (alive(this.KNOBHBDEKAK) && !C.MKEGHDPIIFK) {
      this.KNOBHBDEKAK.localRotation = Quaternion.Euler(this.OJKKICLLELI * 150, 0, 0);
      this.OJKKICLLELI = this.OJKKICLLELI + Time.deltaTime;
    }
    if (isGarage()) { this.IODIAKMIMDD(); return; }
    if (alive(this.NCMHCOHPOOB)) this.NCMHCOHPOOB.CKHDANMOBCL?.(this.BHDKJIINJNL.position);
    const speed = this.AGKGCILIANE();
    const gui = this.CDDOBCENBOG;
    if (alive(gui)) {
      setText(gui.NBCLGLJCBAP, toInt(speed));
      if (gui.ANNCDBDHLPK) { const v = speed / this.OGGEMMINMMO; gui.ANNCDBDHLPK.fillAmount = v >= 0 ? Math.min(v, 1) * 0.62 + 0.19 : 0.19; }
      if (gui.ENEGCNGBBJJ) { const v = this.BHDKJIINJNL.position.z / this.FJFNDGAMPHH; gui.ENEGCNGBBJJ.fillAmount = v >= 0 ? Math.min(v, 1) * 0.986 + 0.007 : 0.007; }
      if (this.FJGENGBOJPA !== this.EKNIOGDJDEJ) {
        if (gui.MAIMEJBHPCL) gui.MAIMEJBHPCL.fillAmount = this.EKNIOGDJDEJ / this.ICNCDKDODHO;
        this.FJGENGBOJPA = this.EKNIOGDJDEJ;
      }
      gui.HNINFAKLAJH?.();
      if (this.GJFMGCNOHEP) {
        if (!this.CBPOPFMFNFF) {
          const e = Time.time - this.KHDKNJAGGHH;
          if (0 <= e) {
            const n = toInt(e);
            if (n !== this.PKNGKDDKNIM) {
              this.PKNGKDDKNIM = n;
              const c = 3 - n;
              if (c === 0) { this.CBPOPFMFNFF = true; this.BALBOFMAKKO(); }
              else gui.HNKHJLDJMHB?.(String(c), 6, false, true);
            }
          }
        }
        if (this.ECBLNBNGONF) gui.LJNIGKAEGON?.(this.BHDKJIINJNL.position, this.ECBLNBNGONF.PEOBIGGOKBF, false);
        if (C.LCJOMOHFJDI && !C.MKEGHDPIIFK) {
          if (this.IBOHFAOLGDH && !(this.CHANMFBMCDE < this.FJFNDGAMPHH)) {
            this.EMKMCEPMMBG = toInt(this.CHANMFBMCDE) - this.FJFNDGAMPHH;
            const s = String(this.EMKMCEPMMBG);
            gui.IKDCPJNHOKJ?.(s.length);
            if (gui.EMKMCEPMMBG) setText(gui.EMKMCEPMMBG.CIDKMFLFJEJ, s);
          } else if (this.KFMKBHIDIAK) {
            if (gui.EMKMCEPMMBG) setText(gui.EMKMCEPMMBG.CIDKMFLFJEJ, timeStr(roundEven((Time.time - this.PCAMLKIMMPM) * 100)));
          }
        }
      }
      if (this.EMAKNGFOILF) gui.NLBALNDOEFG?.();
      if (C.MKEGHDPIIFK) {
        if (gui.INNIIHAJAOB && gui.INNIIHAJAOB.gameObject.activeSelf) gui.LPFPLIJJJHJ?.();
        // [removed: online] BridgePHP loading progress bar
      }
      if (this.GGGBCBPICJN && gui.OAEENEPDLMI && gui.OAEENEPDLMI.gameObject.activeSelf) {
        const n = toInt(this.CFFNHNOABBF - Time.time);
        if (n < 1) { if (-5 < n) gui.ButtonReviveCancel?.(); }
        else setText(gui.CFFNHNOABBF, n);
      }
    }
    if (this.CHANMFBMCDE < this.BHDKJIINJNL.position.z && !C.MKEGHDPIIFK) this.CHANMFBMCDE = this.BHDKJIINJNL.position.z;
    this.JBBIBEPIODK();
    this.PKLGNADJLIG();
    if (this.MMIFMGIJPJH && C.HCILEAABENL < 1.02) {
      this.COMEHJFGEML = Time.time;
      this.MMIFMGIJPJH = false; this.KCLGACJMMIA = true;
      if (alive(gui) && gui.LGHJCLBMOAN) { const img = imgOf(gui.LGHJCLBMOAN); if (img) img.color = btnColor(gui.LGHJCLBMOAN, 'm_NormalColor'); }
    }
    if (this.KCLGACJMMIA && this.COMEHJFGEML !== 0 && C.HCILEAABENL < 1.02) {
      const tt = (Time.time - this.COMEHJFGEML) * 2.5;
      const ss = SS();
      if (1 < tt || this.MFEELNHEKHF) {
        for (const ps of this.FNLHPDCIFMG || []) if (alive(ps)) ps.emission.enabled = false;
        if (ss.IMKHCBJCJNB) ss.IMKHCBJCJNB.Pause();
        this.KCLGACJMMIA = false;
      } else {
        const k = Mathf.Clamp01(tt);
        if (ss.IMKHCBJCJNB) ss.IMKHCBJCJNB.volume = ss.OJMNAEKLGHK + k * (0 - ss.OJMNAEKLGHK);
        const c = this.BNMFJFGALEJ;
        for (const ps of this.FNLHPDCIFMG || []) if (alive(ps)) ps.main.startColor = new Color(k * (c.r - 1) + 1, k * (c.g - 1) + 1, k * (c.b - 1) + 1, k * (c.a - 1) + 1);
      }
    }
    if (!this.KJDJKLPNCHI) {
      const h = C.HCILEAABENL;
      const on = !this.MFEELNHEKHF && 0 < h && h < 1.02;
      if (alive(this.KJOJAFKDHNH) && this.PKCLOKOFBCA) this.PKCLOKOFBCA.enabled = on;
      if (alive(this.PCMEAFEIBBC) && this.DPEHNPPFHMD) this.DPEHNPPFHMD.enabled = on;
    }
    const d = daf();
    if (d && d.BMMOMBGDEKF && d.BMMOMBGDEKF?.()) {
      let v = 0;
      if (this.OGGEMMINMMO !== 0) { const r = speed / this.OGGEMMINMMO; if (0 <= r) v = r; }
      if (this.ECNAMAJCDGI) this.ECNAMAJCDGI.pitch = v * 0.5 + 0.5;
      let np = 0.8;
      if (this.OGGEMMINMMO !== 0) { const r = speed / this.OGGEMMINMMO; if (0 <= r) np = Math.min(r, 1) * 0.4 + 0.8; }
      const ss = SS(); if (ss.IMKHCBJCJNB) ss.IMKHCBJCJNB.pitch = np;
    }
    this.EFIBCONCDIM();
    this.DBHKFBLNNPF();
    this.OIDKCBOGMIJ();
    if (this.MFEELNHEKHF) return;
    if (this.ODPJLHICABM < 1) {
      if (this.IOKMCIGOMNI < 1) { if (29 <= this.MHDBPCGFFDO) return; this.KEEAFACOAJO = 0; return; }
      this.FKBDELMHMJD('IOKMCIGOMNI', 'CNPMBEMNNCN');
      if (!this.OJDANPGPKPB) return;
      const l = lvl(); if (!l || !l.event_contest || l.event_contest.mode !== 4) return;
      this.IKOEIGDJPEK(3, true);
    } else {
      this.FKBDELMHMJD('ODPJLHICABM', 'KPMJLCMMNDN');
      if (!this.OJDANPGPKPB) return;
      const l = lvl(); if (!l || !l.event_contest || l.event_contest.mode !== 4) return;
      this.IKOEIGDJPEK(2, true);
    }
  }

  // resume the paused low-HP smoke after 1 s
  OIDKCBOGMIJ() {
    if (!alive(this.ICNPJPLFCBA) || !(0 < this.CEOJAIIMKBO)) return;
    if (this.ICNPJPLFCBA.paused && 1 < Time.time - this.CEOJAIIMKBO) { this.ICNPJPLFCBA.paused = false; this.ICNPJPLFCBA.Play(); this.CEOJAIIMKBO = 0; }
  }

  // damage the car (IKOBFEOAKCI HP; FLKHNKPAHGK = armor reduces the slow-down)
  EKOHIKFFBFC(IKOBFEOAKCI, FLKHNKPAHGK) {
    if (CarController.MKEGHDPIIFK) return;
    if (this.PHKPMGOICOM < 1) return;
    let hp = this.PHKPMGOICOM - IKOBFEOAKCI; if (hp < 0) hp = 0;
    this.PHKPMGOICOM = hp;
    const gui = this.CDDOBCENBOG;
    let slow, col, scale, shake, fs;
    if (IKOBFEOAKCI < 2) slow = 0.15;
    else { const f = IKOBFEOAKCI / 30; slow = f < 0 ? 0.25 : Math.min(f, 1) * 0.25 + 0.25; }
    if (IKOBFEOAKCI < 25) {
      if (IKOBFEOAKCI < 10) { fs = 64; col = new Color(1, 1, 1, 1); scale = 1; shake = 2; }
      else { fs = 74; col = gui ? Color.from(gui.ODECDCJMJJN) : Color.white; scale = 1.5; shake = 4; }
    } else { fs = 84; col = gui ? Color.from(gui.KOEMFOMPNLD) : Color.white; scale = 2; shake = 6; }
    if (gui && gui.GJNFHBJBIBC && gui.GJNFHBJBIBC.CIDKMFLFJEJ) gui.GJNFHBJBIBC.CIDKMFLFJEJ.fontSize = fs;
    this.CHPDPBCCBJP(shake);
    this.OJOPPNIEGLL();
    if (gui && gui.PHKPMGOICOM) gui.PHKPMGOICOM.ICMOCEHIFOI?.();
    if (gui && gui.GJNFHBJBIBC) gui.GJNFHBJBIBC.ICMOCEHIFOI?.(-IKOBFEOAKCI, col, scale);
    this.GCHFPNMJHCA(slow, FLKHNKPAHGK);
    if (this.PHKPMGOICOM < 1 && !this.MFEELNHEKHF) this.AEFMMNHIGLH();
  }

  // fatal hit by OPBPCFOOBHD: start the revive offer if possible
  HECJKCAMLHJ(OPBPCFOOBHD) {
    if (this.CFFNHNOABBF === -1 || this.GGGBCBPICJN) return false;
    const mn = menuI();
    const adv = mn ? mn.ANIMNONMFFH : null;
    // [removed: ads] the original required a rewarded ad here; the web port offers one free revive per race instead
    void adv;
    const hp = this.OHMALICOCHK;
    if (hp <= 99 && this.FJOFMMAGAPG * 0.3 > hp) return this.GGGBCBPICJN;
    if (alive(OPBPCFOOBHD)) {
      const rev = OPBPCFOOBHD.GetComponent('ReviveObject');
      let done = false;
      if (alive(rev) && OPBPCFOOBHD.name.includes('yama')) {
        const z = rev.IBINGNLOHNJ?.();
        if (0 < z) {
          const p = this.BHDKJIINJNL.position;
          this.IBNAOLDEMOB = new Vector3(p.x, CarController.EPDJPJLHCDL.y + 0.3, z);
          this.GGGBCBPICJN = true; done = true;
        }
      } else if (alive(rev) && OPBPCFOOBHD.name.includes('bomb')) {
        const p = this.BHDKJIINJNL.position;
        this.IBNAOLDEMOB = new Vector3(p.x, p.y + 0.3, p.z);
        this.GGGBCBPICJN = true; done = true;
      }
      if (done) { this.StartCoroutine(this.JMCGEKEOJHD(false)); return this.GGGBCBPICJN; }
    }
    if (this.GGGBCBPICJN) this.StartCoroutine(this.JMCGEKEOJHD(false));
    return this.GGGBCBPICJN;
  }
}
CarController.CarColor = CarColor;
CarController.CILHKIPDPMN = CILHKIPDPMN;
G.CarColor = CarColor;
define('CarController', CarController);
