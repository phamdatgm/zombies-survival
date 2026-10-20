// LevelTasks: one level task (data, [Serializable])
import { G } from '../G.js';

export class LevelTasks {
  constructor(o) {
    this.type = 0;   // EDALCEKLAEJ task type (ZombiesKill/BackFlips/FrontFlips/BirdsKill)
    this.count = 0;  // required amount (in DJKGLJOCFCE: achieved amount)
    if (o) Object.assign(this, o);
  }
}
G.LevelTasks = LevelTasks;
