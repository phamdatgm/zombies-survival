// Achievement: achievement definition + its garage GUI logic (plain [Serializable] class; list Main.HEIGOLFEAHJ).
// Status is kept in the profile (DAFNMLEKHAD.DIIIMGJMPPI: 1 = completed, 2 = reward claimed).
import { SetSizeWithCurrentAnchors } from '../../engine/unity.js';
import { alive } from '../base.js';
import { G } from '../G.js';

const setText = (t, s) => { if (t) t.text = s; };
const setActive = (go, b) => { if (go) (go.gameObject || go).SetActive(!!b); };

export class Achievement {
  constructor(o) {
    this.id = 0;              // KKMHKJEGDLA
    this.GPGSID = null;       // Google Play id (unused)
    this.GCID = null;         // Game Center id (unused)
    this.current_count = 0;
    this.count = 0;           // target
    this.reward = 0;          // gold reward
    this._gui = null;         // GUIAchievement
    if (o) Object.assign(this, o);
  }

  get gui() {
    if (!alive(this._gui)) {
      const menu = G.Menu && G.Menu.KECGFPHIEHF;
      const gg = menu && menu.ALPCPBBNEBA;
      const arr = gg && gg.OEBHPCMKCAL;
      if (arr) for (const g of arr) { if (alive(g) && g.HKGEOJPHLAN === this.id) { this._gui = g; break; } }
    }
    return this._gui;
  }

  // claim reward (NNILIIJJPAK: doubled by watching an ad -> +50%)
  GFAPHIEIMFM(NNILIIJJPAK) {
    const prof = G.Main.FBDDKIOEKDM;
    if (prof.OFOJMCJAGFD(this.id)) return;
    prof.EBANJKOABAL(this.id, 2);
    let half = (this.reward / 2) | 0;
    if (!NNILIIJJPAK) half = 0;
    prof.DIMKKHJDHFJ(half + this.reward + prof.AAOCOGMIAHM);
    G.SoundScript.GIGBLEBBIEK(G.SoundScript.CIMAPDEBGGG);
    const menu = G.Menu.KECGFPHIEHF;
    if (!menu) return;
    menu.KLGOLHHGBKP();
    // [removed: analytics]
    if (menu.ALPCPBBNEBA) menu.ALPCPBBNEBA.MAKGMMFFGPG();
  }

  // GUI refresh (FJJAPMGNMKC: completed)
  PAJCJMENMMI(FJJAPMGNMKC) {
    const gui = this.gui;
    if (!alive(gui)) return;
    const claimed = FJJAPMGNMKC ? G.Main.FBDDKIOEKDM.OFOJMCJAGFD(this.id) : false;
    setText(gui.JHNGOGLIHFK, String(this.reward));
    setActive(gui.OLIFKKJBDCC, claimed && FJJAPMGNMKC);
    setActive(gui.ELBNMDEPPPH, !claimed);
    if (!claimed && FJJAPMGNMKC) {
      // [removed: ads] AdvController.HNDMJBICLJF(3) (rewarded "x1.5" claim button) -> never available
      const adv = false;
      setActive(gui.IIPDPHGEIHD, !adv);
      setActive(gui.AIJPCKKCFLL, adv);
      setActive(gui.DONPFEBKFPL, false);
    } else {
      setActive(gui.IIPDPHGEIHD, false);
      setActive(gui.AIJPCKKCFLL, false);
      setActive(gui.DONPFEBKFPL, true);
    }
    this._progress();
  }
  _progress() {
    const gui = this.gui;
    if (!gui || !gui.JDPIDMFCMNB) return;
    const f = this.current_count / this.count;
    let w = Math.min(f, 1.0) * 689.0;
    if (f < 0.0) w = 0.0;
    SetSizeWithCurrentAnchors(gui.JDPIDMFCMNB, 0, w);
    setText(gui.BJEIFCMEHFK, String(this.current_count) + '/' + String(this.count));
  }

  // console targets
  MAMIHJCBDBD() {
    if (!this.ABKANHONENG()) return;
    switch (this.id) {
      case 1: this.count = 1; break;
      case 2: case 3: this.count = 3; break;
      case 4: this.count = 6; break;
      case 5: this.count = 2; break;
      case 8: this.count = 1000; break;
      case 9: this.count = 2500; break;
      default: break;
    }
  }
  // console platform (BridgePHP.sn 8,9,12,13)
  ABKANHONENG() {
    const sn = typeof (G.BridgePHP && G.BridgePHP.sn) === 'number' ? G.BridgePHP.sn : 0;
    return sn === 8 || sn === 9 || sn === 12 || sn === 13;
  }

  // compute progress and refresh GUI
  PPHJGAMIKLM() {
    this.MAMIHJCBDBD();
    this.current_count = 0;
    const prof = G.Main.FBDDKIOEKDM;
    const main = G.Main.KECGFPHIEHF;
    let done = false;
    const shop = () => { const m = G.Menu && G.Menu.KECGFPHIEHF; return (m && m.ALPCPBBNEBA && m.ALPCPBBNEBA.OFEKNLMPBPH) || []; };
    switch (this.id) {
      case 0: {   // FIRST_LVL
        const p = prof.PJDAAMCNMHJ(0);
        if (p && p.NIDLADCDMOH() > 0) { this.current_count = 1; done = true; }
        break;
      }
      case 1: case 2: case 3: case 4: case 5: {
        if (this.ABKANHONENG() && this.id === 1) {
          this.current_count = 0;
          let any = false;
          for (let c = 0; c < main.GDPCMIGAPOM.length && !any; c++) {
            if (!prof.DKJLCJPBPPN(c, true)) continue;
            for (const it of shop()) {
              if (it.ELHBFIHEDOL && it.EIGKFINFICB > 0 && it.HJICMDCENKN(c) !== 0) { any = true; this.current_count = 1; break; }
            }
          }
          if (any) { this.PCJAFFALGCM(); return this._texts(); }
          break;
        }
        this.current_count = prof.BHMFJBCOKOA(this.id);
        if (this.current_count >= this.count) { this.PCJAFFALGCM(); return this._texts(); }
        break;
      }
      case 6: {   // ANY_LVL_3_STARS
        for (const l of main.IHPBACJOJMA) {
          const p = prof.PJDAAMCNMHJ(l.id);
          if (p && p.NIDLADCDMOH() > 0 && l.MNPHCGOJNCN() === 3) { this.current_count = 1; done = true; break; }
        }
        break;
      }
      case 7: {   // UPGRADE_ANY_CAR
        for (let c = 1; c < main.GDPCMIGAPOM.length; c++) {
          if (!prof.DKJLCJPBPPN(c, true)) continue;
          let full = true;
          for (const it of shop()) {
            if (!it.ELHBFIHEDOL && it.HJICMDCENKN(c) < it.EKBFKEBGGOP()) { full = false; break; }
          }
          if (full) { this.current_count = 1; done = true; break; }
        }
        break;
      }
      case 8:     // GRAND_TOTAL_POINTS -> total stars
        this.current_count = prof.ADDNPHMAFBA();
        if (this.current_count >= this.count) { this.PCJAFFALGCM(); return this._texts(); }
        break;
      case 9: {   // ALL_STARS
        if (this.ABKANHONENG()) {
          this.current_count = prof.ADDNPHMAFBA();
          if (this.current_count >= this.count) { this.PCJAFFALGCM(); return this._texts(); }
          break;
        }
        let all = true;
        for (const l of main.IHPBACJOJMA) if (!l.IsEvent && l.MNPHCGOJNCN() !== 3) { all = false; break; }
        if (all) { this.current_count = 1; done = true; }
        break;
      }
      default: break;
    }
    if (done) this.PCJAFFALGCM();
    else this.PAJCJMENMMI(false);
    this._texts();
  }
  _texts() {
    if (!alive(this._gui)) return;
    const tr = G.Translate && G.Translate.KECGFPHIEHF;
    if (!alive(tr)) return;
    if (alive(this._gui.OIGEBFODLLH)) this._gui.OIGEBFODLLH.text = tr.JJJNIPAKLJF(this._gui.GDLHJGFGDNO).replace('[x]', String(this.count));
    if (alive(this._gui.JDCEFHEPHNK)) this._gui.JDCEFHEPHNK.text = tr.JJJNIPAKLJF('REWARD') + ':';   // TODO(verify): 1-char suffix literal
  }

  // mark completed
  PCJAFFALGCM() {
    const prof = G.Main.FBDDKIOEKDM;
    if (!prof.HIFFBAOPBGD(this.id) && !prof.OFOJMCJAGFD(this.id)) {
      prof.EBANJKOABAL(this.id, 1);
      // [removed: server] BridgePHP.UnlockAchievement(GPGSID)
    }
    this.PAJCJMENMMI(true);
  }
}
G.Achievement = Achievement;
