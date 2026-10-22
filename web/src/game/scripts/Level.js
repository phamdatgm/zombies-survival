// Level: level definition + its map GUI logic (plain [Serializable] class; list Main.IHPBACJOJMA).
// Ids < 100 are story levels, ids >= 100 are events (event_id_offset). Server driven event refresh is removed.
import { Time, Color, Vector3 } from '../../engine/unity.js';
import { alive } from '../base.js';
import { G } from '../G.js';

const num = (v, d = 0) => (typeof v === 'number' ? v : d);
const STATUS_NAMES = ['NotStarted', 'Started', 'Completed', 'RewardWindow', 'RewardCallback'];
const setText = (t, s) => { if (t) t.text = s; };
const setActive = (go, b) => { if (go) (go.gameObject || go).SetActive(!!b); };

export class Level {
  static event_id_offset = 100;
  static last_finished = -1;        // id of the level finished last (-1 = none)
  static total_story_levels = 10;   // .cctor

  constructor(o) {
    this.id = 0;
    this.translate_key = null;
    this.scene_id = null;
    this.tasks = [new G.LevelTasks(), new G.LevelTasks(), new G.LevelTasks(), new G.LevelTasks()];  // .ctor: LevelTasks[4]
    this.unlock_after_lvl_id = 0;
    this.progress_percent = new Array(21).fill(0);  // .ctor: int[21]
    this._gui = null;                // GUILevel
    this.road_anim_time = 0;
    this.is_hidden = false;
    this.is_already_animated = false;
    this.event_contest = null;       // EventContest
    this.reward_completed_event = null; // RewardContest
    this.event_replay_ghost = null;  // Replay
    this.is_event_attention_icon = false;
    this.start_task_scale_x = -1.0;
    if (o) {
      Object.assign(this, o);
      this.tasks = Array.isArray(this.tasks) ? this.tasks.map((t) => (t instanceof G.LevelTasks ? t : new G.LevelTasks(t))) : [];
      if (!Array.isArray(this.progress_percent)) this.progress_percent = [];
      if (this.event_contest && !(this.event_contest instanceof G.EventContest)) this.event_contest = new G.EventContest(this.event_contest);
      if (this.reward_completed_event && !(this.reward_completed_event instanceof G.RewardContest)) this.reward_completed_event = new G.RewardContest(this.reward_completed_event);
      this.is_hidden = !!this.is_hidden; this.is_already_animated = !!this.is_already_animated; this.is_event_attention_icon = !!this.is_event_attention_icon;
      if (this.start_task_scale_x === undefined) this.start_task_scale_x = -1.0;
    }
  }

  static _garage() { const m = G.Menu && G.Menu.KECGFPHIEHF; return alive(m) && alive(m.ALPCPBBNEBA) ? m.ALPCPBBNEBA : null; }

  // ---- properties
  get SceneId() {
    if (this.id < 100 || !this.event_contest) return this.scene_id;
    return 'level_event_' + String(this.event_contest.mode);
  }
  get IsTutorial() { return this.id === 0; }
  get IsEvent() { return this.id > 99; }
  get EventId() { return this.id - 100; }
  get gui() {
    if (!alive(this._gui)) {
      const menu = G.Menu && G.Menu.KECGFPHIEHF;
      const gg = menu && menu.ALPCPBBNEBA;
      const arr = gg && gg.AMBAJOCCFJE;
      if (arr) for (const g of arr) if (g && g.HKGEOJPHLAN === this.id) this._gui = g;
    }
    return this._gui;
  }
  get IsAvailable() {
    const prof = G.Main.FBDDKIOEKDM;
    if (this.id < 100) {
      let ok = true;
      for (const p of prof.CGPKBBJJHLK) {
        if (this.id < 1) continue;
        if (this.id - 1 === p.AKLCKKPELBF) ok = ok && p.MCDLFBJCNNA();
      }
      return ok;
    }
    let b = true;
    if (this.unlock_after_lvl_id > 0 && prof.PJDAAMCNMHJ(this.unlock_after_lvl_id)) b = prof.PJDAAMCNMHJ(this.unlock_after_lvl_id).MCDLFBJCNNA();
    return b && !G.Main.OJDDINBFCNH;
  }

  // level by id
  static FHMGLDDPEDJ(HKGEOJPHLAN) {
    let r = null;
    for (const l of G.Main.KECGFPHIEHF.IHPBACJOJMA) if (l.id === HKGEOJPHLAN) r = l;
    return r;
  }

  // per frame: "road" reveal animation of the newly unlocked level on the map
  BBGODPBKHPF() {
    if (this.is_already_animated) return;
    if (Level.last_finished < 0) return;
    const gui = this.gui;
    const road = gui.HMNLIDOBDAB;
    if (!alive(road)) return;
    if (Time.time < this.road_anim_time) {
      let f = (this.road_anim_time - Time.time) * 1.33;
      f = Math.min(1, Math.max(0, f));
      const c = f * 0.0 + 1.0;
      road.color = new Color(c, c, c, 1.0 - f);
      return;
    }
    if (!this.is_hidden) return;
    if (this.gui.gameObject.activeSelf) return;
    this.gui.gameObject.SetActive(true);
    this.is_hidden = false;
    this.is_already_animated = true;
    const gg = Level._garage();
    if (gg) gg.AEBFNHHILNI();
    this.CBKFPGOAMCA();
  }

  // tutorial arrows on the first two levels
  CBKFPGOAMCA() {
    const prof = G.Main.FBDDKIOEKDM;
    const p = prof.PJDAAMCNMHJ(this.id);
    const gg = Level._garage();
    if (!gg) return;
    if (!p) return;
    if (this.id > 99) return;
    if (this.id === 1) {
      if (this.is_hidden) return;
      if (!p.MCDLFBJCNNA() && this !== G.Main.NMDEEOMHAGP) {
        const p0 = prof.PJDAAMCNMHJ(0);
        setActive(gg.DOIAFGKPDIH, p0.MCDLFBJCNNA());
        return;
      }
      setActive(gg.DOIAFGKPDIH, false);
    } else if (this.id === 0) {
      if (!p.MCDLFBJCNNA() && this !== G.Main.NMDEEOMHAGP) {
        setActive(gg.EGFPPEFNCKK, true);
        if (!gg.DCFAACLJPKH()) return;
        if (!gg.AMBAJOCCFJE || gg.AMBAJOCCFJE.length === 0) return;
        if (!gg.EGFPPEFNCKK.activeSelf) return;
        if (gg.KHGDDKNPJEP.gameObject.activeSelf) return;
        if (gg.HBMBJIDJGCB) return;
        if (prof.ADABKJOKCFG === 0) return;
        const parent = gg.HBNCEIHGBOO.transform;
        gg.DBENLFCCNNE.transform.SetParent(parent, true);
        gg.KHGDDKNPJEP.transform.SetParent(parent, true);
        gg.KHGDDKNPJEP.transform.SetAsLastSibling();
        gg.AMBAJOCCFJE[0].transform.SetParent(parent, true);
        gg.AMBAJOCCFJE[0].transform.SetAsLastSibling();
        gg.EGFPPEFNCKK.transform.SetParent(parent, true);
        gg.EGFPPEFNCKK.transform.SetAsLastSibling();
        if (gg.PILHKCFDJIH) gg.StopCoroutine(gg.PILHKCFDJIH);
        gg.PILHKCFDJIH = gg.StartCoroutine(gg.KEPPKPEAEOO());
        return;
      }
      setActive(gg.EGFPPEFNCKK, false);
      setActive(gg.KHGDDKNPJEP, false);
    }
  }

  // event timer label update
  FKJAANMGOMP() {
    const gg = Level._garage();
    const ec = this.event_contest;
    if (this.IsAvailable && gg && ec && ec.mode !== 0 && alive(gg.FPEFCPLEPIF)) {
      const B = G.BridgePHP || {};
      if (B.is_need_update_game === true) return;
      const t = ec.TimeLeft;
      if (t < 0) {
        setText(gg.LGLACKHIEPI, '0:00:00');
        setText(this.gui.OFFIBLCMIJF, '');
        if (B.is_start_updating_event_from_server === true) return;
        if (Time.time <= num(B.last_check_event_for_refresh)) return;
        this.event_replay_ghost = null;
        if (ec.status === 0) {
          ec.status = 1;
          G.Main.GEMDEAMAGPG('Set Cached Event: Id: ' + ec.id + ' lvl: ' + ec.lvl_id + ' | status: ' + STATUS_NAMES[ec.status]);
        } else {
          let found = null;
          const list = G.RatingEventController && G.RatingEventController.GBOBBEDAFKH;
          if (ec.status === 1 && Array.isArray(list)) {
            for (const e of list) if (e && e.status === 0 && e.lvl_id + 100 === this.id) { found = e; break; }
          }
          if (found) {
            this.event_contest = found;
            G.Main.GEMDEAMAGPG('Set Cached Event: Id: ' + found.id + ' lvl: ' + found.lvl_id + ' | status: ' + STATUS_NAMES[found.status]);
          } else this.event_contest = new G.EventContest();
        }
        this.HMPEMADOAAL();
        if (G.Main.NMDEEOMHAGP === this) gg.PGEEGDGGHLL(this, false);
        // [removed: server] RatingEventController.OJBAJGILIJN(this, true); BridgePHP.is_start_updating_event_from_server = true;
        if (G.BridgePHP && typeof G.BridgePHP === 'object') { try { G.BridgePHP.last_check_event_for_refresh = Time.time + 20.0; } catch (e) { /* stub */ } }
        return;
      }
      const days = Math.floor(t / 86400), hours = Math.floor((t % 86400) / 3600), mins = Math.floor((t % 3600) / 60), secs = t % 60;
      let txt;
      if (days < 1) txt = hours + ':' + String(mins).padStart(2, '0') + ':' + String(secs).padStart(2, '0');
      else {
        const tr = G.Translate.KECGFPHIEHF;
        txt = String(days) + tr.PMDALDGOEKK + ' ' + String(hours) + tr.OBFHPMAPGAM;
      }
      if (G.Main.NMDEEOMHAGP === this) setText(gg.LGLACKHIEPI, txt);
      const gui = this.gui;
      if (gui && this.event_contest && gui.OFFIBLCMIJF) setText(gui.OFFIBLCMIJF, this.event_contest.status !== 1 ? '' : txt);
      return;
    }
    const gui = this.gui;
    if (gui) setText(gui.OFFIBLCMIJF, '');
  }

  // refresh this level's map GUI
  HMPEMADOAAL() {
    let active;
    const gui = this.gui;
    if (this.IsAvailable) {
      this.ICIKEDJLOBK();
      if (this.id < 100) {
        const img = gui.OFAOIFGJAJM;
        const p = G.Main.FBDDKIOEKDM.PJDAAMCNMHJ(this.id);
        const val = p ? (p.MCDLFBJCNNA() ? 0.0 : 1.0) : 1.0;
        Level._setGrayscale(img, val);
        this.MNPHCGOJNCN();
      } else {
        setActive(gui.CEAGGLCBPDO, this.is_event_attention_icon);
        const gg = G.Menu.KECGFPHIEHF.ALPCPBBNEBA;
        gui.OFAOIFGJAJM.sprite = this.event_contest.status < 1 ? gg.NFHAHGLCLOM : gg.KHECNBDLAGA;
      }
      if (this !== G.Main.NMDEEOMHAGP) {
        const t = gui.AEMCHCABDGE;
        if (alive(t) && t.localScale.x > 1.01) t.localScale = new Vector3(1, 1, 1);
      }
      if (!this.is_already_animated && alive(gui.HMNLIDOBDAB)) {
        const lf = Level.last_finished;
        let hide;
        if (this.id > 99) hide = lf === this.unlock_after_lvl_id;
        else hide = lf + 1 === this.id;
        if (hide) {
          this.is_hidden = true;
          this.road_anim_time = Time.time + 0.75;
          gui.HMNLIDOBDAB.color = new Color(1, 1, 1, 0);
          // [removed: notifications] (event level -> NotificationsManager.HFGMIIHKBPC(event_contest))
          active = false;
        } else active = true;
        gui.HMNLIDOBDAB.gameObject.SetActive(true);
      } else active = true;
    } else {
      if (alive(gui.HMNLIDOBDAB)) gui.HMNLIDOBDAB.gameObject.SetActive(false);
      active = false;
    }
    this.CBKFPGOAMCA();
    gui.gameObject.SetActive(active);
  }

  // UI grayscale (Material.SetFloat("_GrayscaleValue")): engine UI has no material params -> per-image override
  static _setGrayscale(img, val) {
    if (!img) return;
    const m = img.material;
    if (m && typeof m.SetFloat === 'function') { m.SetFloat('_GrayscaleValue', val); return; }
    img._grayscale = () => val > 0.5;   // TODO(verify): engine API for UI material properties
    if (img._render) img._render();
  }

  // select this level on the map (second click: play / open event)
  BIBHMOPJLCO() {
    if (G.Main.NMDEEOMHAGP !== this) {
      G.Main.NMDEEOMHAGP = this;
      G.Main.LNHNCBOIGOF = Time.realtimeSinceStartup;
      G.Menu.KECGFPHIEHF.ALPCPBBNEBA.AGFKGLDJDLE();
      return;
    }
    if (this.id > 99) {
      const lvl = Level.FHMGLDDPEDJ(this.id);
      if (lvl) G.Menu.KECGFPHIEHF.ALPCPBBNEBA.HAGKNGONJFM(lvl, true);
      return;
    }
    G.Menu.KECGFPHIEHF.ALPCPBBNEBA.ButtonPlay();
  }

  // stars (completed tasks count) + task/star GUI
  MNPHCGOJNCN() {
    let stars = 0;
    const gg = Level._garage();
    const prof = G.Main.FBDDKIOEKDM;
    const sel = this === G.Main.NMDEEOMHAGP;
    for (let i = 0; i < this.tasks.length; i++) {
      const task = this.tasks[i];
      if (task.count < 1) {
        if (gg && sel) { const tg = gg.BFJGLAKDHEE[i]; setText(tg.label, '---'); }   // TODO(verify): literal (3 chars)
        continue;
      }
      if (!prof.PJDAAMCNMHJ(this.id)) continue;
      const p = prof.PJDAAMCNMHJ(this.id);
      let v = p.HPCKHLLBFPL(task.type);
      v = v >= 0 ? Math.min(v, task.count) : 0;
      if (task.count <= v) stars++;
      if (gg && sel) {
        const tg = gg.BFJGLAKDHEE[i];
        setText(tg.label, String(v) + '/' + String(task.count));
        if (tg.icon) tg.icon.color = new Color(1, 1, 1, v < task.count ? 0.4 : 1.0);
        if (((task.type - 1) >>> 0) < 2 && tg.icon) {          // BackFlips / FrontFlips: mirror icon
          const rt = tg.icon.rectTransform || tg.icon.transform;
          const ls = rt.localScale;
          if (this.start_task_scale_x === -1.0) this.start_task_scale_x = ls.x;
          const sx = task.type !== 1 ? Math.abs(this.start_task_scale_x) : -Math.abs(this.start_task_scale_x);
          rt.localScale = new Vector3(sx, ls.y, ls.z);
        }
      }
    }
    const menu = G.Menu && G.Menu.KECGFPHIEHF;
    if (!alive(menu) || !G.Menu.MDLMIEDLJMC || !alive(menu.ALPCPBBNEBA) || !alive(this.gui)) return stars;
    const g2 = menu.ALPCPBBNEBA;
    if (stars < g2.DKPNEJGJOMD.length && this.id < 100) {
      if (!alive(this.gui.EAHAABHNLEB)) G.Main.EEKNCFLMGDP('Not Found stars image for level id ' + String(this.id));
      else this.gui.EAHAABHNLEB.sprite = g2.DKPNEJGJOMD[stars];
    }
    if (!sel) return stars;
    const imgs = g2.FCLLFMPIBIL || [];
    for (let i = 0; i < imgs.length; i++) {
      if (alive(imgs[i])) imgs[i].sprite = i < stars ? g2.OAPNJIEJIIB : g2.BPKEOMIBAPD;
    }
    return stars;
  }

  // level title
  DBEGLMBGKNL() {
    const tr = G.Translate && G.Translate.KECGFPHIEHF;
    if (!alive(tr)) return 'Level ?';
    if (this.translate_key != null && this.translate_key !== '') return tr.JJJNIPAKLJF(this.translate_key);
    let head, n;
    if (this.id < 100) { head = tr.JJJNIPAKLJF('LEVEL'); n = this.id + 1; }
    else {
      if (this.event_contest && this.event_contest.mode !== 0) {
        const sid = G.BridgePHP && G.BridgePHP.sid;
        if (typeof sid === 'string' && sid !== '') {
          const bp = G.Menu && G.Menu.KECGFPHIEHF && G.Menu.KECGFPHIEHF.DGKLJGCAGBJ;
          if (!(alive(bp) && bp.BRIDGE_ERROR)) return tr.JJJNIPAKLJF('EVENT_' + String(this.event_contest.mode));   // BridgePHP.BRIDGE_ERROR (+0x58)
        }
      }
      head = tr.JJJNIPAKLJF('EVENT'); n = this.id - 99;
    }
    return head + ' ' + String(n);
  }

  POIIKNJOHOP() { this.is_hidden = false; this.road_anim_time = 0; }   // reset map animation state

  // title label
  ICIKEDJLOBK() {
    const gui = this.gui;
    if (!alive(gui) || !alive(gui.DAFKFKJGDJI)) return;
    gui.DAFKFKJGDJI.text = this.DBEGLMBGKNL();
  }

  // pulse the selected level button: scale = 1.1 + PingPong((t - selectTime) * 2, 1) / 10
  FOOFLNEEJFI() {
    const gui = this.gui;
    if (!alive(gui)) return;
    let s = 1.0;
    let anim = true;
    if (G.Main.KCHOEBEIOCE()) {
      const gp = G.Menu.KECGFPHIEHF.ONNBLPAKJHK;
      if (gp && gp.EECHHPBBMAG) anim = false;   // TODO(verify): gamepad branch keeps the previous scale
    }
    if (anim) {
      const x = (Time.realtimeSinceStartup - G.Main.LNHNCBOIGOF) * 2;
      const r = x - Math.floor(x / 2) * 2;
      const pp = 1 - Math.abs(Math.min(Math.max(r, 0), 2) - 1);
      s = pp / 10.0 + 1.1;
    }
    if (gui.AEMCHCABDGE) gui.AEMCHCABDGE.localScale = new Vector3(s, s, s);
  }
}
G.Level = Level;
