// CatGarage.cs — the garage cat: occasionally plays its "wash" animation and teleports between spots.
// KHDFDGMBOIJ / DPMNCABIAJA are driven by CameraGarage.
import { Time, Random, Quaternion } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';

export class CatGarage extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.NFABKCAPLMG = null;     // Animator
    this.GCHEMKAKNOI = 0;        // next idle-animation time
    this.FPIDNOJBMHO = [];       // Vector3[] spots
    this.GDOHMECHLAM = [];       // int[] yaw per spot
  }
  // reset the timer and teleport to a random spot (with its yaw)
  KHDFDGMBOIJ() {
    this.GCHEMKAKNOI = Time.time + Random.RangeInt(5, 20);
    const spots = this.FPIDNOJBMHO, yaws = this.GDOHMECHLAM;
    if (!spots || !yaws || spots.length !== yaws.length || !spots.length) return;
    const i = Random.RangeInt(0, spots.length);
    this.transform.position = spots[i];
    const e = this.transform.rotation.eulerAngles;
    this.transform.rotation = Quaternion.Euler(e.x, yaws[i], e.z); // TODO(verify): x/z source lost in decompile
  }
  BJOLPLBELIA() { this.GCHEMKAKNOI = Time.time + Random.RangeInt(5, 20); }
  // idle animation tick
  DPMNCABIAJA() {
    if (this.GCHEMKAKNOI < Time.time) {
      this.GCHEMKAKNOI = Time.time + Random.RangeInt(5, 20);
      if (alive(this.NFABKCAPLMG)) this.NFABKCAPLMG.Play('wash'); // Animator.Play(hash("wash"), -1, -inf)
    }
  }
}
define('CatGarage', CatGarage);
