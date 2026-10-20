// Translate: localization (on _MainData/translations). Texts come from web/assets/texts.json (key = lower-case
// language system name, value = INI text "[Language]\nKEY = value"); parsing is shared with util.js Lang.
// Lookup: Translate.KECGFPHIEHF.JJJNIPAKLJF(key) (also callable statically) -> "error" when the key is missing.
import { Application, Resources } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { Lang } from '../util.js';

// Translate.Lang: language entry
class TranslateLang {
  constructor(o) {
    this.system_name = null;  // Unity SystemLanguage name (English, German, ...)
    this.native_name = null;
    this.flag = null;         // Sprite key
    if (o) Object.assign(this, o);
  }
}

// Unity SystemLanguage name of the browser language
function systemLanguage() {
  try { return Lang.detect(); } catch (e) { return 'English'; }
}

export class Translate extends GameBehaviour {
  static KECGFPHIEHF = null;                 // instance
  static LEAMIBBOEKD = new Map();            // Dictionary<string,string> current texts (.cctor)
  static Lang = TranslateLang;

  constructor(go, p) {
    super(go, p);
    this.PMDALDGOEKK = 'd';    // DAY_SHORT
    this.OBFHPMAPGAM = 'h';    // HOUR_SHORT
    this.CCEPOBMNPFA = null;   // SoundScript (announcer voices)
    this.LHIAELGGOEG = null;   // TextAsset (unused)
    this.JJIFCBOGHHP = [];     // Translate.Lang[]
  }

  onDeserialize(p) {
    super.onDeserialize(p);
    this.JJIFCBOGHHP = (this.JJIFCBOGHHP || []).map((o) => (o instanceof TranslateLang ? o : new TranslateLang(o)));
  }

  Awake() { Translate.KECGFPHIEHF = this; }

  // text by key ("error" if missing)
  static JJJNIPAKLJF(FDOOLAIBBPL) {
    const d = Translate.LEAMIBBOEKD;
    return d.has(FDOOLAIBBPL) ? d.get(FDOOLAIBBPL) : 'error';
  }
  JJJNIPAKLJF(FDOOLAIBBPL) { return Translate.JJJNIPAKLJF(FDOOLAIBBPL); }

  // text by key with "\n" escapes converted to new lines
  static BHBLPFCLNMA(FDOOLAIBBPL) {
    const d = Translate.LEAMIBBOEKD;
    if (!d.has(FDOOLAIBBPL)) return 'error';
    return d.get(FDOOLAIBBPL).replace(/\n/g, '\n');
  }
  BHBLPFCLNMA(FDOOLAIBBPL) { return Translate.BHBLPFCLNMA(FDOOLAIBBPL); }

  // load the texts of a language (system name, e.g. "English")
  static PPPHBJFOJDK(BKOFCJJMGIM) {
    const d = Translate.LEAMIBBOEKD;
    d.clear();
    if (BKOFCJJMGIM == null) return;
    if (!Lang.load(BKOFCJJMGIM)) { G.Main && G.Main.EEKNCFLMGDP('Translate: no texts for ' + BKOFCJJMGIM); return; }
    for (const [k, v] of Object.entries(Lang.table)) d.set(k, v);
  }
  PPPHBJFOJDK(BKOFCJJMGIM) { Translate.PPPHBJFOJDK(BKOFCJJMGIM); }

  // announcer voice clips for the current language (own voices: 0 English, 7 Russian, 8 Ukrainian)
  OGEJCBEMJLE() {
    let idx = G.Main.FBDDKIOEKDM.KLKNEAIFCKG;
    if ((idx & 0xfffffff7) !== 0 && idx !== 7) idx = 0;
    const ss = this.CCEPOBMNPFA;
    if (!alive(ss)) return;
    const names = ['_1_flip', '_2_that_hurts', '_3_wasted', '_4_too_slow', '_5_sorry_bird', '_6_great_combo', '_7_splatter_bonus', '_8_extra_style'];
    const refs = ['MGODLMBHILI', 'ADFNANLKGBM', 'CLAHNEECAHP', 'DDDFBDFBFDG', 'FBHENMIBGOB', 'AJOAPIMLFPP', 'AIDAFCHLFPO', 'MLBNPLEMPEL'];
    for (let i = 0; i < names.length; i++) {
      const clip = Resources.Load(String(idx) + names[i]);
      ss.PNPJEJLNGMF(refs[i], typeof clip === 'string' ? clip : null, 1.0);
    }
  }

  OFLAMIIDAPI() { }

  // show the extra (Russian) garage object only for language 7
  IJFFLNNCGHI() {
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu) || !alive(menu.ALPCPBBNEBA)) return;
    const gg = menu.ALPCPBBNEBA;
    const arr = gg.GOPFDHJAAEB;
    if (!arr || arr.length < 2) return;
    if (!alive(arr[1]) || !arr[1].activeSelf) return;
    if (gg.KLHBEPGKIKD) gg.KLHBEPGKIKD.SetActive(G.Main.FBDDKIOEKDM.KLKNEAIFCKG === 7);
  }

  // switch to the next language
  NINJNGGDOJC() {
    const prof = G.Main.FBDDKIOEKDM;
    const n = this.JJIFCBOGHHP.length;
    prof.DGAGHJIDJEM(prof.KLKNEAIFCKG < n - 1 ? prof.KLKNEAIFCKG + 1 : 0);
    Translate.PPPHBJFOJDK(this.JJIFCBOGHHP[prof.KLKNEAIFCKG].system_name);
    this.BDEKKODPMCA();
    this.OGEJCBEMJLE();
  }

  // cache short day/hour suffixes
  BDEKKODPMCA(EBBKDPPGDAK) {
    this.IJFFLNNCGHI();
    this.PMDALDGOEKK = this.JJJNIPAKLJF('DAY_SHORT');
    this.OBFHPMAPGAM = this.JJJNIPAKLJF('HOUR_SHORT');
  }

  // choose language (saved index, else system language, else English) and load it
  CCHEMMCPAOO() {
    const sys = systemLanguage() || String(Application.systemLanguage || 'English');
    const prof = G.Main.FBDDKIOEKDM;
    if (prof.KLKNEAIFCKG < 0) {
      for (let i = 0; i < this.JJIFCBOGHHP.length; i++) if (this.JJIFCBOGHHP[i].system_name === sys) prof.DGAGHJIDJEM(i);
    }
    if (prof.KLKNEAIFCKG < 0 || prof.KLKNEAIFCKG >= this.JJIFCBOGHHP.length) prof.DGAGHJIDJEM(0);
    const name = this.JJIFCBOGHHP[prof.KLKNEAIFCKG].system_name;
    Translate.PPPHBJFOJDK(name);
    this.BDEKKODPMCA();
    G.Main.GEMDEAMAGPG('Language: ' + name);
  }
}
define('Translate', Translate);
