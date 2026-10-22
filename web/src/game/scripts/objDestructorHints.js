// objDestructorHints: in-race splash label ("COMBO!", "FLIP!", blood overlay, event counter...). Pops, fades, hides itself.
import { Time, Vector2, Vector3, Color, Mathf } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { E } from '../enums.js';

const K = E.JLPFNIPEELJ; // standart, big, big_top, combo, blood, out_of_cons, event_count, results
const clr = (c) => new Color(c.r, c.g, c.b, c.a);

export class objDestructorHints extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.DIFNGFMLPMP = false;            // initialised
    this.ACBDHBLLEEK = 0.1;              // duration
    this.FHOFNGHGNGF = K.standart;       // type
    this.CNAGLGLEJMC = 0;                // timer
    this.FJDBNMAHHLA = new Color(1, 1, 1, 1); // image color
    this.NJJAMIBLJKH = new Color(1, 1, 1, 1); // text color
    this.IEDLIFLBMCE = new Color(0, 0, 0, 0); // saved image color
    this.DGBMPJHIMHO = new Color(0, 0, 0, 0); // saved text color
    this.OONFFMIIIJN = null;             // RectTransform
    this.EECGBBLCAOP = null;             // Image
    this.FEFEIMLHAKI = [];               // extra Images (blood)
    this.CIDKMFLFJEJ = null;             // Text
    this.KEAGDNFNNMC = 1;                // base scale
    this.EDPJENMOOGC = 0;                // base local Y
  }

  _setScale(s) { if (alive(this.OONFFMIIIJN)) this.OONFFMIIIJN.localScale = new Vector3(s, s, 1); }
  _imgColor() {
    if (this.EECGBBLCAOP) this.EECGBBLCAOP.color = clr(this.FJDBNMAHHLA);
  }

  Update() {
    const type = this.FHOFNGHGNGF;
    const dt = Time.deltaTime;
    if (type === K.standart || type === K.combo) {
      if (!alive(this.OONFFMIIIJN)) return;
      let s = this.OONFFMIIIJN.localScale.x;
      const target = this.CNAGLGLEJMC < 0.2 ? this.KEAGDNFNNMC * 1.3 : this.KEAGDNFNNMC;
      s = s + (target - s) * Mathf.Clamp01(dt * 10);
      this._setScale(s);
      if (0.8 < this.CNAGLGLEJMC / this.ACBDHBLLEEK) {
        this.NJJAMIBLJKH.a -= dt + dt;
        if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.NJJAMIBLJKH);
      }
    } else if (type === K.blood) {
      let t = this.CNAGLGLEJMC;
      if (t < 0.15) {
        const a = this.FJDBNMAHHLA.a;
        this.FJDBNMAHHLA.a = a + (1 - a) * Mathf.Clamp01(dt * 20);
        this._imgColor();
        for (const im of this.FEFEIMLHAKI || []) if (im) im.color = clr(this.FJDBNMAHHLA);
        t = this.CNAGLGLEJMC;
      }
      if (0.8 < t / this.ACBDHBLLEEK) {
        this.FJDBNMAHHLA.a += dt * -4;
        this._imgColor();
        for (const im of this.FEFEIMLHAKI || []) if (im) im.color = clr(this.FJDBNMAHHLA);
      }
    } else {
      if (!alive(this.OONFFMIIIJN)) return;
      let s = this.OONFFMIIIJN.localScale.x;
      if (type === K.event_count) {
        const target = this.CNAGLGLEJMC < 0.2 ? this.KEAGDNFNNMC * 1.4 : this.KEAGDNFNNMC;
        s = s + (target - s) * Mathf.Clamp01(dt * 10);
        this._setScale(s);
        if (0.3 < this.CNAGLGLEJMC / this.ACBDHBLLEEK) {
          const car = G.CarController && G.CarController.KECGFPHIEHF;
          if (alive(car) && car.CBPOPFMFNFF) {
            this.NJJAMIBLJKH.a += dt * -3;
            if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.NJJAMIBLJKH);
            if (this.EECGBBLCAOP) { this.FJDBNMAHHLA.a = this.NJJAMIBLJKH.a; this._imgColor(); }
          }
        }
      } else {
        // pop to 1.4x then settle at 1.15x (rodata table {1.15, 1.4})
        const target = (this.CNAGLGLEJMC < 0.3 ? 1.4 : 1.15) * this.KEAGDNFNNMC;
        s = s + (target - s) * Mathf.Clamp01(dt * 5);
        this._setScale(s);
        if (0.6 < this.CNAGLGLEJMC / this.ACBDHBLLEEK) {
          this.NJJAMIBLJKH.a -= dt;
          if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.NJJAMIBLJKH);
          if (this.EECGBBLCAOP) { this.FJDBNMAHHLA.a -= dt; this._imgColor(); }
        }
      }
    }
    this.CNAGLGLEJMC += dt;
    if (this.CNAGLGLEJMC <= this.ACBDHBLLEEK) return;
    this.gameObject.SetActive(false);
  }

  // realtime variant of the pop animation (used while the game is paused), 0.95 s
  *BHAHHFJLFNI() {
    this.enabled = false;
    this.ACBDHBLLEEK = 0.95;
    const startTime = Time.realtimeSinceStartup;
    let lastTimeReal = 0;
    while (Time.realtimeSinceStartup < startTime + this.ACBDHBLLEEK) {
      if (!alive(this.OONFFMIIIJN)) return;
      const t = Time.realtimeSinceStartup - startTime;
      const dtt = t - lastTimeReal;
      let s = this.OONFFMIIIJN.localScale.x;
      const target = t < 0.2 ? this.KEAGDNFNNMC * 1.4 : this.KEAGDNFNNMC;
      s = s + Math.max(0, dtt * 10) * (target - s);
      this._setScale(s);
      if (0.3 < t / this.ACBDHBLLEEK) {
        this.NJJAMIBLJKH.a += dtt * -3;
        if (this.CIDKMFLFJEJ) this.CIDKMFLFJEJ.color = clr(this.NJJAMIBLJKH);
        if (this.EECGBBLCAOP) { this.FJDBNMAHHLA.a = this.NJJAMIBLJKH.a; this._imgColor(); }
      }
      lastTimeReal = t;
      yield null;
    }
    this.gameObject.SetActive(false);
  }

  // Show (reset colors/timer, activate, fit width to text length)
  NNIADFNMHGB() {
    if (!this.DIFNGFMLPMP) {
      if (this.FHOFNGHGNGF !== K.blood) {
        this.OONFFMIIIJN = this.transform;
        this.KEAGDNFNNMC = this.OONFFMIIIJN.localScale.x;
        this.EDPJENMOOGC = this.OONFFMIIIJN.localPosition.y;
      }
      if (this.EECGBBLCAOP) { this.FJDBNMAHHLA = clr(this.EECGBBLCAOP.color); this.IEDLIFLBMCE = clr(this.FJDBNMAHHLA); }
      if (alive(this.CIDKMFLFJEJ)) {
        this.CIDKMFLFJEJ.color = new Color(1, 1, 1, 1);
        this.DGBMPJHIMHO = new Color(1, 1, 1, 1);
      }
      this.DIFNGFMLPMP = true;
    } else {
      this.FJDBNMAHHLA = clr(this.IEDLIFLBMCE);
      this._imgColor();
      if (alive(this.CIDKMFLFJEJ)) {
        this.NJJAMIBLJKH = clr(this.DGBMPJHIMHO);
        this.CIDKMFLFJEJ.color = clr(this.NJJAMIBLJKH);
      }
    }
    this.CNAGLGLEJMC = 0;
    this.gameObject.SetActive(true);
    if (alive(this.OONFFMIIIJN) && alive(this.CIDKMFLFJEJ) && this.FHOFNGHGNGF !== K.event_count) {
      const f = (this.CIDKMFLFJEJ.text || '').length / 20;
      let w = Math.min(f, 1) * 580 + 420;
      if (f < 0) w = 420;
      this.OONFFMIIIJN.sizeDelta = new Vector2(w, this.OONFFMIIIJN.sizeDelta.y);
    }
  }
}
define('objDestructorHints', objDestructorHints);
