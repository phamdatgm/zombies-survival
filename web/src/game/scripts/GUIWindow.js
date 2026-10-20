// GUIWindow: generic UI window (show/hide, background, slide-in animation, window stack).
import { Time, Vector2, Vector3, Mathf, uiDirty } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

const log = (s) => { try { G.Main && G.Main.GEMDEAMAGPG && G.Main.GEMDEAMAGPG(s, false); } catch (e) { } };
const nm = (w) => (alive(w) ? w.gameObject.name : 'null');

export class GUIWindow extends GameBehaviour {
  static OFEJBBPBBFG = null;   // current (main) window
  static DNEPGKHAOBF = null;   // current child window (shown over the main one)
  static PADNIFKFMPL = null;   // previous main window
  static JMMLANIHIHJ = false;  // slide animation lock (never set true in the build)

  constructor(go, p) {
    super(go, p);
    // serialized: HBFOLOGFOCH (show background), GNNIDAAJHAB (background via Menu fade), ABEAIKDPHKN (garage top-bar flag),
    // HLFGAHJIOGK (slide-in animation), ICHGEFECNAA (parent window), PIABNBOLPFI, DIOAEABLGJH, NFKOLENCPBC (banner-aware)
    this.HBFOLOGFOCH = false; this.GNNIDAAJHAB = false; this.ABEAIKDPHKN = false; this.HLFGAHJIOGK = false;
    this.ICHGEFECNAA = null; this.PIABNBOLPFI = null; this.DIOAEABLGJH = null; this.NFKOLENCPBC = false;
    this.GJLAJGCPBEF = -1;     // final anchored Y of the slide animation (-1 = not captured yet)
    this.KJAPMFPAMLO = false;  // window was moved because of an ad banner
    this.BIIBMMCNOJH = 0;      // saved anchored Y (banner)
    this.BBFMJAGLAMH = 0;      // saved scale (banner)
  }

  // restore position changed for the ad banner
  IPELKJAHFGL() {
    // AdvController.JJDJIEJLCFM() [removed: ads]
    if (this.KJAPMFPAMLO) {
      const rt = this.transform;
      if (!rt) { log('isWindowChangedByAds. Rect == null!'); return; }
      this.EPGDFDEPGCB(rt, this.BIIBMMCNOJH, this.BBFMJAGLAMH);
      this.KJAPMFPAMLO = false;
    }
  }

  // move/scale window rect (used for ad banner layout)
  EPGDFDEPGCB(KIMPLIODKPG, NIGCBLFGFKO, APPEAGGPNAB) {
    if (!alive(KIMPLIODKPG)) return;
    if (!this.KJAPMFPAMLO) {
      this.KJAPMFPAMLO = true;
      this.BIIBMMCNOJH = KIMPLIODKPG.anchoredPosition.y;
      this.BBFMJAGLAMH = KIMPLIODKPG.localScale.x;
    }
    this.GJLAJGCPBEF = NIGCBLFGFKO;
    KIMPLIODKPG.anchoredPosition = new Vector2(0, NIGCBLFGFKO);
    if (APPEAGGPNAB > 0 && KIMPLIODKPG.localScale.x !== APPEAGGPNAB) {
      KIMPLIODKPG.localScale = new Vector3(APPEAGGPNAB, APPEAGGPNAB, KIMPLIODKPG.localScale.z); // TODO(verify): icall set_localScale args
    }
  }

  // Show(asChild)
  HEGIHOAJOKK(LIMOELDKJHO = false) {
    LIMOELDKJHO = !!LIMOELDKJHO;
    const W = GUIWindow;
    log('Try to Show: ' + this.gameObject.name + ', current: ' + nm(W.OFEJBBPBBFG) + ', last: ' + nm(W.PADNIFKFMPL) + '), Child: ' + nm(W.DNEPGKHAOBF));
    if (W.OFEJBBPBBFG === this && !alive(W.DNEPGKHAOBF)) return;
    if (W.DNEPGKHAOBF === this) return;
    if (alive(W.DNEPGKHAOBF)) { W.DNEPGKHAOBF.JGDCBENNDFO(false); W.DNEPGKHAOBF = null; }
    if (alive(W.OFEJBBPBBFG) && !LIMOELDKJHO) W.OFEJBBPBBFG.JGDCBENNDFO(false);
    const Menu = G.Menu, menu = Menu && Menu.KECGFPHIEHF;
    const bg = this.FEHHGIGJIKL();
    if (alive(bg)) {
      if (!this.HBFOLOGFOCH) {
        if (bg.activeSelf) { if (Menu) Menu.GCDHNMAHOEP = Time.time; bg.SetActive(false); }
      } else if (alive(menu) && this.GNNIDAAJHAB && Menu.GCDHNMAHOEP + 0.5 < Time.time) {
        menu.EDKJPDKMJGB && menu.EDKJPDKMJGB(bg);
      } else bg.SetActive(true);
    }
    const CC = G.CarController, car = CC && CC.KECGFPHIEHF;
    if (alive(car) && alive(car.CDDOBCENBOG) && alive(menu)) {
      // NFKOLENCPBC + AdvController.EDNAEPDDBPJ(): banner-aware layout [removed: ads]
      this.IPELKJAHFGL();
    }
    if (Menu && Menu.MDLMIEDLJMC && alive(menu) && alive(menu.ALPCPBBNEBA)) {
      // banner-aware layout for garage windows [removed: ads]
      this.IPELKJAHFGL();
    }
    // Menu.BOAENEJELJP: Adverty in-garage banner instantiate [removed: ads]
    this.gameObject.SetActive(true);
    W.PADNIFKFMPL = W.OFEJBBPBBFG;
    if (LIMOELDKJHO) W.DNEPGKHAOBF = this; else W.OFEJBBPBBFG = this;
    if (this.HLFGAHJIOGK) this.StartCoroutine(this.FAAELIPKLCB());
    log('Window. Show: ' + nm(W.OFEJBBPBBFG) + ' (last: ' + nm(W.PADNIFKFMPL) + '), Child: ' + nm(W.DNEPGKHAOBF));
    if (G.Main && G.Main.KCHOEBEIOCE && G.Main.KCHOEBEIOCE() === true && alive(menu) && menu.ONNBLPAKJHK) {
      G.GamePadController && G.GamePadController.KCAHLEAKNNK && G.GamePadController.KCAHLEAKNNK(); // gamepad: reselect (stub)
    }
    const garage = alive(menu) ? menu.ALPCPBBNEBA : null;
    if (!(Menu && Menu.MDLMIEDLJMC) || !alive(garage)) {
      // in race: GUIGameplay hooks
      if (!alive(car)) return;
      const gg = car.CDDOBCENBOG;
      if (alive(gg)) {
        const cur = W.OFEJBBPBBFG;
        if (cur === gg.OJFNCOLKMHP) {
          const D = G.Main && G.Main.FBDDKIOEKDM;
          if (alive(gg.BHMJELHKMGP)) gg.BHMJELHKMGP.SetActive(!!(D && D.EFDKHACIIEC && D.EFDKHACIIEC())); // fps counter
        } else if (cur === gg.BKLILPKICFN) gg.CCDFIOJMHGC();
        else if (cur === gg.HKPNHDAKHHO) gg.PIHHDKCEMGD();
      }
    } else {
      // garage hooks
      if (garage.ABAHNKCPCFA && garage.ABAHNKCPCFA()) return;
      const D = G.Main && G.Main.FBDDKIOEKDM;
      const actv = (c) => alive(c) && c.gameObject.activeSelf;
      if (actv(garage.CNBICALJOKA) || actv(garage.HBNCEIHGBOO)) {
        garage.DBENLFCCNNE && garage.DBENLFCCNNE.SetActive(true);
        garage.NFJNJCLENFD && garage.NFJNJCLENFD();
        garage.NNMCGAKENMI && garage.NNMCGAKENMI.SetActive(!!(D && D.EFDKHACIIEC && D.EFDKHACIIEC()));
        setOffsetMax(garage.IKFFMKPIMMM, 0, -88);
      } else {
        garage.DBENLFCCNNE && garage.DBENLFCCNNE.SetActive(false);
        setOffsetMax(garage.IKFFMKPIMMM, 0, 0);
      }
      const bVar1 = actv(garage.AEBAFCEJDPO) ? !!Menu.NDMIIEOKFGB : false;
      garage.JPHKBMCMAIE && garage.JPHKBMCMAIE.SetActive(this.ABEAIKDPHKN);
      if (W.OFEJBBPBBFG === garage.CNBICALJOKA && W.DNEPGKHAOBF !== garage.OPGKDNBHDEE) {
        if (alive(W.PADNIFKFMPL) && W.PADNIFKFMPL === garage.HBNCEIHGBOO) menu.OODBEAHDBMH && menu.OODBEAHDBMH();
        garage.LGDFJPCENPE && garage.LGDFJPCENPE.SetActive(false); // [removed: IAP special offer]
        if (G.Main) G.Main.LNHNCBOIGOF = Time.realtimeSinceStartup;
        menu.OLOGKIHIIEL && menu.OLOGKIHIIEL();
      }
      if (W.OFEJBBPBBFG === garage.AEBAFCEJDPO) {
        const SS = G.SoundScript;
        if (D && D.LKKDIBOKNMJ && D.LKKDIBOKNMJ() && Menu.MDLMIEDLJMC && SS && alive(SS.FPOJDHNIFPP) && !SS.FPOJDHNIFPP.isPlaying) SS.HCEFONCADKE && SS.HCEFONCADKE(SS.FPOJDHNIFPP, false);
        if (D && D.DKJLCJPBPPN && D.DKJLCJPBPPN(-1, true) == null) {
          if (G.Main) G.Main.LCFFGBBHMPH = D.JNEIJLEGHEF;
          menu.CKPDEIAFHEC && menu.CKPDEIAFHEC();
        }
        garage.OCLHKDAFKLI && garage.OCLHKDAFKLI();
        garage.HJMGNJDAJJJ && garage.HJMGNJDAJJJ();
      } else if (W.OFEJBBPBBFG === garage.HNGMMGHABAF) garage.ANCCFOEBAGI && garage.ANCCFOEBAGI();
      if (W.OFEJBBPBBFG === garage.HBNCEIHGBOO && !alive(W.DNEPGKHAOBF)) {
        if (!(G.Main && G.Main.NMDEEOMHAGP)) garage.ButtonMapHidePanel && garage.ButtonMapHidePanel(false);
        Menu.CCCHHLJEBKK = false;
        garage.AGFKGLDJDLE && garage.AGFKGLDJDLE();
        garage.AEBFNHHILNI && garage.AEBFNHHILNI();
      }
      if (bVar1) return;
    }
    if (alive(menu)) menu.GDEFDCOIDNM && menu.GDEFDCOIDNM();
  }

  // slide-in animation from y=400 to the window's final anchored Y (realtime, 0.4 s)
  *FAAELIPKLCB() {
    if (GUIWindow.JMMLANIHIHJ) return;
    const rt = this.transform;
    const pos = rt.anchoredPosition;
    if (this.GJLAJGCPBEF === -1) this.GJLAJGCPBEF = rt.anchoredPosition.y;
    const final_pos_y = this.GJLAJGCPBEF, initY = 400;
    pos.y = initY;
    rt.anchoredPosition = new Vector2(pos.x, pos.y);
    const anim_length = 0.4;
    const pauseEndTime = Time.realtimeSinceStartup + anim_length;
    const lerp = (a, b, t) => (G.Main && G.Main.BKPNLKDKAKA ? G.Main.BKPNLKDKAKA(a, b, t) : Mathf.Lerp(a, b, t));
    for (;;) {
      const now = Time.realtimeSinceStartup;
      if (pauseEndTime <= now) {
        rt.anchoredPosition = new Vector2(pos.x, final_pos_y);
        GUIWindow.JMMLANIHIHJ = false;
        return;
      }
      rt.anchoredPosition = new Vector2(pos.x, lerp(initY, final_pos_y, 1 - (pauseEndTime - now) / anim_length));
      yield null;
    }
  }

  // Hide(hideChildBackground)
  JGDCBENNDFO(OIAHOGEKCHK = false) {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (alive(menu) && alive(menu.ALPCPBBNEBA)) {
      const g = menu.ALPCPBBNEBA;
      if (this === g.OPGKDNBHDEE || this === g.ENMGCHMFDEK) menu.AFBPIADEOPC && menu.AFBPIADEOPC();
      else if (this === g.ECKPNMBJDNG) menu.FPPIKAMLPDC && menu.FPPIKAMLPDC();
    }
    if (OIAHOGEKCHK && alive(GUIWindow.DNEPGKHAOBF)) {
      GUIWindow.DNEPGKHAOBF = null;
      const bg = this.FEHHGIGJIKL();
      if (alive(bg) && bg.activeSelf) bg.SetActive(false);
    }
    this.gameObject.SetActive(false);
  }

  // background object (garage or in-race)
  FEHHGIGJIKL() {
    const Menu = G.Menu, menu = Menu && Menu.KECGFPHIEHF;
    if (Menu && Menu.MDLMIEDLJMC && alive(menu) && alive(menu.ALPCPBBNEBA) && alive(menu.ALPCPBBNEBA.EJKPAICDHGA)) return menu.ALPCPBBNEBA.EJKPAICDHGA;
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (alive(car) && alive(car.CDDOBCENBOG) && alive(car.CDDOBCENBOG.EJKPAICDHGA)) return car.CDDOBCENBOG.EJKPAICDHGA;
    return null;
  }
}

// RectTransform.offsetMax setter (Unity semantics: keeps offsetMin)
function setOffsetMax(rt, x, y) {
  if (!alive(rt) || !rt.gameObject.rect) return;
  const r = rt.gameObject.rect;
  const dx = x - (r.anchoredPosition[0] + r.sizeDelta[0] * (1 - r.pivot[0]));
  const dy = y - (r.anchoredPosition[1] + r.sizeDelta[1] * (1 - r.pivot[1]));
  r.sizeDelta = [r.sizeDelta[0] + dx, r.sizeDelta[1] + dy];
  r.anchoredPosition = [r.anchoredPosition[0] + dx * r.pivot[0], r.anchoredPosition[1] + dy * r.pivot[1]];
  uiDirty();
}

define('GUIWindow', GUIWindow);
