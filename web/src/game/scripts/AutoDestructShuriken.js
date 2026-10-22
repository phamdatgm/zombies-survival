// AutoDestructShuriken: particle FX that destroys itself (or deactivates when pooled) after its duration.
import { Time, Destroy, ParticleSystem } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';

export class AutoDestructShuriken extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.LIEHBGFFHFF = null;  // Transform (serialized)
    this.KPFIPEBINCA = null;  // ParticleSystem (serialized)
    this.HHGIPCGNNOK = false; // pooled: deactivate instead of destroy
    this.CNAGLGLEJMC = 0;     // elapsed
    this.ACBDHBLLEEK = 0;     // duration
  }
  // restart (pool reuse)
  BLNLIDHOLOJ() {
    this.CNAGLGLEJMC = 0;
    this.ACBDHBLLEEK = this.KPFIPEBINCA.main.duration;
    this.gameObject.SetActive(true);
    this.KPFIPEBINCA.Play(true);
  }
  Update() {
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.CNAGLGLEJMC <= this.ACBDHBLLEEK) return;
    if (!this.HHGIPCGNNOK) Destroy(this.gameObject);
    else this.gameObject.SetActive(false);
  }
  Start() {
    if (!alive(this.KPFIPEBINCA)) this.KPFIPEBINCA = this.gameObject.GetComponent(ParticleSystem);
    if (this.KPFIPEBINCA) this.ACBDHBLLEEK = this.KPFIPEBINCA.main.duration;
  }
}
define('AutoDestructShuriken', AutoDestructShuriken);
