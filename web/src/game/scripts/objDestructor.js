// objDestructor: destroys its GameObject once the timer exceeds ACBDHBLLEEK.
import { Time, Destroy } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class objDestructor extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.ACBDHBLLEEK = 3;   // lifetime (s)
    this.CNAGLGLEJMC = 0;   // elapsed
  }
  LateUpdate() {
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.ACBDHBLLEEK < this.CNAGLGLEJMC) Destroy(this.gameObject);
  }
}
define('objDestructor', objDestructor);
