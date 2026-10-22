import * as THREE from 'three';
import { loadIndex, DB } from './engine/assets.js';
import { initPhysics, setLayerMatrix } from './engine/physics.js';
import { App } from './engine/app.js';
import { SceneManager, registerComponent, registerScript, instantiateHooks } from './engine/scene.js';
import { UGUI_COMPONENTS, attachUI } from './engine/ugui.js';
import { Animator, Animation } from './engine/anim.js';
import { AudioSource, AudioListener, Audio } from './engine/audio.js';
import { ParticleSystem, ParticleSystemRenderer } from './engine/particles.js';
import { Camera } from './engine/render.js';
import { World, GameObject, Time } from './engine/core.js';
import { Vector3, Quaternion } from './engine/umath.js';
import { analytics, startAnalytics } from './sdk/analytics.js';
import { initI18n, t } from './sdk/i18n.js';
import { noticeOk, halt } from './notice.js';
import { showLoading, hideLoading } from './loading.js';
import { startSessionTimer } from './game/analytics.js';

// Unity DynamicsManager layer collision matrix
const LAYER_MATRIX = 'ff7dffffff7fffffff7fffffffffffffff7fffffff7ffffffffffffffffffffffffdfffffe04fdffff73ffffff69ffffff75ffffff7dffffff7dffffc881fcffff7fffffff7dffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff';

registerComponent('Animator', Animator);
registerComponent('Animation', Animation);
registerComponent('AudioSource', AudioSource);
registerComponent('AudioListener', AudioListener);
registerComponent('ParticleSystem', ParticleSystem);
registerComponent('ParticleSystemRenderer', ParticleSystemRenderer);
for (const [n, c] of Object.entries(UGUI_COMPONENTS)) { registerComponent(n, c); registerScript(n, c); }
instantiateHooks.push((root) => { if (root.rect) attachUI(root); });

const params = new URLSearchParams(location.search);
// loading screen (GM Loader, index.html): the SDK bar shows a percentage only, so the stage text is not displayed
export function setLoading(v) {
  if (v === false) { hideLoading(); return; }
  showLoading(v || 0);
}

// player-facing boot failure: translated message + "Try again" (docs/BUILD_RULES.md section 3)
function showLoadError(e) {
  console.error('[boot]', e);
  const el = document.getElementById('gmLoader'), text = document.getElementById('load-text');
  if (!el || !text) return;
  el.hidden = false; el.classList.add('gmIsLoading'); el.classList.remove('gmAlmost');
  text.textContent = '';
  const msg = document.createElement('div');
  const lf = t('load_failed');
  msg.textContent = lf === 'load_failed' ? "Couldn't load the game. Please check your internet connection and try again." : lf;
  const btn = document.createElement('button');
  btn.textContent = t('try_again') === 'try_again' ? 'Try again' : t('try_again');
  btn.onclick = () => location.reload();
  text.append(msg, btn);
}

async function boot() {
  if (!noticeOk()) { halt(); return; }                     // copyright line lock (docs/BUILD_RULES.md section 1)
  const sdkReady = startAnalytics().catch(() => null);     // must finish before the first event
  await initI18n();                                        // Language/en.json (SDK strings: load error, try again)
  setLoading(0.05);
  await Promise.all([loadIndex(), initPhysics()]);
  setLayerMatrix(LAYER_MATRIX);
  App.init(document.getElementById('game'));
  window.__app = App; window.__world = () => World.current; window.THREE = THREE;
  if (params.has('view')) return viewer(params.get('view'));
  if (params.has('uiview')) return uiViewer(params.get('uiview'), (params.get('show') || '').split(',').filter(Boolean), params.get('scene'));
  const { startGame } = await import('./game/boot.js');
  await startGame();
  // the garage is on screen once the first frame is drawn
  await new Promise((r) => requestAnimationFrame(() => requestAnimationFrame(r)));
  const loadTimeMs = Math.round(performance.now() - (window.GM_LOAD_START ?? 0));
  await sdkReady;
  analytics.setUser({ version: window.GM_GAME?.version ?? 'dev', device: matchMedia('(pointer: coarse)').matches ? 'mobile' : 'desktop' });
  analytics.log('loaded_game', { load_time_ms: loadTimeMs });
  startSessionTimer();
}

// Debug: fly-through scene viewer (?view=level_1_beach)
async function viewer(name) {
  setLoading(0.3, 'Loading ' + name);
  await SceneManager.LoadScene(name);
  setLoading(false);
  let cam = Camera.main;
  const holder = new GameObject('ViewerCam');
  const camComp = holder.AddComponent(Camera, { 'field of view': 60, 'near clip plane': 0.3, 'far clip plane': 2000, m_ClearFlags: 2, m_BackGroundColor: { r: 0.5, g: 0.7, b: 0.9 } });
  holder.tag = 'MainCamera'; World.current.flushAwake(); Camera.main = camComp;
  const pos = new Vector3(+(params.get('x') || 0), +(params.get('y') || 6), +(params.get('z') || -25));
  let yaw = +(params.get('yaw') || 0), pitch = +(params.get('pitch') || 5);
  holder.transform.position = pos; holder.transform.rotation = Quaternion.Euler(pitch, yaw, 0);
  if (params.has('goto')) {
    const tgt = [...World.current.objects].find((g) => g.name === params.get('goto'));
    if (tgt) {
      World.current.root.updateMatrixWorld(true);
      const p = tgt.transform.position; const d = (params.get('off') || '-4,1.5,0').split(',').map(Number);
      holder.transform.position = p.add(new Vector3(d[0], d[1], d[2]));
      holder.transform.LookAt(p.add(new Vector3(0, 0.8, 0)));
      const e = holder.transform.eulerAngles; yaw = e.y; pitch = e.x > 180 ? e.x - 360 : e.x;
    }
  }
  const keys = new Set(); addEventListener('keydown', (e) => keys.add(e.code)); addEventListener('keyup', (e) => keys.delete(e.code));
  addEventListener('mousemove', (e) => { if (e.buttons) { yaw += e.movementX * 0.2; pitch += e.movementY * 0.2; } });
  App.onFrame.push((dt) => {
    const sp = keys.has('ShiftLeft') ? 60 : 15; const t = holder.transform; t.rotation = Quaternion.Euler(pitch, yaw, 0);
    let mv = new Vector3((keys.has('KeyD') ? 1 : 0) - (keys.has('KeyA') ? 1 : 0), (keys.has('KeyE') ? 1 : 0) - (keys.has('KeyQ') ? 1 : 0), (keys.has('KeyW') ? 1 : 0) - (keys.has('KeyS') ? 1 : 0));
    t.position = t.position.add(t.TransformDirection(mv).mul(sp * dt));
  });
  if (params.has('pause')) Time.timeScale = 0;
  App.start();
}

// Debug: show a UI prefab/scene canvas with some panels activated (?uiview=@Resources/_GUIGameplay&show=gameplay,results)
async function uiViewer(key, show, sceneName) {
  const { preload, Instantiate } = await import('./engine/scene.js');
  if (sceneName) await SceneManager.LoadScene(sceneName); else { await SceneManager.LoadScene('level_0'); }
  let root = null;
  if (key && key !== 'scene') { await preload(key); root = Instantiate(key); }
  for (const g of World.current.objects) if (show.includes(g.name)) g.SetActive(true);
  setLoading(false);
  App.start();
}

boot().catch(showLoadError);
