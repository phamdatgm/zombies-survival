// ConsoleTipsBottom: bottom bar with gamepad button tips; slides in/out (0.5 s realtime).
import { Time, Vector2, Mathf } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class ConsoleTipsBottom extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.JNHECJCKCGN = null; this.NHKIAPHMOFF = null; this.ONCJBBJOKDD = null; // tip 1: root, TranslateLabel, Image
    this.LJLPKOOGOBI = null; this.JFPHDBHDHNC = null; this.HBBGOHCFNLN = null; // tip 2
    this.LPLHEDAJICJ = null; this.MEFAOIHGLAJ = null;                          // tip 3
    this.KIMPLIODKPG = null;   // RectTransform (panel)
    this.MODGLFPMPGA = null;   // running coroutine
    this.BPMJFJMEKLM = false;  // animating
    this.NJCPHGPEBEK = false;  // shown
  }
  ABIEFKKDOGK() { }
  // Show(true) / Hide(false)
  EGAHKHBBFEM(NOBGKIBHCEN) {
    if (NOBGKIBHCEN && this.NJCPHGPEBEK) {
      if (!alive(this.KIMPLIODKPG)) return;
      if (-60 <= this.KIMPLIODKPG.anchoredPosition.y) return;
    }
    if (this.MODGLFPMPGA) this.StopCoroutine(this.MODGLFPMPGA);
    const gen = this.GEMPILJFGGI(NOBGKIBHCEN);
    this.gameObject.SetActive(true);
    this.MODGLFPMPGA = this.StartCoroutine(gen);
  }
  // DHAADBBKHAG coroutine
  *GEMPILJFGGI(isShow) {
    this.BPMJFJMEKLM = true;
    if (isShow) this.NJCPHGPEBEK = true;
    const rt = this.KIMPLIODKPG;
    if (!alive(rt)) return;
    const a = rt.anchoredPosition;
    const pos = { x: a.x, y: a.y };
    let final_pos_y;
    if (!isShow) final_pos_y = -63;
    else { pos.y = -63; final_pos_y = 0; this.gameObject.SetActive(true); }
    const initY = pos.y;
    rt.anchoredPosition = new Vector2(pos.x, pos.y);
    const anim_length = 0.5;
    const pauseEndTime = Time.realtimeSinceStartup + anim_length;
    const lerp = (x, y, t) => (G.Main && G.Main.BKPNLKDKAKA ? G.Main.BKPNLKDKAKA(x, y, t) : Mathf.Lerp(x, y, t));
    for (;;) {
      const now = Time.realtimeSinceStartup;
      if (pauseEndTime <= now) {
        rt.anchoredPosition = new Vector2(pos.x, final_pos_y);
        if (!isShow) this.gameObject.SetActive(false);
        this.BPMJFJMEKLM = false; this.NJCPHGPEBEK = false;
        return;
      }
      rt.anchoredPosition = new Vector2(pos.x, lerp(initY, final_pos_y, 1 - (pauseEndTime - now) / anim_length));
      yield null;
    }
  }
}
define('ConsoleTipsBottom', ConsoleTipsBottom);
