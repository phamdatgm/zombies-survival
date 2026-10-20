// ShipMovement: background ship drifting backwards along its forward axis.
import { Time } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class ShipMovement extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null; // cached transform
    this.NBCLGLJCBAP = 10;   // speed (unused by Update in the binary)
  }
  Start() { this.LIEHBGFFHFF = this.transform; }
  Update() {
    // disasm: Translate(forward * -5 * dt, Space.World)
    this.LIEHBGFFHFF.Translate(this.LIEHBGFFHFF.forward.mul(-5.0 * Time.deltaTime), 'World');
  }
}
define('ShipMovement', ShipMovement);
