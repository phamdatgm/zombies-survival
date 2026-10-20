// EventContest: event (contest) description (data, [Serializable]). Events came from the server (removed).
import { Time } from '../../engine/unity.js';
import { G } from '../G.js';

const num = (v) => (typeof v === 'number' ? v : 0);
// car id per mode (mode-1 index), from libil2cpp .rodata 0x4b9f5c: Carnage->11, Halloween1/2->2, others any car
const MODE_CAR = [11, -1, -1, -1, -1, 2, 2];

export class EventContest {
  constructor(o) {
    this.id = 0;
    this.lvl_id = 0;
    this.mode = 0;      // MDGGLDMKCFB
    this.status = 0;    // MMOCGEKHBKE
    this.reward = [];   // RewardContest[]
    this.time = 0;
    this.replays = [];  // Replay[]
    if (o) {
      Object.assign(this, o);
      if (Array.isArray(this.reward) && G.RewardContest) this.reward = this.reward.map((r) => (r instanceof G.RewardContest ? r : new G.RewardContest(r)));
    }
  }

  // seconds left: time - (int)Time.unscaledTime + BridgePHP.last_event_time_loaded
  get TimeLeft() {
    const t = Time.unscaledTime !== undefined ? Time.unscaledTime : Time.time;
    return (this.time - (t | 0)) + num(G.BridgePHP && G.BridgePHP.last_event_time_loaded);
  }

  // PMJPCDJMHPK: Sprint(2) -> Time(2), LearnToFly(5) -> Points(1), else PointsAndTime(0)
  get sort() {
    if (this.mode === 2) return 2;
    return this.mode === 5 ? 1 : 0;
  }

  get desc() { return G.Translate.KECGFPHIEHF.JJJNIPAKLJF('EVENT_GOAL_' + String(this.mode)); }

  get car_id() {
    const i = this.mode - 1;
    return (i >>> 0) < 7 ? MODE_CAR[i] : -1;
  }

  get IsUseCustonPoints() { return ((this.mode - 2) >>> 0) < 6; }
}
EventContest.MODE_CAR = MODE_CAR;
G.EventContest = EventContest;
