// CarCameraIntro: intro fly-in of the car camera (level_000 / tutorial): starts 21 m behind, blends into
// the normal follow position, then shows the gameplay GUI and starts the car.
import { Vector3, Quaternion, Time } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class CarCameraIntro extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.PEOGKCENKHC = false; // initialised
    this.EJKIAGGPIPK = null;  // CarCamera
    this.AKMFLOLIJGL = null;  // GameObject hidden at the end of the intro
    this.LIEHBGFFHFF = null;  // own transform
    this.IOLDLAMIDEH = null;  // Transform marker (camera start)
    this.FIDIBADMPDL = null;  // Transform intro camera pose
    this.CNAGLGLEJMC = 0;     // elapsed
    this.POFGFHHOEHP = 0;     // blend factor
    this.KHBNILJMILD = false; // handed over to CarCamera
  }
  // init: place intro pose 21 m behind / 3 m right of the follow camera
  KHDFDGMBOIJ() {
    const cam = this.EJKIAGGPIPK;
    if (!alive(cam) || !alive(cam.PEEMAHNEIHI)) return;
    cam.PEEMAHNEIHI.KJDJKLPNCHI = true;  // car on hold
    cam.PGAPMNLLMHM = 2;
    cam.KHDFDGMBOIJ();
    cam.BGKJCAIHANB();
    cam.IDBHFAEMGOB();
    this.LIEHBGFFHFF = this.transform;
    const cp = cam.LIEHBGFFHFF.position;
    this.FIDIBADMPDL.position = cp;
    this.IOLDLAMIDEH.position = cp;
    this.FIDIBADMPDL.position = this.FIDIBADMPDL.position.sub(Vector3.forward.mul(21.0));
    this.FIDIBADMPDL.position = this.FIDIBADMPDL.position.add(Vector3.right.mul(3.0));
    this.LIEHBGFFHFF.position = this.FIDIBADMPDL.position;
    this.LIEHBGFFHFF.rotation = this.FIDIBADMPDL.rotation;
    const SS = G.SoundScript; if (SS && SS.GIGBLEBBIEK) SS.GIGBLEBBIEK(SS.HHFECFNJNHK);
    this.PEOGKCENKHC = true;
  }
  Update() {
    if (!this.PEOGKCENKHC) { this.KHDFDGMBOIJ(); return; }
    const cam = this.EJKIAGGPIPK;
    let t = this.CNAGLGLEJMC;
    if (3.0 < t && !this.KHBNILJMILD) {
      const k = this.POFGFHHOEHP < 0 ? 0 : this.POFGFHHOEHP;
      const a = this.FIDIBADMPDL.position, b = cam.AAPGENGOABC();
      this.LIEHBGFFHFF.position = new Vector3(a.x + (b.x - a.x) * k, a.y + (b.y - a.y) * k, a.z + (b.z - a.z) * k);
      const e = cam.LNDBDGLKMLD;
      this.LIEHBGFFHFF.rotation = Quaternion.Lerp(this.FIDIBADMPDL.rotation, Quaternion.Euler(e.x, e.y, e.z), k);
      this.POFGFHHOEHP += Time.deltaTime * 0.5;
      t = this.CNAGLGLEJMC;
    }
    if (5.0 < t && !this.KHBNILJMILD) {
      const car = cam.PEEMAHNEIHI;
      const win = car && car.CDDOBCENBOG && car.CDDOBCENBOG.OJFNCOLKMHP; // GUIGameplay main window
      if (win && win.gameObject) win.gameObject.SetActive(true);
      if (car && car.ECBLNBNGONF) car.ECBLNBNGONF.enabled = true;
      cam.PGAPMNLLMHM = 0;
      if (this.AKMFLOLIJGL) this.AKMFLOLIJGL.SetActive(false);
      t = this.CNAGLGLEJMC;
      this.KHBNILJMILD = true;
    }
    if (6.0 < t) {
      const car = cam.PEEMAHNEIHI;
      car.MNMBFIBHFBB();            // start the car
      car.KJDJKLPNCHI = false;
      this.enabled = false;
      t = this.CNAGLGLEJMC;
    }
    this.CNAGLGLEJMC = t + Time.deltaTime;
  }
}
define('CarCameraIntro', CarCameraIntro);
