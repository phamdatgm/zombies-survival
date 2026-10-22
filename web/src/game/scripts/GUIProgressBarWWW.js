// GUIProgressBarWWW: fades out an Image over ACBDHBLLEEK seconds, then hides MIPKEALMBHI.
import { Time, Color } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

const clr = (c) => new Color(c.r, c.g, c.b, c.a);

export class GUIProgressBarWWW extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.MIPKEALMBHI = null;                 // object to hide at the end
    this.ECNDCPJBEHP = null;                 // Image
    this.ACBDHBLLEEK = 1;                    // duration
    this.DLCMLDLHLLC = false;                // playing
    this.DIFNGFMLPMP = false;                // initial color saved
    this.CNAGLGLEJMC = 0;                    // timer
    this.IEDLIFLBMCE = new Color(0, 0, 0, 0); // initial color
    this.FJDBNMAHHLA = new Color(1, 1, 1, 1); // current color
  }
  Update() {
    if (!this.DLCMLDLHLLC) return;
    this.FJDBNMAHHLA.a -= Time.deltaTime;
    if (this.ECNDCPJBEHP) this.ECNDCPJBEHP.color = clr(this.FJDBNMAHHLA);
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.CNAGLGLEJMC <= this.ACBDHBLLEEK) return;
    this.DLCMLDLHLLC = false;
    if (this.MIPKEALMBHI) this.MIPKEALMBHI.SetActive(false);
  }
  // start fade
  APFABOGFKED() {
    if (!this.DIFNGFMLPMP) { if (this.ECNDCPJBEHP) this.IEDLIFLBMCE = clr(this.ECNDCPJBEHP.color); this.DIFNGFMLPMP = true; }
    if (this.ECNDCPJBEHP) this.FJDBNMAHHLA = clr(this.ECNDCPJBEHP.color);
    this.DLCMLDLHLLC = true;
    this.CNAGLGLEJMC = 0;
  }
  OnEnable() {
    if (!this.DIFNGFMLPMP) return;
    if (this.ECNDCPJBEHP) this.ECNDCPJBEHP.color = clr(this.IEDLIFLBMCE);
  }
}
define('GUIProgressBarWWW', GUIProgressBarWWW);
