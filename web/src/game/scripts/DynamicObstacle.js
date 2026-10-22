// DynamicObstacle: physics props (barrels, boxes...) woken when visible; flying props kill zombies.
import { Layers, Physics, Collider, Rigidbody, Destroy } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class DynamicObstacle extends GameBehaviour {
  static ODHELBFAFAC = null; // last zombie collider hit by a prop
  constructor(go, p) {
    super(go, p);
    this.NIIFDMDCOCF = null;  // Rigidbody
    this.JOLDJOCODON = false; // wake up rigidbody when visible
    this.PNJKMBJCENA = false; // report to encyclopedia when visible
    this.CPFPFGOIDDO = 0;     // CPFPFGOIDDO kind
    this.CMOHHKDHFGA = null;  // GameObject shown in encyclopedia popup
  }
  OnEnable() {
    const col = this.GetComponent(Collider);
    if (!alive(col)) { Destroy(this.gameObject); return; }
    this.NIIFDMDCOCF = this.GetComponent(Rigidbody);
    if (this.gameObject.layer === Layers.NameToLayer('car')) {
      this.gameObject.layer = Layers.NameToLayer('dynamic_obstacle');
      Physics.refreshLayer && Physics.refreshLayer(this.gameObject);
    } else {
      if (alive(this.NIIFDMDCOCF)) this.NIIFDMDCOCF.Sleep();
      col.enabled = false;
    }
  }
  OnBecameVisible() {
    this.enabled = true;
    const col = this.GetComponent(Collider);
    if (alive(col)) col.enabled = true;
    if (this.JOLDJOCODON && this.NIIFDMDCOCF) this.NIIFDMDCOCF.WakeUp();
    if (!this.PNJKMBJCENA) return;
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(car) || !alive(car.CDDOBCENBOG)) return;
    const gui = car.CDDOBCENBOG;
    if (!(gui.NNOEOMKNGJL && gui.NNOEOMKNGJL(this.CPFPFGOIDDO))) return;
    gui.PKECIKMIECO && gui.PKECIKMIECO(this.CPFPFGOIDDO, alive(this.CMOHHKDHFGA) ? this.CMOHHKDHFGA : this.gameObject);
  }
  OnTriggerEnter(GLKAJMJEIEM) {
    if (!this.NIIFDMDCOCF) return;
    if (this.NIIFDMDCOCF.velocity.sqrMagnitude <= 1.0) return;
    const go = GLKAJMJEIEM.gameObject;
    if (go.tag !== 'zombie') return;
    if (go.name.includes('zombie_sidewalk')) return;
    GLKAJMJEIEM.enabled = false;
    const tag = this.gameObject.tag;
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (tag === 'barrel') {
      if (alive(car)) car.NEJKJHMFBMJ.GLBHMAKJKHB(2 /* DynamicObject */, this.gameObject, GLKAJMJEIEM.transform);
    } else if (tag === 'wood_box' || tag === 'metal_box') {
      Destroy(this.gameObject);
    }
    if (alive(car) && DynamicObstacle.ODHELBFAFAC !== GLKAJMJEIEM) {
      car.NEJKJHMFBMJ.JDLKLAGFELO(2 /* DynamicObject */, GLKAJMJEIEM.gameObject, GLKAJMJEIEM.transform);
    }
    DynamicObstacle.ODHELBFAFAC = GLKAJMJEIEM;
  }
}
define('DynamicObstacle', DynamicObstacle);
