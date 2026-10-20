// EncyclopediaController.cs — encyclopedia window: builds the item grid, progress and "new" badge counter.
import { Vector2, Instantiate, Destroy, SetSizeWithCurrentAnchors } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class EncyclopediaController extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.GBLDHHLDLAC = null;     // item prefab (GUIEncyclopediaItem)
    this.NIKODPNBBNC = null;     // Transform grid content
    this.CAOBCAHKPAP = null;     // Text title
    this.HEGBLDJJONJ = null;     // Image big icon
    this.ADFMGNIDOFE = null;     // Text damage / silver
    this.BMIGFIJBELD = null;     // Text description
    this.FCLDIHJBMIM = null;     // Sprite question mark (locked item)
    this.AAPPKNEOJLJ = null;     // RectTransform progress bar
    this.OECKPMNIMBL = null;     // Text "opened/total"
    this.OCLLOMGGNND = null;     // GameObject badge (new items)
    this.PCFJHDGGFJP = null;     // Text badge count
  }

  OnEnable() {
    if (!this.NIKODPNBBNC) return;
    for (const ch of [...this.NIKODPNBBNC]) Destroy(ch.gameObject);
    this.HPAFDOMPACP();
    const m = G.Main && G.Main.KECGFPHIEHF; if (!m) return;
    const order = m.NNMCBNGFPHF || [];   // CPFPFGOIDDO[] display order
    const list = m.NGBIFHJDNEC || [];    // Encyclopedia[]
    for (let i = 0; i < order.length; i++) {
      const id = order[i];
      let j = 0;
      for (; j < list.length; j++) { if (!list[j]) return; if (list[j].encyclopediaItem === id) break; }
      if (j >= list.length) continue;
      if (!this.GBLDHHLDLAC) continue;
      const go = Instantiate(this.GBLDHHLDLAC, this.NIKODPNBBNC);
      const it = go ? go.GetComponent(G.GUIEncyclopediaItem || 'GUIEncyclopediaItem') : null;
      if (!alive(it)) continue;
      const enc = list[j];
      it.BAMPGHJACCL = enc.encyclopediaItem;
      if (enc.status < 1) { if (it.DJAGPKMAACN) it.DJAGPKMAACN.sprite = this.FCLDIHJBMIM; }
      else {
        if (it.DJAGPKMAACN) it.DJAGPKMAACN.sprite = enc.icon;
        if (it.HCKDPJNCODA) it.HCKDPJNCODA.SetActive(enc.status === 1);
      }
      if (j === 0) it.ButtonShowItem(false); // [removed: gamepad selection]
    }
    const opened = G.Encyclopedia ? G.Encyclopedia.DFJMLAIHNDC(true) : 0;
    const total = list.length;
    if (this.OECKPMNIMBL) this.OECKPMNIMBL.text = opened < 1 ? opened + '/' + total : '<color=#78e938>' + opened + '</color>/' + total;
    if (this.AAPPKNEOJLJ && total > 0) SetSizeWithCurrentAnchors(this.AAPPKNEOJLJ, 0, (opened / total) * 232);
  }
  // reset grid scroll position
  HPAFDOMPACP() {
    if (this.NIKODPNBBNC) this.NIKODPNBBNC.anchoredPosition = new Vector2(0, 0);
  }
  // refresh "new items" badge
  FHBDLLGMOFN() {
    const n = G.Encyclopedia ? G.Encyclopedia.DFJMLAIHNDC(false) : 0;
    if (n < 1) { if (this.OCLLOMGGNND) this.OCLLOMGGNND.SetActive(false); return; }
    if (this.PCFJHDGGFJP) this.PCFJHDGGFJP.text = String(n);
    if (this.OCLLOMGGNND) this.OCLLOMGGNND.SetActive(true);
  }
}
define('EncyclopediaController', EncyclopediaController);
