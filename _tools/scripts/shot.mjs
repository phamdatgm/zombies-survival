// node shot.mjs <url> <out.png> [waitMs] [w] [h] [jsToEvalBeforeShot]
// Headless Chrome via CDP: prints console messages/errors, saves a screenshot.
import { spawn } from 'node:child_process';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';

const [url, out, waitMs = '8000', w = '1280', h = '720', evalJs = ''] = process.argv.slice(2);
const chrome = 'C:/Program Files/Google/Chrome/Application/chrome.exe';
const port = 9300 + Math.floor(Math.random() * 500);
const prof = fs.mkdtempSync(path.join(os.tmpdir(), 'zdshot-'));
const proc = spawn(chrome, ['--headless=new', `--remote-debugging-port=${port}`, `--user-data-dir=${prof}`, `--window-size=${w},${h}`,
  '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required', '--mute-audio', 'about:blank'], { stdio: 'ignore' });
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));
let ws, id = 0; const pending = new Map();
const send = (method, params = {}, sessionId) => new Promise((res) => { const i = ++id; pending.set(i, res); ws.send(JSON.stringify({ id: i, method, params, sessionId })); });
try {
  let ver;
  for (let i = 0; i < 50; i++) { try { ver = await (await fetch(`http://127.0.0.1:${port}/json/version`)).json(); break; } catch { await sleep(200); } }
  ws = new WebSocket(ver.webSocketDebuggerUrl);
  await new Promise((r) => ws.addEventListener('open', r));
  ws.addEventListener('message', (e) => {
    const m = JSON.parse(e.data);
    if (m.id && pending.has(m.id)) { pending.get(m.id)(m.result || m.error); pending.delete(m.id); }
    if (m.method === 'Debugger.paused') { console.log('[PAUSED]', m.params.callFrames.slice(0, 12).map((f) => `${f.functionName || '<anon>'} @ ${f.url.split('/').slice(-2).join('/')}:${f.location.lineNumber + 1}`).join(' | ')); }
    if (m.method === 'Runtime.consoleAPICalled') console.log('[console.' + m.params.type + ']', m.params.args.map((a) => a.value ?? a.description ?? JSON.stringify(a.preview || '')).join(' ').slice(0, 800));
    if (m.method === 'Runtime.exceptionThrown') console.log('[exception]', (m.params.exceptionDetails.exception && m.params.exceptionDetails.exception.description || m.params.exceptionDetails.text).slice(0, 1500));
    if (m.method === 'Log.entryAdded' && m.params.entry.level !== 'verbose') console.log('[log.' + m.params.entry.level + ']', m.params.entry.text.slice(0, 300), m.params.entry.url || '');
  });
  const { targetId } = await send('Target.createTarget', { url: 'about:blank' });
  const { sessionId } = await send('Target.attachToTarget', { targetId, flatten: true });
  await send('Runtime.enable', {}, sessionId); await send('Log.enable', {}, sessionId); await send('Page.enable', {}, sessionId);
  await send('Emulation.setDeviceMetricsOverride', { width: +w, height: +h, deviceScaleFactor: 1, mobile: false }, sessionId);
  await send('Page.navigate', { url }, sessionId);
  const steps = String(waitMs).split(',').map(Number);
  let k = 0;
  for (const s of steps) {
    await sleep(s);
    if (evalJs) {
      const src = evalJs.startsWith('file:') ? fs.readFileSync(evalJs.slice(5), 'utf8') : evalJs; const parts = src.split('@@@');
      const js = parts[Math.min(k, parts.length - 1)];
      if (js) { const r = await Promise.race([send('Runtime.evaluate', { expression: js, awaitPromise: true, returnByValue: true }, sessionId), sleep(60000).then(() => "TIMEOUT")]);
        if (r === 'TIMEOUT') { console.log('[eval timeout -> pausing]'); await send('Debugger.enable', {}, sessionId); send('Debugger.pause', {}, sessionId); await sleep(3000); break; } if (r && r.exceptionDetails) console.log('[eval-error]', JSON.stringify(r.exceptionDetails).slice(0, 1500)); else if (r && r.result) { console.log('[eval]', JSON.stringify(r.result.value).slice(0, 6000));
          const v = r.result.value; if (v && v.__click) for (const [x, y] of v.__click) { for (const type of ['mouseMoved', 'mousePressed', 'mouseReleased']) { await send('Input.dispatchMouseEvent', { type, x, y, button: 'left', buttons: type === 'mousePressed' ? 1 : 0, clickCount: 1 }, sessionId); await sleep(60); } await sleep(250); } } }
    }
    const shot = await send('Page.captureScreenshot', { format: 'png' }, sessionId);
    const o = steps.length > 1 ? out.replace(/\.png$/, `_${k}.png`) : out;
    fs.writeFileSync(o, Buffer.from(shot.data, 'base64'));
    k++;
  }
  console.log('saved', out);
} catch (e) { console.error('shot error', e); }
finally { try { ws && ws.close(); } catch { } proc.kill(); }
process.exit(0);
