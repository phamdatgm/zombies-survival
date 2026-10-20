// Main loop: fixed-step physics + variable update + render.
import * as THREE from 'three';
import { Time, World, tickTimers } from './core.js';
import { PhysicsWorld } from './physics.js';
import { Camera, RenderState, updateVisibility } from './render.js';
import { Input } from './input.js';
import { layoutUI } from './ugui.js';

export const App = {
  renderer: null, running: false, acc: 0, last: 0, onFrame: [], paused: false,
  init(canvas) {
    const r = new THREE.WebGLRenderer({ canvas, antialias: true, powerPreference: 'high-performance' });
    r.setPixelRatio(Math.min(devicePixelRatio, 2));
    r.setSize(innerWidth, innerHeight);
    r.outputColorSpace = THREE.LinearSRGBColorSpace; // gamma-space pipeline like the original
    r.toneMapping = THREE.NoToneMapping;
    this.renderer = r; RenderState.renderer = r;
    addEventListener('resize', () => this.resize());
    this.resize();
  },
  resize() {
    this.renderer.setSize(innerWidth, innerHeight);
    const cam = Camera.main && Camera.main.cam;
    if (cam) { cam.aspect = innerWidth / innerHeight; cam.updateProjectionMatrix(); }
  },
  start() {
    if (this.running) return; this.running = true; this.last = performance.now();
    const loop = (now) => { requestAnimationFrame(loop); this.frame(now); };
    requestAnimationFrame(loop);
  },
  frame(now) {
    const udt = Math.min(0.1, (now - this.last) / 1000); this.last = now;
    const w = World.current; if (!w) return;
    Input.pollGamepads();
    Time.unscaledDeltaTime = udt; Time.unscaledTime += udt; Time.realtimeSinceStartup = now / 1000;
    const dt = udt * Time.timeScale;
    Time.deltaTime = dt;
    // fixed steps
    this.acc += dt;
    const fdt = Time.fixedDeltaTime;
    let steps = 0;
    while (this.acc >= fdt && steps < 5) {
      const saved = Time.deltaTime; Time.deltaTime = fdt;
      w.fixedUpdate();
      PhysicsWorld.step(fdt);
      Time.deltaTime = saved;
      this.acc -= fdt; steps++;
    }
    if (steps === 5) this.acc = 0;
    Time.time += dt; Time.frameCount++;
    tickTimers();
    w.update(dt, udt);
    for (const f of this.onFrame) f(dt, udt);
    layoutUI();
    Input.endFrame();
    this.render();
  },
  render() {
    const w = World.current;
    const cam = Camera.main;
    if (!cam || !cam.cam) { this.renderer.setClearColor(0x000000); this.renderer.clear(); return; }
    const c = cam.backgroundColor;
    if (cam.clearFlags === 1 && w.renderSettings && w.root.fog) this.renderer.setClearColor(w.root.fog.color);
    else this.renderer.setClearColor(new THREE.Color(c.r, c.g, c.b));
    if (cam.cam.aspect !== innerWidth / innerHeight) { cam.cam.aspect = innerWidth / innerHeight; cam.cam.updateProjectionMatrix(); }
    updateVisibility(cam.cam);
    const _t0 = performance.now();
    this.renderer.render(w.root, cam.cam);
    const _dt = performance.now() - _t0;
    if (/debugphys/.test(location.search) && (_dt > 200 || (this._rn = (this._rn || 0) + 1) < 4)) console.log('render', _dt.toFixed(0) + 'ms', 'calls', this.renderer.info.render.calls, 'progs', this.renderer.info.programs.length);
  },
};
