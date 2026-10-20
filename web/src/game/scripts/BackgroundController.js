// BackgroundController (on Main Camera): instantiates the level background prefabs (_lvl_*), registers their
// GFXDisablers, sets up lightmaps if the scene has none, and spawns the extra props prefab for high GFX.
import { Vector3, Instantiate, World } from '../../engine/unity.js';
import { RenderState } from '../../engine/render.js';
import { getTexture } from '../../engine/assets.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

const gfx = () => { const d = G.Main && G.Main.FBDDKIOEKDM; return d ? d.CFDECDNFGJN : undefined; }; // DAFNMLEKHAD.CFDECDNFGJN graphics level

export class BackgroundController extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.IANCFCGAIDD = [];   // BGObject[] background prefabs
    this.GEAOJKJMEDB = [];   // GFXDisabler[] collected
    this.FAFINMGJJIM = 0;    // GFXDisabler count
    this.LEPENIBNBPF = null; // extra background prefab (water and ships / mountains)
    this.LBLMPOOOFNI = [];   // Texture2D[] lightmaps
    this.NMJHAFFHHHP = null; // prefab parented to this transform
    this.LOAFEEFNCBP = null; // props prefab (high GFX only)
    this.CHEAAFHJIMI = null; // props instance
    this.NAEFMFLPAND = null; // NMJHAFFHHHP instance
  }
  // apply GFX level to all registered GFXDisablers
  HAMLCJJANAJ() {
    if (!(G.Main && G.Main.FBDDKIOEKDM)) return;
    for (const d of this.GEAOJKJMEDB || []) if (alive(d)) d.DHEEBAEOLGF(0 < gfx());
  }
  // register the GFXDisabler of an instantiated background
  PGPEFBNBHHM(MIPKEALMBHI) {
    if (!(G.Main && G.Main.FBDDKIOEKDM)) return;
    if (!alive(MIPKEALMBHI)) return;
    const d = MIPKEALMBHI.GetComponent('GFXDisabler');
    if (!alive(d)) return;
    if (this.GEAOJKJMEDB.length <= this.FAFINMGJJIM) return;
    this.GEAOJKJMEDB[this.FAFINMGJJIM] = d;
    this.FAFINMGJJIM++;
  }
  Awake() {
    this.GEAOJKJMEDB = new Array((this.IANCFCGAIDD || []).length + 1).fill(null);
    // LightmapSettings.lightmaps = LBLMPOOOFNI when the scene has no lightmaps
    if (this.LBLMPOOOFNI && this.LBLMPOOOFNI.length && RenderState.lightmaps && RenderState.lightmaps.length === 0) {
      RenderState.lightmaps = this.LBLMPOOOFNI.map((k) => (typeof k === 'string' ? getTexture(k) : null));
    }
    for (const b of this.IANCFCGAIDD || []) {
      if (!b || !b.go) continue;
      let inst;
      if (b.pos_z === 0) inst = Instantiate(b.go);
      else {
        inst = Instantiate(b.go);
        const p = inst.transform.position;
        inst.transform.position = new Vector3(p.x, p.y, b.pos_z);
      }
      this.PGPEFBNBHHM(inst);
    }
    if (this.LEPENIBNBPF) this.PGPEFBNBHHM(Instantiate(this.LEPENIBNBPF));
    this.MLIIENHGIGK();
    this.NNDOCLOMBPN();
    this.HAMLCJJANAJ();
    this.DIMGJKDADNE();
  }
  // high-GFX props prefab on/off
  DIMGJKDADNE() {
    if (!(G.Main && G.Main.FBDDKIOEKDM)) return;
    if (!this.LOAFEEFNCBP) return;
    const v = gfx();
    if (!alive(this.CHEAAFHJIMI)) {
      if (0 < v) this.CHEAAFHJIMI = Instantiate(this.LOAFEEFNCBP);
      return;
    }
    const act = this.CHEAAFHJIMI.activeSelf;
    if (v < 1) { if (act) this.CHEAAFHJIMI.SetActive(false); }
    else if (!act) this.CHEAAFHJIMI.SetActive(true);
  }
  // static icall toggled by GFX level (bool). TODO(verify): icall 0x59e800 assumed RenderSettings.fog
  NNDOCLOMBPN() {
    if (!(G.Main && G.Main.FBDDKIOEKDM)) return;
    const on = 0 < gfx();
    const scene = World.current && World.current.root;
    if (!scene) return;
    if (on) { if (!scene.fog && scene.userData._fog) scene.fog = scene.userData._fog; }
    else if (scene.fog) { scene.userData._fog = scene.fog; scene.fog = null; }
  }
  // instantiate (or re-show) NMJHAFFHHHP under this transform
  MLIIENHGIGK() {
    if (!this.NMJHAFFHHHP) return;
    if (alive(this.NAEFMFLPAND)) { this.NAEFMFLPAND.SetActive(true); return; }
    this.NAEFMFLPAND = Instantiate(this.NMJHAFFHHHP, this.transform);
  }
}
define('BackgroundController', BackgroundController);
