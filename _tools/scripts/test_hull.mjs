import R from '@dimforge/rapier3d-compat';
import fs from 'node:fs';
await R.init();
const idx = JSON.parse(fs.readFileSync('assets/index.json'));
const e = idx.meshes['@Mesh/SA_Prop_Barrel_collider'];
const buf = fs.readFileSync('assets/mesh/' + e.file);
const [off, comps] = e.attrs.position;
const v = new Float32Array(buf.buffer.slice(buf.byteOffset + off, buf.byteOffset + off + e.vc * 12));
console.log('vc', e.vc, v.slice(0, 9));
for (const s of [1, 0.5, 2, 1.3]) { const t0 = Date.now(); const vv = v.map((x) => x * s); const d = R.ColliderDesc.convexHull(vv); console.log('scale', s, 'hull', !!d, Date.now() - t0, 'ms'); }
