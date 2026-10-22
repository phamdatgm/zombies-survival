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
      // ARM64 (libil2cpp 0xb01490): the binary compares car z with bird z and reads the "further ahead" transform,
      // but that result is dead — it re-reads the CAR position right before set_position. Net effect:
      // position = (0, startHeight + h, carZ + offset): the crow always flies over the car, pulling ahead while the car is slow.
      const t = this.CNAGLGLEJMC;
      let h = 0;
      if (t < 1.1) h = Mathf.Lerp(4, 0, t);
      if (7.0 < t) h = Mathf.Lerp(0, 15, (t - 7.0) * 0.5);
      this.LIEHBGFFHFF.position = new Vector3(0, h + this.KLFJONLGKDH, carT.position.z + this.KCCOCHHHOMB);
      if (car.AGKGCILIANE() < 10.0) this.KCCOCHHHOMB += Time.deltaTime + Time.deltaTime;
    }
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.CNAGLGLEJMC <= this.ACBDHBLLEEK) return;
    Destroy(this.gameObject);
  }
}
define('Bird', Bird);
