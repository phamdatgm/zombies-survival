// Main: global bootstrap (on Resources/_MainData, kept with DontDestroyOnLoad). Holds the static data lists
// (cars, levels, achievements, encyclopedia, materials) and the player profile Main.FBDDKIOEKDM (DAFNMLEKHAD).
import { Time, Screen, Debug, Resources, SceneManager, DontDestroyOnLoad } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

let _profile = null;
const numOr = (v, d) => (typeof v === 'number' ? v : d);

export class Main extends GameBehaviour {
  static KECGFPHIEHF = null;        // instance
  // FBDDKIOEKDM: player profile (created in .cctor; lazily here because DAFNMLEKHAD lives in another module)
  static get FBDDKIOEKDM() { if (!_profile && G.DAFNMLEKHAD) _profile = new G.DAFNMLEKHAD(); return _profile; }
  static set FBDDKIOEKDM(v) { _profile = v; }
  static get CHEOEEOBMDH() { return Main.FBDDKIOEKDM; }   // property: profile
  static JKNMJKNOFJJ = false;       // ObscuredPrefs device lock initialized
  static LHBBBLINMIE = false;       // set true in Awake
  static OJDDINBFCNH = false;       // (lock flag: cars/levels unavailable when true)
  static MEJFDBADHDD = '';          // server key string (GUIMenu.title + salt + version)
  static HLCBMDDBLNE = false;       // Start() done
  static MFMCEKDMIBH = 1.0;
  static IONFLBIAGDP = 1.0;
  static LCFFGBBHMPH = 1;           // selected car id
  static HIDGNCLEBAE = null;        // GameObject
  static FFBJAKPBMOD = null;        // GameObject
  static NMDEEOMHAGP = null;        // selected Level
  static LNHNCBOIGOF = 0;           // realtimeSinceStartup when the level was selected
  static LJDGPNAOFDA = 150;         // const
  static EBAMKLGMOMC = 3;

  constructor(go, p) {
    super(go, p);
    this.EFLOANMJHJF = null;   // Translate
    this.GDPCMIGAPOM = [];     // Car[]
    this.HOAGFBCFGKN = null;   // Level (default/menu level)
    this.IHPBACJOJMA = [];     // Level[]
    this.HEIGOLFEAHJ = [];     // Achievement[]
    this.NGBIFHJDNEC = [];     // Encyclopedia[]
    this.NNMCBNGFPHF = [];     // CPFPFGOIDDO[] (encyclopedia order)
    this.DBJNKIMHIIK = 0;      // LayerMask
    this.BPNBGKOCLHM = null;   // Material car_crashed
    this.NFFBOJAIMFC = null;   // Material SimpleApocalypse
    this.CHNMADAPBIE = null;   // Material SimpleApocalypse_car_paint
    this.AKLICMLFBKC = null;   // Material car_locked
    this.PBMGAKJJIMJ = null;   // Material car_ghost
    this.GCLGLGFDEJD = null;   // IEnumerator
  }

  onDeserialize(p) {
    super.onDeserialize(p);
    // turn the serialized plain objects into the ported data classes
    const wrap = (arr, Cls) => (Array.isArray(arr) ? arr.map((o) => (o instanceof Cls ? o : new Cls(o))) : []);
    this.GDPCMIGAPOM = wrap(this.GDPCMIGAPOM, G.Car);
    this.IHPBACJOJMA = wrap(this.IHPBACJOJMA, G.Level);
    if (this.HOAGFBCFGKN && !(this.HOAGFBCFGKN instanceof G.Level)) this.HOAGFBCFGKN = new G.Level(this.HOAGFBCFGKN);
    this.HEIGOLFEAHJ = wrap(this.HEIGOLFEAHJ, G.Achievement);
    this.NGBIFHJDNEC = wrap(this.NGBIFHJDNEC, G.Encyclopedia);
    if (this.DBJNKIMHIIK && typeof this.DBJNKIMHIIK === 'object' && 'm_Bits' in this.DBJNKIMHIIK) this.DBJNKIMHIIK = this.DBJNKIMHIIK.m_Bits;
  }

  // ============================================================ logging
  // debug log (only when the "islogs" setting is on, or forced); also appended to the garage debug text
  static GEMDEAMAGPG(CIDKMFLFJEJ, ODGJCMJLLEA = false) {
    const prof = Main.FBDDKIOEKDM;
    if (!prof) return;
    if (!prof.LLEFEIHEJDE() && !ODGJCMJLLEA) return;
    Debug.Log(CIDKMFLFJEJ);
    Main._uiLog(CIDKMFLFJEJ, '#78e938');
  }
  // error log
  static EEKNCFLMGDP(CIDKMFLFJEJ) {
    Debug.LogError(CIDKMFLFJEJ);
    const prof = Main.FBDDKIOEKDM;
    if (!prof || !prof.LLEFEIHEJDE()) return;
    Main._uiLog(CIDKMFLFJEJ, '#FF4E4A');
  }
  static _uiLog(msg, color) {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu) || !alive(menu.ALPCPBBNEBA)) return;
    const gg = menu.ALPCPBBNEBA;
    let txt = gg.GJKCLADOEEL;
    if (!txt) return;
    if ((txt.text || '').length > 10000) {
      // original instantiates a fresh copy of the text object next to the old one
      txt.text = '';
    }
    txt.text = (txt.text || '') + '<color=' + color + '>[' + Time.time.toFixed(2) + ']</color> ' + String(msg) + '\n';
  }

  // ============================================================ boot
  // read the server key (GUIMenu asset)
  static NDFIFEGNEGA() {
    let title = '';
    try { const r = Resources.Load('GUIMenu'); if (r && typeof r === 'object' && r.title) title = r.title; } catch (e) { /* ignore */ }
    Main.MEJFDBADHDD = String(title) + '2val!3.$4' + String(36);   // TODO(verify): GUIMenu field read at +0x20 (title)
  }
  static KHGMGLJEOMC() { return 36; }  // version code

  // default graphics quality (DHLBGHCGAKB LOW/HIGH/ULTRA) from device memory
  static ECDNDENGEOH() {
    const mem = (typeof navigator !== 'undefined' && navigator.deviceMemory) ? navigator.deviceMemory * 1024 : 4096; // MB
    if (mem > 100) {
      if (mem < 0x514) return 0;
      // ULTRA needs "opengl 3.2"/"vulkan" in graphicsDeviceVersion: never true for WebGL
    }
    return 1;
  }

  // set all car prices to 0 (called from Awake)
  FMAKEBLBOPB() {
    for (const c of this.GDPCMIGAPOM) c.price = 0;
  }
  // premium prices/coefficients (unused)
  EJFCDFJEDKJ() {
    const cars = this.GDPCMIGAPOM;
    for (let i = 1; i < cars.length; i++) {
      const c = cars[i];
      if (c.price_premium > 0 && c.price_premium < c.price) c.price = c.price_premium;
      if (c.upgrades_coefficient !== 1.0 && c.upgrades_coefficient_premium_pc !== c.upgrades_coefficient) c.upgrades_coefficient = c.upgrades_coefficient_premium_pc;
      if (c.health_5lvl_premium > 0) c.health_array[5] = c.health_5lvl_premium;
    }
  }
  // Android: is package installed -> not on web
  static OBEOCBNIFNF(MCPCPOKDOMH) { return false; }

  // score value text (LearnToFly(5) distance is stored x10)
  static HIIJGDANAIK(EMKMCEPMMBG, KDPCGPECCLA) {
    if (KDPCGPECCLA === 5) return (EMKMCEPMMBG / 10.0).toFixed(1);
    return String(EMKMCEPMMBG);
  }
  // culture en-US -> no-op on web
  DFMNNPNGNKO() { }
  // console/gamepad platform -> false
  static KCHOEBEIOCE() { return false; }

  // achievements rewards x30 (500 on consoles)
  JIBOFEPNLIB() {
    const sn = numOr(G.BridgePHP && G.BridgePHP.sn, 0);
    for (const a of this.HEIGOLFEAHJ) {
      if (sn === 8 || sn === 9 || sn === 11 || sn === 12 || sn === 13) a.reward = 500;
      else a.reward = a.reward * 30;
    }
    Main.EBAMKLGMOMC = Main.EBAMKLGMOMC * 30;
  }

  Start() { Main.HLCBMDDBLNE = true; }

  Awake() {
    DontDestroyOnLoad(this.gameObject);
    Main.KECGFPHIEHF = this;
    Screen.sleepTimeout = -1;
    Main.LHBBBLINMIE = true;
    this.FMAKEBLBOPB();
    this.DFMNNPNGNKO();
    Main.NDFIFEGNEGA();
    Main.FBDDKIOEKDM.BJHLLKHDOJP();
    // tail call: Translate.CCHEMMCPAOO (choose language and load texts)
    if (this.EFLOANMJHJF) this.EFLOANMJHJF.CCHEMMCPAOO();
  }

  // create a fresh profile and load everything from PlayerPrefs
  IJMHKMJLFIL() {
    const p = new G.DAFNMLEKHAD();
    Main.FBDDKIOEKDM = p;
    p.BJHLLKHDOJP();
    p.LKLNJILJNIA();
    return p;
  }

  // coroutine: fade an AudioSource in (MCBLACFGKKK.In: 0 -> 0.7, starts playing) or out (current -> 0, then stops)
  *PHHOKLGPEEG(OFELMIBEHHO, GMFAMFJABMJ, PPBAKHIEGAD) {
    const isIn = PPBAKHIEGAD === 0;
    const from = isIn ? 0 : OFELMIBEHHO.volume;
    const to = isIn ? 0.7 : 0;
    let t = 0;
    const inv = 1.0 / GMFAMFJABMJ;
    if (isIn) OFELMIBEHHO.Play();
    while (t <= 1.0) {
      t += inv * Time.deltaTime;
      const k = Math.min(1, Math.max(0, t));
      OFELMIBEHHO.volume = from + k * (to - from);
      yield inv * Time.deltaTime;
    }
    if (PPBAKHIEGAD === 1) OFELMIBEHHO.Stop();
  }

  // load scene (stops garage / race music first)
  static EBIEJDOBOCP(MEKGFADMHKJ) {
    const S = G.SoundScript;
    const scene = SceneManager.GetActiveScene();
    const bi = scene.buildIndex;
    if (bi === 0) {
      if (S.FPOJDHNIFPP && S.FPOJDHNIFPP.isPlaying) S.FPOJDHNIFPP.Stop();
    } else if (bi >= 1) {
      const cc = G.CarController && G.CarController.KECGFPHIEHF;
      if (alive(cc)) {
        if (S.IMKHCBJCJNB) S.IMKHCBJCJNB.Pause();
        if (cc.ECNAMAJCDGI) cc.ECNAMAJCDGI.Stop();
      }
      if (S.LONDFMJFHEL && S.LONDFMJFHEL.isPlaying && scene.name !== MEKGFADMHKJ) S.LONDFMJFHEL.Stop();
      S.HCPNLKMMKFA();
    }
    return SceneManager.LoadScene(MEKGFADMHKJ);
  }

  static INDLECIBMOB() { return Main.FBDDKIOEKDM; }   // profile

  // elastic ease from JGBIHEGEMJP to HPHJFKDLPKG at t
  static ACIOEKHCEOE(JGBIHEGEMJP, HPHJFKDLPKG, ALLBGCHDGNC) {
    let t = ALLBGCHDGNC;
    if (t > 1.0) t = 1.0;
    if (ALLBGCHDGNC < 0.0) t = 0.0;
    const s = Math.sin(t * 3.1415927 * (t * t * t * 2.5 + 0.2));
    const pw = Math.pow(1.0 - t, 2.2);
    return (HPHJFKDLPKG - JGBIHEGEMJP) * ((1.0 - t) * 1.2 + 1.0) * (t + pw * s) + JGBIHEGEMJP;
  }

  // time text from centiseconds: "m:ss.ss" ("- - -" for 0)
  static CHJONPOFGFA(FPHFKCCPAEF) {
    if (FPHFKCCPAEF === 0) return '- - -';
    const f = FPHFKCCPAEF / 100.0;
    const m = Math.trunc(Math.trunc(f) / 60);
    const s = f % 60.0;
    let ss = s.toFixed(2); if (ss.length < 5) ss = '0' + ss;
    return String(m) + ':' + ss;
  }

  // exponential ease (1 - e^(-10t))
  static BKPNLKDKAKA(JGBIHEGEMJP, HPHJFKDLPKG, ALLBGCHDGNC) {
    return (HPHJFKDLPKG - JGBIHEGEMJP) * (1.0 - Math.exp(ALLBGCHDGNC * -10.0)) + JGBIHEGEMJP;
  }

  // Android API level >= 21 (Tenjin) -> web: -1 -> true
  static MMAOMJMAENM() {
    const v = Main.FAOGGIELDDF();
    if (v !== -1 && v < 21) Main.GEMDEAMAGPG('Old device detected. Tenjin disabled!');
    return v === -1 || v > 20;
  }
  static FAOGGIELDDF() { return -1; }
}
define('Main', Main);

// Main.NEFHOJFJODH: compiler generated coroutine class of PHHOKLGPEEG (kept for reference; use the generator)
Main.NEFHOJFJODH = class NEFHOJFJODH {
  constructor(state = 0) { this.state = state; this._audio = null; this.timer = 1; this.fadeType = 0; }
};
