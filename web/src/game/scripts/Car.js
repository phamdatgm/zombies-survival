// Car: static car definition (data, [Serializable]; list in Main.GDPCMIGAPOM)
import { G } from '../G.js';
import { hexInts } from '../util.js';

export class Car {
  constructor(o) {
    this.name = null;                          // display name
    this.prefab_name = null;                   // prefab key name
    this.price = 0;                            // silver price
    this.price_premium = 0;
    this.upgrades_coefficient = 1.0;           // .ctor: 1.0
    this.upgrades_coefficient_premium = 1.0;   // .ctor: 1.0 (fmov ...,4 sets both)
    this.upgrades_coefficient_premium_pc = 1.0;
    this.upgrade_price_last_armor = 0;
    this.health_array = new Array(6).fill(0);  // hp per armor level (6)
    this.health_5lvl_premium = 0;
    this.event_race_mode = 0;                  // MDGGLDMKCFB
    this.free_color_id = 0;
    if (o) { Object.assign(this, o); this.health_array = hexInts(this.health_array); }
  }

  // current selected car definition: Main.KECGFPHIEHF.GDPCMIGAPOM[Main.LCFFGBBHMPH]
  static get Current() {
    const m = G.Main.KECGFPHIEHF;
    return m.GDPCMIGAPOM[G.Main.LCFFGBBHMPH];
  }

  // car name by id
  static DBJBMIGLBNF(NBOMPJEGJMP) {
    const cars = G.Main.KECGFPHIEHF && G.Main.KECGFPHIEHF.GDPCMIGAPOM;
    // TODO(verify): the out-of-range literal (3 non-alnum chars) is unknown; original only guards negative ids
    if (!cars || NBOMPJEGJMP < 0 || NBOMPJEGJMP >= cars.length) return '???';
    return cars[NBOMPJEGJMP].name;
  }

  // true unless Main.OJDDINBFCNH
  static NBMGBADFACE() { return !G.Main.OJDDINBFCNH; }
}
G.Car = Car;
