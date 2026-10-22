// GUIAchievement.cs — one row of the achievements window (filled by Achievement.PPHJGAMIKLM).
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class GUIAchievement extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.HKGEOJPHLAN = 0;        // KKMHKJEGDLA achievement id
    this.OIGEBFODLLH = null;     // Text title
    this.GDLHJGFGDNO = '';       // translate key
    this.ELBNMDEPPPH = null;     // GameObject
    this.JDCEFHEPHNK = null;     // Text
    this.JHNGOGLIHFK = null;     // Text
    this.EBCLENJBNPJ = null;     // Image
    this.OLIFKKJBDCC = null;     // GameObject
    this.DONPFEBKFPL = null;     // GameObject
    this.JDPIDMFCMNB = null;     // RectTransform progress
    this.BJEIFCMEHFK = null;     // Text
    this.IIPDPHGEIHD = null;     // GameObject claim button
    this.AIJPCKKCFLL = null;     // GameObject rewarded claim button
    this.GHPCKOOLEHB = null;     // Text
    this.AMKHPKONHIB = null;     // Image
  }

  // UI: claim the achievement reward (gold)
  ButtonAchievementClaim() {
    const m = G.Main && G.Main.KECGFPHIEHF; const p = G.Main && G.Main.FBDDKIOEKDM;
    if (!m) return;
    for (const a of m.HEIGOLFEAHJ || []) {
      if (!a) return;
      if (this.HKGEOJPHLAN !== a.id) continue;
      if (!p) return;
      if (p.OFOJMCJAGFD(a.id)) return;      // already claimed
      p.EBANJKOABAL(a.id, 2);               // mark claimed
      p.DIMKKHJDHFJ((a.reward | 0) + p.HPDEBBJNCIK()); // add gold
      const S = G.SoundScript; if (S && S.GIGBLEBBIEK) S.GIGBLEBBIEK(S.CIMAPDEBGGG);
      const menu = G.Menu && G.Menu.KECGFPHIEHF;
      if (menu) {
        menu.KLGOLHHGBKP();
        // [removed: analytics]
        if (menu.ALPCPBBNEBA) menu.ALPCPBBNEBA.MAKGMMFFGPG();
      }
      return;
    }
  }
  // UI: claim x1.5 after a rewarded ad → [removed: ads] reward is given directly
  ButtonAchievementRewarded() {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu)) return;
    menu.CGHGJEECHDM = this.HKGEOJPHLAN;
    menu.EIABBDMGLHD();
  }
}
define('GUIAchievement', GUIAchievement);
