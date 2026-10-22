// Assets.SimpleAndroidNotifications.Helpers.Popup: simple message popup (CanvasGroup + Text).
import { GameBehaviour, define } from '../base.js';

// C# string.Format with {0}, {1:fmt} placeholders (format specifiers ignored)
function format(s, args) { return String(s).replace(/\{(\d+)(?::[^}]*)?\}/g, (m, i) => (args[i] !== undefined ? String(args[i]) : m)); }

export class Popup extends GameBehaviour {
  static JCINAFGHFFN = null; // instance
  constructor(go, p) {
    super(go, p);
    this.EFCLHINCAJK = null; // CanvasGroup
    this.MKDCFKMFIJH = null; // Text
  }
  Awake() { Popup.JCINAFGHFFN = this; }
  // Show(format, args)
  GLNFGKNJBHH(HOGMBEOJKPM, OHOAJCLLPDH) {
    if (OHOAJCLLPDH && OHOAJCLLPDH.length) HOGMBEOJKPM = format(HOGMBEOJKPM, OHOAJCLLPDH);
    if (this.MKDCFKMFIJH) this.MKDCFKMFIJH.text = HOGMBEOJKPM;
    if (this.EFCLHINCAJK) { this.EFCLHINCAJK.blocksRaycasts = true; this.EFCLHINCAJK.alpha = 1; }
  }
  // Hide
  JGDCBENNDFO() {
    if (this.EFCLHINCAJK) { this.EFCLHINCAJK.blocksRaycasts = false; this.EFCLHINCAJK.alpha = 0; }
  }
}
define('Popup', Popup);
