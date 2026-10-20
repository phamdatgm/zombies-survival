// Persistent headless-Chrome driver for long play-tests (muted).
//   node drive.mjs <url> <workDir> [w] [h]
// Drop <workDir>/cmd_<n>.js (an expression, may be async). The driver evaluates it, performs
// { __click: [[x,y],...] } / { __keys: [[code, holdMs],...] } returned by it, then writes
// <workDir>/res_<n>.json (result + console errors since the last command) and <workDir>/shot_<n>.png.
// cmd file content "EXIT" stops the driver, "RELOAD" reloads the page. Optional 5th arg: persistent Chrome profile dir.
import { spawn } from 'node:child_process';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';

const [url, dir, w = '1920', h = '950', profDir = ''] = process.argv.slice(2);
const chrome = 'C:/Program Files/Google/Chrome/Application/chrome.exe';
const port = 9300 + Math.floor(Math.random() * 500);
const prof = profDir ? (fs.mkdirSync(profDir, { recursive: true }), profDir) : fs.mkdtempSync(path.join(os.tmpdir(), 'zdshot-'));
const proc = spawn(chrome, ['--headless=new', `--remote-debugging-port=${port}`, `--user-data-dir=${prof}`, `--window-size=${w},${h}`,
  '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required', '--mute-audio', 'about:blank'], { stdio: 'ignore' });
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
let ws, id = 0; const pending = new Map(); let sessionId;
const logs = [];
const send = (method, params = {}) => new Promise((res) => { const i = ++id; pending.set(i, res); ws.send(JSON.stringify({ id: i, method, params, sessionId })); });
let ver;
for (let i = 0; i < 50; i++) { try { ver = await (await fetch(`http://127.0.0.1:${port}/json/version`)).json(); break; } catch { await sleep(200); } }
ws = new WebSocket(ver.webSocketDebuggerUrl);
await new Promise((r) => ws.addEventListener('open', r));
ws.addEventListener('message', (e) => {
  const m = JSON.parse(e.data);
  if (m.id && pending.has(m.id)) { pending.get(m.id)(m.result || m.error); pending.delete(m.id); }
  if (m.method === 'Runtime.consoleAPICalled' && (m.params.type === 'error' || m.params.type === 'warning' && !/no image data/.test(JSON.stringify(m.params.args)))) logs.push('[' + m.params.type + '] ' + m.params.args.map((a) => a.value ?? a.description ?? '').join(' ').slice(0, 600));
  if (m.method === 'Runtime.exceptionThrown') logs.push('[exception] ' + ((m.params.exceptionDetails.exception && m.params.exceptionDetails.exception.description) || m.params.exceptionDetails.text).slice(0, 1200));
});
const { targetId } = await send('Target.createTarget', { url: 'about:blank' });
({ sessionId } = await send('Target.attachToTarget', { targetId, flatten: true }));
await send('Runtime.enable'); await send('Page.enable');
await send('Emulation.setDeviceMetricsOverride', { width: +w, height: +h, deviceScaleFactor: 1, mobile: false });
await send('Page.navigate', { url });
fs.writeFileSync(path.join(dir, 'ready'), 'ok');
const key = async (code, hold) => {
  const k = { code, key: code.replace(/^Key/, '').toLowerCase(), windowsVirtualKeyCode: code === 'Space' ? 32 : code.startsWith('Key') ? code.charCodeAt(3) : 0 };
  await send('Input.dispatchKeyEvent', { type: 'keyDown', ...k }); await sleep(hold); await send('Input.dispatchKeyEvent', { type: 'keyUp', ...k });
};
for (let n = 1; ; n++) {
  const f = path.join(dir, `cmd_${n}.js`);
  while (!fs.existsSync(f)) await sleep(300);
  await sleep(100);
  const src = fs.readFileSync(f, 'utf8');
  if (src.trim() === 'EXIT') break;
  if (src.trim() === 'RELOAD') { await send('Page.reload', { ignoreCache: true }); await sleep(3000); fs.writeFileSync(path.join(dir, `res_${n}.json`), JSON.stringify({ value: 'reloaded', logs: logs.splice(0) })); continue; }
  let out;
  const r = await Promise.race([send('Runtime.evaluate', { expression: src, awaitPromise: true, returnByValue: true }), sleep(170000).then(() => 'TIMEOUT')]);
  if (r === 'TIMEOUT') out = { timeout: true };
  else if (r && r.exceptionDetails) out = { error: (r.exceptionDetails.exception && r.exceptionDetails.exception.description || r.exceptionDetails.text).slice(0, 1500) };
  else out = { value: r && r.result ? r.result.value : null };
  const v = out.value;
  if (v && v.__click) for (const [x, y] of v.__click) { for (const type of ['mouseMoved', 'mousePressed', 'mouseReleased']) { await send('Input.dispatchMouseEvent', { type, x, y, button: 'left', buttons: type === 'mousePressed' ? 1 : 0, clickCount: 1 }); await sleep(70); } await sleep(300); }
  if (v && v.__keys) for (const [c, hold] of v.__keys) await key(c, hold || 100);
  if (v && v.__wait) await sleep(v.__wait);
  out.logs = logs.splice(0);
  const shot = await send('Page.captureScreenshot', { format: 'png' });
  if (shot && shot.data) fs.writeFileSync(path.join(dir, `shot_${n}.png`), Buffer.from(shot.data, 'base64'));
  fs.writeFileSync(path.join(dir, `res_${n}.json`), JSON.stringify(out, null, 1));
}
try { ws.close(); } catch { }
proc.kill();
process.exit(0);
