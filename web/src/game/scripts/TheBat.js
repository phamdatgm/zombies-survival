// TheBat: flies up for 7 s after being hit, then deactivates.
import { Vector3, Time } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class TheBat extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null; // Transform (serialized)
    this.NFABKCAPLMG = null; // Animator (serialized)
    this.GMFAMFJABMJ = 0;    // elapsed
  }
  Update() {
    if (this.GMFAMFJABMJ <= 7.0) {
      this.LIEHBGFFHFF.Translate(Vector3.up.mul(3.0 * Time.deltaTime));
      this.GMFAMFJABMJ += Time.deltaTime;
    } else {
      this.gameObject.SetActive(false);
      this.enabled = false;
    }
  }
}
define('TheBat', TheBat);
