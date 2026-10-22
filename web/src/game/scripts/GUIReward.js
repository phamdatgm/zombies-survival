// GUIReward.cs — reward panel widget (data holder; driven by GUIGarage / GUIGameplay).
import { GameBehaviour, define } from '../base.js';

export class GUIReward extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.OONFFMIIIJN = null;     // RectTransform
    this.JFJDEINEOGG = null;     // Image
    this.JGGKLILEEDM = null;     // RectTransform
    this.HDCBOEDOPDG = null;     // GameObject silver
    this.BOOLBGPMGAD = null;     // Text silver
    this.OHOCLFPGAMA = null;     // GameObject gold
    this.GCLMMBKIJGD = null;     // Text gold
    this.BHJLHAFBNNJ = null;     // GameObject fuel
    this.DINKFHPBEIN = null;     // Text fuel
    this.GHHPOIGGCHA = null;     // GameObject
    this.BLHMMIFCODM = null;     // Text
  }
}
define('GUIReward', GUIReward);
