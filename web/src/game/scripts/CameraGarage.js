// CameraGarage.cs — orbit camera of the garage (drag to rotate around the car, auto idle rotation,
// focus on car parts via IKDKLJMPOKM, shake coroutine KMAJDDIIPLH, aspect-dependent FOV).
import { Time, Input, Mathf, Vector3, Quaternion, Camera, Screen, SetSizeWithCurrentAnchors } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

const clamp01 = (v) => (v > 1 ? 1 : v < 0 ? 0 : v);
const IDLE_SPEED = [-0.003, 0.003]; // UNK_0059ca68 (indexed by yawVelocity >= 0)

export class CameraGarage extends GameBehaviour {
  static HOJJLFJFOAE = [220, 130, 50, 330]; // yaw presets: [0,1] front pair, [2,3] back pair (metadata init)
  static AIAFBIAFIJI = [270, 90];           // yaw presets: doors (side views)
  static EEDHGFMOCFO = 0;                   // target yaw (focus / momentum)
  static OLCNKJJGCJA = 0;                   // yaw of the previous frame
  static DLIKNENKJHG = 0;
  static NNIIAKELHON = 0;                   // Time.time of the last focus request
  static BHKLGNGKFCK = -5.9;                // const: min zoom distance

  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null;     // own transform
    this.LOENHIOALIO = null;     // Transform orbit target
    this.EJBDOAADILD = null;     // CatGarage
    this.DNGCKJMGBPI = 0.3;      // rotation sensitivity
    this.MCMIJDNMMEC = 2;        // momentum factor
    this.EAGLNJLLKIL = 3;        // idle rotation enabled (!= 0)
    this.MGFMNPNPBJO = -1;
    this.CGBMLGOHHAO = -1;       // yaw
    this.ALNBGFBLINB = -1;       // pitch
    this.DLAOJKAPHBO = -1;
    this.MMCJPAFDKPO = -4;       // distance (negative z)
    this.FLHLDIMKJMH = 0;        // min pitch
    this.BCPCBFAGAAG = 30;       // max pitch
    this.FCOFECAJPJA = true;     // input allowed
    this.MEHDJFDHKNE = false;    // shaking
    this.ONOEAEDLANH = 55;       // GUIGarage.NDFMIKKMKLM height
    this.AKEFMNGNIFJ = 0;        // last Screen.height
    this.PCIELBPDKBH = 0;        // last Screen.width
    this.EIKILFDFMFB = null;     // Camera
    this.IGMCNCFECPC = 0;        // base distance
    this.APFHDPAINHB = 0;        // extra distance on very wide screens
    this.JEGANKKGHDC = 0;        // pitch velocity
    this.HNAIPBGPAKK = 0;        // yaw velocity
    this._lastMouse = null;
  }

  Start() {
    this.LIEHBGFFHFF = this.transform;
    const arr = CameraGarage.HOJJLFJFOAE;
    const yaw = arr[Math.floor(Math.random() * arr.length)];
    this.CGBMLGOHHAO = yaw;
    CameraGarage.OLCNKJJGCJA = yaw; CameraGarage.DLIKNENKJHG = yaw; CameraGarage.EEDHGFMOCFO = yaw;
    this.EIKILFDFMFB = this.GetComponent(Camera);
    this.GFOMIMMNDBH();
    this.AKEFMNGNIFJ = Screen.height;
    this.PCIELBPDKBH = Screen.width;
    if (alive(this.EJBDOAADILD)) this.EJBDOAADILD.KHDFDGMBOIJ();
    this.IGMCNCFECPC = this.MMCJPAFDKPO;
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    const off = alive(cc) ? cc.NDPILGPNEFL || 0 : 0;
    this.MMCJPAFDKPO = Mathf.Clamp(this.MMCJPAFDKPO - off - this.APFHDPAINHB, -5.9, 0);
  }

  // Unity "Mouse X"/"Mouse Y" axes (pixel delta * 0.1)
  _mouseAxes() {
    const m = Input.mousePosition;
    const l = this._lastMouse || m;
    this._lastMouse = { x: m.x, y: m.y };
    return { x: (m.x - l.x) * 0.1, y: (m.y - l.y) * 0.1 };
  }

  Update() {
    if (alive(this.EJBDOAADILD)) this.EJBDOAADILD.DPMNCABIAJA();
    let allow = false;
    if (!this.MEHDJFDHKNE) {
      const menu = G.Menu && G.Menu.KECGFPHIEHF; const g = menu && menu.ALPCPBBNEBA;
      if (alive(menu) && g) {
        const cur = G.GUIWindow ? G.GUIWindow.OFEJBBPBBFG : null;
        if (cur && (cur === g.AEBAFCEJDPO || cur === g.CNBICALJOKA)) allow = !(g.EJKPAICDHGA && g.EJKPAICDHGA.activeSelf);
      }
    }
    this.FCOFECAJPJA = allow;
    const axes = this._mouseAxes();
    // Main.HLCBMDDBLNE selects the touch path on device; the web build always uses the mouse/pointer path
    if (Input.GetMouseButton(0) && this.FCOFECAJPJA) {
      let pv;
      if (Input.GetMouseButtonDown(0)) { pv = 0; this.JEGANKKGHDC = 0; this.HNAIPBGPAKK = this.HNAIPBGPAKK / 100; }
      else pv = this.JEGANKKGHDC;
      const sens = G.Main && typeof G.Main.IONFLBIAGDP === 'number' && G.Main.IONFLBIAGDP ? G.Main.IONFLBIAGDP : 1;
      const dy = Input.GetMouseButtonDown(0) ? 0 : axes.y, dx = Input.GetMouseButtonDown(0) ? 0 : axes.x;
      this.JEGANKKGHDC = pv + dy * sens * 0.012;
      const yv = this.HNAIPBGPAKK + dx * sens * 0.012;
      if (this.JEGANKKGHDC < -0.1) this.JEGANKKGHDC = -0.1;
      this.HNAIPBGPAKK = yv;
      if (yv !== 0) CameraGarage.EEDHGFMOCFO = this.CGBMLGOHHAO + (this.CGBMLGOHHAO - CameraGarage.OLCNKJJGCJA) * this.MCMIJDNMMEC * 6.5;
      this.PHMMMLBENKN();
    } else this.LBPODLFBDIK();

    const dt = Time.deltaTime;
    CameraGarage.OLCNKJJGCJA = this.CGBMLGOHHAO;
    let pitch = this.ALNBGFBLINB + (10 - this.ALNBGFBLINB) * clamp01(dt); // relax toward 10°
    this.ALNBGFBLINB = pitch;
    if (CameraGarage.NNIIAKELHON === 0 || Time.time - CameraGarage.NNIIAKELHON >= 1.5) {
      this.ALNBGFBLINB = pitch - dt * this.JEGANKKGHDC * this.DNGCKJMGBPI * 7 * 400;
      this.CGBMLGOHHAO = this.CGBMLGOHHAO + dt * this.HNAIPBGPAKK * this.DNGCKJMGBPI * 7 * 400;
    } else {
      // focusing on a preset yaw
      if (Math.abs(this.CGBMLGOHHAO - CameraGarage.EEDHGFMOCFO) > 300) {
        const t = CameraGarage.EEDHGFMOCFO;
        let w = t < 0 ? t + 360 : t; if (w > 360) w -= 360; if (w < 0) w = 0;
        CameraGarage.EEDHGFMOCFO = w + (t - CameraGarage.OLCNKJJGCJA < 0 ? -0.5 : 0.5);
      }
      this.CGBMLGOHHAO = this.CGBMLGOHHAO + (CameraGarage.EEDHGFMOCFO - this.CGBMLGOHHAO) * clamp01(dt * 3);
      const d = CameraGarage.EEDHGFMOCFO - this.CGBMLGOHHAO;
      const s1 = d < 0 ? -1 : 1, s2 = this.HNAIPBGPAKK < 0 ? -1 : 1;
      if (s1 !== s2) this.HNAIPBGPAKK = d < 0 ? -this.HNAIPBGPAKK : this.HNAIPBGPAKK;
    }
    this.ALNBGFBLINB = CameraGarage.LJOIIPPOEBG(this.ALNBGFBLINB, this.FLHLDIMKJMH, this.BCPCBFAGAAG);
    let y = this.CGBMLGOHHAO; if (y < 0) y += 360; if (y > 360) y -= 360; if (y < 0) y = 0;
    this.CGBMLGOHHAO = y;
    // zoom (car-dependent offset)
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    const off = alive(cc) ? cc.NDPILGPNEFL || 0 : 0;
    const target = Mathf.Clamp(this.IGMCNCFECPC - off - this.APFHDPAINHB, -5.9, 0);
    this.MMCJPAFDKPO = this.MMCJPAFDKPO + Math.max(dt, 0) * (target - this.MMCJPAFDKPO);
    this._applyOrbit(0);
    if (this.PCIELBPDKBH === Screen.width && this.AKEFMNGNIFJ === Screen.height) return;
    this.AKEFMNGNIFJ = Screen.height;
    this.PCIELBPDKBH = Screen.width;
    this.GFOMIMMNDBH();
  }
  _applyOrbit(shake) {
    if (!this.LOENHIOALIO || !this.LIEHBGFFHFF) return;
    const rot = Quaternion.Euler(this.ALNBGFBLINB, this.CGBMLGOHHAO, 0);
    let pos = rot.rotate(new Vector3(0, 0, this.MMCJPAFDKPO)).add(this.LOENHIOALIO.position);
    if (shake) pos = pos.add(this.LIEHBGFFHFF.right.mul(shake));
    this.LIEHBGFFHFF.rotation = rot;
    this.LIEHBGFFHFF.position = pos;
  }
  // touch drag (device path, kept for completeness)
  ADGKBFDJPFH() {
    const t = Input.touches && Input.touches[0];
    if (!(Input.touchCount === 1)) return;
    this.PHMMMLBENKN();
    if (t && t.phase === 1) {
      const sens = G.Main && G.Main.MFMCEKDMIBH ? G.Main.MFMCEKDMIBH : 1;
      const yv = t.deltaPosition.x * 0.003 * sens + this.HNAIPBGPAKK;
      this.JEGANKKGHDC = this.JEGANKKGHDC + t.deltaPosition.y * 0.003 * sens;
      this.HNAIPBGPAKK = yv;
      if (yv !== 0) CameraGarage.EEDHGFMOCFO = this.CGBMLGOHHAO + (this.CGBMLGOHHAO - CameraGarage.OLCNKJJGCJA) * this.MCMIJDNMMEC * 2.5;
    }
  }
  // damping while dragging
  PHMMMLBENKN() {
    const dt = Time.deltaTime;
    this.JEGANKKGHDC = this.JEGANKKGHDC + (0 - this.JEGANKKGHDC) * clamp01(dt);
    const idle = this.EAGLNJLLKIL !== 0 ? IDLE_SPEED[this.HNAIPBGPAKK >= 0 ? 1 : 0] : 0;
    this.HNAIPBGPAKK = this.HNAIPBGPAKK + (idle - this.HNAIPBGPAKK) * clamp01(dt * 2);
  }
  // damping when released (keeps idle rotation)
  LBPODLFBDIK() {
    let pv = this.JEGANKKGHDC;
    if (this.ALNBGFBLINB < 0.1 || this.BCPCBFAGAAG - 0.1 < this.ALNBGFBLINB) { pv = 0; this.JEGANKKGHDC = 0; }
    const dt = Time.deltaTime;
    this.JEGANKKGHDC = pv + (0 - pv) * clamp01(dt * 5);
    const idle = this.EAGLNJLLKIL !== 0 ? IDLE_SPEED[this.HNAIPBGPAKK >= 0 ? 1 : 0] : 0;
    this.HNAIPBGPAKK = this.HNAIPBGPAKK + (idle - this.HNAIPBGPAKK) * clamp01(dt * 4);
  }
  // wrap to [-360,360] then clamp
  static LJOIIPPOEBG(BIECADNFNCH, CHNHFDOHLKB, FPMAPKMIPKO) {
    let a = BIECADNFNCH < -360 ? BIECADNFNCH + 360 : BIECADNFNCH;
    if (a > 360) a -= 360;
    return a < CHNHFDOHLKB ? CHNHFDOHLKB : a <= FPMAPKMIPKO ? a : FPMAPKMIPKO;
  }
  // wrap to [0,360] then clamp
  static HAAFHAFPABK(BIECADNFNCH, CHNHFDOHLKB, FPMAPKMIPKO) {
    let a = BIECADNFNCH < 0 ? BIECADNFNCH + 360 : BIECADNFNCH;
    if (a > 360) a -= 360;
    return a < CHNHFDOHLKB ? CHNHFDOHLKB : a <= FPMAPKMIPKO ? a : FPMAPKMIPKO;
  }
  // aspect-dependent field of view
  GFOMIMMNDBH() {
    const cam = this.EIKILFDFMFB; if (!cam) return;
    const a = Screen.width / Screen.height;
    if (a <= 1.26) cam.fieldOfView = 65;
    else if (a <= 1.34) cam.fieldOfView = 62;
    else if (a <= 1.51) cam.fieldOfView = 58;
    else if (a < 1.61) cam.fieldOfView = 59;
    else { cam.fieldOfView = 55; if (a >= 1.8) this.APFHDPAINHB = 0.35; }
    this.DIMEPBAOOAD(a > 1.8 ? 670 : 780); // map level panel height (from the binary @0xb3f258: csel 0x29e / 0x30c)
  }
  // GUIGarage.NDFMIKKMKLM.SetSizeWithCurrentAnchors(Vertical, size)
  DIMEPBAOOAD(KDPHGADNELJ) {
    const menu = G.Menu && G.Menu.KECGFPHIEHF; if (!alive(menu)) return;
    const g = menu.ALPCPBBNEBA; if (!alive(g)) return;
    const rt = g.NDFMIKKMKLM; if (!rt || !rt.gameObject || !rt.gameObject.rect) return;
    SetSizeWithCurrentAnchors(rt, 1, KDPHGADNELJ);
  }
  // focus the camera on a car part (EHKCLJKMBLO: none=0 forward=1 back=2 wheels=3 doors=4)
  static IKDKLJMPOKM(KENMLPFOLCH) {
    CameraGarage.NNIIAKELHON = Time.time;
    const x = CameraGarage.OLCNKJJGCJA;
    switch (KENMLPFOLCH) {
      case 1: CameraGarage.HIHMJIDCNEC(); return;
      case 2: CameraGarage.EFCAPPJJBNE(); return;
      case 3:
        if (160 < x && x < 200) { CameraGarage.HIHMJIDCNEC(); return; }
        if (0 <= x && x < 20) { CameraGarage.EFCAPPJJBNE(); return; }
        if (x <= 340) return;
        CameraGarage.EFCAPPJJBNE(); return;
      case 4: CameraGarage.KDCDGKBJAMB(); return;
      default: return;
    }
  }
  static _pick(a, b) {
    const f = CameraGarage.OLCNKJJGCJA;
    const v = Math.abs(f - b) <= Math.abs(f - a) ? b : a;
    CameraGarage.EEDHGFMOCFO = v; CameraGarage.OLCNKJJGCJA = v;
  }
  static HIHMJIDCNEC() { const h = CameraGarage.HOJJLFJFOAE; CameraGarage._pick(h[0], h[1]); }
  static EFCAPPJJBNE() { const h = CameraGarage.HOJJLFJFOAE; CameraGarage._pick(h[2], h[3]); }
  static KDCDGKBJAMB() { const h = CameraGarage.AIAFBIAFIJI; CameraGarage._pick(h[0], h[1]); }
  // coroutine KMAJDDIIPLH: horizontal shake (3 damped oscillations)
  *OIKFBMHJDBN() {
    if (this.MEHDJFDHKNE) return;
    this.MEHDJFDHKNE = true;
    let hitTime = Time.time, counter = 3, dist = 1; // [Time.maximumDeltaTime = 0.02 not supported]
    for (;;) {
      const ph = (Time.time - hitTime) * 55;
      this._applyOrbit(dist * Math.sin(ph));
      if (ph > 6.2831855) { hitTime = Time.time; dist *= 0.5; counter--; }
      yield null;
      if (counter < 1) { this.MEHDJFDHKNE = false; return; }
    }
  }
}
define('CameraGarage', CameraGarage);
