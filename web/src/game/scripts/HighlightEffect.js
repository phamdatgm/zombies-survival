// HighlightEffect (Highlight Plus, namespace HighlightPlus): outline/overlay highlight.
// Light approximation for the web port: the overlay/outline is rendered as a pulsing emissive tint on the
// target's renderers. Public API, state machine (fade in/out, events, SendMessage) kept from the binary.
import { Time, Color } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

const now = () => Time.realtimeSinceStartup || Time.unscaledTime || Time.time;
const callAll = (list, ...a) => { let r = true; for (const f of list || []) if (typeof f === 'function' && f(...a) === false) r = false; return r; };

// nested enum HighlightEffect.OMKEBFHHCNG fade state: 0 none, 1 fading in, -1 fading out
export class HighlightEffect extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.PLAFEGNBAOP = true;                       // preview in editor
    this.FFIBIDEBCBK = 0;                          // IGEGINMCKHD effect group
    this.ACCIGIIGFCA = -1;                         // LayerMask effect group layer
    this.ABKNBHGMOGD = 0;                          // alpha cutoff
    this.FMJLLMPNKCN = true;                       // cull back faces
    this.HFKNAMDFCMJ = false;
    this.MIPIGEACAPI = false;
    this.KINMMJCHCBO = false;                      // ignore (never highlight)
    this.AAMOOIIENFC = false;                      // highlighted
    this.ELAADMKNFCH = 0.3;                        // fade in duration
    this.JCNFHJDNMCF = 0.3;                        // fade out duration
    this.LILPEEEHNKD = false;                      // constant width
    this.IPDDFIMEHOP = true;
    this.BKKPNHCHMAG = 0.6;                        // overlay intensity
    this.HBPBKBAOBDI = new Color(0.64, 1, 0, 1);   // overlay color
    this.EPEAHGPHCJG = 1;                          // overlay animation speed
    this.IECMPDPLHMJ = 0.3;                        // overlay min intensity
    this.AMAMNJFBKNC = 1;                          // overlay blending
    this.PNGGIFHNBDL = 1;                          // outline intensity
    this.JMEEMOBBIJE = new Color(0.64, 1, 0, 1);   // outline color
    this.EALMKEANKHJ = 0.6;                        // outline width
    this.MKMICAPBGOD = 1;                          // FEDIFLCFOPF outline quality
    this.PBBFKNFOKJN = 2;                          // outline downsampling
    this.JKOJDFGNDGI = 0;                          // IFEMCDPNHFB see-through / ztest mode
    this.NABHHLLIMLH = true;
    this.IAPLCDJEBMJ = false;
    this.MLMEIBJIGNH = [];                         // LPHEHJBLEPI OnObjectHighlightStart(go) -> bool
    this.GKFGGIMOHJJ = [];                         // NPKMMHOGALO OnObjectHighlightEnd(go)
    this.FHMKIODJICM = [];                         // AKDPAMOBCFP OnRendererHighlightStart
    this.LDEDHKMPMJF = [];                         // IENBCEHONPE[] per-renderer data
    this.HIACIOLACOL = 0;                          // renderer count
    this.MBKPLBGFAHF = null;                       // target transform
    this.JPPGCGKGILI = 0;                          // highlight start time
    this.DJPNCJGKJIF = null;                       // outline material
    this.FLJEICNCIGP = 0;                          // fade start time
    this.CGDEHLPONCC = 0;                          // OMKEBFHHCNG fade state
    this.DMAOHOIMGDH = 0;
    this.KJDKINPKMHJ = false;                      // dirty
    this.CPJCCLCACCP = [];                         // List<Renderer>
    this.IBMLAJLBBDO = new Color(1, 1, 1, 1);
    this.PAOEPFFGOGH = new Color(0, 0, 0, 0);
    this._saved = new Map();                       // material -> original emissive
  }
  // property LFKOLHHIDPO (highlighted)
  get LFKOLHHIDPO() { return this.AAMOOIIENFC; }
  set LFKOLHHIDPO(v) { this.KPABICCDIIP(v); }
  // delegates: add/remove handlers
  DBGOFJEBCAC(ALLBGCHDGNC) { this.FHMKIODJICM.push(ALLBGCHDGNC); }
  JKLPPMCLJJI(ALLBGCHDGNC) { const i = this.FHMKIODJICM.lastIndexOf(ALLBGCHDGNC); if (i >= 0) this.FHMKIODJICM.splice(i, 1); }
  EKMNKKLHHHM(ALLBGCHDGNC) { this.GKFGGIMOHJJ.push(ALLBGCHDGNC); }
  HJODLBHJKAI(ALLBGCHDGNC) { const i = this.GKFGGIMOHJJ.lastIndexOf(ALLBGCHDGNC); if (i >= 0) this.GKFGGIMOHJJ.splice(i, 1); }
  JBHFDGKOKHL(ALLBGCHDGNC) { this.MLMEIBJIGNH.push(ALLBGCHDGNC); }
  POFNNJJNFFN(ALLBGCHDGNC) { const i = this.MLMEIBJIGNH.lastIndexOf(ALLBGCHDGNC); if (i >= 0) this.MLMEIBJIGNH.splice(i, 1); }
  // SetHighlighted (two identical entry points in the binary)
  FAKKPJLILLL(ALLBGCHDGNC) { this.KPABICCDIIP(ALLBGCHDGNC); }
  KPABICCDIIP(PGAPMNLLMHM) {
    if (this.CGDEHLPONCC === 0) this.FLJEICNCIGP = now();
    if (PGAPMNLLMHM && !this.KINMMJCHCBO) {
      if (this.AAMOOIIENFC && this.CGDEHLPONCC === 0) return;
      if (this.MLMEIBJIGNH.length && !callAll(this.MLMEIBJIGNH, this.gameObject)) return;
      this.SendMessage('HighlightStart', undefined);
      this.JPPGCGKGILI = now();
      if (this.ELAADMKNFCH <= 0.0) this.CGDEHLPONCC = 0;
      else {
        if (this.CGDEHLPONCC === -1) this.FLJEICNCIGP = now() - (this.JCNFHJDNMCF - (now() - this.FLJEICNCIGP));
        this.CGDEHLPONCC = 1;
      }
      this.AAMOOIIENFC = true;
    } else {
      if (!this.AAMOOIIENFC) return;
      if (0.0 < this.JCNFHJDNMCF) {
        if (this.CGDEHLPONCC === 1) this.FLJEICNCIGP = (now() + (now() - this.FLJEICNCIGP)) - this.ELAADMKNFCH;
        this.CGDEHLPONCC = -1;
        return;
      }
      this.CGDEHLPONCC = 0;
      this.AAMOOIIENFC = false;
      callAll(this.GKFGGIMOHJJ, this.gameObject);
      this.SendMessage('HighlightEnd', undefined);
    }
    this.KJDKINPKMHJ = true;
  }
  // is highlighted
  EIMIKELIDBO() { return this.AAMOOIIENFC; }
  // Refresh: re-collect renderers
  MNGFBBNHKMK() { this.IKKIOPLABDD(); }
  // UpdateMaterialProperties
  KGMPKNIGPBG() {
    if (this.KINMMJCHCBO) this.AAMOOIIENFC = false;
    if (this.EALMKEANKHJ < 0.0) this.EALMKEANKHJ = 0;
    if (this.BKKPNHCHMAG < this.IECMPDPLHMJ) this.BKKPNHCHMAG = this.IECMPDPLHMJ;
    this.KJDKINPKMHJ = true;
  }
  OnEnable() {
    this.KPABICCDIIP(true);
    this.DMAOHOIMGDH = this.JKOJDFGNDGI;
    if (!alive(this.MBKPLBGFAHF)) this.MBKPLBGFAHF = this.transform;
    this.DHNEPGKAOEB();
    this.IKKIOPLABDD();
  }
  OnDisable() { this._restore(); }
  OnDestroy() { this._restore(); }
  Reset() { this.IKKIOPLABDD(); }
  // collect renderers of the target (SetupMaterial)
  IKKIOPLABDD() {
    this._restore();
    const root = alive(this.MBKPLBGFAHF) ? this.MBKPLBGFAHF : this.transform;
    this.CPJCCLCACCP = root.GetComponentsInChildren('Renderer', true);
    this.HIACIOLACOL = this.CPJCCLCACCP.length;
    this.LDEDHKMPMJF = this.CPJCCLCACCP.map((r) => ({ renderer: r }));
    this.KJDKINPKMHJ = true;
  }
  _restore() {
    for (const [m, e] of this._saved) if (m && m.emissive) m.emissive.copy(e);
    this._saved.clear();
  }
  // current effect intensity including fade
  _fade() {
    const t = now() - this.FLJEICNCIGP;
    if (this.CGDEHLPONCC === 1) { const k = this.ELAADMKNFCH > 0 ? t / this.ELAADMKNFCH : 1; if (k >= 1) { this.CGDEHLPONCC = 0; return 1; } return k; }
    if (this.CGDEHLPONCC === -1) {
      const k = this.JCNFHJDNMCF > 0 ? 1 - t / this.JCNFHJDNMCF : 0;
      if (k <= 0) {
        this.CGDEHLPONCC = 0; this.AAMOOIIENFC = false;
        callAll(this.GKFGGIMOHJJ, this.gameObject);
        this.SendMessage('HighlightEnd', undefined);
        return 0;
      }
      return k;
    }
    return this.AAMOOIIENFC ? 1 : 0;
  }
  LateUpdate() {
    const f = this._fade();
    if (f <= 0) { this._restore(); return; }
    const speed = this.EPEAHGPHCJG;
    const pulse = speed > 0 ? this.IECMPDPLHMJ + (1 - this.IECMPDPLHMJ) * (0.5 + 0.5 * Math.sin((now() - this.JPPGCGKGILI) * speed * 6.2831855)) : 1;
    const ov = this.BKKPNHCHMAG * pulse * f;
    const ol = this.PNGGIFHNBDL * f * 0.35;
    const oc = this.HBPBKBAOBDI, lc = this.JMEEMOBBIJE;
    const r = Math.min(1, oc.r * ov + lc.r * ol), g = Math.min(1, oc.g * ov + lc.g * ol), b = Math.min(1, oc.b * ov + lc.b * ol);
    for (const ren of this.CPJCCLCACCP) {
      if (!alive(ren)) continue;
      if (!ren._hlUniq) { void ren.material; ren._hlUniq = true; } // per-renderer material instances
      for (const m of ren.materials || []) {
        if (!m || !m.emissive) continue;
        if (!this._saved.has(m)) this._saved.set(m, m.emissive.clone());
        const e = this._saved.get(m);
        m.emissive.setRGB(Math.min(1, e.r + r), Math.min(1, e.g + g), Math.min(1, e.b + b));
      }
    }
  }
  // --- rendering internals of Highlight Plus (command buffers / SRP / mesh baking): not needed for the approximation
  IPOKCNBINMN() { }
  LMBLEGHLDPO(NMPBHHIPPHP, EJJMIFBJEBK) { }
  OMJKNLLLGFP(DNLCHODDKHP, EIKILFDFMFB) { }
  LJHPMNOJKCJ() { }
  MFEKLJLDMNM(EIKILFDFMFB, GFPLEBPBHJC) { return true; }
  DHNEPGKAOEB() { }
  CKAECDAMLEE(EIKILFDFMFB, IOPIECLKGBK, PNHOAFDLNJF, GOCHMNLCEPE, GGPKILKEBBM) { }
  NIOEPGCGHOO() { }
  GEMAKGCGACE(OBNIBOKFMLM) { return OBNIBOKFMLM === 1 ? 8 : OBNIBOKFMLM === 2 ? 5 : 4; } // ZTest for see-through mode
  KBIGMFEDJKH(EIKILFDFMFB) { }
  MBLILGODLLD(CFBIMLFGMND) { return this.gameObject.GetComponentsInChildren('Renderer', true).filter((r) => ((CFBIMLFGMND >>> 0) & (1 << r.gameObject.layer)) !== 0); }
  OOAODFPDJAL(CFBIMLFGMND) { return this.MBLILGODLLD(CFBIMLFGMND); }
  HFOBHOCHGAG(PLBEPEHAFMO, EEFAAGALFPO) { return [PLBEPEHAFMO]; }
  DEPLEABAEPJ(JFDOIOKFPGG, BDNPGCFGOLG) { return JFDOIOKFPGG; }
  FOOMPJKOKED(NMPBHHIPPHP) { }
  OnRenderObject() { }
}
define('HighlightEffect', HighlightEffect);
G['HighlightPlus.HighlightEffect'] = HighlightEffect;
