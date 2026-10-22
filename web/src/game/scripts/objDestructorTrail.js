// objDestructorTrail: pooled bullet trail (FX_bullet_trail). Fired with EPHPBNKKJLE(from, to),
// deactivates itself after ACBDHBLLEEK seconds or when it passes the target / CarController.BOAPLCDFEEF.
import { Vector3, Quaternion, Time, Random } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class objDestructorTrail extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.ACBDHBLLEEK = 0.4;            // lifetime (s)
    this.CNAGLGLEJMC = 0;              // elapsed
    this.LIEHBGFFHFF = null;           // Transform (serialized)
    this.NIIFDMDCOCF = null;           // Rigidbody (serialized)
    this.ECLAFDPIDLP = Vector3.zero;   // target point
  }
  // fire trail from EDPJENMOOGC towards PACCGKKFCDM
  EPHPBNKKJLE(EDPJENMOOGC, PACCGKKFCDM) {
    const CC = G.CarController;
    this.LIEHBGFFHFF.rotation = Quaternion.LookRotation(CC ? CC.MDLICIBKOGE || Vector3.forward : Vector3.forward);
    this.LIEHBGFFHFF.position = EDPJENMOOGC;
    this.ECLAFDPIDLP = PACCGKKFCDM;
    this.CNAGLGLEJMC = 0;
    this.gameObject.SetActive(true);
    this.NIIFDMDCOCF.velocity = Vector3.zero;
    const dir = CC && CC.MDLICIBKOGE ? CC.MDLICIBKOGE : Vector3.forward;   // shot direction
    this.NIIFDMDCOCF.AddForce(dir.mul(Random.RangeInt(4800, 5100)));
  }
  Update() {
    this.CNAGLGLEJMC += Time.deltaTime;
    if (this.CNAGLGLEJMC <= this.ACBDHBLLEEK) {
      const p = this.LIEHBGFFHFF.position;
      if (p.z <= this.ECLAFDPIDLP.z) {
        const lim = G.CarController ? G.CarController.BOAPLCDFEEF : null;
        if (!lim || lim.sqrMagnitude < 9.9999994e-11) return;
        if (p.z <= lim.z) return;
      }
    }
    this.gameObject.SetActive(false);
  }
}
define('objDestructorTrail', objDestructorTrail);
