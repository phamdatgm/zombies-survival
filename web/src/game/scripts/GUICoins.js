// GUICoins: animated UI counter / pop effect (add, decrease, add_big, stamp, collecting, add_fast).
import { Time, Vector2, Vector3, Color, Mathf } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { E } from '../enums.js';

const T = E.GUICoins_EJHGCAJDPNC;
const clr = (c) => new Color(c.r, c.g, c.b, c.a);

export class GUICoins extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.FHOFNGHGNGF = T.add;        // animation type
    this.ONEGFFJABBM = 1;            // duration
    this.CIDKMFLFJEJ = null;         // Text
    this.OONFFMIIIJN = null;         // RectTransform (animated)
    this.PCAMLKIMMPM = 0;            // start time
    this.KEAGDNFNNMC = 1;            // base scale
    this.EDPJENMOOGC = new Vector3(0, 0, 0); // base anchored position
    this.LJOLODBEIOB = new Color(1, 1, 1, 1); // text color
    this.FDLIPDDFFMP = new Color(0, 0, 0, 0); // image color
    this.DLCMLDLHLLC = false;        // playing
  }

  // Play(value) / Play() / Play(value, color, duration)
  ICMOCEHIFOI(ALLBGCHDGNC, EFOGAOHIGOE, FACIBICJINE) {
    if (arguments.length === 0) return this._play0();
    if (arguments.length >= 3) return this._play3(ALLBGCHDGNC, EFOGAOHIGOE, FACIBICJINE);
    return this._play1(ALLBGCHDGNC);
  }

  _play1(v) {
    this.PCAMLKIMMPM = Time.time;
    this.DLCMLDLHLLC = true;
    this.enabled = true;
    const t = this.FHOFNGHGNGF;
    if (t !== T.add_big) {
      if (t === T.decrease) {
        this.LJOLODBEIOB = new Color(1, 1, 1, 1);
        if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = new Color(1, 1, 1, 1);
        if (alive(this.OONFFMIIIJN)) this.OONFFMIIIJN.anchoredPosition = new Vector2(this.OONFFMIIIJN.anchoredPosition.x, this.EDPJENMOOGC.y);
      } else if (t !== T.add) return;
    }
    if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.text = String(v | 0);
  }

  _play0() {
    this.PCAMLKIMMPM = Time.time;
    this.DLCMLDLHLLC = true;
    this.enabled = true;
    if (this.FHOFNGHGNGF === T.collecting) {
      this.PCAMLKIMMPM += 0.3;
      this.gameObject.SetActive(true);
    } else if (this.FHOFNGHGNGF === T.stamp) {
      this.gameObject.SetActive(true);
      if (!alive(this.OONFFMIIIJN)) return;
      this.OONFFMIIIJN.localScale = new Vector3(1.5, 1.5, 1);
      this.FDLIPDDFFMP = new Color(1, 1, 1, 0);
      if (this.CIDKMFLFJEJ) { const c = this.CIDKMFLFJEJ.color; this.LJOLODBEIOB = new Color(c.r, c.g, c.b, 0); }
      const img = this.OONFFMIIIJN.GetComponent('Image');
      if (img) img.color = clr(this.FDLIPDDFFMP);
      if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.LJOLODBEIOB);
    }
  }

  _play3(v, color, dur) {
    this.ONEGFFJABBM = dur;
    this.PCAMLKIMMPM = Time.time;
    this.DLCMLDLHLLC = true;
    this.enabled = true;
    if (this.FHOFNGHGNGF !== T.decrease) return;
    this.LJOLODBEIOB = clr(color);
    if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(color);
    if (alive(this.OONFFMIIIJN)) this.OONFFMIIIJN.anchoredPosition = new Vector2(this.OONFFMIIIJN.anchoredPosition.x, this.EDPJENMOOGC.y);
    if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.text = String(v | 0);
  }

  Update() {
    if (!this.DLCMLDLHLLC) return;
    const t = (Time.time - this.PCAMLKIMMPM) * 1.5;
    const rt = this.OONFFMIIIJN;
    let cur, target, k;
    switch (this.FHOFNGHGNGF) {
      case T.add:
      case T.add_big:
        if (!alive(rt)) return;
        cur = rt.localScale.x;
        target = this.KEAGDNFNNMC * (this.FHOFNGHGNGF === T.add ? 1.2 : 1.4);
        if (t >= 0.2) target = this.KEAGDNFNNMC;
        k = Mathf.Clamp01(Time.deltaTime * 10);
        cur = cur + (target - cur) * k;
        rt.localScale = new Vector3(cur, cur, 1);
        break;
      case T.add_fast:
        if (!alive(rt)) return;
        cur = rt.localScale.x;
        target = this.KEAGDNFNNMC * 1.2;
        if (t >= 0.2) target = this.KEAGDNFNNMC;
        k = Mathf.Clamp01(Time.deltaTime * 17);
        cur = cur + (target - cur) * k;
        rt.localScale = new Vector3(cur, cur, 1);
        break;
      case T.decrease:
        if (0.3 < t / this.ONEGFFJABBM) {
          this.LJOLODBEIOB.a += Time.deltaTime * -2.5;
          if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.LJOLODBEIOB);
        }
        // Translate(Vector2.up * dt * -40) (world units == canvas pixels) TODO(verify): canvas scale
        if (alive(rt)) { const a = rt.anchoredPosition; rt.anchoredPosition = new Vector2(a.x, a.y - Time.deltaTime * 40); }
        break;
      case T.stamp: {
        let s = t * 1.5 * -0.5 + 1.5;
        if (t * 1.5 < 0) s = 1.5;
        if (!alive(rt)) return;
        rt.localScale = new Vector3(s, s, 1);
        this.LJOLODBEIOB.a += Time.deltaTime * 2.5;
        this.FDLIPDDFFMP.a = this.LJOLODBEIOB.a;
        const img = rt.GetComponent('Image');
        if (img) img.color = clr(this.FDLIPDDFFMP);
        if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.LJOLODBEIOB);
        break;
      }
      case T.collecting: {
        const car = G.CarController && G.CarController.KECGFPHIEHF;
        if (!car) return;
        const gg = car.CDDOBCENBOG;
        if (!alive(gg)) break;
        const icons = gg.MMHPAJAHJDJ || [];
        for (let i = 0; i < icons.length; i++) {
          const ic = icons[i]; if (!alive(ic)) return;
          const a = ic.anchoredPosition;
          const f = Mathf.Clamp01(t * 0.4 * (i / 3 + 1));
          ic.anchoredPosition = new Vector2(a.x + f * (67 - a.x), a.y + f * (169 - a.y));
          if (ic.gameObject.activeSelf) {
            if (ic.anchoredPosition.x < 69 || this.ONEGFFJABBM < t) {
              ic.gameObject.SetActive(false);
              if (gg.JFILDBBMPAP) gg.JFILDBBMPAP.ICMOCEHIFOI();
              if (i === 5) this.StartCoroutine(gg.JLHJOJHINPC(gg.FCKDGOFOOJB));
            }
          }
        }
        break;
      }
      default: break;
    }
    if (this.ONEGFFJABBM < t) {
      this.DLCMLDLHLLC = false;
      if (this.FHOFNGHGNGF === T.decrease) this.LEOCFHHFANH();
      this.enabled = false;
    }
  }

  // clear text
  LEOCFHHFANH() { if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.text = ''; }

  Start() {
    if (alive(this.OONFFMIIIJN)) {
      this.KEAGDNFNNMC = this.OONFFMIIIJN.localScale.x;
      const a = this.OONFFMIIIJN.anchoredPosition;
      this.EDPJENMOOGC = new Vector3(a.x, a.y, 0);
    }
    if (this.FHOFNGHGNGF === T.decrease && this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.text = '';
    if (!this.DLCMLDLHLLC) this.enabled = false;
  }
}
define('GUICoins', GUICoins);
