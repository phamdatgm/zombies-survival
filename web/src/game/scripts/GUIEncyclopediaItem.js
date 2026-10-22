// GUIEncyclopediaItem.cs — one icon in the encyclopedia grid; shows its details in EncyclopediaController.
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { E } from '../enums.js';
import { T } from '../util.js';

const tr = (k) => { const t = G.Translate && G.Translate.KECGFPHIEHF; return t && t.JJJNIPAKLJF ? t.JJJNIPAKLJF(k) : T(k); };
const enumName = (en, v) => { for (const [k, x] of Object.entries(en || {})) if (x === v) return k; return String(v); };

export class GUIEncyclopediaItem extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.BAMPGHJACCL = 0;        // CPFPFGOIDDO item id
    this.DJAGPKMAACN = null;     // Image icon
    this.HCKDPJNCODA = null;     // GameObject "new" badge
  }

  // UI: show this item in the details panel (is_can_change_status: mark as seen in garage)
  ButtonShowItem(is_can_change_status) {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu)) return;
    const g = menu.ALPCPBBNEBA;
    if (!alive(g)) return;
    const enc = G.Encyclopedia ? G.Encyclopedia.EILIOBHFJNB(this.BAMPGHJACCL) : null;
    if (!enc || enc.status < 1) return;
    const ec = g.PIIFOJPCFOB; // EncyclopediaController
    if (!ec) return;
    const p = G.Main && G.Main.FBDDKIOEKDM;
    const lang = p ? p.KLKNEAIFCKG | 0 : 0;     // language index
    const key = enumName(E.CPFPFGOIDDO, this.BAMPGHJACCL).toUpperCase();
    if (ec.CAOBCAHKPAP) ec.CAOBCAHKPAP.text = tr(key + '_NAME');
    if (ec.BMIGFIJBELD) {
      if (this.BAMPGHJACCL === 12 && lang === 10) ec.BMIGFIJBELD.fontSize = 50;
      else if (ec.BMIGFIJBELD.fontSize !== 52) ec.BMIGFIJBELD.fontSize = 52;
    }
    let desc = tr(key + '_DESC');
    if (lang === 10 || lang === 11 || lang === 12) desc = String(desc).split(' ').join(''); // TODO(verify): CJK Replace(" ", "")
    if (ec.BMIGFIJBELD) ec.BMIGFIJBELD.text = desc;
    if (ec.HEGBLDJJONJ && this.DJAGPKMAACN) ec.HEGBLDJJONJ.sprite = this.DJAGPKMAACN.sprite;
    const t = ec.ADFMGNIDOFE;
    if (t) {
      t.text = tr('DAMAGE') + ': ' + enc.damage;
      if (enc.money > 0) t.text = t.text + '\n' + tr('SILVER') + ': ' + enc.money;
    }
    if (is_can_change_status && enc.status === 1 && p) p.CHGBPDAONOH(enc.encyclopediaItem, 2); // OpenedInRaceAndInGarage
    if (this.HCKDPJNCODA) {
      this.HCKDPJNCODA.SetActive(enc.status === 1);
      if (alive(g.PIIFOJPCFOB)) g.PIIFOJPCFOB.FHBDLLGMOFN();
    }
  }
}
define('GUIEncyclopediaItem', GUIEncyclopediaItem);
