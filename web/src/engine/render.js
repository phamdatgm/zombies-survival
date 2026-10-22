// Rendering components.
import * as THREE from 'three';
import { Component, World } from './core.js';
import { getGeometrySync, loadGeometry, makeMaterial, getTexture } from './assets.js';
import { Color } from './umath.js';

export const RenderState = { lightmaps: [], renderer: null };

// OnBecameVisible / OnBecameInvisible support
export const VisTrack = new Set();
function trackVisibility(r) {
  if (r.gameObject.components.some((c) => c.OnBecameVisible || c.OnBecameInvisible)) { r._vis = false; VisTrack.add(r); }
}
const _frustum = new THREE.Frustum(), _pm = new THREE.Matrix4(), _sph = new THREE.Sphere();
export function updateVisibility(cam) {
  if (!VisTrack.size) return;
  cam.updateMatrixWorld(); _pm.multiplyMatrices(cam.projectionMatrix, cam.matrixWorldInverse); _frustum.setFromProjectionMatrix(_pm);
  for (const r of VisTrack) {
    if (r.destroyed) { VisTrack.delete(r); continue; }
    let vis = false;
    if (r._enabled && r.gameObject.activeInHierarchy) for (const m of r.meshes) {
      if (!m.geometry.boundingSphere) m.geometry.computeBoundingSphere();
      m.updateWorldMatrix(true, false); _sph.copy(m.geometry.boundingSphere).applyMatrix4(m.matrixWorld);
      if (_frustum.intersectsSphere(_sph)) { vis = true; break; }
    }
    if (vis !== r._vis) {
      r._vis = vis;
      const fn = vis ? 'OnBecameVisible' : 'OnBecameInvisible';
      for (const c of r.gameObject.components) if (c[fn] && !c.destroyed && c._isEnabledNow !== false) { try { c[fn](); } catch (e) { console.error(c.constructor.name + '.' + fn, e); } }
    }
  }
}

export class MeshFilter extends Component {
  static typeName = 'MeshFilter';
  constructor(go, p) { super(go, p); this._mesh = p.m_Mesh || null; }
  get sharedMesh() { return this._mesh; }
  set sharedMesh(v) { this._mesh = v; const r = this.gameObject.GetComponent(MeshRenderer); if (r) r._rebuild(); }
  get mesh() { return this._mesh; }
  set mesh(v) { this.sharedMesh = v; }
}

export class Renderer extends Component {
  constructor(go, p) {
    super(go, p);
    this.materialRefs = (p.m_Materials || []).slice();
    this.lightmapIndex = p.m_LightmapIndex ?? -1;
    this.lightmapScaleOffset = p.m_LightmapTilingOffset || [1, 1, 0, 0];
    this.sb = p.m_StaticBatchInfo && p.m_StaticBatchInfo.subMeshCount > 0 ? p.m_StaticBatchInfo : null;
    this.meshes = [];
    this._mats = null;
    this.sortingOrder = p.m_SortingOrder || 0;
  }
  get isVisible() { return this._vis !== undefined ? this._vis : this.enabled && this.gameObject.activeInHierarchy; }
  _visibility() { const v = this._enabled && this.gameObject.activeInHierarchy; for (const m of this.meshes) m.visible = v; }
  _onActiveChanged(a) { super._onActiveChanged(a); this._visibility(); }
  get enabled() { return this._enabled; }
  set enabled(v) { this._enabled = !!v; this._visibility(); }
  _buildMaterials(skinned, geo) {
    const lmTex = this.lightmapIndex >= 0 && this.lightmapIndex < 254 ? RenderState.lightmaps[this.lightmapIndex] : null;
    const hasUv1 = geo && geo.attributes.uv1;
    const hasColor = geo && geo.attributes.color;
    return this.materialRefs.map((r) => makeMaterial(r, { lightmap: lmTex && hasUv1 ? lmTex : null, lmST: this.lightmapScaleOffset, lmKey: this.lightmapScaleOffset.join(','), skinned, vcolor: hasColor }));
  }
  // Unity API: renderer.material returns an instance (unique)
  get materials() { return this._mats || []; }
  set materials(arr) { this.materialRefs = arr.map((m) => (typeof m === 'string' ? m : m.userData.ref)); this._mats = arr.map((m) => (typeof m === 'string' ? makeMaterial(m) : m)); this._applyMats(); }
  get sharedMaterial() { return this._mats ? this._mats[0] : null; }
  set sharedMaterial(m) { const a = (this._mats || []).slice(); a[0] = typeof m === 'string' ? makeMaterial(m) : m; this._mats = a; this._applyMats(); }
  get sharedMaterials() { return this.materials; }
  set sharedMaterials(a) { this.materials = a; }
  get material() {
    if (!this._mats) return null;
    if (!this._uniq) { this._mats = this._mats.map((m) => { const c = m.clone(); c.userData = { ...m.userData }; if (m.userData.zdU) { c.userData.zdU = {}; for (const [k, v] of Object.entries(m.userData.zdU)) c.userData.zdU[k] = { value: v.value && v.value.clone ? v.value.clone() : v.value }; } if (m.onBeforeCompile) { c.onBeforeCompile = m.onBeforeCompile; c.customProgramCacheKey = m.customProgramCacheKey; } return c; }); this._uniq = true; this._applyMats(); }
    return this._mats[0];
  }
  set material(m) { this.sharedMaterial = m; }
  _applyMats() {
    for (const mesh of this.meshes) {
      const g = mesh.geometry;
      if (Array.isArray(mesh.material)) mesh.material = g.groups.map((gr, i) => this._mats[Math.min(gr.materialIndex, this._mats.length - 1)] || this._mats[0]);
      else mesh.material = this._mats[Math.min(mesh.userData.sub || 0, this._mats.length - 1)];
    }
  }
  setLightmap(index, st) {
    this.lightmapIndex = index; this.lightmapScaleOffset = st;
    if (this.meshes.length) { this._mats = this._buildMaterials(false, this.meshes[0].geometry); this._uniq = false; this._applyMats(); }
  }
  _dispose() { for (const m of this.meshes) m.removeFromParent(); this.meshes = []; }
  get bounds() {
    const b = new THREE.Box3(); for (const m of this.meshes) { m.updateWorldMatrix(true, false); b.expandByObject(m); }
    const c = new THREE.Vector3(), s = new THREE.Vector3(); b.getCenter(c); b.getSize(s);
    return { center: { x: c.x, y: c.y, z: -c.z }, size: { x: s.x, y: s.y, z: s.z }, extents: { x: s.x / 2, y: s.y / 2, z: s.z / 2 } };
  }
}

export class MeshRenderer extends Renderer {
  static typeName = 'MeshRenderer';
  static aliases = ['Renderer'];
  Awake() { this._rebuild(); }
  _rebuild() {
    this._dispose();
    const mf = this.gameObject.GetComponent(MeshFilter);
    if (!mf || !mf.sharedMesh) return;
    const geo = getGeometrySync(mf.sharedMesh);
    if (!geo) { loadGeometry(mf.sharedMesh).then(() => !this.destroyed && this._rebuild()); return; }
    if (!this._mats || !this._uniq) this._mats = this._buildMaterials(false, geo);
    let g = geo;
    if (this.sb) {
      // static batched: world-space combined mesh, draw only our submeshes
      g = geo.clone(); g.clearGroups();
      for (let i = 0; i < this.sb.subMeshCount; i++) { const gr = geo.groups[this.sb.firstSubMesh + i]; if (gr) g.addGroup(gr.start, gr.count, i); }
      g.computeBoundingSphere();
      const mesh = new THREE.Mesh(g, g.groups.map((gr) => this._mats[Math.min(gr.materialIndex, this._mats.length - 1)]));
      mesh.matrixAutoUpdate = false;
      World.current.root.add(mesh);
      // combined meshes in Unity world space -> convert by the same z-flip already baked in vertices
      this.meshes.push(mesh);
    } else {
      const mats = g.groups.map((gr) => this._mats[Math.min(gr.materialIndex, this._mats.length - 1)]);
      const mesh = new THREE.Mesh(g, mats.length > 1 ? mats : mats[0]);
      mesh.userData.sub = 0;
      this.gameObject.obj.add(mesh);
      this.meshes.push(mesh);
    }
    for (const m of this.meshes) { m.userData.renderer = this; m.castShadow = false; m.receiveShadow = false; m.renderOrder = this.sortingOrder; }
    this._visibility();
    trackVisibility(this);
  }
}

export class SkinnedMeshRenderer extends Renderer {
  static typeName = 'SkinnedMeshRenderer';
  static aliases = ['Renderer'];
  constructor(go, p) { super(go, p); this.meshRef = p.m_Mesh; this.boneRefs = p.m_Bones || []; this.rootBoneRef = p.m_RootBone; }
  Awake() { this._rebuild(); }
  get sharedMesh() { return this.meshRef; }
  set sharedMesh(v) { this.meshRef = v; this._rebuild(); }
  _rebuild() {
    this._dispose();
    const geo = getGeometrySync(this.meshRef);
    if (!geo) { if (this.meshRef) loadGeometry(this.meshRef).then(() => !this.destroyed && this._rebuild()); return; }
    if (!this._mats || !this._uniq) this._mats = this._buildMaterials(true, geo);
    const mats = geo.groups.map((gr) => this._mats[Math.min(gr.materialIndex, this._mats.length - 1)]);
    let bones = this.boneRefs.map((r) => { const t = this.ref(r); return t ? t.gameObject.obj : null; });
    if (!bones.length && geo.userData.boneHashes && geo.userData.boneHashes.length) {
      // optimized hierarchy: bones are rebuilt by the Animator from the Avatar skeleton
      const an = this.gameObject.GetComponentInParent('Animator') || this.transform.root.gameObject.GetComponentInChildren('Animator', true);
      if (an && an.skeleton) bones = geo.userData.boneHashes.map((h) => { const g = an.skeleton.get(h >>> 0); return g ? g.obj : null; });
    }
    let mesh;
    if (!/noskin/.test(location.search) && geo.attributes.skinIndex && geo.userData.bindposes && bones.length && bones.every((b) => b)) {
      const inv = geo.userData.bindposes.map((a) => new THREE.Matrix4().fromArray(a));
      const boneObjs = bones.map((b) => { if (!b.isBone) { b.isBone = true; b.type = 'Bone'; } return b; });
      mesh = new THREE.SkinnedMesh(geo, mats.length > 1 ? mats : mats[0]);
      mesh.bindMode = THREE.AttachedBindMode;
      const sk = new THREE.Skeleton(boneObjs, inv);
      mesh.bind(sk, new THREE.Matrix4());
      mesh.frustumCulled = false;
    } else {
      mesh = new THREE.Mesh(geo, mats.length > 1 ? mats : mats[0]);
    }
    mesh.userData.renderer = this;
    this.gameObject.obj.add(mesh);
    this.meshes.push(mesh);
    this._visibility();
    trackVisibility(this);
  }
}

export class Light extends Component {
  static typeName = 'Light';
  Awake() {
    const p = this.props; const c = p.m_Color || { r: 1, g: 1, b: 1 };
    const col = new THREE.Color(c.r, c.g, c.b);
    if (p.m_Type === 1) { this.light = new THREE.DirectionalLight(col, (p.m_Intensity ?? 1) * Math.PI); /* Unity: albedo * _LightColor0 (color*intensity) * NdotL (shader GLSL) */ this.light.position.set(0, 0, 1); this.light.target.position.set(0, 0, -1); this.gameObject.obj.add(this.light.target); }
    else if (p.m_Type === 2) this.light = new THREE.PointLight(col, (p.m_Intensity ?? 1) * Math.PI, p.m_Range ?? 10, 1);
    else if (p.m_Type === 0) this.light = new THREE.SpotLight(col, (p.m_Intensity ?? 1) * Math.PI, p.m_Range ?? 10, (p.m_SpotAngle ?? 30) * Math.PI / 360);
    if (this.light) { this.gameObject.obj.add(this.light); this.light.visible = this._enabled && this.gameObject.activeInHierarchy; }
    // baked-only lights (lightmapping=2) affect nothing at runtime
    if (this.light && p.m_Lightmapping === 2) this.light.visible = false;
  }
  _onActiveChanged(a) { super._onActiveChanged(a); if (this.light) this.light.visible = a && this._enabled && this.props.m_Lightmapping !== 2; }
  get intensity() { return this.light ? this.light.intensity / Math.PI : 0; }
  set intensity(v) { if (this.light) this.light.intensity = v * Math.PI; }
  get color() { return this.light ? new Color(this.light.color.r, this.light.color.g, this.light.color.b) : Color.white; }
  set color(c) { if (this.light) this.light.color.setRGB(c.r, c.g, c.b); }
  _dispose() { if (this.light) this.light.removeFromParent(); }
}

export class Camera extends Component {
  static typeName = 'Camera';
  static main = null;
  Awake() {
    const p = this.props;
    this.cam = new THREE.PerspectiveCamera(p['field of view'] ?? 60, innerWidth / innerHeight, p['near clip plane'] ?? 0.3, p['far clip plane'] ?? 1000);
    // three cameras look down -Z; unity cameras look down +Z: with our z-flip the forward maps to -Z, so no extra rotation needed
    this.gameObject.obj.add(this.cam);
    this.depth = p.m_Depth ?? 0;
    const bc = p.m_BackGroundColor || { r: 0, g: 0, b: 0 };
    this.backgroundColor = new Color(bc.r, bc.g, bc.b, 1);
    this.clearFlags = p.m_ClearFlags ?? 1;
    this.cullingMask = p.m_CullingMask ? p.m_CullingMask.m_Bits : -1;
    if (this.gameObject.tag === 'MainCamera' || !Camera.main) Camera.main = this;
  }
  OnEnable() { if (this.gameObject.tag === 'MainCamera') Camera.main = this; }
  get fieldOfView() { return this.cam.fov; }
  set fieldOfView(v) { this.cam.fov = v; this.cam.updateProjectionMatrix(); }
  get orthographic() { return false; }
  get aspect() { return this.cam.aspect; }
  WorldToScreenPoint(p) {
    const v = new THREE.Vector3(p.x, p.y, -p.z); this.cam.updateMatrixWorld(); v.project(this.cam);
    return { x: (v.x + 1) / 2 * innerWidth, y: (v.y + 1) / 2 * innerHeight, z: v.z };
  }
  WorldToViewportPoint(p) { const s = this.WorldToScreenPoint(p); return { x: s.x / innerWidth, y: s.y / innerHeight, z: s.z }; }
  ScreenToWorldPoint(s) {
    const v = new THREE.Vector3(s.x / innerWidth * 2 - 1, s.y / innerHeight * 2 - 1, 0.5); v.unproject(this.cam);
    const o = new THREE.Vector3(); this.cam.getWorldPosition(o); const d = v.sub(o).normalize().multiplyScalar(s.z || 10).add(o);
    return { x: d.x, y: d.y, z: -d.z };
  }
  _dispose() { if (Camera.main === this) Camera.main = null; this.cam.removeFromParent(); }
}

// generic holder for unported / passive components
export class GenericComponent extends Component { static typeName = 'Generic'; }
