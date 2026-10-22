// Base class for ported MonoBehaviours.
import { Component, World, GameObject, Time } from '../engine/core.js';
import { registerScript } from '../engine/scene.js';
import { Vector3, Vector2, Quaternion, Color } from '../engine/umath.js';
import { G } from './G.js';
import { hexInts } from './util.js';

const VEC3 = new Set(['Vector3']), VEC2 = new Set(['Vector2']), QUAT = new Set(['Quaternion']), COLOR = new Set(['Color', 'Color32']);
const NUM_ARR = /^(int|uint|short|byte|long|float|double|[A-Z]{11})\[\]$/;

function hexFloats(v) {
  if (Array.isArray(v)) return v;
  if (!v || typeof v !== 'string') return [];
  const out = []; const dv = new DataView(new ArrayBuffer(4));
  for (let i = 0; i + 8 <= v.length; i += 8) { for (let k = 0; k < 4; k++) dv.setUint8(k, parseInt(v.substr(i + k * 2, 2), 16)); out.push(dv.getFloat32(0, true)); }
  return out;
}

// Convert a serialized value according to the C# field type
export function convertField(comp, type, v) {
  if (v === undefined) return undefined;
  if (type) {
    if (type === 'bool') return !!v;
    if (VEC3.has(type) && v && typeof v === 'object' && 'x' in v) return new Vector3(v.x, v.y, v.z);
    if (VEC2.has(type) && v && typeof v === 'object' && 'x' in v) return new Vector2(v.x, v.y);
    if (QUAT.has(type) && v && typeof v === 'object' && 'w' in v) return new Quaternion(v.x, v.y, v.z, v.w);
    if (COLOR.has(type) && v && typeof v === 'object' && 'r' in v) return new Color(v.r, v.g, v.b, v.a ?? 1);
    if (type.endsWith('[]')) {
      const el = type.slice(0, -2);
      if (/^(float|double)$/.test(el)) return hexFloats(v);
      if (NUM_ARR.test(type) && typeof v === 'string') return hexInts(v);
      if (v == null || v === 0) return [];
      if (!Array.isArray(v)) return [v];
      return v.map((x) => convertField(comp, el, x));
    }
    if (type.startsWith('List<')) {
      const el = type.slice(5, -1);
      if (!Array.isArray(v)) return [];
      return v.map((x) => convertField(comp, el, x));
    }
  }
  if (typeof v === 'string' && v[0] === '#') return comp.ref(v);
  if (Array.isArray(v)) return v.map((x) => convertField(comp, null, x));
  if (v && typeof v === 'object' && !(v instanceof Vector3)) {
    // nested serializable class: convert members with their own types if known
    const ft = type && G.fieldTypes && G.fieldTypes[type.split('.').pop()] || (type && G.fieldTypes && G.fieldTypes[type]);
    const o = {};
    for (const [k, x] of Object.entries(v)) o[k] = convertField(comp, ft && ft.inst[k], x);
    return o;
  }
  return v;
}

export class GameBehaviour extends Component {
  // copy serialized fields (obfuscated names kept) into the instance
  onDeserialize(p) {
    const ft = G.fieldTypes && G.fieldTypes[this.constructor.typeName];
    for (const [k, v] of Object.entries(p)) {
      if (k.startsWith('m_')) continue;
      this[k] = convertField(this, ft && ft.inst[k], v);
    }
  }
  // helpers mirroring common Unity idioms in the decompiled code
  static alive(x) { return !!x && !x.destroyed; }
}

export const alive = (x) => !!x && !x.destroyed && !(x.gameObject && x.gameObject.destroyed);

export function FindObjectOfType(t) {
  for (const g of World.current.objects) { if (!g.activeInHierarchy) continue; const c = g.GetComponent(t); if (c) return c; } // Unity: disabled components on active objects count
  return null;
}
export function FindObjectsOfType(t) {
  const out = []; for (const g of World.current.objects) { if (!g.activeInHierarchy) continue; out.push(...g.GetComponents(t)); } return out;
}

export function define(name, cls) {
  cls.typeName = name;
  G[name] = cls;
  registerScript(name, cls);
  return cls;
}
