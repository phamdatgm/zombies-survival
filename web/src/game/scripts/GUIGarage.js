// GUIGarage — main menu / garage UI controller (car selection & purchase, upgrades, paint colors,
// repair, map + level selection, start race, settings, achievements, encyclopedia, credits,
// donate (currency exchange) window, tutorials, cheats).
// Ported from dump/decompiled/GUIGarage.c (+ nested coroutines FIGMLAAMNLF, DJJFFDPEJKB, OMJCFLCPGDB,
// POKBOGKBJMK, NPNKOHCAMIG -> generator methods below).
//
// Removed / neutralised for the web build:
//  - IAP shop: gold packs, special offers, doubler pack, restore purchases  [removed: IAP]
//  - rewarded / interstitial / banner ads (upgrade/color/free gold rewards)  [removed: ads]
//  - social links, store links, rating/leaderboards, GPGS / Game Center, server sync, GDPR terms,
//    notifications, ZD2 promo  [removed: social/online]
// Many big garage-refresh routines live in Menu (Menu.OLOGKIHIIEL = RefreshGarage etc.) and are
// called through G.Menu.KECGFPHIEHF exactly as in the decompile.
import { Vector2, Vector3, Color, Time, Input, Application, SetSizeWithCurrentAnchors, uiDirty, Image, Button } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { Lang } from '../util.js';
import { E } from '../enums.js';
import { NOTICE, APP_VERSION, noticeOk, halt } from '../../notice.js';
import { openMoreGames, moreGamesAllowed, moreGamesSprite } from '../moreGames.js';

// ---------------------------------------------------------------- web platform constants
// BridgePHP.sn (platform) -> NONE on web: hides every platform/online specific button.
const WEB_SN = 0;
// BridgePHP.sid (server session id) -> always empty on web (no server).
const WEB_SID = '';

// GDKKPEEJJAO (nested enum): Show = 0, Hide = 1
const GDKKPEEJJAO = { Show: 0, Hide: 1 };
// MGACAOGOMPM shop item type: engine 0, wheels 1, gun 2, nitro 3, armor 4
// APJHDPJBJLL donate item type: Silver 0, Gold 1, Fuel 2, SpecialOffer 3
// IDNANBIKFMM currency: Silver 0, Gold 1, USD 2

// ---------------------------------------------------------------- helpers
const prof = () => (G.Main ? (G.Main.FBDDKIOEKDM || G.Main.CHEOEEOBMDH || null) : null); // Main.playerProfile (DAFNMLEKHAD)
const menu = () => (G.Menu ? G.Menu.KECGFPHIEHF : null);
const mainI = () => (G.Main ? G.Main.KECGFPHIEHF : null);
const carCtl = () => (G.CarController ? G.CarController.KECGFPHIEHF : null);
const goOf = (x) => (x ? (x.gameObject || x) : null);
function setActive(x, b) { const g = goOf(x); if (g && g.SetActive) g.SetActive(!!b); }
function activeSelf(x) { const g = goOf(x); return !!(g && alive(g) && g.activeSelf); }
function activeInH(x) { const g = goOf(x); return !!(g && alive(g) && g.activeInHierarchy); }
function setText(t, s) { if (t) t.text = s == null ? '' : String(s); }
function setSprite(img, s) { if (img) img.sprite = s; }
function showWin(w, b = false) { if (alive(w) && w.HEGIHOAJOKK) w.HEGIHOAJOKK(!!b); }
function hideWin(w, b = false) { if (alive(w) && w.JGDCBENNDFO) w.JGDCBENNDFO(!!b); }
function tr(key) { // Translate.KECGFPHIEHF.JJJNIPAKLJF(key)
  const t = G.Translate && G.Translate.KECGFPHIEHF;
  if (alive(t) && typeof t.JJJNIPAKLJF === 'function') return t.JJJNIPAKLJF(key);
  return Lang.get(key);
}
function curWindow() { return G.GUIWindow ? G.GUIWindow.OFEJBBPBBFG : null; } // GUIWindow.current
// Main.BKPNLKDKAKA(a, b, t): exponential ease-out lerp
function ease(a, b, t) {
  if (G.Main && typeof G.Main.BKPNLKDKAKA === 'function') return G.Main.BKPNLKDKAKA(a, b, t);
  return (b - a) * (1 - Math.pow(2, -10 * t)) + a;
}
// C# Math.Round (banker's rounding)
function roundEven(x) { const r = Math.round(x); return (Math.abs(x % 1) === 0.5 && r % 2 !== 0) ? r - 1 : r; }
function sound(clip) { if (G.SoundScript && typeof G.SoundScript.GIGBLEBBIEK === 'function') G.SoundScript.GIGBLEBBIEK(clip); }
function anchored(rt) { return rt ? rt.anchoredPosition : new Vector2(0, 0); }
function setAnchored(rt, x, y) { if (rt) rt.anchoredPosition = new Vector2(x, y); }
function setColor(g, r, gg, b, a) { if (g) g.color = new Color(r, gg, b, a); }
function lerpColor(c0, c1, t) { return new Color(c0.r + (c1.r - c0.r) * t, c0.g + (c1.g - c0.g) * t, c0.b + (c1.b - c0.b) * t, c0.a + (c1.a - c0.a) * t); }
function arr(a) { return Array.isArray(a) ? a : []; }
function isEvent(lvl) { return !!(lvl && lvl.IsEvent); }
function levels() { const m = mainI(); return m ? arr(m.IHPBACJOJMA) : []; }
function cars() { const m = mainI(); return m ? arr(m.GDPCMIGAPOM) : []; }
function achievements() { const m = mainI(); return m ? arr(m.HEIGOLFEAHJ) : []; }
function curCar() { return G.Car ? G.Car.Current : null; }
const isConsole = () => !!(G.Main && typeof G.Main.KCHOEBEIOCE === 'function' && G.Main.KCHOEBEIOCE() === true); // always false (consoles)
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
// Transform.SetParent(parent) — the binary uses the 1-arg overload (worldPositionStays = true): the element keeps
// its screen position (and size on screen) in the new parent; the DOM element follows.
function uiSetParent(t, p) {
  if (!t || !p) return;
  const keep = t.gameObject && t.gameObject.rect && t.parent;
  const pos = keep ? t.position : null, k0 = keep ? uiScaleOf(t.parent.gameObject) : 1;
  t.SetParent(p, false);
  const el = t.gameObject && t.gameObject._el, pel = p.gameObject && p.gameObject._el;
  if (el && pel && el.parentNode !== pel) pel.appendChild(el);
  if (keep) {
    const k1 = uiScaleOf(p.gameObject);
    if (k1 && Math.abs(k1 - k0) > 1e-4) { const s = t.localScale; t.localScale = new Vector3(s.x * k0 / k1, s.y * k0 / k1, s.z); }
    const cur = t.position, a = t.anchoredPosition;
    t.anchoredPosition = new Vector2(a.x + (pos.x - cur.x) / k1, a.y + (pos.y - cur.y) / k1);
  }
  uiDirty();
}
// ToggleGroup emulation (the engine has no ToggleGroup): when toggle [i] is on, switch the others off;
// a group never ends with every toggle off (allowSwitchOff = false).
let _inGroup = false;
function groupToggle(toggles, i) {
  if (_inGroup) return;
  const a = arr(toggles), t = a[i]; if (!t) return;
  _inGroup = true;
  try {
    if (!t.isOn && !a.some((x) => x && x.isOn)) t.isOn = true;
    if (t.isOn) for (const o of a) if (o && o !== t && o.isOn) o.isOn = false;
  } finally { _inGroup = false; }
}
function uiLastSibling(t) {
  if (!t) return;
  t.SetAsLastSibling();
  const el = t.gameObject && t.gameObject._el;
  if (el && el.parentNode) el.parentNode.appendChild(el);
  uiDirty();
}

export class GUIGarage extends GameBehaviour {
  static LOICFFJDFGG = 0;   // Time.time when the story window was last closed
  static MNNPLDKPNBA = 0;   // upgrades panel shown Y position (also enlarges the panel when > 0)

  constructor(go, p) {
    super(go, p);
    // from .ctor
    this.DKPNEJGJOMD = [];          // Sprite[4] (serialized)
    this.IECPAMOAJNN = 950;         // map level panel hidden X
    this.GNIEPJFKLBH = 0;           // map level panel shown X
    this.FCLLFMPIBIL = [];          // Image[3] stars (serialized)
    this.BFJGLAKDHEE = [];          // LevelTaskGUI[3] (serialized)
    this.DKOFFJBJPED = -3787;       // donate scroll X of fuel tab (item_fuel_1 visible)
    this.CJBFLCDDAGL = 335;
    this.JFDCOOMGBEO = -3403;       // donate scroll X of fuel tab (item_fuel_1 hidden)
    this.AFPDKDHGGCE = 311;
    this.HOPCDPIPGHI = -2;          // language index the donate texts were built for
    this.PBCBAIIEMPM = false;       // donate amounts texts initialised
    this.GCGAAMHEENO = [];          // RectTransform[3] (serialized)
    // private runtime state
    this.PILHKCFDJIH = null;        // coroutine: map background fade (KEPPKPEAEOO)
    this.GBAJAFLKFEN = false;       // GUILevel list built
    this.HBMBJIDJGCB = false;       // map level panel animating
    this.ANFGNAMMLGO = null;        // coroutine: map level panel show/hide
    this.BKPMKNLDPCK = 0;           // story window open time
    this.FGNDGHEOHOI = 0;           // last event timers refresh time
    this.OIACPHOMODK = null;        // cached first level progress (DJKGLJOCFCE)
    this.DKEAJKJNACK = 0;           // repair price (gold)
    this.EDCKCCHPNGF = null;        // Image of arrow_car_next
    this.EJEFCJEKIEM = null;        // Image of arrow_car_prev
    this.MANLAIBDMNI = false;
    this.EMBCBNMEIAI = 0;           // easter egg tap counter
    this.FFPMBLIFMHF = null;        // ShopItem being bought
    this.JNFJMJBMEJK = null;        // coroutine: upgrades panel slide
    this.OKIBLCCCPJH = false;       // next upgrades panel toggle is instant
    this.EMPMIBCIGPA = 0;           // currently shown donate tab / no-money currency (APJHDPJBJLL)
    this.LIFHKGNEIJE = false;       // donate toggle scrolls the list
    this.JJNDLKGGGMJ = 0;           // frames until top panel buttons re-layout
    this.DOOGGCKFICL = false;       // sync confirm: is_server
    this.DLCFJBKGCHO = 0;           // next cheat ad buttons refresh time
    this.NBNHENIBKNK = 0;           // logs toggle tap counter
  }

  // ================================================================ lifecycle
  Awake() { this.DKIFODMOFNO(); }

  // hide every root window of the canvas, show the main menu background
  DKIFODMOFNO() {
    if (this.IGGGGOCBLFF) for (const ch of this.IGGGGOCBLFF) setActive(ch, false);
    setActive(this.JPHKBMCMAIE, true);
  }

  Start() {
    if (G.Menu && typeof G.Menu.BGKFMDFJFMA === 'function') G.Menu.BGKFMDFJFMA(this.ALPGNDDCLBF, 0.25);
    if (this.LBHGGEEHNFE) this.EDCKCCHPNGF = this.LBHGGEEHNFE.GetComponent(Image);
    if (this.ACNGBCIFNMH) this.EJEFCJEKIEM = this.ACNGBCIFNMH.GetComponent(Image);
    if (WEB_SID !== '') {
      this.CDFFAINFEDD();
      this.EOGBHKMFBGE();
      setActive(this.EEMEEEJOONK, true);
      // BridgePHP.SetServerStatusIcon(...)  [removed: server]
    } else {
      setActive(this.FEANMPPFEHB, false);
      setActive(this.EEMEEEJOONK, false);
      this.CDFFAINFEDD();
    }
    this.PDCIBBDKCLN();
    this.FKANPAEENNP();
    this.MNIKOMAODMK();
    const t = G.Translate && G.Translate.KECGFPHIEHF;
    if (alive(t) && typeof t.IJFFLNNCGHI === 'function') t.IJFFLNNCGHI();
    this.HMJFKIDHNDE();
    this.webHideRemoved();
  }

  // [web] hide every button whose feature was removed (social, store, rating, ads, IAP, online, platform)
  webHideRemoved() {
    this.HGHFFNAJALJ();                         // social_vk / social_fb / social_twitter
    setActive(this.KLHBEPGKIKD, false);         // social_vk
    this.webMoreGames();                        // zd2_promo_button -> More Games
    setActive(this.BCDIGJJNKFP, false);         // rating_button (online leaderboard)
    setActive(this.EILOJNEBFLD, false);         // button_achievements_gpgs
    setActive(this.LGDFJPCENPE, false);         // special_offer_button (IAP)
    setActive(this.MCGCFCLNFON, false);         // buy_color_rewarded_button (ads)
    setActive(this.NFCHHLHPKHM, false);         // buy_item/rewarded_button (ads)
    setActive(this.KJOHFICNMKL, false);         // restore_purchases_button (IAP)
    setActive(this.EJHKBAIIMEH, false);         // resolution_button (no resolutions on web)
    setActive(this.NICPCMGAMHC, false);         // map update_button (store link)
    // [web] no accelerometer steering: hide the "Tilts" controls toggle (fullscreen takes its slot, as in the PC build)
    for (const o of this.gameObject.scene.objects) if (o.name === 'controls_button' && o.GetComponent('Button')) o.SetActive(false);
    const parentGo = (c) => (c && c.transform && c.transform.parent ? c.transform.parent.gameObject : null);
    setActive(parentGo(this.KBPGOADPCEF), false); // notifications_button
    setActive(parentGo(this.PIKMCOCLBLK), false); // google_play_button
    setActive(parentGo(this.EBHNDMKGDMF), false); // game_center_button
    // [web] no online profile: hide the top-panel player block (player_icon, player_icon_status, player_name_block)
    const nameBlock = parentGo(this.BCPIBADECAN && this.BCPIBADECAN.gameObject);
    const topPanel = nameBlock && nameBlock.transform.parent;
    setActive(nameBlock, false);
    if (topPanel && topPanel.Find) for (const n of ['player_icon', 'player_icon_status']) setActive(topPanel.Find(n), false);
    // [web] gold "+" (donate window gold tab is removed): gold_block/donate_button
    setActive(parentGo(arr(this.GCGAAMHEENO)[1]), false);
    // donate window: gold packs are IAP / rewarded-ad items ("no ADS" badges) -> gold tab and every gold item removed,
    // USD buy buttons hidden; content width + tab scroll positions are recomputed (webDonateMetrics)
    const tg = arr(this.ODJODAONEOG)[1]; setActive(tg, false);
    for (const it of arr(this.CPLLOEGKNHP)) {
      if (!it) continue;
      if (it.LNKBNEAEAJO === 1) { setActive(it.gameObject, false); continue; }
      if (it.KFMJHIOHBEE === 2 || it.LNKBNEAEAJO === 3) {
        const b = it.transform && it.transform.Find ? it.transform.Find('buy_button') : null;
        setActive(b, false);
      }
    }
    // GDPR terms link [removed: social]
    if (this.KPCJNNKNICI && this.KPCJNNKNICI.transform && this.KPCJNNKNICI.transform.Find) setActive(this.KPCJNNKNICI.transform.Find('terms_button'), false);
    // NOW.GG login [removed]
    if (this.MIADMDOHFDP && this.MIADMDOHFDP.transform && this.MIADMDOHFDP.transform.Find) setActive(this.MIADMDOHFDP.transform.Find('nowgg_login_button'), false);
  }

  Update() {
    if (activeSelf(this.EMFGDIEMNMI)) {
      // donate window: select the tab toggle matching the scroll position
      const content = this.MHJAEPDEPHE ? this.MHJAEPDEPHE.content : null;
      if (content) {
        const x = anchored(content).x;
        // [web] no gold section: silver until half way to the fuel section, then fuel
        const m = this.webDonateMetrics();
        if (x > m.fuelX / 2) { if (this.EMPMIBCIGPA !== 0) this.BCDFPFLJKPJ(0, false); }
        else if (this.EMPMIBCIGPA !== 2) this.BCDFPFLJKPJ(2, false);
      }
      const m = menu(); if (alive(m) && m.MEHOMCOOPFM) m.MEHOMCOOPFM();
    } else {
      let skipCheat = false;
      if (!activeSelf(this.CNBICALJOKA)) {
        if (!activeSelf(this.HBNCEIHGBOO)) {
          // rating window -> RatingController.JIGMJDHGBCJ()  [removed: online]
          skipCheat = true;
        } else {
          // ---- map window
          const p = prof();
          if (activeSelf(this.OJDABDMEHKF) && Time.time - this.BKPMKNLDPCK > 0.7 &&
            ((Input.anyKey && !Input.GetKeyDown('Escape')) || (Input.touchCount || 0) > 0)) {
            if (p) {
              p.MAGBBGBDPDJ(p.ADABKJOKCFG + 1);
              if (p.ADABKJOKCFG === 1) this.StartCoroutine(this.IHHAEHDPGIC());
              // Android API > 32 && story==2 -> NotificationsManager permission request  [removed: notifications]
            }
            GUIGarage.LOICFFJDFGG = Time.time;
            hideWin(this.OJDABDMEHKF, true);
          }
          if (Time.time - this.FGNDGHEOHOI > 0.5) {
            for (const l of levels()) if (l && isEvent(l)) l.FKJAANMGOMP();
            this.FGNDGHEOHOI = Time.time;
          }
          const sel = G.Main ? G.Main.NMDEEOMHAGP : null;
          if (sel) {
            if (sel.FOOFLNEEJFI) sel.FOOFLNEEJFI();
            // event level -> RatingEventController.JIGMJDHGBCJ()  [removed: online]
          }
          const lf = G.Level ? G.Level.last_finished : -1;
          if (lf > -1) {
            for (const l of levels()) {
              if (!l) continue;
              if (l.id === lf + 1 || (isEvent(l) && l.unlock_after_lvl_id === lf)) l.BBGODPBKHPF();
            }
          }
        }
      } else {
        // ---- garage window: blinking car arrows + upgrade icons
        if (this.JMKLCODKLKP) this.HHOKAGMFIHE(this.EJEFCJEKIEM);
        else if (this.NAODFOEKCOJ) this.HHOKAGMFIHE(this.EDCKCCHPNGF);
        this.DGGEFHKGJCD();
      }
      if (!skipCheat) this.KMDEAFLJMND();
    }
    // server loading bar / rate me window  [removed: online]
    const p = prof();
    if (p && p.LLEFEIHEJDE && p.LLEFEIHEJDE()) {
      if (this.CLIELOHAOHI && !this.CLIELOHAOHI.activeSelf && (Input.touchCount || 0) === 5) this.ButtonLogsShow();
    }
    if (0 < this.JJNDLKGGGMJ && this.DBENLFCCNNE && this.DBENLFCCNNE.activeSelf) {
      if (this.JJNDLKGGGMJ < 2) this.JJNDLKGGGMJ++;
      else { this.FHCEPLEAMGA(); this.JJNDLKGGGMJ = 0; }
    }
  }

  // ================================================================ top panel / currency
  // update silver & gold labels
  FJCMAMFOKNL() {
    const p = prof(); if (!p) return;
    if (this.BOOLBGPMGAD) setText(this.BOOLBGPMGAD.CIDKMFLFJEJ, p.LOCFCFJIAIH());
    if (this.GCLMMBKIJGD) setText(this.GCLMMBKIJGD.CIDKMFLFJEJ, p.HPDEBBJNCIK());
    this.NFJNJCLENFD();
  }
  // schedule top-panel buttons re-layout
  NFJNJCLENFD() { if (this.DBENLFCCNNE && this.DBENLFCCNNE.activeSelf) this.JJNDLKGGGMJ = 1; }
  // money changed: animate (old, new, isSilver)
  GMHOEBNFADN(LGFLDFKKJMG, OCLFIENGKFJ, AMIPFFMEHBP) {
    if (!(G.Menu && G.Menu.MDLMIEDLJMC)) return;
    const diff = OCLFIENGKFJ - LGFLDFKKJMG;
    if (diff === 0 || OCLFIENGKFJ < LGFLDFKKJMG) {
      let c = null;
      if (AMIPFFMEHBP) { if (diff !== 0) c = this.GLDCKDIFKBM; } else c = this.KEJGEBEGCKH;
      if (c && c.ICMOCEHIFOI) c.ICMOCEHIFOI(diff);
    } else {
      const c = AMIPFFMEHBP ? this.BOOLBGPMGAD : this.GCLMMBKIJGD;
      if (c && c.ICMOCEHIFOI) c.ICMOCEHIFOI();
    }
    this.FJCMAMFOKNL();
  }
  // re-layout the "+" donate buttons next to the silver/gold/fuel values
  FHCEPLEAMGA() {
    // [web] "24/24" is wider than the 145-unit fuel label (browser font metrics): shrink-to-fit like the
    // silver/gold labels and use their 70-unit height so the three values line up
    const fv = this.DINKFHPBEIN && this.DINKFHPBEIN.CIDKMFLFJEJ;
    if (fv && !fv._webFit) {
      fv._webFit = true; fv.bestFit = true; fv.minSize = 30; fv.maxSize = 58;
      const r = fv.gameObject.rect; if (r) { r.sizeDelta = [r.sizeDelta[0], 70]; }
      fv._render && fv._render(); uiDirty();
    }
    const ks = arr(this.GCGAAMHEENO);
    for (let i = 0; i < ks.length; i++) {
      const coins = i === 0 ? this.BOOLBGPMGAD : i === 2 ? this.DINKFHPBEIN : i === 1 ? this.GCLMMBKIJGD : null;
      const k = ks[i];
      if (!alive(k) || !coins || !coins.OONFFMIIIJN) continue;
      const kp = k.position, cp = coins.OONFFMIIIJN.position;
      k.position = new Vector3(cp.x + 4, kp.y, kp.z);
      const len = coins.CIDKMFLFJEJ ? String(coins.CIDKMFLFJEJ.text).length : 0;
      SetSizeWithCurrentAnchors(k, 0, coins.OONFFMIIIJN.sizeDelta.x + (len < 3 ? 130 : 105));
    }
  }
  // player nickname
  CDFFAINFEDD() {
    const p = prof(); if (!p) return;
    if (this.BCPIBADECAN) setText(this.BCPIBADECAN, p.DIKNHCJJBBC || '');
  }
  // country flag icon from the server  [removed: server] -> hidden
  EOGBHKMFBGE() { setActive(this.FEANMPPFEHB, false); }
  // reset hp panel
  HMJFKIDHNDE() {
    if (this.HAAFPOENHKN) { const a = anchored(this.HAAFPOENHKN); setAnchored(this.HAAFPOENHKN, 0, a.y); }
    setActive(this.CIDLDJLEIAN, false);
  }
  // story progress >= 3 -> show fuel block
  OCLHKDAFKLI() {
    const p = prof();
    const b = p ? p.ADABKJOKCFG > 2 : false;
    const m = menu(); if (m && m.ALPCPBBNEBA) setActive(m.ALPCPBBNEBA.JGPMKBGLFGG, b);
  }

  // ================================================================ windows
  ButtonMainMenu() { showWin(this.AEBAFCEJDPO, false); }
  ButtonCloseWindow() { const m = menu(); if (alive(m) && m.AFPLNBDNJHM) m.AFPLNBDNJHM(); }
  ButtonSettings() {
    // social sync hint: Google Play / Game Center only
    if (WEB_SN === 1) { setText(this.PJEFIEPMGIF, tr('SYNC_HINT_GOOGLE_PLAY')); setActive(this.PJEFIEPMGIF, true); }
    else if (WEB_SN === 2) { setText(this.PJEFIEPMGIF, tr('SYNC_HINT_GAME_CENTER')); setActive(this.PJEFIEPMGIF, true); }
    else setActive(this.PJEFIEPMGIF, false);
    if (isConsole()) this.ANCCFOEBAGI();
    this.webSettingsRefresh();
    showWin(this.HNGMMGHABAF, false);
    this.webSettingsLayout();
  }
  // [web] settings window: only sound + music toggles, plus the version / copyright label
  webSettingsLayout() {
    const win = this.HNGMMGHABAF && this.HNGMMGHABAF.gameObject; if (!alive(win)) return;
    const child = (n) => { const t = win.transform._children.find((c) => c.gameObject.name === n); return t ? t.gameObject : null; };
    for (const n of ['info_button', 'lang_button', 'gfx_button', 'fps_button', 'fullscreen_button', 'controls_button']) setActive(child(n), false);
    const place = (go, x, y) => { if (alive(go) && go.rect) go.rect.anchoredPosition = [x, y]; };
    if (win.rect) win.rect.sizeDelta = [win.rect.sizeDelta[0], 640];
    place(child('sound_button'), -115, 110);
    place(child('music_button'), 115, 110);
    const label = this.PJEFIEPMGIF; // social_hint text (unused on web)
    if (alive(label) && label.gameObject.rect) {
      const r = label.gameObject.rect;
      r.anchorMin = [0.5, 0.5]; r.anchorMax = [0.5, 0.5]; r.pivot = [0.5, 0.5];
      r.anchoredPosition = [0, -140]; r.sizeDelta = [1500, 320];
      label.alignment = 4; // middle center
      label.fontSize = 72;
      label.text = `${APP_VERSION}\n${NOTICE}`;   // version + copyright (src/config.mjs, locked by src/notice.js)
      setActive(label, true);
      if (!noticeOk(NOTICE)) halt();
    }
    uiDirty();
  }
  // [web] refresh the settings icons (on Android the button sprites are kept up to date by the toggles)
  webSettingsRefresh() {
    this.LLAEHJGOFLG(); this.DHHCOENABGM(); this.IMJEJKHBIMO(); this.ODHAOMJKKAE(); this.KNHFEOEMGNL();
  }
  // full settings refresh (console path)
  ANCCFOEBAGI() {
    this.LLAEHJGOFLG(); this.DHHCOENABGM(); this.MIAENKOOLAI(); this.IMJEJKHBIMO();
    this.ODHAOMJKKAE(); this.KNHFEOEMGNL(); this.MLEEOPKCMBP(); this.MGBNHDCJAMK();
    setActive(this.KJOHFICNMKL, false);
    const pn = this.KBPGOADPCEF && this.KBPGOADPCEF.transform.parent;
    setActive(pn, false); // notifications not supported  [removed: notifications]
    // setActive(this.OOCJCAGILIM, false);  [web] fullscreen button kept: toggles browser fullscreen
    setActive(this.EJHKBAIIMEH, false);
  }
  ButtonCredits() { this.NFPFKDAHPNE(); showWin(this.KACKJBMEKAM, false); }
  // version label
  NFPFKDAHPNE() {
    const v = Application.version || '';
    setText(this.GAGBCIIJONL, tr('VERSION') + ' ' + v);
  }
  ButtonEncyclopedia() {
    showWin(this.IMNFHIEGOAK, false);
    // AnalyticsController "EncyclopediaOpen"  [removed: analytics]
  }
  ButtonAchievements() {
    this.EGEFDJDCKDJ();
    showWin(this.INAJOCMMLCH, false);
    setActive(this.EILOJNEBFLD, WEB_SN === 1);
  }
  ButtonAchievementsGPGS() { /* Social.ShowAchievementsUI / GPGS login  [removed: GPGS] */ }
  ButtonHpInfo() { this.MIFJGEDDEML(); }
  // hp info: "<sec> s = 1 HP"
  MIFJGEDDEML() {
    const sec = G.CarController ? G.CarController.IMEIEFHABHH : 0;
    setText(this.KHLAEOFAKML, String(sec) + ' ' + tr('SECOND') + ' = 1 ' + tr('HP'));
    showWin(this.BJJAAMMGMMK, true);
  }
  // low HP window: repair price
  DOODAKOKCBN(IGMIJBAAHLA, ABAIGEJPJIE) {
    if (!activeSelf(this.EOMEKIJKEHM)) return;
    const p = prof(); if (!p || !p.DKJLCJPBPPN(-1, true)) return;
    let price = roundEven((ABAIGEJPJIE - IGMIJBAAHLA) / 90);
    if (price < 2) price = 1;
    this.DKEAJKJNACK = price;
    setText(this.PKGIEEDLLJK, price);
    if (IGMIJBAAHLA < ABAIGEJPJIE) return;
    this.ButtonCloseWindow();
  }
  // show the low HP window
  PCLHPNHIHMO() {
    if (!this.EOMEKIJKEHM) return;
    showWin(this.EOMEKIJKEHM, true);
    if (G.Main && G.Main.LHBBBLINMIE) return;
    for (const ch of this.EOMEKIJKEHM.transform) {
      if (ch.gameObject.name === 'repair_button') ch.gameObject.SetActive(false);
      else if (ch.gameObject.name === 'race_button') { const a = anchored(ch); setAnchored(ch, 0, a.y); }
    }
  }
  ButtonRepairCar() {
    const p = prof(); if (!p) return;
    const gold = p.HPDEBBJNCIK();
    if (gold < this.DKEAJKJNACK) { this.AFHIOFKDNLD(1, this.DKEAJKJNACK - gold); return; }
    if (!p.DKJLCJPBPPN(-1, true)) return;
    p.DKJLCJPBPPN(-1, true).DDPLLMLFICC(-1);
    p.DIMKKHJDHFJ(p.HPDEBBJNCIK() - this.DKEAJKJNACK);
    const m = menu();
    if (m) { m.OLLGOBJFFDI = true; m.OLOGKIHIIEL(); }
    sound(G.SoundScript ? G.SoundScript.CIMAPDEBGGG : null);
  }
  ButtonStartRaceGo() { const m = menu(); if (alive(m) && m.LBKMBBLLINK) this.StartCoroutine(m.LBKMBBLLINK(false)); }
  ButtonStartRaceGoWithLowHP() { const m = menu(); if (alive(m) && m.LBKMBBLLINK) this.StartCoroutine(m.LBKMBBLLINK(true)); }
  ButtonExit() {
    // Application.Quit() (+ stop music) -> nothing to quit on web: just close the exit window
    this.ButtonCloseWindow();
  }
  // "not enough money" popup (currency, missing amount)
  AFHIOFKDNLD(KFMJHIOHBEE, EGDACNEEGEK) {
    setActive(this.CJCNNNGMHEL, true);
    setActive(this.KNJDCCCEPNC, false);
    showWin(this.HBGNOHGKEMO, true);
    setText(this.LNOCLCBEIAB, String(EGDACNEEGEK) + ' ');
    setText(this.KFGPLPMLNNM, tr('NO_MONEY_1'));
    if (KFMJHIOHBEE === 0) { setSprite(this.OEANCNFCMFE, this.PILGKKBHOKH); this.EMPMIBCIGPA = 0; }
    else { setSprite(this.OEANCNFCMFE, this.JFAFPOPHHGD); this.EMPMIBCIGPA = 1; }
    setText(this.JEEFEKPCHAL, tr('NO_MONEY_2'));
    // [web] no store (IAP removed): drop "Go to the store?" and the OK tick, keep only the red X, centred
    setActive(this.JEEFEKPCHAL, false);
    const row = this.CJCNNNGMHEL && (this.CJCNNNGMHEL.transform || this.CJCNNNGMHEL);
    const btn = (n) => { const t = row && row._children ? row._children.find((c) => c.gameObject.name === n) : null; return t ? t.gameObject : null; };
    setActive(btn('ok_button'), false);
    const close = btn('close_button');
    if (alive(close) && close.rect) { close.rect.anchorMin = [0.5, 0]; close.rect.anchorMax = [0.5, 0]; close.rect.anchoredPosition = [0, 40]; uiDirty(); }
  }

  // ================================================================ garage: cars / upgrades / colors
  ButtonCarNext() { const m = menu(); if (alive(m) && m.BMIIEMFFFEO) m.BMIIEMFFFEO(); }
  ButtonCarPrev() { const m = menu(); if (alive(m) && m.LJDEGMJCOIG) m.LJDEGMJCOIG(); }
  ButtonBuyCar() {
    const p = prof(); if (!p) return;
    if (p.DKJLCJPBPPN(-1, true)) return; // already owned
    const car = curCar(); if (!car) return;
    const silver = p.LOCFCFJIAIH();
    if (silver < car.price) { this.AFHIOFKDNLD(0, car.price - silver); return; }
    sound(G.SoundScript ? G.SoundScript.CIMAPDEBGGG : null);
    p.JLEEMPONONF(p.LOCFCFJIAIH() - car.price);
    p.NODNJNKEFKM(true, -1);
    const m = menu(); if (m) m.OLOGKIHIIEL();
  }
  ButtonSwitchUpgradesOrColors() {
    const on = activeSelf(this.HIKLLDFIJNJ);
    this.GOKBDNDJPBA(!on, true, false);
  }
  // show upgrades (true) or colors (false) group; animate; tutorial flag
  GOKBDNDJPBA(MHJLKCIBEPG, DLCMLDLHLLC, GBCADCAJDEN) {
    setActive(this.HIKLLDFIJNJ, MHJLKCIBEPG);
    setActive(this.DCDCELBOOJK, !MHJLKCIBEPG);
    if (0 < GUIGarage.MNNPLDKPNBA && this.FAEGPLJFMLG) SetSizeWithCurrentAnchors(this.FAEGPLJFMLG, 1, 200);
    if (MHJLKCIBEPG && this.NLGDGEAKJCC && this.NLGDGEAKJCC.activeInHierarchy && curWindow() === this.CNBICALJOKA) {
      const m = menu(); if (m) m.OLOGKIHIIEL();
    }
    if (!this.CLKMIHHBLGC) return;
    const y = GUIGarage.MNNPLDKPNBA;
    const target = MHJLKCIBEPG ? this.HIKLLDFIJNJ : this.DCDCELBOOJK;
    if (DLCMLDLHLLC) this.StartCoroutine(this.OFMEDMJLPNE(target, new Vector2(0, -300), new Vector2(0, y), 3, GBCADCAJDEN));
    else setAnchored(target, 0, y);
    setSprite(this.CLKMIHHBLGC, MHJLKCIBEPG ? this.CEPBDIGBMLD : this.PHJDHGDAELD);
  }
  // slide the upgrades panel in (true) / out (false)
  PHKCLDLDABM(MDIDBDKGGJI) {
    const panel = this.FAEGPLJFMLG;
    if (this.OKIBLCCCPJH) {
      this.OKIBLCCCPJH = false;
      if (!panel) return;
      setAnchored(panel, 0, MDIDBDKGGJI ? 0 : -300);
      setActive(panel, MDIDBDKGGJI);
      return;
    }
    if (!panel) return;
    const y = anchored(panel).y;
    if (MDIDBDKGGJI ? y === 0 : y === -300) return;
    if (this.JNFJMJBMEJK) this.StopCoroutine(this.JNFJMJBMEJK);
    this.JNFJMJBMEJK = this.StartCoroutine(this.OFMEDMJLPNE(panel, anchored(panel), new Vector2(0, MDIDBDKGGJI ? 0 : -300), 3, false));
  }
  // set all garage buttons interactable
  EEOMMEJNEOF(FJDCALHGHCI) {
    if (!this.CNBICALJOKA) return;
    for (const b of this.CNBICALJOKA.GetComponentsInChildren(Button, true)) b.interactable = !!FJDCALHGHCI;
  }
  // reset car arrows color
  OHFNNEHCIEH() {
    this.JMKLCODKLKP = false;
    if (alive(this.EJEFCJEKIEM) && alive(this.EDCKCCHPNGF)) {
      this.EDCKCCHPNGF.color = this.OKHBJKAEOKD;
      this.EJEFCJEKIEM.color = this.OKHBJKAEOKD;
    }
  }
  // blink an Image between OKHBJKAEOKD and HEKGOIIFANL
  HHOKAGMFIHE(NCIMDMCDMIK) {
    if (!NCIMDMCDMIK || !this.OKHBJKAEOKD || !this.HEKGOIIFANL) return;
    let t = Time.realtimeSinceStartup - (G.Main ? G.Main.LNHNCBOIGOF || 0 : 0);
    t = t - 2 * Math.trunc(t * 0.5);
    let v = Math.min(t, 2) - 1; if (t < 0) v = -1;
    const w = Math.max(0, 1 - Math.abs(v));
    NCIMDMCDMIK.color = lerpColor(this.OKHBJKAEOKD, this.HEKGOIIFANL, w);
  }
  // blink the highlighted upgrade items
  DGGEFHKGJCD() {
    for (const it of arr(this.OFEKNLMPBPH)) {
      if (!it || !it.OJHMOHAHKDB) continue;
      let t = Time.realtimeSinceStartup - (G.Main ? G.Main.LNHNCBOIGOF || 0 : 0);
      t = t - 2 * Math.trunc(t * 0.5);
      let v = Math.min(t, 2) - 1; if (t < 0) v = -1;
      const w = Math.min(1, Math.max(0, 1 - Math.abs(v)));
      const c = this.KCKKNJPMLHE;
      if (it.HEGBLDJJONJ) it.HEGBLDJJONJ.color = new Color((c.r - 1) * w + 1, (c.g - 1) * w + 1, (c.b - 1) * w + 1, (c.a - 1) * w + 1);
    }
  }
  // open the "buy upgrade" window for a ShopItem
  ButtonBuyUpgrade(item) {
    const p = prof(); if (!p || !item) return;
    if (!p.DKJLCJPBPPN(-1, true)) return;
    this.FFPMBLIFMHF = item;
    if (Input.GetKey('ShiftLeft')) { this.ButtonBuyUpgradeConfirm(false); return; } // dev shortcut
    const rt = this.KAMLPJJDEGP ? this.KAMLPJJDEGP.transform : null;
    let lvl = item.HJICMDCENKN(-1);
    const max = item.EKBFKEBGGOP();
    if (lvl === max) {
      setText(this.AGJBJDANKNA, tr('BOUGHT'));
      setActive(this.NLHBMIGPANC, false);
      lvl -= 1;
      setActive(this.NFCHHLHPKHM, false);
      if (rt) SetSizeWithCurrentAnchors(rt, 1, 335);
    } else {
      setText(this.AGJBJDANKNA, tr('BUY'));
      setActive(this.NLHBMIGPANC, true);
      const rewarded = false; // Menu.LDBOEHFLNFA(item): rewarded free upgrade available  [removed: ads]
      setActive(this.NFCHHLHPKHM, rewarded);
      if (this.NLHBMIGPANC) { const a = anchored(this.NLHBMIGPANC); setAnchored(this.NLHBMIGPANC, rewarded ? -260 : 0, a.y); }
      if (rt) SetSizeWithCurrentAnchors(rt, 1, 410);
    }
    if (item.HEGBLDJJONJ && this.PJIFPNKDLCB) {
      this.PJIFPNKDLCB.sprite = item.HEGBLDJJONJ.sprite;
      if (this.PJIFPNKDLCB.SetNativeSize) this.PJIFPNKDLCB.SetNativeSize();
      setText(this.DGEDCIAGNAA, tr(item.KGDFADICFPE) + ' ' + (lvl + 1) + ' ' + tr('LVL'));
      setText(this.GKOPBEECLPA, tr(item.KGDFADICFPE + '_DESC'));
      const gold = item.MLHKDEGPJGI(item.HJICMDCENKN(-1));
      const m = menu(); const gg = m && m.ALPCPBBNEBA ? m.ALPCPBBNEBA : this;
      setSprite(this.MLLELOLGNHK, gold ? gg.HKCMPHEMEAA : gg.ENNCCLHLGNM);
      setText(this.NIBMDHKACGO, item.OKADMIPJHCA(item.HJICMDCENKN(-1)));
      showWin(this.KAMLPJJDEGP, true);
    }
  }
  // buy the selected upgrade / color (is_free = granted by a reward)
  ButtonBuyUpgradeConfirm(is_free) {
    is_free = !!is_free;
    const p = prof(); if (!p) return;
    if (!p.DKJLCJPBPPN(-1, true)) return;
    const item = this.FFPMBLIFMHF; if (!alive(item)) return;
    // dev cheat: hold Delete to downgrade
    if (Input.GetKey('Delete') && item.HJICMDCENKN(-1) > 0) {
      const car = p.DKJLCJPBPPN(-1, true);
      if (!item.ELHBFIHEDOL) car.ACDFKIBBJGP(item.FHOFNGHGNGF); else car.CFMKDKAGFMA(item.EIGKFINFICB);
      const m = menu(); if (m) m.OLOGKIHIIEL();
      return;
    }
    if (item.EKBFKEBGGOP() <= item.HJICMDCENKN(-1)) return;
    const price = item.OKADMIPJHCA(item.HJICMDCENKN(-1));
    const isGold = item.MLHKDEGPJGI(item.HJICMDCENKN(-1));
    if (!isGold) {
      const silver = p.LOCFCFJIAIH();
      if (silver < price && !is_free) { this.AFHIOFKDNLD(0, price - p.LOCFCFJIAIH()); return; }
      const m = menu();
      if (m && m.GPGANGNBJLL === item && G.Main && G.Main.LCFFGBBHMPH === p.JOOCICMEJAC) m.OOFKKAKFKEL(is_free);
      if (!is_free) p.JLEEMPONONF(p.LOCFCFJIAIH() - price);
    } else {
      const gold = p.HPDEBBJNCIK();
      if (gold < price && !is_free) { this.AFHIOFKDNLD(1, price - p.HPDEBBJNCIK()); return; }
      if (!is_free) {
        let cat, name;
        if (!item.ELHBFIHEDOL) {
          cat = Object.keys(E.MGACAOGOMPM).find((k) => E.MGACAOGOMPM[k] === item.FHOFNGHGNGF) || String(item.FHOFNGHGNGF);
          name = cat + (item.HJICMDCENKN(-1) + 1);
        } else { cat = 'color'; name = 'color' + item.EIGKFINFICB; }
        p.JMNEPHGKIPE(price, cat, name); // spend gold
      }
    }
    sound(G.SoundScript ? G.SoundScript.CIMAPDEBGGG : null);
    if (!item.ELHBFIHEDOL) {
      const car = p.DKJLCJPBPPN(-1, true);
      const type = item.FHOFNGHGNGF;
      if ((G.Main ? G.Main.LCFFGBBHMPH : 0) === 0) {
        car.CMFJICHIMAH(type, item.EKBFKEBGGOP());
        if (item.FHOFNGHGNGF === 3) { const m = menu(); if (m) m.LADJPNBMCBN = true; }
      } else car.IFGGBDCPJDF(type);
      const m = menu(); if (m && m.INMDNKGHGEO) m.INMDNKGHGEO();
      this.StartCoroutine(this.APCBBBDNHKG(item));
    } else {
      p.DKJLCJPBPPN(-1, true).LPHCCLPECIA(item.EIGKFINFICB);
      this.ButtonColorPreview(item);
    }
    if (!item.ELHBFIHEDOL && item.HJICMDCENKN(-1) === item.EKBFKEBGGOP()) this.KFELMMODBGC();
    if (activeSelf(this.KAMLPJJDEGP)) {
      // AdvController.JJDJIEJLCFM() (hide banner)  [removed: ads]
      hideWin(this.KAMLPJJDEGP, true);
    }
  }
  ButtonBuyUpgradeReward() { /* AdvController.FCHOPNGPCPN(2) rewarded free upgrade  [removed: ads] (button hidden) */ }
  ButtonBuyColorReward() { /* AdvController.FCHOPNGPCPN(4) rewarded free color  [removed: ads] (button hidden) */ }
  // preview a paint color (ShopItem with ELHBFIHEDOL)
  ButtonColorPreview(item) {
    const p = prof(); if (!p || !p.DKJLCJPBPPN(-1, true)) return;
    if (!item || !item.ELHBFIHEDOL) return;
    const cc = carCtl(); if (!alive(cc)) return;
    cc.GFAPIMNKMLG(item.EIGKFINFICB);
    sound(G.SoundScript ? G.SoundScript.HLNBFKLNLGF : null);
    const id = item.EIGKFINFICB;
    const owned = id === 0 || (id >= 1 && item.HJICMDCENKN(-1) >= 1);
    if (!owned) {
      this.FFPMBLIFMHF = item;
      setActive(this.ADCFEPAEDOC, false);
      setActive(this.JEAAGGCBOJJ, false);
      setActive(this.AIDOHDMINEH, false);
      setActive(this.NLGDGEAKJCC, true);
      const rewarded = false; // Menu.POLNAJBPECM(id): rewarded color available  [removed: ads]
      setActive(this.MCGCFCLNFON, rewarded);
      const rt = this.NLGDGEAKJCC ? this.NLGDGEAKJCC.transform : null;
      if (rt) {
        const a = anchored(rt);
        setAnchored(rt, rewarded ? -220 : 0, a.y);
        SetSizeWithCurrentAnchors(rt, 0, rewarded ? 250 : 400);
      }
      setActive(this.FPDPLAOHJAM, true);
      setText(this.MAJEPAAFIJD, item.OKADMIPJHCA(item.HJICMDCENKN(-1)));
    } else {
      setActive(this.FPDPLAOHJAM, false);
      p.DKJLCJPBPPN(-1, true).EJLALLODBKM(id);
      const m = menu(); if (m && m.INMDNKGHGEO) m.INMDNKGHGEO();
    }
    const m = menu(); if (m && m.CDFHCNMGCFI) m.CDFHCNMGCFI();
  }
  // grade the paint ShopItems prices (x18) — unused helper of the original
  NFDIHKCAIKE() {
    setSprite(this.HONOIJNCNNE, this.PILGKKBHOKH);
    for (const it of arr(this.OFEKNLMPBPH)) {
      if (!it || !it.ELHBFIHEDOL) continue;
      const pr = it.BDHDNGGBOFK;
      if (Array.isArray(pr) && pr.length === 1 && pr[0] > 0) { pr[0] *= 18; it.KGOOJPBMMBK(); }
    }
  }
  ButtonEasterEgg1() {
    const cc = carCtl(); if (!alive(cc)) return;
    if (!activeSelf(this.CNBICALJOKA)) return;
    if (!cc.MFEELNHEKHF && ++this.EMBCBNMEIAI === 10) { cc.AEFMMNHIGLH(); this.EMBCBNMEIAI = 0; }
  }

  // ================================================================ achievements
  // number of completed achievements (reached or claimed)
  BGHFPDCINFC() {
    const p = prof(); let n = 0;
    for (const a of achievements()) {
      if (!a) continue;
      a.PPHJGAMIKLM();
      if (p && (p.HIFFBAOPBGD(a.id) || p.OFOJMCJAGFD(a.id))) n++;
    }
    return n;
  }
  // achievements window header (progress text + bar)
  EGEFDJDCKDJ() {
    const done = this.BGHFPDCINFC();
    const total = achievements().length;
    setText(this.CIHPAJBCADG, done < 1 ? done + '/' + total : '<color=#78e938>' + done + '</color>/' + total);
    if (this.FCOEJMNAHPG && total) SetSizeWithCurrentAnchors(this.FCOEJMNAHPG, 0, (done / total) * 302);
    this.MAKGMMFFGPG();
    // BridgePHP.SyncAchievements()  [removed: server]
  }
  // "rewards to claim" badges
  MAKGMMFFGPG() {
    const p = prof(); let n = 0;
    for (const a of achievements()) if (a && p && p.HIFFBAOPBGD(a.id)) n++;
    if (0 < n) for (const t of arr(this.EKGDHPBABME)) setText(t, n);
    for (const g of arr(this.NECGDEDIKDD)) setActive(g, 0 < n);
  }
  // after an upgrade reached its max level: UPGRADE_ANY_CAR achievement
  KFELMMODBGC() {
    const p = prof();
    for (const a of achievements()) {
      if (!a || a.id !== 7) continue;
      a.PPHJGAMIKLM();
      if (p && p.HIFFBAOPBGD(a.id)) this.MAKGMMFFGPG();
    }
  }

  // ================================================================ map / levels
  ButtonMap() {
    const p = prof(); if (!p) return;
    if (!p.PJDAAMCNMHJ(0)) return;
    const m = menu();
    if (alive(m) && m.HMCFLJKHPAI && m.HMCFLJKHPAI()) {
      // tutorial: start the tutorial level directly with the tutorial car
      const mi = mainI(); if (!mi) return;
      G.Main.LCFFGBBHMPH = 12;
      G.Main.NMDEEOMHAGP = mi.HOAGFBCFGKN;
      this.StartCoroutine(m.LBKMBBLLINK(false));
      return;
    }
    if (activeSelf(this.KHGDDKNPJEP)) setActive(this.KHGDDKNPJEP, false);
    showWin(this.HBNCEIHGBOO, false);
  }
  ButtonPlay() {
    const m = menu();
    if (alive(m) && m.CLJDAMIIAKE && m.CLJDAMIIAKE() && !m.LADJPNBMCBN) {
      if (G.Main) G.Main.LCFFGBBHMPH = 0;
      this.PIHABGKNPDI(GDKKPEEJJAO.Hide);
      this.StartCoroutine(m.LBKMBBLLINK(false));
      return;
    }
    this.OKIBLCCCPJH = true;
    showWin(this.CNBICALJOKA, false);
  }
  ButtonMapLevelSelect(lvl) {
    if (!lvl) return;
    const level = G.Level ? G.Level.FHMGLDDPEDJ(lvl.HKGEOJPHLAN) : null;
    if (!level) return;
    if (G.Main && G.Main.NMDEEOMHAGP !== level) this.PIHABGKNPDI(GDKKPEEJJAO.Show);
    level.BIBHMOPJLCO();
  }
  ButtonMapHidePanel(is_anim) {
    if (is_anim) this.PIHABGKNPDI(GDKKPEEJJAO.Hide);
    else if (this.NDFMIKKMKLM) {
      const a = anchored(this.NDFMIKKMKLM); setAnchored(this.NDFMIKKMKLM, this.IECPAMOAJNN, a.y);
      setActive(this.NDFMIKKMKLM, false);
    }
    if (this.PANNIHBLFGK && this.PANNIHBLFGK.activeSelf) { this.PANNIHBLFGK.SetActive(false); this.ADMNOIMMGGA(false); }
    if (G.Main && G.Main.NMDEEOMHAGP) {
      G.Main.NMDEEOMHAGP = null;
      this.AGFKGLDJDLE();
    }
    this.HBMBJIDJGCB = false;
  }
  // refresh the map (levels state, selected level panel)
  AGFKGLDJDLE() {
    for (const l of levels()) {
      if (G.Main && l === G.Main.NMDEEOMHAGP) this.PGEEGDGGHLL(l, true);
      if (!l) continue;
      if (isEvent(l)) l.FKJAANMGOMP();
      l.HMPEMADOAAL();
    }
    // BridgePHP.RefreshUserProfileAndEvents()  [removed: server]
  }
  // level panel content for a level (best time, points, tasks, header color)
  PGEEGDGGHLL(ACLJCGMKGNP, MBHJAOIDNMK) {
    if (!ACLJCGMKGNP) return;
    const p = prof();
    if (p && p.PJDAAMCNMHJ(-1) && !isEvent(ACLJCGMKGNP)) {
      const lp = p.PJDAAMCNMHJ(-1);
      const best = lp.DLEPICFCEEG();
      setText(this.GJHKACJELLM, p.PJDAAMCNMHJ(-1).NIDLADCDMOH());
      let s = '---';
      if (best !== 0) {
        const f = best / 100;
        const sec = (f % 60).toFixed(2); // "{0}:{1:00.00}"
        s = Math.trunc(Math.trunc(f) / 60) + ':' + sec.padStart(5, '0');
      }
      setText(this.KPNIHPCCLPJ, s);
    }
    const col = isEvent(ACLJCGMKGNP) ? 0xffc22095 : 0xff101010;
    setColor(this.NELBIAEBLHN, (col & 0xff) / 255, ((col >>> 8) & 0xff) / 255, ((col >>> 16) & 0xff) / 255, 1);
    setText(this.HDBCADCDLEO, ACLJCGMKGNP.DBEGLMBGKNL());
    this.HAGKNGONJFM(ACLJCGMKGNP, MBHJAOIDNMK);
    // event level -> RatingEventController.MLPOBPBMBHG()  [removed: online]
    if (!this.HBMBJIDJGCB && this.NDFMIKKMKLM && this.GNIEPJFKLBH + 20 < anchored(this.NDFMIKKMKLM).x) this.PIHABGKNPDI(GDKKPEEJJAO.Show);
  }
  // level panel: event / default content
  HAGKNGONJFM(ACLJCGMKGNP, MBHJAOIDNMK) {
    if (!ACLJCGMKGNP) return;
    const ec = isEvent(ACLJCGMKGNP) ? ACLJCGMKGNP.event_contest : null;
    const needUpdate = false; // BridgePHP.is_need_update_game
    const started = !!(ec && ec.status === 1);
    // (MBHJAOIDNMK && started) -> RatingEventController.OJBAJGILIJN(level)  [removed: online]
    const rating = started && !needUpdate;
    setActive(this.HLBJENKIAMO, !isEvent(ACLJCGMKGNP));
    setActive(this.ILNKNCEHNMH, isEvent(ACLJCGMKGNP));
    setActive(this.PANNIHBLFGK, rating);
    setActive(this.NICPCMGAMHC, isEvent(ACLJCGMKGNP) ? needUpdate : false);
    setActive(this.IMDMNNHICGB, isEvent(ACLJCGMKGNP));
    this.ADMNOIMMGGA(rating);
    if (!isEvent(ACLJCGMKGNP)) {
      setActive(this.LDOGIFLACKA, false);
    } else if (ec) {
      setText(this.MMGIEEPAEBH, ec.desc);
      setActive(this.JGPMKBGLFGG, !!(G.Main && G.Main.LHBBBLINMIE));
      const carId = ec.car_id;
      const cl = cars();
      if (carId < 0 || carId >= cl.length) setText(this.ELJOIIPPCOM, tr('EVENT_ANY_CAR'));
      else setText(this.ELJOIIPPCOM, cl[carId] ? cl[carId].name : '');
      setText(this.FIKDJBCPHEK, tr(ec.status === 1 ? 'EVENT_TIME_END_IN' : 'EVENT_TIME_START_IN'));
      const rt = this.FIKDJBCPHEK ? this.FIKDJBCPHEK.transform : null;
      if (rt) {
        SetSizeWithCurrentAnchors(rt, 0, ec.status === 1 ? 390 : 930);
        const a = anchored(rt); setAnchored(rt, a.x, ec.status === 1 ? 89 : 75);
      }
      // BridgePHP.GetErrors(true) -> error label  [removed: server] (no errors)
      setActive(this.LDOGIFLACKA, false);
      setActive(this.IMDMNNHICGB, true);
    } else {
      setActive(this.LDOGIFLACKA, false);
      setActive(this.IMDMNNHICGB, false);
    }
    this.KBINLNMDLEC();
  }
  // map start button visibility for the selected (event) level
  KBINLNMDLEC() {
    if (!this.ONMEPHBPCPB) return;
    const btn = this.ONMEPHBPCPB.gameObject;
    const sel = G.Main ? G.Main.NMDEEOMHAGP : null;
    let show;
    if (!sel) show = false;
    else if (!isEvent(sel)) show = true;
    else {
      const ec = sel.event_contest;
      if (ec && ec.status === 1) show = ec.TimeLeft >= 0 ? !!ec.replays : false;
      else show = false;
    }
    btn.SetActive(show);
  }
  // rating panel button offset
  ADMNOIMMGGA(FANNHKPHPHC) {
    if (!this.CIMJLLEAMME) return;
    const a = anchored(this.CIMJLLEAMME);
    setAnchored(this.CIMJLLEAMME, FANNHKPHPHC ? -695 : 3, a.y);
  }
  // show / hide the level panel (animated)
  PIHABGKNPDI(FHOFNGHGNGF) {
    if (this.ANFGNAMMLGO) this.StopCoroutine(this.ANFGNAMMLGO);
    this.ANFGNAMMLGO = this.StartCoroutine(this.ILOEHAPOFHA(FHOFNGHGNGF));
  }
  // coroutine DJJFFDPEJKB: slide the map level panel
  *ILOEHAPOFHA(type) {
    this.HBMBJIDJGCB = true;
    let t = 0;
    setActive(this.NDFMIKKMKLM, true);
    if (type === GDKKPEEJJAO.Hide) this.NJHAGLAALCJ(false);
    const pos = anchored(this.NDFMIKKMKLM);
    const initX = type === GDKKPEEJJAO.Show ? this.GNIEPJFKLBH : this.IECPAMOAJNN;
    setAnchored(this.NDFMIKKMKLM, initX, pos.y);
    for (;;) {
      if (1 <= t) {
        if (type === GDKKPEEJJAO.Hide) setActive(this.NDFMIKKMKLM, false);
        if (type === GDKKPEEJJAO.Show) this.NJHAGLAALCJ(true);
        this.HBMBJIDJGCB = false;
        if (type === GDKKPEEJJAO.Hide) this.BECFMMKIPHJ();
        return;
      }
      const from = type === GDKKPEEJJAO.Show ? this.IECPAMOAJNN : this.GNIEPJFKLBH;
      setAnchored(this.NDFMIKKMKLM, ease(from, initX, t), pos.y);
      yield null;
      t += Time.deltaTime * 2.8;
    }
  }
  // first level tutorial: start button highlighted on the map
  NJHAGLAALCJ(MDIDBDKGGJI) {
    if (!this.DCFAACLJPKH()) return;
    if (!MDIDBDKGGJI) {
      if (this.ONMEPHBPCPB) uiSetParent(this.ONMEPHBPCPB.transform, this.NDFMIKKMKLM);
      setActive(this.FNPBFIGLJMM, false);
      setActive(this.KHGDDKNPJEP, false);
      return;
    }
    const sel = G.Main ? G.Main.NMDEEOMHAGP : null;
    if (!sel || !sel.IsTutorial) return;
    if (this.ONMEPHBPCPB && this.HBNCEIHGBOO) uiSetParent(this.ONMEPHBPCPB.transform, this.HBNCEIHGBOO.transform);
    setActive(this.FNPBFIGLJMM, true);
    if (this.PILHKCFDJIH) this.StopCoroutine(this.PILHKCFDJIH);
    this.PILHKCFDJIH = this.StartCoroutine(this.KEPPKPEAEOO());
  }
  // first level not played yet
  DCFAACLJPKH() {
    let lp = this.OIACPHOMODK;
    if (!lp) {
      const p = prof(); if (!p) return false;
      lp = this.OIACPHOMODK = p.PJDAAMCNMHJ(0);
      if (!lp) return false;
    }
    return !lp.ALIHDAANEPI;
  }
  // map tutorial: highlight the first level after the story
  BECFMMKIPHJ() {
    if (!this.DCFAACLJPKH() || !arr(this.AMBAJOCCFJE).length) return;
    if (!this.EGFPPEFNCKK || !this.EGFPPEFNCKK.activeSelf) return;
    if (activeSelf(this.KHGDDKNPJEP)) return;
    if (this.HBMBJIDJGCB) return;
    const p = prof(); if (!p || p.ADABKJOKCFG === 0) return;
    const map = this.HBNCEIHGBOO ? this.HBNCEIHGBOO.transform : null; if (!map) return;
    uiSetParent(this.DBENLFCCNNE.transform, map);
    if (this.KHGDDKNPJEP) { uiSetParent(this.KHGDDKNPJEP.transform, map); uiLastSibling(this.KHGDDKNPJEP.transform); }
    const l0 = this.AMBAJOCCFJE[0];
    if (l0) { uiSetParent(l0.transform, map); uiLastSibling(l0.transform); }
    uiSetParent(this.EGFPPEFNCKK.transform, map); uiLastSibling(this.EGFPPEFNCKK.transform);
    if (this.PILHKCFDJIH) this.StopCoroutine(this.PILHKCFDJIH);
    this.PILHKCFDJIH = this.StartCoroutine(this.KEPPKPEAEOO());
  }
  // coroutine OMJCFLCPGDB: fade in the map background dim image
  *KEPPKPEAEOO() {
    const image = this.KHGDDKNPJEP;
    if (!alive(image)) return;
    const start = image.color;
    image.color = new Color(start.r, start.g, start.b, 0);
    setActive(image, true);
    const len = 0.5; // anim_length
    const end = Time.realtimeSinceStartup + len;
    while (Time.realtimeSinceStartup < end) {
      const x = (1 - (end - Time.realtimeSinceStartup) / len) * 2.5;
      const a = x < 0 ? 0.2 : Math.min(x, 1) * 0.6 + 0.2;
      if (alive(image)) image.color = new Color(start.r, start.g, start.b, a);
      yield null;
    }
    if (alive(image)) image.color = start;
  }
  // coroutine POKBOGKBJMK
  *IHHAEHDPGIC() { yield 0.5; this.BECFMMKIPHJ(); }
  // build the GUILevel list from the "levels" container
  PDCIBBDKCLN() {
    if (this.GBAJAFLKFEN || !mainI() || !this.KMFCFHAAAPK) return;
    this.AMBAJOCCFJE = this.KMFCFHAAAPK.GetComponentsInChildren(G.GUILevel || 'GUILevel', true);
    if (this.AMBAJOCCFJE.length !== levels().length) console.warn('Levels problems!');
    this.GBAJAFLKFEN = true;
  }
  // story window (after the first level / tutorial)
  AEBFNHHILNI() {
    const p = prof(); if (!p) return false;
    const lp = p.DCOOPMCEMNE();
    if (!lp || lp.AKLCKKPELBF < 0) return false;
    if (p.ADABKJOKCFG !== lp.AKLCKKPELBF) return false;
    if (G.Level && G.Level.total_story_levels < p.ADABKJOKCFG) return false;
    const lvl = G.Level ? G.Level.FHMGLDDPEDJ(lp.AKLCKKPELBF) : null;
    const lf = G.Level ? G.Level.last_finished : -1;
    if (lf !== -1) {
      if (lf < 0) return false;
      if (!lvl) return false;
      const gui = lvl.gui;
      if (!alive(gui) || !gui.gameObject.activeSelf) return false;
    }
    this.BKPMKNLDPCK = Time.time;
    setText(this.PKDHECDDICC, tr('STORY_' + lp.AKLCKKPELBF));
    setText(this.GEMBFLPGNEK, String(tr('TUTORIAL_5_TAP')).replace(/\./g, ''));
    showWin(this.OJDABDMEHKF, true);
    return true;
  }
  // level task hint (stars)
  ButtonShowStarHint(type) {
    const sel = G.Main ? G.Main.NMDEEOMHAGP : null;
    const tg = arr(this.BFJGLAKDHEE)[type];
    if (sel && tg && tg.icon && this.KILLDNAMMPA) {
      this.KILLDNAMMPA.sprite = tg.icon.sprite;
      const rt = this.KILLDNAMMPA.transform, sd = tg.icon.transform.sizeDelta;
      SetSizeWithCurrentAnchors(rt, 0, sd.x);
      SetSizeWithCurrentAnchors(rt, 1, sd.y);
      const task = arr(sel.tasks)[type];
      if (task) {
        const keys = ['ACH_ZOMBIES_KILL_DESC', 'ACH_BACK_FLIPS_DESC', 'ACH_FRONT_FLIPS_DESC', 'HINT_BIRD_KILL'];
        const key = task.type >= 0 && task.type <= 3 ? keys[task.type] : '';
        const p = prof(); const lp = p ? p.PJDAAMCNMHJ(sel.id) : null;
        if (lp && lp.HPCKHLLBFPL) lp.HPCKHLLBFPL(task.type);
        setText(this.GHLPCELJKJO, String(tr(key)).replace('[x]', String(task.count)) + '.');
      }
    }
    if (type === 1 && this.KILLDNAMMPA && tg && tg.icon) {
      const s = this.KILLDNAMMPA.transform.localScale;
      const sx = tg.icon.transform.localScale.x < 0 ? -Math.abs(s.x) : Math.abs(s.x);
      this.KILLDNAMMPA.transform.localScale = new Vector3(sx, s.y, s.z);
    }
    const m = menu();
    showWin(m && m.ALPCPBBNEBA ? m.ALPCPBBNEBA.GGJDKFFDFLH : this.GGJDKFFDFLH, true);
  }
  ButtonGoToTheStore() { /* market://details?id=... (update the game)  [removed: store] */ }

  // UI slide-out animations used when leaving the garage / main menu
  FKANPAEENNP() {
    const a = arr(this.LNPGGEIIFDM);
    this.ILFHJNPGEIN = a.map((rt) => {
      if (!rt) return new Vector2(0, 0);
      const p = anchored(rt);
      if (p.x === 0) return new Vector2(0, p.y < 0 ? -17 : 17);
      return new Vector2(p.x < 0 ? -17 : 17, 0);
    });
  }
  MNIKOMAODMK() {
    const a = arr(this.AOIBPBEMNEP);
    this.EPGDKJOJCCA = a.map((rt) => new Vector2(rt && anchored(rt).x < 0 ? -17 : 17, 0));
  }
  EOFBGHALHON() {
    const k = Time.deltaTime * 50; const a = arr(this.LNPGGEIIFDM), v = arr(this.ILFHJNPGEIN);
    for (let i = 0; i < a.length; i++) { if (!a[i] || !v[i]) continue; const p = anchored(a[i]); setAnchored(a[i], p.x - k * v[i].x, p.y - k * v[i].y); }
  }
  CIGPFNEMEDJ() {
    const k = Time.deltaTime * 50; const a = arr(this.AOIBPBEMNEP), v = arr(this.EPGDKJOJCCA);
    for (let i = 0; i < a.length; i++) { if (!a[i] || !v[i]) continue; const p = anchored(a[i]); setAnchored(a[i], p.x - k * v[i].x, p.y - k * v[i].y); }
  }
  // coroutine FIGMLAAMNLF: animate a RectTransform anchored position (start, end, speed, tutorial)
  *OFMEDMJLPNE(NPAAJPIIBCI, EDPJENMOOGC, OGEOBBHMHEP, NBCLGLJCBAP, NDDOMFGGEAI) {
    const tr_ = NPAAJPIIBCI, start = EDPJENMOOGC, end = OGEOBBHMHEP, speed = NBCLGLJCBAP;
    let t = 0;
    if (!tr_) return;
    tr_.anchoredPosition = new Vector2(start.x, start.y);
    if (tr_ === this.FAEGPLJFMLG && end.y === 0) setActive(this.FAEGPLJFMLG, true);
    while (t < 1) {
      tr_.anchoredPosition = new Vector2(ease(start.x, end.x, t), ease(start.y, end.y, t));
      yield null;
      t += Time.deltaTime * speed;
    }
    if ((tr_ === this.HIKLLDFIJNJ || tr_ === this.DCDCELBOOJK) && G.Main) G.Main.LNHNCBOIGOF = Time.realtimeSinceStartup;
    tr_.anchoredPosition = new Vector2(end.x, end.y);
    if (NDDOMFGGEAI && this.DBENLFCCNNE && this.DBENLFCCNNE.activeInHierarchy &&
      (activeInH(this.OPGKDNBHDEE) || activeInH(this.ENMGCHMFDEK))) {
      const p = prof();
      for (const it of arr(this.OFEKNLMPBPH)) {
        if (!it || it.ELHBFIHEDOL || !it.OJHMOHAHKDB) continue;
        const car = p ? p.DKJLCJPBPPN(-1, true) : null;
        let activate = false;
        if (activeInH(this.OPGKDNBHDEE) && car && it.FHOFNGHGNGF === 3 && car.IDOHKCCDGDG(3) === 0) activate = true;
        if (!activate && it.FHOFNGHGNGF === 4 && car && car.IDOHKCCDGDG(4) < 5 && car.IDOHKCCDGDG(3) === 5) activate = true;
        if (!activate && activeInH(this.ENMGCHMFDEK)) activate = true;
        if (activate) it.BGNPJIHMIMI(true);
      }
    }
    if (tr_ === this.FAEGPLJFMLG && end.y < 0) setActive(this.FAEGPLJFMLG, false);
  }
  // coroutine NPNKOHCAMIG: after an upgrade, focus the camera on the upgraded part and flash it
  *APCBBBDNHKG(it) {
    yield 0.1;
    let cc = carCtl();
    if (alive(cc) && it) {
      let cam = -1;
      switch (it.FHOFNGHGNGF) {
        case 1: cam = 3; break; // wheels
        case 2: cam = 1; break; // gun
        case 3: cam = 2; break; // nitro
        case 4: { const l = it.HJICMDCENKN(-1) - 1; const v = arr(cc.KEGLIKDGCNC); if (l >= 0 && l < v.length) cam = v[l]; break; }
        default: break;
      }
      if (cam >= 0 && G.CameraGarage && G.CameraGarage.IKDKLJMPOKM) G.CameraGarage.IKDKLJMPOKM(cam);
    }
    yield 0.3;
    const m = menu(); if (m) m.OLOGKIHIIEL();
    cc = carCtl();
    if (!alive(cc) || !it) return;
    const flash = (go) => { if (alive(go)) cc.EGGPODAIEBC(go); };
    switch (it.FHOFNGHGNGF) {
      case 1: for (const w of arr(cc.NNGMCDMNECH)) flash(w); break;
      case 2: flash(cc.EOJFKBECPPD); flash(cc.JHDGBAALBMP); break;
      case 3: flash(cc.GBLNJIKLCLP); break;
      case 4: { const l = it.HJICMDCENKN(-1) - 1; const a = arr(cc.CFLLLIOJOBD); if (l >= 0 && l < a.length) flash(a[l]); break; }
      default: break;
    }
  }

  // ================================================================ settings
  ButtonChangeSound() {
    const p = prof();
    // secret: 7 taps (fps shown + language 8, or in editor) toggle the debug logs
    if (p && p.EFDKHACIIEC() && p.KLKNEAIFCKG === 8) {
      if (++this.NBNHENIBKNK === 7) {
        this.NBNHENIBKNK = 0;
        p.MEOGODPDIOO(!p.LLEFEIHEJDE());
        this.DAOLEOLDHGN('IsLogs: ' + (p.LLEFEIHEJDE() ? 'True' : 'False'));
      }
    }
    const m = menu(); if (alive(m) && m.OBLKMKHMBEA) m.OBLKMKHMBEA();
    this.LLAEHJGOFLG();
  }
  ButtonChangeMusic() {
    const m = menu(); if (alive(m) && m.CBHHIGMKCJC) m.CBHHIGMKCJC();
    this.LLAEHJGOFLG();
  }
  // sound / music button sprites
  LLAEHJGOFLG() {
    const p = prof(); if (!p) return;
    if (this.FNHNMCHNKBC) setSprite(this.FNHNMCHNKBC.image, p.BMMOMBGDEKF() ? this.HFOJHALHDBO : this.AOEDCPLGJMC);
    if (this.PODOCABGIOL) setSprite(this.PODOCABGIOL.image, p.LKKDIBOKNMJ() ? this.HINHELAMJBO : this.FEKHKLCPNMI);
  }
  ButtonSettingsFPS() {
    const p = prof(); if (!p) return;
    p.HCIDDAGOLGK(!p.EFDKHACIIEC());
    // AnalyticsController.FKMJMCBODAF()  [removed: analytics]
    this.DHHCOENABGM();
  }
  // fps status sprite
  DHHCOENABGM() { const p = prof(); if (p) setSprite(this.JPOHMLGIDJI, p.EFDKHACIIEC() ? this.FEECOBGLAFK : this.HDDHNNPHKKE); }
  ButtonSettingsAccelerometer() {
    const p = prof(); if (!p) return;
    p.KHIFJCACGNC(!p.DPJPKMHLGMO());
    this.IMJEJKHBIMO();
  }
  // controls sprite
  IMJEJKHBIMO() { const p = prof(); if (p) setSprite(this.JIOODENOBLJ, p.DPJPKMHLGMO() ? this.OOOLDCGCCAC : this.NDFECGCJLGE); }
  ButtonSettingsNotifications() {
    const p = prof(); if (!p) return;
    p.IEECMAPKMJI(!p.PHOGLOAEGLO());
    // NotificationsManager schedule/cancel  [removed: notifications]
    this.MIAENKOOLAI();
  }
  // notifications sprite
  MIAENKOOLAI() { const p = prof(); if (p) setSprite(this.KBPGOADPCEF, p.PHOGLOAEGLO() ? this.FEECOBGLAFK : this.HDDHNNPHKKE); }
  ButtonSettingsGFX() {
    const m = menu(); if (alive(m) && m.EFBCOMMLAGE) m.EFBCOMMLAGE();
    this.ODHAOMJKKAE();
  }
  // gfx sprite + label
  ODHAOMJKKAE() {
    const p = prof(); if (!p) return;
    const g = p.CFDECDNFGJN;
    if (g === 2) setSprite(this.FPBIJPNMOEL, this.EPGENIDKCAP);
    else if (g === 1) setSprite(this.FPBIJPNMOEL, this.HFKCHLONOGF);
    else if (g === 0) setSprite(this.FPBIJPNMOEL, this.BFFDMCNIJHJ);
    const names = ['LOW', 'HIGH', 'ULTRA']; // DHLBGHCGAKB
    setText(this.GLLCNLBEPFD, tr('GFX_' + (names[g] !== undefined ? names[g] : g)));
  }
  ButtonSettingsLanguage() {
    const t = G.Translate && G.Translate.KECGFPHIEHF;
    if (!alive(t)) return;
    t.NINJNGGDOJC();
    this.ButtonSettings();
    for (const l of arr(this.GDNLGBEHIPK)) if (l && l.JJJNIPAKLJF) l.JJJNIPAKLJF();
    const m = menu();
    const tips = m ? m.HNAPOCNADJP : null;
    if (m && alive(m.PPIFMMPACNC) && alive(tips)) {
      const refresh = (go, name) => {
        if (!go) return;
        for (const ch of go.transform) if (ch.gameObject.name === name) { const lbl = ch.GetComponent('TranslateLabel'); if (lbl && lbl.JJJNIPAKLJF) lbl.JJJNIPAKLJF(); }
      };
      refresh(tips.JNHECJCKCGN, 'select_text'); // ConsoleTipsBottom +0x20
      refresh(tips.LJLPKOOGOBI, 'back_text');   // ConsoleTipsBottom +0x38
    }
    this.ANCCFOEBAGI();
    this.webSettingsRefresh();
  }
  // language label + flag
  KNHFEOEMGNL() {
    const t = G.Translate && G.Translate.KECGFPHIEHF; const p = prof();
    if (!alive(t) || !p) return;
    const langs = arr(t.JJIFCBOGHHP); const l = langs[p.KLKNEAIFCKG];
    if (!l) return;
    setText(this.BMDLNNBFHIM, l.native_name);
    if (l.flag) setSprite(this.FCKJIBDPNGO, l.flag);
  }
  ButtonSettingsGooglePlay() { /* BridgePHP.SocialLogin  [removed: GPGS] */ this.MLEEOPKCMBP(); }
  // Google Play button state  [removed: GPGS] -> hidden
  MLEEOPKCMBP() { const pn = this.PIKMCOCLBLK && this.PIKMCOCLBLK.transform.parent; setActive(pn, false); }
  ButtonSettingsGameCenter() { this.MGBNHDCJAMK(); }
  // hide the Game Center button
  MGBNHDCJAMK() { const pn = this.EBHNDMKGDMF && this.EBHNDMKGDMF.transform.parent; setActive(pn, false); }
  ButtonSettingsRestorePurchases() { /* Purchaser.RestorePurchases  [removed: IAP] */ }
  ButtonFullScreenToggle() {
    try {
      if (document.fullscreenElement) document.exitFullscreen();
      else (document.documentElement.requestFullscreen || document.documentElement.webkitRequestFullscreen || (() => { })).call(document.documentElement);
    } catch (e) { }
  }
  ButtonResolutionToggle() { /* not present in the original class; screen resolutions are not supported on web */ }
  // resolution label
  LKBAGBIEFJE(PAHFHOJCFEJ) { if (PAHFHOJCFEJ) setText(this.MJDNGGPFNAH, PAHFHOJCFEJ.width + 'x' + PAHFHOJCFEJ.height); }
  ButtonResetProfile() { const p = prof(); if (p) p.GKCLIHIJGIE(false, false); }
  ButtonGDPRAgree() {
    // kept functional so the flow can continue if Menu shows the consent window
    const p = prof(); if (p) p.AFFJMPIGCNC(false);
    const m = menu(); if (alive(m) && m.IKMGHNEEKFG) m.IKMGHNEEKFG();
    showWin(this.AEBAFCEJDPO, false);
  }
  ButtonGDPRTerms() { /* privacy policy URL  [removed: social] */ }
  // splash hint label (objDestructorHints)
  DAOLEOLDHGN(FJBLHMNOPEP) {
    const h = this.HDECNMCMLOD; if (!alive(h)) return;
    if (h.CIDKMFLFJEJ) h.CIDKMFLFJEJ.text = FJBLHMNOPEP;
    if (h.NNIADFNMHGB) h.NNIADFNMHGB();
  }
  // debug logs window
  ButtonLogsShow() { setActive(this.CLIELOHAOHI, true); }
  ButtonLogsHide() { setActive(this.CLIELOHAOHI, false); }
  // append a line to the debug logs (text, isError)
  OFMPCPHEGKB(ADNJPEELPAD, KDKDKFMKIBN) {
    const t = this.GJKCLADOEEL; if (!t) return;
    let s = String(t.text || '');
    if (s.length > 10000) s = '';
    t.text = s + '<color=' + (KDKDKFMKIBN ? '#FF4E4A' : '#78e938') + '>[' + Time.time.toFixed(2) + ']</color>: ' + ADNJPEELPAD + '\n';
  }

  // ================================================================ social / store / rating (removed)
  ButtonMainFacebook() { /* [removed: social] */ }
  ButtonMainTwitter() { /* [removed: social] */ }
  ButtonMainVK() { /* [removed: social] */ }
  ButtonGoToAppStore() { /* [removed: store] */ }
  ButtonGoToGooglePlay() { /* [removed: store] */ }
  ButtonZD2GoToStore() { /* [removed: store] */ }
  ButtonZD2Adv() { openMoreGames(); }   // ZD2 promo window [removed: store] -> [web] More Games (portal SDK)
  // [web] main menu: the ZD2 promo slot (next to settings / achievements) becomes the More Games button
  webMoreGames() {
    const btn = goOf(this.IIAMMNMHEFE); if (!alive(btn)) return;
    setActive(btn, moreGamesAllowed());
    const img = btn.GetComponent(Image);
    if (img) { img.sprite = moreGamesSprite(); img.color = { r: 1, g: 1, b: 1, a: 1 }; }
    const gif = btn.transform._children.find((c) => c.gameObject.name === 'zd2_promo_gif');
    if (gif) setActive(gif.gameObject, false);
  }
  ButtonRating() { /* RatingController (online leaderboard)  [removed: online] (button hidden) */ }
  ButtonNOWGGLoginAgain() { /* [removed: online] */ }
  ButtonRateMeNow() { const p = prof(); if (p) p.DCLEGMOJBPN(-1); this.ButtonCloseWindow(); } // store URL [removed]
  ButtonRateMeLater() { const p = prof(); if (p) p.DCLEGMOJBPN(0); this.ButtonCloseWindow(); }
  ButtonRateMeNever() { const p = prof(); if (p) p.DCLEGMOJBPN(-1); this.ButtonCloseWindow(); }
  // hide social buttons
  HGHFFNAJALJ() { for (const g of arr(this.GOPFDHJAAEB)) setActive(g, false); }
  // rating button visibility per platform
  HJMGNJDAJJJ() {
    if (!this.BCDIGJJNKFP) return;
    const sn = WEB_SN;
    setActive(this.BCDIGJJNKFP, [1, 2, 6, 7, 8, 9, 11, 12, 13].includes(sn));
  }
  // server sync (removed: there is no server on web)
  ButtonConfirmSaves(is_server) {
    this.DOOGGCKFICL = !!is_server;
    setText(this.OHKKGMLBLCL, tr(is_server ? 'SERVER_CONFIRM' : 'DEVICE_CONFIRM'));
    showWin(this.KNAMHOFOPMD, false);
  }
  ButtonSETSaves() { /* BridgePHP server save / load  [removed: server] */ this.ButtonCloseWindow(); }
  ABAHNKCPCFA() { return false; } // BridgePHP.is_need_sync_save_progress is never set on web

  // ================================================================ donate window (currency exchange)
  DonateWindowSilver() { this.DHADIHGJCCE(0); }
  DonateWindowGold() { /* gold packs are IAP  [removed: IAP] */ }
  DonateWindowFuel() { this.DHADIHGJCCE(2); }
  DonateWindowAfterNoMoney() {
    if (this.EMPMIBCIGPA === 1) { this.ButtonCloseWindow(); return; } // gold -> IAP  [removed: IAP]
    this.DHADIHGJCCE(this.EMPMIBCIGPA);
  }
  // open the donate window on a tab
  DHADIHGJCCE(FHOFNGHGNGF) {
    if (FHOFNGHGNGF === 1) return; // [removed: IAP]
    this.GFNKMDJEDBD();
    // AnalyticsController.KNPMHFKJGNL / Purchaser.KHDFDGMBOIJ  [removed]
    if (!this.EMFGDIEMNMI) return;
    showWin(this.EMFGDIEMNMI, true);
    this.LIFHKGNEIJE = true;
    const tg = arr(this.ODJODAONEOG)[FHOFNGHGNGF];
    if (tg) tg.isOn = true;
    this.EMPMIBCIGPA = FHOFNGHGNGF;
  }
  // select a donate tab toggle (scroll = BKIACHLBBFA)
  BCDFPFLJKPJ(GIHDNMOMBIG, BKIACHLBBFA) {
    this.LIFHKGNEIJE = !!BKIACHLBBFA;
    const tg = arr(this.ODJODAONEOG)[GIHDNMOMBIG];
    if (tg) tg.isOn = true;
    this.EMPMIBCIGPA = GIHDNMOMBIG;
  }
  DonateOnChangeToggle(type) {
    groupToggle(this.ODJODAONEOG, type);
    for (const tg of arr(this.ODJODAONEOG)) {
      if (!tg) continue;
      const g = tg.targetGraphic;
      if (tg.isOn) setColor(g, 0.3529412, 0.5137255, 0.6352941, 1); else setColor(g, 0, 0, 0, 1);
      if (tg.isOn) { uiLastSibling(tg.transform); this.EMPMIBCIGPA = type; }
    }
    const t = arr(this.ODJODAONEOG)[type];
    if (!t || !t.isOn) return;
    if (this.LIFHKGNEIJE && this.MHJAEPDEPHE) {
      const sr = this.MHJAEPDEPHE; if (sr.StopMovement) sr.StopMovement();
      const content = sr.content;
      let x = null;
      if (type === 2) x = this.webDonateMetrics().fuelX; // original: fixed -3787 / -3403 (with the gold section)
      else if (type === 1) x = -1547;
      else if (type === 0) x = 0;
      if (x !== null && content) setAnchored(content, x, 0);
    }
    this.LIFHKGNEIJE = true;
  }
  // [web] donate content layout from the visible items (HorizontalLayoutGroup: padding 0, spacing 42.9)
  webDonateMetrics() {
    const content = this.MHJAEPDEPHE && this.MHJAEPDEPHE.content; if (!content) return { total: 0, fuelX: 0 };
    const sp = 42.9; let x = 0, fuelLeft = null;
    for (const t of content.transform ? content.transform._children : content._children) {
      const go = t.gameObject; if (!go.activeSelf || !go.rect) continue;
      const di = go.GetComponent('DonateItem');
      if (fuelLeft === null && di && di.LNKBNEAEAJO === 2) fuelLeft = x;
      x += go.rect.sizeDelta[0] * Math.abs(go.obj.scale.x || 1) + sp;
    }
    const total = Math.max(0, x - sp);
    const vp = content.transform ? content.transform.parent : content.parent;
    const vpw = vp && vp.gameObject && vp.gameObject._size ? vp.gameObject._size[0] : 1588;
    const fuelX = fuelLeft === null ? 0 : -Math.min(fuelLeft, Math.max(0, total - vpw));
    return { total, fuelX };
  }
  // donate content width
  CGHIGIBEHAE() {
    if (!this.MHJAEPDEPHE || !this.DIHCPLMELEF) return;
    const content = this.MHJAEPDEPHE.content; if (!content) return;
    const w = this.webDonateMetrics().total; // original: fixed widths (with the gold section)
    const sd = content.sizeDelta;
    content.sizeDelta = new Vector2(w, sd.y); // TODO(verify) original: sizeDelta.x = w - parentSize*(anchorMax-anchorMin)
  }
  // buy a donate item (gold -> silver / fuel exchanges are kept; IAP removed)
  DonateItem(item) {
    if (!item) return;
    const p = prof(); if (!p) return;
    const type = item.LNKBNEAEAJO, amount = item.DFOBJJIMMEE, price = item.BDHDNGGBOFK;
    const m = menu();
    const noMoney = () => this.AFHIOFKDNLD(1, roundEven(price) - p.HPDEBBJNCIK());
    if (type === 2) { // fuel for gold
      const fm = m ? m.LCCECGFFBGC : null;
      if (alive(fm)) {
        if (amount < 1 || p.HPDEBBJNCIK() < price) { noMoney(); return; }
        if (amount === 999) { fm.PNAAGCJLMLB(24 - p.HDABOKNLKGK(), false); fm.JKGPIEKIJNG(); }
        else if (amount === 99) fm.PNAAGCJLMLB(24, false);
        else if (amount === 1) fm.PNAAGCJLMLB(1, true);
        p.JMNEPHGKIPE(roundEven(price), 'fuel', item.gameObject.name);
        sound(G.SoundScript ? G.SoundScript.CIMAPDEBGGG : null);
      }
    } else if (type === 1) {
      // gold packs (USD) and "free gold" (rewarded ad)  [removed: IAP/ads]
      return;
    } else if (type === 0) { // silver for gold
      if (p.HPDEBBJNCIK() < price) { noMoney(); return; }
      const name = item.gameObject.name;
      let bought = false;
      if (name !== 'item_silver_4') {
        if (0 < amount) { p.JLEEMPONONF(amount + p.LOCFCFJIAIH()); bought = true; }
      } else if (!p.KHJGIDLMPLJ()) { p.BDKMDDIBAAD(true); bought = true; } // silver doubler
      if (bought) {
        p.JMNEPHGKIPE(roundEven(price), 'silver', name);
        sound(G.SoundScript ? G.SoundScript.CIMAPDEBGGG : null);
      }
    } else if (type === 3) {
      return; // special offers  [removed: IAP]
    }
    this.GFNKMDJEDBD();
  }
  // refresh the donate items texts
  GFNKMDJEDBD() {
    const p = prof(); if (!p) return;
    let silverS = '', goldS = '', fuelS = '';
    const lang = p.KLKNEAIFCKG;
    const langChanged = this.HOPCDPIPGHI !== lang;
    if (langChanged) { silverS = tr('SILVER'); goldS = tr('GOLD'); fuelS = tr('FUEL_CANISTER_DESC'); }
    const fm = G.FuelManager;
    for (const it of arr(this.CPLLOEGKNHP)) {
      if (!it) continue;
      if (it.CDLKLGBJCEA && !this.PBCBAIIEMPM) it.CDLKLGBJCEA.text = String(it.DFOBJJIMMEE);
      const name = it.gameObject.name;
      if (name === 'item_silver_4') {
        if (it.KFLKJADCCBF) setActive(it.KFLKJADCCBF, !p.KHJGIDLMPLJ());
        if (it.BMIFJDJJAGC) setActive(it.BMIFJDJJAGC, !!p.KHJGIDLMPLJ());
      } else if (name === 'item_fuel_4') {
        const inf = !!(fm && fm.ONOJBFNLIJI === true);
        if (this.BJBAIHKNGEP) setActive(this.BJBAIHKNGEP, !inf);
        setActive(this.EGJKLCNFMEP, inf);
      }
      if (langChanged && it.GPMHOHNAAGB) {
        const lbl = it.GPMHOHNAAGB;
        switch (name) {
          case 'item_fuel_2': lbl.text = fuelS.replace('[x]', '1'); break;
          case 'item_fuel_3': lbl.text = fuelS.replace('[x]', String(fm ? fm.PCGAGFMFKMC : '')); break;
          case 'item_gold_0': lbl.text = tr('FREE_GOLD'); break;
          case 'item_gold_1': lbl.text = goldS + ' #1'; break;
          case 'item_gold_2': lbl.text = goldS + ' #2'; break;
          case 'item_gold_3': lbl.text = goldS + ' #3'; break;
          case 'item_gold_4': lbl.text = goldS + ' #4'; break;
          case 'item_gold_5': lbl.text = goldS + ' #5'; break;
          case 'item_silver_1': lbl.text = silverS + ' #1'; break;
          case 'item_silver_2': lbl.text = silverS + ' #2'; break;
          case 'item_silver_3': lbl.text = silverS + ' #3'; break;
          default: break;
        }
      }
      if (it.AIBDOEJJBGA) setActive(it.AIBDOEJJBGA, !p.MHBEPDHNNFH());
    }
    if (langChanged) this.HOPCDPIPGHI = lang;
    this.PBCBAIIEMPM = true;
    const m = menu(); if (alive(m) && m.PPBIOKBJGPG) m.PPBIOKBJGPG();
  }
  // hide the top-panel donate buttons
  MFHPABKGJEH() { for (const g of arr(this.HIKGPFKONAB)) setActive(g, false); }
  // special offers  [removed: IAP]
  ButtonShowOffers(type) { }
  // close an offer window: return to the garage if one was open
  JANLLKKBNAM(FHOFNGHGNGF) {
    const open = activeSelf(this.IEDNLOCLBLL) || activeSelf(this.FJJHGKDGGKJ) || activeSelf(this.HKAEDPOIJOK) || activeSelf(this.CNHMFGBAALP) || activeSelf(this.DKKPPBLPDLO);
    if (open) { const m = menu(); showWin(m && m.ALPCPBBNEBA ? m.ALPCPBBNEBA.CNBICALJOKA : this.CNBICALJOKA, false); }
  }

  // ================================================================ cheats (dev tools, window gated as in the original)
  ButtonCheatWindow() {
    const p = prof(); if (!p) return;
    const ok = p.EFDKHACIIEC() && p.LLEFEIHEJDE() && p.KLKNEAIFCKG === 8; // || Application.isEditor
    if (!ok) return;
    const back = activeSelf(this.HBNCEIHGBOO) ? this.HBNCEIHGBOO : this.CNBICALJOKA;
    if (!this.IODBIFFEAGJ) return;
    this.IODBIFFEAGJ.ICHGEFECNAA = back;
    showWin(this.IODBIFFEAGJ, true);
    this.MKJAANBPFJH();
    this.ToggleCheatGroup(0);
  }
  ToggleCheatGroup(type) {
    groupToggle(this.KNGHPGOKNIM, type);
    const tgs = arr(this.KNGHPGOKNIM), groups = arr(this.GOBLNKDCNPG);
    for (let i = 0; i < tgs.length; i++) {
      const tg = tgs[i]; if (!tg) continue;
      if (tg.isOn) setColor(tg.targetGraphic, 0.3529412, 0.5137255, 0.6352941, 1); else setColor(tg.targetGraphic, 0, 0, 0, 1);
      if (tg.isOn) uiLastSibling(tg.transform);
      setActive(groups[i], tg.isOn);
    }
    setText(this.CMAECICIFPN, ''); // scheduled notifications list  [removed: notifications]
    setText(this.JCFKHDAECDD, ''); // event contests list  [removed: online]
  }
  // ads debug labels
  MKJAANBPFJH() {
    const p = prof();
    setText(this.BEAPIFAOFLG, 'Ads: ' + (p && !p.MHBEPDHNNFH() ? 'True' : 'False'));
    setText(this.NDKGBBCFKBK, ''); // AdvController next ads time  [removed: ads]
  }
  // cheat ad buttons interactable (no AdvController on web)
  KMDEAFLJMND() {
    if (!activeSelf(this.IODBIFFEAGJ)) return;
    for (const b of [this.LEGJKABBKBD, this.FPFFENBMAPJ, this.PBFDNMEDLNJ, this.GJLPOLHMCOH, this.JEFFFPAJCNG]) if (b) b.interactable = false;
  }
  ButtonCheatEraseMoney() {
    const p = prof(); if (!p) return;
    p.JLEEMPONONF(0); p.DIMKKHJDHFJ(0); p.BDKMDDIBAAD(false); p.OPFBHOGMKNG(0);
    const m = menu(); if (m && m.LCCECGFFBGC) m.LCCECGFFBGC.NGBCNBFIMFC(-1);
    if (m) m.OLOGKIHIIEL();
  }
  ButtonCheatRestoreHP() {
    const p = prof(); if (!p) return;
    const car = p.DKJLCJPBPPN(-1, true); if (!car) return;
    car.DDPLLMLFICC(-1);
    const m = menu(); if (m) m.OLOGKIHIIEL();
  }
  ButtonCheatRemoveCar() {
    const p = prof(); if (!p) return;
    if (!p.DKJLCJPBPPN(-1, true)) return;
    p.BHPNOGJCDKD(-1);
    const m = menu(); if (m) m.OLOGKIHIIEL();
  }
  ButtonCheatAddSilver() { const p = prof(); if (p) p.JLEEMPONONF(p.LOCFCFJIAIH() + 100000); }
  ButtonCheatAddGold() { const p = prof(); if (p) p.DIMKKHJDHFJ(p.HPDEBBJNCIK() + 1000); }
  ButtonCheatRestoreFuel() { const m = menu(); if (m && alive(m.LCCECGFFBGC)) m.LCCECGFFBGC.PNAAGCJLMLB(24, false); }
  ButtonCheatUnlockAllLevels() {
    const p = prof(); if (!p) return;
    for (const lp of arr(p.CGPKBBJJHLK)) if (lp) lp.MHHDNMHEMKH(666);
    for (let i = 1; i < cars().length; i++) p.NODNJNKEFKM(false, i);
  }
  ButtonCheatUnlockOneMoreLevel() {
    const p = prof(); if (!p) return;
    const lp = p.DCOOPMCEMNE(); if (!lp) return;
    if (G.Level) G.Level.last_finished = lp.AKLCKKPELBF;
    lp.MHHDNMHEMKH(666);
    const next = lp.AKLCKKPELBF + 1;
    if (next < cars().length) p.NODNJNKEFKM(false, next);
    if (G.Main) G.Main.NMDEEOMHAGP = null;
    showWin(this.HBNCEIHGBOO, false);
  }
  ButtonCheatShowOffer(type) { this.ButtonShowOffers(type); }
  ButtonCheatShowRewarded(_go) { /* [removed: ads] */ }
  ButtonCheatShowInterstitial() { /* [removed: ads] */ }
  ButtonCheatShowBanner() { /* [removed: ads] */ }
  ButtonCheatHideBanner() { /* [removed: ads] */ }
  ButtonCheatAds() { /* MAX mediation debugger  [removed: ads] */ }
  ButtonCheatTestAccount() { /* [removed: server] */ }
  ButtonCheatTestNotification() { /* [removed: notifications] */ }
}
define('GUIGarage', GUIGarage);
