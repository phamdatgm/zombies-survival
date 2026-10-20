// ObstacleNonWakeUp: kinematic obstacle that turns dynamic (but sleeping) when the car gets close.
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class ObstacleNonWakeUp extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null; // Transform
    this.EFOGAOHIGOE = null; // Collider
    this.NIIFDMDCOCF = null; // Rigidbody
    this.HEOMHPJFNLA = 1;    // activation distance (z)
  }
  OnBecameVisible() {
    this.enabled = true;
    if (alive(this.EFOGAOHIGOE)) this.EFOGAOHIGOE.enabled = true;
  }
  Update() {
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(car) || !alive(car.IFLDCKJMFND)) return;
    if (this.HEOMHPJFNLA <= this.LIEHBGFFHFF.position.z - car.IFLDCKJMFND.position.z) return;
    this.NIIFDMDCOCF.isKinematic = false;
    this.NIIFDMDCOCF.Sleep();
    this.enabled = false;
  }
}
define('ObstacleNonWakeUp', ObstacleNonWakeUp);
