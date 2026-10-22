// ZombieActivator: wakes a zombie (animator, collider, Zombie script) the first time it becomes visible.
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

export class ZombieActivator extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.DIFNGFMLPMP = false; // already activated
    this.ILANJMBJGGL = null;  // Zombie
    this.NFABKCAPLMG = null;  // Animator
    this.EFOGAOHIGOE = null;  // Collider
  }
  OnBecameVisible() {
    if (this.DIFNGFMLPMP) return;
    this.DIFNGFMLPMP = true;
    if (alive(this.NFABKCAPLMG)) this.NFABKCAPLMG.enabled = true;
    if (alive(this.EFOGAOHIGOE)) this.EFOGAOHIGOE.enabled = true;
    const z = this.ILANJMBJGGL;
    if (!alive(z)) return;
    z.enabled = true;
    z.LJLGIPJCHFC(false); // snap to ground
    if (alive(z.ABNPNOKAMEB) && z.FHOFNGHGNGF !== 6 /* tank */) z.ABNPNOKAMEB.SetActive(true);
    const car = G.CarController && G.CarController.KECGFPHIEHF;
    if (!alive(car) || !alive(car.CDDOBCENBOG)) return;
    const gui = car.CDDOBCENBOG;
    // encyclopedia: first encounter of this zombie kind
    if (gui.NNOEOMKNGJL && gui.NNOEOMKNGJL(z.CPFPFGOIDDO)) gui.PKECIKMIECO && gui.PKECIKMIECO(z.CPFPFGOIDDO, this.gameObject);
  }
}
define('ZombieActivator', ZombieActivator);
