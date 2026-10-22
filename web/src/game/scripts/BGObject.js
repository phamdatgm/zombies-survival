// BGObject: serializable entry of BackgroundController.IANCFCGAIDD (background prefab + optional z).
import { G } from '../G.js';

export class BGObject {
  constructor() {
    this.go = null;  // GameObject prefab (key string '@GameObject/...')
    this.pos_z = 0;  // z position override (0 = keep prefab position)
  }
}
G.BGObject = BGObject;
