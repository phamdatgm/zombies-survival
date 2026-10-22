// ReadySprings: generic damped springs used by CarController (body wobble, X-lock, yaw lock).
// Spring<T> (fully-shared generic in IL2CPP; decompiled from Spring<__Il2CppFullySharedGenericType> @0xc5b938..0xc5c63c),
// SpringFloat, SpringVec3, SpringDirVec3, SpringAngVec3, SpringParams, SerializableSprings (+ nested), DDOBJBEDGLL.
import { Vector3, Mathf, Time } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';
import { G } from '../G.js';

// struct SpringParams(force, dampingRatio)
export class SpringParams {
  constructor(GFDIKJLIBPM = 0, AAOBMKOCGAI = 0) {
    this.force = GFDIKJLIBPM;          // 0x0
    this.dampingRatio = AAOBMKOCGAI;   // 0x4
  }
}
G.SpringParams = SpringParams;

// abstract class Spring<T>
// Field index order (fully-shared generic offsets /0x20): force, damping, enabled, desValue, _currentVel, impulseSum,
// externalVelUsed, _dampingRatio, isInit, zero, delta, acceleration
export class Spring {
  constructor() {
    this.force = 100;          // .ctor: 100
    this.damping = 25;         // .ctor: 25
    this.enabled = true;       // .ctor: true
    this.desValue = this._zero();
    this._currentVel = this._zero();
    this.impulseSum = this._zero();
    this.externalVelUsed = false;
    this._dampingRatio = 0;
    this.isInit = false;
    this.zero = this._zero();
    this.delta = this._zero();
    this.acceleration = this._zero();
  }
  // default(T)
  _zero() { return 0; }

  // apply SpringParams: force + damping ratio (damping recomputed only if the ratio changed)
  KOGLNCIFCJK(GCAIEKNPOIC) {
    this.force = GCAIEKNPOIC.force;
    if (this._dampingRatio === GCAIEKNPOIC.dampingRatio) return;
    this._dampingRatio = GCAIEKNPOIC.dampingRatio;
    this.damping = (Math.sqrt(this.force) + Math.sqrt(this.force)) * Math.max(0, this._dampingRatio);
  }
  // recompute damping from the current damping ratio
  ABKCOINIEGL() {
    this.damping = (Math.sqrt(this.force) + Math.sqrt(this.force)) * Math.max(0, this._dampingRatio);
  }
  // add an impulse to the target (consumed by the next JGMENGJBLAO)
  LGLBDMEEIJC(PKPMGEFLMLG) { this.impulseSum = this.DLEHLHGOOKB(this.impulseSum, PKPMGEFLMLG); }

  // abstract ops (overridden by SpringFloat/SpringVec3)
  DLEHLHGOOKB(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO + CEECPPMLPAE; } // add
  CFAJGEJFJDD(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO * CEECPPMLPAE; } // scale
  JLDDFKPHBAB(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO - CEECPPMLPAE; } // sub
  // virtual: target value = desValue + impulseSum
  JMBHHPLAMCB() { return this.DLEHLHGOOKB(this.desValue, this.impulseSum); }
  // virtual: difference target - current
  KMLFNMGOELP(KFCCMCBGKEA, MOEHNCAFHCO) { return this.JLDDFKPHBAB(KFCCMCBGKEA, MOEHNCAFHCO); }

  // step the spring for the current value; returns the increment to add this frame
  // (velocity * dt, or the velocity change when currentVel was set externally this frame)
  JGMENGJBLAO(MOEHNCAFHCO) {
    if (!this.isInit) { this.zero = this._zero(); this.isInit = true; }
    if (!this.enabled) return this.zero;
    const target = this.JMBHHPLAMCB();
    this.delta = this.KMLFNMGOELP(target, MOEHNCAFHCO);
    const a = this.CFAJGEJFJDD(this.delta, this.force);
    const b = this.CFAJGEJFJDD(this._currentVel, this.damping);
    this.acceleration = this.CFAJGEJFJDD(this.JLDDFKPHBAB(a, b), Time.deltaTime);
    if (!this.externalVelUsed) this._currentVel = this.DLEHLHGOOKB(this._currentVel, this.acceleration);
    const res = !this.externalVelUsed ? this.CFAJGEJFJDD(this._currentVel, Time.deltaTime) : this.acceleration;
    this.impulseSum = this.zero;
    this.externalVelUsed = false;
    return res;
  }
  set dampingRatio(ALLBGCHDGNC) {
    if (this._dampingRatio === ALLBGCHDGNC) return;
    this._dampingRatio = ALLBGCHDGNC;
    this.damping = (Math.sqrt(this.force) + Math.sqrt(this.force)) * Math.max(0, this._dampingRatio);
  }
  get dampingRatio() { return this._dampingRatio; }
  set currentVel(ALLBGCHDGNC) { this._currentVel = ALLBGCHDGNC; this.externalVelUsed = true; }
  get currentVel() { return this._currentVel; }
}
G.Spring = Spring;

export class SpringFloat extends Spring {
  _zero() { return 0; }
  JLDDFKPHBAB(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO - CEECPPMLPAE; }
  DLEHLHGOOKB(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO + CEECPPMLPAE; }
  CFAJGEJFJDD(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO * CEECPPMLPAE; }
}
G.SpringFloat = SpringFloat;

export class SpringVec3 extends Spring {
  _zero() { return Vector3.zero; }
  DLEHLHGOOKB(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO.add(CEECPPMLPAE); }
  JLDDFKPHBAB(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO.sub(CEECPPMLPAE); }
  CFAJGEJFJDD(INHGHFGNDIO, CEECPPMLPAE) { return INHGHFGNDIO.mul(CEECPPMLPAE); }
}
G.SpringVec3 = SpringVec3;

// direction spring: difference = Cross(current, target) (rotation axis towards the target direction)
export class SpringDirVec3 extends SpringVec3 {
  KMLFNMGOELP(KFCCMCBGKEA, MOEHNCAFHCO) { return Vector3.Cross(MOEHNCAFHCO, KFCCMCBGKEA); }
}
G.SpringDirVec3 = SpringDirVec3;

// euler-angle spring: per-component Mathf.DeltaAngle(current, target), optionally in radians
export class SpringAngVec3 extends SpringVec3 {
  constructor() { super(); this.radianOutput = false; } // 0x70
  KMLFNMGOELP(KFCCMCBGKEA, MOEHNCAFHCO) {
    const d = (t, c) => { let r = Mathf.Repeat(t - c, 360); if (r > 180) r -= 360; return this.radianOutput ? r * Mathf.Deg2Rad : r; };
    return new Vector3(d(KFCCMCBGKEA.x, MOEHNCAFHCO.x), d(KFCCMCBGKEA.y, MOEHNCAFHCO.y), d(KFCCMCBGKEA.z, MOEHNCAFHCO.z));
  }
}
G.SpringAngVec3 = SpringAngVec3;

// SerializableSprings (empty MonoBehaviour container) with [Serializable] nested spring types.
export class SerializableSprings extends GameBehaviour {}
// nested serializable variants (same behaviour); construct from serialized {force, damping, enabled}
function fromSerialized(Cls, o) {
  const s = new Cls();
  if (o && typeof o === 'object') {
    if (o.force !== undefined) s.force = o.force;
    if (o.damping !== undefined) s.damping = o.damping;
    if (o.enabled !== undefined) s.enabled = !!o.enabled;
  }
  return s;
}
SerializableSprings.SpringFloat = class extends SpringFloat { static from(o) { return fromSerialized(this, o); } };
SerializableSprings.SpringVec3 = class extends SpringVec3 { static from(o) { return fromSerialized(this, o); } };
SerializableSprings.SpringAngVec3 = class extends SpringAngVec3 { static from(o) { return fromSerialized(this, o); } };
SerializableSprings.SpringDirVec3 = class extends SpringDirVec3 { static from(o) { return fromSerialized(this, o); } };
define('SerializableSprings', SerializableSprings);

// small data class (2 floats + short); used by CarReplay
export class DDOBJBEDGLL {
  constructor() {
    this.JBEOOOGGKGL = 0; // 0x10 float
    this.NBMEEIGMHHP = 0; // 0x14 float
    this.INHGHFGNDIO = 0; // 0x18 short
  }
}
G.DDOBJBEDGLL = DDOBJBEDGLL;
