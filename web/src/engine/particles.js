// Lightweight CPU port of Unity's Shuriken ParticleSystem (common modules only).
import * as THREE from 'three';
import { Component, Time, World } from './core.js';
import { getTexture, getMaterialDef, loadGeometry, getGeometrySync } from './assets.js';
import { Color } from './umath.js';

// ---- curve helpers
function evalAnimCurve(keys, t) {
  if (!keys || !keys.length) return 1;
  if (t <= keys[0].time) return keys[0].value;
  for (let i = 0; i < keys.length - 1; i++) {
    const a = keys[i], b = keys[i + 1];
    if (t <= b.time) {
      const dt = b.time - a.time; if (dt <= 0) return b.value;
      const s = (t - a.time) / dt, s2 = s * s, s3 = s2 * s;
      const m0 = Number.isFinite(a.outSlope) ? a.outSlope : 0, m1 = Number.isFinite(b.inSlope) ? b.inSlope : 0;
      return (2 * s3 - 3 * s2 + 1) * a.value + (s3 - 2 * s2 + s) * dt * m0 + (-2 * s3 + 3 * s2) * b.value + (s3 - s2) * dt * m1;
    }
  }
  return keys[keys.length - 1].value;
}
export function evalMinMax(c, t = 0, r = Math.random()) {
  if (!c) return 0;
  switch (c.minMaxState) {
    case 0: return c.scalar;
    case 1: return c.scalar * evalAnimCurve(c.maxCurve && c.maxCurve.m_Curve, t);
    case 2: { const a = evalAnimCurve(c.minCurve && c.minCurve.m_Curve, t), b = evalAnimCurve(c.maxCurve && c.maxCurve.m_Curve, t); return c.scalar * (a + (b - a) * r); }
    case 3: return c.minScalar + (c.scalar - c.minScalar) * r;
  }
  return c.scalar || 0;
}
function evalGradientRaw(g, t) {
  const nc = g.m_NumColorKeys || 2, na = g.m_NumAlphaKeys || 2;
  const ck = [], ak = [];
  for (let i = 0; i < nc; i++) ck.push([g['ctime' + i] / 65535, g['key' + i]]);
  for (let i = 0; i < na; i++) ak.push([g['atime' + i] / 65535, g['key' + i].a]);
  const lerpKeys = (keys, t, get) => {
    if (t <= keys[0][0]) return get(keys[0][1]);
    for (let i = 0; i < keys.length - 1; i++) if (t <= keys[i + 1][0]) { const a = keys[i], b = keys[i + 1]; const s = (t - a[0]) / Math.max(1e-6, b[0] - a[0]); const va = get(a[1]), vb = get(b[1]); return Array.isArray(va) ? va.map((x, j) => x + (vb[j] - x) * s) : va + (vb - va) * s; }
    return get(keys[keys.length - 1][1]);
  };
  const [r, gg, b] = lerpKeys(ck, t, (k) => [k.r, k.g, k.b]);
  const a = lerpKeys(ak, t, (k) => k);
  return [r, gg, b, a];
}
export function evalGradient(c, t = 0, r = Math.random()) {
  if (!c) return [1, 1, 1, 1];
  const col = (k) => [k.r, k.g, k.b, k.a];
  switch (c.minMaxState) {
    case 0: return col(c.maxColor);
    case 1: return evalGradientRaw(c.maxGradient, t);
    case 2: { const a = col(c.minColor), b = col(c.maxColor); return a.map((x, i) => x + (b[i] - x) * r); }
    case 3: { const a = evalGradientRaw(c.minGradient, t), b = evalGradientRaw(c.maxGradient, t); return a.map((x, i) => x + (b[i] - x) * r); }
    case 4: return evalGradientRaw(c.maxGradient, r);
  }
  return [1, 1, 1, 1];
}

// Size over lifetime: "random between two curves" whose min curve is the untouched all-zero default behaves like
// the max curve in the shipped game (nitro jet compared on device)
function sizeOverLife(c, t, r) {
  if (c && c.minMaxState === 2) { const mk = c.minCurve && c.minCurve.m_Curve; if (!mk || !mk.length || mk.every((k) => !k.value)) return c.scalar * evalAnimCurve(c.maxCurve && c.maxCurve.m_Curve, t); }
  return evalMinMax(c, t, r);
}
const VS = `
attribute float psize; attribute vec4 pcolor; attribute float prot; varying vec4 vColor; varying float vRot;
uniform float scale;
#include <fog_pars_vertex>
void main(){ vColor = pcolor; vRot = prot; vec4 mvPosition = modelViewMatrix * vec4(position,1.0);
 gl_PointSize = psize * scale / max(0.01, -mvPosition.z); gl_Position = projectionMatrix * mvPosition;
 #include <fog_vertex>
}`;
const FS = `
uniform sampler2D map; uniform float hasMap; uniform vec4 tint; varying vec4 vColor; varying float vRot;
#include <fog_pars_fragment>
void main(){ vec2 uv = gl_PointCoord - 0.5; float c = cos(vRot), s = sin(vRot); uv = vec2(c*uv.x - s*uv.y, s*uv.x + c*uv.y) + 0.5; uv.y = 1.0 - uv.y;
 vec4 t = hasMap > 0.5 ? texture2D(map, uv) : vec4(1.0, 1.0, 1.0, 1.0 - smoothstep(0.35, 0.5, length(uv-0.5)));
 gl_FragColor = t * vColor * tint; if (gl_FragColor.a < 0.003) discard;
 #include <fog_fragment>
}`;

export class ParticleSystem extends Component {
  static typeName = 'ParticleSystem';
  constructor(go, p) {
    super(go, p);
    this.p = p;
    const I = p.InitialModule || {};
    this.duration = p.lengthInSec ?? 5; this.looping = !!p.looping; this.playOnAwake = !!p.playOnAwake;
    this.maxParticles = Math.min(I.maxNumParticles ?? 1000, 2000);
    this.simWorld = (p.moveWithTransform ?? 1) === 1 ? false : true; // moveWithTransform: 0=local? (Unity: SimulationSpace Local=0, World=1)
    this.simWorld = (p.moveWithTransform === 1);
    this.particles = [];
    this.time = 0; this.playing = false; this.emitAcc = 0; this.burstDone = new Set();
    this.emission = { enabled: !!(p.EmissionModule && p.EmissionModule.enabled), rateOverTimeMultiplier: 1, _sys: this };
    const em = this.emission;
    Object.defineProperty(em, 'rateOverTime', { get: () => evalMinMax(p.EmissionModule && p.EmissionModule.rateOverTime, 0), set: (v) => { const r = p.EmissionModule.rateOverTime; r.minMaxState = 0; r.scalar = typeof v === 'number' ? v : (v.constant ?? v.scalar ?? 0); } });
    const self = this;
    this.main = {
      get startColor() { return I.startColor; }, set startColor(c) { I.startColor = { minMaxState: 0, maxColor: c instanceof Color ? c : c.color || c }; },
      get startLifetime() { return evalMinMax(I.startLifetime); }, set startLifetime(v) { I.startLifetime = { minMaxState: 0, scalar: v }; },
      get startSpeed() { return evalMinMax(I.startSpeed); }, set startSpeed(v) { I.startSpeed = { minMaxState: 0, scalar: v }; },
      get startSize() { return evalMinMax(I.startSize); }, set startSize(v) { I.startSize = { minMaxState: 0, scalar: v }; },
      get duration() { return self.duration; }, set duration(v) { self.duration = v; },
      get loop() { return self.looping; }, set loop(v) { self.looping = v; },
      get simulationSpeed() { return p.simulationSpeed ?? 1; }, set simulationSpeed(v) { p.simulationSpeed = v; },
      get maxParticles() { return self.maxParticles; }, set maxParticles(v) { self.maxParticles = v; },
      get gravityModifierMultiplier() { return evalMinMax(I.gravityModifier); },
      startSpeedMultiplier: 1, startSizeMultiplier: 1, startLifetimeMultiplier: 1,
    };
  }
  Awake() {
    const r = this.gameObject.GetComponent('ParticleSystemRenderer');
    const rp = r ? r.props : {};
    this.rendererProps = rp;
    this.renderMode = rp.m_RenderMode || 0;
    const matRef = rp.m_Materials && rp.m_Materials[0];
    const def = getMaterialDef(matRef);
    const tex = def && def.tex && (def.tex._MainTex || def.tex._BaseMap);
    const map = tex ? getTexture(tex.tex) : null;
    const sh = (def && def.shader || '').toLowerCase();
    const additive = /additive|10720/.test(sh) || /additive/.test(def ? def.name : '');
    const tc = def && (def.colors._TintColor || def.colors._Color);
    const tint = tc ? new THREE.Vector4(tc[0], tc[1], tc[2], tc[3]) : new THREE.Vector4(1, 1, 1, 1);
    if (def && def.colors._TintColor) tint.multiplyScalar(2);
    this.isMesh = this.renderMode === 4;
    if (this.isMesh) {
      const meshRef = rp.m_Mesh;
      const geo = meshRef && meshRef.startsWith('@builtin') ? new THREE.BoxGeometry(1, 1, 1) : getGeometrySync(meshRef) || new THREE.BoxGeometry(1, 1, 1);
      if (meshRef && !meshRef.startsWith('@builtin') && !getGeometrySync(meshRef)) loadGeometry(meshRef);
      // particle shaders (Particles/*, builtin 10720/10721...) are unlit: keep the colours bright
      const unlit = /particle|unlit|1072\d/.test(sh);
      const mat = unlit ? new THREE.MeshBasicMaterial({ map, color: new THREE.Color(tint.x, tint.y, tint.z), blending: additive ? THREE.AdditiveBlending : THREE.NormalBlending })
        : new THREE.MeshLambertMaterial({ map, color: new THREE.Color(tint.x, tint.y, tint.z) });
      this.mesh = new THREE.InstancedMesh(geo, mat, this.maxParticles);
      this.mesh.instanceColor = new THREE.InstancedBufferAttribute(new Float32Array(this.maxParticles * 3), 3);
      this.mesh.count = 0;
    } else {
      const g = new THREE.BufferGeometry();
      this.posArr = new Float32Array(this.maxParticles * 3); this.colArr = new Float32Array(this.maxParticles * 4); this.sizeArr = new Float32Array(this.maxParticles); this.rotArr = new Float32Array(this.maxParticles);
      g.setAttribute('position', new THREE.BufferAttribute(this.posArr, 3));
      g.setAttribute('pcolor', new THREE.BufferAttribute(this.colArr, 4));
      g.setAttribute('psize', new THREE.BufferAttribute(this.sizeArr, 1));
      g.setAttribute('prot', new THREE.BufferAttribute(this.rotArr, 1));
      g.setDrawRange(0, 0);
      const mat = new THREE.ShaderMaterial({
        uniforms: { map: { value: map }, hasMap: { value: map ? 1 : 0 }, tint: { value: tint }, scale: { value: innerHeight / 1.15 }, ...THREE.UniformsLib.fog },
        vertexShader: VS, fragmentShader: FS, transparent: true, depthWrite: false, fog: true,
        blending: additive ? THREE.AdditiveBlending : THREE.NormalBlending,
      });
      this.mesh = new THREE.Points(g, mat);
    }
    this.mesh.frustumCulled = false;
    this.mesh.renderOrder = 10 + (rp.m_SortingOrder || 0);
    World.current.root.add(this.mesh);
    this.mesh.visible = this.gameObject.activeInHierarchy;
  }
  OnEnable() { if (this.mesh) this.mesh.visible = true; if (this.playOnAwake) this.Play(); }
  OnDisable() { if (this.mesh) this.mesh.visible = false; this.playing = false; this.particles.length = 0; }
  get isPlaying() { return this.playing || this.particles.length > 0; }
  get isEmitting() { return this.playing; }
  get particleCount() { return this.particles.length; }
  Play(withChildren = true) {
    this.playing = true; this.time = -(evalMinMax(this.p.startDelay) || 0); this.emitAcc = 0; this.burstDone.clear();
    if (withChildren) for (const c of this.transform._children) { const ps = c.gameObject.GetComponent(ParticleSystem); if (ps && ps !== this) ps.Play(true); }
  }
  Stop(withChildren = true, behavior = 1) {
    this.playing = false; if (behavior === 0) this.particles.length = 0;
    if (withChildren) for (const c of this.transform._children) { const ps = c.gameObject.GetComponent(ParticleSystem); if (ps && ps !== this) ps.Stop(true, behavior); }
  }
  Pause() { this.paused = true; }
  Clear() { this.particles.length = 0; }
  Simulate() { }
  Emit(n) { for (let i = 0; i < n; i++) this._spawn(); }
  _emitterMatrix() { this.gameObject.obj.updateWorldMatrix(true, false); return this.gameObject.obj.matrixWorld; }
  // Unity scalingMode: 0 Hierarchy (world scale), 1 Local (own scale), 2 Shape (scale only moves the spawn shape)
  _scaleMode() { return this.p.scalingMode ?? 1; }
  _sizeScale() { const m = this._scaleMode(); if (m === 2) return 1; const o = this.gameObject.obj; return Math.abs(m === 0 ? o.getWorldScale(new THREE.Vector3()).x : o.scale.x) || 1; }
  // matrix used to render Local-space particles (no scale in Shape mode)
  _localRenderMatrix() {
    const m = this._emitterMatrix(); if (this._scaleMode() !== 2) return m;
    const p = new THREE.Vector3(), q = new THREE.Quaternion(), sc = new THREE.Vector3(); m.decompose(p, q, sc);
    return (this._lrm || (this._lrm = new THREE.Matrix4())).compose(p, q, new THREE.Vector3(1, 1, 1));
  }
  _spawn() {
    if (this.particles.length >= this.maxParticles) return;
    const I = this.p.InitialModule || {}; const S = this.p.ShapeModule || {};
    const nt = this.duration > 0 ? Math.max(0, this.time) / this.duration : 0;
    const life = Math.max(0.01, evalMinMax(I.startLifetime, nt) * this.main.startLifetimeMultiplier);
    const speed = evalMinMax(I.startSpeed, nt) * this.main.startSpeedMultiplier;
    // shape (unity local space)
    let pos = new THREE.Vector3(), dir = new THREE.Vector3(0, 0, 1);
    if (S.enabled) {
      const rad = (S.radius && S.radius.value !== undefined ? S.radius.value : S.radius) ?? 1;
      const t = S.type;
      if (t === 4 || t === 12 || t === 8) { // cone
        const ang = (S.angle ?? 25) * Math.PI / 180; const a = Math.random() * Math.PI * 2; const rr = Math.sqrt(Math.random()) * (rad || 0);
        pos.set(Math.cos(a) * rr, Math.sin(a) * rr, 0);
        const spread = Math.tan(ang) * (rr / Math.max(rad || 1, 1e-4));
        dir.set(Math.cos(a) * spread, Math.sin(a) * spread, 1).normalize();
      } else if (t === 0 || t === 1 || t === 2) {
        dir.set(Math.random() * 2 - 1, Math.random() * 2 - 1, Math.random() * 2 - 1).normalize();
        if (t === 2 && dir.z < 0) dir.z = -dir.z;
        pos.copy(dir).multiplyScalar(rad * (t === 1 ? 1 : Math.cbrt(Math.random())));
      } else if (t === 5 || t === 15 || t === 16) {
        const sc = S.m_Scale || { x: 1, y: 1, z: 1 }; pos.set((Math.random() - 0.5) * sc.x, (Math.random() - 0.5) * sc.y, (Math.random() - 0.5) * sc.z); dir.set(0, 0, 1);
      } else if (t === 10) {
        const a = Math.random() * Math.PI * 2; pos.set(Math.cos(a) * rad, Math.sin(a) * rad, 0); dir.copy(pos).normalize();
      } else if (t === 13) { pos.set((Math.random() - 0.5) * rad * 2, 0, 0); dir.set(0, 1, 0); }
      if (S.m_Rotation && (S.m_Rotation.x || S.m_Rotation.y || S.m_Rotation.z)) {
        const e = new THREE.Euler(S.m_Rotation.x * Math.PI / 180, S.m_Rotation.y * Math.PI / 180, S.m_Rotation.z * Math.PI / 180, 'YXZ');
        pos.applyEuler(e); dir.applyEuler(e);
      }
      if (S.m_Position) pos.add(new THREE.Vector3(S.m_Position.x, S.m_Position.y, S.m_Position.z));
      // randomDirectionAmount is 1 on 368/380 systems (legacy migration value) but the shipped game emits straight
      // (verified on device: nitro jet). Only honoured when explicitly fractional.
      if (S.randomDirectionAmount > 0 && S.randomDirectionAmount < 1) dir.lerp(new THREE.Vector3(Math.random() * 2 - 1, Math.random() * 2 - 1, Math.random() * 2 - 1).normalize(), S.randomDirectionAmount).normalize();
    }
    // unity local -> three local (flip z)
    pos.z = -pos.z; dir.z = -dir.z;
    let wp, wd;
    if (this.simWorld) { const m = this._emitterMatrix(); wp = pos.clone().applyMatrix4(m); wd = dir.clone().transformDirection(m).multiplyScalar(speed); }
    else { // Local simulation space: particles follow the emitter
      wp = pos.clone(); wd = dir.clone().multiplyScalar(speed);
      if (this._scaleMode() === 2) wp.multiply(this.gameObject.obj.getWorldScale(new THREE.Vector3())); // shape still scaled
    }
    const size = evalMinMax(I.startSize, nt) * this.main.startSizeMultiplier * this._sizeScale();
    const col = evalGradient(I.startColor, nt);
    const rot = evalMinMax(I.startRotation, nt);
    const pt = { p: wp, v: wd, age: 0, life, size, col, rot, rotSpeed: 0, rnd: Math.random(), rnd2: Math.random(), grav: evalMinMax(I.gravityModifier, nt) };
    this.particles.push(pt);
    return pt;
  }
  Update() {
    const dt = Time.deltaTime * (this.p.simulationSpeed ?? 1);
    if (this.playing) {
      const E = this.p.EmissionModule;
      this.time += dt;
      if (this.time >= 0) {
        if (E && this.emission.enabled) { // runtime emission.enabled overrides the serialized module flag
          const nt = this.duration > 0 ? (this.time % this.duration) / this.duration : 0;
          const rate = evalMinMax(E.rateOverTime, nt) * this.emission.rateOverTimeMultiplier;
          this.emitAcc += rate * dt;
          // spread the frame's spawns over the frame (like Unity): each particle starts with the age it would
          // have had if emitted at its exact time, so jets stay continuous at low frame rates
          let k = Math.floor(this.emitAcc); this.emitAcc -= k;
          for (let i = 0; i < k; i++) { const pt = this._spawn(); if (pt && rate > 0) { const a = Math.min(dt, (this.emitAcc + (k - 1 - i)) / rate); pt.age = a; pt.p.addScaledVector(pt.v, a); } }
          const bursts = E.m_Bursts || [];
          const cycleT = this.looping ? this.time % this.duration : this.time;
          bursts.forEach((b, i) => {
            const cyc = this.looping ? Math.floor(this.time / this.duration) : 0; const key = i + ':' + cyc;
            if (!this.burstDone.has(key) && cycleT >= (b.time || 0)) { this.burstDone.add(key); const cnt = Math.round(evalMinMax(b.countCurve || { minMaxState: 0, scalar: b.minCount || 0 })); for (let k = 0; k < cnt; k++) this._spawn(); }
          });
        }
        if (this.time >= this.duration && !this.looping) this.playing = false;
      }
    }
    this._simulate(dt);
  }
  _simulate(dt) {
    const g = -9.81;
    const V = this.p.VelocityModule, Sz = this.p.SizeModule, C = this.p.ColorModule, Rm = this.p.RotationModule, L = this.p.ClampVelocityModule;
    const out = [];
    // gravity is world-down; in Local simulation space express it in emitter-local coordinates
    const gv = new THREE.Vector3(0, g, 0);
    if (!this.simWorld && this.particles.length) { const q = new THREE.Quaternion(); this._emitterMatrix().decompose(new THREE.Vector3(), q, new THREE.Vector3()); gv.applyQuaternion(q.invert()); }
    for (const pt of this.particles) {
      pt.age += dt; if (pt.age >= pt.life) continue;
      const t = pt.age / pt.life;
      if (pt.grav) pt.v.addScaledVector(gv, pt.grav * dt);
      if (L && L.enabled && L.dampen) pt.v.multiplyScalar(1 - Math.min(1, (L.dampen || 0) * dt * 10));
      pt.p.addScaledVector(pt.v, dt);
      if (V && V.enabled) { const vx = evalMinMax(V.x, t, pt.rnd), vy = evalMinMax(V.y, t, pt.rnd), vz = evalMinMax(V.z, t, pt.rnd); pt.p.x += vx * dt; pt.p.y += vy * dt; pt.p.z -= vz * dt; }
      if (Rm && Rm.enabled) pt.rot += evalMinMax(Rm.curve, t, pt.rnd2) * dt;
      out.push(pt);
    }
    this.particles = out;
    const n = out.length;
    // Local simulation space: particle state is emitter-local, rendered through the emitter's current matrix
    const em = this.simWorld ? null : this._localRenderMatrix(); const wpos = new THREE.Vector3();
    const P = (pt) => (em ? wpos.copy(pt.p).applyMatrix4(em) : pt.p);
    if (this.isMesh) {
      const mm = new THREE.Matrix4(), q = new THREE.Quaternion(), s = new THREE.Vector3(), c = new THREE.Color();
      const zq = new THREE.Quaternion(), ZAX = new THREE.Vector3(0, 0, 1), align = this.rendererProps.m_RenderAlignment ?? 0;
      const eq = new THREE.Quaternion(); this._emitterMatrix().decompose(new THREE.Vector3(), eq, new THREE.Vector3());
      for (let i = 0; i < n; i++) {
        const pt = out[i]; const t = pt.age / pt.life;
        const sz = pt.size * (Sz && Sz.enabled ? sizeOverLife(Sz.curve, t, pt.rnd) : 1);
        // mesh orientation: Render Alignment Local(2) = emitter rotation, World(1) = identity; spin about local Z
        zq.setFromAxisAngle(ZAX, -pt.rot);
        if (align === 2) q.copy(eq).multiply(zq); else q.copy(zq);
        mm.compose(P(pt), q, s.set(sz, sz, sz)); this.mesh.setMatrixAt(i, mm);
        const col = C && C.enabled ? evalGradient(C.gradient, t, pt.rnd) : [1, 1, 1, 1];
        this.mesh.setColorAt(i, c.setRGB(pt.col[0] * col[0], pt.col[1] * col[1], pt.col[2] * col[2]));
      }
      this.mesh.count = n; this.mesh.instanceMatrix.needsUpdate = true; if (this.mesh.instanceColor) this.mesh.instanceColor.needsUpdate = true;
    } else {
      for (let i = 0; i < n; i++) {
        const pt = out[i]; const t = pt.age / pt.life;
        const wp = P(pt); this.posArr[i * 3] = wp.x; this.posArr[i * 3 + 1] = wp.y; this.posArr[i * 3 + 2] = wp.z;
        const col = C && C.enabled ? evalGradient(C.gradient, t, pt.rnd) : [1, 1, 1, 1];
        this.colArr[i * 4] = pt.col[0] * col[0]; this.colArr[i * 4 + 1] = pt.col[1] * col[1]; this.colArr[i * 4 + 2] = pt.col[2] * col[2]; this.colArr[i * 4 + 3] = pt.col[3] * col[3];
        this.sizeArr[i] = pt.size * (Sz && Sz.enabled ? sizeOverLife(Sz.curve, t, pt.rnd) : 1);
        this.rotArr[i] = pt.rot;
      }
      const g = this.mesh.geometry; g.setDrawRange(0, n);
      g.attributes.position.needsUpdate = true; g.attributes.pcolor.needsUpdate = true; g.attributes.psize.needsUpdate = true; g.attributes.prot.needsUpdate = true;
      this.mesh.material.uniforms.scale.value = innerHeight / 1.15;
    }
  }
  _dispose() { if (this.mesh) { this.mesh.removeFromParent(); this.mesh.geometry.dispose(); } }
}

export class ParticleSystemRenderer extends Component { static typeName = 'ParticleSystemRenderer'; }
