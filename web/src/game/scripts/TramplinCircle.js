// TramplinCircle: ramp that swings into place when its trigger is hit (KPCMPKFIJDA 1 = pitch, 2 = roll).
import { Quaternion, Time, Mathf, Destroy } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class TramplinCircle extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.KPCMPKFIJDA = 1;    // mode
    this.KCNPGOJGCIE = null; // rotated transform
    this.ANAELILPEOF = null; // trigger object destroyed on hit
    this.BLKHKILOPDL = null; // explosion point
    this.DIDHMFHPPBF = 0;    // elapsed
    this.DHFFBFFPOFN = 0.05; // delay
  }
  Update() {
    if (alive(this.KCNPGOJGCIE)) {
      const t = this.DIDHMFHPPBF - this.DHFFBFFPOFN;
      if (this.DHFFBFFPOFN < this.DIDHMFHPPBF) {
        if (this.KPCMPKFIJDA === 2) this.KCNPGOJGCIE.rotation = Quaternion.Euler(0, 90, Mathf.Lerp(47.5, -48.8, t));
        else if (this.KPCMPKFIJDA === 1) this.KCNPGOJGCIE.rotation = Quaternion.Euler(Mathf.Lerp(0, 90, t * 3.0), 0, 0);
      }
    }
    this.DIDHMFHPPBF += Time.deltaTime;
    if (this.DIDHMFHPPBF <= 2.0) return;
    this.enabled = false;
  }
  // hit by the car: explosion + start swinging
  MPLPGOBGOJA() {
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (alive(car)) {
      car.NEJKJHMFBMJ.NDLJJLDOHIA(false, this.BLKHKILOPDL.position);
      const SS = G.SoundScript; if (SS && SS.GIGBLEBBIEK) SS.GIGBLEBBIEK(SS.LGDEFJKJLJD);
    }
    this.enabled = true;
    if (this.ANAELILPEOF) Destroy(this.ANAELILPEOF);
  }
}
define('TramplinCircle', TramplinCircle);
