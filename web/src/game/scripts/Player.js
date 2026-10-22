// Player: server player record (data, [Serializable]) - server features removed in the web port
import { G } from '../G.js';

export class Player {
  constructor(o) {
    this.id = 0; this.sid = 0; this.name = null; this.save_time = null;
    this.country_id = 0; this.rnd_key = 0; this.upd = 0;
    if (o) Object.assign(this, o);
  }
}
G.Player = Player;
