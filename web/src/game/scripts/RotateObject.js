// RotateObject: spins the object around its forward axis (deg/s), optional random speed.
import { Time, Random } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class RotateObject extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null;  // cached transform
    this.MDMIMOJPECH = 50;    // speed (deg/s) / random min
    this.JNPPMDHCFAG = 50;    // random max
    this.KKKAJAJFIEN = false; // randomize speed
  }
  Start() {
    this.LIEHBGFFHFF = this.transform;
    if (this.KKKAJAJFIEN) this.MDMIMOJPECH = Random.RangeInt(this.MDMIMOJPECH, this.JNPPMDHCFAG);
  }
  Update() {
    const t = this.LIEHBGFFHFF;
    // Transform.Rotate(forward * speed * dt, Space.World)
    t.Rotate(t.forward.mul(this.MDMIMOJPECH * Time.deltaTime), 'World');
  }
}
define('RotateObject', RotateObject);
