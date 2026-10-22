// Animator / Animation playback for converted clips (sampled at fixed fps, linear interpolation).
import * as THREE from 'three';
import { Component, Time } from './core.js';
import { clipDef, controllerDef, avatarDef } from './assets.js';
import { GameObject } from './core.js';
import { Quaternion, Vector3 } from './umath.js';

// CRC32 (Unity path hashes)
const CRC = (() => { const t = new Uint32Array(256); for (let i = 0; i < 256; i++) { let c = i; for (let k = 0; k < 8; k++) c = c & 1 ? 0xedb88320 ^ (c >>> 1) : c >>> 1; t[i] = c >>> 0; } return t; })();
export function crc32(s) { let c = 0xffffffff; for (let i = 0; i < s.length; i++) c = CRC[(c ^ s.charCodeAt(i)) & 0xff] ^ (c >>> 8); return (c ^ 0xffffffff) >>> 0; }

function bindingMap(rootGo) {
  const map = new Map();
  const rec = (t, path) => {
    map.set(crc32(path), t.gameObject);
    for (const c of t._children) rec(c, path ? path + '/' + c.gameObject.name : c.gameObject.name);
  };
  rec(rootGo.transform, '');
  return map;
}

const _e = new THREE.Euler(), _qq = new THREE.Quaternion(), _mExp = new THREE.Matrix4();

export function sampleClip(clip, t, bind, weight = 1) {
  const n = clip.n; const f = Math.min(Math.max(t * clip.fps, 0), n - 1);
  const i0 = Math.floor(f), i1 = Math.min(i0 + 1, n - 1), a = f - i0;
  for (const tr of clip.tracks) {
    let go = tr._go;
    if (go === undefined || tr._bind !== bind) { go = bind.get(tr.h) || null; tr._go = go; tr._bind = bind; }
    if (!go) continue;
    const v = tr.v; const o = go.obj;
    switch (tr.k) {
      case 'q': {
        const b0 = i0 * 4, b1 = i1 * 4;
        _qq.set(v[b0], v[b0 + 1], v[b0 + 2], v[b0 + 3]);
        const q1 = new THREE.Quaternion(v[b1], v[b1 + 1], v[b1 + 2], v[b1 + 3]);
        _qq.slerp(q1, a);
        if (weight >= 1) o.quaternion.copy(_qq); else o.quaternion.slerp(_qq, weight);
        break;
      }
      case 'p': case 's': {
        const b0 = i0 * 3, b1 = i1 * 3;
        const x = v[b0] + (v[b1] - v[b0]) * a, y = v[b0 + 1] + (v[b1 + 1] - v[b0 + 1]) * a, z = v[b0 + 2] + (v[b1 + 2] - v[b0 + 2]) * a;
        const dst = tr.k === 'p' ? o.position : o.scale;
        if (weight >= 1) dst.set(x, y, z); else dst.lerp(new THREE.Vector3(x, y, z), weight);
        break;
      }
      case 'e': {
        const b0 = i0 * 3, b1 = i1 * 3;
        const ex = v[b0] + (v[b1] - v[b0]) * a, ey = v[b0 + 1] + (v[b1 + 1] - v[b0 + 1]) * a, ez = v[b0 + 2] + (v[b1 + 2] - v[b0 + 2]) * a;
        const q = Quaternion.Euler(ex, ey, ez);
        o.quaternion.set(-q.x, -q.y, q.z, q.w);
        break;
      }
      case 'f': {
        const x = v[i0] + (v[i1] - v[i0]) * a;
        if (tr.attr === 'm_IsActive') go.SetActive(x > 0.5);
        else if (tr.attr === 'm_Enabled' && tr.cls) { /* component enable */ }
        else if (tr.attr && tr.attr.startsWith('localEulerAnglesRaw')) { /* handled by e */ }
        break;
      }
    }
  }
}

// ---------------------------------------------------------------- humanoid (Mecanim muscle space)
// muscle name -> [mecanim human bone index, dof axis (0=x twist, 1=y, 2=z)]
const HB = { Hips: 0, LUL: 1, RUL: 2, LLL: 3, RLL: 4, LF: 5, RF: 6, Spine: 7, Chest: 8, UChest: 9, Neck: 10, Head: 11, LSh: 12, RSh: 13, LUA: 14, RUA: 15, LLA: 16, RLA: 17, LH: 18, RH: 19, LT: 20, RT: 21, LE: 22, RE: 23, Jaw: 24 };
const MUSCLES = {};
const M = (n, b, a) => { MUSCLES[n] = [b, a]; };
for (const [n, b] of [['Spine', HB.Spine], ['Chest', HB.Chest], ['UpperChest', HB.UChest]]) { M(n + ' Front-Back', b, 2); M(n + ' Left-Right', b, 1); M(n + ' Twist Left-Right', b, 0); }
for (const [n, b] of [['Neck', HB.Neck], ['Head', HB.Head]]) { M(n + ' Nod Down-Up', b, 2); M(n + ' Tilt Left-Right', b, 1); M(n + ' Turn Left-Right', b, 0); }
M('Left Eye Down-Up', HB.LE, 2); M('Left Eye In-Out', HB.LE, 1); M('Right Eye Down-Up', HB.RE, 2); M('Right Eye In-Out', HB.RE, 1); M('Jaw Close', HB.Jaw, 2); M('Jaw Left-Right', HB.Jaw, 1);
for (const [S, ul, ll, f, t] of [['Left', HB.LUL, HB.LLL, HB.LF, HB.LT], ['Right', HB.RUL, HB.RLL, HB.RF, HB.RT]]) {
  M(S + ' Upper Leg Front-Back', ul, 2); M(S + ' Upper Leg In-Out', ul, 1); M(S + ' Upper Leg Twist In-Out', ul, 0);
  M(S + ' Lower Leg Stretch', ll, 2); M(S + ' Lower Leg Twist In-Out', ll, 0);
  M(S + ' Foot Up-Down', f, 2); M(S + ' Foot Twist In-Out', f, 1); M(S + ' Toes Up-Down', t, 2);
}
for (const [S, sh, ua, la, h] of [['Left', HB.LSh, HB.LUA, HB.LLA, HB.LH], ['Right', HB.RSh, HB.RUA, HB.RLA, HB.RH]]) {
  M(S + ' Shoulder Down-Up', sh, 2); M(S + ' Shoulder Front-Back', sh, 1);
  M(S + ' Arm Down-Up', ua, 2); M(S + ' Arm Front-Back', ua, 1); M(S + ' Arm Twist In-Out', ua, 0);
  M(S + ' Forearm Stretch', la, 2); M(S + ' Forearm Twist In-Out', la, 0);
  M(S + ' Hand Down-Up', h, 2); M(S + ' Hand In-Out', h, 1);
}
// unity-space quaternion helpers ([x,y,z,w])
function qmul(a, b) { return [a[3] * b[0] + a[0] * b[3] + a[1] * b[2] - a[2] * b[1], a[3] * b[1] + a[1] * b[3] + a[2] * b[0] - a[0] * b[2], a[3] * b[2] + a[2] * b[3] + a[0] * b[1] - a[1] * b[0], a[3] * b[3] - a[0] * b[0] - a[1] * b[1] - a[2] * b[2]]; }
function qconj(a) { return [-a[0], -a[1], -a[2], a[3]]; }
function qnorm(a) { const l = Math.hypot(a[0], a[1], a[2], a[3]) || 1; return [a[0] / l, a[1] / l, a[2] / l, a[3] / l]; }
function qrot(q, v) { const p = qmul(qmul(q, [v[0], v[1], v[2], 0]), qconj(q)); return [p[0], p[1], p[2]]; }
function zyRoll2Quat(x, y, z) { return qnorm([x, y + x * z, z - x * y, 1]); }

function humanSetup(an, av) {
  const H = av.human; const hum = { bones: [], av };
  H.boneIndex.forEach((hi, b) => {
    if (hi < 0) return;
    const hn = H.nodes[hi]; const go = an.skeleton.get(hn.h >>> 0);
    if (go) hum.bones[b] = { go, axes: hn.axes, hn };
  });
  // hips offset in body (RootX) frame, from the default pose chain (avatar space)
  const world = [];
  av.nodes.forEach((n, i) => {
    if (n.parent < 0) { world[i] = { t: [0, 0, 0], q: [0, 0, 0, 1] }; return; }
    const p = world[n.parent]; const r = qrot(p.q, n.t);
    world[i] = { t: [p.t[0] + r[0], p.t[1] + r[1], p.t[2] + r[2]], q: qmul(p.q, n.q) };
  });
  const hipsIdx = hum.bones[0] ? av.nodes.findIndex((n) => (n.h >>> 0) === (hum.bones[0].hn.h >>> 0)) : -1;
  const hw = world[hipsIdx] || { t: [0, 1, 0], q: [0, 0, 0, 1] };
  const rx = H.rootX; const iq = qconj(rx.q);
  hum.hipsOffT = qrot(iq, [hw.t[0] - rx.t[0], hw.t[1] - rx.t[1], hw.t[2] - rx.t[2]]);
  hum.hipsOffQ = qmul(iq, hw.q);
  hum.hipsParentIsRoot = hipsIdx >= 0 && av.nodes[hipsIdx].parent === 0;
  return hum;
}
function setUnityLocalQ(go, q, w) { const t = new THREE.Quaternion(-q[0], -q[1], q[2], q[3]); if (w >= 1) go.obj.quaternion.copy(t); else go.obj.quaternion.slerp(t, w); }

export function sampleHumanoid(clip, t, an, weight = 1) {
  const hum = an.human; if (!hum) return;
  if (!clip._hum) {
    clip._hum = { mus: [], root: {} };
    for (const tr of clip.tracks) {
      if (tr.k !== 'f' || !tr.attr) continue;
      const m = MUSCLES[tr.attr];
      if (m) clip._hum.mus.push([m[0], m[1], tr.v]);
      else if (/^Root[TQ]\.[xyzw]$/.test(tr.attr)) clip._hum.root[tr.attr] = tr.v;
    }
  }
  if (!clip._hum.mus.length) return;
  const n = clip.n; const f = Math.min(Math.max(t * clip.fps, 0), n - 1); const i0 = Math.floor(f), i1 = Math.min(i0 + 1, n - 1), a = f - i0;
  const val = (v) => v[i0] + (v[i1] - v[i0]) * a;
  const mus = []; for (const [b, ax, v] of clip._hum.mus) { (mus[b] || (mus[b] = [0, 0, 0]))[ax] = val(v); }
  for (let b = 1; b < hum.bones.length; b++) {
    const B = hum.bones[b]; if (!B || !B.axes) continue;
    const m = mus[b] || [0, 0, 0]; const A = B.axes;
    const ang = [0, 1, 2].map((k) => (m[k] < 0 ? -m[k] * A.min[k] : m[k] * A.max[k]) * A.sgn[k]);
    const lq = zyRoll2Quat(Math.tan(ang[0] / 2), Math.tan(ang[1] / 2), Math.tan(ang[2] / 2));
    setUnityLocalQ(B.go, qmul(qmul(A.preQ, lq), qconj(A.postQ)), weight);
  }
  const R = clip._hum.root; const hips = hum.bones[0];
  if (hips && R['RootQ.w'] && hum.hipsParentIsRoot) {
    const bq = qnorm([R['RootQ.x'] ? val(R['RootQ.x']) : 0, R['RootQ.y'] ? val(R['RootQ.y']) : 0, R['RootQ.z'] ? val(R['RootQ.z']) : 0, val(R['RootQ.w'])]);
    const sc = hum.av.human.scale || 1;
    const bt = [0, (R['RootT.y'] ? val(R['RootT.y']) : 1) * sc, 0];
    const bakeXZ = clip.bake && clip.bake[2];
    if (!an.applyRootMotion || bakeXZ) {
      // motion baked into pose: body moves relative to the clip start
      const x0 = R['RootT.x'] ? R['RootT.x'][0] : 0, z0 = R['RootT.z'] ? R['RootT.z'][0] : 0;
      bt[0] = ((R['RootT.x'] ? val(R['RootT.x']) : 0) - x0) * sc; bt[2] = ((R['RootT.z'] ? val(R['RootT.z']) : 0) - z0) * sc;
    }
    const off = qrot(bq, hum.hipsOffT);
    const tp = new THREE.Vector3(bt[0] + off[0], bt[1] + off[1], -(bt[2] + off[2]));
    if (weight >= 1) hips.go.obj.position.copy(tp); else hips.go.obj.position.lerp(tp, weight);
    setUnityLocalQ(hips.go, qmul(bq, hum.hipsOffQ), weight);
  }
}
function humanRootMotion(clip, t0, t1, an) {
  const R = clip._hum && clip._hum.root; if (!R || !R['RootT.z']) return null;
  const sample = (t) => { const n = clip.n; const f = Math.min(Math.max(t * clip.fps, 0), n - 1); const i0 = Math.floor(f), i1 = Math.min(i0 + 1, n - 1), a = f - i0; const v = (x) => (x ? x[i0] + (x[i1] - x[i0]) * a : 0); return [v(R['RootT.x']), v(R['RootT.z'])]; };
  const sc = an.human.av.human.scale || 1;
  let d;
  if (t1 >= t0) { const a = sample(t0), b = sample(t1); d = [b[0] - a[0], b[1] - a[1]]; }
  else { const a = sample(t0), e = sample(clip.length), s0 = sample(0), b = sample(t1); d = [e[0] - a[0] + b[0] - s0[0], e[1] - a[1] + b[1] - s0[1]]; }
  return [d[0] * sc, d[1] * sc];
}

export class Animator extends Component {
  static typeName = 'Animator';
  constructor(go, p) {
    super(go, p);
    this.ctrl = controllerDef(p.m_Controller);
    this.params = {};
    if (this.ctrl) for (const pr of this.ctrl.params) this.params[pr.name] = pr.type === 1 ? pr.f : pr.type === 3 ? pr.i : pr.type === 4 ? !!pr.b : false;
    this.speed = 1;
    this.layer = this.ctrl && this.ctrl.layers[0];
    this.state = null; this.time = 0; this.prev = null; this.fade = 0; this.fadeDur = 0;
    this.applyRootMotion = !!p.m_ApplyRootMotion;
  }
  Awake() {
    const av = avatarDef(this.props.m_Avatar);
    if (av && this.props.m_HasTransformHierarchy === 0) this._buildSkeleton(av);
    this.bind = bindingMap(this.gameObject);
    if (this.skeleton) for (const [h, g] of this.skeleton) this.bind.set(h, g);
    if (av && av.human && this.skeleton) this.human = humanSetup(this, av);
    if (this.layer && this.layer.default) this._enter(this.layer.default, 0);
  }
  _buildSkeleton(av) {
    const created = []; this.skeleton = new Map();
    av.nodes.forEach((n, i) => {
      if (n.parent < 0) { created[i] = this.gameObject; this.skeleton.set(n.h >>> 0, this.gameObject); return; }
      const parent = created[n.parent] || this.gameObject;
      const name = n.path.split('/').pop();
      const ex = parent.transform._children.find((c) => c.gameObject.name === name);
      let go = ex ? ex.gameObject : null;
      if (!go) {
        go = new GameObject(name, this.gameObject.scene);
        go.layer = this.gameObject.layer; go.transform._parent = parent.transform; parent.transform._children.push(go.transform); parent.obj.add(go.obj);
        go.obj.position.set(n.t[0], n.t[1], -n.t[2]); go.obj.quaternion.set(-n.q[0], -n.q[1], n.q[2], n.q[3]); go.obj.scale.set(n.s[0], n.s[1], n.s[2]);
        go._activeInHierarchy = parent._activeInHierarchy; go._active = true; go.obj.visible = go._activeInHierarchy; go._generatedBone = true;
      }
      created[i] = go; this.skeleton.set(n.h >>> 0, go);
      // "Optimize Game Objects" exposed transform: a bone kept as a flat child of the Animator root (e.g. Hand_Right_jnt
      // holding a shield/torch). Unity writes the bone's root-relative pose into it every frame (see _syncExposed).
      if (!ex && parent !== this.gameObject) {
        const exp = this.gameObject.transform._children.find((c) => c.gameObject.name === name && !c.gameObject._generatedBone);
        if (exp) (this.exposed || (this.exposed = [])).push([go, exp.gameObject]);
      }
    });
    for (const r of this.gameObject.GetComponentsInChildren('SkinnedMeshRenderer', true)) if (!r.boneRefs.length) r._rebuild();
  }
  rebind() { this.bind = bindingMap(this.gameObject); }
  _stateByName(n) { return this.layer ? this.layer.states.find((s) => s.name === n || ('Base Layer.' + s.name) === n) : null; }
  _enter(name, fade) {
    const s = this._stateByName(name); if (!s) return false;
    if (this.state && fade > 0) { this.prev = { state: this.state, time: this.time }; this.fade = 0; this.fadeDur = fade; } else this.prev = null;
    this.state = s; this.time = 0; this.normalizedTimeLast = 0;
    return true;
  }
  Play(name, layer = -1, normalizedTime = 0) { if (this._enter(name, 0)) { const c = clipDef(this.state.clip); if (c) this.time = normalizedTime * c.length; } }
  CrossFade(name, dur = 0.25) { const c = this.state && clipDef(this.state.clip); this._enter(name, dur * (c ? c.length : 1)); }
  CrossFadeInFixedTime(name, dur = 0.25) { this._enter(name, dur); }
  SetTrigger(n) { this.params[n] = true; this._eval(); }
  ResetTrigger(n) { this.params[n] = false; }
  SetBool(n, v) { this.params[n] = !!v; this._eval(); }
  GetBool(n) { return !!this.params[n]; }
  SetFloat(n, v) { this.params[n] = v; }
  GetFloat(n) { return this.params[n] || 0; }
  SetInteger(n, v) { this.params[n] = v; this._eval(); }
  GetInteger(n) { return this.params[n] | 0; }
  GetCurrentAnimatorStateInfo() {
    const c = this.state && clipDef(this.state.clip);
    const len = c ? c.length : 1;
    const name = this.state ? this.state.name : '';
    return { normalizedTime: this.time / len, length: len, IsName: (n) => n === name || n === 'Base Layer.' + name, name };
  }
  get runtimeAnimatorController() { return this.ctrl; }
  _condsOk(conds) {
    for (const c of conds) {
      const v = this.params[c.param];
      switch (c.mode) {
        case 1: if (!v) return false; break;
        case 2: if (v) return false; break;
        case 3: if (!(v > c.th)) return false; break;
        case 4: if (!(v < c.th)) return false; break;
        case 6: if (v !== c.th) return false; break;
        case 7: if (v === c.th) return false; break;
      }
    }
    return true;
  }
  _eval() {
    if (!this.layer || !this.state) return;
    const c = clipDef(this.state.clip); const nt = c ? this.time / c.length : 1;
    const tryList = [...(this.layer.any || []), ...(this.state.trans || [])];
    for (const t of tryList) {
      if (!t.to) continue;
      if (!t.conds.length && !t.exit) continue;
      if (t.exit && nt < (t.exitTime ?? 1)) continue;
      if (!this._condsOk(t.conds)) continue;
      if ((this.layer.any || []).includes(t) && this.state.name === t.to) continue;
      for (const cd of t.conds) if (cd.mode === 1 || cd.mode === 2) { const pd = this.ctrl.params.find((p) => p.name === cd.param); if (pd && pd.type === 9) this.params[cd.param] = false; }
      this._enter(t.to, t.fixed ? t.dur : t.dur * (c ? c.length : 1));
      return;
    }
  }
  LateUpdate() { this.tick(Time.deltaTime); }
  tick(dt) {
    if (!this.state || !this.bind) return;
    const s = this.state; const c = clipDef(s.clip);
    this.time += dt * this.speed * (s.speed ?? 1);
    if (c) {
      let t = this.time;
      if (c.loop) t = t % c.length; else t = Math.min(t, c.length);
      if (c.events && c.events.length) this._events(c, this.timePrev ?? 0, t);
      this.timePrev = t;
      const smp = (clip, tt, w) => { sampleClip(clip, tt, this.bind, w); if (this.human) sampleHumanoid(clip, tt, this, w); };
      if (this.prev && this.fade < this.fadeDur) {
        this.fade += dt; const pc = clipDef(this.prev.state.clip);
        this.prev.time += dt;
        if (pc) smp(pc, pc.loop ? this.prev.time % pc.length : Math.min(this.prev.time, pc.length), 1);
        smp(c, t, Math.min(1, this.fade / this.fadeDur));
      } else { this.prev = null; smp(c, t, 1); }
      // humanoid root motion (zombies walk forward through their animation)
      if (this.human && this.applyRootMotion && !(c.bake && c.bake[2]) && this._lastT !== undefined && this.rootMotionEnabled !== false) {
        const d = humanRootMotion(c, this._lastT, t, this);
        if (d && (d[0] || d[1])) {
          const tr = this.transform; const fw = tr.TransformDirection(new Vector3(d[0], 0, d[1]));
          this.deltaPosition = fw;
          const handler = this.gameObject.components.find((x) => x.OnAnimatorMove);
          if (handler) handler.OnAnimatorMove(fw); else tr.position = tr.position.add(fw);
        }
      }
      this._lastT = t;
      if (this.exposed) this._syncExposed();
    }
    this._eval();
  }
  _syncExposed() {
    const root = this.gameObject.obj;
    for (const [bone, exp] of this.exposed) {
      const m = _mExp.identity();
      for (let o = bone.obj; o && o !== root; o = o.parent) { o.updateMatrix(); m.premultiply(o.matrix); }
      m.decompose(exp.obj.position, exp.obj.quaternion, exp.obj.scale);
    }
  }
  _events(c, t0, t1) {
    for (const e of c.events) {
      if ((t1 >= t0 && e.t > t0 && e.t <= t1) || (t1 < t0 && (e.t > t0 || e.t <= t1))) {
        for (const comp of this.gameObject.components) if (comp[e.fn]) { try { comp[e.fn](e.s || e.f || e.i); } catch (err) { console.error(err); } }
      }
    }
  }
}

// Legacy Animation component (rare)
export class Animation extends Component {
  static typeName = 'Animation';
  Awake() { this.bind = bindingMap(this.gameObject); this.clips = (this.props.m_Animations || []).filter(Boolean); this.cur = null; this.t = 0; if (this.props.m_PlayAutomatically && this.props.m_Animation) this.Play(); }
  Play(name) { this.cur = name ? this.clips.find((c) => clipDef(c) && clipDef(c).name === name) : this.props.m_Animation || this.clips[0]; this.t = 0; }
  get isPlaying() { const c = clipDef(this.cur); return !!c && (c.loop || this.t < c.length); }
  Stop() { this.cur = null; }
  LateUpdate() { const c = clipDef(this.cur); if (!c) return; this.t += Time.deltaTime; sampleClip(c, c.loop ? this.t % c.length : Math.min(this.t, c.length), this.bind); }
}
