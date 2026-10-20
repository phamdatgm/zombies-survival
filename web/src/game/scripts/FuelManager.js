// FuelManager: fuel (energy) system in the garage. Max 24 fuel (PCGAGFMFKMC), +1 fuel every 600 s of real time
// (timer start time stored in the profile "ft", Date.now() based), optional infinite fuel until profile.EHAJKCIJCGH.
// Removed: local notifications ("fuel refreshed").
import { Time } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

function prof() { return G.Main.FBDDKIOEKDM; }
function garage() { const m = G.Menu && G.Menu.KECGFPHIEHF; return alive(m) && alive(m.ALPCPBBNEBA) ? m.ALPCPBBNEBA : null; }
const parseDate = (s) => G.DAFNMLEKHAD.ParseDate(s, new Date());
const pad2 = (n) => String(n).padStart(2, '0');

export class FuelManager extends GameBehaviour {
  static NDMMNFPNIGC = false;   // unlimited fuel (cheat/premium): fuel reads as 999
  static ONOJBFNLIJI = false;   // infinite fuel timer active
  static JAMPECBLPCF = 24;      // const max fuel
  static PCGAGFMFKMC = 0;       // max fuel (set to 24 in Start)
  static NMONNADLOBD = 600;     // const seconds per fuel

  constructor(go, p) {
    super(go, p);
    this.DIFNGFMLPMP = false;   // started
    this.DIJKLNELFMH = 0;       // seconds elapsed in the current refill period (600 = stopped)
    this.DEEAMAOHJGM = 0;       // last tick time
  }

  // start 8 hours of infinite fuel
  JKGPIEKIJNG() {
    const until = new Date(Date.now() + 8 * 3600 * 1000);
    prof().GBNPKHOGCBB(until);
    FuelManager.ONOJBFNLIJI = true;
    this.NGBCNBFIMFC(-1);
  }

  // fuel counter text
  NGBCNBFIMFC(ICGGFAKJHGN = -1) {
    if (ICGGFAKJHGN === -1) ICGGFAKJHGN = prof().HDABOKNLKGK();
    if (!G.Menu.MDLMIEDLJMC) return;
    const gg = garage();
    if (!gg) return;
    const coins = gg.DINKFHPBEIN;
    if (!alive(coins)) return;
    const t = coins.CIDKMFLFJEJ;
    if (t) t.text = FuelManager.ONOJBFNLIJI ? '<size=65>∞</size>/<size=65>∞</size>' : String(ICGGFAKJHGN) + '/' + String(FuelManager.PCGAGFMFKMC);
    gg.NFJNJCLENFD();
  }

  // add fuel (DHJBFBDKNJE: schedule "refreshed" notification)
  PNAAGCJLMLB(ALLBGCHDGNC, DHJBFBDKNJE) {
    G.Main.GEMDEAMAGPG('Increase Fuel: ' + ALLBGCHDGNC);
    const p = prof();
    p.OPFBHOGMKNG(ALLBGCHDGNC + p.HDABOKNLKGK());
    if (p.HDABOKNLKGK() < FuelManager.PCGAGFMFKMC) {
      if (DHJBFBDKNJE) this.DJOELCKFNBO();
    } else {
      this.KPOIGAIGJGL();
      // [removed: notifications] NotificationsManager.LLFJNKAPDIM("fuel", 3, true)
    }
    if (G.Menu.MDLMIEDLJMC) {
      const gg = garage();
      if (gg) {
        this.NGBCNBFIMFC(p.HDABOKNLKGK());
        if (alive(gg.DINKFHPBEIN)) gg.DINKFHPBEIN.ICMOCEHIFOI();
        if (p.HDABOKNLKGK() === 0 && G.GUIWindow && G.GUIWindow.OFEJBBPBBFG === gg.CNBICALJOKA) G.Menu.KECGFPHIEHF.OLOGKIHIIEL();
      }
    }
    this.IGOLHIKAMHI();
  }

  // stop the refill timer
  KPOIGAIGJGL() {
    G.Main.GEMDEAMAGPG('Stop Timer');
    this.DIJKLNELFMH = 600;
  }

  // schedule "fuel full" notification -> [removed: notifications]
  DJOELCKFNBO() {
    const p = prof();
    if (!p.PHOGLOAEGLO()) return;
    if (FuelManager.PCGAGFMFKMC <= p.HDABOKNLKGK()) return;
    const secs = (FuelManager.PCGAGFMFKMC - p.HDABOKNLKGK()) * 600 - this.DIJKLNELFMH;
    const at = new Date(parseDate(p.AFDIIKEDILD()).getTime() + secs * 1000);
    G.Main.GEMDEAMAGPG('time_full_refresh: ' + secs + ' Notifications in: ' + at.toString());
    // [removed: notifications] NotificationsManager.KJLOEDMCBNA(at, Translate("FUEL_REFRESHED"), "fuel", 3)
  }

  // hide the refill timer when full
  IGOLHIKAMHI() {
    if (FuelManager.PCGAGFMFKMC > prof().HDABOKNLKGK()) return;
    if (!G.Menu.MDLMIEDLJMC) return;
    const gg = garage();
    if (!gg) return;
    if (gg.CNEDNDJPDFK) gg.CNEDNDJPDFK.text = '';
    if (gg.DIHCPLMELEF) gg.DIHCPLMELEF.SetActive(false);
    gg.CGHIGIBEHAE();
  }

  // apply the fuel earned while away (real time since the timer start)
  AFCKJABEJKI() {
    if (FuelManager.NDMMNFPNIGC || !this.DIFNGFMLPMP) return;
    const p = prof();
    G.Main.GEMDEAMAGPG('CheckFuelForRefresh. Fuel: ' + p.HDABOKNLKGK() + ' max: ' + FuelManager.PCGAGFMFKMC, false);
    if (FuelManager.PCGAGFMFKMC <= p.HDABOKNLKGK()) {
      this.KPOIGAIGJGL();
      this.IGOLHIKAMHI();
      return;
    }
    const t0 = parseDate(p.AFDIIKEDILD());
    G.Main.GEMDEAMAGPG('fuel_time: ' + p.AFDIIKEDILD() + ' parsed: ' + t0.toString(), false);
    const total = Math.trunc((Date.now() - t0.getTime()) / 1000);
    this.DIJKLNELFMH = total;
    const add = Math.trunc(total / 600);
    G.Main.GEMDEAMAGPG('total_seconds: ' + total + ' fuel_add: ' + add, false);
    const max = FuelManager.PCGAGFMFKMC;
    if (add + p.HDABOKNLKGK() < max) {
      if (add > 0) this.PNAAGCJLMLB(add, false);
      this.MLLMOHIBFMC(Math.max(total - 600, 0));
    } else {
      this.PNAAGCJLMLB(max - p.HDABOKNLKGK(), false);
    }
    this.IGOLHIKAMHI();
  }

  // (re)start the refill timer at ILPEALLOJNJ seconds already elapsed
  MLLMOHIBFMC(ILPEALLOJNJ) {
    if (this.DIJKLNELFMH !== 0 && this.DIJKLNELFMH < 600) {
      G.Main.GEMDEAMAGPG('StartTimer not start: ' + this.DIJKLNELFMH);
      return;
    }
    G.Main.GEMDEAMAGPG('StartTimer: ' + this.DIJKLNELFMH);
    this.DIJKLNELFMH = ILPEALLOJNJ;
    prof().KGEAALNFELC(G.DAFNMLEKHAD.DateToString(new Date(Date.now() - ILPEALLOJNJ * 1000)));
  }

  Update() {
    if (this.DIJKLNELFMH < 600 && Time.time - this.DEEAMAOHJGM >= 1.0) {
      this.DEEAMAOHJGM = Time.time;
      this.DIJKLNELFMH++;
      const gg = G.Menu.MDLMIEDLJMC ? garage() : null;
      if (!gg) G.Main.EEKNCFLMGDP('Menu.I.gui_garage is null');
      else {
        const W = G.GUIWindow;
        const cur = W ? W.OFEJBBPBBFG : null;
        if (cur && (cur === gg.CNBICALJOKA || cur === gg.HBNCEIHGBOO || cur === gg.EMFGDIEMNMI)) {
          if (gg.DIHCPLMELEF && !gg.DIHCPLMELEF.activeSelf) { gg.DIHCPLMELEF.SetActive(true); gg.CGHIGIBEHAE(); }
          if (gg.CNEDNDJPDFK) {
            const left = 600 - this.DIJKLNELFMH;
            gg.CNEDNDJPDFK.text = String(Math.trunc(left / 60)) + ':' + pad2(left % 60);
          }
        }
      }
      if (this.DIJKLNELFMH > 599) { this.KPOIGAIGJGL(); this.AFCKJABEJKI(); }
    }
    if (!FuelManager.ONOJBFNLIJI) return;
    const left = (prof().EHAJKCIJCGH.getTime() - Date.now()) / 1000;
    if (left <= 0.0) {
      FuelManager.ONOJBFNLIJI = false;
      if (G.Menu.MDLMIEDLJMC) { const gg = garage(); if (gg) gg.GFNKMDJEDBD(); }
      this.NGBCNBFIMFC(-1);
    } else if (G.Menu.MDLMIEDLJMC) {
      const gg = garage();
      if (!gg) return;
      const s = Math.trunc(left);
      if (gg.COGIJGJLABH) gg.COGIJGJLABH.text = String(Math.trunc(s / 3600) % 24) + ':' + pad2(Math.trunc(s / 60) % 60) + ':' + pad2(s % 60);
    }
  }

  NALMHNPBAAF() { }

  // start: detect infinite fuel, set max, apply earned fuel
  CNNAILDHIMN() {
    this.DIFNGFMLPMP = true;
    if (FuelManager.NDMMNFPNIGC) return;
    FuelManager.ONOJBFNLIJI = prof().EHAJKCIJCGH.getTime() > Date.now();
    FuelManager.PCGAGFMFKMC = 24;
    this.CPLMJMFGLMB();
  }

  Start() { this.CNNAILDHIMN(); }

  // refresh: apply earned fuel and update the counter
  CPLMJMFGLMB() {
    if (!this.DIFNGFMLPMP) return;
    this.AFCKJABEJKI();
    this.NGBCNBFIMFC(-1);
  }

  OnEnable() { this.CPLMJMFGLMB(); }

  // consume 1 fuel (race start)
  OBAELOECFBH() {
    if (FuelManager.NDMMNFPNIGC || FuelManager.ONOJBFNLIJI) return;
    const p = prof();
    p.OPFBHOGMKNG(p.HDABOKNLKGK() - 1);
    if (G.Menu.MDLMIEDLJMC) {
      const gg = garage();
      if (gg && alive(gg.HCAKLLPDEGK)) gg.HCAKLLPDEGK.ICMOCEHIFOI(-1);
    }
    this.MLLMOHIBFMC(0);
    this.DJOELCKFNBO();
    this.NGBCNBFIMFC(-1);
  }
}
define('FuelManager', FuelManager);
