// GFXDisabler: toggles optional (high-GFX) background objects.
import { GameBehaviour, alive, define } from '../base.js';

export class GFXDisabler extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.EBBMJFBACIN = []; // GameObject[] (serialized)
  }
  // set active state of all optional objects
  DHEEBAEOLGF(MDIDBDKGGJI) {
    for (const g of this.EBBMJFBACIN || []) if (alive(g)) g.SetActive(MDIDBDKGGJI);
  }
}
define('GFXDisabler', GFXDisabler);
