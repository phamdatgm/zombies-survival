// destroyMe: destroys its GameObject after DPGCLIMCLPI seconds.
import { Time, Destroy } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class destroyMe extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.GMFAMFJABMJ = 0;    // elapsed
    this.DPGCLIMCLPI = 10;   // lifetime (s)
  }
  Update() {
    this.GMFAMFJABMJ += Time.deltaTime;
    if (this.GMFAMFJABMJ < this.DPGCLIMCLPI) return;
    Destroy(this.gameObject);
  }
}
define('destroyMe', destroyMe);
