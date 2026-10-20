// DonateItem.cs — an entry of the (removed) in-app shop window: data holder only.
// Purchase handling lived in GUIGarage.DonateItem(item) -> Purchaser (removed, no-op).
import { GameBehaviour, define } from '../base.js';

export class DonateItem extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.HKGEOJPHLAN = '';       // product id
    this.DFOBJJIMMEE = 0;        // amount (coins/fuel)
    this.LNKBNEAEAJO = 0;        // APJHDPJBJLL item type (Silver=0 Gold=1 Fuel=2 SpecialOffer=3)
    this.KFMJHIOHBEE = 0;        // IDNANBIKFMM price currency (Silver=0 Gold=1 USD=2)
    this.BDHDNGGBOFK = 0;        // price
    this.CDLKLGBJCEA = null;     // Text amount
    this.ABAJEHALOLP = null;     // Text price
    this.GPMHOHNAAGB = null;     // Text
    this.KFLKJADCCBF = null;     // GameObject
    this.BMIFJDJJAGC = null;     // GameObject
    this.AIBDOEJJBGA = null;     // GameObject
    this.AJIIGIFLMKO = null;     // Text
  }
}
define('DonateItem', DonateItem);
