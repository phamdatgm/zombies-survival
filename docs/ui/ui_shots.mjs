// Capture docs/ui/shots/NN.jpg for every screen listed in ui-screens.index.
//   node docs/ui/ui_shots.mjs [port]        (default port 8093; never 8080, the user's own dev server)
// Starts its own `web/server.js`, drives a muted headless Chrome (fresh profile) through the game at 1280x720:
// first-run flow (intro, tutorials, story), then a cheat-unlocked profile for the normal screens.
// Hard-to-reach windows are opened through the game's own handlers (GUIGarage / GUIGameplay / CarController).
import { spawn } from 'node:child_process';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';
import url from 'node:url';

const here = path.dirname(url.fileURLToPath(import.meta.url));
const root = path.resolve(here, '../..');
const outDir = path.join(here, 'shots');
const port = +process.argv[2] || 8093;
const W = 1280, H = 720;
const chrome = 'C:/Program Files/Google/Chrome/Application/chrome.exe';
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
fs.mkdirSync(outDir, { recursive: true });

const server = spawn(process.execPath, [path.join(root, 'web/server.js'), String(port)], { stdio: 'ignore' });
const dbg = 9300 + Math.floor(Math.random() * 500);
const prof = fs.mkdtempSync(path.join(os.tmpdir(), 'zdshot-'));
const proc = spawn(chrome, ['--headless=new', `--remote-debugging-port=${dbg}`, `--user-data-dir=${prof}`, `--window-size=${W},${H}`,
  '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required',
  '--mute-audio', 'about:blank'], { stdio: 'ignore' });

let ws, sessionId, id = 0; const pending = new Map();
const send = (method, params = {}) => new Promise((res) => { const i = ++id; pending.set(i, res); ws.send(JSON.stringify({ id: i, method, params, sessionId })); });

// page helpers (re-installed after every navigation)
const HELPERS = `
window.GG = () => [...__world().objects].map((o) => o.GetComponent && o.GetComponent('GUIGarage')).find(Boolean);
window.GP = () => [...__world().objects].map((o) => o.GetComponent && o.GetComponent('GUIGameplay')).find(Boolean);
window.WINS = () => [...__world().objects].filter((o) => o.GetComponent && o.GetComponent('GUIWindow') && o.activeInHierarchy).map((o) => o.name);
window.PROF = () => __G.Main.FBDDKIOEKDM || __G.Main.CHEOEEOBMDH;
window.MENU = () => __G.Menu && __G.Menu.KECGFPHIEHF;
`;
async function ev(expr) {
  const r = await send('Runtime.evaluate', { expression: `(async () => { ${HELPERS} return (${expr}); })()`, awaitPromise: true, returnByValue: true });
  if (r && r.exceptionDetails) throw new Error(`eval failed: ${expr}\n${JSON.stringify(r.exceptionDetails).slice(0, 600)}`);
  return r && r.result ? r.result.value : undefined;
}
const wins = () => ev('typeof __world === "function" && __world() ? WINS() : []').catch(() => []);
async function key(code, ms) {
  const k = { code, key: code.replace(/^Key/, '').toLowerCase(), windowsVirtualKeyCode: code.charCodeAt(3) };
  await send('Input.dispatchKeyEvent', { type: 'keyDown', ...k }); await sleep(ms); await send('Input.dispatchKeyEvent', { type: 'keyUp', ...k });
}
async function click(x, y) {
  for (const type of ['mouseMoved', 'mousePressed', 'mouseReleased']) {
    await send('Input.dispatchMouseEvent', { type, x, y, button: 'left', buttons: type === 'mousePressed' ? 1 : 0, clickCount: 1 });
    await sleep(70);
  }
  await sleep(300);
}
// wait until a window is active; optionally keep the throttle (W) pressed meanwhile
async function waitWin(name, timeout = 30000, holdW = false) {
  const end = Date.now() + timeout;
  while (Date.now() < end) {
    if ((await wins()).includes(name)) return;
    if (holdW) await key('KeyW', 2000); else await sleep(400);
  }
  throw new Error(`timeout waiting for window "${name}" (active: ${(await wins()).join(', ')})`);
}
async function shot(nn, settle = 1200) {
  await sleep(settle);
  const r = await send('Page.captureScreenshot', { format: 'jpeg', quality: 82 });
  fs.writeFileSync(path.join(outDir, `${nn}.jpg`), Buffer.from(r.data, 'base64'));
  console.log('shot', nn, (await wins()).join(','));
}

try {
  let ver;
  for (let i = 0; i < 50; i++) { try { ver = await (await fetch(`http://127.0.0.1:${dbg}/json/version`)).json(); break; } catch { await sleep(200); } }
  ws = new WebSocket(ver.webSocketDebuggerUrl);
  await new Promise((r) => ws.addEventListener('open', r));
  ws.addEventListener('message', (e) => { const m = JSON.parse(e.data); if (m.id && pending.has(m.id)) { pending.get(m.id)(m.result || m.error); pending.delete(m.id); } });
  const { targetId } = await send('Target.createTarget', { url: 'about:blank' });
  ({ sessionId } = await send('Target.attachToTarget', { targetId, flatten: true }));
  await send('Runtime.enable'); await send('Page.enable');
  await send('Emulation.setDeviceMetricsOverride', { width: W, height: H, deviceScaleFactor: 1, mobile: false });
  await send('Page.navigate', { url: `http://localhost:${port}/` });

  // 01 Loading: shoot once the bar is visibly filling
  for (let i = 0; i < 100; i++) {
    const pct = await ev(`(() => { const f = document.getElementById('gmLoaderFill'); return f ? parseFloat(f.style.width) || 0 : 0; })()`).catch(() => 0);
    if (pct >= 40) break;
    await sleep(100);
  }
  await shot('01', 0);

  // ---- first run (fresh profile): intro level, tutorials, story
  await waitWin('main_menu', 90000); await shot('02', 2000);
  await ev('GG().ButtonPlay()'); await waitWin('garage');
  await ev('GG().ButtonMap()');                      // first run: starts the intro level directly
  await waitWin('tutorial', 60000); await shot('10c');
  await waitWin('tutorial_crash', 120000, true); await shot('10d');
  await ev('GP().ButtonTutorialCrashCancel()');
  await waitWin('story', 30000); await shot('10', 1500);
  for (let i = 0; i < 20 && (await wins()).includes('story'); i++) await click(640, 360);
  await sleep(3000);
  await click(114, 243); await sleep(1500);          // Level 1 on the map (tutorial highlight)
  await click(1134, 615);                            // START -> race
  await waitWin('gameplay', 60000);
  await waitWin('results', 180000, true); await sleep(1500);
  await ev('GP().ButtonToGarage()');
  await waitWin('garage_tutorial', 60000); await shot('10b', 1500);
  await click(690, 610);                             // highlighted nitro upgrade
  await waitWin('buy_item'); await shot('09');

  // ---- normal profile: unlock everything with the game's cheat handlers, realistic currency, reload
  await ev('(GG().ButtonCheatUnlockAllLevels(), GG().ButtonCheatAddSilver(), GG().ButtonCheatAddGold(), 1)');
  await sleep(3000);
  await send('Page.reload', { ignoreCache: true });
  await sleep(3000);
  await waitWin('main_menu', 90000); await sleep(2000);
  await ev('(PROF().JLEEMPONONF(12450), PROF().DIMKKHJDHFJ(320), MENU().OLOGKIHIIEL(), 1)');
  await ev('GG().ButtonPlay()'); await waitWin('garage'); await sleep(1500);
  await ev('GG().ButtonMap()'); await waitWin('map'); await shot('04', 2000);
  await click(663, 345); await shot('04b', 2000);    // Level 5 info panel
  await click(937, 410); await waitWin('star_hints'); await shot('09c');
  await ev('(GG().ButtonCloseWindow(), 1)'); await sleep(600);
  await ev('(GG().ButtonMapHidePanel(false), GG().ButtonMainMenu(), 1)'); await waitWin('main_menu'); await sleep(1000);
  await ev('GG().ButtonSettings()'); await waitWin('settings'); await shot('05');
  await ev('GG().ButtonCloseWindow()'); await sleep(800);
  await ev('GG().ButtonAchievements()'); await waitWin('achievements'); await shot('06');
  await ev('GG().ButtonCloseWindow()'); await sleep(800);
  await ev('GG().ButtonPlay()'); await waitWin('garage'); await sleep(1000);
  await ev('GG().ButtonEncyclopedia()'); await waitWin('encyclopedia'); await shot('07');
  await ev('GG().ButtonCloseWindow()'); await sleep(800);
  await ev('GG().DonateWindowSilver()'); await waitWin('donate'); await shot('08', 1800);
  await ev('GG().ButtonCloseWindow()'); await sleep(800);
  await ev('GG().DonateWindowFuel()'); await waitWin('donate'); await shot('08b', 1800);
  await ev('GG().ButtonCloseWindow()'); await sleep(800);
  await ev('GG().AFHIOFKDNLD(1, 150)'); await waitWin('no_money'); await shot('09b');
  await ev('GG().ButtonCloseWindow()'); await sleep(800);
  await ev('GG().ButtonSwitchUpgradesOrColors()'); await shot('03b', 2000);
  await ev('GG().ButtonSwitchUpgradesOrColors()'); await sleep(800);
  await ev('GG().ButtonMap()'); await waitWin('map'); await sleep(2000);
  await click(269, 301); await sleep(1500);          // Level 2
  await click(1134, 615);                            // START -> back to the garage with the level's car
  await waitWin('garage'); await shot('03', 2500);

  // ---- race: HUD, pause, discovery reward, revive, results
  await ev('GG().ButtonStartRaceGo()');
  await waitWin('gameplay', 60000); await shot('11', 2000);
  await key('KeyW', 6000); await shot('11b', 0);
  await ev('GP().ButtonPause(false)'); await waitWin('pause'); await shot('12');
  await ev('GP().ButtonContinue()'); await sleep(800);
  await ev('(() => { const g = GP(); g.GDLDOBJNKJP = true; g.LJAIJDPPOIP = false; g.DBDGDLIENJA = 1; g.LFOIDHBMEMK(); return 1; })()');
  await waitWin('encyclopedia_item'); await shot('14');
  await sleep(600); await ev('GP().ButtonRewardEncyclopediaItem(false)'); await sleep(800);
  await ev('(() => { const car = __G.CarController.KECGFPHIEHF; car.StartCoroutine(car.JMCGEKEOJHD(false)); return 1; })()');
  await waitWin('revive', 15000); await shot('13', 500);
  await ev('GP().ButtonReviveCancel()');
  await waitWin('results', 30000); await shot('15', 2500);
  console.log('done');
} catch (e) {
  console.error(e.message || e);
  process.exitCode = 1;
} finally {
  try { ws && ws.close(); } catch { }
  proc.kill(); server.kill();
}
