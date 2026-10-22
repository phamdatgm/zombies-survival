// WebAudio-based AudioSource / AudioListener.
import { Component, Time } from './core.js';
import { DB, assetUrl, audioDef, findAsset } from './assets.js';

export const Audio = {
  ctx: null, master: null, music: null, sfx: null, buffers: new Map(), muted: false,
  musicVolume: 1, sfxVolume: 1,
  init() {
    if (this.ctx) return;
    this.ctx = new (window.AudioContext || window.webkitAudioContext)();
    this.master = this.ctx.createGain(); this.master.connect(this.ctx.destination);
    this.music = this.ctx.createGain(); this.music.connect(this.master);
    this.sfx = this.ctx.createGain(); this.sfx.connect(this.master);
    const resume = () => { this.ctx.resume(); };
    addEventListener('pointerdown', resume); addEventListener('keydown', resume); addEventListener('touchstart', resume);
  },
  setMusicVolume(v) { this.musicVolume = v; if (this.music) this.music.gain.value = v; },
  setSfxVolume(v) { this.sfxVolume = v; if (this.sfx) this.sfx.gain.value = v; },
  load(ref) {
    if (!ref) return Promise.resolve(null);
    if (!ref.startsWith('@')) ref = findAsset('audio', ref) || ref;
    const def = audioDef(ref); if (!def) return Promise.resolve(null);
    if (!this.buffers.has(def.file)) {
      this.init();
      const p = fetch(assetUrl(def.file)).then((r) => r.arrayBuffer()).then((b) => this.ctx.decodeAudioData(b)).catch(() => null);
      p.then((buf) => { p.value = buf; });
      this.buffers.set(def.file, p);
    }
    return this.buffers.get(def.file);
  },
  getSync(ref) { if (!ref) return null; if (!ref.startsWith('@')) ref = findAsset('audio', ref) || ref; const def = audioDef(ref); const p = def && this.buffers.get(def.file); return p ? p.value : null; },
  playOneShot(ref, volume = 1, pitch = 1, bus = 'sfx') {
    this.init();
    const go = (buf) => {
      if (!buf) return;
      const s = this.ctx.createBufferSource(); s.buffer = buf; s.playbackRate.value = pitch;
      const g = this.ctx.createGain(); g.gain.value = volume; s.connect(g); g.connect(bus === 'music' ? this.music : this.sfx); s.start();
    };
    const b = this.getSync(ref); if (b) go(b); else this.load(ref).then(go);
  },
  preloadAll() { for (const k of Object.keys(DB.index.audio)) this.load(k); },
};

export class AudioSource extends Component {
  static typeName = 'AudioSource';
  constructor(go, p) {
    super(go, p);
    this.clip = p.m_audioClip || p.m_AudioClip || null;
    this.loop = !!p.Loop; this._volume = p.m_Volume ?? 1; this._pitch = p.m_Pitch ?? 1; this.playOnAwake = !!p.m_PlayOnAwake;
    this.mute = !!p.Mute;
    this.node = null; this.gain = null; this._playing = false; this._startAt = 0;
    this.bus = /music|track|loop_128|intro/i.test(this.clip || '') ? 'music' : 'sfx';
    if (this.clip) Audio.load(this.clip);
  }
  OnEnable() { if (this.playOnAwake && this.clip) this.Play(); }
  OnDisable() { this.Stop(); }
  get volume() { return this._volume; } set volume(v) { this._volume = v; if (this.gain) this.gain.gain.value = this.mute ? 0 : v; }
  get pitch() { return this._pitch; } set pitch(v) { this._pitch = v; if (this.node) this.node.playbackRate.value = Math.max(0.01, v); }
  get isPlaying() { return this._playing && (this.loop || (Audio.ctx && Audio.ctx.currentTime - this._startAt < (this._dur || 0) / Math.max(0.01, this._pitch))); }
  get time() { return Audio.ctx && this._playing ? (Audio.ctx.currentTime - this._startAt) * this._pitch : 0; }
  set time(v) { }
  Play() {
    Audio.init(); this.Stop();
    const clip = this.clip; if (!clip) return;
    this._playing = true;
    const start = (buf) => {
      if (!buf || !this._playing || this.clip !== clip || this.destroyed) return;
      const s = Audio.ctx.createBufferSource(); s.buffer = buf; s.loop = this.loop; s.playbackRate.value = Math.max(0.01, this._pitch);
      const g = Audio.ctx.createGain(); g.gain.value = this.mute ? 0 : this._volume;
      s.connect(g); g.connect(this.bus === 'music' ? Audio.music : Audio.sfx); s.start();
      this.node = s; this.gain = g; this._startAt = Audio.ctx.currentTime; this._dur = buf.duration;
      s.onended = () => { if (this.node === s) { this._playing = false; this.node = null; } };
    };
    const b = Audio.getSync(clip); if (b) start(b); else Audio.load(clip).then(start);
  }
  PlayOneShot(clip, vol = 1) { Audio.playOneShot(clip, vol * this._volume, this._pitch, this.bus); }
  PlayDelayed(d) { this.StartCoroutine(function* () { yield d; this.Play(); }); }
  Stop() { this._playing = false; if (this.node) { try { this.node.stop(); } catch (e) { } this.node.disconnect(); this.node = null; } }
  Pause() { this.Stop(); }
  UnPause() { this.Play(); }
  _dispose() { this.Stop(); }
}

export class AudioListener extends Component { static typeName = 'AudioListener'; }
