// Shared helpers for ported game scripts.
import { DB } from '../engine/assets.js';

// Unity serializes int[] in YAML as little-endian hex; decode on demand
export function hexInts(v) {
  if (Array.isArray(v)) return v;
  if (typeof v === 'number') return [v];
  if (!v || typeof v !== 'string') return [];
  const out = [];
  for (let i = 0; i + 8 <= v.length; i += 8) {
    const n = parseInt(v.substr(i + 6, 2) + v.substr(i + 4, 2) + v.substr(i + 2, 2) + v.substr(i, 2), 16);
    out.push(n | 0);
  }
  return out;
}

// INI-like files: [section] key = value
export function parseIni(text) {
  const out = {}; let sec = null;
  for (let line of String(text || '').split('\n')) {
    line = line.trim(); if (!line || line.startsWith(';') || line.startsWith('//')) continue;
    const m = line.match(/^\[(.+)\]$/);
    if (m) { sec = m[1]; out[sec] = out[sec] || {}; continue; }
    const i = line.indexOf('=');
    if (i > 0 && sec) out[sec][line.slice(0, i).trim()] = line.slice(i + 1).trim();
  }
  return out;
}

// ---------------------------------------------------------------- localization (Translate.cs)
export const Lang = {
  current: 'English', table: {}, listeners: new Set(),
  languages: ['English', 'German', 'French', 'Italian', 'Spanish', 'Portuguese', 'Polish', 'Russian', 'Ukrainian', 'Turkish', 'ChineseSimplified', 'ChineseTraditional', 'Japanese'],
  load(name) {
    const raw = DB.texts[String(name).toLowerCase()];
    if (!raw) return false;
    this.current = name; this.table = {};
    for (let line of raw.split('\n')) {
      const i = line.indexOf(' = ');
      if (i < 0) continue;
      const k = line.slice(0, i).trim(); let v = line.slice(i + 3);
      v = v.replace(/\\n/g, '\n').replace(/�/g, "'");
      this.table[k] = v;
    }
    for (const l of this.listeners) l();
    return true;
  },
  get(key) { if (key == null) return ''; const v = this.table[key]; return v === undefined ? key : v; },
  has(key) { return key in this.table; },
  detect() {
    const n = (navigator.language || 'en').toLowerCase();
    const map = { de: 'German', fr: 'French', it: 'Italian', es: 'Spanish', pt: 'Portuguese', pl: 'Polish', ru: 'Russian', uk: 'Ukrainian', tr: 'Turkish', ja: 'Japanese', zh: n.includes('tw') || n.includes('hk') || n.includes('hant') ? 'ChineseTraditional' : 'ChineseSimplified' };
    return map[n.slice(0, 2)] || 'English';
  },
};
export const T = (k) => Lang.get(k);

export function fmtTime(sec) {
  sec = Math.max(0, sec); const m = Math.floor(sec / 60), s = Math.floor(sec % 60), cs = Math.floor((sec * 100) % 100);
  return `${m}:${String(s).padStart(2, '0')}.${String(cs).padStart(2, '0')}`;
}
