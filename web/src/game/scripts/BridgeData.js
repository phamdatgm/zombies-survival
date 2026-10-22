// BridgeData: server response payload (data only; server removed in the web port)
import { G } from '../G.js';

export class BridgeData {
  constructor(o) {
    this.player = null;   // Player
    this.events = null;   // EventContest[]
    this.save = null;     // string
    this.hash = null;     // string
    if (o) Object.assign(this, o);
  }
}
G.BridgeData = BridgeData;
