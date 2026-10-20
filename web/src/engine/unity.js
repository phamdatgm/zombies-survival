// Barrel module: Unity-like API surface for ported game scripts.
export * from './umath.js';
export { Time, GameObject, Component, Transform, Destroy, DontDestroyOnLoad, World, WaitForSeconds, WaitForSecondsRealtime, WaitUntil, WaitWhile, setTimeoutGame } from './core.js';
export { Rigidbody, Collider, BoxCollider, SphereCollider, CapsuleCollider, MeshCollider, Physics, Layers, LayerMask, ForceMode, RigidbodyConstraints, RaycastHit, Collision } from './physics.js';
export { MeshFilter, MeshRenderer, SkinnedMeshRenderer, Renderer, Light, Camera } from './render.js';
export { Animator, Animation } from './anim.js';
export { AudioSource, Audio } from './audio.js';
export { ParticleSystem } from './particles.js';
export { Input, KeyCode } from './input.js';
import { preload } from './scene.js';
export { Instantiate, SceneManager, registerScript, preload, isPreloaded } from './scene.js';
import { findAsset, DB, makeMaterial, text } from './assets.js';

export { PlayerPrefs } from './prefs.js';

export const Resources = {
  // Resources.Load(path): returns the asset key ('@Resources/<path>') usable by Instantiate()/Audio/Image.sprite...
  // TextAssets are returned as { text } objects.
  Load(path) {
    const key = '@Resources/' + path;
    const idx = DB.index;
    if (idx.prefabs[key]) return key;
    if (idx.audio[key]) return key;
    if (idx.textures[key]) return key;
    if (idx.materials[key]) return key;
    const name = path.split('/').pop();
    if (DB.texts[name] !== undefined) return { text: DB.texts[name], name };
    return findAsset('prefabs', name) || findAsset('audio', name) || null;
  },
  async preloadAll(onProgress) {
    const keys = Object.keys(DB.index.prefabs); let n = 0;
    await Promise.all(keys.map((k) => preload(k).then(() => { n++; onProgress && onProgress(n / keys.length); })));
  },
  prefab(name) { return findAsset('prefabs', name); },
  audio(name) { return findAsset('audio', name); },
  text(name) { return text(name); },
  material(name) { const k = findAsset('materials', name); return k ? makeMaterial(k) : null; },
};

export const Screen = {
  get width() { return innerWidth; }, get height() { return innerHeight; },
  get dpi() { return 96 * devicePixelRatio; },
  sleepTimeout: 0,
};

export const Application = { platform: 'WebGLPlayer', isMobilePlatform: /Android|iPhone|iPad/i.test(navigator.userAgent), targetFrameRate: 60, version: '1.0.29', systemLanguage: navigator.language };

export const Debug = { Log: (...a) => console.log(...a), LogWarning: (...a) => console.warn(...a), LogError: (...a) => console.error(...a), DrawLine() { }, DrawRay() { } };
export { Canvas, Image, RawImage, Text, Button, Toggle, Slider, CanvasGroup, ScrollRect, HorizontalLayoutGroup, VerticalLayoutGroup, GridLayoutGroup, LayoutElement, ContentSizeFitter, EventTrigger, UnityEvent, uiDirty, rectSize, SetSizeWithCurrentAnchors, UI } from './ugui.js';
export { Registry } from './scene.js';
