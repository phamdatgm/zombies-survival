// [web] Cheat keys (anywhere in the game): C = +100000 silver, V = +1000 gold (same amounts as the
// original debug buttons GUIGarage.ButtonCheatAddSilver / ButtonCheatAddGold). Saved like normal earnings.
import { G } from './G.js';

const SILVER = 100000, GOLD = 1000;
const MAX = 2000000000; // currencies are stored as int32

export function installCheats() {
  addEventListener('keydown', (e) => {
    if (e.repeat || e.ctrlKey || e.metaKey || e.altKey) return;
    const t = e.target;
    if (t && (t.isContentEditable || /^(INPUT|TEXTAREA|SELECT)$/.test(t.tagName))) return; // typing a nickname
    const p = G.Main && G.Main.FBDDKIOEKDM;
    if (!p) return;
    if (e.code === 'KeyC') p.JLEEMPONONF(Math.min(p.LOCFCFJIAIH() + SILVER, MAX));        // set silver
    else if (e.code === 'KeyV') p.DIMKKHJDHFJ(Math.min(p.HPDEBBJNCIK() + GOLD, MAX));     // set gold
  });
}
