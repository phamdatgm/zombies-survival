// TramplinBarrel: barrel holding a ramp platform (KPCMPKFIJDA: 1 = barrel lowers ramp, 2 = ramp pre-tilted by car).
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class TramplinBarrel extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.IFBAFGOKIIA = null; // TramplinBarrelPlatform
    this.KPCMPKFIJDA = 0;    // mode
    this.PLEGAOMEBJO = null; // barrel GameObject
  }
  // barrel smashed: lower the platform (mode 1)
  MJODMEOIAIJ() {
    if (this.KPCMPKFIJDA !== 1) return;
    if (alive(this.IFBAFGOKIIA)) this.IFBAFGOKIIA.LNNIKMAEIEI();
  }
  // activate the platform
  NNIADFNMHGB() {
    if (!alive(this.IFBAFGOKIIA)) { G.Main && G.Main.EEKNCFLMGDP && G.Main.EEKNCFLMGDP('Tramplin error 1!'); this.enabled = false; return; }
    this.IFBAFGOKIIA.enabled = true;
  }
  Start() {
    if (this.KPCMPKFIJDA === 2) {
      const car = G.CarController && G.CarController.KECGFPHIEHF;
      if (alive(car) && 0 < car.IICGKJFAHFB) this.IFBAFGOKIIA.BPABDCCIAGL(car.IICGKJFAHFB);
    }
    this.enabled = false;
  }
}
define('TramplinBarrel', TramplinBarrel);
