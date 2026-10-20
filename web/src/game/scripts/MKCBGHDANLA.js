// MKCBGHDANLA: per-car progress (sealed plain class; list DAFNMLEKHAD.MMIIDHNKPDO).
// Keys (ObscuredPrefs -> PlayerPrefs): "c<id>_hp" current hp, "c<id>_col" color, "c<id>_<type>" upgrade level
// (MGACAOGOMPM engine/wheels/gun/nitro/armor), "c<id>_cb<i>" bought color flags.
import { PlayerPrefs } from '../../engine/unity.js';
import { alive } from '../base.js';
import { G } from '../G.js';

const OP = PlayerPrefs;
const TYPE_NAMES = ['engine', 'wheels', 'gun', 'nitro', 'armor'];

export class MKCBGHDANLA {
  static PENKFDDIBGP = 'hp';
  static HKIEPHMCBEI = 'col';
  static AHJDJNPKDIN = 'cb';

  constructor(HCBODNKILEA) {
    this.LPJNKBODDNF = -1;               // current hp (-1 = full)
    this.MHBIDDBOEJD = 0;                // selected color
    this.KOEIPIDCBJE = [0, 0, 0, 0, 0];  // upgrade levels per MGACAOGOMPM
    this.CDFBHLPFLJF = [0, 0, 0, 0, 0];  // bought colors
    this.NDLELHGPFKO = HCBODNKILEA;      // car id
    this.LAAAPNLMDIE();
  }

  // properties
  get JEMEKCMDCND() { return this.NDLELHGPFKO; }
  get PLGHBAAPKBM() { return this.LPJNKBODDNF; }
  set PLGHBAAPKBM(v) { this.DDPLLMLFICC(v); }
  get EEJGEOOMOCM() { return this.MHBIDDBOEJD; }
  set EEJGEOOMOCM(v) { this.EJLALLODBKM(v); }

  IIGHKMHDJNH() { return this.NDLELHGPFKO; }   // car id

  // ---- keys
  FKDNILOCFBC(HFPLBIFMBPH) { return 'c' + String(this.NDLELHGPFKO) + '_' + String(HFPLBIFMBPH); }
  KNJMKLLCKEK() { return 'c' + String(this.NDLELHGPFKO) + '_hp'; }
  MIKFNEELEFE() { return 'c' + String(this.NDLELHGPFKO) + '_col'; }
  NDCGHMCJLPF(EIGKFINFICB) { return 'c' + String(this.NDLELHGPFKO) + '_cb' + String(EIGKFINFICB); }

  LAAAPNLMDIE() {
    if (OP.HasKey(this.KNJMKLLCKEK())) this.LPJNKBODDNF = OP.GetInt(this.KNJMKLLCKEK(), 0);
    if (OP.HasKey(this.MIKFNEELEFE())) this.MHBIDDBOEJD = OP.GetInt(this.MIKFNEELEFE(), 0);
    for (let i = 1; i < this.CDFBHLPFLJF.length; i++) {
      if (OP.HasKey(this.NDCGHMCJLPF(i))) this.CDFBHLPFLJF[i] = OP.GetInt(this.NDCGHMCJLPF(i), 0);
    }
    for (let i = 0; i < this.KOEIPIDCBJE.length; i++) {
      const id = this.NDLELHGPFKO;
      if ((i !== 3 && id === 12) || id === 11 || (i !== 3 && id === 0)) {
        const menu = G.Menu && G.Menu.KECGFPHIEHF;
        if (alive(menu) && alive(menu.ALPCPBBNEBA)) this.FLFBPCJNJHP(i);
      }
      if (i === 4 && this.NDLELHGPFKO === 0) this.KOEIPIDCBJE[4] = 4;
      const key = this.FKDNILOCFBC(i);
      const has = OP.HasKey(key);
      if (this.NDLELHGPFKO === 1) {
        if (!has || OP.GetInt(key, 0) < 2) this.KOEIPIDCBJE[i] = 1;
        else this.KOEIPIDCBJE[i] = OP.GetInt(key, 0);
      } else if (has) this.KOEIPIDCBJE[i] = OP.GetInt(key, 0);
    }
  }

  // set upgrade to the max level of the (non premium) garage shop item of that type
  FLFBPCJNJHP(HKGEOJPHLAN) {
    const items = G.Menu.KECGFPHIEHF.ALPCPBBNEBA.OFEKNLMPBPH;
    if (!items) return;
    for (const it of items) {
      if (!it.ELHBFIHEDOL && it.FHOFNGHGNGF === HKGEOJPHLAN) this.KOEIPIDCBJE[HKGEOJPHLAN] = it.EKBFKEBGGOP();
    }
  }

  // ---- upgrades
  IDOHKCCDGDG(FHOFNGHGNGF) { return this.KOEIPIDCBJE[FHOFNGHGNGF]; }                // upgrade level
  CMFJICHIMAH(FHOFNGHGNGF, BFGICMFMMIE) {                                           // set upgrade level (+ refresh hp)
    this.KOEIPIDCBJE[FHOFNGHGNGF] = BFGICMFMMIE | 0;
    OP.SetInt(this.FKDNILOCFBC(FHOFNGHGNGF), this.KOEIPIDCBJE[FHOFNGHGNGF]);
    this.DDPLLMLFICC(-1);
    G.Main.GEMDEAMAGPG('BuyUpgrade: ' + TYPE_NAMES[FHOFNGHGNGF] + ' = ' + this.KOEIPIDCBJE[FHOFNGHGNGF] + ' and refresh HP');
  }
  IFGGBDCPJDF(FHOFNGHGNGF) {                                                        // upgrade +1 (+ refresh hp)
    this.KOEIPIDCBJE[FHOFNGHGNGF]++;
    OP.SetInt(this.FKDNILOCFBC(FHOFNGHGNGF), this.KOEIPIDCBJE[FHOFNGHGNGF]);
    this.DDPLLMLFICC(-1);
    G.Main.GEMDEAMAGPG('BuyUpgrade: ' + TYPE_NAMES[FHOFNGHGNGF] + ' = ' + this.KOEIPIDCBJE[FHOFNGHGNGF] + ' and refresh HP');
  }
  ACDFKIBBJGP(FHOFNGHGNGF) {                                                        // remove upgrade
    this.KOEIPIDCBJE[FHOFNGHGNGF] = 0;
    OP.SetInt(this.FKDNILOCFBC(FHOFNGHGNGF), 0);
    G.Main.GEMDEAMAGPG('RemoveUpgrade: ' + TYPE_NAMES[FHOFNGHGNGF] + ' = ' + this.KOEIPIDCBJE[FHOFNGHGNGF]);
  }
  // all upgrades to the shop max
  KFALLEFKLJL() {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu) || !alive(menu.ALPCPBBNEBA)) { G.Main.EEKNCFLMGDP('Error in FullUpgrade. Car: ' + this.NDLELHGPFKO); return; }
    const items = menu.ALPCPBBNEBA.OFEKNLMPBPH || [];
    for (const it of items) {
      if (it.ELHBFIHEDOL) continue;
      const t = it.FHOFNGHGNGF;
      this.KOEIPIDCBJE[t] = it.EKBFKEBGGOP();
      OP.SetInt(this.FKDNILOCFBC(t), this.KOEIPIDCBJE[t]);
      G.Main.GEMDEAMAGPG('BuyUpgrade: ' + TYPE_NAMES[t] + ' = ' + this.KOEIPIDCBJE[t] + ' and refresh HP');
    }
    this.DDPLLMLFICC(-1);
    G.Main.GEMDEAMAGPG('FullUpgrade car: ' + this.NDLELHGPFKO);
  }

  // ---- hp
  EAEAJMKGDPD() { return this.LPJNKBODDNF; }
  DDPLLMLFICC(ALLBGCHDGNC) { this.LPJNKBODDNF = ALLBGCHDGNC | 0; OP.SetInt(this.KNJMKLLCKEK(), this.LPJNKBODDNF); }

  // ---- colors
  BGFAMABFPHC() { return this.MHBIDDBOEJD; }                                         // selected color
  EJLALLODBKM(ALLBGCHDGNC) { this.MHBIDDBOEJD = ALLBGCHDGNC | 0; OP.SetInt(this.MIKFNEELEFE(), this.MHBIDDBOEJD); }
  KLAHDEDHJOD(EIGKFINFICB) { return this.CDFBHLPFLJF[EIGKFINFICB]; }                 // color bought flag
  LPHCCLPECIA(EIGKFINFICB) {                                                          // buy color (+ refresh hp)
    if (EIGKFINFICB === 0) return;
    this.CDFBHLPFLJF[EIGKFINFICB] = 1;
    OP.SetInt(this.NDCGHMCJLPF(EIGKFINFICB), 1);
    this.DDPLLMLFICC(-1);
    G.Main.GEMDEAMAGPG('BuyColor: ' + EIGKFINFICB + ' + and refresh HP');
  }
  CFMKDKAGFMA(EIGKFINFICB) {                                                          // remove color
    if (EIGKFINFICB === 0) return;
    this.CDFBHLPFLJF[EIGKFINFICB] = 0;
    OP.SetInt(this.NDCGHMCJLPF(EIGKFINFICB), 0);
    G.Main.GEMDEAMAGPG('RemoveColor: ' + EIGKFINFICB + ' + and refresh HP');
  }

  // is this car the given id (-1 -> selected level id; id 0 also matches car 1)
  JOEMNOABHDF(OKADKPBGELG = -1) {
    if (OKADKPBGELG === -1 && G.Main.NMDEEOMHAGP) OKADKPBGELG = G.Main.NMDEEOMHAGP.id;
    return this.NDLELHGPFKO === OKADKPBGELG || (OKADKPBGELG === 0 && this.NDLELHGPFKO === 1);
  }
}
G.MKCBGHDANLA = MKCBGHDANLA;
