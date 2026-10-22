// Instantiate converted scenes/prefabs (JSON) into GameObjects + components.
import * as THREE from 'three';
import { GameObject, World, Component, SceneWorld, persistent, Time, clearTimers } from './core.js';
import { DB, loadJSON, preloadMeshes, prefabFile, getTexture, findAsset, LM } from './assets.js';
import { MeshFilter, MeshRenderer, SkinnedMeshRenderer, Light, Camera, GenericComponent, RenderState } from './render.js';
import { Rigidbody, BoxCollider, SphereCollider, CapsuleCollider, MeshCollider, PhysicsWorld } from './physics.js';

export const Registry = {
  builtin: {
    MeshFilter, MeshRenderer, SkinnedMeshRenderer, Light, Camera,
    Rigidbody, BoxCollider, SphereCollider, CapsuleCollider, MeshCollider,
  },
  scripts: {}, // filled by game: name -> class
  skip: new Set(['Transform', 'RectTransform', 'GameObject', 'RenderSettings', 'LightmapSettings', 'NavMeshSettings', 'OcclusionCullingSettings', 'PrefabInstance']),
};
export function registerScript(name, cls) { Registry.scripts[name] = cls; cls.typeName = cls.typeName || name; }
export function registerComponent(name, cls) { Registry.builtin[name] = cls; }
export const instantiateHooks = [];

class Instantiation {
  constructor(json, source) { this.json = json; this.items = new Map(); this.source = source; }
  resolve(v) {
    if (v == null) return null;
    if (typeof v === 'string') {
      if (v[0] === '#') { const it = this.items.get(+v.slice(1)); return it === undefined ? null : it; }
      if (v[0] === '@') return v;
    }
    return v;
  }
}

function collectMeshes(json, out = new Set()) {
  for (const n of json.nodes) {
    const m = n.props && (n.props.m_Mesh);
    if (typeof m === 'string' && m[0] === '@') out.add(m);
  }
  return out;
}

export async function preloadPrefab(key) {
  const f = prefabFile(key); if (!f) throw new Error('prefab not found ' + key);
  const json = await loadJSON(f);
  if (!json._meshesLoaded) { await preloadMeshes(collectMeshes(json)); json._meshesLoaded = true; }
  return json;
}

// Build objects. Returns { roots, inst }.
export function build(json, { parent = null, source = null, activateRoot = true } = {}) {
  const inst = new Instantiation(json, source);
  const nodes = json.nodes;
  const byIdx = new Map(nodes.map((n) => [n.i, n]));
  const gos = [];
  for (const n of nodes) {
    if (n.type !== 'GameObject') continue;
    const go = new GameObject(n.name);
    go.layer = n.layer; go.tag = n.tag; go._active = !!n.active;
    go._src = { json, i: n.i };
    inst.items.set(n.i, go);
    gos.push([go, n]);
  }
  // transforms
  const roots = [];
  for (const n of nodes) {
    if (n.type !== 'Transform' && n.type !== 'RectTransform') continue;
    const go = inst.resolve(n.go); if (!go) continue;
    inst.items.set(n.i, go.transform);
    go.obj.position.set(n.p[0], n.p[1], n.p[2]);
    go.obj.quaternion.set(n.r[0], n.r[1], n.r[2], n.r[3]);
    go.obj.scale.set(n.s[0], n.s[1], n.s[2]);
    if (n.type === 'RectTransform') { go.rect = { anchorMin: n.AnchorMin, anchorMax: n.AnchorMax, anchoredPosition: n.AnchoredPosition, sizeDelta: n.SizeDelta, pivot: n.Pivot }; go.transform.isRect = true; }
    go._tnode = n;
  }
  // hierarchy (respect children order)
  for (const [go] of gos) {
    const n = go._tnode; if (!n) continue;
    if (!n.parent) roots.push(go);
    for (const cr of n.children) {
      const ct = inst.resolve(cr); if (!ct) continue;
      ct._parent = go.transform; go.transform._children.push(ct); go.obj.add(ct.obj);
    }
  }
  for (const r of roots) { if (parent) { r.transform._parent = parent.transform || parent; (parent.transform || parent)._children.push(r.transform); (parent.obj || parent.gameObject.obj).add(r.obj); } }
  // active state
  const setAIH = (go, parentActive) => { go._activeInHierarchy = parentActive && go._active; go.obj.visible = go._activeInHierarchy; for (const c of go.transform._children) setAIH(c.gameObject, go._activeInHierarchy); };
  for (const r of roots) setAIH(r, parent ? (parent.gameObject || parent).activeInHierarchy : true);
  // components (create all first so references resolve), keep GameObject component order
  const created = [];
  for (const [go, n] of gos) {
    for (const cref of n.comps) {
      const idx = cref && +String(cref).slice(1);
      const cn = byIdx.get(idx); if (!cn || Registry.skip.has(cn.type)) continue;
      let Cls = cn.type === 'MonoBehaviour' ? Registry.scripts[cn.script] : Registry.builtin[cn.type];
      if (!Cls) { Cls = GenericComponent; }
      const props = cn.props || {};
      const c = new Cls(go, props);
      c._inst = inst; c._node = cn; c.scriptName = cn.script || cn.type;
      if (Cls === GenericComponent) c.typeNameOverride = cn.script || cn.type;
      go.components.push(c);
      inst.items.set(cn.i, c);
      created.push(c);
    }
  }
  for (const c of created) { if (c.onDeserialize) { try { c.onDeserialize(c.props); } catch (e) { console.error(c.constructor.name, 'onDeserialize', e); } } }
  for (const c of created) World.current.pendingAwake.push(c);
  return { roots, inst, gos: gos.map((g) => g[0]) };
}

// Unity-style Instantiate: (prefabKey | GameObject | Component, position?, rotation?, parent?)
export function Instantiate(src, pos, rot, parent) {
  if (pos && pos.transform && !rot) { parent = pos; pos = null; }
  let json, root;
  if (typeof src === 'string') {
    const f = prefabFile(src); json = f && DBjson(f);
    if (!json) throw new Error('Prefab not preloaded: ' + src);
    const { roots } = build(json, { parent });
    root = roots[0];
  } else {
    const go = src.gameObject || src;
    json = subtreeJSON(go);
    const { roots } = build(json, { parent });
    root = roots[0];
    root.name = go.name + '(Clone)';
    root._active = go._active;
    root._activeInHierarchy = root._active && (!parent || (parent.gameObject || parent).activeInHierarchy);
    root.obj.visible = root._activeInHierarchy;
    // carry runtime transform
    root.obj.position.copy(go.obj.position); root.obj.quaternion.copy(go.obj.quaternion); root.obj.scale.copy(go.obj.scale);
    if (!parent) { go.obj.updateWorldMatrix(true, false); go.obj.matrixWorld.decompose(root.obj.position, root.obj.quaternion, root.obj.scale); }
  }
  if (pos) root.transform.position = pos;
  if (rot) root.transform.rotation = rot;
  for (const h of instantiateHooks) h(root);
  World.current.flushAwake();
  if (src && src.gameObject && src !== src.gameObject) return root.GetComponent(src.constructor);
  return root;
}

const jsonByFile = new Map();
function DBjson(f) { return jsonByFile.get(f); }
export async function preload(key) { const f = prefabFile(key); const j = await preloadPrefab(key); jsonByFile.set(f, j); return j; }
export function isPreloaded(key) { const f = prefabFile(key); return f && jsonByFile.has(f); }

// Extract the JSON subset describing a GameObject subtree (from its original source)
function subtreeJSON(go) {
  const src = go._src;
  if (!src) throw new Error('Cannot clone runtime object ' + go.name);
  const cacheKey = '_sub' + src.i;
  if (src.json[cacheKey]) return src.json[cacheKey];
  const byIdx = new Map(src.json.nodes.map((n) => [n.i, n]));
  const keep = new Set();
  const visit = (goIdx) => {
    const gn = byIdx.get(goIdx); keep.add(goIdx);
    for (const c of gn.comps) { const ci = +String(c).slice(1); keep.add(ci); const cn = byIdx.get(ci); if (cn && (cn.type === 'Transform' || cn.type === 'RectTransform')) for (const ch of cn.children) { const tn = byIdx.get(+ch.slice(1)); if (tn) visit(+tn.go.slice(1)); } }
  };
  visit(src.i);
  const nodes = src.json.nodes.filter((n) => keep.has(n.i)).map((n) => {
    if ((n.type === 'Transform' || n.type === 'RectTransform') && +n.go.slice(1) === src.i) return { ...n, parent: null };
    return n;
  });
  const j = { name: go.name, nodes };
  src.json[cacheKey] = j;
  return j;
}

// ---------------------------------------------------------------- scene loading
export const SceneManager = {
  activeName: null,
  onLoaded: [],
  async LoadScene(name, { keepPersistent = true } = {}) {
    const json = await loadJSON('scenes/' + name + '.json');
    await preloadMeshes(collectMeshes(json));
    const old = World.current;
    const w = new SceneWorld();
    // move persistent objects
    if (old) {
      for (const g of old.objects) if (!persistent.has(g.transform.root.gameObject)) { for (const c of g.components) { c.destroyed = true; try { c.OnDestroy && c.OnDestroy(); } catch (e) { console.error(e); } c._dispose && c._dispose(); } }
    }
    PhysicsWorld.destroy(); PhysicsWorld.create(); clearTimers();
    World.current = w;
    if (old) {
      for (const g of persistent) {
        if (g.destroyed) continue;
        const move = (x) => { x.scene = w; w.objects.add(x); for (const c of x.transform._children) move(c.gameObject); };
        move(g); w.root.add(g.obj);
        // re-register physics of persistent objects
        for (const c of g.GetComponentsInChildren(Component, true)) { if (c instanceof Rigidbody) { c.body = null; c.colliders = []; PhysicsWorld.register(c); } if (c._col !== undefined) { c._col = null; c._body = null; c._rb = null; PhysicsWorld.register(c); } if (c._isEnabledNow) w.active.add(c); }
      }
    }
    // render settings / lightmaps
    // a Mixed directional light (Subtractive) is baked into the lightmaps: no direct light on lightmapped meshes
    LM.direct.value = json.nodes.some((n) => n.type === 'Light' && n.props && n.props.m_Type === 1 && n.props.m_Lightmapping === 1) ? 0 : 1;
    RenderState.lightmaps = (json.lightmaps || []).map((k) => { const t = k && getTexture(k); if (t) { t.colorSpace = THREE.NoColorSpace; } return t; });
    const rs = json.nodes.find((n) => n.type === 'RenderSettings');
    applyRenderSettings(w, rs && rs.props);
    this.activeName = name;
    const res = build(json);
    w.flushAwake();
    for (const cb of this.onLoaded) cb(name, res);
    return res;
  },
  GetActiveScene() { return { name: this.activeName, buildIndex: SceneManager.buildIndex(this.activeName) }; },
  buildIndex(n) { return DB.index.scenes.indexOf(n); },
};

export function applyRenderSettings(w, p) {
  const scene = w.root;
  if (!p) { scene.add(new THREE.AmbientLight(0xffffff, 1)); return; }
  const sky = p.m_AmbientSkyColor || { r: .5, g: .5, b: .5 };
  w.ambient = new THREE.AmbientLight(new THREE.Color(sky.r, sky.g, sky.b), Math.PI * (p.m_AmbientIntensity ?? 1));
  scene.add(w.ambient);
  if (p.m_Fog) {
    const c = p.m_FogColor; const col = new THREE.Color(c.r, c.g, c.b);
    if (p.m_FogMode === 1) scene.fog = new THREE.Fog(col, p.m_LinearFogStart, p.m_LinearFogEnd);
    else if (p.m_FogMode === 3) scene.fog = new THREE.FogExp2(col, p.m_FogDensity);
    else {
      // Unity "Exponential": f = exp(-d*z). three has no such fog; patch the fog chunk via a flag on the fog object.
      scene.fog = new THREE.FogExp2(col, p.m_FogDensity); scene.fog.isUnityExp = true;
      if (!THREE.ShaderChunk._zdExpFog) {
        THREE.ShaderChunk.fog_fragment = THREE.ShaderChunk.fog_fragment.replace('float fogFactor = 1.0 - exp( - fogDensity * fogDensity * vFogDepth * vFogDepth );', 'float fogFactor = 1.0 - exp( - fogDensity * vFogDepth );');
        THREE.ShaderChunk._zdExpFog = true;
      }
    }
  }
  w.renderSettings = p;
}
