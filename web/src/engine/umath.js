// Unity-semantics math (left-handed, Euler order ZXY, degrees).
// Game scripts work in Unity space; conversion to three.js happens in core/physics.

export const Deg2Rad = Math.PI / 180;
export const Rad2Deg = 180 / Math.PI;

export const Mathf = {
  PI: Math.PI,
  Deg2Rad, Rad2Deg,
  Epsilon: 1.401298e-45,
  Infinity: Infinity,
  Clamp: (v, a, b) => (v < a ? a : v > b ? b : v),
  Clamp01: (v) => (v < 0 ? 0 : v > 1 ? 1 : v),
  Lerp: (a, b, t) => a + (b - a) * Mathf.Clamp01(t),
  LerpUnclamped: (a, b, t) => a + (b - a) * t,
  InverseLerp: (a, b, v) => (a !== b ? Mathf.Clamp01((v - a) / (b - a)) : 0),
  MoveTowards: (c, t, d) => (Math.abs(t - c) <= d ? t : c + Math.sign(t - c) * d),
  Abs: Math.abs, Sign: (v) => (v >= 0 ? 1 : -1), Sqrt: Math.sqrt, Pow: Math.pow,
  Sin: Math.sin, Cos: Math.cos, Tan: Math.tan, Atan2: Math.atan2, Asin: Math.asin, Acos: Math.acos,
  Min: Math.min, Max: Math.max, Floor: Math.floor, Ceil: Math.ceil, Exp: Math.exp, Log: Math.log,
  Round: (v) => Math.round(v), RoundToInt: (v) => Math.round(v), FloorToInt: (v) => Math.floor(v), CeilToInt: (v) => Math.ceil(v),
  Repeat: (t, l) => Mathf.Clamp(t - Math.floor(t / l) * l, 0, l),
  PingPong: (t, l) => { t = Mathf.Repeat(t, l * 2); return l - Math.abs(t - l); },
  DeltaAngle: (c, t) => { let d = Mathf.Repeat(t - c, 360); if (d > 180) d -= 360; return d; },
  LerpAngle: (a, b, t) => { let d = Mathf.Repeat(b - a, 360); if (d > 180) d -= 360; return a + d * Mathf.Clamp01(t); },
  MoveTowardsAngle: (c, t, d) => { const da = Mathf.DeltaAngle(c, t); if (-d < da && da < d) return t; return Mathf.MoveTowards(c, c + da, d); },
  SmoothStep: (a, b, t) => { t = Mathf.Clamp01(t); t = -2 * t * t * t + 3 * t * t; return b * t + a * (1 - t); },
  SmoothDamp(current, target, velRef, smoothTime, maxSpeed = Infinity, dt) {
    smoothTime = Math.max(0.0001, smoothTime);
    const omega = 2 / smoothTime, x = omega * dt, exp = 1 / (1 + x + 0.48 * x * x + 0.235 * x * x * x);
    let change = current - target; const orig = target; const maxChange = maxSpeed * smoothTime;
    change = Mathf.Clamp(change, -maxChange, maxChange); target = current - change;
    const temp = (velRef.v + omega * change) * dt; velRef.v = (velRef.v - omega * temp) * exp;
    let out = target + (change + temp) * exp;
    if ((orig - current > 0) === (out > orig)) { out = orig; velRef.v = (out - orig) / dt; }
    return out;
  },
  Approximately: (a, b) => Math.abs(b - a) < Math.max(1e-6 * Math.max(Math.abs(a), Math.abs(b)), 1.1754944e-38 * 8),
  IsPowerOfTwo: (v) => (v & (v - 1)) === 0,
};

export class Vector2 {
  constructor(x = 0, y = 0) { this.x = x; this.y = y; }
  static get zero() { return new Vector2(0, 0); }
  static get one() { return new Vector2(1, 1); }
  clone() { return new Vector2(this.x, this.y); }
  get magnitude() { return Math.hypot(this.x, this.y); }
  add(o) { return new Vector2(this.x + o.x, this.y + o.y); }
  sub(o) { return new Vector2(this.x - o.x, this.y - o.y); }
  mul(s) { return new Vector2(this.x * s, this.y * s); }
  static Lerp(a, b, t) { t = Mathf.Clamp01(t); return new Vector2(a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t); }
  static Distance(a, b) { return Math.hypot(a.x - b.x, a.y - b.y); }
}

export class Vector3 {
  constructor(x = 0, y = 0, z = 0) { this.x = x; this.y = y; this.z = z; }
  static get zero() { return new Vector3(0, 0, 0); }
  static get one() { return new Vector3(1, 1, 1); }
  static get up() { return new Vector3(0, 1, 0); }
  static get down() { return new Vector3(0, -1, 0); }
  static get right() { return new Vector3(1, 0, 0); }
  static get left() { return new Vector3(-1, 0, 0); }
  static get forward() { return new Vector3(0, 0, 1); }
  static get back() { return new Vector3(0, 0, -1); }
  static from(a) { return Array.isArray(a) ? new Vector3(a[0], a[1], a[2]) : new Vector3(a.x, a.y, a.z); }
  set(x, y, z) { this.x = x; this.y = y; this.z = z; return this; }
  copy(o) { this.x = o.x; this.y = o.y; this.z = o.z; return this; }
  clone() { return new Vector3(this.x, this.y, this.z); }
  add(o) { return new Vector3(this.x + o.x, this.y + o.y, this.z + o.z); }
  sub(o) { return new Vector3(this.x - o.x, this.y - o.y, this.z - o.z); }
  mul(s) { return new Vector3(this.x * s, this.y * s, this.z * s); }
  div(s) { return new Vector3(this.x / s, this.y / s, this.z / s); }
  neg() { return new Vector3(-this.x, -this.y, -this.z); }
  scale(o) { return new Vector3(this.x * o.x, this.y * o.y, this.z * o.z); }
  get magnitude() { return Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z); }
  get sqrMagnitude() { return this.x * this.x + this.y * this.y + this.z * this.z; }
  get normalized() { const m = this.magnitude; return m > 1e-5 ? this.div(m) : Vector3.zero; }
  static Dot(a, b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
  static Cross(a, b) { return new Vector3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }
  static Distance(a, b) { return a.sub(b).magnitude; }
  static Lerp(a, b, t) { t = Mathf.Clamp01(t); return Vector3.LerpUnclamped(a, b, t); }
  static LerpUnclamped(a, b, t) { return new Vector3(a.x + (b.x - a.x) * t, a.y + (b.y - a.y) * t, a.z + (b.z - a.z) * t); }
  static MoveTowards(c, t, d) { const v = t.sub(c); const m = v.magnitude; if (m <= d || m === 0) return t.clone(); return c.add(v.div(m).mul(d)); }
  static Angle(a, b) { const d = Math.sqrt(a.sqrMagnitude * b.sqrMagnitude); if (d < 1e-15) return 0; return Math.acos(Mathf.Clamp(Vector3.Dot(a, b) / d, -1, 1)) * Rad2Deg; }
  static SignedAngle(a, b, axis) { const ang = Vector3.Angle(a, b); const s = Math.sign(Vector3.Dot(axis, Vector3.Cross(a, b))) || 1; return ang * s; }
  static Project(v, n) { const d = Vector3.Dot(n, n); if (d < 1e-15) return Vector3.zero; return n.mul(Vector3.Dot(v, n) / d); }
  static ProjectOnPlane(v, n) { return v.sub(Vector3.Project(v, n)); }
  static Scale(a, b) { return a.scale(b); }
  static Min(a, b) { return new Vector3(Math.min(a.x, b.x), Math.min(a.y, b.y), Math.min(a.z, b.z)); }
  static Max(a, b) { return new Vector3(Math.max(a.x, b.x), Math.max(a.y, b.y), Math.max(a.z, b.z)); }
  static ClampMagnitude(v, m) { return v.sqrMagnitude > m * m ? v.normalized.mul(m) : v.clone(); }
  static SmoothDamp(c, t, velRef, smoothTime, maxSpeed, dt) {
    const out = new Vector3();
    for (const k of ['x', 'y', 'z']) { const r = { v: velRef.v[k] }; out[k] = Mathf.SmoothDamp(c[k], t[k], r, smoothTime, maxSpeed, dt); velRef.v[k] = r.v; }
    return out;
  }
  toString() { return `(${this.x.toFixed(2)}, ${this.y.toFixed(2)}, ${this.z.toFixed(2)})`; }
}

export class Quaternion {
  constructor(x = 0, y = 0, z = 0, w = 1) { this.x = x; this.y = y; this.z = z; this.w = w; }
  static get identity() { return new Quaternion(0, 0, 0, 1); }
  clone() { return new Quaternion(this.x, this.y, this.z, this.w); }
  mul(b) {
    if (b instanceof Vector3) return this.rotate(b);
    const a = this;
    return new Quaternion(
      a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y,
      a.w * b.y + a.y * b.w + a.z * b.x - a.x * b.z,
      a.w * b.z + a.z * b.w + a.x * b.y - a.y * b.x,
      a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z);
  }
  rotate(v) {
    const { x, y, z, w } = this;
    const x2 = x * 2, y2 = y * 2, z2 = z * 2;
    const xx = x * x2, yy = y * y2, zz = z * z2, xy = x * y2, xz = x * z2, yz = y * z2, wx = w * x2, wy = w * y2, wz = w * z2;
    return new Vector3(
      (1 - (yy + zz)) * v.x + (xy - wz) * v.y + (xz + wy) * v.z,
      (xy + wz) * v.x + (1 - (xx + zz)) * v.y + (yz - wx) * v.z,
      (xz - wy) * v.x + (yz + wx) * v.y + (1 - (xx + yy)) * v.z);
  }
  static Inverse(q) { return new Quaternion(-q.x, -q.y, -q.z, q.w); }
  static AngleAxis(angle, axis) {
    const a = axis.normalized; const h = angle * Deg2Rad * 0.5; const s = Math.sin(h);
    return new Quaternion(a.x * s, a.y * s, a.z * s, Math.cos(h));
  }
  static Euler(x, y, z) {
    if (x instanceof Vector3) { z = x.z; y = x.y; x = x.x; }
    const qx = Quaternion.AngleAxis(x, Vector3.right), qy = Quaternion.AngleAxis(y, Vector3.up), qz = Quaternion.AngleAxis(z, Vector3.forward);
    return qy.mul(qx).mul(qz);
  }
  get eulerAngles() {
    // inverse of Euler(ZXY)
    const { x, y, z, w } = this;
    const sinX = 2 * (w * x - y * z);
    let ex, ey, ez;
    if (Math.abs(sinX) >= 0.99999) {
      ex = Math.sign(sinX) * 90;
      ey = Math.atan2(2 * (w * y - x * z), 1 - 2 * (y * y + z * z)) * Rad2Deg; // approx gimbal
      ey = Math.atan2(-2 * (x * z - w * y), 1 - 2 * (x * x + y * y)) * Rad2Deg;
      ez = 0;
    } else {
      ex = Math.asin(sinX) * Rad2Deg;
      ey = Math.atan2(2 * (x * z + w * y), 1 - 2 * (x * x + y * y)) * Rad2Deg;
      ez = Math.atan2(2 * (x * y + w * z), 1 - 2 * (x * x + z * z)) * Rad2Deg;
    }
    const n = (a) => ((a % 360) + 360) % 360;
    return new Vector3(n(ex), n(ey), n(ez));
  }
  static Dot(a, b) { return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w; }
  static Angle(a, b) { const d = Math.min(Math.abs(Quaternion.Dot(a, b)), 1); return d > 0.999999 ? 0 : Math.acos(d) * 2 * Rad2Deg; }
  normalize() { const l = Math.hypot(this.x, this.y, this.z, this.w) || 1; return new Quaternion(this.x / l, this.y / l, this.z / l, this.w / l); }
  static Slerp(a, b, t) { return Quaternion.SlerpUnclamped(a, b, Mathf.Clamp01(t)); }
  static SlerpUnclamped(a, b, t) {
    let cos = Quaternion.Dot(a, b); let bx = b.x, by = b.y, bz = b.z, bw = b.w;
    if (cos < 0) { cos = -cos; bx = -bx; by = -by; bz = -bz; bw = -bw; }
    let k0, k1;
    if (cos > 0.9995) { k0 = 1 - t; k1 = t; } else { const s = Math.sqrt(1 - cos * cos); const ang = Math.atan2(s, cos); k0 = Math.sin((1 - t) * ang) / s; k1 = Math.sin(t * ang) / s; }
    return new Quaternion(a.x * k0 + bx * k1, a.y * k0 + by * k1, a.z * k0 + bz * k1, a.w * k0 + bw * k1).normalize();
  }
  static Lerp(a, b, t) { return Quaternion.Slerp(a, b, t); }
  static RotateTowards(from, to, maxDeg) { const ang = Quaternion.Angle(from, to); if (ang === 0) return to.clone(); return Quaternion.SlerpUnclamped(from, to, Math.min(1, maxDeg / ang)); }
  static FromToRotation(a, b) {
    a = a.normalized; b = b.normalized; const d = Vector3.Dot(a, b);
    if (d < -0.999999) { let ax = Vector3.Cross(Vector3.right, a); if (ax.magnitude < 1e-6) ax = Vector3.Cross(Vector3.up, a); return Quaternion.AngleAxis(180, ax); }
    const c = Vector3.Cross(a, b); return new Quaternion(c.x, c.y, c.z, 1 + d).normalize();
  }
  static LookRotation(forward, up = Vector3.up) {
    const f = forward.normalized; if (f.sqrMagnitude < 1e-12) return Quaternion.identity;
    let r = Vector3.Cross(up, f); if (r.sqrMagnitude < 1e-12) r = Vector3.Cross(Vector3.right, f); r = r.normalized;
    const u = Vector3.Cross(f, r);
    // matrix columns r,u,f -> quaternion
    const m00 = r.x, m01 = u.x, m02 = f.x, m10 = r.y, m11 = u.y, m12 = f.y, m20 = r.z, m21 = u.z, m22 = f.z;
    const tr = m00 + m11 + m22; let q;
    if (tr > 0) { const s = Math.sqrt(tr + 1) * 2; q = new Quaternion((m21 - m12) / s, (m02 - m20) / s, (m10 - m01) / s, 0.25 * s); }
    else if (m00 > m11 && m00 > m22) { const s = Math.sqrt(1 + m00 - m11 - m22) * 2; q = new Quaternion(0.25 * s, (m01 + m10) / s, (m02 + m20) / s, (m21 - m12) / s); }
    else if (m11 > m22) { const s = Math.sqrt(1 + m11 - m00 - m22) * 2; q = new Quaternion((m01 + m10) / s, 0.25 * s, (m12 + m21) / s, (m02 - m20) / s); }
    else { const s = Math.sqrt(1 + m22 - m00 - m11) * 2; q = new Quaternion((m02 + m20) / s, (m12 + m21) / s, 0.25 * s, (m10 - m01) / s); }
    return q.normalize();
  }
}

export class Color {
  constructor(r = 1, g = 1, b = 1, a = 1) { this.r = r; this.g = g; this.b = b; this.a = a; }
  static from(c) { return c ? new Color(c.r, c.g, c.b, c.a ?? 1) : new Color(); }
  static get white() { return new Color(1, 1, 1, 1); }
  static get black() { return new Color(0, 0, 0, 1); }
  static get clear() { return new Color(0, 0, 0, 0); }
  static Lerp(a, b, t) { t = Mathf.Clamp01(t); return new Color(a.r + (b.r - a.r) * t, a.g + (b.g - a.g) * t, a.b + (b.b - a.b) * t, a.a + (b.a - a.a) * t); }
  css() { return `rgba(${Math.round(this.r * 255)},${Math.round(this.g * 255)},${Math.round(this.b * 255)},${this.a})`; }
  static HSVToRGB(h, s, v) {
    const i = Math.floor(h * 6), f = h * 6 - i, p = v * (1 - s), q = v * (1 - f * s), t = v * (1 - (1 - f) * s);
    const [r, g, b] = [[v, t, p], [q, v, p], [p, v, t], [p, q, v], [t, p, v], [v, p, q]][((i % 6) + 6) % 6];
    return new Color(r, g, b, 1);
  }
  static RGBToHSV(c) {
    const mx = Math.max(c.r, c.g, c.b), mn = Math.min(c.r, c.g, c.b), d = mx - mn; let h = 0;
    if (d > 0) { if (mx === c.r) h = ((c.g - c.b) / d) % 6; else if (mx === c.g) h = (c.b - c.r) / d + 2; else h = (c.r - c.g) / d + 4; h /= 6; if (h < 0) h += 1; }
    return { h, s: mx === 0 ? 0 : d / mx, v: mx };
  }
}

// Unity Random (non-deterministic; same API)
export const Random = {
  Range(a, b) { if (Number.isInteger(a) && Number.isInteger(b) && Random._int) return a + Math.floor(Math.random() * (b - a)); return a + Math.random() * (b - a); },
  RangeInt(a, b) { return b <= a ? a : a + Math.floor(Math.random() * (b - a)); },
  get value() { return Math.random(); },
  get insideUnitSphere() { let v; do { v = new Vector3(Math.random() * 2 - 1, Math.random() * 2 - 1, Math.random() * 2 - 1); } while (v.sqrMagnitude > 1); return v; },
  get onUnitSphere() { return Random.insideUnitSphere.normalized; },
  get insideUnitCircle() { let x, y; do { x = Math.random() * 2 - 1; y = Math.random() * 2 - 1; } while (x * x + y * y > 1); return new Vector2(x, y); },
};

// unity space <-> three space
export const U2T = {
  pos: (v, out) => out.set(v.x, v.y, -v.z),
  quat: (q, out) => out.set(-q.x, -q.y, q.z, q.w),
};
export const T2U = {
  pos: (v) => new Vector3(v.x, v.y, -v.z),
  quat: (q) => new Quaternion(-q.x, -q.y, q.z, q.w),
};
