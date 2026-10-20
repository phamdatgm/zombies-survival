// SoundScript: all game sounds / music as static AudioSources (on _MainData/sounds, persistent).
// Sound effects respect the profile "sound" setting (BMMOMBGDEKF), music the "music" setting (LKKDIBOKNMJ).
// Music sources (garage FPOJDHNIFPP, race tracks ODEINOIAFPC/LONDFMJFHEL) loop.
// C# "ref AudioSource" parameters are passed as the static field name (string) or {arr, i} (array slot).
import { AudioSource, Audio, Time, Random } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';

function prof() { return G.Main.FBDDKIOEKDM; }
function play(src) { src.Play(); }   // icall AudioSource.Play(delay 0)

export class SoundScript extends GameBehaviour {
  // ---- static sources
  static KACGFPFKHHB = null;   // AudioSource[] zombie voices
  static MDJDHLEFJEB = null;   // AudioSource[] cat voices
  static GBOKPGCEKFO = null;   // AudioSource[] dog voices
  static CIACMMIMEAA = null;   // blood splash
  static HHFECFNJNHK = null;   // zombies intro (0.7)
  static BMBHPBPPONE = null;   // light wood smash
  static LGDEFJKJLJD = null;   // explosion
  static OEAJEFIFHGO = null;   // gun shot
  static ECFNFAMPDND = null;   // UI click
  static HLNBFKLNLGF = null;   // paint (garage color)
  static JJMBOCJABEL = null;   // "GO" (race start)
  static IGAGBIKPOMH = null;   // false start engine
  static CIMAPDEBGGG = null;   // cash register (purchase)
  static CLILGEMKKFH = null;   // crow
  static IMKHCBJCJNB = null;   // nitro (loop, 0.55)
  static OJMNAEKLGHK = 1.0;
  static KOFBPJBKFNP = null;   // car crash
  static HPJAHDBOGBJ = null;   // wood door broken
  static AMDKJJNAGAE = null;   // snowman (halloween)
  static FPOJDHNIFPP = null;   // garage music (loop, 0.75)
  static LONDFMJFHEL = null;   // current race music
  static ODEINOIAFPC = [null, null, null];   // AudioSource[3] race tracks (loop, 0.8) (.cctor: new AudioSource[3])
  static BOAIDFNDDEF = 0;
  static DCIDNLKLGGF = null;   // last announcer voice played
  static NJADFOFEOLJ = 0;      // announcer busy until (Time.time)
  static MGODLMBHILI = null;   // voice "flip"
  static ADFNANLKGBM = null;   // voice "that hurts"
  static CLAHNEECAHP = null;   // voice "wasted"
  static DDDFBDFBFDG = null;   // voice "too slow"
  static FBHENMIBGOB = null;   // voice "sorry bird"
  static AJOAPIMLFPP = null;   // voice "great combo"
  static AIDAFCHLFPO = null;   // voice "splatter bonus"
  static MLBNPLEMPEL = null;   // voice "extra style"
  static AOCKLMLCIHF = 0;      // last zombie voice index
  static JMPGAKHBKJO = 0;      // zombie voice repeat-guard time

  constructor(go, p) {
    super(go, p);
    this.HHGBKCLFKDP = [];   // AudioClip[] zombie voices
    this.EMAPPFDBJPN = [];   // AudioClip[] cat
    this.JINEIILKJFA = [];   // AudioClip[] dog
    this.JGIHDHHNPMH = null; this.ILPOOCBOEPL = null; this.IFKPKPNGBIP = null; this.DPJBAHHHOAN = null;
    this.IDPBPFEFHDN = null; this.HFIFLHJGCID = null; this.FEAOJCPGIDF = null; this.IGICPCMIONE = null;
    this.AAKIHMDFLDF = null; this.BCMFAINFNPO = null; this.FIFDBNPONCH = null; this.LJOMOHCDBII = null;
    this.PBBIKCIIKDA = null; this.BNKLKIBDNLG = null; this.JCBFCJIPCKK = null; this.BPCMAPLDOAC = null;
    this.HKAOKEKOGOE = [];   // AudioClip[] race tracks
    this.JEJAFGBHAKD = false; // all sources created
  }

  // ---- ref helpers
  static _setRef(ref, src) {
    if (typeof ref === 'string') SoundScript[ref] = src;
    else if (ref && ref.arr) ref.arr[ref.i] = src;
    else if (typeof ref === 'function') ref(src);
  }
  static _getRef(ref) {
    if (typeof ref === 'string') return SoundScript[ref];
    if (ref && ref.arr) return ref.arr[ref.i];
    return null;
  }

  // play a sound effect (if sound is on)
  static GIGBLEBBIEK(JOPAPOBNEBI) {
    if (!prof().BMMOMBGDEKF()) return;
    if (!alive(JOPAPOBNEBI)) return;
    play(JOPAPOBNEBI);
  }

  // stop the announcer voice
  static HCPNLKMMKFA() {
    const s = SoundScript.DCIDNLKLGGF;
    if (!alive(s) || !s.isPlaying) return;
    s.Stop();
  }

  // play music (if music is on); garage music at 0.8, race music: GIKHENEMKGM -> pick a random race track
  static HCEFONCADKE(JOPAPOBNEBI, GIKHENEMKGM = false) {
    if (!prof().LKKDIBOKNMJ()) return;
    if (!alive(JOPAPOBNEBI)) return;
    if (JOPAPOBNEBI === SoundScript.FPOJDHNIFPP) {
      JOPAPOBNEBI.volume = 0.8;
    } else if (JOPAPOBNEBI === SoundScript.LONDFMJFHEL && GIKHENEMKGM) {
      JOPAPOBNEBI.volume = 0.8;
      const arr = SoundScript.ODEINOIAFPC;
      JOPAPOBNEBI = arr[Math.floor(Math.random() * arr.length)];
      SoundScript.LONDFMJFHEL = JOPAPOBNEBI;
      if (!JOPAPOBNEBI) return;
    }
    play(JOPAPOBNEBI);
  }

  // create an AudioSource on this object (ref target, clip, volume, playOnAwake, loop)
  JNDBAPHNLIC(JOPAPOBNEBI, BEFPOGONNLN, JOILPPKMILL, ELGLKECMBDF, KDONOCOODJE) {
    const s = this.gameObject.AddComponent(AudioSource);
    s.loop = !!KDONOCOODJE;
    s.volume = JOILPPKMILL;
    s.playOnAwake = !!ELGLKECMBDF;
    s.clip = BEFPOGONNLN || null;
    SoundScript._setRef(JOPAPOBNEBI, s);
    return s;
  }

  Awake() { this.PPKCIGGJNJF(); }

  // early sources: click, explosion, garage music
  PPKCIGGJNJF() {
    this.JNDBAPHNLIC('ECFNFAMPDND', this.HFIFLHJGCID, 1.0, false, false);
    this.JNDBAPHNLIC('LGDEFJKJLJD', this.DPJBAHHHOAN, 1.0, false, false);
    const m = this.JNDBAPHNLIC('FPOJDHNIFPP', this.BPCMAPLDOAC, 0.75, false, true);
    m.bus = 'music';
  }

  // play an announcer voice if none is running (and sound is on). Returns true if started.
  static FIGKLLNAMLG(JOPAPOBNEBI) {
    if (!prof().BMMOMBGDEKF()) return false;
    if (!alive(JOPAPOBNEBI)) return false;
    if (!(SoundScript.NJADFOFEOLJ < Time.time)) return false;
    if (G.CarController && G.CarController.MKEGHDPIIFK) return false;
    JOPAPOBNEBI.Play();
    SoundScript.DCIDNLKLGGF = JOPAPOBNEBI;
    SoundScript.NJADFOFEOLJ = Time.time + SoundScript._clipLength(JOPAPOBNEBI);
    return true;
  }
  static _clipLength(src) {
    if (src._dur) return src._dur;
    try { const b = src.clip ? Audio.getSync(src.clip) : null; if (b) return b.duration; } catch (e) { /* ignore */ }
    return 1.5;   // TODO(verify): AudioClip.length before the clip is decoded
  }

  // create the remaining sources (once)
  DPJAADHMLIA() {
    if (this.JEJAFGBHAKD) return;
    this.JEJAFGBHAKD = true;
    SoundScript.KACGFPFKHHB = new Array(this.HHGBKCLFKDP.length).fill(null);
    for (let i = 0; i < SoundScript.KACGFPFKHHB.length; i++) this.JNDBAPHNLIC({ arr: SoundScript.KACGFPFKHHB, i }, this.HHGBKCLFKDP[i], 1.0, false, false);
    SoundScript.MDJDHLEFJEB = new Array(this.EMAPPFDBJPN.length).fill(null);
    for (let i = 0; i < SoundScript.MDJDHLEFJEB.length; i++) this.JNDBAPHNLIC({ arr: SoundScript.MDJDHLEFJEB, i }, this.EMAPPFDBJPN[i], 1.0, false, false);
    SoundScript.GBOKPGCEKFO = new Array(this.JINEIILKJFA.length).fill(null);
    for (let i = 0; i < SoundScript.GBOKPGCEKFO.length; i++) this.JNDBAPHNLIC({ arr: SoundScript.GBOKPGCEKFO, i }, this.JINEIILKJFA[i], 1.0, false, false);
    this.JNDBAPHNLIC('CIACMMIMEAA', this.JGIHDHHNPMH, 1.0, false, false);
    this.JNDBAPHNLIC('HHFECFNJNHK', this.ILPOOCBOEPL, 0.7, false, false);
    this.JNDBAPHNLIC('BMBHPBPPONE', this.IFKPKPNGBIP, 1.0, false, false);
    this.JNDBAPHNLIC('OEAJEFIFHGO', this.IDPBPFEFHDN, 1.0, false, false);
    SoundScript.ECFNFAMPDND.pitch = 1.5;
    this.JNDBAPHNLIC('HLNBFKLNLGF', this.FEAOJCPGIDF, 1.0, false, false);
    this.JNDBAPHNLIC('JJMBOCJABEL', this.IGICPCMIONE, 1.0, false, false);
    this.JNDBAPHNLIC('IGAGBIKPOMH', this.AAKIHMDFLDF, 1.0, false, false);
    this.JNDBAPHNLIC('CIMAPDEBGGG', this.BCMFAINFNPO, 1.0, false, false);
    this.JNDBAPHNLIC('CLILGEMKKFH', this.FIFDBNPONCH, 1.0, false, false);
    this.JNDBAPHNLIC('IMKHCBJCJNB', this.LJOMOHCDBII, 0.55, false, true);
    this.JNDBAPHNLIC('KOFBPJBKFNP', this.PBBIKCIIKDA, 1.0, false, false);
    this.JNDBAPHNLIC('HPJAHDBOGBJ', this.BNKLKIBDNLG, 1.0, false, false);
    this.JNDBAPHNLIC('AMDKJJNAGAE', this.JCBFCJIPCKK, 1.0, false, false);
    for (let i = 0; i < this.HKAOKEKOGOE.length; i++) {
      const s = this.JNDBAPHNLIC({ arr: SoundScript.ODEINOIAFPC, i }, this.HKAOKEKOGOE[i], 0.8, false, true);
      s.bus = 'music';
      if (i === 0) SoundScript.LONDFMJFHEL = SoundScript.ODEINOIAFPC[0];
    }
  }

  // random dog voice
  static ONLLENOAJLH() {
    const s = SoundScript.GBOKPGCEKFO[(Random.Range(0, 1000) > 500) ? 1 : 0];
    if (!prof().BMMOMBGDEKF()) return;
    if (!alive(s)) return;
    play(s);
  }

  // (re)assign a clip to a source, creating it if needed (ref target, clip, volume)
  PNPJEJLNGMF(JOPAPOBNEBI, BEFPOGONNLN, JOILPPKMILL) {
    let s = SoundScript._getRef(JOPAPOBNEBI);
    if (!alive(s)) { s = this.gameObject.AddComponent(AudioSource); SoundScript._setRef(JOPAPOBNEBI, s); }
    s.loop = false;
    s.volume = JOILPPKMILL;
    s.playOnAwake = false;
    s.clip = BEFPOGONNLN || null;
    return s;
  }

  // random zombie voice (avoid repeating the same one within 2 s)
  static FJCLBOAMFFN() {
    const arr = SoundScript.KACGFPFKHHB;
    if (!arr) return;
    let i = Math.floor(Math.random() * arr.length);
    if (i === SoundScript.AOCKLMLCIHF && Time.time < SoundScript.JMPGAKHBKJO) {
      let n = 4;
      do { i = Math.floor(Math.random() * arr.length); } while (i === SoundScript.AOCKLMLCIHF && n-- !== 0);
    }
    SoundScript.AOCKLMLCIHF = i;
    SoundScript.JMPGAKHBKJO = Time.time + 2.0;
    const s = arr[i];
    if (!prof().BMMOMBGDEKF()) return;
    if (!alive(s)) return;
    play(s);
  }

  // random cat voice
  static NEOEGHNJJNF() {
    const s = SoundScript.MDJDHLEFJEB[(Random.Range(0, 1000) > 500) ? 1 : 0];
    if (!prof().BMMOMBGDEKF()) return;
    if (!alive(s)) return;
    play(s);
  }
}
define('SoundScript', SoundScript);
