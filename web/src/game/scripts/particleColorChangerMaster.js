// particleColorChangerMaster: applies custom colour gradients / playback speed to groups of particle systems.
import { GameBehaviour, define } from '../base.js';
import { G } from '../G.js';

// nested serializable class particleColorChangerMaster.colorChange
export class colorChange {
  constructor() {
    this.Name = '';
    this.colored_ParticleSystem = []; // ParticleSystem[]
    this.Gradient_custom = null;      // Gradient
  }
}

export class particleColorChangerMaster extends GameBehaviour {
  static colorChange = colorChange;
  constructor(go, p) {
    super(go, p);
    this.CHNPGBKGGKO = 1;     // playback speed
    this.CHECIBBOEFO = [];    // colorChange[]
    this.HFENOMJKMEN = false; // apply once
    this.POBEBPNPHAB = false; // apply every frame
  }
  Update() {
    if (!this.HFENOMJKMEN && !this.POBEBPNPHAB) return;
    for (const cc of this.CHECIBBOEFO || []) {
      for (const ps of (cc && cc.colored_ParticleSystem) || []) {
        if (!ps) continue;
        // colorOverLifetime.color = Gradient_custom
        const C = ps.p && (ps.p.ColorModule || (ps.p.ColorModule = { enabled: true }));
        if (C && cc.Gradient_custom) { C.enabled = true; C.gradient = { minMaxState: 1, maxGradient: cc.Gradient_custom }; }
        // playbackSpeed
        if (ps.main) ps.main.simulationSpeed = this.CHNPGBKGGKO;
      }
    }
    this.HFENOMJKMEN = false;
  }
}
define('particleColorChangerMaster', particleColorChangerMaster);
G['particleColorChangerMaster.colorChange'] = colorChange;
