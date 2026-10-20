// Replay: serializable online replay entry (ghost car data). Online loading removed; data class kept.
import { G } from '../G.js';

export class Replay {
  constructor() {
    this.pos = 0;
    this.id = 0;
    this.user_id = 0;
    this.car_id = 0;
    this.country_id = 0;
    this.name = '';
    this.time = 0;
    this.points = 0;
    this.path = '';        // "y i z i angle i ..." samples (see CarReplay.JNJNCPAAAAA)
    this.is_completed = 0;
  }
}
G.Replay = Replay;
