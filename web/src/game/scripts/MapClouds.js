// MapClouds.cs — two cloud images scrolling horizontally over the map, wrapping at ±1600.
import { Time, Random, Vector2 } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class MapClouds extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.PDAOOLHEMCB = [];       // RectTransform[] clouds
    this.LJLKALOLHMN = 1600;     // wrap distance
    this.BDHPFNMFDKB = 0;        // step this frame
    this.CENHPPKIMHH = 1;        // direction (+1 left, -1 right)
  }
  Start() { if (Random.RangeInt(0, 100) < 50) this.CENHPPKIMHH = -1; }
  LateUpdate() {
    this.BDHPFNMFDKB = Time.deltaTime * 20;
    const c = this.PDAOOLHEMCB || [];
    if (c.length > 0) this.GNKKKBEHJOH(c[0]);
    if (c.length > 1) this.GNKKKBEHJOH(c[1]);
  }
  GNKKKBEHJOH(HAKKOAADCOE) {
    if (!HAKKOAADCOE) return;
    const a = HAKKOAADCOE.anchoredPosition;
    HAKKOAADCOE.anchoredPosition = new Vector2(a.x - this.BDHPFNMFDKB * this.CENHPPKIMHH, a.y);
    const x = HAKKOAADCOE.anchoredPosition.x;
    const L = this.LJLKALOLHMN;
    if (this.CENHPPKIMHH === 1) { if (-L <= x) return; HAKKOAADCOE.anchoredPosition = new Vector2(L, HAKKOAADCOE.anchoredPosition.y); }
    else { if (x <= L) return; HAKKOAADCOE.anchoredPosition = new Vector2(-L, HAKKOAADCOE.anchoredPosition.y); }
  }
}
define('MapClouds', MapClouds);
