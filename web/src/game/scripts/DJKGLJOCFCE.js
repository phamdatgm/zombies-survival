// DJKGLJOCFCE: per-level progress (sealed plain class; list DAFNMLEKHAD.CGPKBBJJHLK).
// Keys (ObscuredPrefs -> PlayerPrefs): "l<id>" result/stars, "l<id>t" best (time/points), "l<id>a" attempts,
// "l<id>cc" (cc), "l<id>e" (e), "l<id>er" (er flag), "l<id>t<taskType>" best task values.
import { PlayerPrefs } from '../../engine/unity.js';
import { G } from '../G.js';

const OP = PlayerPrefs;

export class DJKGLJOCFCE {
  static ACFBFMABHIH = 't';
  static OHBCLFMMAEB = 'a';
  static JMGELAEGBNK = 'cc';
  static KGFDFPMGNMG = 'e';
  static FKIAJEEAFJC = 'er';

  constructor(GDJDPNDHBNN) {
    this.AKLCKKPELBF = GDJDPNDHBNN.id;  // level id
    this.ONBPMGJNDOC = 0;               // result (stars/progress, ObscuredInt); >0 = completed
    this.OKKCFECENJB = 0;               // best value (time or points, ObscuredInt)
    this.ALIHDAANEPI = 0;               // attempts
    this.JOAGKFCNAEO = 0;               // cc
    this.CDKNLJKPANL = null;            // LevelTasks[] best task values
    this.LAAAPNLMDIE(GDJDPNDHBNN);
  }

  // properties
  get BLOECJHMGGC() { return this.AKLCKKPELBF; }

  LAAAPNLMDIE(GDJDPNDHBNN) {
    if (OP.HasKey(this.POOODOJHMMJ())) {
      this.ONBPMGJNDOC = OP.GetInt(this.POOODOJHMMJ(), 0);
      this.OKKCFECENJB = OP.GetInt(this.OEOONPINEJA(), 0);
      if (OP.HasKey(this.KACBPKKHMLH())) this.JOAGKFCNAEO = OP.GetInt(this.KACBPKKHMLH(), 0);
    }
    if (OP.HasKey(this.DLOKHEPHLGI())) this.ALIHDAANEPI = OP.GetInt(this.DLOKHEPHLGI(), 0);
    if (GDJDPNDHBNN && GDJDPNDHBNN.tasks) {
      this.CDKNLJKPANL = new Array(GDJDPNDHBNN.tasks.length);
      for (let i = 0; i < GDJDPNDHBNN.tasks.length; i++) {
        const t = new G.LevelTasks();
        this.CDKNLJKPANL[i] = t;
        t.type = GDJDPNDHBNN.tasks[i].type;
        if (OP.HasKey(this.CNLCNMMMOFD(t.type))) t.count = OP.GetInt(this.CNLCNMMMOFD(t.type), 0);
      }
      if (GDJDPNDHBNN.IsTutorial && this.ONBPMGJNDOC > 0) {
        const c = G.Main.FBDDKIOEKDM && G.Main.FBDDKIOEKDM.DKJLCJPBPPN(0, true);
        if (c) {
          if (c.IDOHKCCDGDG(3) < 5) c.CMFJICHIMAH(3, 5);  // nitro
          if (c.IDOHKCCDGDG(4) < 5) c.CMFJICHIMAH(4, 5);  // armor
        }
      }
    }
  }

  // ---- keys
  POOODOJHMMJ() { return 'l' + String(this.AKLCKKPELBF); }
  OEOONPINEJA() { return this.POOODOJHMMJ() + 't'; }
  DLOKHEPHLGI() { return this.POOODOJHMMJ() + 'a'; }
  BKFGIBHDOPJ() { return this.POOODOJHMMJ() + 'er'; }
  NJNIFJANINE() { return this.POOODOJHMMJ() + 'e'; }
  KACBPKKHMLH() { return this.POOODOJHMMJ() + 'cc'; }
  CNLCNMMMOFD(GMDNJGNAAFG) { return this.POOODOJHMMJ() + 't' + String(GMDNJGNAAFG); }

  // ---- values
  HLMOBDGNAKK() { return this.AKLCKKPELBF; }                  // level id
  NIDLADCDMOH() { return this.ONBPMGJNDOC; }                  // result (stars)
  MHHDNMHEMKH(ALLBGCHDGNC) { this.ONBPMGJNDOC = ALLBGCHDGNC | 0; OP.SetInt(this.POOODOJHMMJ(), this.ONBPMGJNDOC); }
  MCDLFBJCNNA() { return this.ONBPMGJNDOC > 0; }              // completed
  DLEPICFCEEG() { return this.OKKCFECENJB; }                  // best time/points
  FCGMALHHOJK(ALLBGCHDGNC) { this.OKKCFECENJB = ALLBGCHDGNC | 0; OP.SetInt(this.OEOONPINEJA(), this.OKKCFECENJB); }
  BENNLMFLFMH() { return this.ALIHDAANEPI; }                  // attempts
  PHPLFEHCLJH(ALLBGCHDGNC) { this.ALIHDAANEPI = ALLBGCHDGNC | 0; OP.SetInt(this.DLOKHEPHLGI(), this.ALIHDAANEPI); }
  IHNJILKCLEL() { return this.JOAGKFCNAEO; }                  // cc
  JLPGAJDGPGG(ALLBGCHDGNC) { this.JOAGKFCNAEO = ALLBGCHDGNC | 0; OP.SetInt(this.KACBPKKHMLH(), this.JOAGKFCNAEO); }
  EDAGFIGCPAE() { return OP.GetInt(this.BKFGIBHDOPJ(), 0) === 1; }   // er flag
  GEBLPKOKIDF(ALLBGCHDGNC) { OP.SetInt(this.BKFGIBHDOPJ(), ALLBGCHDGNC ? 1 : 0); }
  EECPDELFCIL() { return OP.GetInt(this.NJNIFJANINE(), 0); }         // e value
  OKJBPIKMAPJ(ALLBGCHDGNC) { OP.SetInt(this.NJNIFJANINE(), ALLBGCHDGNC | 0); }

  // best value of a task type
  HPCKHLLBFPL(FHOFNGHGNGF) {
    let r = 0;
    for (const t of this.CDKNLJKPANL) if (t.type === FHOFNGHGNGF) r = t.count;
    return r;
  }
  // store a better task value
  PIGJGOGBEPF(FHOFNGHGNGF, BEPBGMKPPJK) {
    if (BEPBGMKPPJK <= 0 || this.HPCKHLLBFPL(FHOFNGHGNGF) >= BEPBGMKPPJK) return;
    for (const t of this.CDKNLJKPANL) {
      if (t.type === FHOFNGHGNGF) { t.count = BEPBGMKPPJK; OP.SetInt(this.CNLCNMMMOFD(FHOFNGHGNGF), t.count); return; }
    }
    G.Main.EEKNCFLMGDP('SetTaskValue error: ' + String(FHOFNGHGNGF));
  }
}
G.DJKGLJOCFCE = DJKGLJOCFCE;
