// No-op replacements for removed SDK / online / platform classes:
// ads (AppLovin MAX, Adverty), IAP, analytics, notifications, server bridge, ratings, rate-me,
// Steam / Google Play Games / Game Center, social links, native bridges, debug tools.
// Any method call on them is accepted and does nothing (returns undefined/false).
import { GameBehaviour, define } from '../base.js';
import { G } from '../G.js';

const NOOP = () => undefined;
function stubProxy(target) {
  return new Proxy(target, {
    get(t, k, r) {
      if (k in t) return Reflect.get(t, k, r);
      if (typeof k === 'symbol' || k === 'then') return undefined;
      return NOOP;
    },
  });
}

function makeStub(name, extra = {}) {
  class Stub extends GameBehaviour {
    constructor(go, p) { super(go, p); Object.assign(this, extra); return stubProxy(this); }
    Awake() { Stub.KECGFPHIEHF = this; }
  }
  Object.defineProperty(Stub, 'name', { value: name });
  Stub.KECGFPHIEHF = null;
  const P = stubProxy(Stub);
  define(name, Stub);
  G[name] = P;
  return P;
}

for (const n of ['AdvController', 'AnalyticsController', 'Purchaser', 'BridgePHP', 'RatingController', 'RatingEventController', 'GUIRating',
  'RateMe', 'NotificationsManager', 'SteamManager', 'AdvertyBannerSpawner', 'AccelerometerFix', 'DebugConsole', 'HierarchyRecorder',
  'AndroidNativeUtils', 'IosNativeUtils', 'NativeBridge', 'NativeDebug', 'NativeLogger', 'NativeMessageSystem', 'NativeRedirectionDialogBridge',
  'AndroidRenderingPlugin', 'AndroidWebViewTextureBridge', 'IosWebViewTextureBridge', 'BaseWebViewTextureBridge', 'IosWebViewTexture', 'OsxUtils',
  'MeshCombiner', 'GamePadController']) makeStub(n);

// plain (non-MonoBehaviour) helper classes that are online/notification only
G.JCHCJLKJJNF = stubProxy({}); // android notifications
G.KKDJDGPGFPN = stubProxy({}); // notification scheduling
G.Rating = stubProxy({});
