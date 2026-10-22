// BombScaleChanger: enlarges the bomb trigger radius for big cars, then disables itself.
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class BombScaleChanger extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.EFOGAOHIGOE = null; // CapsuleCollider (serialized)
  }
  Start() {
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (alive(car)) {
      if (0.6 < car.JMFFPEBJCCE && alive(this.EFOGAOHIGOE)) {
        this.EFOGAOHIGOE.radius = 0.9;
        if (this.EFOGAOHIGOE._rebuild) this.EFOGAOHIGOE._rebuild(); // engine: apply new radius
      }
    }
    this.enabled = false;
  }
}
define('BombScaleChanger', BombScaleChanger);
