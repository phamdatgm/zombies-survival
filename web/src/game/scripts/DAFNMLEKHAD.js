// DAFNMLEKHAD: player profile / save game (sealed plain class, instance in Main.FBDDKIOEKDM).
// Persistence: PlayerPrefs (localStorage). ACTk ObscuredPrefs / ObscuredInt are mapped to plain PlayerPrefs ints with the
// same short keys (no encryption). DateTime values are JS Date objects; they are stored as millisecond strings
// (DAFNMLEKHAD.DateToString / DAFNMLEKHAD.ParseDate replace DateTime.ToString() / DateTime.ParseExact(s,"G")).
// Removed: cloud save/restore (BridgePHP), device-id lock, analytics, notifications, GDPR prompts (flag kept only).
import { PlayerPrefs } from '../../engine/unity.js';
import { alive } from '../base.js';
import { G } from '../G.js';
import { E } from '../enums.js';

const DATE_MIN = new Date(-62135596800000); // DateTime.MinValue (0001-01-01)

// ObscuredPrefs replacement (same keys, plain values)
const OP = {
  HasKey: (k) => PlayerPrefs.HasKey(k),
  GetInt: (k, d = 0) => PlayerPrefs.GetInt(k, d),
  SetInt: (k, v) => PlayerPrefs.SetInt(k, v | 0),
  GetString: (k, d = '') => PlayerPrefs.GetString(k, d),
  SetString: (k, v) => PlayerPrefs.SetString(k, v == null ? '' : String(v)),
  DeleteKey: (k) => PlayerPrefs.DeleteKey(k),
  DeleteAll: () => PlayerPrefs.DeleteAll(),
};

export class DAFNMLEKHAD {
  // ---- const key strings
  static NGBPHICMCGJ = 'ifsync';
  static ADKBKDCCPFD = 'n';       // nickname
  static PABGKILEEHM = 's';       // silver
  static NOJNIMEMDMA = 'g';       // gold
  static PNHDCGOPIGJ = 'f';       // fuel
  static KAMCHEKNEAI = 'ft';      // fuel timer start time
  static EJOCFDPOBGJ = 'fut';     // infinite fuel until
  static PEPHEALMCHE = 'c';       // car prefix
  static GFNOOCJLKCH = 'is';      // sound on
  static PPHPALDHJPE = 'im';      // music on
  static ANAPDJKADEL = 'fps';     // show fps
  static GMPJCAHNPGJ = 'islogs';  // debug logs
  static DGGKBJPJLNA = 'in';      // notifications
  static GIPLDCDBECP = 'ia';      // (ia) accelerometer/tilt flag
  static HAKDPJODHNH = 'gfx';     // graphics quality (DHLBGHCGAKB)
  static EJDGDOHIFDN = 'lang';    // language index
  static JOKADFHGNPN = 'ifs';     // is first start
  static EIAGPBGGACB = 'itc';     // tutorial/consent flag
  static KFKCKHIMJHD = 'itc2';
  static KNJIMPEDGHM = 'fst';     // first start time
  static BGLDHKEKLCA = 'sd';
  static AGIKAGGMHJB = 'so1';
  static JJCMCIFOBNC = 'idi';
  static BOGLBKHFDCO = 'rm';
  static AOPMKNKDDNF = 'grt';     // (rate/gift) time
  static EICHDAACBDA = 'urt';     // reward time
  static NEPKEKFJCPL = 'uri';     // reward index
  static IAOAAPMMHLO = 'urc';     // reward count
  static GDDOCMBLIBC = 'h';       // gameplay hint prefix
  static GNOHAMCBGDJ = 'a';       // achievement prefix
  static IPPKMKMEEFB = 'lrt';     // last run time
  static HKGHEOHLIKC = 'gdpr';
  static DJBMAFHHFCA = 'lc';      // last selected car
  static HKFFIOLONEP = 'st';      // story level reached
  static KONLLMPAHOE = 'e';       // encyclopedia prefix
  static BFEAFHAGCAH = 'xbox_sid';
  static IEOHLDBMIFH = 'xbox_ach_count';

  // ---- helpers (web port)
  static DateMinValue = DATE_MIN;
  static OP = OP;
  static DateToString(d) { return String((d instanceof Date ? d : new Date(d)).getTime()); }
  static ParseDate(s, d = DATE_MIN) {
    if (s instanceof Date) return new Date(s.getTime());
    if (s == null || s === '') return d;
    if (/^-?\d+$/.test(String(s))) return new Date(Number(s));
    const t = Date.parse(s); return isNaN(t) ? d : new Date(t);
  }

  constructor() {
    this.NBOMPJEGJMP = 0;           // (int, not saved)
    this.CDKFEFCGMKE = 0;           // (int, not saved)
    this.GBPIMCGLBAL = 0;           // ifsync: first cloud sync done
    this.DIKNHCJJBBC = 'Player';    // nickname
    this.AEOJLBHCMCL = 0;           // silver (ObscuredInt)
    this.AAOCOGMIAHM = 0;           // gold (ObscuredInt)
    this.BEIOJNMMDND = -1;          // fuel (ObscuredInt, -1 = default 24)
    this.PCKHLOCJBLM = '';          // fuel timer start (ObscuredString date)
    this.EHAJKCIJCGH = DATE_MIN;    // infinite fuel until (DateTime)
    this.IPJNALDBICI = 1;           // sound on
    this.JMMNLKMAMGJ = 1;           // music on
    this.KFMMJJANOGL = 0;           // fps counter
    this.IMHJHDBBMNF = 0;           // debug logs
    this.HDLOJBHJCEJ = 1;           // notifications
    this.DOKCBJEMPNO = 0;           // ia
    this.CFDECDNFGJN = 1;           // gfx quality (DHLBGHCGAKB HIGH)
    this.KLKNEAIFCKG = -1;          // language index (-1 = auto)
    this.HIGKKJPDMOC = 1;           // is first start
    this.AKFPBBLMIKD = new Date();  // first start time
    this.HCBEHNHJMOE = 0;           // itc
    this.HMNOHEJNPPG = 0;           // itc2
    this.MJPFHEFLMAJ = 0;           // sd (ObscuredInt)
    this.INKPGPKENGH = 0;           // so1
    this.EOAPCJNDJAI = 0;           // idi (ObscuredInt)
    this.PKPKEMMBPNB = 0;           // rm
    this.PGBNIOHMLDH = DATE_MIN;    // grt
    this.LFDLEOGMMAK = DATE_MIN;    // urt
    this.LDGCNFIOIOL = -1;          // uri
    this.JOOCICMEJAC = 0;           // urc
    this.FFPNODOKENB = new Date();  // lrt
    this.GMAHFEHGNKL = 1;           // gdpr accepted
    this.JNEIJLEGHEF = 12;          // last car
    this.ADABKJOKCFG = 0;           // st
    this.ILJHJIFHNKC = null;        // temporary event car progress (MKCBGHDANLA)
    this.MMIIDHNKPDO = [];          // List<MKCBGHDANLA> owned cars
    this.CGPKBBJJHLK = [];          // List<DJKGLJOCFCE> level progress
    this.OBKKDAGBGNN = [];          // List<GUIGameplay.POFCDOMOIBH> shown hints
    this.DIIIMGJMPPI = new Map();   // Dictionary<KKMHKJEGDLA,int> achievement status (0 none,1 done,2 claimed)
    this.INDFNDHLNML = new Map();   // Dictionary<KKMHKJEGDLA,int> achievement counters
  }

  // ======================================================== simple getters / setters
  PJFLNCNNKCP() { return this.NBOMPJEGJMP; }
  CKJLNDAOKFC(ALLBGCHDGNC) { this.NBOMPJEGJMP = ALLBGCHDGNC; }
  CIICAAFNPBB() { return this.CDKFEFCGMKE; }
  BDCGLLCPKMK(ALLBGCHDGNC) { this.CDKFEFCGMKE = ALLBGCHDGNC; }

  LFPAENMPMDF() { return this.GBPIMCGLBAL === 1; }                       // is first sync
  AIDICNFBHKK(ALLBGCHDGNC) { this.GBPIMCGLBAL = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('ifsync', this.GBPIMCGLBAL); }

  MAIJGLMACBD() { return this.DIKNHCJJBBC; }                             // nickname
  EMADJEPNIKK(ALLBGCHDGNC) { this.DIKNHCJJBBC = ALLBGCHDGNC; PlayerPrefs.SetString('n', ALLBGCHDGNC); }

  BMMOMBGDEKF() { return this.IPJNALDBICI === 1; }                       // sound on
  MCDGKFFGABE(ALLBGCHDGNC) { this.IPJNALDBICI = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('is', this.IPJNALDBICI); }
  LKKDIBOKNMJ() { return this.JMMNLKMAMGJ === 1; }                       // music on
  FCHNCOPLHGH(ALLBGCHDGNC) { this.JMMNLKMAMGJ = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('im', this.JMMNLKMAMGJ); }
  EFDKHACIIEC() { return false; } // show fps — [web] always off (the FPS toggle was removed from Settings); original: KFMMJJANOGL === 1
  HCIDDAGOLGK(ALLBGCHDGNC) { this.KFMMJJANOGL = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('fps', this.KFMMJJANOGL); }
  LLEFEIHEJDE() { return this.IMHJHDBBMNF === 1; }                       // debug logs on
  MEOGODPDIOO(ALLBGCHDGNC) { this.IMHJHDBBMNF = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('islogs', this.IMHJHDBBMNF); }
  PHOGLOAEGLO() { return this.HDLOJBHJCEJ === 1; }                       // notifications on
  IEECMAPKMJI(ALLBGCHDGNC) { this.HDLOJBHJCEJ = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('in', this.HDLOJBHJCEJ); }
  DPJPKMHLGMO() { return this.DOKCBJEMPNO === 1; }                       // ia
  KHIFJCACGNC(ALLBGCHDGNC) { this.DOKCBJEMPNO = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('ia', this.DOKCBJEMPNO); }
  GCKBANCJJAK() { return this.CFDECDNFGJN; }                             // gfx quality DHLBGHCGAKB
  EMKKNFNKNBH(ALLBGCHDGNC) { this.CFDECDNFGJN = ALLBGCHDGNC; PlayerPrefs.SetInt('gfx', ALLBGCHDGNC); }
  ODKIECNJILP() { return this.KLKNEAIFCKG; }                             // language index
  DGAGHJIDJEM(ALLBGCHDGNC) { this.KLKNEAIFCKG = ALLBGCHDGNC; PlayerPrefs.SetInt('lang', ALLBGCHDGNC); }
  IEINALFJIPJ() { return this.HIGKKJPDMOC === 1; }                       // is first start
  MJIAJNKPEAL(ALLBGCHDGNC) { this.HIGKKJPDMOC = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('ifs', this.HIGKKJPDMOC); }
  MMEJKGELKMI() { return this.AKFPBBLMIKD; }                             // first start time
  PGHAPGLHFPH(ALLBGCHDGNC) { this.AKFPBBLMIKD = ALLBGCHDGNC; PlayerPrefs.SetString('fst', DAFNMLEKHAD.DateToString(ALLBGCHDGNC)); }
  GDGPFCLJEIL() { return this.HCBEHNHJMOE === 1; }                       // itc
  JJAPPMFCNFA(ALLBGCHDGNC) { this.HCBEHNHJMOE = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('itc', this.HCBEHNHJMOE); }
  JHCIANGHEAK() { return this.HMNOHEJNPPG === 1; }                       // itc2
  AKHLCOADEAA(ALLBGCHDGNC) { this.HMNOHEJNPPG = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('itc2', this.HMNOHEJNPPG); }
  KHJGIDLMPLJ() { return this.MJPFHEFLMAJ === 1; }                       // sd
  BDKMDDIBAAD(ALLBGCHDGNC) { this.MJPFHEFLMAJ = ALLBGCHDGNC ? 1 : 0; OP.SetInt('sd', this.MJPFHEFLMAJ); }
  HDBOCJPHJDD() { return this.INKPGPKENGH === 1; }                       // so1
  CJPCGGCLNCK(ALLBGCHDGNC) { this.INKPGPKENGH = ALLBGCHDGNC ? 1 : 0; OP.SetInt('so1', this.INKPGPKENGH); }
  MHBEPDHNNFH() { return this.EOAPCJNDJAI === 1; }                       // idi
  NMKDDNOGEIJ(ALLBGCHDGNC) { this.EOAPCJNDJAI = ALLBGCHDGNC ? 1 : 0; OP.SetInt('idi', this.EOAPCJNDJAI); }
  KKEOALHODAJ() { return this.PKPKEMMBPNB; }                             // rm
  DCLEGMOJBPN(ALLBGCHDGNC) { this.PKPKEMMBPNB = ALLBGCHDGNC; OP.SetInt('rm', ALLBGCHDGNC); }
  CBEMFPCGMCN() { return this.PGBNIOHMLDH; }                             // grt
  ADNEGLENKMO(ALLBGCHDGNC) { this.PGBNIOHMLDH = ALLBGCHDGNC; PlayerPrefs.SetString('grt', DAFNMLEKHAD.DateToString(ALLBGCHDGNC)); }
  MOCMIDFLJBL() { return this.LFDLEOGMMAK; }                             // urt
  PCCIBHKKPAP(ALLBGCHDGNC) { this.LFDLEOGMMAK = ALLBGCHDGNC; PlayerPrefs.SetString('urt', DAFNMLEKHAD.DateToString(ALLBGCHDGNC)); }
  FACCCNLHFLJ() { return this.LDGCNFIOIOL; }                             // uri
  EIGEDMABAKJ(ALLBGCHDGNC) { this.LDGCNFIOIOL = ALLBGCHDGNC; PlayerPrefs.SetInt('uri', ALLBGCHDGNC); }
  IAHHAHMBKNO() { return this.JOOCICMEJAC; }                             // urc
  FLDGADKLBMI(ALLBGCHDGNC) { this.JOOCICMEJAC = ALLBGCHDGNC; PlayerPrefs.SetInt('urc', ALLBGCHDGNC); }
  FOMCIPLCAFE() { return this.FFPNODOKENB; }                             // lrt
  DIKNLDOMCHP(ALLBGCHDGNC) { this.FFPNODOKENB = ALLBGCHDGNC; PlayerPrefs.SetString('lrt', DAFNMLEKHAD.DateToString(ALLBGCHDGNC)); }
  AIMCLDENEOB() { return this.GMAHFEHGNKL === 1; }                       // gdpr (kept as flag only)
  AFFJMPIGCNC(ALLBGCHDGNC) { this.GMAHFEHGNKL = ALLBGCHDGNC ? 1 : 0; PlayerPrefs.SetInt('gdpr', this.GMAHFEHGNKL); }
  DKEJAGOLKGP() { return this.JNEIJLEGHEF; }                             // last car id
  AFIOLIDLHAH(ALLBGCHDGNC) { this.JNEIJLEGHEF = ALLBGCHDGNC; PlayerPrefs.SetInt('lc', ALLBGCHDGNC); }
  JIEOAACILIL() { return this.ADABKJOKCFG; }                             // st
  MAGBBGBDPDJ(ALLBGCHDGNC) { this.ADABKJOKCFG = ALLBGCHDGNC; PlayerPrefs.SetInt('st', ALLBGCHDGNC); }
  OEOBBCHGGMM() { return this.CGPKBBJJHLK; }                             // level progress list
  get IKIJPHDNKIO() { return this.CGPKBBJJHLK; }
  OMKMIDCOGDM() { return this.EHAJKCIJCGH; }                             // infinite fuel until

  // ======================================================== currencies
  LOCFCFJIAIH() { return this.AEOJLBHCMCL; }                             // silver
  JLEEMPONONF(ALLBGCHDGNC) {                                             // set silver
    const LGFLDFKKJMG = this.AEOJLBHCMCL;
    this.AEOJLBHCMCL = ALLBGCHDGNC | 0;
    OP.SetInt('s', this.AEOJLBHCMCL);
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu)) return;
    if (alive(menu.ALPCPBBNEBA)) menu.ALPCPBBNEBA.GMHOEBNFADN(LGFLDFKKJMG, ALLBGCHDGNC, true);
    // [removed: analytics]
  }
  HPDEBBJNCIK() { return this.AAOCOGMIAHM; }                             // gold
  DIMKKHJDHFJ(ALLBGCHDGNC) {                                             // set gold
    const old = this.AAOCOGMIAHM;
    this.AAOCOGMIAHM = ALLBGCHDGNC | 0;
    OP.SetInt('g', this.AAOCOGMIAHM);
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu)) return;
    if (alive(menu.ALPCPBBNEBA)) menu.ALPCPBBNEBA.GMHOEBNFADN(old, ALLBGCHDGNC, false);
    // [removed: analytics]
  }
  // spend gold (amount, item, place) - analytics removed
  JMNEPHGKIPE(EGCBHPKONII, PFLOEJOJJAP, AJFBHMKJHJD) {
    this.DIMKKHJDHFJ(this.AAOCOGMIAHM - EGCBHPKONII);
    // [removed: analytics] AnalyticsController.NLMEEFHDKMH(EGCBHPKONII, PFLOEJOJJAP, AJFBHMKJHJD)
  }
  HDABOKNLKGK() {                                                        // fuel
    if (this.BEIOJNMMDND === -1) this.BEIOJNMMDND = 24;
    if (G.FuelManager && G.FuelManager.NDMMNFPNIGC) this.BEIOJNMMDND = 999;
    return this.BEIOJNMMDND;
  }
  OPFBHOGMKNG(ALLBGCHDGNC) { this.BEIOJNMMDND = ALLBGCHDGNC | 0; OP.SetInt('f', this.BEIOJNMMDND); }   // set fuel
  AFDIIKEDILD() {                                                        // fuel timer start time (string)
    if (!this.PCKHLOCJBLM) this.PCKHLOCJBLM = DAFNMLEKHAD.DateToString(new Date());
    return this.PCKHLOCJBLM;
  }
  KGEAALNFELC(ALLBGCHDGNC) { this.PCKHLOCJBLM = ALLBGCHDGNC; OP.SetString('ft', ALLBGCHDGNC); }
  GBNPKHOGCBB(ALLBGCHDGNC) { this.EHAJKCIJCGH = ALLBGCHDGNC; OP.SetString('fut', DAFNMLEKHAD.DateToString(ALLBGCHDGNC)); }

  // ======================================================== cars
  // car progress by id (-1 = selected car). OAPBNMFPAEC: allow temporary event car
  DKJLCJPBPPN(HCBODNKILEA = -1, OAPBNMFPAEC = true) {
    if (HCBODNKILEA === -1) HCBODNKILEA = G.Main.LCFFGBBHMPH;
    let r = null;
    for (const c of this.MMIIDHNKPDO) if (c.NDLELHGPFKO === HCBODNKILEA) r = c;
    if (r === null && OAPBNMFPAEC) {
      const lvl = G.Main.NMDEEOMHAGP;
      if (lvl) {
        if (!lvl.IsEvent) return null;
        const ec = lvl.event_contest;
        if (ec && ec.status === 1) {
          const m = ec.mode >>> 0;
          if (m > 7) return null;
          if (((1 << (m & 31)) & 0xc2) === 0) return null;   // modes Carnage(1), Halloween1(6), Halloween2(7)
          const carId = ec.car_id;
          if (carId === HCBODNKILEA) {
            if (this.ILJHJIFHNKC && this.ILJHJIFHNKC.NDLELHGPFKO === carId) return this.ILJHJIFHNKC;
            this.ILJHJIFHNKC = new G.MKCBGHDANLA(carId);
            return this.ILJHJIFHNKC;
          }
        }
      }
      r = null;
    }
    return r;
  }
  // unlock car (BMMAIFGNBCD: notify menu)
  NODNJNKEFKM(BMMAIFGNBCD, HCBODNKILEA = -1) {
    if (HCBODNKILEA === -1) HCBODNKILEA = G.Main.LCFFGBBHMPH;
    if (this.DKJLCJPBPPN(HCBODNKILEA, true)) return;
    OP.SetInt('c' + HCBODNKILEA, 1);
    this.MMIIDHNKPDO.push(new G.MKCBGHDANLA(HCBODNKILEA));
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu) || !BMMAIFGNBCD) return;
    // [removed: analytics] AnalyticsController.GJEJLEDIILK(id)
    menu.BOBGEDIMPGG(HCBODNKILEA);
  }
  // reset car upgrades/colors/hp (and lock it unless car 0)
  BHPNOGJCDKD(HCBODNKILEA = -1) {
    if (HCBODNKILEA === -1) HCBODNKILEA = G.Main.LCFFGBBHMPH;
    const c = this.DKJLCJPBPPN(HCBODNKILEA, true);
    if (!c) return;
    c.DDPLLMLFICC(-1);
    for (let i = 0; i < 5; i++) c.ACDFKIBBJGP(i);
    const cc = G.CarController && G.CarController.KECGFPHIEHF;
    if (alive(cc)) for (let i = 1; i < cc.GNDOHJDDLAG.length; i++) c.CFMKDKAGFMA(i);
    c.EJLALLODBKM(0);
    if (HCBODNKILEA !== 0) {
      OP.DeleteKey('c' + HCBODNKILEA);
      const k = this.MMIIDHNKPDO.indexOf(c); if (k >= 0) this.MMIIDHNKPDO.splice(k, 1);
    }
  }

  // ======================================================== levels
  // level progress by id (-1 = selected level)
  PJDAAMCNMHJ(HFDKNJFKOJO = -1) {
    if (HFDKNJFKOJO === -1) HFDKNJFKOJO = G.Main.NMDEEOMHAGP ? G.Main.NMDEEOMHAGP.id : -1;
    let r = null;
    for (const p of this.CGPKBBJJHLK) if (p.AKLCKKPELBF === HFDKNJFKOJO) r = p;
    return r;
  }
  // first not completed story level progress (or the last completed one)
  DCOOPMCEMNE() {
    let last = null;
    for (const p of this.CGPKBBJJHLK) {
      const lvl = G.Level.FHMGLDDPEDJ(p.AKLCKKPELBF);
      if (lvl && lvl.IsEvent) continue;
      if (!p.MCDLFBJCNNA()) return p;
      last = p;
    }
    return last;
  }
  // total stars
  ADDNPHMAFBA() { let n = 0; for (const p of this.CGPKBBJJHLK) n += p.NIDLADCDMOH(); return n; }

  // ======================================================== achievements
  OFOJMCJAGFD(AHMFCANPAJC) { return this.DIIIMGJMPPI.has(AHMFCANPAJC) ? this.DIIIMGJMPPI.get(AHMFCANPAJC) === 2 : false; } // claimed
  HIFFBAOPBGD(AHMFCANPAJC) { return this.DIIIMGJMPPI.has(AHMFCANPAJC) ? this.DIIIMGJMPPI.get(AHMFCANPAJC) === 1 : false; } // completed
  BHMFJBCOKOA(AHMFCANPAJC) { return this.INDFNDHLNML.has(AHMFCANPAJC) ? this.INDFNDHLNML.get(AHMFCANPAJC) : 0; }          // counter
  EBANJKOABAL(AHMFCANPAJC, BEPBGMKPPJK) {                                // set achievement status
    this.DIIIMGJMPPI.set(AHMFCANPAJC, BEPBGMKPPJK);
    // [removed: analytics] (status 1 -> AnalyticsController event)
    OP.SetInt('a' + String(AHMFCANPAJC), BEPBGMKPPJK);
  }
  FJPEKKHDOAK(AHMFCANPAJC, CBPKPDPCJBB) {                                // add to achievement counter
    if (CBPKPDPCJBB === 0) return;
    OP.SetInt('a' + String(AHMFCANPAJC) + 'c', this.BHMFJBCOKOA(AHMFCANPAJC) + CBPKPDPCJBB);
    this.INDFNDHLNML.set(AHMFCANPAJC, (this.INDFNDHLNML.has(AHMFCANPAJC) ? this.INDFNDHLNML.get(AHMFCANPAJC) : 0) + CBPKPDPCJBB);
  }

  // ======================================================== gameplay hints (GUIGameplay.POFCDOMOIBH)
  OPNCDNBIAEN(MPCJLJAJKMF) { return 'h' + String(MPCJLJAJKMF); }
  BLGOKNOOEEO(MPCJLJAJKMF) { return this.OBKKDAGBGNN.includes(MPCJLJAJKMF); }
  NLPCIABIEIC(MPCJLJAJKMF) {
    if (this.BLGOKNOOEEO(MPCJLJAJKMF)) return;
    this.OBKKDAGBGNN.push(MPCJLJAJKMF);
    OP.SetInt(this.OPNCDNBIAEN(MPCJLJAJKMF), 1);
  }

  // ======================================================== encyclopedia
  CHGBPDAONOH(BAMPGHJACCL, POOJPMFNDMP) {
    const arr = G.Main.KECGFPHIEHF.NGBIFHJDNEC;
    for (let i = 0; i < arr.length; i++) {
      if (arr[i].encyclopediaItem === BAMPGHJACCL && arr[i].status < POOJPMFNDMP) {
        OP.SetInt('e' + String(i), POOJPMFNDMP);
        arr[i].status = POOJPMFNDMP;
      }
    }
  }

  // ======================================================== load
  // load settings, currencies and cars
  BJHLLKHDOJP() {
    const P = PlayerPrefs;
    if (P.HasKey('islogs')) this.IMHJHDBBMNF = P.GetInt('islogs');
    if (P.HasKey('is')) this.IPJNALDBICI = P.GetInt('is');
    if (P.HasKey('im')) this.JMMNLKMAMGJ = P.GetInt('im');
    if (P.HasKey('in')) this.HDLOJBHJCEJ = P.GetInt('in');
    if (P.HasKey('n')) this.DIKNHCJJBBC = P.GetString('n');
    this.CFDECDNFGJN = P.HasKey('gfx') ? P.GetInt('gfx') : G.Main.ECDNDENGEOH();
    if (P.HasKey('gdpr')) this.GMAHFEHGNKL = P.GetInt('gdpr');
    if (P.HasKey('lang')) this.KLKNEAIFCKG = P.GetInt('lang');
    if (P.HasKey('st')) this.ADABKJOKCFG = P.GetInt('st');
    this.JNEIJLEGHEF = P.GetInt('lc', 12);
    G.Main.LCFFGBBHMPH = this.JNEIJLEGHEF;
    this.BABJKNFMIOD();
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (alive(menu) && alive(menu.ALPCPBBNEBA)) menu.ALPCPBBNEBA.OCLHKDAFKLI();
    this.MMIIDHNKPDO = [];
    this.CGPKBBJJHLK = [];
    this.OBKKDAGBGNN = [];
    this.DIIIMGJMPPI = new Map();
    this.INDFNDHLNML = new Map();
    if (OP.HasKey('s')) this.AEOJLBHCMCL = OP.GetInt('s', 0);
    if (OP.HasKey('g')) this.AAOCOGMIAHM = OP.GetInt('g', 0);
    if (OP.HasKey('f')) this.BEIOJNMMDND = OP.GetInt('f', 0);
    if (OP.HasKey('ft')) this.PCKHLOCJBLM = OP.GetString('ft', '');
    if (OP.HasKey('fut')) this.EHAJKCIJCGH = DAFNMLEKHAD.ParseDate(OP.GetString('fut', DAFNMLEKHAD.DateToString(DATE_MIN)));
    if (OP.HasKey('sd')) this.MJPFHEFLMAJ = OP.GetInt('sd', 0);
    if (OP.HasKey('so1')) this.INKPGPKENGH = OP.GetInt('so1', 0);
    if (OP.HasKey('idi')) this.EOAPCJNDJAI = OP.GetInt('idi', 0);
    if (OP.HasKey('rm')) this.PKPKEMMBPNB = OP.GetInt('rm', 0);
    const cars = G.Main.KECGFPHIEHF.GDPCMIGAPOM;
    for (let i = 0; i < cars.length; i++) {
      const key = 'c' + String(i);
      if ((OP.HasKey(key) && OP.GetInt(key, 0) === 1) || i === 0) this.MMIIDHNKPDO.push(new G.MKCBGHDANLA(i));
      if (i === 1 && !OP.HasKey(key)) {
        const c = new G.MKCBGHDANLA(1);
        this.MMIIDHNKPDO.push(c);
        if (c.IDOHKCCDGDG(1) < 2 && c.IDOHKCCDGDG(0) < 2 && c.IDOHKCCDGDG(2) < 2 && c.IDOHKCCDGDG(3) < 2) {
          G.Main.GEMDEAMAGPG('Car Classic removed!');
          const k = this.MMIIDHNKPDO.indexOf(c); if (k >= 0) this.MMIIDHNKPDO.splice(k, 1);
          if (G.Main.LCFFGBBHMPH === 1) {
            if (!OP.HasKey('l0a')) { this.JNEIJLEGHEF = 12; G.Main.LCFFGBBHMPH = 12; } else { this.JNEIJLEGHEF = 0; G.Main.LCFFGBBHMPH = 0; }
          }
        } else {
          OP.SetInt(key, 1);
          G.Main.GEMDEAMAGPG('Car Classic added!');
        }
      }
    }
    this.MMIIDHNKPDO.push(new G.MKCBGHDANLA(12));
  }

  // ObscuredPrefs device lock setup (once): [removed: device id lock]
  BABJKNFMIOD() {
    if (G.Main.JKNMJKNOFJJ) return;
    G.Main.JKNMJKNOFJJ = true;
    const id = this.OIJFMLKNKKD();
    G.Main.GEMDEAMAGPG('DeviceId: ' + id + ' lockToDevice: None');
  }
  // Android device id -> not available on web
  OIJFMLKNKKD() { return ''; }

  // load the remaining profile data (timers, levels, hints, achievements, encyclopedia)
  LKLNJILJNIA() {
    const P = PlayerPrefs;
    if (P.HasKey('ifsync')) this.GBPIMCGLBAL = P.GetInt('ifsync');
    if (P.HasKey('fps')) this.KFMMJJANOGL = P.GetInt('fps');
    if (P.HasKey('ia')) this.DOKCBJEMPNO = P.GetInt('ia');
    if (P.HasKey('ifs')) {
      this.HIGKKJPDMOC = P.GetInt('ifs');
      this.AKFPBBLMIKD = DAFNMLEKHAD.ParseDate(P.GetString('fst', DAFNMLEKHAD.DateToString(new Date())));
    }
    if (P.HasKey('grt')) this.PGBNIOHMLDH = DAFNMLEKHAD.ParseDate(P.GetString('grt', DAFNMLEKHAD.DateToString(DATE_MIN)));
    if (P.HasKey('uri')) {
      this.LDGCNFIOIOL = P.GetInt('uri');
      this.LFDLEOGMMAK = DAFNMLEKHAD.ParseDate(P.GetString('urt', DAFNMLEKHAD.DateToString(DATE_MIN)));
    }
    if (P.HasKey('urc')) this.JOOCICMEJAC = P.GetInt('urc');
    this.FFPNODOKENB = DAFNMLEKHAD.ParseDate(P.GetString('lrt', DAFNMLEKHAD.DateToString(new Date())));
    const levels = G.Main.KECGFPHIEHF.IHPBACJOJMA;
    for (let i = 0; i < levels.length; i++) this.CGPKBBJJHLK.push(new G.DJKGLJOCFCE(levels[i]));
    if (P.HasKey('itc')) this.HCBEHNHJMOE = P.GetInt('itc');
    if (P.HasKey('itc2')) this.HMNOHEJNPPG = P.GetInt('itc2');
    this.ELENJDEAEDD();
    this.KKEBEMDKOHM();
    this.OODFJCLDFNI();
  }

  // load shown gameplay hints
  ELENJDEAEDD() {
    for (const v of Object.values(E.GUIGameplay_POFCDOMOIBH)) {
      if (v === -1) continue;
      const k = this.OPNCDNBIAEN(v);
      if (OP.HasKey(k) && OP.GetInt(k, 0) === 1) this.OBKKDAGBGNN.push(v);
    }
  }
  // load achievements (status "a<id>", counter "a<id>c")
  KKEBEMDKOHM() {
    for (const v of Object.values(E.KKMHKJEGDLA)) {
      let k = 'a' + String(v);
      if (OP.HasKey(k)) this.DIIIMGJMPPI.set(v, OP.GetInt(k, 0));
      k = 'a' + String(v) + 'c';
      if (OP.HasKey(k)) this.INDFNDHLNML.set(v, OP.GetInt(k, 0));
    }
  }
  // load encyclopedia states ("e<index>"); first run opens entries by story progress
  OODFJCLDFNI() {
    const list = [];
    let found = false;
    const enc = G.Main.KECGFPHIEHF.NGBIFHJDNEC;
    for (let i = 0; i < enc.length; i++) {
      const k = 'e' + String(i);
      if (!OP.HasKey(k)) {
        if (!enc[i].is_open_by_default) enc[i].status = 0;
      } else {
        const st = OP.GetInt(k, 0);
        if (st < 3) { found = true; enc[i].status = st; } else G.Main.EEKNCFLMGDP('Wrong status: ' + st + ' encyclopedia_id: ' + i);
      }
      if (enc[i].is_open_by_default && enc[i].status === 0) { enc[i].status = 1; list.push(enc[i].encyclopediaItem); }
    }
    if (found) return;
    const p = G.Main.FBDDKIOEKDM.DCOOPMCEMNE();
    if (!p) return;
    const last = p.AKLCKKPELBF - 1;
    G.Main.GEMDEAMAGPG('LastCompletedLvl: ' + last);
    if (last < 1) return;
    list.push(16, 3, 11, 18);
    if (last > 1) {
      list.push(2, 14, 12, 13);
      if (last > 2) {
        list.push(4, 5);
        if (last > 3) {
          list.push(17, 8, 7);
          if (last > 4) list.push(9, 6);
        }
      }
    }
    for (const id of list) {
      for (let j = 0; j < enc.length; j++) {
        if (enc[j].encyclopediaItem === id) { enc[j].status = 2; OP.SetInt('e' + String(j), 2); }
      }
    }
  }

  // story progress marker from the last played level
  GPJCLNDGBCO() {
    const p = G.Main.FBDDKIOEKDM.DCOOPMCEMNE();
    if (!p) return;
    let id = p.AKLCKKPELBF;
    G.Main.GEMDEAMAGPG('lastPlayerLevel: ' + id);
    if (id > 0 && id <= G.Level.total_story_levels) {
      const lp = G.Main.FBDDKIOEKDM.PJDAAMCNMHJ(id);
      if (!lp) return;
      G.Main.GEMDEAMAGPG('Lvl: ' + lp.AKLCKKPELBF + ' Attempts ' + lp.ALIHDAANEPI);
      if (lp.ALIHDAANEPI > 0) id++;
      G.Main.FBDDKIOEKDM.MAGBBGBDPDJ(id);
    }
  }

  // refresh garage UI after reset/sync and restart the garage music
  BJKKICMFANH() {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu) || !alive(menu.ALPCPBBNEBA)) return;
    const gg = menu.ALPCPBBNEBA;
    gg.DKIFODMOFNO();
    gg.AEBAFCEJDPO.HEGIHOAJOKK(false);
    const prof = G.Main.FBDDKIOEKDM;
    if (prof.JMMNLKMAMGJ !== 1 || !G.Menu.MDLMIEDLJMC) return;
    const S = G.SoundScript;
    if (!S.FPOJDHNIFPP || S.FPOJDHNIFPP.isPlaying) return;
    S.HCEFONCADKE(S.FPOJDHNIFPP);
  }

  // reset progress. MNJOMLPPAJL: keep settings, MBKCEECENJN: restore from cloud ([removed: cloud] -> plain reset)
  GKCLIHIJGIE(MNJOMLPPAJL, MBKCEECENJN) {
    const P = PlayerPrefs;
    const is = this.IPJNALDBICI, his = P.HasKey('is');
    const im = this.JMMNLKMAMGJ, him = P.HasKey('im');
    const gdpr = this.GMAHFEHGNKL, hgdpr = P.HasKey('gdpr');
    const inn = this.HDLOJBHJCEJ, hin = P.HasKey('in');
    const idi = this.EOAPCJNDJAI, hidi = OP.HasKey('idi');
    const ia = this.DOKCBJEMPNO, hia = P.HasKey('ia');
    const gfx = this.CFDECDNFGJN, hgfx = P.HasKey('gfx');
    const lang = this.KLKNEAIFCKG, hlang = P.HasKey('lang');
    const logs = this.IMHJHDBBMNF, hlogs = P.HasKey('islogs');
    const fps = this.KFMMJJANOGL, hfps = P.HasKey('fps');
    const sd = this.MJPFHEFLMAJ, hsd = OP.HasKey('sd');
    const so1 = this.INKPGPKENGH, hso1 = OP.HasKey('so1');
    const rm = this.PKPKEMMBPNB, hrm = OP.HasKey('rm');
    const ifs = this.HIGKKJPDMOC, hifs = P.HasKey('ifs');
    const fst = this.AKFPBBLMIKD, hfst = P.HasKey('fst');
    const sid = '';                                     // [removed: xbox]
    P.DeleteAll();
    OP.DeleteAll();
    if (MBKCEECENJN) {
      const kv = G.BridgePHP && G.BridgePHP.save_keys_and_values;  // [removed: cloud] (stub -> nothing)
      if (kv && typeof kv === 'object') for (const [k, v] of (kv instanceof Map ? kv : Object.entries(kv))) OP.SetInt(k, v);
      G.Main.KECGFPHIEHF.IJMHKMJLFIL();
      G.Main.FBDDKIOEKDM.GPJCLNDGBCO();
    } else {
      G.Main.KECGFPHIEHF.IJMHKMJLFIL();
    }
    const np = G.Main.FBDDKIOEKDM;
    if (MNJOMLPPAJL) {
      if (his) np.MCDGKFFGABE(is === 1);
      if (him) np.FCHNCOPLHGH(im === 1);
      if (hgdpr) np.AFFJMPIGCNC(gdpr === 1);
      if (hin) np.IEECMAPKMJI(inn === 1);
      if (hidi) np.NMKDDNOGEIJ(idi === 1);
      if (hia) np.KHIFJCACGNC(ia === 1);
      if (hgfx) np.EMKKNFNKNBH(gfx);
      if (hlang) np.DGAGHJIDJEM(lang);
      if (hlogs) np.MEOGODPDIOO(logs === 1);
      if (hfps) np.HCIDDAGOLGK(fps === 1);
      if (hsd) np.BDKMDDIBAAD(sd === 1);
      if (hso1) np.CJPCGGCLNCK(so1 === 1);
      if (hrm) np.DCLEGMOJBPN(rm);
      if (sid !== '') P.SetString('xbox_sid', sid);
    }
    if (hifs) np.MJIAJNKPEAL(ifs === 1);
    if (hfst) np.PGHAPGLHFPH(fst);
    G.Main.LCFFGBBHMPH = 12;
    G.Main.NMDEEOMHAGP = null;
    G.Level.last_finished = -1;
    const M = G.Menu;
    if (M) {
      M.CCCHHLJEBKK = false; M.NAHIIOCLEMH = false; M.EDICJCHCNCB = false; M.OLFGGHMPPCK = false;
      M.MDLMIEDLJMC = true; M.DHDINHBJPFH = false; M.MCGFPLMDEKJ = false;
      M.DPDMJEDMEDK = 0; M.JNJPCFMBDIB = false;
    }
    if (G.GUIWindow) { G.GUIWindow.OFEJBBPBBFG = null; G.GUIWindow.DNEPGKHAOBF = null; G.GUIWindow.PADNIFKFMPL = null; }
    const menu = M && M.KECGFPHIEHF;
    if (!menu || !menu.ALPCPBBNEBA) return;
    menu.ALPCPBBNEBA.EGEFDJDCKDJ();
    if (menu.ALPCPBBNEBA.PIIFOJPCFOB) menu.ALPCPBBNEBA.PIIFOJPCFOB.FHBDLLGMOFN();
    const tr = G.Translate && G.Translate.KECGFPHIEHF;
    if (!tr) return;
    tr.CCHEMMCPAOO();
    tr.OGEJCBEMJLE();
    for (const l of G.Main.KECGFPHIEHF.IHPBACJOJMA) l.POIIKNJOHOP();
    if (np.HDABOKNLKGK() !== -1) np.OPFBHOGMKNG(-1);
    if (alive(menu.LCCECGFFBGC)) menu.LCCECGFFBGC.CPLMJMFGLMB();
    // [removed: notifications]
    menu.OLOGKIHIIEL();
    if (!MBKCEECENJN) np.BJKKICMFANH();
  }

  // cloud sync result: IPFLIFHHNKB = take server save ([removed: server] -> local reset path only)
  GJHOMPPEMDL(IPFLIFHHNKB) {
    if (IPFLIFHHNKB) {
      this.GKCLIHIJGIE(true, true);
      // [removed: analytics]
    } else {
      // [removed: server] BridgePHP.is_can_save_lower_progress_to_server = true; BridgePHP.StartServerConnect(3)
    }
    const prof = G.Main.FBDDKIOEKDM;
    prof.AIDICNFBHKK(true);
    G.Main.GEMDEAMAGPG('IsFirstSync: ' + String(this.GBPIMCGLBAL === 1));
    G.Main.GEMDEAMAGPG('Main.playerProfile.IsFirstSync: ' + String(prof.GBPIMCGLBAL === 1));
    prof.BJKKICMFANH();
  }

  // serialize the whole progress as {"key":value,...} (was uploaded to the server; kept for export/debug)
  MDLHADOKJGN() {
    const d = new Map();
    for (const [k, v] of this.DIIIMGJMPPI) d.set('a' + String(k), v);
    for (const [k, v] of this.INDFNDHLNML) d.set('a' + String(k) + 'c', v);
    const enc = G.Main.KECGFPHIEHF.NGBIFHJDNEC;
    for (let i = 0; i < enc.length; i++) d.set('e' + String(i), enc[i].status);
    for (const c of this.MMIIDHNKPDO) {
      if (c.NDLELHGPFKO > 0) {
        d.set('c' + String(c.NDLELHGPFKO), 1);
        if (c.NDLELHGPFKO !== 11) {
          for (const t of Object.values(E.MGACAOGOMPM)) if (c.IDOHKCCDGDG(t) > 0) d.set(c.FKDNILOCFBC(t), c.IDOHKCCDGDG(t));
        }
      }
      if (c.BGFAMABFPHC() > 0) d.set(c.MIKFNEELEFE(), c.BGFAMABFPHC());
      for (let i = 1; i !== 5; i++) if (c.KLAHDEDHJOD(i) > 0) d.set(c.NDCGHMCJLPF(i), c.KLAHDEDHJOD(i));
    }
    for (const p of this.CGPKBBJJHLK) {
      const lvl = G.Level.FHMGLDDPEDJ(p.AKLCKKPELBF);
      if (!lvl || lvl.IsEvent) continue;
      if (p.ALIHDAANEPI > 0) d.set(p.DLOKHEPHLGI(), p.ALIHDAANEPI);
      if (p.MCDLFBJCNNA()) {
        d.set(p.POOODOJHMMJ(), p.NIDLADCDMOH());
        d.set(p.OEOONPINEJA(), p.DLEPICFCEEG());
        d.set(p.KACBPKKHMLH(), p.JOAGKFCNAEO);
        for (const t of Object.values(E.EDALCEKLAEJ)) if (p.HPCKHLLBFPL(t) > 0) d.set(p.CNLCNMMMOFD(t), p.HPCKHLLBFPL(t));
      }
    }
    for (const h of this.OBKKDAGBGNN) if (h > 4) d.set(this.OPNCDNBIAEN(h), 1);
    d.set('sd', this.MJPFHEFLMAJ); d.set('idi', this.EOAPCJNDJAI); d.set('so1', this.INKPGPKENGH);
    d.set('s', this.AEOJLBHCMCL); d.set('g', this.AAOCOGMIAHM); d.set('f', this.HDABOKNLKGK()); d.set('rm', this.PKPKEMMBPNB);
    const parts = [];
    for (const [k, v] of d) if (OP.HasKey(k)) parts.push('"' + k + '":' + String(v));
    return '{' + parts.join(',') + '}';   // TODO(verify): exact separators of the original StringBuilder output
  }
}
G.DAFNMLEKHAD = DAFNMLEKHAD;
