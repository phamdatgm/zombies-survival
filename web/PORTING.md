# Porting guide: IL2CPP decompile → JS (Zombie Derby: Pixel Survival)

Audience: whoever ports a C# `MonoBehaviour` from the Ghidra output into a JS class for this engine.

## Sources
- `dump/decompiled/<Class>.c` — Ghidra pseudo-C of every method, post-processed:
  `this.FIELD` = instance field, `Class.FIELD` = static field, `lVarN/*Type*/.FIELD` = typed local (hint only, verify),
  `il2cpp_throw_967b50()` = NullReferenceException (treat as unreachable), `func_0x00a67a30()` = class init (ignore),
  `func_0x00a67900(&X)` = metadata init (ignore). `X.<statics>` = static field block of X.
  Each file starts with the class definition (fields + offsets) from Il2CppDumper.
- `python -I _tools/scripts/show.py <Class> [MethodNameSubstr...]` prints methods compactly; `--list` lists methods; `--def` prints the definition.
- `dump/il2cpp/by_assembly/Assembly-CSharp.cs` — all class definitions; `UnityEngine.*.cs` there for engine field layouts.
- Serialized data (scene/prefab values) are in `web/assets/scenes/*.json`, `web/assets/prefabs/*.json`.

### Reading Ghidra ARM64 output
- Vector3-returning calls appear as `fVar = (float)UnityEngine_Transform__get_position(t,0)`; the y/z parts come back in the *next* float registers (`in_s1`, `in_s2` or the variables Ghidra assigned just after). Vector3 arguments are passed as 3 floats.
- `UnityEngine_Object__op_Inequality(x,0)` / `op_Implicit` = `x != null` (also false when destroyed → use `alive(x)`).
- `*(float *)(lVar + 0x3c)` where `lVar = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8)` / `UnityEngine_Vector3.<statics>` are Vector3 statics:
  `0x0 zero, 0xc one, 0x18 up, 0x24 down, 0x30 left, 0x3c right, 0x48 forward, 0x54 back`. Quaternion statics `0x0 identity`.
- Arrays: `+0x18` length, elements at `+0x20 + i*size`. `List<T>`: `+0x10` items array, `+0x18` count. Strings: `+0x10` length, chars at `+0x14`.
- ACTk `ObscuredInt/ObscuredFloat/ObscuredBool`: calls like `ObscuredInt__op_Implicit` / `...InternalDecrypt` just read/write the plain value — use a plain number.
- `(*pcRam...)(...)` indirect calls are icalls resolved by name: the `func_0x00a678c4(&UNK_xxx)` string names the icall — infer from context (often Animator.Play, Transform setters, Physics).
- Constants: `0x3f800000`=1.0f, `0x40000000`=2, `0x3f000000`=0.5, `0x41200000`=10, `0x42c80000`=100, `0x3e4ccccd`=0.2, `0x3dcccccd`=0.1, `0xbf800000`=-1. Decode others with `struct.unpack('<f', bytes.fromhex(...)[::-1])` (big-endian hex → float).
- Enum values are named in the dump (e.g. `GBLIKCKFCBH walk=0 ...`); use those names in comments.

## Engine API (web/src/engine) — Unity semantics, Unity coordinate space
Import from `../../engine/unity.js` (barrel) and `../base.js`, `../G.js`, `../util.js`.
Scripts run entirely in **Unity space** (left-handed, Euler ZXY degrees). The engine converts to three.js internally. Never touch `.obj` (three.js object) unless needed for rendering hacks.

- `Vector3/Vector2/Quaternion/Color/Mathf/Random` like Unity. Vectors are immutable-style: `a.add(b)`, `a.sub(b)`, `a.mul(s)`, `Vector3.Dot/Cross/Lerp/Distance`, `v.magnitude`, `v.normalized`, `q.mul(q2)`, `q.rotate(v)` (= `q * v`), `Quaternion.Euler(x,y,z)`, `.eulerAngles`.
- `GameObject`: `name, tag, layer, activeSelf, activeInHierarchy, SetActive(b), transform, GetComponent(ClassOrName), GetComponents, GetComponentInChildren(t, includeInactive), GetComponentsInChildren, GetComponentInParent, AddComponent(Class, props?), CompareTag`, statics `GameObject.Find(name)`, `FindWithTag`, `FindGameObjectsWithTag`.
- `Transform`: `position, rotation, localPosition, localRotation, localScale, eulerAngles, localEulerAngles, forward, right, up, parent, SetParent(p, worldStays), childCount, GetChild(i), Find(path), root, Translate, Rotate, RotateAround, LookAt, TransformPoint, InverseTransformPoint, TransformDirection, InverseTransformDirection, lossyScale`, iterable (`for (const ch of t)`). RectTransform extras (UI objects): `anchoredPosition, sizeDelta, anchorMin/Max, pivot, rect`.
- `Component`/`GameBehaviour` (base for ported scripts, `web/src/game/base.js`): `gameObject, transform, enabled, isActiveAndEnabled, name, tag, GetComponent*, StartCoroutine(genFn | generator), StopCoroutine, StopAllCoroutines, Invoke(name, t), InvokeRepeating, CancelInvoke, SendMessage, CompareTag, ref(v)`.
  Lifecycle methods (same names as Unity): `Awake, OnEnable, Start, Update, FixedUpdate, LateUpdate, OnDisable, OnDestroy, OnCollisionEnter/Stay/Exit(collision), OnTriggerEnter/Stay/Exit(otherCollider), OnBecameVisible/OnBecameInvisible`, UI: `OnPointerDown/Up/Click(eventData)`.
  `Start()` may be a generator (coroutine) just like C# `IEnumerator Start()`.
- Coroutines: generator functions. `yield 0.5` (WaitForSeconds), `yield null` (next frame), `yield WaitForSecondsRealtime(s)`, `yield WaitUntil(fn)`, `yield otherGenerator`. Start with `this.StartCoroutine(this.Foo())` where `*Foo() { ... }`.
- `Instantiate(prefabKeyOrGameObjectOrComponent, pos?, rot?, parent?)` (sync; all prefabs are preloaded at boot). Prefab keys are strings like `'@Resources/FX_Explosion_Big'` (exactly the value stored in serialized fields). `Resources.Load('FX_Explosion_Big')` returns that key (or `{text}` for TextAssets). `Destroy(objOrComponent, delay?)`, `DontDestroyOnLoad(go)`.
- `Time.deltaTime, fixedDeltaTime (0.0167), time, timeScale, unscaledDeltaTime, frameCount`.
- Physics: `Rigidbody` (`velocity, angularVelocity (rad/s), mass, drag, angularDrag, useGravity, isKinematic, constraints, centerOfMass, worldCenterOfMass, position, rotation, AddForce(v, ForceMode.X), AddTorque, AddForceAtPosition, AddRelativeForce, AddExplosionForce, MovePosition, MoveRotation, GetPointVelocity, Sleep, WakeUp, maxAngularVelocity`), colliders (`BoxCollider{center,size}`, `SphereCollider`, `CapsuleCollider`, `MeshCollider`, all have `enabled, isTrigger, bounds, attachedRigidbody`), `Physics.Raycast(origin, dir, maxDist, layerMask)` → `RaycastHit|null` (`point, normal, distance, collider, transform, gameObject, rigidbody`), `Physics.RaycastAll`, `SphereCast`, `OverlapSphere`, `Linecast`, `IgnoreLayerCollision`. `Collision`: `gameObject, collider, rigidbody, transform, relativeVelocity, contacts[{point, normal}], GetContact(i)`.
  `Layers.NameToLayer('zombie')`, `Layers.GetMask(...)`, `LayerMask` same object. Layers: 0 Default, 8 car, 9 wheel, 10 ground, 11 zombie, 12 zombie_parts, 13 dynamic_obstacle, 14 dyn_obst_nofire, 15 dyn_obst_trigger, 16 baked, 17 Default_NoProjector.
  Note: a `Raycast` returns the hit object or `null` (instead of `bool + out hit`).
- Rendering: `MeshRenderer/SkinnedMeshRenderer` (`enabled, material (instance), sharedMaterial, materials, isVisible, setLightmap(index, [sx,sy,ox,oy])`), materials are three.js materials; assigning a material key string (e.g. `'@Material/car_crashed#2100000'`) also works. `material.color` is a THREE.Color. `Camera.main` (`fieldOfView, WorldToScreenPoint, cam` (three camera)). `Light`.
- `Animator`: `Play(state), CrossFade(state, normDur), SetTrigger/SetBool/SetFloat/SetInteger, GetCurrentAnimatorStateInfo().IsName/normalizedTime, speed, enabled, applyRootMotion`. `Animation` (legacy): `Play(name), isPlaying`.
- `AudioSource` (`clip, Play, Stop, PlayOneShot(clipKey, vol), volume, pitch, loop, isPlaying, mute`), `Audio.playOneShot(clipKey, vol, pitch)`. Clip keys are serialized strings like `'@AudioClip/gun_5#8300000'`.
- `ParticleSystem`: `Play(), Stop(), Emit(n), Clear(), isPlaying, emission.enabled, emission.rateOverTime(Multiplier), main.startColor/startSpeed/startSize/startLifetime/duration/loop`.
- Input: `Input.GetKey(KeyCode.W)`, `GetKeyDown`, `GetMouseButton*`, `Input.throttle/brake/fire/nitro/tilt` (high-level, keyboard+gamepad+virtual), `Input.setVirtual(name, bool)`.
- UI (uGUI rendered to DOM, `engine/ugui.js`): `Text{text, color, fontSize}`, `Image{sprite (sprite key string), color, fillAmount, type, enabled}`, `RawImage`, `Button{interactable, onClick.AddListener(fn), onClick.Invoke()}`, `Toggle{isOn}`, `Slider{value}`, `CanvasGroup{alpha, interactable, blocksRaycasts}`, `ScrollRect`, layout groups. Serialized button `m_OnClick` calls dispatch by **method name** to the target component (e.g. `GUIGarage.ButtonPlay()`), so keep those names.
- `SceneManager.LoadScene(name)` (async inside; returns a promise), `SceneManager.GetActiveScene().name`.
- `PlayerPrefs` (localStorage): `GetInt/SetInt/GetFloat/SetFloat/GetString/SetString/HasKey/DeleteKey/Save`. ACTk `ObscuredPrefs` → use PlayerPrefs.
- `Screen.width/height`, `Application.platform` ('WebGLPlayer'), `Debug.Log`.
- `web/src/game/util.js`: `hexInts`, `parseIni`, `Lang.get(key)` (Translate), `T(key)`.
- `web/src/game/base.js`: `GameBehaviour` (auto-loads serialized fields with their C# types from `fieldtypes.json`: refs resolved to GameObject/Transform/Component, `int[]`/`float[]` hex decoded, Vector3/Color objects, nested classes), `alive(x)`, `FindObjectOfType(t)`, `FindObjectsOfType(t)`, `define(name, Class)`.

## Conventions for ported scripts
- One file per C# class: `web/src/game/scripts/<ClassName>.js` (nested classes like `CarController.CarColor` go in the parent's file).
- Keep the **obfuscated field and method names exactly** (serialized data and cross-class calls use them). Add a short comment with the inferred meaning, e.g. `// speed`.
- Cross-class references go through the registry: `G.CarController.KECGFPHIEHF` (static instance), `G.Main.FBDDKIOEKDM` etc. Never import another script file directly (import cycles); only import engine/base/G/util.
- Static fields: `static FIELD = default;` on the class. Constants (`const`) as `static` too.
- Instance non-serialized fields: initialise in the constructor (values from `.ctor` decompile). Serialized fields are loaded automatically by `GameBehaviour.onDeserialize` (override + `super.onDeserialize(p)` if needed).
- Template:
```js
import { Vector3, Quaternion, Time, Physics, Layers, Instantiate, Destroy } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class Zombie extends GameBehaviour {
  static KECGFPHIEHF = null;          // static instance (if any)
  constructor(go, p) {
    super(go, p);
    this.NBCLGLJCBAP = 5.3;           // move speed (from .ctor)
  }
  Start() { ... }
  Update() { ... }
  LJLGIPJCHFC(LPGJFJBOIHE) { ... }    // keep obfuscated method names + params
}
define('Zombie', Zombie);
```
- C# **properties** (`get_X`/`set_X` in the decompile) → JS `get X()` / `set X(v)` accessors with the same name; static properties → `static get X()`.
- **Overloads** (same name, different params): ONE JS method that dispatches on `arguments.length` / `typeof`. If one overload is an `IEnumerator` coroutine and another a normal method with the same name, name the coroutine variant `<Name>_co` (callers that `StartCoroutine(...)` it use that). Keep this rule — other people's code calls yours.
- Enums: `import { E } from '../enums.js'` → `E.GBLIKCKFCBH.walk` (nested enums use `_`: `E.GUIGameplay_POFCDOMOIBH.accel`).
- Delegates/events (MulticastDelegate subclasses) → plain JS functions / arrays of callbacks.
- Plain data classes (not MonoBehaviour, e.g. `DAFNMLEKHAD`, `Level`, `Car`) → normal JS classes (not GameBehaviour); still register them with `G.Name = Name` (no `define`).
- Removed-SDK classes already exist as no-op stubs in `web/src/game/scripts/_stubs.js` (AdvController, AnalyticsController, Purchaser, BridgePHP, RatingController, RatingEventController, GUIRating, RateMe, NotificationsManager, SteamManager, AdvertyBannerSpawner, AccelerometerFix, DebugConsole, HierarchyRecorder, native bridges). Calls into them may remain but must not be required for gameplay.
- Remove/neutralise: ads (AdvController, Adverty, AppLovin MAX), IAP (Purchaser), analytics, notifications, rating/leaderboards/server (BridgePHP, RatingController), rate-me, Steam/GPGS/GameCenter, social links (Facebook/Instagram/TikTok/VK/Twitter). Where gameplay depends on them (e.g. "watch ad to double reward"), give the reward directly or hide the button, and leave a `// [removed: ads]` comment.
- Unknown/irrelevant platform branches (console, iOS, Steam): take the Android/default path.
- Prefer faithfulness to the decompiled logic (numbers, conditions, order). If something is unclear, implement the most plausible behaviour and mark it `// TODO(verify)`.
