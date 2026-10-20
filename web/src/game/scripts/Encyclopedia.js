// Encyclopedia: encyclopedia entry (data, [Serializable]; list in Main.NGBIFHJDNEC)
import { G } from '../G.js';

export class Encyclopedia {
  constructor(o) {
    this.encyclopediaItem = 0;     // CPFPFGOIDDO
    this.damage = 0;
    this.money = 0;
    this.title = null;
    this.desc = null;
    this.icon = null;              // Sprite key
    this.is_open_by_default = false;
    this.status = 0;               // ECNOJHCNLAL None/OpenedInRace/OpenedInRaceAndInGarage
    if (o) { Object.assign(this, o); this.is_open_by_default = !!this.is_open_by_default; }
  }

  // entry by item id (last match)
  static EILIOBHFJNB(BAMPGHJACCL) {
    let r = null;
    const arr = G.Main.KECGFPHIEHF.NGBIFHJDNEC;
    for (let i = 0; i < arr.length; i++) if (arr[i].encyclopediaItem === BAMPGHJACCL) r = arr[i];
    return r;
  }

  // count opened entries: NKCNPLEGPAJ ? status > 0 : status == OpenedInRace(1)
  static DFJMLAIHNDC(NKCNPLEGPAJ) {
    let n = 0;
    const arr = G.Main.KECGFPHIEHF.NGBIFHJDNEC;
    for (let i = 0; i < arr.length; i++) {
      if (NKCNPLEGPAJ) { if (arr[i].status > 0) n++; } else if (arr[i].status === 1) n++;
    }
    return n;
  }
}
G.Encyclopedia = Encyclopedia;
