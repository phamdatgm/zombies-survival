// DynamicAccessor: data holder for destructible packs (used by CarCollision).
import { GameBehaviour, define } from '../base.js';

export class DynamicAccessor extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.OPBPCFOOBHD = null; // GameObject to activate (bird_spawn / HABMFNMJMDL)
    this.BHLBGKKHGGA = [];   // Rigidbody[] parts blown away
    this.GFDIKJLIBPM = 3;    // explosion force multiplier
  }
}
define('DynamicAccessor', DynamicAccessor);
