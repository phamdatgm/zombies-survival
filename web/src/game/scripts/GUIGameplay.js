// GUIGameplay: in-race HUD (prefab Resources/_GUIGameplay).
// Control buttons (accel/fire/nitro/tilt) set flags read by CarController every frame; pause / results / tutorial /
// revive / encyclopedia windows; splash labels (objDestructorHints); nickname labels over the car / replay ghost.
// Removed: ads (rewarded revive / x2 silver / x2 encyclopedia reward, banners), analytics, online rating/replay data
// (BridgePHP country flags), debug console output.
import {
  Time, Input, Vector2, Vector3, Color, Mathf, Instantiate, Destroy, SceneManager, Audio, Application, Screen,
  SetSizeWithCurrentAnchors, uiDirty,
} from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { E } from '../enums.js';
import { T as LangT } from '../util.js';

// ---------------------------------------------------------------- helpers
const POF = E.GUIGameplay_POFCDOMOIBH;
const D = () => G.Main && G.Main.FBDDKIOEKDM;                    // player profile (DAFNMLEKHAD)
const CAR = () => (G.CarController ? G.CarController.KECGFPHIEHF : null);
const MENU = () => (G.Menu ? G.Menu.KECGFPHIEHF : null);
const LVL = () => (G.Main ? G.Main.NMDEEOMHAGP : null);           // current level
const SS = () => G.SoundScript || {};
const tr = (k) => { const t = G.Translate && G.Translate.KECGFPHIEHF; return t && t.JJJNIPAKLJF ? t.JJJNIPAKLJF(k) : LangT(k); };
const log = (m) => { try { G.Main && G.Main.GEMDEAMAGPG && G.Main.GEMDEAMAGPG(m, false); } catch (e) { /* debug only */ } };
const yes = (v) => v === true || v === 1;                        // stub proxies return functions for unknown fields
const call = (o, m, ...a) => (o && typeof o[m] === 'function' ? o[m](...a) : undefined);
const goOf = (x) => (x ? (x.gameObject || x) : null);
const setActive = (x, v) => { const g = goOf(x); if (alive(g)) g.SetActive(!!v); };
const activeSelf = (x) => { const g = goOf(x); return alive(g) && g.activeSelf; };
const setText = (t, s) => { if (t) t.text = s; };
const isEvent = (l) => !!(l && l.IsEvent);
const isDesktop = () => !Application.isMobilePlatform;            // [web] keyboard prompts on desktop
// BridgePHP.sn (platform): web build behaves as GOOGLE_PLAY on mobile, NONE (PC) on desktop
const SN = () => (isDesktop() ? E.BridgePHP_SN_PLATFORM.NONE : E.BridgePHP_SN_PLATFORM.GOOGLE_PLAY);
const enumName = (en, v) => { for (const k in en) if (en[k] === v) return k; return String(v); };
const fmt1 = (v) => (Math.round(v * 10) / 10).toFixed(1);       // {0:0.0}
// UnityEngine.AudioListener.volume (global master gain)
const AudioListener = {
  get volume() { return Audio.master ? Audio.master.gain.value : 1; },
  set volume(v) { if (Audio.master) Audio.master.gain.value = v; },
};
// screen pixels per local unit of children of `go` (parent scales up to the root canvas * canvas scale factor)
function uiScaleOf(go) {
  let s = 1, g = go;
  while (g && g.rect) {
    const cv = g.components.find((c) => c.constructor.typeName === 'Canvas');
    if (cv && cv.isRoot) return s * (cv.scale || 1);
    s *= g.obj.scale.x || 1;
    g = g.transform._parent && g.transform._parent.gameObject;
  }
  return s;
}
// move a UI element so that its pivot lands on screen point sp (engine UI world space = screen pixels, bottom-left)
function uiSetScreenPos(t, sp) {
  if (!alive(t) || !t.gameObject.rect || !t.parent) return;
  const cur = t.position, k = uiScaleOf(t.parent.gameObject);
  const a = t.anchoredPosition;
  t.anchoredPosition = new Vector2(a.x + (sp.x - cur.x) / k, a.y + (sp.y - cur.y) / k);
}
// Transform.SetParent(parent) (worldPositionStays) for DOM UI elements: also moves the DOM node
function uiSetParent(t, parent) {
  if (!alive(t) || !alive(parent)) return;
  const pos = t.position;
  t.SetParent(parent, false);
  const el = t.gameObject._el, pel = parent.gameObject._el;
  if (el && pel && el.parentNode !== pel) pel.appendChild(el);
  uiSetScreenPos(t, pos);
  uiDirty();
}
function uiSetAsFirstSibling(t) {
  if (!alive(t)) return;
  t.SetAsFirstSibling();
  const el = t.gameObject._el;
  if (el && el.parentNode) el.parentNode.insertBefore(el, el.parentNode.firstChild);
  uiDirty();
}
// LayoutGroup.padding = new RectOffset(l, r, t, b)
function setPadding(lg, l, r, t, b) { if (!lg) return; lg.props.m_Padding = { m_Left: l, m_Right: r, m_Top: t, m_Bottom: b }; uiDirty(); }
// Camera.WorldToScreenPoint -> RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas) -> localPosition:
// equivalent to placing the element at the screen point (engine UI world space = screen pixels)
function placeAtScreen(t, sp) { uiSetScreenPos(t, sp); }

// ---------------------------------------------------------------- nested serializable classes
class ResultsHint {           // GUIGameplay.ResultsHint
  constructor() { this.translate_key = null; this.lvl_id = 0; this.is_only_free2play = false; }
}
class HelpItem {              // GUIGameplay.HelpItem (tutorial / help step)
  constructor() {
    this.type = POF.accel; this.go = null; this.go_pc = null; this.go_gamepad = null; this.go_nintendo = null; this.go_playstation = null;
    this.desc = null; this.arrow_go = null; this.elements_for_active = []; this.is_repeatability = false;
  }
}

export class GUIGameplay extends GameBehaviour {
  static ResultsHint = ResultsHint;
  static HelpItem = HelpItem;
  static OIJKDGMLHPL = 0;        // bottom-panel safe-area offset (px)
  static DEDOFFIOEFO = POF.none; // current tutorial step
  static AOFDLCGLMDI = POF.none; // last completed tutorial step
  static NMHIDJLMFKC = 0;        // tutorial step timer left (s)
  static JHDLBMMDEDG = 0;        // tutorial step start (realtime)
  static JBJJABGHCMB = 1.5;      // tutorial step min time (s)

  constructor(go, p) {
    super(go, p);
    this._btn = { accel: false, nitro: false, fire: false, left: false, right: false }; // on-screen button states
    this.EAECEJLMABP = 1;                          // points digits count (panel shift)
    this.KOEMFOMPNLD = new Color(1, 0.2, 0.2, 1);  // hp bar low color
    this.ODECDCJMJJN = new Color(1, 0.6, 0.15, 1); // hp bar color
    this.DJACPOHIGAL = null;   // player nickname label (Transform)
    this.GBIDOPEHPMA = null;   // replay ghost nickname label (Transform)
    this.GOIEMIHMIHN = null;   // CarReplay (ghost)
    this.KKMEFLDDIKA = null;   // ghost label HorizontalLayoutGroup
    this.NAIPLKPCPMM = null;   // ghost flag Image
    this.LICIFMIGJNB = null;   // ghost name Text
    this.FJGPEHPBLFE = new Vector3(0, 0, 0); // ghost label target local position
    this.MIBGMHKNGON = 5;      // ghost label follow speed
    this.JEBFHMDIDMC = new Color(1, 1, 1, 1); // ghost label color
    this.HNJFGLCDBEE = null;   // pause restart button in use
    this.AJLAGMJLOLB = false;
    this.KPLDFEGLOMA = false;
    this.BLCAMEJJNEM = POF.none; // help: shown step
    this.FLNIONGLMLC = POF.fire; // help: latest completed step
    this.KDPPODAJELB = 0;      // encyclopedia arrow start (realtime)
    this.PFEJOCMFKJE = 0;      // encyclopedia popup open time (realtime)
    this.DBDGDLIENJA = 0;      // encyclopedia item type (CPFPFGOIDDO)
    this.AONILDNKNCB = null;   // encyclopedia target object
    this.DELDDEDKHHE = null;   // encyclopedia target transform
    this.PEAOLDCNLIK = 0;      // encyclopedia arrow height offset
    this.GDLDOBJNKJP = false;  // encyclopedia item registered this race
    this.LJAIJDPPOIP = false;  // encyclopedia popup shown
    this.GCDJJBJHGJK = [null, null, null]; // star Images
    this.LFAKFIIKAEP = [null, null, null]; // star GUICoins
    this._reviveUsed = false;  // [removed: ads] free revive allowed once per race
  }

  // ---------------------------------------------------------------- control flags (read by CarController)
  // [web] keyboard / gamepad (engine Input high-level controls) feed the same flags as the touch buttons
  get FOHPLEABHNI() { return this._btn.accel || Input.throttle; }            // accelerate
  set FOHPLEABHNI(v) { this._btn.accel = !!v; }
  get INBDLOCDCPO() { return this._btn.nitro || Input.nitro; }               // nitro
  set INBDLOCDCPO(v) { this._btn.nitro = !!v; }
  get NOACPEOHILF() { return this._btn.fire || Input.fire; }                 // fire
  set NOACPEOHILF(v) { this._btn.fire = !!v; }
  get FLKNGDJHKHJ() { return this._btn.left || Input.tilt < -0.3; }          // tilt left (back flip)
  set FLKNGDJHKHJ(v) { this._btn.left = !!v; }
  get OGPFKPJIEFH() { return this._btn.right || Input.tilt > 0.3; }          // tilt right (front flip)
  set OGPFKPJIEFH(v) { this._btn.right = !!v; }

  ButtonAccel(value) { this.FOHPLEABHNI = value; }
  ButtonNitro(value) { this.INBDLOCDCPO = value; }
  ButtonFire(value) { this.NOACPEOHILF = value; }
  ButtonTiltLeft(value) { this.FLKNGDJHKHJ = value; }
  ButtonTiltRight(value) { this.OGPFKPJIEFH = value; }
  ButtonBrake(value) { this.FOHPLEABHNI = value; this.OGPFKPJIEFH = value; }

  Awake() {
    call(G.Menu, 'BGKFMDFJFMA', this.ALPGNDDCLBF, 0.25);
    this.BEGHDNNLEDG();
  }
  Start() { this.webKeyHints(); this.webNoAds(); }
  // [web] no ads: hide the rewarded "x2 silver" video button and the watch-ads icon on the (free) revive button
  webNoAds() {
    if (alive(this.INNIIHAJAOB)) this.INNIIHAJAOB.gameObject.SetActive(false);
    const find = (t, n) => { if (t.gameObject.name === n) return t; for (const c of t._children) { const r = find(c, n); if (r) return r; } return null; };
    const revive = find(this.transform, 'revive');
    const pb = revive && find(revive, 'price_block');
    const icon = pb && pb._children.find((c) => c.gameObject.name === 'icon');
    if (icon) icon.gameObject.SetActive(false);
  } // [web] the DOM elements exist once the prefab is attached
  // [web] keyboard key badges on the on-screen controls (desktop only; touch devices keep the original look)
  webKeyHints() {
    if (typeof matchMedia === 'function' && !matchMedia('(hover: hover) and (pointer: fine)').matches) return;
    const HINTS = { accel_button: ['W', 'top'], nitro_button: ['Shift', 'top'], fire_button: ['Space', 'top'],
      tilt_left: ['A', 'right'], tilt_right: ['D', 'right'], pause_button: ['Esc', 'bottom'] };
    const walk = (t) => {
      const go = t.gameObject, h = HINTS[go.name];
      if (h && go._el && !go._el.querySelector(':scope > .zd-key')) {
        const b = document.createElement('div'); b.className = 'zd-key zd-key-' + h[1]; b.textContent = h[0]; go._el.appendChild(b);
      }
      for (const c of t._children) walk(c);
    };
    walk(this.transform);
  }

  // ---------------------------------------------------------------- tutorial / help
  // tutorial timer label
  DHFMPHMAMBF() {
    GUIGameplay.NMHIDJLMFKC = GUIGameplay.JBJJABGHCMB - (Time.realtimeSinceStartup - GUIGameplay.JHDLBMMDEDG);
    if (!alive(this.MPPPAPJNCNE) || !this.MPPPAPJNCNE.gameObject.activeSelf) return;
    if (!this.PDPPNCCAAGA) return;
    if (GUIGameplay.NMHIDJLMFKC <= 0) this.PDPPNCCAAGA.text = '';
    else this.PDPPNCCAAGA.text = fmt1(GUIGameplay.NMHIDJLMFKC) + ' ' + tr('SECOND');
  }

  ButtonPauseHelpShow() { this.MGNNDFEFHAH(POF.accel, true); }

  // Show tutorial step (isHelp=false) or the help page (isHelp=true) for step LMIFACAEINI
  MGNNDFEFHAH(LMIFACAEINI, LCEMDCJMCPF = false) {
    const type = LMIFACAEINI, isHelp = !!LCEMDCJMCPF;
    if (!isHelp) GUIGameplay.DEDOFFIOEFO = type;
    setText(this.PFOEPIPBOOE, tr(isHelp ? 'HELP' : 'TUTORIAL'));
    setActive(this.PCDLAJMCNNP, isHelp);
    this.BLCAMEJJNEM = POF.none;
    const items = this.LMNKADFDPMO || [];
    let showLeft;
    if (isHelp) {
      this.BLCAMEJJNEM = type;
      setActive(this.PCDLAJMCNNP, true);
      const d = D();
      for (let i = items.length - 1; i >= 0; i--) {
        if (d && call(d, 'BLGOKNOOEEO', items[i].type)) {
          this.FLNIONGLMLC = items[i].type;
          log('latest_completed_tutorial: ' + enumName(POF, this.FLNIONGLMLC));
          break;
        }
      }
      // page points: current + marker, completed pages brighter
      let cur = null, marker = null, i = 0;
      if (alive(this.PCDLAJMCNNP)) {
        for (const ch of this.PCDLAJMCNNP.transform) {
          if (ch.name === 'point_' + type) cur = ch;
          else if (ch.name === 'point_marker') marker = ch;
          if (ch.name === 'point_' + i) {
            const img = ch.GetComponent('Image');
            if (img) { const c = img.color; img.color = new Color(c.r, c.g, c.b, this.FLNIONGLMLC < i ? 0.3 : 0.8); }
          }
          if (i < items.length - 1) i++;
        }
      }
      if (alive(cur) && alive(marker)) marker.anchoredPosition = new Vector2(cur.anchoredPosition.x, marker.anchoredPosition.y);
      showLeft = this.BLCAMEJJNEM !== POF.accel;
    } else {
      GUIGameplay.JHDLBMMDEDG = Time.realtimeSinceStartup;
      this.DHFMPHMAMBF();
      showLeft = false;
    }
    setActive(this.KDKIHEEJFLC, showLeft);
    setActive(this.BKNBKCNMCEG, false); setActive(this.IGFONDDELJI, false); setActive(this.CMAKCPNKPFF, false);
    setActive(this.ENABOEHPDPP, isHelp ? this.BLCAMEJJNEM < this.FLNIONGLMLC : false);
    setActive(this.PJOOEBPEMOH, false); setActive(this.EJOLFKNPEAJ, false); setActive(this.BEEHNDABCIO, false);
    const sn = SN();
    setActive(this.MECADKFKCJP, isHelp && sn !== E.BridgePHP_SN_PLATFORM.PS4 && sn !== E.BridgePHP_SN_PLATFORM.PS5);
    let desc = null, arrow = null;
    const pc = isDesktop();
    for (let j = 0; j < items.length; j++) {
      const h = items[j]; if (!h) continue;
      if (h.go) setActive(h.go, j === type);
      if (j === type && h.desc) desc = h.desc;
      if (h.go_pc) setActive(h.go_pc, false); // [web] keyboard images removed: tutorial shows the text only (was: pc && j === type)
      if (h.go_gamepad) setActive(h.go_gamepad, false);
      if (h.go_nintendo) setActive(h.go_nintendo, false);
      if (h.go_playstation) setActive(h.go_playstation, false);
      if (type === POF.tilt) setActive(this.KKLMBPAMPPJ, !pc && !!call(D(), 'DPJPKMHLGMO'));
      if (j === type) {
        for (const t of h.elements_for_active || []) uiSetParent(t, this.IGGGGOCBLFF);
        setActive(this.NBIBNHGNAIL, false);
        if (h.go_gamepad && h.go && alive(this.NBIBNHGNAIL)) uiSetParent(this.NBIBNHGNAIL.transform, h.go.transform);
        setActive(this.DEMMDBGAKAM, false);
        if (h.go_nintendo && h.go && alive(this.DEMMDBGAKAM)) uiSetParent(this.DEMMDBGAKAM.transform, h.go.transform);
        setActive(this.MKFMBAFKAAF, false);
        if (h.go_playstation && h.go && alive(this.MKFMBAFKAAF)) uiSetParent(this.MKFMBAFKAAF.transform, h.go.transform);
      }
      if (h.arrow_go) {
        if (j === type) { setActive(h.arrow_go, true); arrow = h.arrow_go; }
        else if (arrow !== h.arrow_go) setActive(h.arrow_go, false);
      }
    }
    if (type !== POF.accel && !isHelp && !(G.Menu && G.Menu.OLFGGHMPPCK)) this.ButtonPause(true);
    const n = String(type + 1);
    if (!desc) return;
    if (type === POF.tilt) {
      desc.text = tr('TUTORIAL_' + n + (pc ? '_PC' : (call(D(), 'DPJPKMHLGMO') ? '_A' : '_B')));
    } else {
      desc.text = tr('TUTORIAL_' + n + (pc && type < POF.tilt ? '_PC' : ''));
      if (type === POF.hp && this.FKONEONAPDF) {
        setActive(this.FKONEONAPDF, !isHelp);
        this.FKONEONAPDF.text = tr(pc ? 'TUTORIAL_5_PC' : 'TUTORIAL_5_TAP');
      }
    }
    desc.text = String(desc.text).split('^').join('\n');
    if (type < POF.tilt) setPadding(this.OAMFIMLAAHF, 0, 0, 135, 110); else setPadding(this.OAMFIMLAAHF, 0, 0, 110, 70);
    const lang = D() ? D().KLKNEAIFCKG : -1; // 10 ChineseSimplified, 11 ChineseTraditional, 12 Japanese
    if (lang === 10 || lang === 11 || lang === 12) {
      if ((type & ~1) === 2) desc.fontSize = 62;
      desc.lineSpacing = 1.2;
    }
    if (alive(this.MPPPAPJNCNE)) this.MPPPAPJNCNE.HEGIHOAJOKK(!isHelp);
  }

  ButtonPauseHelpRight() {
    if (this.BLCAMEJJNEM < this.FLNIONGLMLC && alive(this.ENABOEHPDPP) && this.ENABOEHPDPP.activeInHierarchy) {
      this.BLCAMEJJNEM++;
      this.CCDFIOJMHGC();
      this.MGNNDFEFHAH(this.BLCAMEJJNEM, true);
    }
  }
  ButtonPauseHelpLeft() {
    if (this.BLCAMEJJNEM > 0 && alive(this.KDKIHEEJFLC) && this.KDKIHEEJFLC.activeInHierarchy) {
      this.BLCAMEJJNEM--;
      this.CCDFIOJMHGC();
      this.MGNNDFEFHAH(this.BLCAMEJJNEM, true);
    }
  }
  ButtonPauseHelpClose() { const car = CAR(); if (alive(car)) call(car, 'AFPLNBDNJHM'); }

  // restore tutorial-highlighted elements to the gameplay window, hide arrows
  CCDFIOJMHGC() {
    const win = this.OJFNCOLKMHP; if (!alive(win)) return;
    for (const h of this.LMNKADFDPMO || []) {
      if (!h) continue;
      if (h.arrow_go) setActive(h.arrow_go, false);
      for (const t of h.elements_for_active || []) if (alive(t) && t.parent !== win.transform) uiSetParent(t, win.transform);
    }
  }

  // show all control buttons
  FNOJDNIIENN() { for (const g of this.IPCCBOEGLEN || []) setActive(g, true); }
  // hide all splash labels
  CBFONCCJIEE() { for (const h of this.PGAKIIBDNMB || []) if (alive(h)) h.gameObject.SetActive(false); }

  // tutorial step completed
  OKIGBJNMOOP() {
    const S = GUIGameplay;
    if (S.DEDOFFIOEFO !== POF.none && S.DEDOFFIOEFO !== S.AOFDLCGLMDI && S.NMHIDJLMFKC < 0) {
      log('TutorialTaskComplete: ' + enumName(POF, S.DEDOFFIOEFO));
      S.AOFDLCGLMDI = S.DEDOFFIOEFO;
      const h = (this.LMNKADFDPMO || [])[S.DEDOFFIOEFO];
      const d = D();
      if (d && !call(d, 'BLGOKNOOEEO', S.DEDOFFIOEFO)) {
        call(d, 'NLPCIABIEIC', S.DEDOFFIOEFO);
        // AnalyticsController.PKLGNADJLIG [removed: analytics]
      }
      if (!h) return;
      if (h.arrow_go) setActive(h.arrow_go, false);
      for (const t of h.elements_for_active || []) uiSetParent(t, this.OJFNCOLKMHP && this.OJFNCOLKMHP.transform);
      S.DEDOFFIOEFO = POF.none;
      this.ButtonContinue();
      if (alive(this.OJFNCOLKMHP)) this.OJFNCOLKMHP.HEGIHOAJOKK(false);
      return;
    }
    // TutorialTaskCompleteFAIL -> debug console only
  }

  // close nitro tutorial step (step 2)
  KLIPHOLINEP() {
    const h = (this.LMNKADFDPMO || [])[2]; if (!h) return;
    if (h.arrow_go) setActive(h.arrow_go, false);
    for (const t of h.elements_for_active || []) uiSetParent(t, this.OJFNCOLKMHP && this.OJFNCOLKMHP.transform);
    this.ButtonContinue();
    if (alive(this.OJFNCOLKMHP)) this.OJFNCOLKMHP.HEGIHOAJOKK(false);
  }

  ButtonTutorialCrashCancel() {
    if (alive(this.EPLFFONIKMG)) this.EPLFFONIKMG.JGDCBENNDFO(false);
    this.ButtonToGarage();
  }

  // ---------------------------------------------------------------- pause menu
  ButtonPause(is_tutorial) {
    is_tutorial = !!is_tutorial;
    this.OGPFKPJIEFH = false;
    this.FOHPLEABHNI = false;
    if (Time.timeScale > 0) Time.timeScale = 0;
    const S = SS(), d = D(), car = this.EGEINPCIEON;
    if (is_tutorial && alive(S.IMKHCBJCJNB)) S.IMKHCBJCJNB.Pause();
    const lvl = LVL();
    if (lvl) {
      if (!alive(this.HNJFGLCDBEE)) {
        if (alive(this.PKFPNDGFDDB) && this.PKFPNDGFDDB.activeSelf) this.HNJFGLCDBEE = this.PKFPNDGFDDB;
        if (alive(this.ICOFFEKCFNJ) && this.ICOFFEKCFNJ.activeSelf) this.HNJFGLCDBEE = this.ICOFFEKCFNJ;
      }
      if (alive(this.HNJFGLCDBEE)) {
        let b = this.HNJFGLCDBEE === this.PKFPNDGFDDB ? !!(G.CarController && yes(G.CarController.LCJOMOHFJDI)) : true;
        b = b && !isEvent(lvl);
        let act;
        if (b) act = true;
        else if (isEvent(lvl)) act = lvl.event_contest ? lvl.event_contest.TimeLeft > 300 : false;
        else act = false;
        this.HNJFGLCDBEE.SetActive(act);
      }
    }
    if (d && call(d, 'BMMOMBGDEKF') && car && alive(car.ECNAMAJCDGI) && car.ECNAMAJCDGI.isPlaying) car.ECNAMAJCDGI.Pause();
    if (!is_tutorial && d && call(d, 'LKKDIBOKNMJ') && alive(S.LONDFMJFHEL) && S.LONDFMJFHEL.isPlaying) S.LONDFMJFHEL.Pause();
    // AdvController.GJLFMIEDBEC (ad playing) [removed: ads] -> false
    if (!(alive(this.PCDLAJMCNNP) && this.PCDLAJMCNNP.activeInHierarchy)) {
      if (G.Menu) G.Menu.ENGJPOMIPFI = AudioListener.volume;
      if (!is_tutorial) AudioListener.volume = 0;
    }
    const step = GUIGameplay.DEDOFFIOEFO;
    if (step < (this.LMNKADFDPMO || []).length && step >= 0 && activeSelf(this.OJFNCOLKMHP) && activeSelf(this.MPPPAPJNCNE)) {
      if (G.Menu) G.Menu.OLFGGHMPPCK = true;
      this.OJFNCOLKMHP.JGDCBENNDFO(false);
    } else if (G.Menu) G.Menu.OLFGGHMPPCK = false;
    this.CBFONCCJIEE();
    if (!is_tutorial) {
      this.LLAEHJGOFLG();
      this.IMJEJKHBIMO();
      this.ODHAOMJKKAE();
      const w = this.BKLILPKICFN;
      if (!alive(w)) return;
      if (this.OHOEPDMOLBN) { w.GNNIDAAJHAB = false; w.HLFGAHJIOGK = false; }
      w.HEGIHOAJOKK(false);
      if (this.OHOEPDMOLBN) { w.GNNIDAAJHAB = true; w.HLFGAHJIOGK = true; }
      this.OHOEPDMOLBN = false;
      if (G.Menu) G.Menu.EDICJCHCNCB = true;
      this.webPauseLayout();
    }
  }
  // [web] pause window: no "Tilts" (no accelerometer) and no "Graphics" toggle; window shrunk to the remaining
  // sound / music / help (+ restart when the level offers it) buttons
  webPauseLayout() {
    const win = this.BKLILPKICFN && this.BKLILPKICFN.gameObject; if (!alive(win) || !win.rect) return;
    const child = (n) => { const t = win.transform._children.find((c) => c.gameObject.name === n); return t ? t.gameObject : null; };
    setActive(child('controls_button'), false);
    setActive(child('gfx_button'), false);
    const rows = [child('help_button'), child('restart_button')].filter((g) => alive(g) && g.activeSelf);
    const H = 400 + rows.length * 160;
    win.rect.sizeDelta = [win.rect.sizeDelta[0], H];
    const top = H / 2;
    const place = (g, y) => { if (alive(g) && g.rect) g.rect.anchoredPosition = [g.rect.anchoredPosition[0], y]; };
    place(child('sound_button'), top - 165);
    place(child('music_button'), top - 165);
    rows.forEach((g, i) => place(g, top - 330 - i * 160));
  }

  ButtonContinue() {
    if (Time.timeScale >= 1) return;
    const M = G.Menu;
    if (M) M.EDICJCHCNCB = false;
    Time.timeScale = 1;
    AudioListener.volume = M ? M.ENGJPOMIPFI : 1;
    const d = D(), S = SS(), car = this.EGEINPCIEON;
    if (!d) return;
    if (call(d, 'BMMOMBGDEKF') && car && alive(car.ECNAMAJCDGI) && !car.ECNAMAJCDGI.isPlaying) car.ECNAMAJCDGI.Play();
    if (call(d, 'LKKDIBOKNMJ') && alive(S.LONDFMJFHEL) && !S.LONDFMJFHEL.isPlaying && G.CarController && yes(G.CarController.LCJOMOHFJDI)) {
      call(S, 'HCEFONCADKE', S.LONDFMJFHEL, false);
    }
    if (M && M.MDLMIEDLJMC) return;
    if (M && M.OLFGGHMPPCK) {
      M.OLFGGHMPPCK = false;
      if (alive(this.OJFNCOLKMHP)) this.OJFNCOLKMHP.HEGIHOAJOKK(false);
      this.MGNNDFEFHAH(GUIGameplay.DEDOFFIOEFO, false);
    } else {
      if (alive(this.OJFNCOLKMHP)) this.OJFNCOLKMHP.HEGIHOAJOKK(false);
      const cc = CAR();
      if (alive(cc) && cc.KJDJKLPNCHI && cc.ECBLNBNGONF && !cc.ECBLNBNGONF.enabled && alive(this.OJFNCOLKMHP)) this.OJFNCOLKMHP.JGDCBENNDFO(false);
    }
  }

  ButtonRestart(_use_fuel) {
    // AnalyticsController.OJNGEGNNOME / AdvController.NKNJOFHCDIF (interstitial) [removed: analytics/ads]
    const car = this.EGEINPCIEON, S = SS();
    if (car && alive(car.ECNAMAJCDGI)) car.ECNAMAJCDGI.Stop();
    if (alive(S.IMKHCBJCJNB)) S.IMKHCBJCJNB.Pause();
    if (alive(S.LONDFMJFHEL)) S.LONDFMJFHEL.Stop();
    if (_use_fuel) { const m = MENU(); if (alive(m) && m.LCCECGFFBGC) call(m.LCCECGFFBGC, 'OBAELOECFBH'); }
    SceneManager.LoadScene(SceneManager.GetActiveScene().name);
  }

  ButtonToGarage() {
    Time.timeScale = 0;
    const lvl = LVL(), S = SS();
    if (lvl) {
      const m = MENU();
      if (lvl.id === -1 || (alive(m) && call(m, 'CLJDAMIIAKE')) || isEvent(lvl)) { if (G.Menu) G.Menu.CCCHHLJEBKK = true; }
      if (lvl.id === -1 && alive(S.HHFECFNJNHK) && S.HHFECFNJNHK.isPlaying) S.HHFECFNJNHK.Stop();
    }
    if (G.Main && G.Main.EBIEJDOBOCP) G.Main.EBIEJDOBOCP('garage');
    else SceneManager.LoadScene('garage');
  }

  ButtonChangeSound() { call(MENU(), 'OBLKMKHMBEA'); this.LLAEHJGOFLG(); }
  ButtonChangeMusic() { call(MENU(), 'CBHHIGMKCJC'); this.LLAEHJGOFLG(); }

  // sound / music button sprites
  LLAEHJGOFLG() {
    const d = D(); if (!d) return;
    const si = this.FNHNMCHNKBC && this.FNHNMCHNKBC.image;
    if (si) si.sprite = call(d, 'BMMOMBGDEKF') ? this.HFOJHALHDBO : this.AOEDCPLGJMC;
    const mi = this.PODOCABGIOL && this.PODOCABGIOL.image;
    if (mi) { const s = call(d, 'LKKDIBOKNMJ') ? this.HINHELAMJBO : this.FEKHKLCPNMI; if (s && mi.sprite !== s) mi.sprite = s; }
  }

  ButtonSettingsGFX() {
    const m = MENU(); if (!alive(m)) return;
    call(m, 'EFBCOMMLAGE');
    const car = CAR();
    if (alive(car) && alive(car.ECBLNBNGONF)) {
      const bc = car.ECBLNBNGONF.GetComponent('BackgroundController');
      if (bc) {
        call(bc, 'MLIIENHGIGK'); call(bc, 'HAMLCJJANAJ');
        call(G.BackgroundController, 'NNDOCLOMBPN');
        call(bc, 'DIMGJKDADNE');
      }
    }
    this.ODHAOMJKKAE();
  }

  // GFX quality button sprite + label
  ODHAOMJKKAE() {
    const d = D(); if (!d) return;
    const q = d.CFDECDNFGJN;
    if (this.FPBIJPNMOEL) {
      if (q === 2) this.FPBIJPNMOEL.sprite = this.EPGENIDKCAP;
      else if (q === 1) this.FPBIJPNMOEL.sprite = this.HFKCHLONOGF;
      else if (q === 0) this.FPBIJPNMOEL.sprite = this.BFFDMCNIJHJ;
    }
    setText(this.GLLCNLBEPFD, tr('GFX_' + enumName(E.DHLBGHCGAKB, q)));
  }

  ButtonSettingsAccelerometer() {
    const d = D(); if (!d) return;
    call(d, 'KHIFJCACGNC', !call(d, 'DPJPKMHLGMO'));
    this.DMFIDCENMJF();
    this.IMJEJKHBIMO();
  }
  // controls (accelerometer / buttons) image
  IMJEJKHBIMO() {
    const d = D(); if (!d || !this.JIOODENOBLJ) return;
    const s = call(d, 'DPJPKMHLGMO') ? this.OOOLDCGCCAC : this.NDFECGCJLGE;
    if (s && this.JIOODENOBLJ.sprite !== s) this.JIOODENOBLJ.sprite = s;
  }

  // tilt buttons visibility (hidden with accelerometer control) + fire button position
  DMFIDCENMJF() {
    const d = D(); if (!d) return;
    const car = CAR();
    const hide = !!call(d, 'DPJPKMHLGMO') || (alive(car) && !!car.ECBFJDOEKMJ);
    for (const g of this.PPNPMLICJCO || []) setActive(g, !hide);
    if (alive(this.ELLAKLLBBLL)) this.ELLAKLLBBLL.anchoredPosition = new Vector2(hide ? 135 : 525, this.ELLAKLLBBLL.anchoredPosition.y);
  }

  // pause button visibility (consoles have no pause button)
  AGGPLIPJHPI() {
    const sn = SN(), P = E.BridgePHP_SN_PLATFORM;
    setActive(this.KBDLCJAJFOA, !(sn === P.NINTENDO_SWITCH || sn === P.PS4 || sn === P.PS5));
  }

  // bottom panel safe-area offset
  BEGHDNNLEDG() {
    if (GUIGameplay.OIJKDGMLHPL >= 1 && alive(this.PONHGGANEAH)) this.PONHGGANEAH.anchoredPosition = new Vector2(0, GUIGameplay.OIJKDGMLHPL);
  }

  OOABHKFNLEJ() { }
  JMMJMDCMDHI() { }

  // ---------------------------------------------------------------- HUD
  // shift points panel when the number gets more digits
  IKDCPJNHOKJ(JJDDCKDBCIL) {
    if (JJDDCKDBCIL <= this.EAECEJLMABP) return;
    this.EAECEJLMABP = JJDDCKDBCIL;
    if (alive(this.IDHJODIGPEI)) { const a = this.IDHJODIGPEI.anchoredPosition; this.IDHJODIGPEI.anchoredPosition = new Vector2(a.x + 30, a.y); }
  }

  // hp bar damage flash (CGMBBHGDFCM >= 0 while flashing)
  NLBALNDOEFG() {
    let t = this.CGMBBHGDFCM;
    if (!(t >= 0)) return;
    const bar = this.LOAJLCHCJKG; if (!bar) return;
    const c0 = this.ODECDCJMJJN, k = Math.min(t, 1);
    let c;
    if (bar.fillAmount >= 0.3) c = new Color(1 + (c0.r - 1) * k, 1 + (c0.g - 1) * k, 1 + (c0.b - 1) * k, bar.color.a);
    else { const c1 = this.KOEMFOMPNLD; c = new Color(c0.r + (c1.r - c0.r) * k, c0.g + (c1.g - c0.g) * k, c0.b + (c1.b - c0.b) * k, bar.color.a); }
    bar.color = c;
    this.CGMBBHGDFCM += Time.deltaTime * 3;
    if (this.CGMBBHGDFCM > 1) {
      this.CGMBBHGDFCM = -1;
      const car = CAR(); if (alive(car)) car.EMAKNGFOILF = false;
    }
  }

  // splash label (PGAKIIBDNMB[type]): text, type, update-if-shown, force
  HNKHJLDJMHB(FJBLHMNOPEP, FHOFNGHGNGF, PAPICKFLEMM, KNLLEGFOMII = false) {
    let text = FJBLHMNOPEP;
    const type = FHOFNGHGNGF;
    if (!(G.CarController && yes(G.CarController.MKEGHDPIIFK))) {
      if (type !== E.JLPFNIPEELJ.results) text = String(text == null ? '' : text).toUpperCase();
    } else if (type !== E.JLPFNIPEELJ.results) return;
    const list = this.PGAKIIBDNMB || [];
    const h = list[type];
    if (!(type < list.length) || !alive(h)) { console.error('Error with hints!'); return; }
    if (PAPICKFLEMM && h.gameObject.activeSelf) { setText(h.CIDKMFLFJEJ, text); return; }
    if (!KNLLEGFOMII && h.gameObject.activeSelf) return;
    if (type !== E.JLPFNIPEELJ.blood) setText(h.CIDKMFLFJEJ, text);
    h.NNIADFNMHGB();
  }

  // event counter splash (realtime, shown while paused)
  PEDBEOIPIIB(FJBLHMNOPEP) {
    const list = this.PGAKIIBDNMB || [];
    if (list.length > 6 && alive(list[6])) {
      const h = list[6];
      if (alive(h.OONFFMIIIJN)) h.OONFFMIIIJN.anchoredPosition = new Vector2(0, 0);
      if (h.EECGBBLCAOP) h.EECGBBLCAOP.color = new Color(0.13333334, 0.47058824, 0.8509804, 1);
      setText(h.CIDKMFLFJEJ, FJBLHMNOPEP);
      h.NNIADFNMHGB();
      this.StartCoroutine(h.BHAHHFJLFNI());
    }
  }

  // results: "x2 silver" button pulse
  LPFPLIJJJHJ() {
    // [removed: ads] rewarded "x2 silver" button is never offered
    if (alive(this.INNIIHAJAOB) && this.INNIIHAJAOB.gameObject.activeSelf) this.INNIIHAJAOB.gameObject.SetActive(false);
    const t = Time.realtimeSinceStartup;
    const f = t - (Math.trunc(t * 0.5) + Math.trunc(t * 0.5));
    let pp = f < 0 ? -1 : f - 1;
    pp = 1 - Math.abs(pp);
    let s = Math.min(pp, 1) * 0.07000005 + 1;
    if (pp < 0) s = 1;
    if (alive(this.JEDAALOAGBO)) this.JEDAALOAGBO.localScale = new Vector3(s, s, 1);
  }

  // GUICoins counter animation: tm.text -> tm.text + CarController.GLGHPCHBONI (0.5 s realtime)  [EDNODNGHHMJ]
  *JLHJOJHINPC(NBBKILHLACJ) {
    const tm = NBBKILHLACJ;
    if (!tm || !tm.CIDKMFLFJEJ) return;
    const start_value = parseInt(tm.CIDKMFLFJEJ.text, 10);
    if (!Number.isFinite(start_value) || !/^\s*[+-]?\d+\s*$/.test(tm.CIDKMFLFJEJ.text)) return;
    const anim_length = 0.5;
    const final_value = ((G.CarController && G.CarController.GLGHPCHBONI) | 0) + start_value;
    const pauseEndTime = Time.realtimeSinceStartup + anim_length;
    while (Time.realtimeSinceStartup < pauseEndTime) {
      let k = 1 - (pauseEndTime - Time.realtimeSinceStartup) / anim_length;
      if (k < 0) k = 0;
      tm.CIDKMFLFJEJ.text = String(Math.trunc(k * (final_value - start_value) + start_value));
      yield null;
    }
    const c = this.GIGKPJAGDKM;
    if (c) tm.CIDKMFLFJEJ.color = new Color(c.r, c.g, c.b, c.a);
    tm.ICMOCEHIFOI();
    tm.CIDKMFLFJEJ.text = String(final_value);
  }

  // results: stars one by one, then stamps  [GHHIIAGLDMN]
  *OJHKPPIFCLM(JPPCOPEIOGH, DMPKPEPDOKI) {
    const is_new_record = !!JPPCOPEIOGH, count_stars = DMPKPEPDOKI | 0;
    yield 0.5;
    if (count_stars >= 1) {
      for (let i = 0; i < count_stars; i++) {
        const img = this.GCDJJBJHGJK[i], coin = this.LFAKFIIKAEP[i];
        if (img && coin) { img.sprite = this.EOHKIKEBFIF; coin.ICMOCEHIFOI(); }
        yield 0.2;
      }
      yield 0.15;
    }
    const lvl = LVL();
    const mission = lvl ? !isEvent(lvl) : true;
    if (!this.KMOAKPCBBGM) return;
    this.KMOAKPCBBGM.gameObject.SetActive(mission);
    this.KMOAKPCBBGM.ICMOCEHIFOI();
    if (!is_new_record) return;
    yield 0.4;
    if (!this.DFJFDBEEMGN) return;
    this.DFJFDBEEMGN.gameObject.SetActive(true);
    this.DFJFDBEEMGN.ICMOCEHIFOI();
  }

  // results window shown: random hint
  PIHHDKCEMGD() {
    // [removed: ads] no rewarded "x2 silver" button
    if (alive(this.INNIIHAJAOB)) this.INNIIHAJAOB.gameObject.SetActive(false);
    if (!alive(this.KINNGMPNOHN) || this.KINNGMPNOHN.activeSelf) return;
    if (!alive(this.NMBPJAJCLOF) || !this.CDEEEFCAPHE) return;
    const d = D(), lvl = LVL();
    if (!d || !lvl || isEvent(lvl)) return;
    const last = call(d, 'DCOOPMCEMNE');
    if (!last) return;
    const list = [];
    for (const h of this.JHDHHJCLDEK || []) {
      if (!h || !(h.lvl_id <= last.AKLCKKPELBF)) continue;   // DJKGLJOCFCE+0x10 = level id
      let s = tr(h.translate_key);
      if (h.translate_key === 'HINT_NEW_3') s = String(s).split('[x]').join('10');
      if (list.includes(s)) continue;
      if (h.translate_key === 'HINT_7') {
        const sn = SN();
        if (sn !== E.BridgePHP_SN_PLATFORM.GOOGLE_PLAY && sn !== E.BridgePHP_SN_PLATFORM.APP_STORE) { log('Remove HINT_7 for PC'); continue; }
      }
      if (h.is_only_free2play && !yes(G.Main && G.Main.LHBBBLINMIE)) continue;
      list.push(s);
    }
    const r = Math.floor(Math.random() * list.length);
    log('LastOpenLvl: ' + last.AKLCKKPELBF + ', final_hints: ' + list.length + ', random_hint: ' + r);
    if (list.length <= r) { console.error('ShowResulstHints error.'); return; }
    this.CDEEEFCAPHE.text = '<color=#FFBB00>' + String(tr('HINT')).toUpperCase() + ':</color> ' + list[r];
    this.NMBPJAJCLOF.SetActive(true);
  }

  ShowResultResourcesHints(translate_key) { this.HNKHJLDJMHB(tr(translate_key), E.JLPFNIPEELJ.results, false, true); }

  ButtonSilverRewarded() {
    // [removed: ads] "watch an ad for x2 silver": not offered (keeps the economy fair) - just hide the button
    if (alive(this.INNIIHAJAOB)) this.INNIIHAJAOB.gameObject.SetActive(false);
  }

  // ---------------------------------------------------------------- event rating lines on the results window
  MFOBEMEHKEO(JCEDJOALMDL, FECKNINKJBG, GHGELIHOKND) {
    const lvl = LVL();
    const ec = lvl && lvl.event_contest;
    if (!ec || !alive(this.HKPNHDAKHHO) || !this.MCPJMFNBDOD) return;
    const sort = ec.sort;
    const go = Instantiate(this.MCPJMFNBDOD, this.HKPNHDAKHHO.transform);
    if (!go) return;
    const r = go.GetComponent('GUIRating'), rt = go.transform;
    rt.anchoredPosition = new Vector2(600, JCEDJOALMDL ? 340 : 260);
    if (!r) return;
    const rtOf = (c) => (c ? c.transform : null);
    const shiftX = (c, dx) => { const t = rtOf(c); if (alive(t)) { const a = t.anchoredPosition; t.anchoredPosition = new Vector2(a.x + dx, a.y); } };
    shiftX(r.EFPFLANDGIP, -50); shiftX(r.HHBLLDDBDEJ, -50); shiftX(r.KENPKAMCIDN, -50);
    if (sort === 1 || sort === 2) {
      if (rtOf(r.HHBLLDDBDEJ)) SetSizeWithCurrentAnchors(rtOf(r.HHBLLDDBDEJ), 0, 550);
      SetSizeWithCurrentAnchors(rt, 0, 700);
      if (sort === 2) { setActive(r.EMKMCEPMMBG, false); setActive(r.GECOFGCABNE, false); }
      else {
        setActive(r.IEGFKPEEIEM, false); setActive(r.JNMKHADEGJH, false);
        const a = rtOf(r.EMKMCEPMMBG), b = rtOf(r.IEGFKPEEIEM);
        if (alive(a) && alive(b)) a.anchoredPosition = b.anchoredPosition;
        if (alive(a) && alive(r.GECOFGCABNE)) r.GECOFGCABNE.anchoredPosition = new Vector2(a.anchoredPosition.x - 86, r.GECOFGCABNE.anchoredPosition.y);
      }
    } else if (sort === 0 && rtOf(r.HHBLLDDBDEJ)) SetSizeWithCurrentAnchors(rtOf(r.HHBLLDDBDEJ), 0, 410);
    const d = D(), cur = G.Car && G.Car.Current;
    if (!d || !cur) return;
    this.HLIGHGDJECN(r, d.DIKNHCJJBBC, cur.name, FECKNINKJBG, GHGELIHOKND, d.CDKFEFCGMKE, sort, true);
    const rp = lvl.event_replay_ghost;
    if (!rp) return;
    const go2 = Instantiate(go, this.HKPNHDAKHHO.transform);
    if (!go2) return;
    const r2 = go2.GetComponent('GUIRating');
    go2.transform.anchoredPosition = new Vector2(600, JCEDJOALMDL ? 260 : 340);
    const carName = G.Car && G.Car.DBJBMIGLBNF ? G.Car.DBJBMIGLBNF(rp.car_id) : '';
    if (r2) this.HLIGHGDJECN(r2, rp.name, carName, rp.points, rp.time, rp.country_id, sort, false);
  }

  // fill one GUIRating line
  HLIGHGDJECN(BKBKLJKDINA, DIKNHCJJBBC, FMBLJPEOKMC, ONBPMGJNDOC, OKKCFECENJB, CDKFEFCGMKE, JODFAOFGNDK, FJDCALHGHCI) {
    const r = BKBKLJKDINA; if (!r) return;
    setText(r.FGOHLMLBAOF, '');
    setText(r.HHBLLDDBDEJ, DIKNHCJJBBC);
    setText(r.KENPKAMCIDN, FMBLJPEOKMC);
    const lvl = LVL();
    if (JODFAOFGNDK >>> 0 < 2 && lvl && lvl.event_contest) setText(r.EMKMCEPMMBG, call(G.Main, 'HIIJGDANAIK', ONBPMGJNDOC, lvl.event_contest.type));
    if ((JODFAOFGNDK | 2) === 2) setText(r.IEGFKPEEIEM, call(G.Main, 'CHJONPOFGFA', OKKCFECENJB));
    if (r.INBNKMGIDFN) r.INBNKMGIDFN.color = FJDCALHGHCI ? new Color(1, 1, 1, 1) : new Color(0.223, 0.31, 0.392, 1);
    const c = FJDCALHGHCI ? new Color(0, 0, 0, 1) : new Color(1, 1, 1, 1);
    for (const t of [r.EMKMCEPMMBG, r.IEGFKPEEIEM, r.HHBLLDDBDEJ, r.FGOHLMLBAOF]) if (t) t.color = new Color(c.r, c.g, c.b, c.a);
    if (r.KENPKAMCIDN) r.KENPKAMCIDN.color = FJDCALHGHCI ? new Color(0.5, 0.5, 0.5, 1) : new Color(0.8, 0.8, 0.8, 1);
    // BridgePHP.GetCountryTextureFromID(country) -> flag sprite [removed: online]
  }

  // ---------------------------------------------------------------- nickname labels
  // create player / replay-ghost nickname labels
  CEFDKCEFHAK() {
    if (!alive(this.OJFNCOLKMHP) || !this.OCAJKFEMEJN) return;
    const g1 = Instantiate(this.OCAJKFEMEJN, this.OJFNCOLKMHP.transform); if (!g1) return;
    this.DJACPOHIGAL = g1.transform; uiSetAsFirstSibling(this.DJACPOHIGAL);
    const g2 = Instantiate(this.OCAJKFEMEJN, this.OJFNCOLKMHP.transform); if (!g2) return;
    this.GBIDOPEHPMA = g2.transform; uiSetAsFirstSibling(this.GBIDOPEHPMA);
    this.KKMEFLDDIKA = this.GBIDOPEHPMA.GetComponent('HorizontalLayoutGroup');
    if (G.Main && alive(G.Main.FFBJAKPBMOD)) this.GOIEMIHMIHN = G.Main.FFBJAKPBMOD.GetComponent('CarReplay');
    const d = D();
    for (const ch of this.DJACPOHIGAL) {
      if (ch.name.includes('flag')) { /* BridgePHP.GetCountryTextureFromID(d.CDKFEFCGMKE) [removed: online] */ }
      else if (ch.name.includes('player_name')) { const t = ch.GetComponent('Text'); if (t && d) t.text = d.DIKNHCJJBBC || ''; }
    }
    const lvl = LVL();
    for (const ch of this.GBIDOPEHPMA) {
      if (ch.name.includes('flag')) { this.NAIPLKPCPMM = ch.GetComponent('Image'); /* country flag [removed: online] */ }
      else if (ch.name.includes('player_name')) {
        this.LICIFMIGJNB = ch.GetComponent('Text');
        const rp = lvl && lvl.event_replay_ghost;
        if (this.LICIFMIGJNB && rp) this.LICIFMIGJNB.text = rp.name || '';
      }
    }
  }

  // destroy ghost label
  EHHBPPDPGIK() { if (alive(this.GBIDOPEHPMA)) Destroy(this.GBIDOPEHPMA.gameObject); }

  // update label position: player label (OFDBLGCLFPL=false) or replay ghost label (true)
  LJNIGKAEGON(LBFLGOOEOCE, AGHABKFGCLN, OFDBLGCLFPL) {
    const p = LBFLGOOEOCE, cam = AGHABKFGCLN;
    if (!OFDBLGCLFPL) {
      if (!alive(this.DJACPOHIGAL) || !cam) return;
      placeAtScreen(this.DJACPOHIGAL, cam.WorldToScreenPoint(new Vector3(p.x, p.y + 2, p.z)));
      return;
    }
    // replay ghost label: follows the ghost, clamped to the screen edges, fades near the player label
    // TODO(verify): reconstructed from a badly decompiled block (online replays only)
    if (!alive(this.GBIDOPEHPMA) || !alive(this.GOIEMIHMIHN) || !cam) return;
    const gt = this.GOIEMIHMIHN.LIEHBGFFHFF || this.GOIEMIHMIHN.transform;
    if (!alive(gt)) return;
    const gp = gt.position;
    const sp = cam.WorldToScreenPoint(new Vector3(gp.x, gp.y + 2, gp.z));
    const vx = sp.x / Screen.width;
    const canvas = this.JEFNJEAGADE ? this.JEFNJEAGADE.rect : { width: Screen.width, height: Screen.height };
    const lw = this.KKMEFLDDIKA ? (this.KKMEFLDDIKA.preferredWidth || 0) : 0;
    const half = canvas.width * 0.5 + (lw + 32 + 85) * 0.5 * -0.7;
    let tx, ty, k;
    if ((sp.x > -3000 && vx < -0.05) || 10 < p.z - gp.z) { tx = 15 - half; ty = canvas.height * 0.5 - 250; }
    else if (1.05 < vx || p.z - gp.z < -110) { tx = half; ty = canvas.height * 0.5 - 198; }
    else {
      this.MIBGMHKNGON += (100 - this.MIBGMHKNGON) * Math.max(0, Time.deltaTime * 0.1);
      const s0 = this.GBIDOPEHPMA.anchoredPosition; placeAtScreen(this.GBIDOPEHPMA, sp);
      const lp = this.GBIDOPEHPMA.localPosition; this.GBIDOPEHPMA.anchoredPosition = s0;
      tx = lp.x; ty = lp.y;
    }
    this.FJGPEHPBLFE = new Vector3(tx, ty, 0);
    const cur = this.GBIDOPEHPMA.localPosition;
    k = Mathf.Clamp01(Time.deltaTime * this.MIBGMHKNGON);
    this.GBIDOPEHPMA.localPosition = new Vector3(cur.x + (tx - cur.x) * k, cur.y + (ty - cur.y) * k, 0);
    if (!alive(this.DJACPOHIGAL)) return;
    const a = this.DJACPOHIGAL.localPosition, b = this.GBIDOPEHPMA.localPosition;
    const dist = Math.hypot(a.x - b.x, a.y - b.y, a.z - b.z);
    if (dist >= 300) return;
    const alpha = Math.min(dist / 200, 1) * 0.85 + 0.15;
    this.JEBFHMDIDMC.a = alpha;
    const c = this.JEBFHMDIDMC;
    if (this.LICIFMIGJNB) this.LICIFMIGJNB.color = new Color(c.r, c.g, c.b, alpha);
    if (this.NAIPLKPCPMM) this.NAIPLKPCPMM.color = new Color(c.r, c.g, c.b, alpha);
  }

  // ---------------------------------------------------------------- encyclopedia discovery
  // register a newly met encyclopedia object (arrow shows above it)
  PKECIKMIECO(BAMPGHJACCL, MIPKEALMBHI) {
    if (this.GDLDOBJNKJP) return;
    this.DBDGDLIENJA = BAMPGHJACCL;
    this.GDLDOBJNKJP = true;
    this.AONILDNKNCB = MIPKEALMBHI;
    if (!MIPKEALMBHI) return;
    this.DELDDEDKHHE = MIPKEALMBHI.transform;
    let h;
    switch (BAMPGHJACCL) {
      case 11: case 14: h = 1.7; break;
      case 12: h = 2.5; break;
      case 13: h = 4.7; break;
      case 17: h = 1.5; break;
      default: h = BAMPGHJACCL === 0 ? 1 : 2; break;
    }
    this.PEAOLDCNLIK = h;
    this.KDPPODAJELB = Time.realtimeSinceStartup;
  }

  // may this object type be offered as a new encyclopedia entry?
  NNOEOMKNGJL(BAMPGHJACCL) {
    const enc = G.Encyclopedia && G.Encyclopedia.EILIOBHFJNB ? G.Encyclopedia.EILIOBHFJNB(BAMPGHJACCL) : null;
    if (!enc || !(G.CarController && yes(G.CarController.LCJOMOHFJDI)) || enc.status !== 0 || enc.is_open_by_default) return false;
    const car = CAR();
    if (!alive(car) || !alive(car.BHDKJIINJNL)) return false;
    if ((car.FJFNDGAMPHH | 0) - car.BHDKJIINJNL.position.z <= 50) return false;
    return !car.GJFMGCNOHEP;
  }

  // encyclopedia arrow over the new object; opens the popup when it is on screen
  HNINFAKLAJH() {
    if (!alive(MENU())) return;
    const lvl = LVL(); if (!lvl) return;
    if (!(lvl.id > 0 && this.GDLDOBJNKJP)) return;
    const car = CAR();
    if (!alive(car) || !alive(car.ECBLNBNGONF)) return;
    if (!alive(this.AONILDNKNCB)) {
      if (activeSelf(this.MMNGEHDKKDK)) this.MMNGEHDKKDK.gameObject.SetActive(false);
      return;
    }
    const cz = car.BHDKJIINJNL ? car.BHDKJIINJNL.position.z : 0;
    if (!alive(this.DELDDEDKHHE)) return;
    const op = this.DELDDEDKHHE.position;
    if (-2 < cz - op.z) { this.AONILDNKNCB = null; return; } // object no longer ahead of the car
    let f = (Time.realtimeSinceStartup - this.KDPPODAJELB) * 0.7;
    f = f - Math.trunc(f / 0.8) * 0.8;
    let b = Math.min(f, 0.8) - 0.4;
    if (f < 0) b = -0.4;
    const cam = car.ECBLNBNGONF.PEOBIGGOKBF;
    if (!cam) return;
    const sp = cam.WorldToScreenPoint(new Vector3(op.x, op.y + this.PEAOLDCNLIK + (0.4 - Math.abs(b)), op.z));
    const pct = (sp.x / Screen.width) * 100;
    if (Number.isFinite(pct) && (pct | 0) > 89 && !activeSelf(this.MMNGEHDKKDK)) return;
    if (!alive(this.MMNGEHDKKDK)) return;
    placeAtScreen(this.MMNGEHDKKDK, sp);
    if (this.LJAIJDPPOIP) return;
    this.LFOIDHBMEMK();
    this.MMNGEHDKKDK.gameObject.SetActive(true);
  }

  // open the encyclopedia discovery popup
  LFOIDHBMEMK() {
    if (!this.GDLDOBJNKJP) return;
    this.LJAIJDPPOIP = true;
    const name = enumName(E.CPFPFGOIDDO, this.DBDGDLIENJA);
    log('ShowEncyclopediaItem: ' + name);
    const enc = G.Encyclopedia && G.Encyclopedia.EILIOBHFJNB ? G.Encyclopedia.EILIOBHFJNB(this.DBDGDLIENJA) : null;
    setText(this.IOKLGCJLABO, tr(name.toUpperCase() + '_NAME'));
    if (enc) {
      call(D(), 'CHGBPDAONOH', this.DBDGDLIENJA, true);
      if (this.FJGFDCLFJDE) this.FJGFDCLFJDE.sprite = enc.icon;
      const desc = this.IFIIGHKOFMO;
      if (desc) {
        desc.text = tr('DAMAGE') + ': ' + (enc.damage | 0);
        if (enc.money > 0) desc.text = desc.text + '\n' + tr('SILVER') + ': ' + (enc.money | 0);
        desc.text = desc.text + '\n' + '\n' + tr(name.toUpperCase() + '_DESC');
      }
      const reward = (G.Main && G.Main.EBAMKLGMOMC) | 0;
      setText(this.AKBGGFCPHMI, tr('CLAIM') + ' ' + reward);
      const adv = false; // AdvController.HNDMJBICLJF(): rewarded available [removed: ads]
      if (alive(this.HLNMJFFLMIG)) {
        this.HLNMJFFLMIG.anchoredPosition = new Vector2(adv ? -284 : 0, this.HLNMJFFLMIG.anchoredPosition.y);
        SetSizeWithCurrentAnchors(this.HLNMJFFLMIG, 0, adv ? 420 : 520);
      }
      setActive(this.JLBGKECAOGP, adv);
      if (adv) setText(this.DNGGLFMIDOJ, tr('CLAIM') + ' ' + (reward << 1));
    }
    this.ButtonPause(true);
    this.PFEJOCMFKJE = Time.realtimeSinceStartup;
    setActive(this.MMNGEHDKKDK, false);
    if (alive(this.OKGEEPNFNDE)) this.OKGEEPNFNDE.HEGIHOAJOKK(false);
  }

  // hide encyclopedia arrow
  POCPBLEDNJH() { if (activeSelf(this.MMNGEHDKKDK)) this.MMNGEHDKKDK.gameObject.SetActive(false); }

  // claim encyclopedia reward (x1, or x2 after the rewarded ad)
  ButtonRewardEncyclopediaItem(is_adv) {
    if (Time.realtimeSinceStartup - this.PFEJOCMFKJE < 0.5) return;
    const d = D();
    if (!d) return;
    call(d, 'DIMKKHJDHFJ', (call(d, 'HPDEBBJNCIK') | 0) + ((G.Main && G.Main.EBAMKLGMOMC) | 0) * (is_adv ? 2 : 1));
    const S = SS(); call(S, 'GIGBLEBBIEK', S.CIMAPDEBGGG);
    this.ButtonContinue();
    if (alive(this.OJFNCOLKMHP)) this.OJFNCOLKMHP.HEGIHOAJOKK(false);
  }
  ButtonRewardEncyclopediaShowAdv() {
    // [removed: ads] rewarded x2 claim is hidden (JLBGKECAOGP inactive); nothing to do
  }
  // fake-ad countdown "2", "1" then x2 reward (editor/ad callback flow)  [IKFEHJCMKKN]
  *GGKBDJCHHOE() {
    if (alive(this.OKGEEPNFNDE)) this.OKGEEPNFNDE.JGDCBENNDFO(false);
    yield { realtime: 0.3 };
    this.PEDBEOIPIIB('2');
    yield { realtime: 1 };
    this.PEDBEOIPIIB('1');
    yield { realtime: 1 };
    this.ButtonRewardEncyclopediaItem(true);
  }

  // ---------------------------------------------------------------- revive
  ButtonReviveStart() {
    const car = CAR();
    if (alive(car)) call(car, 'HCBBKPNEMLE');
    const lvl = LVL(); if (!lvl || !alive(car)) return;
    if (lvl.id === 0) {
      const co = call(car, 'HAPAIKKJNCN'); if (co) this.StartCoroutine(co);
      // Analytics.CustomEvent("FreeReviveTutorial") [removed: analytics]
      return;
    }
    // [removed: ads] rewarded revive -> one free revive per race, then behaves like "cancel"
    if (this._reviveUsed) { this.ButtonReviveCancel(); return; }
    this._reviveUsed = true;
    const co = call(car, 'HAPAIKKJNCN'); if (co) this.StartCoroutine(co);
  }
  ButtonReviveCancel() {
    setText(this.CFFNHNOABBF, '');
    if (!alive(this.OAEENEPDLMI)) return;
    this.OAEENEPDLMI.JGDCBENNDFO(false);
    const car = CAR(); if (!alive(car)) return;
    call(car, 'HCBBKPNEMLE');
    car.FPLDMGGFKED = true;
    const co = call(car, 'FIOKLNLIDNH', false); if (co) this.StartCoroutine(co);
  }
}

define('GUIGameplay', GUIGameplay);
G.GUIGameplay_ResultsHint = ResultsHint;
G.GUIGameplay_HelpItem = HelpItem;
