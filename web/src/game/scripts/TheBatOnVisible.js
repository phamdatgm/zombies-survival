// TheBatOnVisible: enables the bat Animator when it becomes visible.
import { GameBehaviour, define } from '../base.js';

export class TheBatOnVisible extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.NFABKCAPLMG = null; // Animator (serialized)
  }
  OnBecameVisible() {
    this.NFABKCAPLMG.enabled = true;
  }
}
define('TheBatOnVisible', TheBatOnVisible);
