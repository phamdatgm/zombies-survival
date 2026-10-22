// MoveBackground: sky dome following the car (called by CarController with the car position), drifting clouds.
import { Vector3, Time, Random } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class MoveBackground extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.NBCLGLJCBAP = 1;              // follow factor
    this.LIEHBGFFHFF = null;           // cached transform
    this.EDPJENMOOGC = Vector3.zero;   // start position
    this.IPHIIEPHGCC = Vector3.zero;   // current position
    this.HLOMPCBOBAJ = [];             // Transform[] clouds
    this.NLLLAJAECNI = [];             // Vector3[] cloud local positions
    this.BKOMAHBJNAH = [];             // float[] cloud speeds
    this.LHMHEIBADPF = 12;             // cloud wrap z
  }
  // follow position KCNOMBKCNBM (car position)
  CKHDANMOBCL(KCNOMBKCNBM) {
    const p = this.LIEHBGFFHFF.position;
    // disasm: z = speed * (K.z + start.z + 9)
    this.IPHIIEPHGCC = new Vector3(p.x, p.y, this.NBCLGLJCBAP * (KCNOMBKCNBM.z + this.EDPJENMOOGC.z + 9.0));
    this.LIEHBGFFHFF.position = this.IPHIIEPHGCC;
    const dt = Time.deltaTime;
    const n = this.HLOMPCBOBAJ ? this.HLOMPCBOBAJ.length : 0;
    for (let i = 0; i < n; i++) {
      const v = this.NLLLAJAECNI[i];
      let z = v.z + dt * this.BKOMAHBJNAH[i];
      if (this.LHMHEIBADPF < z) z = z * -1.8;
      this.NLLLAJAECNI[i] = new Vector3(v.x, v.y, z);
      if (this.HLOMPCBOBAJ[i]) this.HLOMPCBOBAJ[i].localPosition = this.NLLLAJAECNI[i];
    }
  }
  Awake() {
    this.LIEHBGFFHFF = this.transform;
    this.EDPJENMOOGC = this.LIEHBGFFHFF.position;
    if (!this.HLOMPCBOBAJ) return;
    this.NLLLAJAECNI = new Array(this.HLOMPCBOBAJ.length);
    this.BKOMAHBJNAH = new Array(this.HLOMPCBOBAJ.length);
    for (let i = 0; i < this.HLOMPCBOBAJ.length; i++) {
      this.BKOMAHBJNAH[i] = Random.Range(0.03, 0.1);
      const t = this.HLOMPCBOBAJ[i];
      this.NLLLAJAECNI[i] = t ? t.localPosition : Vector3.zero;
    }
  }
}
define('MoveBackground', MoveBackground);
