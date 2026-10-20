// Bird: crow that flies ahead of the car (activated by a bird_spawn trigger), destroyed after 10 s.
import { Vector3, Time, Mathf, Destroy } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class Bird extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.ACBDHBLLEEK = 10;   // lifetime
    this.CNAGLGLEJMC = 0;    // elapsed
    this.KCCOCHHHOMB = 0;    // extra forward offset
    this.LIEHBGFFHFF = null; // cached transform
    this.KLFJONLGKDH = 0;    // start height
    this.ABNGHDMNGMC = null; // parts prefab (crow_parts)
  }
  Start() {
    this.LIEHBGFFHFF = this.transform;
    this.KLFJONLGKDH = this.LIEHBGFFHFF.position.y;
    this.gameObject.SetActive(false);
  }
  Update() {
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (alive(car)) {
      const carT = car.BHDKJIINJNL;
      const carZ = carT.position.z;
      const src = carZ <= this.LIEHBGFFHFF.position.z ? this.LIEHBGFFHFF : carT; // the one further ahead
      const z = src.position.z;
      const t = this.CNAGLGLEJMC;
      let h = 0;
      if (t < 1.1) h = Mathf.Lerp(4, 0, t);
      if (7.0 < t) h = Mathf.Lerp(0, 15, (t - 7.0) * 0.5);
      this.LIEHBGFFHFF.position = new Vector3(carT.position.x, h + this.KLFJONLGKDH, z + this.KCCOCHHHOMB);
      if (car.AGKGCILIANE() < 10.0) this.KCCOCHHHOMB += Time.deltaTime + Time.deltaTime;
    }
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.CNAGLGLEJMC <= this.ACBDHBLLEEK) return;
    Destroy(this.gameObject);
  }
}
define('Bird', Bird);
