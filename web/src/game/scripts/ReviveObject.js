// ReviveObject: marker placed at road gaps; IBINGNLOHNJ returns the z of the gap end collider (revive point).
import { GameBehaviour, define } from '../base.js';

export class ReviveObject extends GameBehaviour {
  // z position of "<parent>/road_razlom_end/Collider" (0 if not found)
  IBINGNLOHNJ() {
    const parent = this.transform.parent;
    let res = 0;
    if (!parent) return 0;
    for (const ch of parent) {
      if (ch.name !== 'road_razlom_end') continue;
      for (const c of ch) if (c.name === 'Collider') res = c.position.z;
      return res;
    }
    return 0;
  }
}
define('ReviveObject', ReviveObject);
