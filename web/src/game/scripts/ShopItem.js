// ShopItem.cs — one upgrade (engine/wheels/gun/nitro/armor) or color slot in the garage shop.
// Display only: purchasing is done by GUIGarage (ButtonBuyUpgrade / ButtonColorPreview); IAP/ad paths there are removed.
import { Vector2, Vector3, Mathf, Color, Instantiate } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { T } from '../util.js';

const P = () => G.Main && G.Main.FBDDKIOEKDM;
const tr = (k) => { const t = G.Translate && G.Translate.KECGFPHIEHF; return t && t.JJJNIPAKLJF ? t.JJJNIPAKLJF(k) : T(k); };
const WHITE = () => new Color(1, 1, 1, 1);
// System.Math.Round (banker's rounding)
function roundHalfEven(x) {
  const r = Math.round(x);
  return Math.abs(x % 1) === 0.5 && r % 2 !== 0 ? r - 1 : r;
}

export class ShopItem extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.KGDFADICFPE = '';       // id string
    this.FHOFNGHGNGF = 0;        // MGACAOGOMPM upgrade type (engine=0 wheels=1 gun=2 nitro=3 armor=4)
    this.BDHDNGGBOFK = [];       // int[] base prices per level (or color price)
    this.BAEJPAILMIH = null;     // Text price
    this.POLBJBHIJFG = null;     // Image currency icon
    this.AGKKFNJDHJL = null;     // RectTransform progress bar fill
    this.EGFPPEFNCKK = null;     // GameObject (shown while highlighted on the top canvas)
    this.HPGCCPHOJDC = false;    // level dividers created
    this.HEGBLDJJONJ = null;     // Image (icon / color swatch)
    this.OJHMOHAHKDB = false;    // affordable
    this.AGGALPOCLFE = false;
    this.DNHICKODMLE = 0;        // EHKCLJKMBLO camera target (none/forward/back/wheels/doors)
    this.ELHBFIHEDOL = false;    // is color item
    this.EIGKFINFICB = 0;        // color id
    this.LFCGCCKHFJM = null;     // GameObject "selected color" mark
    this.PBIHJLDFIFP = 140;      // progress bar full width (.ctor)
    this.JPPFFPBMMDB = 15;       // progress bar height (.ctor)
    this.IMOLLLMPIMB = 68;       // half width for level dividers (.ctor)
  }

  // is premium (gold) price for level LGAALFBLPLP
  MLHKDEGPJGI(LGAALFBLPLP) {
    if (!this.ELHBFIHEDOL && this.FHOFNGHGNGF === 4) {
      if (this.BDHDNGGBOFK.length - 1 === LGAALFBLPLP) return true;
    }
    return !!this.ELHBFIHEDOL;
  }
  // max level
  EKBFKEBGGOP() { return this.BDHDNGGBOFK.length; }
  // price of level LGAALFBLPLP (rounded to 10)
  OKADMIPJHCA(LGAALFBLPLP) {
    if (this.BDHDNGGBOFK.length <= LGAALFBLPLP) return 0;
    const car = G.Car ? G.Car.Current : null;
    let v;
    if (!this.MLHKDEGPJGI(LGAALFBLPLP)) v = Math.trunc((car ? car.upgrades_coefficient : 1) * this.BDHDNGGBOFK[LGAALFBLPLP]);
    else if (!this.ELHBFIHEDOL) v = car ? car.upgrade_price_last_armor | 0 : 0;
    else v = this.BDHDNGGBOFK[LGAALFBLPLP] | 0;
    return Math.trunc(roundHalfEven(v * 0.1) * 10);
  }
  // current level (upgrade) / owned flag (color) for car HCBODNKILEA (-1 = current)
  HJICMDCENKN(HCBODNKILEA = -1) {
    if (HCBODNKILEA === -1) HCBODNKILEA = G.Main ? G.Main.LCFFGBBHMPH : 0;
    const p = P(); if (!p) return 0;
    const car = p.DKJLCJPBPPN(HCBODNKILEA, true);
    if (!car) return 0;
    if (!this.ELHBFIHEDOL) {
      if (car.KOEIPIDCBJE) return car.KOEIPIDCBJE[this.FHOFNGHGNGF] | 0;
      return car.IDOHKCCDGDG(this.FHOFNGHGNGF);
    }
    return car.CDFBHLPFLJF ? car.CDFBHLPFLJF[this.EIGKFINFICB] | 0 : 0;
  }
  // move to the top canvas (tutorial highlight) or back to its list
  BGNPJIHMIMI(FJDCALHGHCI) {
    const M = G.Menu && G.Menu.KECGFPHIEHF; const g = M && M.ALPCPBBNEBA;
    if (!g) return;
    if (FJDCALHGHCI) {
      if (g.IGGGGOCBLFF) this.transform.SetParent(g.IGGGGOCBLFF, true);
      if (alive(this.EGFPPEFNCKK)) this.EGFPPEFNCKK.SetActive(true);
      return;
    }
    const parent = this.transform.parent;
    if (!this.ELHBFIHEDOL) {
      if (!g.HIKLLDFIJNJ) return;
      if (parent !== g.HIKLLDFIJNJ.transform) this.transform.SetParent(g.HIKLLDFIJNJ.transform, true);
      if (alive(this.EGFPPEFNCKK)) this.EGFPPEFNCKK.SetActive(false);
    } else if (g.DCDCELBOOJK) {
      if (parent === g.DCDCELBOOJK.transform) return;
      this.transform.SetParent(g.DCDCELBOOJK.transform, true);
    }
  }
  _setCarColor() {
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(cc)) return;
    const cols = cc.GNDOHJDDLAG || []; // CarController.CarColor[]
    if (this.EIGKFINFICB < cols.length && cols[this.EIGKFINFICB] && this.HEGBLDJJONJ) {
      const c = cols[this.EIGKFINFICB].col_preview;
      if (c) this.HEGBLDJJONJ.color = new Color(c.r, c.g, c.b, c.a ?? 1);
    }
  }
  // refresh display (progress, price, colors)
  KGOOJPBMMBK() {
    const p = P(); const M = G.Menu && G.Menu.KECGFPHIEHF; const g = M && M.ALPCPBBNEBA;
    if (alive(this.AGKKFNJDHJL)) {
      const lv = this.HJICMDCENKN(-1);
      this.AGKKFNJDHJL.sizeDelta = new Vector2(this.PBIHJLDFIFP * (lv / this.BDHDNGGBOFK.length), this.JPPFFPBMMDB);
      if (!this.HPGCCPHOJDC) {
        const n = this.BDHDNGGBOFK.length;
        if (n > 1) {
          for (let i = 0; i < n - 1;) {
            if (!g || !g.OIDDCINIOLN) break;
            const d = Instantiate(g.OIDDCINIOLN, this.transform);
            const lp = d.transform.localPosition;
            i++;
            const f = Mathf.Clamp01(i / n);
            d.transform.localPosition = new Vector3(2 * this.IMOLLLMPIMB * f - this.IMOLLLMPIMB, lp.y, lp.z);
          }
          this.HPGCCPHOJDC = true;
        }
      }
    }
    if (this.ELHBFIHEDOL) {
      this._setCarColor();
      const car = p && p.DKJLCJPBPPN(-1, true);
      if (car && this.LFCGCCKHFJM) this.LFCGCCKHFJM.SetActive(this.EIGKFINFICB === car.BGFAMABFPHC());
      if (this.EIGKFINFICB < 1) { this.BGNPJIHMIMI(false); return; }
    }
    const car = p && p.DKJLCJPBPPN(-1, true);
    if (!car) {
      this.OJHMOHAHKDB = false;
      if (!this.ELHBFIHEDOL) { if (this.HEGBLDJJONJ) this.HEGBLDJJONJ.color = WHITE(); }
      else if (this.LFCGCCKHFJM) this.LFCGCCKHFJM.SetActive(false);
      if (this.BAEJPAILMIH) { this.BAEJPAILMIH.color = WHITE(); this.BAEJPAILMIH.text = '-'; } // TODO(verify): 1-char literal
    } else {
      if (this.ELHBFIHEDOL) this._setCarColor();
      const lv = this.HJICMDCENKN(-1);
      if (lv < this.BDHDNGGBOFK.length) {
        const free = this.ELHBFIHEDOL ? !!(M && M.POLNAJBPECM(this.EIGKFINFICB)) : !!(M && M.LDBOEHFLNFA(this));
        const icon = this.POLBJBHIJFG;
        if (!icon) return;
        let txt;
        if (!free) { icon.enabled = true; txt = String(this.OKADMIPJHCA(this.HJICMDCENKN(-1))); }
        else { icon.enabled = false; txt = String(tr('FREE_SHORT')).toUpperCase(); }
        if (this.BAEJPAILMIH) this.BAEJPAILMIH.text = txt;
        const prem = this.MLHKDEGPJGI(this.HJICMDCENKN(-1));
        if (g) icon.sprite = prem ? g.JFAFPOPHHGD : g.PILGKKBHOKH; // gold / silver icon
        const money = prem ? p.HPDEBBJNCIK() : p.LOCFCFJIAIH();
        const price = this.OKADMIPJHCA(this.HJICMDCENKN(-1));
        if (!(money < price && !free)) {
          if (!this.ELHBFIHEDOL) {
            if (!this.OJHMOHAHKDB && this.HEGBLDJJONJ) this.HEGBLDJJONJ.color = WHITE();
            this.OJHMOHAHKDB = true;
          }
          if (alive(this.BAEJPAILMIH)) this.BAEJPAILMIH.color = WHITE();
        } else {
          const nc = g && g.LOBHALACIBE ? g.LOBHALACIBE : new Color(1, 0.3, 0.3, 1); // "no money" color
          if (!this.ELHBFIHEDOL && this.HEGBLDJJONJ) this.HEGBLDJJONJ.color = nc;
          if (alive(this.BAEJPAILMIH)) this.BAEJPAILMIH.color = nc;
          this.OJHMOHAHKDB = false;
        }
        if (!this.MLHKDEGPJGI(this.HJICMDCENKN(-1)) && G.CarController) {
          const m = G.CarController.GLBOHAGOBFH | 0;
          const pr = this.OKADMIPJHCA(this.HJICMDCENKN(-1));
          if (m === 0 || pr < m) G.CarController.GLBOHAGOBFH = pr; // cheapest upgrade price
        }
        this.BGNPJIHMIMI(false);
        return;
      }
      // maxed out
      this.OJHMOHAHKDB = false;
      if (!this.ELHBFIHEDOL && this.HEGBLDJJONJ) this.HEGBLDJJONJ.color = WHITE();
      if (alive(this.BAEJPAILMIH)) { this.BAEJPAILMIH.color = WHITE(); this.BAEJPAILMIH.text = this.ELHBFIHEDOL ? '' : 'MAX'; }
    }
    if (this.POLBJBHIJFG) { this.POLBJBHIJFG.enabled = false; this.BGNPJIHMIMI(false); }
  }
}
define('ShopItem', ShopItem);
