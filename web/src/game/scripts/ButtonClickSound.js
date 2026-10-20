// ButtonClickSound: plays the UI click sound on Button click / EventTrigger PointerClick.
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class ButtonClickSound extends GameBehaviour {
  // compiler-generated lambda holder: c.LCOKJMOJPCM(entry) => entry.eventID == PointerClick
  static __c = { LCOKJMOJPCM(_) { return !!_ && _.eventID === 4; } };

  Awake() {
    const btn = this.GetComponent('Button');
    if (btn && btn.onClick) btn.onClick.AddListener(() => this.EAFFPOKJHCK());
    const trig = this.GetComponent('EventTrigger');
    // EventTrigger.triggers.SingleOrDefault(e => e.eventID == PointerClick).callback.AddListener(DFDCLIIOIGE)
    // (engine EventTrigger has no runtime listeners: hooked through OnPointerClick below)
    this._clickEntry = !!(trig && (trig.props.m_Delegates || []).filter(ButtonClickSound.__c.LCOKJMOJPCM).length === 1);
  }
  OnPointerClick(e) { if (this._clickEntry) this.DFDCLIIOIGE(e); }

  // play click sound (if sound is enabled)
  EAFFPOKJHCK() {
    const src = G.SoundScript && G.SoundScript.ECFNFAMPDND;
    const D = G.Main && G.Main.FBDDKIOEKDM;
    if (!D) return;
    if (D.BMMOMBGDEKF && D.BMMOMBGDEKF() && alive(src)) src.Play();
  }
  DFDCLIIOIGE(HPKNEPPAEIB) { this.EAFFPOKJHCK(); }
}
define('ButtonClickSound', ButtonClickSound);
