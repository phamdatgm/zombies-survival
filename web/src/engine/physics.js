// Rapier-backed physics with a Unity-space API (Rigidbody, Colliders, Physics.Raycast ...).
import RAPIER from '@dimforge/rapier3d-compat';
import * as THREE from 'three';
import { Component, Time, World, GameObject } from './core.js';
import { Vector3, Quaternion, U2T, T2U } from './umath.js';
import { getGeometrySync, loadGeometry } from './assets.js';

let R = null;
export async function initPhysics() { await RAPIER.init(); R = RAPIER; }

const _v = new THREE.Vector3(), _q = new THREE.Quaternion(), _s = new THREE.Vector3(), _m = new THREE.Matrix4(), _m2 = new THREE.Matrix4();
const toT = (v) => ({ x: v.x, y: v.y, z: -v.z });            // unity vec -> rapier vec
const toU = (v) => new Vector3(v.x, v.y, -v.z);               // rapier vec -> unity vec
const angToT = (v) => ({ x: -v.x, y: -v.y, z: v.z });          // axial vectors flip x,y
const angToU = (v) => new Vector3(-v.x, -v.y, v.z);

// ---------------------------------------------------------------- layers
export const Layers = {
  names: ['Default', 'TransparentFX', 'Ignore Raycast', '', 'Water', 'UI', '', '', 'car', 'wheel', 'ground', 'zombie', 'zombie_parts', 'dynamic_obstacle', 'dyn_obst_nofire', 'dyn_obst_trigger', 'baked', 'Default_NoProjector'],
  matrix: null, // matrix[i] = 32-bit mask of layers colliding with i
  NameToLayer(n) { return this.names.indexOf(n); },
  LayerToName(i) { return this.names[i] || ''; },
  GetMask(...names) { let m = 0; for (const n of names.flat()) { const i = this.NameToLayer(n); if (i >= 0) m |= 1 << i; } return m >>> 0; },
};
export const LayerMask = Layers;
const USED = [0, 1, 2, 4, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17];
const layerBit = {}; USED.forEach((l, i) => { layerBit[l] = 1 << i; });
export function setLayerMatrix(hex) {
  const m = [];
  for (let i = 0; i < 32; i++) m.push(parseInt(hex.substr(i * 8, 8).match(/../g).reverse().join(''), 16) >>> 0);
  Layers.matrix = m;
}
function groupsFor(layer) {
  const mem = layerBit[layer] || layerBit[0];
  let filter = 0;
  const row = Layers.matrix ? Layers.matrix[layer] : 0xffffffff;
  for (const l of USED) if (row & (1 << l)) filter |= layerBit[l];
  return ((mem & 0xffff) << 16) | (filter & 0xffff);
}
function maskAllows(mask, layer) { return mask === undefined || mask === -1 || ((mask >>> 0) & (1 << layer)) !== 0; }

// ---------------------------------------------------------------- physics world
export const PhysicsWorld = {
  world: null, eventQueue: null,
  colliders: new Map(), // handle -> Collider component
  bodies: new Set(),     // Rigidbody components
  statics: new Set(),    // Collider components owning a fixed body
  pairs: new Map(),      // active contact pairs key -> {a,b}
  pending: new Set(),
  create() {
    this.world = new R.World({ x: 0, y: -9.81, z: 0 });
    this.world.timestep = Time.fixedDeltaTime;
    this.world.integrationParameters.numSolverIterations = 6;
    this.eventQueue = new R.EventQueue(true);
    this.colliders.clear(); this.bodies.clear(); this.statics.clear(); this.pairs.clear(); this.pending.clear();
  },
  destroy() { if (this.world) { this.world.free(); this.world = null; } },
  register(c) { this.pending.add(c); },
  flush() {
    if (!this.pending.size) return;
    const list = [...this.pending]; this.pending.clear();
    // bodies first, then colliders
    for (const c of list) if (c instanceof Rigidbody && !c.destroyed && c.gameObject.activeInHierarchy) c._build();
    const dbg = /debugphys/.test(location.search);
    for (const c of list) if (c instanceof Collider && !c.destroyed && c.gameObject.activeInHierarchy) {
      if (dbg) console.log('build', c.constructor.name, c.gameObject.name, c.meshRef || '');
      const t0 = performance.now(); c._build(); const dt = performance.now() - t0;
      if (dt > 100) console.warn('slow collider', dt.toFixed(0) + 'ms', c.constructor.name, c.gameObject.name, c.meshRef || '');
    }
  },
  step(dt) {
    if (!this.world) return;
    this.flush();
    World.current.root.updateMatrixWorld(true);
    // pre-step: sync script-driven transforms into bodies
    for (const rb of this.bodies) rb._preStep();
    for (const c of [...this.statics]) c._syncStatic();
    this.world.timestep = dt;
    const _t0 = performance.now();
    this.world.step(this.eventQueue);
    const _dt = performance.now() - _t0;
    if (/debugphys/.test(location.search) && (_dt > 50 || (this._n = (this._n || 0) + 1) < 5)) console.log('step', _dt.toFixed(1) + 'ms', 'bodies', this.world.bodies.len(), 'colliders', this.world.colliders.len());
    for (const rb of this.bodies) rb._postStep();
    this._events();
  },
  _events() {
    const ev = [];
    this.eventQueue.drainCollisionEvents((h1, h2, started) => ev.push([h1, h2, started]));
    for (const [h1, h2, started] of ev) {
      const a = this.colliders.get(h1), b = this.colliders.get(h2);
      if (!a || !b) continue;
      const trig = a.isTrigger || b.isTrigger;
      const key = h1 < h2 ? h1 + ':' + h2 : h2 + ':' + h1;
      if (started) {
        if (trig) { this.pairs.set(key, { a, b, trig }); sendTrigger(a, b, 'OnTriggerEnter'); sendTrigger(b, a, 'OnTriggerEnter'); }
        else { this.pairs.set(key, { a, b, trig }); sendCollision(a, b, 'OnCollisionEnter'); sendCollision(b, a, 'OnCollisionEnter'); }
      } else {
        this.pairs.delete(key);
        if (trig) { sendTrigger(a, b, 'OnTriggerExit'); sendTrigger(b, a, 'OnTriggerExit'); }
        else { sendCollision(a, b, 'OnCollisionExit'); sendCollision(b, a, 'OnCollisionExit'); }
      }
    }
    for (const [key, p] of this.pairs) {
      if (p.a.destroyed || p.b.destroyed || !p.a._col || !p.b._col) { this.pairs.delete(key); continue; }
      if (p.trig) { sendTrigger(p.a, p.b, 'OnTriggerStay', true); sendTrigger(p.b, p.a, 'OnTriggerStay', true); }
      else { sendCollision(p.a, p.b, 'OnCollisionStay', true); sendCollision(p.b, p.a, 'OnCollisionStay', true); }
    }
  },
};

function receivers(col) {
  const out = [col.gameObject];
  const rb = col.attachedRigidbody;
  if (rb && rb.gameObject !== col.gameObject) out.push(rb.gameObject);
  return out;
}
function call(go, fn, arg) {
  if (!go.activeInHierarchy) return;
  for (const c of go.components) if (c[fn] && c._isEnabledNow !== false && !c.destroyed) { try { c[fn](arg); } catch (e) { console.error(c.constructor.name + '.' + fn, e); } }
}
function hasHandler(go, fn) { return go.components.some((c) => c[fn]); }
function sendTrigger(self, other, fn, stay) {
  for (const go of receivers(self)) if (!stay || hasHandler(go, fn)) call(go, fn, other);
}
function sendCollision(self, other, fn, stay) {
  const gos = receivers(self).filter((g) => hasHandler(g, fn));
  if (!gos.length) return;
  const col = new Collision(self, other);
  for (const go of gos) call(go, fn, col);
}

export class Collision {
  constructor(self, other) {
    this.collider = other; this.gameObject = other.gameObject; this.transform = other.transform;
    this.rigidbody = other.attachedRigidbody;
    const va = self.attachedRigidbody ? self.attachedRigidbody._preVel : Vector3.zero;
    const vb = other.attachedRigidbody ? other.attachedRigidbody._preVel : Vector3.zero;
    this.relativeVelocity = va.sub(vb);
    this._self = self;
  }
  get contacts() {
    if (this._contacts) return this._contacts;
    const out = [];
    const w = PhysicsWorld.world;
    if (this._self._col && this.collider._col) {
      w.contactPair(this._self._col, this.collider._col, (manifold, flipped) => {
        const n = manifold.normal(); let nn = toU(n); if (!flipped) nn = nn.neg();
        for (let i = 0; i < manifold.numSolverContacts(); i++) out.push({ point: toU(manifold.solverContactPoint(i)), normal: nn, otherCollider: this.collider, thisCollider: this._self });
        if (!manifold.numSolverContacts() && manifold.numContacts()) {
          const p = manifold.localContactPoint1(0); out.push({ point: this._self.transform.position, normal: nn, otherCollider: this.collider, thisCollider: this._self });
        }
      });
    }
    if (!out.length) out.push({ point: this._self.transform.position.add(this.collider.transform.position).mul(0.5), normal: Vector3.up, otherCollider: this.collider, thisCollider: this._self });
    this._contacts = out;
    return out;
  }
  GetContact(i) { return this.contacts[i]; }
  get contactCount() { return this.contacts.length; }
  get impulse() { return this.relativeVelocity.mul(this.rigidbody ? this.rigidbody.mass : 1); }
}

// ---------------------------------------------------------------- Rigidbody
export const ForceMode = { Force: 0, Impulse: 1, VelocityChange: 2, Acceleration: 5 };
export const RigidbodyConstraints = { None: 0, FreezePositionX: 2, FreezePositionY: 4, FreezePositionZ: 8, FreezeRotationX: 16, FreezeRotationY: 32, FreezeRotationZ: 64, FreezePosition: 14, FreezeRotation: 112, FreezeAll: 126 };

export class Rigidbody extends Component {
  static typeName = 'Rigidbody';
  constructor(go, p) {
    super(go, p);
    this._mass = p.m_Mass ?? 1; this._drag = p.m_Drag ?? 0; this._angularDrag = p.m_AngularDrag ?? 0.05;
    this._useGravity = p.m_UseGravity ?? 1; this._isKinematic = !!p.m_IsKinematic; this._constraints = p.m_Constraints || 0;
    this._com = p.m_CenterOfMass && !p.m_ImplicitCom ? Vector3.from([p.m_CenterOfMass[0], p.m_CenterOfMass[1], -p.m_CenterOfMass[2]]) : null;
    this._enabled = true;
    this.body = null; this.colliders = []; this._preVel = Vector3.zero; this.maxAngularVelocity = 7;
    this.detectCollisions = true;
    this.interpolation = p.m_Interpolate || 0; this.sleepThreshold = 0.005; this.solverIterations = 6;
    this.collisionDetectionMode = p.m_CollisionDetection || 0;
    PhysicsWorld.register(this);
  }
  _build() {
    if (this.body || !PhysicsWorld.world) return;
    const obj = this.gameObject.obj; obj.updateWorldMatrix(true, false); obj.matrixWorld.decompose(_v, _q, _s);
    const desc = this._isKinematic ? R.RigidBodyDesc.kinematicPositionBased() : R.RigidBodyDesc.dynamic();
    desc.setTranslation(_v.x, _v.y, _v.z).setRotation({ x: _q.x, y: _q.y, z: _q.z, w: _q.w })
      .setLinearDamping(this._drag).setAngularDamping(this._angularDrag).setGravityScale(this._useGravity ? 1 : 0)
      .setCcdEnabled(this.collisionDetectionMode > 0);
    this.body = PhysicsWorld.world.createRigidBody(desc);
    this.body.userData = this;
    this._applyConstraints();
    PhysicsWorld.bodies.add(this);
    // attach colliders already built as statics in subtree
    for (const c of this.gameObject.GetComponentsInChildren(Collider, true)) if (c.attachedRigidbody === this) c._rebuild();
  }
  _applyConstraints() {
    if (!this.body) return;
    const c = this._constraints;
    this.body.setEnabledTranslations(!(c & 2), !(c & 4), !(c & 8), true);
    this.body.setEnabledRotations(!(c & 16), !(c & 32), !(c & 64), true);
  }
  _updateMass() {
    if (!this.body) return;
    const cols = this.colliders.filter((c) => c._col && !c.isTrigger);
    let vol = 0; for (const c of cols) vol += c._volume || 1e-3;
    for (const c of this.colliders) if (c._col) c._col.setDensity(c.isTrigger ? 0 : this._mass / Math.max(vol, 1e-6));
    if (this._com) {
      // explicit centre of mass: use additional mass properties instead of density
      for (const c of this.colliders) if (c._col) c._col.setDensity(0);
      const r = Math.max(0.3, Math.cbrt(vol || 1) * 0.5); const I = this._mass * r * r * 0.4;
      this.body.setAdditionalMassProperties(this._mass, toT(this._com), { x: I, y: I, z: I }, { x: 0, y: 0, z: 0, w: 1 }, true);
    }
  }
  _preStep() {
    if (!this.body) return;
    const go = this.gameObject;
    if (this._isKinematic) {
      go.obj.updateWorldMatrix(true, false); go.obj.matrixWorld.decompose(_v, _q, _s);
      this.body.setNextKinematicTranslation(_v); this.body.setNextKinematicRotation(_q);
    } else if (go._physicsDirty) {
      go.obj.updateWorldMatrix(true, false); go.obj.matrixWorld.decompose(_v, _q, _s);
      this.body.setTranslation(_v, true); this.body.setRotation(_q, true);
    }
    go._physicsDirty = false;
    this._preVel = toU(this.body.linvel());
    // clamp angular speed like Unity maxAngularVelocity
    const av = this.body.angvel(); const m = Math.hypot(av.x, av.y, av.z);
    if (m > this.maxAngularVelocity) { const k = this.maxAngularVelocity / m; this.body.setAngvel({ x: av.x * k, y: av.y * k, z: av.z * k }, true); }
  }
  _postStep() {
    if (!this.body || this._isKinematic) return;
    const go = this.gameObject; const obj = go.obj;
    const t = this.body.translation(), r = this.body.rotation();
    _v.set(t.x, t.y, t.z); _q.set(r.x, r.y, r.z, r.w);
    const p = obj.parent;
    if (p && p !== go.scene.root) {
      p.updateWorldMatrix(true, false);
      _m.compose(_v, _q, obj.getWorldScale(_s)); _m2.copy(p.matrixWorld).invert(); _m.premultiply(_m2);
      const sc = obj.scale.clone(); _m.decompose(obj.position, obj.quaternion, _s); obj.scale.copy(sc);
    } else { obj.position.copy(_v); obj.quaternion.copy(_q); }
    obj.updateMatrixWorld(true);
    go._physicsDirty = false;
  }
  _onActiveChanged(a) { super._onActiveChanged(a); if (this.body) this.body.setEnabled(a); else if (a) PhysicsWorld.register(this); }
  _dispose() {
    if (this.body && PhysicsWorld.world) { for (const c of this.colliders) c._unbuild(); PhysicsWorld.world.removeRigidBody(this.body); }
    PhysicsWorld.bodies.delete(this); this.body = null;
  }
  // --- Unity API (Unity space)
  get mass() { return this._mass; } set mass(v) { this._mass = v; this._updateMass(); }
  get drag() { return this._drag; } set drag(v) { this._drag = v; this.body && this.body.setLinearDamping(v); }
  get angularDrag() { return this._angularDrag; } set angularDrag(v) { this._angularDrag = v; this.body && this.body.setAngularDamping(v); }
  get useGravity() { return !!this._useGravity; } set useGravity(v) { this._useGravity = v; this.body && this.body.setGravityScale(v ? 1 : 0, true); }
  get isKinematic() { return this._isKinematic; }
  set isKinematic(v) {
    v = !!v; if (v === this._isKinematic) return; this._isKinematic = v;
    if (this.body) this.body.setBodyType(v ? R.RigidBodyType.KinematicPositionBased : R.RigidBodyType.Dynamic, true);
  }
  get constraints() { return this._constraints; } set constraints(v) { this._constraints = v; this._applyConstraints(); }
  get velocity() { return this.body ? toU(this.body.linvel()) : Vector3.zero; }
  set velocity(v) { this.flushBuild(); this.body && this.body.setLinvel(toT(v), true); }
  get angularVelocity() { return this.body ? angToU(this.body.angvel()) : Vector3.zero; }
  set angularVelocity(v) { this.flushBuild(); this.body && this.body.setAngvel(angToT(v), true); }
  get position() { return this.body ? toU(this.body.translation()) : this.transform.position; }
  set position(v) { this.transform.position = v; if (this.body) this.body.setTranslation(toT(v), true); }
  get rotation() { if (!this.body) return this.transform.rotation; const r = this.body.rotation(); return new Quaternion(-r.x, -r.y, r.z, r.w); }
  set rotation(q) { this.transform.rotation = q; if (this.body) this.body.setRotation({ x: -q.x, y: -q.y, z: q.z, w: q.w }, true); }
  get centerOfMass() { return this._com || Vector3.zero; }
  set centerOfMass(v) { this._com = v.clone(); this._updateMass(); }
  get worldCenterOfMass() { return this.body ? toU(this.body.worldCom()) : this.transform.position; }
  flushBuild() { if (!this.body && PhysicsWorld.pending.has(this)) PhysicsWorld.flush(); }
  MovePosition(v) { this.flushBuild(); if (!this.body) return; if (this._isKinematic) this.body.setNextKinematicTranslation(toT(v)); else this.body.setTranslation(toT(v), true); }
  MoveRotation(q) { this.flushBuild(); if (!this.body) return; const r = { x: -q.x, y: -q.y, z: q.z, w: q.w }; if (this._isKinematic) this.body.setNextKinematicRotation(r); else this.body.setRotation(r, true); }
  _imp(f, mode) {
    const dt = Time.fixedDeltaTime;
    switch (mode ?? 0) {
      case 0: return f.mul(dt);
      case 5: return f.mul(dt * this._mass);
      case 1: return f;
      case 2: return f.mul(this._mass);
    }
    return f;
  }
  AddForce(f, mode = 0) { if (typeof f === 'number') { f = new Vector3(arguments[0], arguments[1], arguments[2]); mode = arguments[3] ?? 0; } this.flushBuild(); if (!this.body || this._isKinematic) return; this.body.applyImpulse(toT(this._imp(f, mode)), true); }
  AddRelativeForce(f, mode = 0) { this.AddForce(this.rotation.rotate(f), mode); }
  AddForceAtPosition(f, pos, mode = 0) { this.flushBuild(); if (!this.body || this._isKinematic) return; this.body.applyImpulseAtPoint(toT(this._imp(f, mode)), toT(pos), true); }
  AddTorque(t, mode = 0) {
    if (typeof t === 'number') { t = new Vector3(arguments[0], arguments[1], arguments[2]); mode = arguments[3] ?? 0; }
    this.flushBuild(); if (!this.body || this._isKinematic) return;
    const dt = Time.fixedDeltaTime;
    if (mode === 2 || mode === 5) { // velocity-change / acceleration: ignore inertia
      const av = this.angularVelocity; this.angularVelocity = av.add(mode === 2 ? t : t.mul(dt)); return;
    }
    this.body.applyTorqueImpulse(angToT(mode === 1 ? t : t.mul(dt)), true);
  }
  AddRelativeTorque(t, mode = 0) { this.AddTorque(this.rotation.rotate(t), mode); }
  AddExplosionForce(force, pos, radius, upwards = 0, mode = 0) {
    const c = this.worldCenterOfMass; let d = c.sub(pos); const dist = d.magnitude; if (dist > radius && radius > 0) return;
    if (upwards) d = d.add(new Vector3(0, upwards, 0));
    const k = radius > 0 ? 1 - dist / radius : 1;
    this.AddForceAtPosition(d.normalized.mul(force * k), c, mode);
  }
  GetPointVelocity(p) { if (!this.body) return Vector3.zero; const v = this.velocity, w = this.angularVelocity, r = p.sub(this.worldCenterOfMass); return v.add(Vector3.Cross(w, r)); }
  GetRelativePointVelocity(p) { return this.GetPointVelocity(this.transform.TransformPoint(p)); }
  Sleep() { this.body && this.body.sleep(); }
  WakeUp() { this.body && this.body.wakeUp(); }
  IsSleeping() { return this.body ? this.body.isSleeping() : false; }
  ResetInertiaTensor() { }
  get inertiaTensor() { return Vector3.one; }
}

// ---------------------------------------------------------------- Colliders
export class Collider extends Component {
  constructor(go, p) {
    super(go, p);
    this._isTrigger = !!p.m_IsTrigger;
    this.material = p.m_Material || null;
    this._col = null; this._body = null; this._volume = 0; this._rb = null;
    this._lastMat = new Float32Array(16);
    PhysicsWorld.register(this);
  }
  get attachedRigidbody() {
    let g = this.gameObject;
    while (g) { const rb = g.components.find((c) => c instanceof Rigidbody && !c.destroyed); if (rb) return rb; g = g.transform._parent && g.transform._parent.gameObject; }
    return null;
  }
  get bounds() {
    const b = new THREE.Box3();
    this.gameObject.obj.updateWorldMatrix(true, false);
    const ext = this._localBox();
    b.copy(ext).applyMatrix4(this.gameObject.obj.matrixWorld);
    const c = new THREE.Vector3(); b.getCenter(c); const sz = new THREE.Vector3(); b.getSize(sz);
    return { center: T2U.pos(c), size: new Vector3(sz.x, sz.y, sz.z), extents: new Vector3(sz.x / 2, sz.y / 2, sz.z / 2), min: T2U.pos(b.min), max: T2U.pos(b.max) };
  }
  _localBox() { return new THREE.Box3(new THREE.Vector3(-0.5, -0.5, -0.5), new THREE.Vector3(0.5, 0.5, 0.5)); }
  _shape(scale) { return null; }
  _build() {
    if (this._col || !PhysicsWorld.world || this.destroyed) return;
    const W = PhysicsWorld.world;
    const rb = this.attachedRigidbody;
    if (rb && !rb.body) { rb._build(); if (this._col) return; }
    const obj = this.gameObject.obj; obj.updateWorldMatrix(true, false);
    let rel;
    if (rb && rb.body) {
      rb.gameObject.obj.updateWorldMatrix(true, false);
      rb.gameObject.obj.matrixWorld.decompose(_v, _q, _s);
      _m2.compose(_v, _q, new THREE.Vector3(1, 1, 1)).invert();
      rel = new THREE.Matrix4().multiplyMatrices(_m2, obj.matrixWorld);
    } else rel = obj.matrixWorld.clone();
    const pos = new THREE.Vector3(), rot = new THREE.Quaternion(), scl = new THREE.Vector3();
    rel.decompose(pos, rot, scl);
    const fin = (v) => Number.isFinite(v.x) && Number.isFinite(v.y) && Number.isFinite(v.z);
    if (!fin(pos) || !fin(scl) || !Number.isFinite(rot.w)) { console.warn('collider skipped (non-finite transform)', this.gameObject.name); return; }
    if (Math.abs(scl.x) < 1e-6 || Math.abs(scl.y) < 1e-6 || Math.abs(scl.z) < 1e-6) { return; } // zero-scale: Unity ignores it too
    const desc = this._shape(new THREE.Vector3(Math.abs(scl.x), Math.abs(scl.y), Math.abs(scl.z)), !rb);
    if (!desc) return;
    const centerOff = (desc._center || new THREE.Vector3()).clone();
    centerOff.applyQuaternion(rot);
    this._axisRot = desc._axisRot || null;
    const frot = this._axisRot ? rot.clone().multiply(this._axisRot) : rot;
    desc.setSensor(this.isTrigger);
    desc.setCollisionGroups(groupsFor(this.gameObject.layer));
    desc.setActiveEvents(R.ActiveEvents.COLLISION_EVENTS);
    if (this.isTrigger) desc.setActiveCollisionTypes(R.ActiveCollisionTypes.DEFAULT | R.ActiveCollisionTypes.KINEMATIC_FIXED | R.ActiveCollisionTypes.KINEMATIC_KINEMATIC);
    else desc.setActiveCollisionTypes(R.ActiveCollisionTypes.DEFAULT | R.ActiveCollisionTypes.KINEMATIC_FIXED);
    const pm = this._physMat();
    desc.setFriction(pm.friction).setRestitution(pm.bounce);
    if (pm.fcomb !== undefined) desc.setFrictionCombineRule(pm.fcomb);
    desc.setDensity(0);
    if (rb && rb.body) {
      desc.setTranslation(pos.x + centerOff.x, pos.y + centerOff.y, pos.z + centerOff.z).setRotation(frot);
      this._col = W.createCollider(desc, rb.body);
      this._rb = rb; rb.colliders.push(this); rb._updateMass();
    } else {
      const bd = R.RigidBodyDesc.fixed().setTranslation(pos.x + centerOff.x, pos.y + centerOff.y, pos.z + centerOff.z).setRotation(frot);
      this._body = W.createRigidBody(bd);
      this._col = W.createCollider(desc, this._body);
      this._lastMat.set(obj.matrixWorld.elements);
      this._centerOff = desc._center || new THREE.Vector3();
      PhysicsWorld.statics.add(this);
    }
    this._col.setEnabled(this._enabled && this.gameObject.activeInHierarchy);
    PhysicsWorld.colliders.set(this._col.handle, this);
  }
  _physMat() {
    if (this.material && /CarBody/.test(this.material)) return { friction: 0.35, bounce: 0.05, fcomb: R.CoefficientCombineRule.Average };
    return { friction: 0.6, bounce: 0 };
  }
  _syncStatic() {
    if (!this._body) return;
    const e = this.gameObject.obj.matrixWorld.elements; const l = this._lastMat;
    let same = true; for (let i = 0; i < 16; i++) if (Math.abs(e[i] - l[i]) > 1e-5) { same = false; break; }
    if (same) return;
    this._lastMat.set(e);
    const s = new THREE.Vector3(); this.gameObject.obj.matrixWorld.decompose(_v, _q, s);
    if (Math.abs(Math.abs(s.x) - this._builtScale.x) + Math.abs(Math.abs(s.y) - this._builtScale.y) + Math.abs(Math.abs(s.z) - this._builtScale.z) > 1e-3) { this._rebuild(); return; }
    const off = this._centerOff.clone().applyQuaternion(_q);
    this._body.setTranslation({ x: _v.x + off.x, y: _v.y + off.y, z: _v.z + off.z }, true); this._body.setRotation(this._axisRot ? _q.clone().multiply(this._axisRot) : _q, true);
  }
  _unbuild() {
    const W = PhysicsWorld.world;
    if (this._col && W) {
      PhysicsWorld.colliders.delete(this._col.handle);
      if (this._body) W.removeRigidBody(this._body); else if (this._rb && this._rb.body) W.removeCollider(this._col, true);
    }
    if (this._rb) { const a = this._rb.colliders; const i = a.indexOf(this); if (i >= 0) a.splice(i, 1); }
    PhysicsWorld.statics.delete(this);
    this._col = null; this._body = null; this._rb = null;
  }
  _rebuild() { this._unbuild(); this._build(); }
  _onActiveChanged(a) {
    super._onActiveChanged(a);
    if (this._col) {
      // re-parented under a different rigidbody? rebuild
      if (a && this.attachedRigidbody !== this._rb && (this._rb || this.attachedRigidbody)) { this._rebuild(); return; }
      this._col.setEnabled(a && this._enabled);
      if (a && this._body) { this._lastMat.fill(0); }
    } else if (a) PhysicsWorld.register(this);
  }
  get enabled() { return this._enabled; }
  set enabled(v) { this._enabled = !!v; if (this._col) this._col.setEnabled(this._enabled && this.gameObject.activeInHierarchy); }
  get isTrigger() { return this._isTrigger; }
  set isTrigger(v) {
    v = !!v; if (v === this._isTrigger) return; this._isTrigger = v;
    if (this._col) { this._col.setSensor(v); if (this._rb) this._rb._updateMass(); }
  }
  setTriggerRuntime(v) { this.isTrigger = v; }
  _dispose() { this._unbuild(); PhysicsWorld.pending.delete(this); }
  ClosestPoint(p) {
    if (!this._col) return p;
    const r = this._col.projectPoint ? null : null;
    const b = this.bounds; return new Vector3(Math.min(Math.max(p.x, b.min.x), b.max.x), Math.min(Math.max(p.y, b.min.y), b.max.y), Math.min(Math.max(p.z, b.min.z), b.max.z));
  }
}

export class BoxCollider extends Collider {
  static typeName = 'BoxCollider';
  constructor(go, p) { super(go, p); this._c = p.m_Center ? new THREE.Vector3(...p.m_Center) : new THREE.Vector3(); this._sz = p.m_Size ? new THREE.Vector3(...p.m_Size) : new THREE.Vector3(1, 1, 1); }
  _localBox() { const h = this._sz.clone().multiplyScalar(0.5); return new THREE.Box3(this._c.clone().sub(h), this._c.clone().add(h)); }
  _shape(s) {
    this._builtScale = s.clone();
    const hx = Math.max(1e-3, this._sz.x * s.x / 2), hy = Math.max(1e-3, this._sz.y * s.y / 2), hz = Math.max(1e-3, this._sz.z * s.z / 2);
    const d = R.ColliderDesc.cuboid(hx, hy, hz); d._center = this._c.clone().multiply(s); this._volume = 8 * hx * hy * hz; return d;
  }
}
export class SphereCollider extends Collider {
  static typeName = 'SphereCollider';
  constructor(go, p) { super(go, p); this._c = p.m_Center ? new THREE.Vector3(...p.m_Center) : new THREE.Vector3(); this._r = p.m_Radius ?? 0.5; }
  _localBox() { const r = this._r; return new THREE.Box3(this._c.clone().subScalar(r), this._c.clone().addScalar(r)); }
  _shape(s) { this._builtScale = s.clone(); const r = Math.max(1e-3, this._r * Math.max(s.x, s.y, s.z)); const d = R.ColliderDesc.ball(r); d._center = this._c.clone().multiply(s); this._volume = 4.19 * r * r * r; return d; }
}
export class CapsuleCollider extends Collider {
  static typeName = 'CapsuleCollider';
  constructor(go, p) { super(go, p); this._c = p.m_Center ? new THREE.Vector3(...p.m_Center) : new THREE.Vector3(); this._r = p.m_Radius ?? 0.5; this._h = p.m_Height ?? 2; this.direction = p.m_Direction ?? 1; }
  _localBox() { const r = this._r, h = Math.max(this._h / 2, r); const e = new THREE.Vector3(r, r, r); e.setComponent(this.direction, h); return new THREE.Box3(this._c.clone().sub(e), this._c.clone().add(e)); }
  _shape(s) {
    this._builtScale = s.clone();
    const ax = this.direction; const comps = [s.x, s.y, s.z]; const along = comps[ax]; const across = Math.max(...comps.filter((_, i) => i !== ax));
    const r = Math.max(1e-3, this._r * across); const half = Math.max(0, this._h * along / 2 - r);
    const d = R.ColliderDesc.capsule(half, r);
    if (ax === 0) d._axisRot = new THREE.Quaternion(0, 0, Math.SQRT1_2, Math.SQRT1_2);
    if (ax === 2) d._axisRot = new THREE.Quaternion(Math.SQRT1_2, 0, 0, Math.SQRT1_2);
    d._center = this._c.clone().multiply(s); this._volume = Math.PI * r * r * (2 * half + 4 / 3 * r); return d;
  }
}
export class MeshCollider extends Collider {
  static typeName = 'MeshCollider';
  constructor(go, p) { super(go, p); this.meshRef = p.m_Mesh; this.convex = !!p.m_Convex; if (this.meshRef) loadGeometry(this.meshRef); }
  _localBox() { const g = getGeometrySync(this.meshRef); return g && g.boundingBox ? g.boundingBox.clone() : super._localBox(); }
  get sharedMesh() { return this.meshRef; }
  set sharedMesh(v) { this.meshRef = v; if (v) loadGeometry(v).then(() => this._rebuild()); }
  _shape(s, isStatic) {
    this._builtScale = s.clone();
    const g = getGeometrySync(this.meshRef);
    if (!g) { if (this.meshRef) loadGeometry(this.meshRef).then(() => { if (!this.destroyed) this._rebuild(); }); return null; }
    const src = g.attributes.position.array; const v = new Float32Array(src.length);
    for (let i = 0; i < src.length; i += 3) { v[i] = src[i] * s.x; v[i + 1] = src[i + 1] * s.y; v[i + 2] = src[i + 2] * s.z; }
    g.computeBoundingBox(); const sz = new THREE.Vector3(); g.boundingBox.getSize(sz); this._volume = Math.max(1e-3, sz.x * s.x * sz.y * s.y * sz.z * s.z);
    if (this.convex || (!isStatic && !this.isTrigger)) {
      const d = R.ColliderDesc.convexHull(v); if (d) return d;
    }
    const idx = g.index ? new Uint32Array(g.index.array) : null;
    if (!idx) return R.ColliderDesc.convexHull(v);
    if (this.isTrigger) return R.ColliderDesc.convexHull(v) || R.ColliderDesc.trimesh(v, idx);
    return R.ColliderDesc.trimesh(v, idx);
  }
}

// ---------------------------------------------------------------- queries (Unity space)
export class RaycastHit {
  constructor(col, point, normal, distance) { this.collider = col; this.point = point; this.normal = normal; this.distance = distance; }
  get transform() { return this.collider.transform; }
  get gameObject() { return this.collider.gameObject; }
  get rigidbody() { return this.collider.attachedRigidbody; }
}

function predicate(mask, hitTriggers = true) {
  return (rc) => {
    const c = PhysicsWorld.colliders.get(rc.handle);
    if (!c || !c.gameObject.activeInHierarchy) return false;
    if (c.isTrigger && !hitTriggers) return false;
    if (c.gameObject.layer === 2 && (mask === undefined || mask === -1)) return false; // Ignore Raycast
    return maskAllows(mask, c.gameObject.layer);
  };
}

export const Physics = {
  gravity: new Vector3(0, -9.81, 0),
  queriesHitTriggers: true,
  DefaultRaycastLayers: -5,
  Raycast(origin, dir, maxDistance = Infinity, layerMask = -5, qti = 0) {
    if (origin && origin.origin) { layerMask = maxDistance === Infinity ? -5 : layerMask; maxDistance = dir ?? Infinity; dir = origin.direction; origin = origin.origin; }
    const W = PhysicsWorld.world; if (!W) return null;
    PhysicsWorld.flush();
    const d = dir.normalized; if (d.sqrMagnitude === 0) return null;
    const ray = new R.Ray(toT(origin), toT(d));
    const hitTriggers = qti === 1 ? false : qti === 2 ? true : this.queriesHitTriggers;
    const h = W.castRayAndGetNormal(ray, Math.min(maxDistance, 1e6), true, undefined, undefined, undefined, undefined, predicate(layerMask, hitTriggers));
    if (!h) return null;
    const c = PhysicsWorld.colliders.get(h.collider.handle);
    const p = origin.add(d.mul(h.timeOfImpact));
    return new RaycastHit(c, p, toU(h.normal), h.timeOfImpact);
  },
  RaycastAll(origin, dir, maxDistance = Infinity, layerMask = -5, qti = 0) {
    const W = PhysicsWorld.world; if (!W) return [];
    PhysicsWorld.flush();
    const d = dir.normalized; const ray = new R.Ray(toT(origin), toT(d)); const out = [];
    const hitTriggers = qti === 1 ? false : qti === 2 ? true : this.queriesHitTriggers;
    W.intersectionsWithRay(ray, Math.min(maxDistance, 1e6), true, (h) => {
      const c = PhysicsWorld.colliders.get(h.collider.handle);
      if (c) out.push(new RaycastHit(c, origin.add(d.mul(h.timeOfImpact)), toU(h.normal), h.timeOfImpact));
      return true;
    }, undefined, undefined, undefined, undefined, predicate(layerMask, hitTriggers));
    return out;
  },
  Linecast(a, b, layerMask = -5) { const d = b.sub(a); return this.Raycast(a, d, d.magnitude, layerMask); },
  SphereCast(origin, radius, dir, maxDistance = Infinity, layerMask = -5) {
    const W = PhysicsWorld.world; if (!W) return null;
    const d = dir.normalized; const shape = new R.Ball(radius);
    const h = W.castShape(toT(origin), { x: 0, y: 0, z: 0, w: 1 }, toT(d), shape, 0, Math.min(maxDistance, 1e6), true, undefined, undefined, undefined, undefined, predicate(layerMask));
    if (!h) return null;
    const c = PhysicsWorld.colliders.get(h.collider.handle);
    return new RaycastHit(c, toU(h.witness1), toU(h.normal1).neg(), h.time_of_impact ?? h.toi ?? 0);
  },
  OverlapSphere(center, radius, layerMask = -5) {
    const W = PhysicsWorld.world; if (!W) return [];
    PhysicsWorld.flush();
    const out = []; const shape = new R.Ball(radius);
    W.intersectionsWithShape(toT(center), { x: 0, y: 0, z: 0, w: 1 }, shape, (rc) => { const c = PhysicsWorld.colliders.get(rc.handle); if (c) out.push(c); return true; }, undefined, undefined, undefined, undefined, predicate(layerMask));
    return out;
  },
  OverlapBox(center, halfExt, rot, layerMask = -5) {
    const W = PhysicsWorld.world; if (!W) return [];
    const out = []; const shape = new R.Cuboid(halfExt.x, halfExt.y, halfExt.z);
    const q = rot || Quaternion.identity;
    W.intersectionsWithShape(toT(center), { x: -q.x, y: -q.y, z: q.z, w: q.w }, shape, (rc) => { const c = PhysicsWorld.colliders.get(rc.handle); if (c) out.push(c); return true; }, undefined, undefined, undefined, undefined, predicate(layerMask));
    return out;
  },
  IgnoreCollision(a, b, ignore = true) {
    // approximated through a per-collider ignore set checked in collision groups is not possible; use solver groups trick
    if (!a._ignore) a._ignore = new Set(); if (!b._ignore) b._ignore = new Set();
    if (ignore) { a._ignore.add(b); b._ignore.add(a); } else { a._ignore.delete(b); b._ignore.delete(a); }
  },
  IgnoreLayerCollision(l1, l2, ignore = true) {
    if (!Layers.matrix) return;
    if (ignore) { Layers.matrix[l1] &= ~(1 << l2); Layers.matrix[l2] &= ~(1 << l1); } else { Layers.matrix[l1] |= 1 << l2; Layers.matrix[l2] |= 1 << l1; }
    for (const c of PhysicsWorld.colliders.values()) if (c._col && (c.gameObject.layer === l1 || c.gameObject.layer === l2)) c._col.setCollisionGroups(groupsFor(c.gameObject.layer));
  },
  GetIgnoreLayerCollision(l1, l2) { return Layers.matrix ? !(Layers.matrix[l1] & (1 << l2)) : false; },
  refreshLayer(go) { for (const c of go.components) if (c instanceof Collider && c._col) c._col.setCollisionGroups(groupsFor(go.layer)); },
};

// Unity-space accessors for collider shape params; changing them rebuilds the Rapier collider
function _defShape(Cls, names) {
  for (const n of names) {
    const k = { center: '_c', size: '_sz', radius: '_r', height: '_h' }[n];
    Object.defineProperty(Cls.prototype, n, {
      get() { const v = this[k]; return v && v.isVector3 ? new Vector3(v.x, v.y, n === 'center' ? -v.z : v.z) : v; },
      set(v) {
        if (n === 'center') this[k] = new THREE.Vector3(v.x, v.y, -v.z);
        else if (n === 'size') this[k] = new THREE.Vector3(v.x, v.y, v.z);
        else this[k] = v;
        if (this._col) this._rebuild();
      },
    });
  }
}
_defShape(BoxCollider, ['center', 'size']);
_defShape(SphereCollider, ['center', 'radius']);
_defShape(CapsuleCollider, ['center', 'radius', 'height']);
GameObject.layerHooks.push((go) => { for (const c of go.components) if (c instanceof Collider && c._col) c._col.setCollisionGroups(groupsFor(go.layer)); });
