// Publisher's standard analytics events (JS_SDK_2.0/docs/ANALYTICS.md section 4), wired to the race lifecycle:
//   PlayGame -> (LiveTime every 30 s of gameplay) -> EndGame + DeathTime | CompleteGame + CompleteTime | RestartTime | QuitTime
//   SessionTime every 30 s since the garage first showed.
// `time` is in minutes (one decimal): LiveTime = gameplay minutes this session, the others = minutes of this race.
import { analytics, scoreBucket } from '../sdk/analytics.js';
import { Time } from '../engine/core.js';

const TICK_MS = 1000, EVERY_S = 30;
const SCORE_BANDS = [0, 100, 250, 500, 1000, 2000, 3000, 4000, 5000];   // race points are clamped to 0..5000
const minutes = (s) => Math.round(s / 6) / 10;

let gameCount = 0;
let run = null;            // { level, playS } while a race is on, else null
let liveS = 0, liveNext = EVERY_S;

// gameplay clock: counts only while a race is on, the game is not paused and the tab is visible
setInterval(() => {
  if (!run || Time.timeScale <= 0 || document.hidden) return;
  const dt = TICK_MS / 1000;
  run.playS += dt; liveS += dt;
  if (liveS >= liveNext) { liveNext += EVERY_S; analytics.log('LiveTime', { level: run.level, time: minutes(liveS) }); }
}, TICK_MS);

export function startSessionTimer() {
  const t0 = performance.now();
  setInterval(() => analytics.log('SessionTime', { Time: minutes((performance.now() - t0) / 1000) }), EVERY_S * 1000);
}

export const race = {
  // a level scene started (from the garage or a restart)
  start(level) {
    gameCount++;
    run = { level, playS: 0 };
    analytics.log('PlayGame', { GameCount: gameCount, level });
  },
  // the race ended: finish line (finished = true) or car lost
  end(finished, score) {
    if (!run) return;
    const { level, playS } = run; run = null;
    if (finished) {
      analytics.log('CompleteGame', { Score: score, score_bucket: scoreBucket(score, SCORE_BANDS), level });
      analytics.log('CompleteTime', { level, time: minutes(playS) });
    } else {
      analytics.log('EndGame', { Score: score, score_bucket: scoreBucket(score, SCORE_BANDS), level });
      analytics.log('DeathTime', { level, time: minutes(playS) });
    }
  },
  // left a race that is still on (pause menu): nothing is logged after the race has ended
  restart() { if (run) { analytics.log('RestartTime', { level: run.level, time: minutes(run.playS) }); run = null; } },
  quit() { if (run) { analytics.log('QuitTime', { level: run.level, time: minutes(run.playS) }); run = null; } },
};
