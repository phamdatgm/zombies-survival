// LightingSetting: re-applies baked lightmap index / scale-offset to the renderers of an instantiated
// background prefab (Unity strips lightmap data from prefabs).
import { Layers } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

// serializable LMSetting { ren, lm_index, lm_offset }
export class LMSetting {
  constructor(DHABNNIEAFN) {
    this.ren = DHABNNIEAFN || null; // Renderer
    this.lm_index = -1;             // lightmap index
    this.lm_offset = { x: 1, y: 1, z: 0, w: 0 }; // Vector4 scale/offset
  }
}
G.LMSetting = LMSetting;

function applyLM(s) {
  if (!s || !alive(s.ren)) return;
  const o = s.lm_offset || { x: 1, y: 1, z: 0, w: 0 };
  const st = [o.x, o.y, o.z, o.w];
  if (typeof s.ren.setLightmap === 'function') s.ren.setLightmap(s.lm_index, st);
  else { s.ren.lightmapIndex = s.lm_index; s.ren.lightmapScaleOffset = st; }
}

export class LightingSetting extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.NNIDLHJCCHH = []; // LMSetting[]
  }
  // (editor) collect all MeshRenderers on the "baked" layer
  DDLHBBKFAKB() {
    const baked = Layers.NameToLayer('baked');
    const list = this.gameObject.GetComponentsInChildren('MeshRenderer', true).filter((r) => r.gameObject.layer === baked);
    this.NNIDLHJCCHH = list.map((r) => new LMSetting(r));
  }
  Awake() {
    for (const s of this.NNIDLHJCCHH || []) applyLM(s);
  }
  // (editor) store current renderer lightmap data
  BAGDFDNHDEJ() {
    for (const s of this.NNIDLHJCCHH || []) {
      if (!s || !alive(s.ren)) continue;
      s.lm_index = s.ren.lightmapIndex;
      const st = s.ren.lightmapScaleOffset || [1, 1, 0, 0];
      s.lm_offset = { x: st[0], y: st[1], z: st[2], w: st[3] };
    }
  }
  // apply (same as Awake)
  PAIDHOGONLO() {
    for (const s of this.NNIDLHJCCHH || []) applyLM(s);
  }
}
define('LightingSetting', LightingSetting);
