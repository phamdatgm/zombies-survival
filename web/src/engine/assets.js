// Asset database: loads the converted index and builds three.js resources lazily.
import * as THREE from 'three';

const BASE = 'assets/';
export const DB = { index: null, sprites: null, texts: null };
const cache = { geo: new Map(), tex: new Map(), json: new Map(), mat: new Map(), bin: new Map() };
const texLoader = new THREE.TextureLoader();

export async function loadIndex() {
  const [index, sprites, texts, avatars] = await Promise.all([
    fetch(BASE + 'index.json').then((r) => r.json()),
    fetch(BASE + 'sprites.json').then((r) => r.json()),
    fetch(BASE + 'texts.json').then((r) => r.json()),
    fetch(BASE + 'avatars.json').then((r) => r.json()),
  ]);
  DB.index = index; DB.sprites = sprites; DB.texts = texts; DB.avatars = avatars;
  // name lookups for Resources.Load
  DB.byName = {};
  for (const cat of ['prefabs', 'audio', 'textures', 'materials', 'clips']) {
    for (const k of Object.keys(index[cat] || {})) {
      const n = k.split('/').pop();
      DB.byName[cat + ':' + n] = k;
    }
  }
  return DB;
}

export function assetUrl(file) { return BASE + file; }

export async function loadJSON(file) {
  if (!cache.json.has(file)) cache.json.set(file, fetch(BASE + file).then((r) => r.json()));
  return cache.json.get(file);
}

// ---------------------------------------------------------------- meshes
export function meshKey(ref) { return ref ? ref.split('#')[0] : null; }

export async function preloadMeshes(keys) {
  await Promise.all([...keys].map((k) => loadGeometry(k)));
}

export async function loadGeometry(ref) {
  const key = meshKey(ref);
  if (!key) return null;
  if (cache.geo.has(key)) return cache.geo.get(key);
  const p = (async () => {
    const e = DB.index.meshes[key];
    if (!e) return builtinGeometry(ref);
    const buf = await fetch(BASE + 'mesh/' + e.file).then((r) => r.arrayBuffer());
    const g = new THREE.BufferGeometry();
    for (const [name, [off, comps, fmt]] of Object.entries(e.attrs)) {
      let arr;
      if (fmt === 'H') arr = new Uint16Array(buf, off, e.vc * comps);
      else arr = new Float32Array(buf, off, e.vc * comps);
      g.setAttribute(name, new THREE.BufferAttribute(arr, comps));
    }
    const [ioff, icount, ifmt] = e.index;
    g.setIndex(new THREE.BufferAttribute(ifmt === 'I' ? new Uint32Array(buf, ioff, icount) : new Uint16Array(buf, ioff, icount), 1));
    e.sub.forEach(([start, count], i) => g.addGroup(start, count, i));
    g.computeBoundingBox(); g.computeBoundingSphere();
    g.userData = { key, bindposes: e.bindposes, boneHashes: e.boneHashes, rootBoneHash: e.rootBoneHash, name: e.name };
    return g;
  })();
  cache.geo.set(key, p);
  return p;
}

export function getGeometrySync(ref) {
  const key = meshKey(ref);
  const p = cache.geo.get(key);
  return p && p._value;
}

function builtinGeometry(ref) {
  const id = ref && ref.split('#')[1];
  let g;
  switch (id) {
    case '10202': g = new THREE.BoxGeometry(1, 1, 1); break;
    case '10206': g = new THREE.CylinderGeometry(0.5, 0.5, 2, 16); break;
    case '10207': g = new THREE.SphereGeometry(0.5, 16, 12); break;
    case '10208': g = new THREE.CapsuleGeometry(0.5, 1, 4, 12); break;
    case '10209': g = new THREE.PlaneGeometry(10, 10).rotateX(-Math.PI / 2); break;
    case '10210': g = new THREE.PlaneGeometry(1, 1); break;
    default: g = new THREE.BoxGeometry(1, 1, 1);
  }
  g.addGroup(0, g.index ? g.index.count : g.attributes.position.count, 0);
  g.userData = { key: ref, builtin: true };
  return g;
}

// ---------------------------------------------------------------- textures
export function getTexture(ref) {
  if (!ref) return null;
  const key = ref.split('#')[0];
  if (cache.tex.has(key)) return cache.tex.get(key);
  const e = DB.index.textures[key];
  if (!e) return null;
  const t = texLoader.load(BASE + e.file);
  t.colorSpace = THREE.NoColorSpace; // gamma workflow: use raw texels
  t.wrapS = t.wrapT = e.wrap === 1 ? THREE.ClampToEdgeWrapping : THREE.RepeatWrapping;
  if (e.filter === 0) { t.magFilter = THREE.NearestFilter; t.minFilter = THREE.NearestMipmapNearestFilter; }
  t.anisotropy = 4;
  cache.tex.set(key, t);
  return t;
}
export function textureUrl(ref) {
  const key = ref && ref.split('#')[0];
  const e = key && DB.index.textures[key];
  return e ? BASE + e.file : null;
}

// ---------------------------------------------------------------- materials
// Shader names in the original game -> three.js approximation
export function getMaterialDef(ref) {
  const key = ref && ref.split('#')[0];
  return (key && DB.index.materials[key]) || null;
}

export function makeMaterial(ref, opts = {}) {
  const def = getMaterialDef(ref);
  const ckey = (ref || 'none') + '|' + (opts.lightmap ? opts.lightmap.uuid + opts.lmKey : '') + (opts.skinned ? '|s' : '') + (opts.vcolor ? '|v' : '');
  if (!opts.unique && cache.mat.has(ckey)) return cache.mat.get(ckey);
  let m;
  const shader = def ? def.shader : 'Standard';
  const mainTex = def && (def.tex._MainTex || def.tex._BaseMap || def.tex._MainTexture);
  let map = mainTex ? getTexture(mainTex.tex) : null;
  if (map && mainTex && (mainTex.scale[0] !== 1 || mainTex.scale[1] !== 1 || mainTex.offset[0] || mainTex.offset[1])) {
    map = map.clone(); map.repeat.set(mainTex.scale[0], mainTex.scale[1]); map.offset.set(mainTex.offset[0], mainTex.offset[1]); map.needsUpdate = true;
  }
  const col = def && (def.colors._Color || def.colors._TintColor || def.colors._BaseColor);
  const color = col ? new THREE.Color(col[0], col[1], col[2]) : new THREE.Color(1, 1, 1);
  const s = shader.toLowerCase();
  const additive = /additive|builtin:10720/.test(s) || /flarespark|additive/.test(def ? def.name : '');
  const alphaBlend = /alpha blended|transparent|builtin:10721|sprite|ui\/|particles\/standard unlit/.test(s);
  const unlit = /unlit|particles|builtin:107(20|21)|sprite|ui\/|matcap|disable fog/.test(s);
  const params = { map, color, vertexColors: !!opts.vcolor && /vertex|particle/.test(s) };
  if (additive) {
    if (s.includes('legacy') && col) color.multiplyScalar(2);
    m = new THREE.MeshBasicMaterial({ ...params, transparent: true, blending: THREE.AdditiveBlending, depthWrite: false });
  } else if (unlit) {
    m = new THREE.MeshBasicMaterial({ ...params, transparent: alphaBlend || (col && col[3] < 1), depthWrite: !alphaBlend });
    if (s.includes('disable fog')) m.fog = false;
  } else {
    m = new THREE.MeshLambertMaterial({ ...params });
    if (def && def.floats && def.floats._Mode >= 2) { m.transparent = true; m.depthWrite = false; }
    if (def && def.floats && def.floats._Mode === 1) m.alphaTest = def.floats._Cutoff || 0.5;
    if (col && col[3] < 1 && /transparent/.test(s)) { m.transparent = true; m.opacity = col[3]; }
  }
  if (col && col[3] < 1 && m.transparent) m.opacity = col[3];
  if (opts.lightmap) {
    const lm = opts.lightmap.clone();
    lm.channel = 1;
    const [sx, sy, ox, oy] = opts.lmST;
    lm.repeat.set(sx, sy); lm.offset.set(ox, oy); lm.needsUpdate = true;
    if (m.isMeshBasicMaterial) {
      // baked-only: unlit * lightmap (dLDR, *2)
      m = new THREE.MeshLambertMaterial({ map: m.map, color: m.color, lightMap: lm, lightMapIntensity: 2.0 * Math.PI, emissive: 0 });
    } else { m.lightMap = lm; m.lightMapIntensity = 2.0 * Math.PI; }
    m.userData.lightmapped = true;
    addPatch(m, 'lm');
  }
  applyCustomShader(m, s, def, !!opts.vcolor);
  m.userData.shader = shader; m.userData.def = def; m.name = def ? def.name : 'default';
  if (def && def.floats && def.floats._Cull === 0) m.side = THREE.DoubleSide;
  if (/sprite|ui\//.test(s) || (def && /shadow|blood/i.test(def.name))) m.side = THREE.DoubleSide;
  if (def && def.queue >= 3000) m.transparent = true;
  if (!opts.unique) cache.mat.set(ckey, m);
  return m;
}

// Lightmapped surfaces (Unity LIGHTMAP_ON): ambient is already baked into the lightmap, and a Mixed light in
// Subtractive mode (all scenes use m_MixedBakeMode 2) contributes no direct light either. LM.direct is set per scene.
export const LM = { direct: { value: 1 } };
const LM_BEGIN = THREE.ShaderChunk.lights_fragment_begin.replace('vec3 irradiance = getAmbientLightIrradiance( ambientLightColor );', 'vec3 irradiance = vec3( 0.0 );');
function patchLightmapped(sh) {
  sh.uniforms.zdLmDirect = LM.direct;
  sh.fragmentShader = 'uniform float zdLmDirect;\n' + sh.fragmentShader
    .replace('#include <lights_fragment_begin>', LM_BEGIN)
    .replace('#include <lights_fragment_end>', '#include <lights_fragment_end>\n\treflectedLight.directDiffuse *= zdLmDirect;');
}

// ---------------------------------------------------------------- game shaders (formulas taken from the GLSL in data.unity3d)
// m.userData.zdPatches: list of shader patches applied in onBeforeCompile; m.userData.zdU: per-material uniforms
function addPatch(m, name) {
  const list = m.userData.zdPatches || (m.userData.zdPatches = []);
  if (!list.includes(name)) list.push(name);
  m.onBeforeCompile = runPatches; m.customProgramCacheKey = () => 'zd:' + list.join(',');
  m.needsUpdate = true;
}
export function materialUniforms(m) { return m && m.userData ? m.userData.zdU || null : null; }
function runPatches(sh) {
  for (const p of this.userData.zdPatches || []) PATCHES[p](sh, this);
}
const MAP_SAMPLE = 'vec4 sampledDiffuseColor = texture2D( map, vMapUv );';
const PATCHES = {
  lm: (sh) => patchLightmapped(sh),
  // Mobile/Diffuse ColoredAlpha: albedo = lerp(tex.rgb, _Color.rgb, tex.a)
  coloredAlpha: (sh, m) => {
    sh.uniforms.zdCol = m.userData.zdU.color;
    sh.fragmentShader = 'uniform vec3 zdCol;\n' + sh.fragmentShader.replace('#include <map_fragment>',
      '#ifdef USE_MAP\n' + MAP_SAMPLE + '\n diffuseColor.rgb = mix(sampledDiffuseColor.rgb, zdCol, sampledDiffuseColor.a);\n#endif');
  },
  // Mobile/Color Grayscale: c = tex*_Color; c = lerp(c, luma(c), _Grayscale)
  grayscale: (sh, m) => {
    sh.uniforms.zdGray = m.userData.zdU._Grayscale;
    sh.fragmentShader = 'uniform float zdGray;\n' + sh.fragmentShader.replace('#include <color_fragment>',
      '#include <color_fragment>\n diffuseColor.rgb = mix(diffuseColor.rgb, vec3(dot(diffuseColor.rgb, vec3(0.3, 0.59, 0.11))), zdGray);');
  },
  // Mobile/Diffuse HUE Saturation Brightest: hue rotation about the grey axis, brightness, saturation, * _Color,
  // applied only where vertex colour red = 1 (the paintable body); vertex colour is a mask, not a tint
  hue: (sh, m) => {
    const u = m.userData.zdU;
    sh.uniforms.zdHue = u._HUE; sh.uniforms.zdSat = u._Saturation; sh.uniforms.zdBri = u._Brightest; sh.uniforms.zdCol = u.color;
    sh.fragmentShader = 'uniform float zdHue, zdSat, zdBri; uniform vec3 zdCol;\n' + sh.fragmentShader
      .replace('#include <map_fragment>', '#ifdef USE_MAP\n' + MAP_SAMPLE + '\n diffuseColor.rgb = sampledDiffuseColor.rgb;\n#endif')
      .replace('#include <color_fragment>', HUE_GLSL);
  },
};
const HUE_GLSL = `{
  vec3 t = diffuseColor.rgb; float a = radians(zdHue), c = cos(a), sn = sin(a); const vec3 k = vec3(0.57735);
  vec3 h = t * c + cross(k, t) * sn + k * dot(k, t) * (1.0 - c);
  h *= zdBri; float l = dot(h, vec3(0.3, 0.59, 0.11)); h = mix(vec3(l), h, zdSat) * zdCol;
  #if defined( USE_COLOR ) || defined( USE_COLOR_ALPHA )
  float mask = vColor.r;
  #else
  float mask = 1.0;
  #endif
  diffuseColor.rgb = mix(t, h, mask);
}`;
function applyCustomShader(m, s, def, vcolor) {
  const f = (def && def.floats) || {};
  const colU = () => ({ value: m.color.clone() });
  if (s === 'mobile/diffuse coloredalpha') {
    m.userData.zdU = { color: colU() }; m.color.setRGB(1, 1, 1); addPatch(m, 'coloredAlpha');
  } else if (s === 'mobile/color grayscale') {
    m.userData.zdU = { _Grayscale: { value: f._Grayscale ?? 0 } }; addPatch(m, 'grayscale');
  } else if (s === 'mobile/diffuse hue saturation brightest') {
    m.userData.zdU = { color: colU(), _HUE: { value: f._HUE ?? 0 }, _Saturation: { value: f._Saturation ?? 1 }, _Brightest: { value: f._Brightest ?? 1 } };
    m.color.setRGB(1, 1, 1); m.vertexColors = true; addPatch(m, "hue"); // vertex colour = paint mask (car meshes carry it)
  }
}

// ---------------------------------------------------------------- misc
export function text(name) { return DB.texts[name]; }
export function findAsset(cat, name) { return DB.byName[cat + ':' + name] || null; }
export function prefabFile(key) { return DB.index.prefabs[key.split('#')[0]]; }
export function audioDef(ref) { return ref ? DB.index.audio[ref.split('#')[0]] : null; }
export function clipDef(ref) { return ref ? DB.index.clips[ref.split('#')[0]] : null; }
export function controllerDef(ref) { return ref ? DB.index.controllers[ref.split('#')[0]] : null; }
export function avatarDef(ref) { return ref ? DB.avatars[ref.split('#')[0]] || null : null; }
export function spriteDef(ref) { return ref ? DB.sprites[ref] || null : null; }

// mark promise values for sync access
const _origSet = cache.geo.set.bind(cache.geo);
cache.geo.set = (k, p) => { if (p && p.then) p.then((v) => { p._value = v; }); return _origSet(k, p); };
