// Crystal.SafeArea: notch safe-area fitter. The build only contains the .ctor/.cctor (simulation rects);
// on the web there is no notch, so this is a no-op component that keeps the serialized fields.
import { GameBehaviour, define } from '../base.js';
import { E } from '../enums.js';

export class SafeArea extends GameBehaviour {
  static OIFALEJNHIC = E.SafeArea_FCEBFJCINOI.iPhoneX; // simulated device (.cctor = 1)
  constructor(go, p) {
    super(go, p);
    // simulation safe-area rects (x, y, w, h) for iPhoneX / XsMax / Pixel3XL LSL / LSR, from .ctor
    this.IJIBNLOCNJF = [{ x: 0, y: 0.04187779, width: 1, height: 0.9039562 }, { x: 0.05420997, y: 0.05599237, width: 0.8916016, height: 0.94400763 }];
    this.ALCEELDOKOA = [{ x: 0, y: 0.03794643, width: 1, height: 0.9129464 }, { x: 0.04910714, y: 0.05072464, width: 0.9017857, height: 0.9492754 }];
    this.KOPGOECAOLK = [{ x: 0, y: 0, width: 1, height: 0.9422 }, { x: 0, y: 0, width: 0.9422, height: 1 }];
    this.KGCFOALOKPO = [{ x: 0, y: 0, width: 1, height: 0.9422 }, { x: 0.0578, y: 0, width: 0.9422, height: 1 }];
    this.LPHFPMLAIJK = null;                 // RectTransform
    this.NEKFCGJEMNC = { x: 0, y: 0, width: 0, height: 0 }; // last safe area
    this.FGNMNFOKEIM = { x: 0, y: 0 };       // last screen size
    this.HJKNEHDAEJI = 5;                    // last orientation (AutoRotation)
    this.DOHDGFGOGPN = true;                 // conform X (serialized)
    this.MKIMLHAFIOL = false;                // conform Y (serialized)
  }
}
define('SafeArea', SafeArea);
