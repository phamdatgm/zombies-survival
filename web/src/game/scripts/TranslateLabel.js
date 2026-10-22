// TranslateLabel: sets its Text from Translate by key CPPHDOFMDEN
import { Text } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class TranslateLabel extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.CPPHDOFMDEN = null;   // translation key (serialized)
    this.HGBEHJCIMCO = null;   // Text
  }

  Awake() { this.HGBEHJCIMCO = this.GetComponent(Text); }

  // refresh text
  JJJNIPAKLJF() {
    if (!alive(this.HGBEHJCIMCO)) return;
    this.HGBEHJCIMCO.text = G.Translate.KECGFPHIEHF.JJJNIPAKLJF(this.CPPHDOFMDEN);
  }

  OnEnable() {
    if (!alive(this.HGBEHJCIMCO)) return;
    if (!alive(G.Translate && G.Translate.KECGFPHIEHF)) return;
    this.HGBEHJCIMCO.text = G.Translate.KECGFPHIEHF.JJJNIPAKLJF(this.CPPHDOFMDEN);
  }
}
define('TranslateLabel', TranslateLabel);
