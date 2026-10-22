// Cloud: background cloud data (data, [Serializable])
import { G } from '../G.js';

export class Cloud {
  constructor(o) {
    this.speed = 5; // .ctor
    if (o) Object.assign(this, o);
  }
}
G.Cloud = Cloud;
