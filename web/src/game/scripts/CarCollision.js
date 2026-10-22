// CarCollision (on the player car): hits on zombies / obstacles / birds / bombs, points & combos,
// blood / explosion FX pools and zombie parts spawning.
import { Vector3, Quaternion, Color, Time, Random, Physics, Layers, Instantiate, Destroy, Resources, ParticleSystem, Collider, Rigidbody } from '../../engine/unity.js';
import { GameBehaviour, alive, define } from '../base.js';
import { G } from '../G.js';
import { Lang } from '../util.js';

// PLFKMIMGIDF: Melee=0 Fire=1 DynamicObject=2
const T = (k) => { const tr = G.Translate && G.Translate.KECGFPHIEHF; return tr && tr.JJJNIPAKLJF ? tr.JJJNIPAKLJF(k) : Lang.get(k); };
const SS = () => G.SoundScript || {};
const play = (name) => { const s = SS(); if (s.GIGBLEBBIEK) s.GIGBLEBBIEK(s[name]); };
const playChk = (name) => { const s = SS(); return s.FIGKLLNAMLG ? !!s.FIGKLLNAMLG(s[name]) : false; };
const level = () => G.Main && G.Main.NMDEEOMHAGP;                  // current Level
const isEvent = () => { const l = level(); return !!(l && l.IsEvent); };
const EONPOEEAEOK_NAMES = ['zombie_crawl_1_parts', 'zombie_crawl_2_parts', 'zombie_crawl_3_parts', 'zombie_walk_1_parts', 'zombie_walk_2_parts',
  'zombie_walk_3_parts', 'zombie_walk_4_parts', 'zombie_fat_1_parts', 'zombie_fat_2_parts', 'zombie_cat_parts', 'zombie_dog_parts',
  'zombie_run_fire_parts', 'zombie_run_dynamite_parts', 'zombie_walk_fire_parts', 'zombie_walk_shield_parts', 'zombie_with_barrel_parts',
  'zombie_sidewalk_parts', 'zombie_tank_parts', 'zombie_halloween_1_parts', 'zombie_halloween_2_parts', 'zombie_halloween_3_parts',
  'zombie_halloween_4_parts'];

// play first free pooled AutoDestructShuriken at pos (optionally oriented with up)
function poolPlay(pool, pos, up) {
  for (const s of pool || []) {
    if (!alive(s)) continue;
    if (s.gameObject.activeSelf) continue;
    s.LIEHBGFFHFF.position = pos;
    if (up && up.sqrMagnitude >= 9.9999994e-11) s.LIEHBGFFHFF.up = up;
    s.CNAGLGLEJMC = 0;
    s.ACBDHBLLEEK = s.KPFIPEBINCA.main.duration;
    s.gameObject.SetActive(true);
    s.KPFIPEBINCA.Play(true);
    return;
  }
}
function instPool(key, n, pos, rot) {
  const out = [];
  for (let i = 0; i < n; i++) {
    const go = key ? Instantiate(key, pos, rot) : null;
    out.push(go ? go.GetComponent('AutoDestructShuriken') : null);
  }
  return out;
}

export class CarCollision extends GameBehaviour {
  constructor(go, p) {
    super(go, p);
    this.EGEINPCIEON = null;  // CarController
    this.BAILLBGHJPC = [];    // blood splatter pool
    this.JOAOGLLCBIC = 6;     // blood pool size
    this.DPPPINBGNAK = null;  // zombie carrying the big barrel / last barrel thrower
    this.LJJPADLEGOL = [];    // small explosion pool
    this.DFLPMPOFDPK = [];    // big explosion pool
    this.OEFHFBMANEA = [];    // wood box crush pool
    this.KPBIFMFKNEE = [];    // zombie parts templates (by EONPOEEAEOK)
    this.IDIIDGIEPDI = null;  // pumpkin parts template
    this.HBDIAANKGID = 66;    // splatter bonus speed
    this.JLDFLHFCALF = 0;     // next splatter bonus time
    this.HDJKAIDNHKO = 0;     // style bonus counter
    this.CABGPJMCCHE = 0;     // last style bonus time
    this.HIJEJNMEOBP = 1.2;   // airborne height threshold
    this.NCOLPJKJFMO = 0;     // next style-bonus-2 voice time
    this.LFAMMHHBLCH = 0;     // combo counter
    this.EKLGAILOIEA = 0;     // combo expiry
    this.DFJAHMPCJOA = 0;     // next great-combo voice time
  }
  // ---- zombie hit
  JDLKLAGFELO(JDDOHFIKJDN, OPBPCFOOBHD, HAKKOAADCOE) {
    if (!alive(OPBPCFOOBHD)) return;
    const z = OPBPCFOOBHD.GetComponent('Zombie');
    if (!alive(z)) { G.Main && G.Main.EEKNCFLMGDP && G.Main.EEKNCFLMGDP('Zombie script problem'); return; }
    const car = this.EGEINPCIEON;
    const kind = z.FHOFNGHGNGF;
    let melee = false;     // bVar2
    let toCam = false;     // parts thrown at camera
    const meleeCheck = () => { // LAB_00bd82a4
      melee = true;
      if (car.AGKGCILIANE() <= 25.0) { toCam = kind === 6; return; }
      const c2 = G.CarController && G.CarController.KECGFPHIEHF;
      if (c2.MFEELNHEKHF) { toCam = kind === 6; return; }
      const w = c2.OLHONOOFKPP;
      toCam = kind === 6 || !!(w && w[0] && w[0].GFGJNJIHPHP);
    };
    if (kind === 6) { // tank
      if (JDDOHFIKJDN !== 1) {
        this.NDLJJLDOHIA(false, HAKKOAADCOE.position);
        play('LGDEFJKJLJD');
        this.StartCoroutine(car.ECBLNBNGONF.OIKFBMHJDBN());
        if (JDDOHFIKJDN === 0) meleeCheck(); else { melee = false; toCam = true; }
      } else {
        const pos = HAKKOAADCOE.position;
        if (1 < z.PHKPMGOICOM) {
          this.EJHCIMAAIKB(true, 0, pos.add(HAKKOAADCOE.up.mul(z.PCKPDBGGOPK)), z._hitNormal);
          z.ABNPNOKAMEB.SetActive(true);
          z.PHKPMGOICOM--;
          return;
        }
        this.NDLJJLDOHIA(false, pos);
        play('LGDEFJKJLJD');
        melee = false; toCam = true;
      }
    } else {
      let next = 'd4'; // LAB_00bd80d4
      switch (kind) {
        case 1:
          if (alive(z.ABNPNOKAMEB)) {
            this.NDLJJLDOHIA(false, HAKKOAADCOE.position);
            if (!car.ODFPBGGPPDK) play('LGDEFJKJLJD');
            Destroy(z.ABNPNOKAMEB);
          }
          break;
        case 3: case 8:
          if (JDDOHFIKJDN === 0) { next = 'a4'; break; }
          if (JDDOHFIKJDN === 1) z.HMEFLNGHPDI();
          next = 'none';
          break;
        case 4:
          if (JDDOHFIKJDN !== 0) { next = 'none'; break; }
          this.NDLJJLDOHIA(false, HAKKOAADCOE.position);
          if (!car.ODFPBGGPPDK) play('LGDEFJKJLJD');
          this.StartCoroutine(car.ECBLNBNGONF.OIKFBMHJDBN());
          next = 'a4';
          break;
        case 7:
          if ((JDDOHFIKJDN | 2) !== 2) return;
          z.HMEFLNGHPDI();
          break;
      }
      if (next === 'd4') { if (JDDOHFIKJDN === 0) meleeCheck(); else { melee = false; toCam = false; } }
      else if (next === 'a4') meleeCheck();
      else { melee = false; toCam = false; }
    }
    this.ELLMIFLLMNM(z.ELAGCAKJDAN, HAKKOAADCOE, toCam);
    this.EJHCIMAAIKB(true, 0, HAKKOAADCOE.position.add(HAKKOAADCOE.up.mul(z.PCKPDBGGOPK)), z._hitNormal);
    let pts, style = false;
    if (melee) {
      if (alive(car.ILNODOPHGCL)) car.ILNODOPHGCL.Play();
      let add = 5;
      if (car.AGKGCILIANE() > this.HBDIAANKGID && Time.time > this.JLDFLHFCALF) {
        playChk('AIDAFCHLFPO');
        this.JLDFLHFCALF = Time.time + 8.0;
        const gui = car.CDDOBCENBOG;
        gui.HNKHJLDJMHB(T('SPLATTER_BONUS'), 0, false, true);
        gui.HNKHJLDJMHB('', 4, false, false);
        add = 10;
      }
      const w = car.OLHONOOFKPP;
      if (!car.MFEELNHEKHF && w && w[0] && !w[0].GFGJNJIHPHP && w[2] && !w[2].GFGJNJIHPHP) {
        const hit = Physics.Raycast(car.BHDKJIINJNL.position, Vector3.up.neg(), 5.0, 1 << Layers.NameToLayer('ground'));
        if (hit && hit.distance > this.HIJEJNMEOBP - (kind === 2 ? 0.4 : 0.0)) {
          const gui = car.CDDOBCENBOG;
          if (0.5 <= Time.time - this.CABGPJMCCHE) {
            this.HDJKAIDNHKO = 1;
            gui.HNKHJLDJMHB(T('EXTRA_STYLE_BONUS'), 0, false, false);
          } else {
            this.HDJKAIDNHKO++;
            gui.HNKHJLDJMHB(T('EXTRA_STYLE_BONUS') + ' (x' + this.HDJKAIDNHKO + ')', 0, true, false);
          }
          add = this.HDJKAIDNHKO * 5 + add;
          style = true;
          this.CABGPJMCCHE = Time.time;
        }
      }
      pts = this.EKCHOFEOEKM() + add;
    } else if (JDDOHFIKJDN === 2) {
      pts = this.EKCHOFEOEKM();
      if (this.NCOLPJKJFMO < Time.time && playChk('MLBNPLEMPEL')) this.NCOLPJKJFMO = Time.time + 25.0;
      pts += 10;
      car.CDDOBCENBOG.HNKHJLDJMHB(T('EXTRA_STYLE_BONUS_2'), 0, false, false);
    } else pts = 5;
    const CC = G.CarController;
    if (!CC.MKEGHDPIIFK) {
      car.GEHAGJMADEG++;                              // zombies killed
      car.IKOEIGDJPEK(pts, false);                    // add points
      car.NFDOKGHMLFP = z.KJHIDPMAFFF + car.NFDOKGHMLFP;
      if (!style && melee) {
        if (kind !== 1 || alive(z.ABNPNOKAMEB)) car.EKOHIKFFBFC(z.IKOBFEOAKCI, true);
        else car.EKOHIKFFBFC((z.IKOBFEOAKCI / 5) | 0, true);
        if (kind !== 1) this._fireFx(melee, kind);
      } else this._fireFx(melee, kind);
    } else this._fireFx(melee, kind);
    if (!car.ODFPBGGPPDK) {
      if (melee) {
        const e = z.ELAGCAKJDAN;
        if (e === 9) SS().NEOEGHNJJNF && SS().NEOEGHNJJNF();
        else if (e === 10) SS().ONLLENOAJLH && SS().ONLLENOAJLH();
        else SS().FJCLBOAMFFN && SS().FJCLBOAMFFN();
      } else if (JDDOHFIKJDN === 2) play('CIACMMIMEAA');
    }
    Destroy(OPBPCFOOBHD);
  }
  _fireFx(melee, kind) { // fire zombie hit: car catches fire
    if (!(melee && (kind === 8 || kind === 3))) return;
    const car = this.EGEINPCIEON;
    if (alive(car.DHJMCFBENCP)) { car.DHJMCFBENCP.Play(); car.KIPCFFHJBPB(); }
  }
  // ---- bat hit
  FHFJHOHDHKM(JDDOHFIKJDN, OPBPCFOOBHD, HAKKOAADCOE) {
    const bat = OPBPCFOOBHD.GetComponent('TheBat');
    if (alive(bat)) bat.enabled = true;
    this.EJHCIMAAIKB(true, JDDOHFIKJDN, HAKKOAADCOE.position, Vector3.zero);
  }
  // ---- blood splatter at FGOHLMLBAOF oriented along FFAMPNGFKIG
  EJHCIMAAIKB(BIMDKCKIPAO, FHOFNGHGNGF, FGOHLMLBAOF, FFAMPNGFKIG) {
    if (BIMDKCKIPAO) poolPlay(this.BAILLBGHJPC, FGOHLMLBAOF, FFAMPNGFKIG);
  }
  // ---- create blood pool
  KMNFKGPKPNE() {
    if (!(G.Main && G.Main.KECGFPHIEHF)) return;
    const key = Resources.Load('FX_BloodSplatter');
    this.BAILLBGHJPC = instPool(key, this.JOAOGLLCBIC);
    if (!isEvent()) return;
    for (const s of this.BAILLBGHJPC) {
      const ps = s && s.GetComponent(ParticleSystem);
      if (!alive(ps)) continue;
      // velocityOverLifetime.speedModifier = 0.4
      const vm = ps.p && ps.p.VelocityModule;
      if (vm) vm.speedModifier = { minMaxState: 0, scalar: 0.4 };
    }
  }
  // ---- combo counter, returns bonus points
  EKCHOFEOEKM() {
    let exp;
    if (this.LFAMMHHBLCH === 0) { exp = Time.time + 1.0; this.EKLGAILOIEA = exp; } else exp = this.EKLGAILOIEA;
    if (exp <= Time.time) this.LFAMMHHBLCH = 0; else this.LFAMMHHBLCH++;
    const c = this.LFAMMHHBLCH;
    const gui = this.EGEINPCIEON && this.EGEINPCIEON.CDDOBCENBOG;
    if (c === 5) {
      if (this.DFJAHMPCJOA < Time.time && playChk('AJOAPIMLFPP')) this.DFJAHMPCJOA = Time.time + 25.0;
      if (gui) gui.HNKHJLDJMHB(T('GREAT_COMBO'), 2, false, false);
      return this.LFAMMHHBLCH * 5;
    }
    if (c < 2) return 0;
    if (gui) gui.HNKHJLDJMHB(T('COMBO') + ' (x' + c + ')', 3, true, c === 2);
    return this.LFAMMHHBLCH * 5;
  }
  OnCollisionStay(PNKAOOKHBAI) {
    const go = PNKAOOKHBAI.gameObject;
    const car = this.EGEINPCIEON;
    const CC = G.CarController;
    if (!CC || !alive(car)) return;
    if (go.layer === CC.GGDLOPNIKOB && !car.MFEELNHEKHF && 140.0 < car.MHDBPCGFFDO) {
      const cs = PNKAOOKHBAI.contacts;
      if (cs && cs.length) {
        if (go.name === 'collider_NO_DIE') { G.Main && G.Main.GEMDEAMAGPG && G.Main.GEMDEAMAGPG('collider_NO_DIE!', 0); return; }
        const lp = car.BHDKJIINJNL.InverseTransformPoint(cs[0].point);
        if (0.0 < lp.y && 100.0 < car.MHDBPCGFFDO) { // roof hit the ground
          const l = level();
          if (l && l.IsTutorial) { car.DPKGKJMAPLO(); car.HECJKCAMLHJ(go); }
          car.AEFMMNHIGLH();
        }
      }
    }
    const tag = go.tag;
    if (tag === 'barrel_big') this.GLBHMAKJKHB(0, go, PNKAOOKHBAI.transform);
    else if (tag === 'wood_box') {
      const cs = PNKAOOKHBAI.contacts;
      if (!cs || !cs.length) return;
      const lp = car.BHDKJIINJNL.InverseTransformPoint(cs[0].point);
      if (lp.z <= -2.2) return;
      if (0.0 <= lp.y) return;
      if (2.2 <= lp.z) return;
      this.AGBOIHPBOOM(PNKAOOKHBAI.transform.position);
      Destroy(go);
    }
  }
  // ---- barrels / packs hit
  GLBHMAKJKHB(JDDOHFIKJDN, OPBPCFOOBHD, HAKKOAADCOE) {
    const car = this.EGEINPCIEON;
    if (JDDOHFIKJDN === 0) {
      this.NDLJJLDOHIA(false, HAKKOAADCOE.position);
      if (!car.ODFPBGGPPDK) play('LGDEFJKJLJD');
      Destroy(OPBPCFOOBHD);
      const name = OPBPCFOOBHD.name;
      let pts;
      if (OPBPCFOOBHD.tag === 'barrel_throw') pts = 15;
      else if (name.includes('barrel_pack_x3')) pts = 15;
      else if (name.includes('barrel_pack_x5')) pts = 25;
      else if (name.includes('barrel_pack_x8')) pts = 40;
      else if (name.includes('barrel_pack_x10')) pts = 50;
      else if (name.includes('barrel_with_box_pack')) pts = 50;
      else pts = name.includes('barrel_big') ? 60 : 0;
      car.EKOHIKFFBFC(pts, false);
      return;
    }
    if (JDDOHFIKJDN === 1) {
      const da = OPBPCFOOBHD.GetComponent('DynamicAccessor');
      if (alive(da)) {
        for (const rb of da.BHLBGKKHGGA || []) {
          if (!alive(rb)) continue;
          const f = Random.Range(da.GFDIKJLIBPM * 10000.0, da.GFDIKJLIBPM * 15000.0);
          const c = HAKKOAADCOE.position.add(HAKKOAADCOE.up.mul(0.5)).sub(HAKKOAADCOE.forward.mul(0.5));
          rb.AddExplosionForce(f, c, 100);
          rb.transform.SetParent(null, true);
        }
      }
      if (OPBPCFOOBHD.name.includes('barrel_big_zombie_walk')) {
        if (!alive(this.DPPPINBGNAK)) {
          const pp = HAKKOAADCOE.parent && HAKKOAADCOE.parent.parent;
          if (alive(pp) && alive(pp.GetComponent('Zombie'))) this.DPPPINBGNAK = pp;
        }
        if (alive(this.DPPPINBGNAK)) {
          if (this.DPPPINBGNAK.position.z - HAKKOAADCOE.position.z < 3.0) this.JDLKLAGFELO(1, this.DPPPINBGNAK.gameObject, this.DPPPINBGNAK);
        }
      }
    } else if (JDDOHFIKJDN !== 2) return;
    if (alive(OPBPCFOOBHD) && HAKKOAADCOE) {
      const big = OPBPCFOOBHD.name.includes('barrel_pack_x10');
      this.NDLJJLDOHIA(big, HAKKOAADCOE.position);
      if (!car.ODFPBGGPPDK) play('LGDEFJKJLJD');
      Destroy(OPBPCFOOBHD);
    }
  }
  // ---- wood box crush FX
  AGBOIHPBOOM(FGOHLMLBAOF) { poolPlay(this.OEFHFBMANEA, FGOHLMLBAOF); }
  OnTriggerEnter(GLKAJMJEIEM) {
    const go = GLKAJMJEIEM.gameObject;
    const tr = go.transform;
    const name = go.name;
    GLKAJMJEIEM.enabled = false;
    const car = this.EGEINPCIEON;
    if (!alive(car)) return;
    switch (go.tag) {
      case 'zombie': this.JDLKLAGFELO(0, go, tr); break;
      case 'barrel': case 'barrel_throw': this.GLBHMAKJKHB(0, go, tr); break;
      case 'bat': this.FHFJHOHDHKM(0, go, tr); break;
      case 'wood_box': this.GBLOCBGPAPN(0, go, tr); break;
      case 'bird': this.CODGMCKJNEO(go, tr); break;
      case 'bomb': this.AINHBDLOANI(go, tr); break;
      case 'pumpkin': this.HILOPNIFJDL(tr); break;
      case 'bird_spawn': this.GCAMMBECDIH(GLKAJMJEIEM.gameObject); break;
    }
    if (name === 'yama_trigger') { // fell into a pit
      if (alive(car.CDDOBCENBOG)) car.CDDOBCENBOG.HNKHJLDJMHB(T('CRASH_2'), 1, false, true);
      car.DPKGKJMAPLO();
      car.PHKPMGOICOM = 0;
      car.EFJKMEHHMAJ = true;
      playChk('CLAHNEECAHP');
      if (!car.HECJKCAMLHJ(go)) this.StartCoroutine(car.FIOKLNLIDNH(false));
    }
    if (name === 'lava_trigger') {
      Destroy(GLKAJMJEIEM.gameObject);
      car.AEFMMNHIGLH();
      return;
    }
    if (name.includes('bomb')) { Destroy(GLKAJMJEIEM.gameObject); return; }
    if (name.includes('tramplin_circle')) {
      const tc = GLKAJMJEIEM.GetComponent('TramplinCircle');
      if (alive(tc)) tc.MPLPGOBGOJA();
      return;
    }
    if (name.includes('tramplin_barrel')) { this.FMLEBCMDJID(0, GLKAJMJEIEM.gameObject, GLKAJMJEIEM.transform); return; }
    if (name.includes('finish')) {
      play('HPJAHDBOGBJ');
      this.StartCoroutine(car.FIOKLNLIDNH(true));
      return;
    }
    if (name.includes('bus_destroy')) { this.NPBHJPAEJMB(go, tr, true); return; }
    if (name.includes('car_pack_destroy')) { this.NPBHJPAEJMB(go, tr, false); return; }
    if (name.includes('BarrelTipped')) { car.GCHFPNMJHCA(0.9, true); car.KPFMJNAJAIJ(); return; }
    if (name.includes('circle_tramplin_enter')) { car.FPJINMILBPP = true; return; }
    if (name.includes('circle_tramplin_exit')) car.FPJINMILBPP = false;
  }
  // ---- bomb hit: explosion + crash
  AINHBDLOANI(OPBPCFOOBHD, HAKKOAADCOE) {
    const car = this.EGEINPCIEON;
    car.DPKGKJMAPLO();
    car.HECJKCAMLHJ(OPBPCFOOBHD);
    this.NDLJJLDOHIA(false, HAKKOAADCOE.position);
    if (!car.ODFPBGGPPDK) play('LGDEFJKJLJD');
    this.StartCoroutine(car.ECBLNBNGONF.OIKFBMHJDBN());
    Destroy(OPBPCFOOBHD);
    car.AEFMMNHIGLH(); // inlined crash in the binary
  }
  // ---- bird spawn trigger
  GCAMMBECDIH(OPBPCFOOBHD) {
    const da = OPBPCFOOBHD.GetComponent('DynamicAccessor');
    if (alive(da) && alive(da.OPBPCFOOBHD)) da.OPBPCFOOBHD.SetActive(true);
  }
  // ---- bird hit
  CODGMCKJNEO(OPBPCFOOBHD, HAKKOAADCOE) {
    playChk('FBHENMIBGOB');
    const b = OPBPCFOOBHD.GetComponent('Bird');
    if (alive(b) && b.ABNGHDMNGMC) Instantiate(b.ABNGHDMNGMC, HAKKOAADCOE.position, HAKKOAADCOE.rotation);
    this.EJHCIMAAIKB(true, 0, HAKKOAADCOE.position, Vector3.zero);
    play('CLILGEMKKFH');
    const car = this.EGEINPCIEON;
    car.CDDOBCENBOG.HNKHJLDJMHB(T('FLYING_BONUS'), 0, false, false);
    car.CBMGIBJFILD++;               // birds killed
    car.IKOEIGDJPEK(50, false);
    if (car.OJDANPGPKPB) {
      const l = level();
      if (l && l.event_contest && l.event_contest.mode === 3 /* BirdHunt */) car.IKOEIGDJPEK(1, true);
    }
    Destroy(OPBPCFOOBHD);
  }
  // ---- wood box hit (Melee: damage the car, Fire: blow parts)
  GBLOCBGPAPN(JDDOHFIKJDN, OPBPCFOOBHD, HAKKOAADCOE) {
    if (JDDOHFIKJDN === 1) {
      const col = OPBPCFOOBHD.GetComponent(Collider);
      if (alive(col)) col.enabled = false;
      const da = OPBPCFOOBHD.GetComponent('DynamicAccessor');
      if (!alive(da)) return;
      for (const rb of da.BHLBGKKHGGA || []) {
        if (!alive(rb)) continue;
        const f = Random.Range(da.GFDIKJLIBPM * 600.0, da.GFDIKJLIBPM * 900.0);
        const c = HAKKOAADCOE.position.add(HAKKOAADCOE.up.mul(0.5)).sub(HAKKOAADCOE.forward);
        rb.AddExplosionForce(f, c, 100);
        rb.transform.SetParent(null, true);
      }
      return;
    }
    const car = this.EGEINPCIEON;
    if (!car.ODFPBGGPPDK) play('BMBHPBPPONE');
    if (G.CarController.MKEGHDPIIFK) return;
    if (!(0 < car.PHKPMGOICOM)) return;
    car.PHKPMGOICOM = Math.max(0, car.PHKPMGOICOM - 5);   // health -5
    const gui = car.CDDOBCENBOG;
    if (gui && gui.GJNFHBJBIBC && gui.GJNFHBJBIBC.CIDKMFLFJEJ) gui.GJNFHBJBIBC.CIDKMFLFJEJ.fontSize = 64;
    car.CHPDPBCCBJP(2.0);
    car.OJOPPNIEGLL();
    if (gui && gui.PHKPMGOICOM) gui.PHKPMGOICOM.ICMOCEHIFOI();
    if (gui && gui.GJNFHBJBIBC) gui.GJNFHBJBIBC.ICMOCEHIFOI(-5, new Color(1, 1, 1, 1), 1.0);
    car.GCHFPNMJHCA(0.29166666, false);
    if (0 < car.PHKPMGOICOM) return;
    if (car.MFEELNHEKHF) return;
    car.AEFMMNHIGLH();
  }
  // ---- pumpkin hit
  HILOPNIFJDL(HAKKOAADCOE) {
    const car = this.EGEINPCIEON;
    car.IKOEIGDJPEK(1, true);
    play('AMDKJJNAGAE');
    const inst = this.IDIIDGIEPDI ? Instantiate(this.IDIIDGIEPDI, HAKKOAADCOE.position, HAKKOAADCOE.rotation) : null;
    if (inst) inst.SetActive(true);
    Destroy(HAKKOAADCOE.gameObject);
  }
  // ---- ramp barrel hit
  FMLEBCMDJID(JDDOHFIKJDN, OPBPCFOOBHD, HAKKOAADCOE) {
    const col = OPBPCFOOBHD.GetComponent(Collider);
    if (!col) return;
    col.enabled = false;
    const tb = OPBPCFOOBHD.GetComponent('TramplinBarrel');
    if (!alive(tb) || !alive(tb.PLEGAOMEBJO)) return;
    tb.enabled = true;
    if (JDDOHFIKJDN === 0) {
      tb.MJODMEOIAIJ();
      tb.NNIADFNMHGB();
      this.EGEINPCIEON.EKOHIKFFBFC(40, false);
    } else if (JDDOHFIKJDN === 1) tb.NNIADFNMHGB();
    else return;
    const b = tb.PLEGAOMEBJO;
    this.GLBHMAKJKHB(1, b, b.transform);
  }
  // ---- bus / car pack destroyed
  NPBHJPAEJMB(OPBPCFOOBHD, HAKKOAADCOE, CJMAAEHCNEN) {
    const car = this.EGEINPCIEON;
    if (15.0 < car.AGKGCILIANE()) {
      this.NDLJJLDOHIA(false, HAKKOAADCOE.position);
      play('LGDEFJKJLJD');
    }
    car.EKOHIKFFBFC(CJMAAEHCNEN ? 60 : 20, false);
    const col = OPBPCFOOBHD && OPBPCFOOBHD.GetComponent(Collider);
    if (alive(col)) col.enabled = false;
  }
  // ---- create explosion pools
  HNNICJHLCMM() {
    const rot = Quaternion.Euler(-90, 0, 0);
    const pos = new Vector3(0, 0, -30);
    this.LJJPADLEGOL = instPool(Resources.Load('FX_Explosion_Small'), 3, pos, rot);
    this.DFLPMPOFDPK = instPool(Resources.Load('FX_Explosion_Big'), 2, pos, rot);
  }
  Start() { this.EGEINPCIEON = this.GetComponent('CarController'); }
  // ---- create wood box crush pool
  OKOFPODNOFH() {
    this.OEFHFBMANEA = instPool(Resources.Load('FX_wood_box_crush'), 3, new Vector3(0, 0, -30), Quaternion.identity);
  }
  // ---- explosion FX (big / small)
  NDLJJLDOHIA(BIIKAINALDJ, FGOHLMLBAOF) {
    poolPlay(BIIKAINALDJ ? this.DFLPMPOFDPK : this.LJJPADLEGOL, FGOHLMLBAOF);
  }
  // ---- activate DynamicAccessor target
  HABMFNMJMDL(OPBPCFOOBHD, FGOHLMLBAOF, MPKEMNCNKOK) {
    const da = OPBPCFOOBHD.GetComponent('DynamicAccessor');
    if (alive(da) && alive(da.OPBPCFOOBHD)) da.OPBPCFOOBHD.SetActive(true);
  }
  // ---- create zombie parts templates
  CFMCPPEAHAF() {
    if (!(G.Main && G.Main.KECGFPHIEHF)) return;
    this.KPBIFMFKNEE = new Array(EONPOEEAEOK_NAMES.length).fill(null);
    let halloween = false;
    const l = level();
    if (l && l.IsEvent) { const m = l.event_contest && l.event_contest.mode; halloween = m === 6 || m === 7; }
    const menuAlive = !!(G.Menu && alive(G.Menu.KECGFPHIEHF));
    EONPOEEAEOK_NAMES.forEach((n, v) => {
      let load;
      if (!menuAlive) load = (v - 9) >>> 0 > 1;
      else if ((v - 18) >>> 0 < 4) load = (v - 9) >>> 0 > 1 && halloween;
      else load = !halloween && (v - 9) >>> 0 > 1;
      if (!load) return;
      const key = Resources.Load(n);
      const inst = key ? Instantiate(key) : null;
      this.KPBIFMFKNEE[v] = inst;
      if (inst && isEvent()) {
        for (const ch of inst.transform) { const rb = ch.GetComponent(Rigidbody); if (alive(rb)) rb.interpolation = 0; }
      }
    });
  }
  // ---- spawn zombie parts at HAKKOAADCOE (GBHLMIHHOPI: throw some at the camera)
  ELLMIFLLMNM(ELAGCAKJDAN, HAKKOAADCOE, GBHLMIHHOPI) {
    const arr = this.KPBIFMFKNEE;
    if (!arr || !arr.length || !(ELAGCAKJDAN < arr.length)) return;
    const tpl = arr[ELAGCAKJDAN];
    if (!tpl) return;
    const inst = Instantiate(tpl, HAKKOAADCOE.position, HAKKOAADCOE.rotation);
    if (GBHLMIHHOPI) { const zp = inst.GetComponent('ZombieParts'); if (zp) zp.AJFNIDFDGNA = true; }
    inst.SetActive(true);
  }
  // ---- create pumpkin parts template
  FKJKPFAKBLM() {
    const key = Resources.Load('Pumkin_Parts');
    this.IDIIDGIEPDI = key ? Instantiate(key) : null;
    if (this.IDIIDGIEPDI && isEvent()) {
      for (const ch of this.IDIIDGIEPDI.transform) { const rb = ch.GetComponent(Rigidbody); if (alive(rb)) rb.interpolation = 0; }
    }
  }
}
define('CarCollision', CarCollision);
