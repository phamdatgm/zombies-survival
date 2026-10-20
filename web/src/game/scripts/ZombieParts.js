// ZombieParts: ragdoll pieces spawned when a zombie is smashed; explode outward, optionally fly toward camera.
import { Vector3, Time, Random, Destroy, ForceMode } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class ZombieParts extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.ACBDHBLLEEK = 4;                         // lifetime
    this.CNAGLGLEJMC = 0;                         // elapsed
    this.BHLBGKKHGGA = [];                        // Rigidbody[] exploded parts
    this.GAOMHGNIBFP = [];                        // Rigidbody[] parts thrown at camera
    this.JPMPPOGJDGI = 30;                        // explosion force min
    this.BGGMAHPKBFK = 250;                       // explosion force max
    this.GHJKKMELFOL = new Vector3(0, 0.9, -0.7); // explosion offset (up, forward) -> world point
    this.AJFNIDFDGNA = false;                     // throw parts toward camera
    this.DBCICKPGKNH = false;                     // weaker throw
  }
  OnEnable() {
    if (!this.BHLBGKKHGGA || this.BHLBGKKHGGA.length === 0) return;
    const t = this.transform;
    const off = this.GHJKKMELFOL;
    this.GHJKKMELFOL = t.position.add(Vector3.up.mul(off.y)).add(t.forward.mul(off.z));
    for (const rb of this.BHLBGKKHGGA) {
      const f = Random.RangeInt(this.JPMPPOGJDGI, this.BGGMAHPKBFK);
      if (rb) rb.AddExplosionForce(f, this.GHJKKMELFOL, 100);
    }
    if (!this.AJFNIDFDGNA) return;
    const CC = G.CarController;
    if (CC && CC.MKEGHDPIIFK) return;
    const car = CC && CC.KECGFPHIEHF;
    for (const rb of this.GAOMHGNIBFP || []) {
      if (!alive(car)) return;
      const spd = car.AGKGCILIANE();
      let fw, k;
      if (spd > 60) { fw = 15; k = 1.1; }
      else if (spd > 45) { fw = 10; k = 1.0; }
      else { fw = spd > 15 ? 5 : 0; k = 0.9; }
      if (this.DBCICKPGKNH) k = 0.8;
      const cam = car.ECBLNBNGONF && car.ECBLNBNGONF.LIEHBGFFHFF;
      if (!cam) return;
      const target = cam.position.add(Vector3.forward.mul(fw)).add(Vector3.up).add(Vector3.up);
      const r = Random.Range(k * 0.5, k);
      if (rb) rb.AddForce(target.sub(this.GHJKKMELFOL).mul(r), ForceMode.Impulse);
    }
  }
  Update() {
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.ACBDHBLLEEK < this.CNAGLGLEJMC) Destroy(this.gameObject);
  }
}
define('ZombieParts', ZombieParts);
