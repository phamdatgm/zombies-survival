// TramplinBarrelPlatform: ramp platform rotating when its barrel is destroyed / when the car lands on it.
import { Vector3, Quaternion, Time, Layers } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class TramplinBarrelPlatform extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.MAAIDMGLMAD = null;          // TramplinBarrel
    this.PGBNDEOPBEH = null;          // platform transform (rotated)
    this.NCGFBDBFEOO = Vector3.zero;  // initial local euler
    this.HKNEBOHOKCI = 3;             // rotation speed factor
    this.DIDHMFHPPBF = 0;             // elapsed
    this.PCLEHDHHBIN = false;         // car touched platform (mode 2)
    this.IDLKGCBIGEB = null;          // upper pivot (check_pivot_up)
    this.DGCPHHKOBIF = 0;             // initial upper pivot height
    this.APLIHFFEANG = null;          // lower pivot on platform (check_pivot_down)
  }
  // lower the upper pivot and halve the rotation speed
  LNNIKMAEIEI() {
    const p = this.IDLKGCBIGEB.position;
    // disasm: y = (y_up + y_down) / 2.5
    this.IDLKGCBIGEB.position = new Vector3(p.x, (p.y + this.APLIHFFEANG.position.y) / 2.5, p.z);
    this.HKNEBOHOKCI = (this.HKNEBOHOKCI / 2) | 0;
  }
  Update() {
    const dt = Time.deltaTime;
    if (!this.PCLEHDHHBIN) {
      if (this.IDLKGCBIGEB.position.y <= this.APLIHFFEANG.position.y) this.enabled = false;
      else this.PGBNDEOPBEH.Rotate(Vector3.right.mul(this.HKNEBOHOKCI * -20.0 * dt));
    } else if (this.IDLKGCBIGEB.position.y < this.DGCPHHKOBIF) {
      this.PGBNDEOPBEH.Rotate(Vector3.right.mul(this.HKNEBOHOKCI * 10.0 * dt));
    }
    this.DIDHMFHPPBF += dt;
    if (3.0 < this.DIDHMFHPPBF) this.enabled = false;
  }
  Start() {
    if (!alive(this.MAAIDMGLMAD)) {
      G.Main && G.Main.EEKNCFLMGDP && G.Main.EEKNCFLMGDP('Tramplin error 2!');
      this.enabled = false;
    } else if (this.MAAIDMGLMAD.KPCMPKFIJDA === 2) {
      this.DGCPHHKOBIF = this.IDLKGCBIGEB.position.y;
    }
    this.NCGFBDBFEOO = this.PGBNDEOPBEH.localRotation.eulerAngles;
  }
  // pre-tilt the platform by DBHAEOFNOKO degrees (car upgrade level)
  BPABDCCIAGL(DBHAEOFNOKO) {
    const e = this.PGBNDEOPBEH.rotation.eulerAngles;
    this.PGBNDEOPBEH.rotation = Quaternion.Euler(e.x - DBHAEOFNOKO, e.y, e.z);
  }
  OnCollisionEnter(PNKAOOKHBAI) {
    if (!this.MAAIDMGLMAD) return;
    if (this.MAAIDMGLMAD.KPCMPKFIJDA !== 2) return;
    if (PNKAOOKHBAI.gameObject.layer === Layers.NameToLayer('car')) this.PCLEHDHHBIN = true;
  }
}
define('TramplinBarrelPlatform', TramplinBarrelPlatform);
