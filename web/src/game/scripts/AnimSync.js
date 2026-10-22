// AnimSync: steps an Animator manually in FixedUpdate (physics-synced animation), rewinding in Update.
import { Time } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

// Animator.Update(dt) -> engine Animator.tick(dt)
function animUpdate(an, dt) { if (an && typeof an.tick === 'function') an.tick(dt); }

export class AnimSync extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.NHCBFENCDBJ = null; // Animator (serialized)
    this.BDFJBJIHBKA = 0;    // last time
    this.FJAIJOLCJMA = 0;    // accumulated advance
  }
  FixedUpdate() {
    const d = Time.time - this.BDFJBJIHBKA;
    animUpdate(this.NHCBFENCDBJ, d);
    this.FJAIJOLCJMA = d + this.FJAIJOLCJMA;
    this.BDFJBJIHBKA = Time.time;
  }
  Update() {
    animUpdate(this.NHCBFENCDBJ, -this.FJAIJOLCJMA);
    this.FJAIJOLCJMA = 0;
    this.BDFJBJIHBKA = Time.time;
  }
}
define('AnimSync', AnimSync);
