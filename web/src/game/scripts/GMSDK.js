// [web] GMSoft boot scene component (same role as the GMSDK prefab of the GMSoft Unity SDK, see Sonic-Dash
// Assets/Scene/GMSoft.unity): the `gmsoft` scene is loaded FIRST; this component waits for the portal SDK
// (JS_SDK_2.0: GMGameSDK init + player sign-in) and then loads `targetScene`, the first scene of the game.
// Not part of the original game: no fieldtypes entry, serialized fields come straight from assets/scenes/gmsoft.json.
import { SceneManager, DontDestroyOnLoad } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';
import { startGmSdk } from '../../sdk/gmsdk.js';

const SDK_WAIT_MS = 5000;   // never hold the game longer than this on a slow / blocked SDK

export class GMSDK extends GameBehaviour {
  static Instance = null;
  static targetLoaded = null;   // Promise: resolves once targetScene is loaded (boot.js waits on it)

  constructor(go, p) {
    super(go, p);
    this.targetScene = 'garage';   // serialized (gmsoft.json)
    this.sdk = null;               // GMGameSDK instance once ready, or null
  }

  Awake() {
    if (GMSDK.Instance && GMSDK.Instance !== this) { this.gameObject.SetActive(false); return; }
    GMSDK.Instance = this;
    DontDestroyOnLoad(this.gameObject);
    GMSDK.targetLoaded = this.boot();
  }

  async boot() {
    const timeout = new Promise((r) => setTimeout(() => r(null), SDK_WAIT_MS));
    this.sdk = await Promise.race([startGmSdk(), timeout]);
    if (!this.sdk) console.warn('[GMSDK] SDK not ready, loading the game anyway');
    return SceneManager.LoadScene(this.targetScene);
  }
}
define('GMSDK', GMSDK);
