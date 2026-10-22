// RewardContest: event reward (data, [Serializable])
import { G } from '../G.js';

export class RewardContest {
  constructor(o) {
    this.car = 0; this.silver = 0; this.gold = 0; this.fuel = 0;
    if (o) Object.assign(this, o);
  }
}
G.RewardContest = RewardContest;
