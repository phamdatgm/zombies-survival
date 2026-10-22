// Menu.cs — garage-scene controller / app-level singleton (DontDestroyOnLoad).
// Boots the garage scene (creates Main from Resources/_MainData), refreshes the garage car / shop,
// handles back key, car switching, pause on focus loss, race start (coroutine IGIGAHEKBHB) etc.
// Removed: server login/sync (BridgePHP), IAP restore (Purchaser), analytics, notifications, rate-me,
// interstitial/rewarded ads (AdvController/MAX), GDPR, console/gamepad specific branches.
import {
  Time, Input, KeyCode, Mathf, Color, Vector3, Physics, Layers, Instantiate, Destroy, DontDestroyOnLoad,
  Resources, SceneManager, Rigidbody, Image, Audio, Application, PlayerPrefs, uiDirty,
} from '../../engine/unity.js';
import { GameBehaviour, alive, define, FindObjectOfType } from '../base.js';
import { G } from '../G.js';
import { T } from '../util.js';

// ---------------------------------------------------------------- helpers
const P = () => G.Main && G.Main.FBDDKIOEKDM;            // player profile (DAFNMLEKHAD)
const tr = (k) => { const t = G.Translate && G.Translate.KECGFPHIEHF; return t && t.JJJNIPAKLJF ? t.JJJNIPAKLJF(k) : T(k); };
const log = (m) => { try { G.Main && G.Main.GEMDEAMAGPG && G.Main.GEMDEAMAGPG(m); } catch (e) { /* debug only */ } };
const goOf = (x) => (x ? (x.gameObject || x) : null);
const activeSelf = (x) => { const g = goOf(x); return !!g && g.activeSelf; };
const setActive = (x, v) => { const g = goOf(x); if (g) g.SetActive(v); };
const setText = (t, s) => { if (t) t.text = s; };
const isBool = (v) => v === true;                          // stub proxies return functions for unknown fields
const msOf = (d) => (d instanceof Date ? d.getTime() : typeof d === 'number' ? d : d ? +new Date(d) : 0);
const cars = () => (G.Main && G.Main.KECGFPHIEHF && G.Main.KECGFPHIEHF.GDPCMIGAPOM) || [];
const curCar = () => (G.Car ? G.Car.Current : null);
// UnityEngine.AudioListener.volume (global master volume)
const AudioListener = {
  get volume() { return Audio.master ? Audio.master.gain.value : 1; },
  set volume(v) { if (Audio.master) Audio.master.gain.value = v; },
};
// RectTransform.offsetMin setter (engine only has the getter): keeps offsetMax, changes the y of offsetMin
function setOffsetMinY(t, y) {
  const r = t && t.gameObject && t.gameObject.rect; if (!r) return;
  const curY = r.anchoredPosition[1] - r.sizeDelta[1] * r.pivot[1];
  const d = y - curY; if (d === 0) return;
  r.sizeDelta = [r.sizeDelta[0], r.sizeDelta[1] - d];
  r.anchoredPosition = [r.anchoredPosition[0], r.anchoredPosition[1] + d * (1 - r.pivot[1])];
  uiDirty();
}
const ADS_AVAILABLE = false; // [removed: ads] AdvController.HNDMJBICLJF / MaxSdk rewarded checks

export class Menu extends GameBehaviour {
  static KECGFPHIEHF = null;     // singleton
  static EDEIMBMNPEK = 0;        // const
  static BKPLPHAFFJM = 180;      // const
  // statics (values from .cctor)
  static CCCHHLJEBKK = false;    // return to map after race
  static NAHIIOCLEMH = false;    // skip interstitial on next garage load
  static EDICJCHCNCB = false;    // game paused by focus loss (blocks music restart)
  static OLFGGHMPPCK = false;    // help window was open when paused
  static MDLMIEDLJMC = true;     // current scene is the garage
  static NDMIIEOKFGB = true;     // first garage load of the session
  static DHDINHBJPFH = true;     // offer detected (set by NHEEMPFMAHD)
  static MCGFPLMDEKJ = false;    // show offers on next garage load
  static DPDMJEDMEDK = 0;        // offer type / level id to show
  static ENGJPOMIPFI = 0;        // saved AudioListener.volume
  static JNJPCFMBDIB = false;    // rate-me already shown this session
  static FDPCJJJDGNH = false;
  static BOAENEJELJP = false;
  static GCDHNMAHOEP = 0;        // time of last window open (anti double-click)
  static LLBGFMMKKHJ = false;
  static GKEKNNOODHM = true;

  constructor(go, p) {
    super(go, p);
    this.ALPCPBBNEBA = null;     // GUIGarage
    this.LCCECGFFBGC = null;     // FuelManager
    this.JJCNCKIDDKN = null;     // NotificationsManager (stub)
    this.ANIMNONMFFH = null;     // AdvController (stub)
    this.OJJAEEGGHJM = null;     // AnalyticsController (stub)
    this.LDPFGAGNBEI = null;     // Purchaser (stub)
    this.DGKLJGCAGBJ = null;     // BridgePHP (stub)
    this.ONNBLPAKJHK = null;     // GamePadController (stub)
    this.FKLKNBMKDEK = null;     // CanvasConsoleTips prefab
    this.PPIFMMPACNC = null;     // CanvasConsoleTips instance
    this.HNAPOCNADJP = null;     // ConsoleTipsBottom
    this.OLLGOBJFFDI = false;    // hp_info shown once
    this.NIKKHEDGOBB = false;    // garage tutorial already completed
    this.HBKNDNGHNDI = false;    // garage tutorial 2 allowed (set on scene load)
    this.LADJPNBMCBN = false;    // show upgrade tutorial (bought first upgrade)
    this.GPGANGNBJLL = null;     // ShopItem offered as rewarded upgrade
    this.LFGJCCPJGNK = false;    // rewarded item already chosen
    this.CGHGJEECHDM = 0;        // KKMHKJEGDLA achievement id being claimed
    this.EMCBONCDHGN = null;     // blink coroutine
    this.KEFNAKGDLHF = false;
    this.BBMHNGJMKNL = false;    // cheat detected
    this.AALDIFOPHHP = 0x29a;    // staged init step (666 = idle)
    this.FKKGIALDFNG = null;     // AccelerometerFix (stub)
    this._dup = false;
  }

  // ---------------------------------------------------------------- lifecycle
  Awake() {
    if (alive(Menu.KECGFPHIEHF) && Menu.KECGFPHIEHF !== this) { this._dup = true; Destroy(this.gameObject); return; }
    this._onSceneLoaded = (name) => this.PHJCEJEOECH({ name, buildIndex: SceneManager.buildIndex(name) }, 0);
    SceneManager.onLoaded.push(this._onSceneLoaded);
    DontDestroyOnLoad(this.gameObject);
    Menu.KECGFPHIEHF = this;
    if (!(G.Main && alive(G.Main.KECGFPHIEHF))) {
      const key = Resources.Load('_MainData');
      if (key) Instantiate(key);
    }
    // browser equivalents of OnApplicationFocus / OnApplicationPause
    this._onBlur = () => this.OnApplicationFocus(false);
    this._onVis = () => this.OnApplicationPause(document.hidden);
    addEventListener('blur', this._onBlur);
    document.addEventListener('visibilitychange', this._onVis);
  }
  OnDestroy() {
    if (this._dup) return;
    if (this._onSceneLoaded) { const i = SceneManager.onLoaded.indexOf(this._onSceneLoaded); if (i >= 0) SceneManager.onLoaded.splice(i, 1); }
    if (this._onBlur) removeEventListener('blur', this._onBlur);
    if (this._onVis) document.removeEventListener('visibilitychange', this._onVis);
    if (Menu.KECGFPHIEHF === this) Menu.KECGFPHIEHF = null;
  }
  Start() {
    if (this._dup) return;
    const p = P();
    // [removed: GDPR] original only starts the staged init when !AIMCLDENEOB() (GDPR accepted)
    if (p) this.AALDIFOPHHP = 0;
    this.AOJCIOLIMHF();
    this.PDCEALBDDHD();
    this.FMEHJALLGBK();
    if (!Menu.GKEKNNOODHM && G.GamePadController) G.GamePadController.AMHELLCDICB = 'A';
  }
  Update() {
    if (this._dup) return;
    // [removed: notifications / ads update]
    if (!Menu.MDLMIEDLJMC) return;
    this.IKHLIHGCCHH();
    if (Input.GetKeyDown(KeyCode.Escape)) this.AFPLNBDNJHM();
    if (Input.GetKeyDown(KeyCode.RightArrow)) this.BMIIEMFFFEO();
    else if (Input.GetKeyDown(KeyCode.LeftArrow)) this.LJDEGMJCOIG();
  }
  OnApplicationFocus(BBOGLNPKKGI) { if (BBOGLNPKKGI) return; this.DEEFHDJMBAC(); }
  OnApplicationPause(HNCPGIHKOML) {
    if (!HNCPGIHKOML) {
      if (alive(this.LCCECGFFBGC) && this.LCCECGFFBGC.AFCKJABEJKI) this.LCCECGFFBGC.AFCKJABEJKI(); // fuel refresh after resume
      // [removed: notifications, AccelerometerFix]
      return;
    }
    this.DEEFHDJMBAC();
  }

  // scene loaded callback (SceneManager.sceneLoaded)
  PHJCEJEOECH(ODGHBELBCEK, CFNJMFOGJNA) {
    log('Scene loaded: ' + ODGHBELBCEK.buildIndex + ' in mode ' + CFNJMFOGJNA + ', is first load garage: ' + Menu.NDMIIEOKFGB);
    Menu.MDLMIEDLJMC = ODGHBELBCEK.name === 'garage';
    Menu.OLFGGHMPPCK = false;
    this.HBKNDNGHNDI = true;
    Menu.GCDHNMAHOEP = Time.time;
    if (Time.timeScale < 1) { Time.timeScale = 1; AudioListener.volume = Menu.ENGJPOMIPFI; }
    this.PJEHMAFCMLI();
    if (!(G.Main && G.Main.LHBBBLINMIE)) this.enabled = Menu.MDLMIEDLJMC;
  }

  // staged init spread over frames after Start
  IKHLIHGCCHH() {
    if (this.AALDIFOPHHP >= 0x1f) return;
    switch (this.AALDIFOPHHP) {
      case 2: { // [removed: server protocol check / login]
        const p = P(); if (p && p.LKLNJILJNIA) p.LKLNJILJNIA();
        break;
      }
      case 3: {
        const m = G.Main && G.Main.KECGFPHIEHF; const t = m && m.EFLOANMJHJF;
        if (alive(t) && alive(t.CCEPOBMNPFA)) { t.CCEPOBMNPFA.DPJAADHMLIA && t.CCEPOBMNPFA.DPJAADHMLIA(); t.OGEJCBEMJLE && t.OGEJCBEMJLE(); }
        const g = this.ALPCPBBNEBA;
        if (alive(g)) { g.EGEFDJDCKDJ && g.EGEFDJDCKDJ(); if (g.PIIFOJPCFOB) g.PIIFOJPCFOB.FHBDLLGMOFN(); }
        break; // [removed: analytics]
      }
      case 4: break; // [removed: notifications / ads init]
      case 5: this.NHEEMPFMAHD(); break; // [removed: Purchaser init]
      case 6: this.OCCACLIDKCM(); break; // [removed: BridgePHP.Login]
    }
    this.AALDIFOPHHP++;
  }

  // ---------------------------------------------------------------- settings toggles
  // toggle sound effects
  OBLKMKHMBEA() {
    const p = P(); if (!p) return;
    p.MCDGKFFGABE(!p.BMMOMBGDEKF());
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(cc) || !alive(cc.ECNAMAJCDGI)) return;
    if (!p.BMMOMBGDEKF()) cc.ECNAMAJCDGI.Stop();
    else { if (Menu.MDLMIEDLJMC) return; cc.ECNAMAJCDGI.Play(); }
  }
  // toggle music
  CBHHIGMKCJC() {
    const p = P(); if (!p) return;
    const S = G.SoundScript || {};
    p.FCHNCOPLHGH(!p.LKKDIBOKNMJ());
    if (!p.LKKDIBOKNMJ()) {
      if (S.FPOJDHNIFPP) S.FPOJDHNIFPP.Stop();
      if (S.LONDFMJFHEL) S.LONDFMJFHEL.Stop();
      return;
    }
    let src;
    if (Menu.MDLMIEDLJMC && S.FPOJDHNIFPP && !S.FPOJDHNIFPP.isPlaying) src = S.FPOJDHNIFPP;
    else {
      if (Menu.MDLMIEDLJMC || Menu.EDICJCHCNCB) return;
      if (!S.LONDFMJFHEL || S.LONDFMJFHEL.isPlaying) return;
      src = S.LONDFMJFHEL;
    }
    if (!alive(src)) return;
    if (src === S.FPOJDHNIFPP) src.volume = 0.8;
    src.Play();
  }
  // graphics quality cycle
  EFBCOMMLAGE() {
    const p = P(); if (!p) return;
    // [removed: analytics]
    const q = p.CFDECDNFGJN | 0;
    p.EMKKNFNKNBH(q < 2 ? q + 1 : 0);
    this.PDCEALBDDHD();
  }
  // apply graphics quality (QualitySettings / Screen resolution)
  PDCEALBDDHD() {
    const p = P(); if (!p) return;
    Menu._quality = p.CFDECDNFGJN | 0; // TODO(verify): no QualitySettings in the web engine
  }
  // target frame rate from display refresh rate
  AOJCIOLIMHF() { Application.targetFrameRate = 60; }
  MAFIGMGAHCJ() { if (!Menu.GKEKNNOODHM && G.GamePadController) G.GamePadController.AMHELLCDICB = 'A'; }

  static HAPFNAIFOMA(HFDKNJFKOJO, MAOJKHKLIKN) {
    if (MAOJKHKLIKN) return HFDKNJFKOJO !== 1 ? 3 : 2;
    return HFDKNJFKOJO !== 1 ? 7 : 4;
  }
  // wide screens: CanvasScaler.matchWidthOrHeight
  static BGKFMDFJFMA(MEDNKCPCMIO, MOJPAJIHNKI) {
    if (innerWidth / innerHeight > 1.95 && MEDNKCPCMIO) {
      MEDNKCPCMIO.matchWidthOrHeight = MOJPAJIHNKI;
      if (MEDNKCPCMIO.props) MEDNKCPCMIO.props.m_MatchWidthOrHeight = MOJPAJIHNKI;
    }
  }
  static JOPJDMLGDEF() { return false; }

  // ---------------------------------------------------------------- tutorial checks
  // first level tutorial still running?
  CLJDAMIIAKE() {
    const lvl = G.Main && G.Main.NMDEEOMHAGP;
    if (!lvl || lvl.id !== 0) return false;
    const p = P(); if (!p) return false;
    // TODO(verify): decompile passes literal 0 (level 0 / car 0)
    if (!p.PJDAAMCNMHJ(0)) return false;
    const car = p.DKJLCJPBPPN(0, true); if (!car) return false;
    if (p.PJDAAMCNMHJ(0).ALIHDAANEPI === 0) return true;
    if (car.IDOHKCCDGDG(3) === 0 && p.LOCFCFJIAIH() < 180) return true;
    if (car.IDOHKCCDGDG(3) === 5 && car.IDOHKCCDGDG(4) === 4) return !p.JHCIANGHEAK();
    return false;
  }
  // IsNeedShowGarageTutorial
  PNMOPPJFFDF() {
    if (this.NIKKHEDGOBB) { log('is garage tutorial already completed'); return false; }
    const p = P(); if (!p) return false;
    const car = p.DKJLCJPBPPN(-1, true); if (!car) return false;
    if (G.Main.LCFFGBBHMPH !== 0) return false;
    const g = this.ALPCPBBNEBA; const items = (g && g.OFEKNLMPBPH) || [];
    let res = false;
    for (const it of items) {
      if (!it) break;
      let check = false;
      if (it.FHOFNGHGNGF === 3) check = true;
      else if (it.FHOFNGHGNGF === 4 && car.IDOHKCCDGDG(3) === 5 && p.JHCIANGHEAK()) check = true;
      if (!check) continue;
      if (it.HJICMDCENKN(-1) === 5) {
        if (it.FHOFNGHGNGF === 4) { this.NIKKHEDGOBB = true; return res; }
      } else {
        const prem = it.MLHKDEGPJGI(it.HJICMDCENKN(-1));
        const money = prem ? p.HPDEBBJNCIK() : p.LOCFCFJIAIH();
        if (it.OKADMIPJHCA(it.HJICMDCENKN(-1)) <= money) res = true;
      }
    }
    return res;
  }
  // show main_menu tutorial (level 0 started but never played)
  HMCFLJKHPAI() {
    const p = P(); if (!p) return false;
    if (p.GDGPFCLJEIL()) return false;
    const s = p.PJDAAMCNMHJ(0); // TODO(verify): literal 0 in decompile
    if (!s) return false;
    if (s.ALIHDAANEPI !== 0) return false;
    return !s.MCDLFBJCNNA();
  }
  // garage tutorial 2 (upgrade hint) needed?
  LFLFCEGDBPJ() {
    const p = P(); if (!p) return false;
    const car = p.DKJLCJPBPPN(-1, true);
    const s = p.PJDAAMCNMHJ(-1);
    if (!car || car.NDLELHGPFKO !== G.Main.LCFFGBBHMPH) return false;
    const ok = car.JOEMNOABHDF(-1);
    if (!s || !ok) return false;
    if (s.MCDLFBJCNNA()) return false;
    const g = this.ALPCPBBNEBA; if (!g) return false;
    if (!activeSelf(g.CNBICALJOKA)) return false;
    for (const it of g.OFEKNLMPBPH || []) {
      if (!it) break;
      if (!it.ELHBFIHEDOL && it.OJHMOHAHKDB) {
        if (!it.MLHKDEGPJGI(it.HJICMDCENKN(-1)) && G.Main.LCFFGBBHMPH !== 0) return this.HBKNDNGHNDI;
      }
    }
    return false;
  }
  // show "upgrade" tutorial step (garage_tutorial_3)
  LAFACBFLFLF() {
    const g = this.ALPCPBBNEBA; if (!g) return;
    g.ECKPNMBJDNG.HEGIHOAJOKK(true);
    setActive(g.OOHINAGEDGO, true);
    setActive(g.EJBIGKJFOBO, true);
    g.GGKNELJPGCE = g.CNBICALJOKA ? g.CNBICALJOKA.transform : null;
    if (g.KPMCHFNCPFG) {
      g.KPMCHFNCPFG.transform.SetParent(g.EJBIGKJFOBO, true);
      g.EEOMMEJNEOF(false);
      g.KPMCHFNCPFG.interactable = true;
    }
  }
  // end of upgrade tutorial: put the go button back
  FPPIKAMLPDC() {
    const g = this.ALPCPBBNEBA; if (!g) return;
    if (g.KPMCHFNCPFG && g.CNBICALJOKA) g.KPMCHFNCPFG.transform.SetParent(g.CNBICALJOKA.transform, true);
    setActive(g.OOHINAGEDGO, false);
  }
  IKMGHNEEKFG() { this.AALDIFOPHHP = 0; }
  GDEFDCOIDNM() { }
  // garage tutorial text + window
  EKMAFPGBHDL() {
    const g = this.ALPCPBBNEBA; const p = P();
    if (G.Translate && alive(G.Translate.KECGFPHIEHF) && p && g) {
      const car = p.DKJLCJPBPPN(-1, true);
      if (car) setText(g.FLABKOMKHJA, tr(car.IDOHKCCDGDG(3) === 0 ? 'TUTORIAL_GARAGE_5' : 'TUTORIAL_GARAGE_4'));
    }
    if (!g) return;
    g.GOKBDNDJPBA(true, true, true);
    if (g.OPGKDNBHDEE) g.OPGKDNBHDEE.HEGIHOAJOKK(true); // shown as a child window (garage stays current): inlined Show skips hiding the current window
  }
  // garage tutorial 2 window
  KJDAFBPKLLF() {
    const g = this.ALPCPBBNEBA; if (!g) return;
    g.GOKBDNDJPBA(true, true, true);
    if (g.ENMGCHMFDEK) g.ENMGCHMFDEK.HEGIHOAJOKK(true);
    this.HBKNDNGHNDI = false;
  }

  // ---------------------------------------------------------------- pause (focus loss during a race)
  DEEFHDJMBAC() {
    if (Menu.MDLMIEDLJMC) return;
    const CC = G.CarController; const cc = CC && CC.KECGFPHIEHF;
    if (!alive(cc) || !alive(cc.CDDOBCENBOG)) return;
    if (CC.MKEGHDPIIFK) return;
    if (Time.timeScale <= 0) return;
    const gp = cc.CDDOBCENBOG; // GUIGameplay
    gp.OHOEPDMOLBN = true;
    gp.OGPFKPJIEFH = false;
    gp.FOHPLEABHNI = false; gp.INBDLOCDCPO = false; gp.NOACPEOHILF = false; gp.FLKNGDJHKHJ = false;
    if (Time.timeScale > 0) Time.timeScale = 0;
    const lvl = G.Main && G.Main.NMDEEOMHAGP;
    if (lvl) {
      if (!alive(gp.HNJFGLCDBEE)) {
        if (alive(gp.PKFPNDGFDDB) && gp.PKFPNDGFDDB.activeSelf) gp.HNJFGLCDBEE = gp.PKFPNDGFDDB;
        if (alive(gp.ICOFFEKCFNJ) && gp.ICOFFEKCFNJ.activeSelf) gp.HNJFGLCDBEE = gp.ICOFFEKCFNJ;
      }
      if (alive(gp.HNJFGLCDBEE)) {
        let b = gp.HNJFGLCDBEE !== gp.PKFPNDGFDDB ? true : !!CC.LCJOMOHFJDI;
        b = b && !lvl.IsEvent;
        let show;
        if (b) show = true;
        else if (!lvl.IsEvent) show = false;
        else show = lvl.event_contest ? lvl.event_contest.TimeLeft > 300 : false;
        gp.HNJFGLCDBEE.SetActive(show);
      }
    }
    const p = P();
    if (p && p.BMMOMBGDEKF()) { const e = gp.EGEINPCIEON && gp.EGEINPCIEON.ECNAMAJCDGI; if (e && e.isPlaying) e.Pause(); }
    const S = G.SoundScript;
    if (p && p.LKKDIBOKNMJ() && S && S.LONDFMJFHEL && S.LONDFMJFHEL.isPlaying) S.LONDFMJFHEL.Pause();
    // AdvController.GJLFMIEDBEC (ad on screen) is always false here [removed: ads]
    if (gp.PCDLAJMCNNP && !gp.PCDLAJMCNNP.activeInHierarchy) { Menu.ENGJPOMIPFI = AudioListener.volume; AudioListener.volume = 0; }
    const help = gp.LMNKADFDPMO || [];
    const D = G.GUIGameplay ? G.GUIGameplay.DEDOFFIOEFO : -1;
    if (D < help.length && D >= 0 && activeSelf(gp.OJFNCOLKMHP) && activeSelf(gp.MPPPAPJNCNE)) {
      Menu.OLFGGHMPPCK = true;
      gp.OJFNCOLKMHP.JGDCBENNDFO(false);
    } else Menu.OLFGGHMPPCK = false;
    gp.CBFONCCJIEE && gp.CBFONCCJIEE();
    gp.LLAEHJGOFLG && gp.LLAEHJGOFLG();
    gp.IMJEJKHBIMO && gp.IMJEJKHBIMO();
    gp.ODHAOMJKKAE && gp.ODHAOMJKKAE();
    const pw = gp.BKLILPKICFN; // pause window
    if (pw) {
      if (gp.OHOEPDMOLBN) { pw.GNNIDAAJHAB = false; pw.HLFGAHJIOGK = false; }
      pw.HEGIHOAJOKK(false);
      if (gp.OHOEPDMOLBN) { pw.GNNIDAAJHAB = true; pw.HLFGAHJIOGK = true; }
    }
    gp.OHOEPDMOLBN = false;
    Menu.EDICJCHCNCB = true;
  }

  // ---------------------------------------------------------------- achievements
  // claim achievement CGHGJEECHDM with x1.5 reward (rewarded claim)
  EIABBDMGLHD() {
    const m = G.Main && G.Main.KECGFPHIEHF; const p = P();
    if (!m || !p) return;
    for (const a of m.HEIGOLFEAHJ || []) {
      if (!a) return;
      if (this.CGHGJEECHDM !== a.id) continue;
      if (p.OFOJMCJAGFD(a.id)) return;
      p.EBANJKOABAL(a.id, 2);
      const r = a.reward | 0;
      p.DIMKKHJDHFJ(((r / 2) | 0) + r + p.HPDEBBJNCIK());
      G.SoundScript && G.SoundScript.GIGBLEBBIEK && G.SoundScript.GIGBLEBBIEK(G.SoundScript.CIMAPDEBGGG);
      this.KLGOLHHGBKP();
      // [removed: analytics]
      if (this.ALPCPBBNEBA) this.ALPCPBBNEBA.MAKGMMFFGPG();
      return;
    }
  }
  // refresh all achievement GUIs
  KLGOLHHGBKP() {
    const m = G.Main && G.Main.KECGFPHIEHF; if (!m) return;
    for (const a of m.HEIGOLFEAHJ || []) if (a) a.PPHJGAMIKLM();
  }

  // ---------------------------------------------------------------- console layout
  OIDILFECPNP() {
    const gp = this.ONNBLPAKJHK;
    if (gp && isBool(gp.EECHHPBBMAG)) return true;
    const sn = G.BridgePHP && typeof G.BridgePHP.sn === 'number' ? G.BridgePHP.sn : 0;
    return sn === 9 || sn === 11 || sn === 12 || sn === 13;
  }
  OCCACLIDKCM() {
    const isConsole = this.OIDILFECPNP();
    log('CheckForConsoleVersion');
    if (!Menu.MDLMIEDLJMC) return;
    const g = this.ALPCPBBNEBA; if (!alive(g) || !g.IGGGGOCBLFF) return;
    const y1 = isConsole ? 60 : 0, y2 = isConsole ? 88 : 0;
    for (const ch of g.IGGGGOCBLFF) {
      const n = ch.gameObject.name;
      let y = null;
      if (['garage', 'main_menu', 'map', 'achievements', 'rating', 'credits'].includes(n)) y = y1;
      else if (n === 'story') y = y2;
      if (y === null) continue;
      setOffsetMinY(ch, y); // RectTransform.offsetMin = (offsetMin.x, y)
    }
  }
  // gamepad button hints (always off on web: no console / gamepad UI)
  FMEHJALLGBK() {
    const gpOn = !!(G.Main && G.Main.KCHOEBEIOCE && G.Main.KCHOEBEIOCE()) && this.ONNBLPAKJHK && isBool(this.ONNBLPAKJHK.EECHHPBBMAG);
    const show = gpOn || (G.BridgePHP && G.BridgePHP.sn === 9);
    const g = this.ALPCPBBNEBA; if (!alive(g)) return;
    for (const go of g.EIDOKKNIAKC || []) {
      if (!go) continue;
      go.SetActive(show);
      if (show && activeSelf(g.CNBICALJOKA) && go.name === 'gamepad_button_start' && g.KPMCHFNCPFG && !g.KPMCHFNCPFG.interactable) go.SetActive(false);
    }
    for (const go of g.MAEDALAOHKM || []) if (go) go.SetActive(false);
    for (const go of g.NEDPPFADBGI || []) if (go) go.SetActive(false);
  }

  // ---------------------------------------------------------------- free gold timer (ad reward)
  // grant free gold (DonateItem "item_gold_0") and restart the 4h timer
  JPGHCLJLKDC() {
    const p = P(); if (!p) return;
    p.ADNEGLENKMO(new Date(Date.now() + 4 * 3600 * 1000));
    this.PPBIOKBJGPG();
    const g = this.ALPCPBBNEBA; if (!g) return;
    for (const it of g.CPLLOEGKNHP || []) {
      if (!it) break;
      if (it.name === 'item_gold_0') p.DIMKKHJDHFJ((it.DFOBJJIMMEE | 0) + p.HPDEBBJNCIK());
    }
    G.SoundScript && G.SoundScript.GIGBLEBBIEK && G.SoundScript.GIGBLEBBIEK(G.SoundScript.CIMAPDEBGGG);
  }
  // free gold button / timer state
  PPBIOKBJGPG() {
    const p = P(); if (!p) return;
    const diffMin = (msOf(p.PGBNIOHMLDH) - Date.now()) / 60000;
    // [removed: ads] AdvController.HNDMJBICLJF(1) (rewarded ad ready) -> ADS_AVAILABLE; the button stays disabled.
    // To grant free gold without ads, GUIGarage.DonateItem("item_gold_0") can call Menu.JPGHCLJLKDC() directly.
    const bVar1 = diffMin < 0 ? ADS_AVAILABLE : false;
    const g = this.ALPCPBBNEBA; if (!g) return;
    setActive(g.BEGGBANPHAO, diffMin >= 0);
    setActive(g.PFGLLCNOALM, diffMin < 0);
    if (diffMin < 0 && g.PFGLLCNOALM) {
      g.PFGLLCNOALM.interactable = bVar1;
      const img = g.PFGLLCNOALM.image;
      if (img) img.material = bVar1 ? null : g.MGKHHPLEIKC;
    }
    for (const go of g.NKJNLNDFDHI || []) {
      let b = false;
      if (diffMin < 0 && bVar1) { const s = p.PJDAAMCNMHJ(0); b = s ? s.MCDLFBJCNNA() : false; } // TODO(verify): literal 0
      if (go) go.SetActive(b);
    }
  }
  // update timer text every frame
  MEHOMCOOPFM() {
    const p = P(); if (!p) return;
    const ms = msOf(p.PGBNIOHMLDH) - Date.now();
    const g = this.ALPCPBBNEBA; if (!g) return;
    if (ms >= 0) {
      const tot = Math.floor(ms / 1000);
      const h = Math.floor(tot / 3600) % 24, mi = Math.floor(tot / 60) % 60, s = tot % 60;
      setText(g.KLEGDOJMIBL, `${h}:${String(mi).padStart(2, '0')}:${String(s).padStart(2, '0')}`);
    } else if (g.PFGLLCNOALM && !activeSelf(g.PFGLLCNOALM)) this.PPBIOKBJGPG();
  }
  // rewarded-upgrade cooldown (20 minutes)
  CGIIKCKFFLE() { const p = P(); if (p) p.PCCIBHKKPAP(new Date(Date.now() + 20 * 60000)); }
  // rewarded-upgrade cooldown expired?
  JLEEACEPDIE() { const p = P(); if (!p) return false; return msOf(p.LFDLEOGMMAK) - Date.now() < 0; }
  // free upgrade reward
  IKGBHGHCJCL() { this.CGIIKCKFFLE(); if (this.ALPCPBBNEBA) this.ALPCPBBNEBA.ButtonBuyUpgradeConfirm(true); }
  JGDPPFPNOLB() { if (this.ALPCPBBNEBA) this.ALPCPBBNEBA.ButtonBuyUpgradeConfirm(true); } // TODO(verify): inlined is_free=true
  // free color via rewarded ad available?
  POLNAJBPECM(EIGKFINFICB) {
    const c = curCar();
    if (EIGKFINFICB < 1 || !c) return false;
    if (c.free_color_id !== EIGKFINFICB) return false;
    return ADS_AVAILABLE; // [removed: ads]
  }
  // rewarded upgrade item offered?
  LDBOEHFLNFA(MDBCFHDDHHA) {
    if (this.GPGANGNBJLL !== MDBCFHDDHHA || !MDBCFHDDHHA) return false;
    const p = P(); if (!p) return false;
    if (G.Main.LCFFGBBHMPH !== p.JOOCICMEJAC) return false;
    if (MDBCFHDDHHA.HJICMDCENKN(p.JOOCICMEJAC) !== 0) return false;
    return ADS_AVAILABLE; // [removed: ads]
  }
  BOBGEDIMPGG(HKGEOJPHLAN) {
    const p = P();
    if (HKGEOJPHLAN > 0 && p) p.FLDGADKLBMI(HKGEOJPHLAN);
    this.GPGANGNBJLL = null;
    if (p) p.EIGEDMABAKJ(-1);
    this.LFGJCCPJGNK = false;
  }
  OOFKKAKFKEL(EIIDHBCJNNO) {
    this.GPGANGNBJLL = null;
    const p = P(); if (p) p.EIGEDMABAKJ(-1);
    if (EIIDHBCJNNO) this.LFGJCCPJGNK = false;
  }
  // pick the shop item offered as rewarded upgrade
  EKNLDPBPLDC() {
    if (this.LFGJCCPJGNK) return;
    if (!this.JLEEACEPDIE()) return;
    if (!ADS_AVAILABLE) return; // [removed: ads] AdvController.HNDMJBICLJF(2)
    const p = P(); if (!p) return;
    if (p.JOOCICMEJAC < 1) return;
    if (!p.DKJLCJPBPPN(p.JOOCICMEJAC, true)) return;
    this.LFGJCCPJGNK = true;
    let idx = p.LDGCNFIOIOL;
    log('Main.playerProfile.UpgradeRewardedItem: ' + idx);
    const g = this.ALPCPBBNEBA; const items = (g && g.OFEKNLMPBPH) || [];
    if (idx === -1) {
      const list = [];
      items.forEach((it, i) => { if (it && it.FHOFNGHGNGF !== 4 && it.HJICMDCENKN(p.JOOCICMEJAC) === 0 && !it.ELHBFIHEDOL) list.push(i); });
      if (list.length > 0) {
        idx = list[Math.floor(Math.random() * list.length)];
        this.GPGANGNBJLL = items[idx];
        p.EIGEDMABAKJ(idx);
      }
    } else if (idx < 0 || idx >= items.length) this.GPGANGNBJLL = null;
    else this.GPGANGNBJLL = items[idx];
    log('Final Rewarded Item: ' + (alive(this.GPGANGNBJLL) ? this.GPGANGNBJLL.name : 'NULL'));
  }

  // ---------------------------------------------------------------- garage refresh / car switching
  // RefreshGarage
  OLOGKIHIIEL() {
    log('RefreshGarage');
    const M = G.Main; const cs = cars(); const n = cs.length;
    const g = this.ALPCPBBNEBA; if (!g) return;
    const p = P(); if (!p) return;
    const Car = G.Car;
    if (alive(g.ACNGBCIFNMH)) g.ACNGBCIFNMH.SetActive(M.LCFFGBBHMPH !== 0);
    if (alive(g.LBHGGEEHNFE)) g.LBHGGEEHNFE.SetActive(M.LCFFGBBHMPH < n - (Car.NBMGBADFACE() ? 0 : 1) - 2);
    setActive(g.KFCDHBFEINJ, false);
    setActive(g.KNBPALOJGPE, false);
    let lvl = M.NMDEEOMHAGP;
    if (lvl && lvl.id === 1 && M.LCFFGBBHMPH === 1) {
      const s = p.PJDAAMCNMHJ(1);
      if (s && !s.MCDLFBJCNNA()) setActive(g.ACNGBCIFNMH, false);
    }
    g.OHFNNEHCIEH();
    const car = p.DKJLCJPBPPN(-1, true);
    let ev = -1; // event car id
    if (lvl && lvl.id > 99 && lvl.event_contest && lvl.event_contest.car_id >= 0) ev = lvl.event_contest.car_id;
    const avail = !!car && (ev === -1 || (lvl && lvl.event_contest && lvl.event_contest.car_id === car.NDLELHGPFKO));
    let skipToEnd = false;
    if (avail) {
      setActive(g.FPDPLAOHJAM, false);
      g.PHKCLDLDABM(true);
    } else {
      setActive(g.FPDPLAOHJAM, true);
      g.PHKCLDLDABM(false);
      const cur = curCar();
      let text = null;
      if (ev === -1 && cur && cur.event_race_mode === 0) {
        let unlocked = false;
        for (const s of p.CGPKBBJJHLK || []) if (s && s.AKLCKKPELBF === M.LCFFGBBHMPH - 1) unlocked = unlocked || !!s.MCDLFBJCNNA();
        if (unlocked) {
          M.LNHNCBOIGOF = Time.realtimeSinceStartup;
          if (cur.price < 1) { setText(g.GGOIHMHHECI, tr('CLAIM')); setActive(g.HEODMEACEKE, false); }
          else setText(g.GGOIHMHHECI, String(cur.price));
          setActive(g.ADCFEPAEDOC, true);
          setActive(g.JEAAGGCBOJJ, true);
          setActive(g.NLGDGEAKJCC, false);
          setActive(g.MCGCFCLNFON, false);
          setActive(g.AIDOHDMINEH, false);
          skipToEnd = true;
        } else {
          g.JMKLCODKLKP = true;
          setActive(g.ADCFEPAEDOC, false);
          setActive(g.NLGDGEAKJCC, false);
          setActive(g.MCGCFCLNFON, false);
          setActive(g.JEAAGGCBOJJ, true);
          setActive(g.AIDOHDMINEH, true);
          const t = tr('LOCK_CAR_TEXT');
          text = t.replace('[x]', '<color=#faaf32>' + M.LCFFGBBHMPH + '</color>');
        }
      } else {
        const mode = cur ? cur.event_race_mode : 0;
        setActive(g.ADCFEPAEDOC, false);
        setActive(g.NLGDGEAKJCC, false);
        setActive(g.MCGCFCLNFON, false);
        setActive(g.JEAAGGCBOJJ, true);
        setActive(g.AIDOHDMINEH, true);
        if (mode !== 0) text = tr('EVENT_CAR_UNLOCK').replace('[x]', '<color=#faaf32>' + tr('EVENT_' + mode) + '</color>');
        else text = tr('LOCK_CAR_IN_THIS_MODE');
      }
      if (!skipToEnd && text !== null) setText(g.CONPFEDLMBH, text);
    }
    // attention icons on the car arrows (car for the selected level can be bought)
    lvl = M.NMDEEOMHAGP;
    if (lvl) {
      if (ev === -1) {
        const cur = curCar();
        if (cur && cur.event_race_mode === 0 && lvl.id > 0 && lvl.id < n && M.LCFFGBBHMPH !== lvl.id) {
          if (!p.DKJLCJPBPPN(lvl.id, true)) {
            const money = p.LOCFCFJIAIH();
            if (cs[lvl.id] && cs[lvl.id].price <= money) {
              if (lvl.id < M.LCFFGBBHMPH) { g.JMKLCODKLKP = true; setActive(g.KNBPALOJGPE, true); }
              else { g.NAODFOEKCOJ = true; setActive(g.KFCDHBFEINJ, true); }
            }
          }
        }
      } else if (ev !== M.LCFFGBBHMPH) {
        if (ev < M.LCFFGBBHMPH) g.JMKLCODKLKP = true; else g.NAODFOEKCOJ = true;
      }
    }
    const cur = curCar();
    if (cur) setText(g.KENPKAMCIDN, cur.name);
    g.FJCMAMFOKNL();
    this.CKPDEIAFHEC();
    this.CDFHCNMGCFI();
    this.INMDNKGHGEO();
    this.FMEHJALLGBK();
    if (alive(this.HNAPOCNADJP) && this.HNAPOCNADJP.ABIEFKKDOGK) this.HNAPOCNADJP.ABIEFKKDOGK();
  }
  // can the garage UI switch cars right now?
  _canSwitchCar() {
    const g = this.ALPCPBBNEBA;
    if (!alive(g)) return false;
    if (!activeSelf(g.CNBICALJOKA)) return false;
    return true;
  }
  // next car (keyboard right arrow); LeftShift = jump to last
  BMIIEMFFFEO() {
    if (!this._canSwitchCar()) return;
    const g = this.ALPCPBBNEBA;
    if (activeSelf(g.EJKPAICDHGA)) return;
    if (!activeSelf(g.OBKKLLDALBI)) return;
    const M = G.Main; const n = cars().length;
    const last = n + (G.Car.NBMGBADFACE() ? -2 : -3);
    if (last <= M.LCFFGBBHMPH) return;
    M.LCFFGBBHMPH = Input.GetKey(KeyCode.LeftShift) ? last : M.LCFFGBBHMPH + 1;
    M.LNHNCBOIGOF = Time.realtimeSinceStartup;
    this.OLOGKIHIIEL();
  }
  // previous car (keyboard left arrow); LeftShift = jump to first
  LJDEGMJCOIG() {
    if (!this._canSwitchCar()) return;
    const g = this.ALPCPBBNEBA;
    if (!activeSelf(g.ACNGBCIFNMH)) return;
    const M = G.Main;
    if (M.LCFFGBBHMPH < 1) return;
    M.LCFFGBBHMPH = Input.GetKey(KeyCode.LeftShift) ? 0 : M.LCFFGBBHMPH - 1;
    M.LNHNCBOIGOF = Time.realtimeSinceStartup;
    this.OLOGKIHIIEL();
  }
  // spawn the current car model in the garage (and the event ghost car in races)
  CKPDEIAFHEC() {
    const p = P(); const M = G.Main; if (!p || !M) return;
    if (p.DKJLCJPBPPN(-1, true)) {
      const lvl = M.NMDEEOMHAGP;
      if (!(lvl && lvl.id > 99 && lvl.event_contest && lvl.event_contest.car_id >= 0)) p.AFIOLIDLHAH(M.LCFFGBBHMPH);
    }
    if (M.HIDGNCLEBAE) Destroy(M.HIDGNCLEBAE);
    const cs = cars(); const c = cs[M.LCFFGBBHMPH];
    M.HIDGNCLEBAE = null;
    if (c) { const key = Resources.Load(c.prefab_name); if (key) M.HIDGNCLEBAE = Instantiate(key); }
    if (Menu.MDLMIEDLJMC) return;
    const lvl = M.NMDEEOMHAGP;
    if (!lvl || lvl.id < 100) return;
    if (!(G.CarReplay && G.CarReplay.DJKMCIEIAMH && G.CarReplay.DJKMCIEIAMH())) return;
    if (M.FFBJAKPBMOD) Destroy(M.FFBJAKPBMOD);
    M.FFBJAKPBMOD = null;
    const gc = lvl.event_replay_ghost && cs[lvl.event_replay_ghost.car_id];
    if (gc) { const key = Resources.Load(gc.prefab_name); if (key) M.FFBJAKPBMOD = Instantiate(key); }
    const gh = M.FFBJAKPBMOD;
    if (gh) {
      const pos = gh.transform.position;
      gh.transform.position = new Vector3(pos.x, pos.y, -15);
      const rb = gh.GetComponent(Rigidbody);
      if (rb) rb.interpolation = 0;
    }
  }
  // go button interactable (level available for this car)
  CDFHCNMGCFI() {
    const g = this.ALPCPBBNEBA; if (!g) return;
    const btn = g.KPMCHFNCPFG; const p = P(); const M = G.Main;
    let b = false;
    if (p && p.DKJLCJPBPPN(-1, true) && M.NMDEEOMHAGP) {
      if (!activeSelf(g.FPDPLAOHJAM)) {
        const lvl = M.NMDEEOMHAGP;
        if (lvl.id === 0) b = true;
        else {
          const s = p.PJDAAMCNMHJ(lvl.id - 1);
          if (s && s.MCDLFBJCNNA()) b = true;
          else b = lvl.id > 99;
        }
      }
    }
    if (btn) btn.interactable = b;
  }
  // refresh shop items (+ garage tutorial check)
  INMDNKGHGEO() {
    const g = this.ALPCPBBNEBA; if (!g) return;
    const W = G.GUIWindow || {};
    if (W.OFEJBBPBBFG && W.OFEJBBPBBFG === g.CNBICALJOKA) this.EKNLDPBPLDC();
    if (G.CarController) G.CarController.GLBOHAGOBFH = 0;
    for (const it of g.OFEKNLMPBPH || []) { if (!it) return; it.KGOOJPBMMBK(); }
    if (W.OFEJBBPBBFG && W.OFEJBBPBBFG === g.CNBICALJOKA && W.DNEPGKHAOBF !== g.KAMLPJJDEGP) {
      const need = this.PNMOPPJFFDF();
      if (!need) { if (this.LADJPNBMCBN) this.LAFACBFLFLF(); }
      else this.EKMAFPGBHDL();
      log('IsNeedShowGarageTutorial() = ' + (need ? 'True' : 'False'));
    }
  }
  // hide cost labels of non-color shop items
  AFBPIADEOPC() {
    const g = this.ALPCPBBNEBA; if (!g) return;
    for (const it of g.OFEKNLMPBPH || []) { if (!it) return; if (!it.ELHBFIHEDOL) it.BGNPJIHMIMI(false); }
  }
  // select the car of the chosen level (story: car index = level id; event: event car)
  OODBEAHDBMH() {
    const M = G.Main; const lvl = M && M.NMDEEOMHAGP; if (!lvl) return;
    if (lvl.id < 100) { if (lvl.id <= cars().length) M.LCFFGBBHMPH = lvl.id; }
    else if (lvl.event_contest && lvl.event_contest.car_id >= 0) M.LCFFGBBHMPH = lvl.event_contest.car_id;
  }

  // ---------------------------------------------------------------- scene-loaded initialisation
  PJEHMAFCMLI() {
    const p = P();
    if (!Menu.MDLMIEDLJMC) {
      if (alive(this.LCCECGFFBGC)) this.LCCECGFFBGC.enabled = false;
      this.CKPDEIAFHEC();
      return;
    }
    if (!alive(this.ALPCPBBNEBA)) this.ALPCPBBNEBA = G.GUIGarage ? FindObjectOfType(G.GUIGarage) : null;
    const g = this.ALPCPBBNEBA;
    if (alive(this.LCCECGFFBGC)) {
      if (!this.LCCECGFFBGC.enabled) this.LCCECGFFBGC.enabled = true;
      if (this.LCCECGFFBGC.NGBCNBFIMFC) this.LCCECGFFBGC.NGBCNBFIMFC(-1);
    }
    if (!g || !p) return;
    if (!Menu.NDMIIEOKFGB) {
      // back from a race
      this.OCCACLIDKCM();
      g.EGEFDJDCKDJ();
      if (g.PIIFOJPCFOB) g.PIIFOJPCFOB.FHBDLLGMOFN();
      let w;
      if (!this.HMCFLJKHPAI()) {
        if (!Menu.CCCHHLJEBKK) w = g.CNBICALJOKA;
        else {
          const lvl = G.Main.NMDEEOMHAGP;
          if (!lvl || lvl.id < 100) G.Main.NMDEEOMHAGP = null;
          else g.ButtonMapLevelSelect(lvl.gui);
          g.PDCIBBDKCLN();
          w = g.HBNCEIHGBOO;
        }
      } else w = g.AEBAFCEJDPO;
      if (w) w.HEGIHOAJOKK(false);
      // [removed: Purchaser restore]
      this.PPBIOKBJGPG();
      // [removed: interstitial "Garage" ad]
      if (Menu.DPDMJEDMEDK >= 1 && Menu.MCGFPLMDEKJ) {
        g.ButtonShowOffers(Menu.DPDMJEDMEDK);
        Menu.MCGFPLMDEKJ = false;
      }
      // [removed: rate-me prompt]
      this.OLOGKIHIIEL();
      const S = G.SoundScript;
      if (p.LKKDIBOKNMJ() && S && alive(S.FPOJDHNIFPP) && !S.FPOJDHNIFPP.isPlaying && S.HCEFONCADKE) S.HCEFONCADKE(S.FPOJDHNIFPP);
    } else {
      // first garage load: main menu ([removed: GDPR window KPCJNNKNICI])
      Menu.ENGJPOMIPFI = AudioListener.volume;
      if (g.AEBAFCEJDPO) g.AEBAFCEJDPO.HEGIHOAJOKK(false);
      this.OLOGKIHIIEL();
      const S = G.SoundScript;
      if (p.LKKDIBOKNMJ() && S && alive(S.FPOJDHNIFPP) && !S.FPOJDHNIFPP.isPlaying && S.HCEFONCADKE) S.HCEFONCADKE(S.FPOJDHNIFPP);
    }
    g.GOKBDNDJPBA(true, !Menu.NDMIIEOKFGB, false);
    if (Menu.NDMIIEOKFGB) Menu.NDMIIEOKFGB = false;
    if (Menu.NAHIIOCLEMH) Menu.NAHIIOCLEMH = false;
  }

  // detect "help" offer for story levels 1..10 failed several times
  NHEEMPFMAHD() {
    const m = G.Main && G.Main.KECGFPHIEHF; const p = P(); if (!m || !p) return;
    for (const l of m.IHPBACJOJMA || []) {
      if (!l) return;
      if (l.id - 1 >>> 0 < 10) {
        const s = p.PJDAAMCNMHJ(l.id);
        if (s && !s.MCDLFBJCNNA()) {
          const need = l.id !== 1 ? 3 : 2;
          if (need <= s.ALIHDAANEPI && !p.MHBEPDHNNFH() && !p.HDBOCJPHJDD() && !p.KHJGIDLMPLJ()) {
            Menu.DHDINHBJPFH = true;
            Menu.DPDMJEDMEDK = l.id;
          }
        }
      }
    }
  }
  // restore car HP over time (all cars, optionally skipping the current one)
  MNGOIBGJMMG(EBOKAPAKELF) {
    const p = P(); const M = G.Main; if (!p || !M) return;
    const cs = cars();
    for (let i = 0; i < cs.length; i++) {
      if (EBOKAPAKELF && i === M.LCFFGBBHMPH) continue;
      const car = p.DKJLCJPBPPN(i, true);
      if (!car || car.EAEAJMKGDPD() === -1) continue;
      const armor = car.IDOHKCCDGDG(4);
      const maxHp = (cs[i].health_array || [])[armor] | 0;
      const hp = car.EAEAJMKGDPD();
      const minHp = (maxHp * 0.2) | 0;
      const cur = minHp <= hp ? Math.min(hp, maxHp) : minHp;
      if (cur < maxHp) {
        log('Try to restore HP for ' + cs[i].name + ': ' + cur + '/' + maxHp + '');
        const secs = ((Date.now() - msOf(p.FFPNODOKENB)) / 1000) | 0;
        const per = G.CarController ? G.CarController.IMEIEFHABHH | 0 : 0;
        const add = per !== 0 ? (secs / per) | 0 : 0;
        const v = cur + add;
        car.DDPLLMLFICC(v < 0 ? 0 : Math.min(v, maxHp));
        log('Finish restore HP for ' + cs[i].name + ': ' + cur + '/' + maxHp + '');
      }
    }
    p.DIKNLDOMCHP(new Date());
  }
  // increment attempts counter of the selected level (or reset for a new event contest)
  LLEALPBNEEN() {
    const p = P(); if (!p) return;
    const s = p.PJDAAMCNMHJ(-1); if (!s) return;
    const lvl = G.Main.NMDEEOMHAGP; if (!lvl) return;
    if (lvl.id > 99 && lvl.event_contest) {
      if (s.EECPDELFCIL() !== lvl.event_contest.id) {
        s.OKJBPIKMAPJ(lvl.event_contest.id);
        s.PHPLFEHCLJH(1);
        PlayerPrefs.SetInt(s.BKFGIBHDOPJ(), 0); // ObscuredPrefs.SetInt
        return;
      }
    }
    s.ALIHDAANEPI = (s.ALIHDAANEPI | 0) + 1;
    PlayerPrefs.SetInt(s.DLOKHEPHLGI(), s.ALIHDAANEPI);
  }

  // ---------------------------------------------------------------- in-race UI helpers
  // continue/revive button state
  NLDJOFLJDKJ(FJDCALHGHCI) {
    const cc = G.CarController && G.CarController.KECGFPHIEHF; const gp = cc && cc.CDDOBCENBOG;
    if (!gp) return;
    if (gp.EAEJMMLMKPD) gp.EAEJMMLMKPD.color = FJDCALHGHCI ? new Color(1, 1, 1, 1) : new Color(0.55, 0.59, 0.66, 1);
    if (gp.INNIIHAJAOB) gp.INNIIHAJAOB.interactable = FJDCALHGHCI;
  }
  AJGHCKKKEGE() {
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(cc) || !alive(cc.CDDOBCENBOG)) return;
    for (const go of cc.CDDOBCENBOG.IPCCBOEGLEN || []) if (go) go.SetActive(true);
  }
  ABLANDDDMOF() {
    const cc = G.CarController && G.CarController.KECGFPHIEHF; if (!alive(cc)) return;
    const gp = cc.CDDOBCENBOG; if (gp && gp.EAEJMMLMKPD) gp.EAEJMMLMKPD.text = String(cc.DMPPOBLLDBE | 0);
  }
  // collect race silver bonus
  NPHCCBBGINI() {
    const cc = G.CarController && G.CarController.KECGFPHIEHF; if (!alive(cc)) return;
    if ((cc.DMPPOBLLDBE | 0) < 1) return;
    const gp = cc.CDDOBCENBOG; if (!gp) return;
    setActive(gp.INNIIHAJAOB, false);
    if (gp.OANFCFDBHNH) gp.OANFCFDBHNH.ICMOCEHIFOI();
    const p = P(); if (!p) return;
    p.JLEEMPONONF((cc.DMPPOBLLDBE | 0) + p.LOCFCFJIAIH());
    cc.DMPPOBLLDBE = 0;
    G.SoundScript && G.SoundScript.GIGBLEBBIEK && G.SoundScript.GIGBLEBBIEK(G.SoundScript.CIMAPDEBGGG);
  }
  // debug: toggle UI visibility
  DEIAOEOJDGI() {
    const g = this.ALPCPBBNEBA;
    if (alive(g)) g.gameObject.SetActive(!g.gameObject.activeSelf);
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(cc) || !alive(cc.CDDOBCENBOG)) return;
    const go = cc.CDDOBCENBOG.gameObject; go.SetActive(!go.activeSelf);
  }
  // console tips canvas
  IKFJEPCBKJB() {
    if (!this.FKLKNBMKDEK) return;
    this.PPIFMMPACNC = Instantiate(this.FKLKNBMKDEK);
    if (!this.PPIFMMPACNC) return;
    DontDestroyOnLoad(this.PPIFMMPACNC);
    this.HNAPOCNADJP = this.PPIFMMPACNC.GetComponent('ConsoleTipsBottom');
    this.PPIFMMPACNC.SetActive(false);
  }
  ANEDMKOIIOO() {
    const zp = Layers.NameToLayer('zombie_parts');
    Physics.IgnoreLayerCollision(zp, Layers.NameToLayer('zombie'), true);
    Physics.IgnoreLayerCollision(zp, zp, true);
    Physics.IgnoreLayerCollision(zp, Layers.NameToLayer('dynamic_obstacle'), true);
    Physics.IgnoreLayerCollision(zp, Layers.NameToLayer('dyn_obst_nofire'), true);
  }

  // ---------------------------------------------------------------- windows
  // close the current popup (returns true if something was closed)
  CEFAHBMMKCD() {
    const W = G.GUIWindow; if (!W) return false;
    let w = W.OFEJBBPBBFG;
    if (alive(W.DNEPGKHAOBF)) w = W.DNEPGKHAOBF;
    if (!alive(w)) return false;
    if (!alive(w.ICHGEFECNAA) && !alive(W.PADNIFKFMPL)) return false;
    const back = alive(w.ICHGEFECNAA) ? w.ICHGEFECNAA : W.PADNIFKFMPL;
    back.HEGIHOAJOKK(false);
    return true;
  }
  // back / Escape key in the garage
  AFPLNBDNJHM() {
    if (!Menu.MDLMIEDLJMC) return;
    const g = this.ALPCPBBNEBA; if (!alive(g)) return;
    const W = G.GUIWindow || {};
    if (!activeSelf(g.OBKKLLDALBI)) return;
    if (activeSelf(g.OHMIPJBNEOC)) return;
    if (activeSelf(g.KPCJNNKNICI)) return;
    if (activeSelf(g.OJDABDMEHKF)) return;
    if (Time.time - (G.GUIGarage ? G.GUIGarage.LOICFFJDFGG || 0 : 0) <= 1) return;
    let w = null, arg = false;
    let toL408 = false;
    if (W.OFEJBBPBBFG === g.HBNCEIHGBOO) {
      // on the map
      if (!G.Main.NMDEEOMHAGP || activeSelf(g.EMFGDIEMNMI) || activeSelf(g.GGJDKFFDFLH)) toL408 = true;
      else {
        if (!activeSelf(g.NKAPHLHNCEO)) { g.ButtonMapHidePanel(true); return; }
        // [removed: rating event panel check] → close current window chain
        this.CEFAHBMMKCD();
        return;
      }
    } else toL408 = true;
    if (toL408) {
      if (W.DNEPGKHAOBF === g.EMFGDIEMNMI || W.OFEJBBPBBFG === g.EMFGDIEMNMI) {
        w = activeSelf(g.HBNCEIHGBOO) ? g.HBNCEIHGBOO : g.CNBICALJOKA; arg = false;
      } else if (W.DNEPGKHAOBF === g.EOMEKIJKEHM && !this.OLLGOBJFFDI) {
        this.OLLGOBJFFDI = true;
        const per = G.CarController ? G.CarController.IMEIEFHABHH : 0;
        setText(g.KHLAEOFAKML, per + ' ' + tr('SECOND') + ' = 1 ' + tr('HP'));
        w = g.BJJAAMMGMMK; arg = true;
      } else if (!activeSelf(g.HBGNOHGKEMO)) {
        if (!alive(W.OFEJBBPBBFG)) return;
        this.CEFAHBMMKCD();
        return;
      } else {
        // "not enough money" popup: the original then opens the store (EMFGDIEMNMI) or the garage.
        // [web] no store push: just close the popup (it is a child window) and stay on the current screen
        if (W.DNEPGKHAOBF === g.HBGNOHGKEMO) { g.HBGNOHGKEMO.JGDCBENNDFO(true); return; }
        w = g.CNBICALJOKA; arg = false;
      }
    }
    if (w) w.HEGIHOAJOKK(arg);
  }
  // blink a GameObject (fade in its Image)
  EDKJPDKMJGB(MIPKEALMBHI) {
    if (!MIPKEALMBHI || MIPKEALMBHI.activeSelf) return;
    if (this.EMCBONCDHGN) this.StopCoroutine(this.EMCBONCDHGN);
    this.EMCBONCDHGN = this.StartCoroutine(this.ACJNNGIEIIJ(MIPKEALMBHI));
  }
  // coroutine CDBPKEDALNC
  *ACJNNGIEIIJ(MIPKEALMBHI) {
    const go = MIPKEALMBHI;
    const image = go.GetComponent(Image);
    if (!image) return;
    const c = image.color;
    const start = new Color(c.r, c.g, c.b, c.a); // TODO(verify): decompile copies after zeroing alpha
    const nc = new Color(c.r, c.g, c.b, 0);
    image.color = nc;
    go.SetActive(true);
    const len = 0.4;
    const end = Time.realtimeSinceStartup + len;
    while (Time.realtimeSinceStartup < end) {
      const k = (1 - (end - Time.realtimeSinceStartup) / len) * 2.5;
      nc.a = Mathf.Lerp(0.3, 0.8, k);
      if (alive(image)) image.color = new Color(nc.r, nc.g, nc.b, nc.a);
      yield null;
    }
    if (alive(image)) image.color = start;
  }
  // coroutine GOCBIMNHIEI: close the game 3s after a cheat detection
  *HNBGLFPDGMH() {
    const end = Time.realtimeSinceStartup + 3;
    while (Time.realtimeSinceStartup < end) yield null;
    if (G.Main && G.Main.EEKNCFLMGDP) G.Main.EEKNCFLMGDP('CheatDetectCloseGame');
    // Application.Quit(): no-op on web
  }
  // called by ACTk detectors / UI
  CheatDetect() {
    if (this.BBMHNGJMKNL) return;
    this.BBMHNGJMKNL = true;
    // [removed: analytics]
    const msg = 'Shit! Cheater is here!';
    if (!alive(this.ALPCPBBNEBA)) {
      const cc = G.CarController && G.CarController.KECGFPHIEHF;
      if (alive(cc) && alive(cc.CDDOBCENBOG)) cc.CDDOBCENBOG.HNKHJLDJMHB(msg, 1, false, true);
    } else this.ALPCPBBNEBA.DAOLEOLDHGN(msg);
    this.StartCoroutine(this.HNBGLFPDGMH());
  }

  // ---------------------------------------------------------------- race start
  // coroutine IGIGAHEKBHB: start the selected level (is_start_with_low_hp skips the low-HP warning)
  *LBKMBBLLINK(IIDDLPGHBHD) {
    const self = this; const g = self.ALPCPBBNEBA; const M = G.Main; const p = P();
    if (!p || !M) return;
    let isMainMenu = false; let lowHpGo = null; let image = null; let nc = null;
    if (!alive(self.LCCECGFFBGC)) {
      // no fuel manager: open fuel shop
      G.SoundScript && G.SoundScript.GIGBLEBBIEK && G.SoundScript.GIGBLEBBIEK(G.SoundScript.IGAGBIKPOMH);
      if (alive(g)) g.DonateWindowFuel();
      return;
    }
    const lvl0 = M.NMDEEOMHAGP;
    if (p.HDABOKNLKGK() < 1 && !(G.FuelManager && G.FuelManager.ONOJBFNLIJI === true) && lvl0 && lvl0.id < 100) {
      // out of fuel
      G.SoundScript && G.SoundScript.GIGBLEBBIEK && G.SoundScript.GIGBLEBBIEK(G.SoundScript.IGAGBIKPOMH);
      if (alive(g)) g.DonateWindowFuel();
      return;
    }
    if (!p.DKJLCJPBPPN(-1, true) || !alive(G.CarController && G.CarController.KECGFPHIEHF)) {
      log('This car is not available!: ' + M.LCFFGBBHMPH);
      return;
    }
    self.MNGOIBGJMMG(false);
    const car = p.DKJLCJPBPPN(-1, true); if (!car) return;
    const armor = car.IDOHKCCDGDG(4);
    const cs = cars();
    const maxHp = M.LCFFGBBHMPH < cs.length ? ((cs[M.LCFFGBBHMPH].health_array || [])[armor] | 0) : 0;
    if (self.LFLFCEGDBPJ()) { self.KJDAFBPKLLF(); return; }
    const lvl = M.NMDEEOMHAGP; if (!lvl) return;
    let fullHp;
    if (lvl.id === 0) fullHp = true;
    else {
      const hp = car.EAEAJMKGDPD();
      fullHp = hp === maxHp || hp === -1;
    }
    if (!fullHp && !IIDDLPGHBHD && lvl.id < 100) { if (g) g.PCLHPNHIHMO(); return; } // low HP warning window
    self.LLEALPBNEEN();
    // [removed: interstitial ad before race]
    G.SoundScript && G.SoundScript.GIGBLEBBIEK && G.SoundScript.GIGBLEBBIEK(G.SoundScript.JJMBOCJABEL);
    if (lvl.id > 0 && lvl.id < 100 && alive(self.LCCECGFFBGC) && self.LCCECGFFBGC.OBAELOECFBH) self.LCCECGFFBGC.OBAELOECFBH(); // spend fuel
    if (!g || !g.AEBAFCEJDPO) return;
    lowHpGo = g.JPHKBMCMAIE; // main_menu_bg used as fade
    isMainMenu = g.AEBAFCEJDPO.gameObject.activeSelf;
    if (isMainMenu && g.EJKPAICDHGA) lowHpGo = Instantiate(g.EJKPAICDHGA, g.IGGGGOCBLFF);
    if (self.LADJPNBMCBN) {
      if (activeSelf(g.ECKPNMBJDNG)) g.ECKPNMBJDNG.JGDCBENNDFO(false);
      self.LADJPNBMCBN = false;
    }
    if (activeSelf(g.EOMEKIJKEHM)) {
      g.EOMEKIJKEHM.JGDCBENNDFO(false);
      setActive(g.EJKPAICDHGA, false);
    }
    setActive(g.OBKKLLDALBI, false); // block input (EventSystem)
    let t = 0;
    image = lowHpGo ? lowHpGo.GetComponent(Image) : null;
    if (!isMainMenu) nc = new Color(1, 1, 1, 0);
    else { const c = image ? image.color : new Color(1, 1, 1, 1); nc = new Color(c.r, c.g, c.b, 0); }
    if (image) image.color = nc;
    if (lowHpGo) lowHpGo.SetActive(true);
    for (;;) {
      if (t >= 0.7) {
        setActive(g.OBKKLLDALBI, true);
        if (M.NMDEEOMHAGP) {
          // Main.EBIEJDOBOCP(sceneId) → SceneManager.LoadScene(level scene)
          if (M.EBIEJDOBOCP) M.EBIEJDOBOCP(M.NMDEEOMHAGP.SceneId);
          else SceneManager.LoadScene(M.NMDEEOMHAGP.SceneId);
        }
        return;
      }
      let base;
      if (!isMainMenu) { g.EOFBGHALHON(); base = 0.3; } else { g.CIGPFNEMEDJ(); base = 0; }
      const k = t * 3.5;
      nc.a = k < 0 ? base : Math.min(k, 1) * 0.7 + base;
      if (alive(image)) image.color = new Color(nc.r, nc.g, nc.b, nc.a);
      yield null;
      t += Time.deltaTime;
    }
  }
}
define('Menu', Menu);
