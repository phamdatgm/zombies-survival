// Zombie: walks toward the car, snaps to the ground; special kinds throw barrels (with_barrel),
// throw at the car (tank) or jump off the sidewalk (sidewalk).
import { Vector3, Quaternion, Time, Random, Physics, Layers, Destroy, BoxCollider, Rigidbody, ForceMode } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

// GBLIKCKFCBH: walk=0 with_barrel=1 crawl=2 run_fire=3 run_dynamite=4 fat=5 tank=6 walk_shield=7 walk_fire=8 sidewalk=9 cat_and_dogs=10
export class Zombie extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.HDDHKFDFPIK = false;
    this.PHKPMGOICOM = 1;          // hit points (tank)
    this.IKOBFEOAKCI = 1;          // coins reward
    this.KJHIDPMAFFF = 0;          // score/xp reward
    this.FHOFNGHGNGF = 0;          // GBLIKCKFCBH kind
    this.ELAGCAKJDAN = 0;          // EONPOEEAEOK parts prefab
    this.CPFPFGOIDDO = 0;          // CPFPFGOIDDO encyclopedia kind
    this.IJEOCIBFOHB = null;       // last ground RaycastHit
    this.NOEIMOPFFND = Vector3.zero; // smoothed ground normal
    this.NBCLGLJCBAP = 0.3;        // walk speed
    this.AGFPLMAAMKG = 5;          // normal smoothing rate
    this.MDDKLMGCHML = 0.05;       // ground offset
    this.IFNKAAPBPPB = 2500;
    this.PCKPDBGGOPK = 0;          // blood FX height
    this.NFABKCAPLMG = null;       // Animator
    this.LIEHBGFFHFF = null;       // Transform
    this.ABNPNOKAMEB = null;       // carried object (barrel/shield/fire)
    this.JIDEOGBJAOO = null;       // carried object collider
    this.OAHDDLELAPF = null;       // carried object transform
    this.EPEPDEHGJHM = 0;          // shield explosion force
    this.PCAMLKIMMPM = 0;          // action start time
    this.DGEEAODMLBA = false;      // action triggered
    this.JJBIDGDHLBH = false;      // action done
  }
  get _hitNormal() { return this.IJEOCIBFOHB ? this.IJEOCIBFOHB.normal : Vector3.up; }
  Start() {
    const an = this.NFABKCAPLMG;
    if (!an) return;
    switch (this.FHOFNGHGNGF) {
      case 1: an.Play('WalkBarrel', -1, 0); break;
      case 2: an.Play('Crawl', -1, Random.value); break;
      case 3: case 4: an.Play('Run', -1, Random.value); break;
      case 6: an.Play('TankIdle', -1, 0); break;
      case 9: an.Play('Idle', -1, Random.value); break;
      default: an.Play('Zombie_Walk', -1, Random.value); break;
    }
  }
  // detach the shield / carried object as a physics prop
  HMEFLNGHPDI() {
    if (!alive(this.ABNPNOKAMEB) || !alive(this.OAHDDLELAPF) || !alive(this.JIDEOGBJAOO)) return;
    this.ABNPNOKAMEB.layer = Layers.NameToLayer('zombie_parts');
    Physics.refreshLayer && Physics.refreshLayer(this.ABNPNOKAMEB);
    this.JIDEOGBJAOO.enabled = true;
    this.OAHDDLELAPF.SetParent(null, true);
    const rb = this.ABNPNOKAMEB.AddComponent(Rigidbody);
    if (alive(rb)) rb.interpolation = 1;
    const f = this.EPEPDEHGJHM;
    if (f < 1) return;
    const t = this.LIEHBGFFHFF;
    // disasm: position + right*4 - up*3 - forward*2, radius 100
    const c = t.position.add(Vector3.right.mul(4)).sub(Vector3.up.mul(3)).sub(Vector3.forward.mul(2));
    rb.AddExplosionForce(f, c, 100);
  }
  Update() {
    if (Time.timeScale !== 1.0) return;
    this.LJLGIPJCHFC(false);
    const t = this.LIEHBGFFHFF;
    t.position = t.position.add(t.forward.mul(this.NBCLGLJCBAP * Time.deltaTime));
    const CC = G.CarController;
    const car = CC && CC.KECGFPHIEHF;
    if (!alive(car)) return;
    if (CC.MKEGHDPIIFK) return;
    const kind = this.FHOFNGHGNGF;
    const myZ = t.position.z;
    if (kind === 9) { // sidewalk: jump onto the road when the car approaches
      if (!this.DGEEAODMLBA) {
        const s = car.AGKGCILIANE();
        const thr = Math.max(3.0, (s / 70.0) * 17.0 + 3.0);
        if (myZ - car.BHDKJIINJNL.position.z < thr) {
          this.DGEEAODMLBA = true;
          this.NBCLGLJCBAP = 4;
          if (this.NFABKCAPLMG) this.NFABKCAPLMG.CrossFade('Jump', 0.05);
          return;
        }
        if (!this.DGEEAODMLBA) return;
      }
      if (this.JJBIDGDHLBH) return;
      if (5.0 <= myZ - car.BHDKJIINJNL.position.z) return;
      this.JJBIDGDHLBH = true;
      const bc = this.GetComponent(BoxCollider);
      if (bc) {
        bc.size.set(bc.size.x, bc.size.y, 1);   // size = (x, y, 1)
        bc.center.set(0, bc.center.y, bc.center.z);
        bc._rebuild && bc._rebuild();
      }
      return;
    }
    if (kind === 1) { // with_barrel: throw the barrel at the car
      const s = car.AGKGCILIANE();
      if (!this.DGEEAODMLBA) {
        const thr = Math.max(10.0, (s / 70.0) * 20.0);
        if (myZ - car.BHDKJIINJNL.position.z < thr) {
          this.DGEEAODMLBA = true;
          this.NBCLGLJCBAP = 0;
          if (this.NFABKCAPLMG) this.NFABKCAPLMG.CrossFade('ThrowBarrel', 0.15);
          this.PCAMLKIMMPM = Time.time;
          return;
        }
        if (!this.DGEEAODMLBA) return;
      }
      if (this.JJBIDGDHLBH) return;
      if (!(0.4 < Time.time - this.PCAMLKIMMPM)) return;
      this.JJBIDGDHLBH = true;
      this.NBCLGLJCBAP = 0.25;
      if (alive(this.JIDEOGBJAOO)) { this.JIDEOGBJAOO.enabled = true; this.JIDEOGBJAOO.isTrigger = true; }
      if (alive(this.ABNPNOKAMEB)) {
        this.ABNPNOKAMEB.transform.SetParent(null, true);
        const rb = this.ABNPNOKAMEB.AddComponent(Rigidbody);
        rb.interpolation = 1;
        rb.mass = 20;
        const d = car.BHDKJIINJNL.position.sub(this.ABNPNOKAMEB.transform.position).normalized;
        rb.AddForce(d.mul(300), ForceMode.Impulse);
      }
      car.NEJKJHMFBMJ.DPPPINBGNAK = this.LIEHBGFFHFF;
      return;
    }
    if (kind !== 6) return;
    // tank: throws at the car, then hits it
    let base = 20;
    if (car.AGKGCILIANE() <= 50) base = 30.0 < car.AGKGCILIANE() ? 24 : 30;
    const s = car.AGKGCILIANE();
    if (!this.DGEEAODMLBA) {
      const thr = Math.max(5.0, base * (s / 70.0));
      if (myZ - car.BHDKJIINJNL.position.z < thr) {
        if (this.NFABKCAPLMG) this.NFABKCAPLMG.CrossFade('TankThrow', 0.05);
        this.DGEEAODMLBA = true;
        this.PCAMLKIMMPM = Time.time;
        return;
      }
      if (!this.DGEEAODMLBA) return;
    }
    if (this.JJBIDGDHLBH) return;
    if (Time.time - this.PCAMLKIMMPM <= 0.9) return;
    // inlined CarCollision.JDLKLAGFELO(Melee, gameObject, transform)
    car.NEJKJHMFBMJ.JDLKLAGFELO(0, this.gameObject, this.LIEHBGFFHFF);
  }
  // snap to ground (raycast down from 0.3 above), align crawlers/dogs to the ground normal
  LJLGIPJCHFC(LPGJFJBOIHE) {
    const t = this.LIEHBGFFHFF;
    if (!t) return;
    const up = t.up;
    const origin = t.position.add(up.mul(0.3));
    const CC = G.CarController;
    const groundLayer = CC && CC.GGDLOPNIKOB ? CC.GGDLOPNIKOB : Layers.NameToLayer('ground'); // CarController.GGDLOPNIKOB = ground layer
    const hit = Physics.Raycast(origin, up.neg(), 10, 1 << (groundLayer & 31));
    if (!hit) {
      if (LPGJFJBOIHE) return;
      t.gameObject.name = '_!error_' + t.gameObject.name;
      this.enabled = false;
      return;
    }
    this.IJEOCIBFOHB = hit;
    t.position = hit.point.add(up.mul(this.MDDKLMGCHML));
    const k = this.FHOFNGHGNGF;
    if (10 < k) return;
    if (((1 << (k & 31)) & 0x41c) === 0) return; // crawl, run_fire, run_dynamite, cat_and_dogs
    if (this.NOEIMOPFFND.sqrMagnitude >= 9.9999994e-11) {
      this.NOEIMOPFFND = Vector3.Lerp(this.NOEIMOPFFND, hit.normal, Time.deltaTime * this.AGFPLMAAMKG);
    } else this.NOEIMOPFFND = hit.normal;
    const n = this.NOEIMOPFFND;
    t.rotation = Quaternion.LookRotation(Vector3.Cross(t.right, n), n);
  }
}
define('Zombie', Zombie);
