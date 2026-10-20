// GUILevel.cs — map level button (data holder; driven by Level / GUIGarage).
import { GameBehaviour, define } from '../base.js';

export class GUILevel extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.HKGEOJPHLAN = 0;        // level id
    this.OFAOIFGJAJM = null;     // Image button
    this.AEMCHCABDGE = null;     // RectTransform road / progress
    this.DAFKFKJGDJI = null;     // Text level number
    this.OFFIBLCMIJF = null;     // Text
    this.EAHAABHNLEB = null;     // Image
    this.HMNLIDOBDAB = null;     // Image
    this.CEAGGLCBPDO = null;     // GameObject
  }
}
define('GUILevel', GUILevel);
