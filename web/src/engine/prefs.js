// PlayerPrefs, persisted like Unity WebGL: the game reads/writes an in-memory table; every change is written through to
// localStorage (sync, survives an abrupt tab close) and flushed to IndexedDB (Unity WebGL's own PlayerPrefs backend,
// works in some embeds where localStorage is blocked/partitioned differently). On boot the newer of the two copies wins
// (old saves that only exist in localStorage are picked up automatically).
const PREFIX = 'zdps_';
const TS_KEY = PREFIX + '__ts';        // localStorage: last write time of the localStorage copy
const DB_NAME = 'zdps', STORE = 'prefs', SNAP = 'all';
const FLUSH_MS = 300;

const mem = new Map();                 // key (without prefix) -> string value
let ls = null;                         // usable localStorage, or null
let db = null;                         // open IDBDatabase, or null
let stamp = 0;                         // time of the last change
let timer = 0, initP = null;

function probeLocalStorage() {
  try { const s = window.localStorage, k = PREFIX + '__probe'; s.setItem(k, '1'); s.removeItem(k); return s; } catch (e) { return null; }
}
function readLocalStorage() {
  const out = new Map(); let ts = 0;
  if (!ls) return { out, ts };
  try {
    for (let i = 0; i < ls.length; i++) {
      const k = ls.key(i);
      if (!k || !k.startsWith(PREFIX) || k === TS_KEY) continue;
      out.set(k.slice(PREFIX.length), ls.getItem(k));
    }
    ts = +ls.getItem(TS_KEY) || 0;
  } catch (e) { }
  return { out, ts };
}
function openIdb() {
  return new Promise((res) => {
    let done = false; const fin = (v) => { if (!done) { done = true; res(v); } };
    setTimeout(() => fin(null), 3000);
    try {
      const r = indexedDB.open(DB_NAME, 1);
      r.onupgradeneeded = () => { try { r.result.createObjectStore(STORE); } catch (e) { } };
      r.onsuccess = () => fin(r.result);
      r.onerror = r.onblocked = () => fin(null);
    } catch (e) { fin(null); }
  });
}
function idbRead() {
  return new Promise((res) => {
    try {
      const r = db.transaction(STORE, 'readonly').objectStore(STORE).get(SNAP);
      r.onsuccess = () => res(r.result || null);
      r.onerror = () => res(null);
    } catch (e) { res(null); }
  });
}
function idbWrite() {
  if (!db) return;
  try { db.transaction(STORE, 'readwrite').objectStore(STORE).put({ ts: stamp, data: Object.fromEntries(mem) }, SNAP); } catch (e) { }
}

function touch() {
  stamp = Date.now();
  if (ls) try { ls.setItem(TS_KEY, String(stamp)); } catch (e) { }
  if (!timer) timer = setTimeout(flush, FLUSH_MS);
}
function flush() {
  if (timer) { clearTimeout(timer); timer = 0; }
  idbWrite();
}

// sync part: usable immediately (localStorage copy); init() then merges the IndexedDB copy
ls = probeLocalStorage();
{ const { out, ts } = readLocalStorage(); for (const [k, v] of out) mem.set(k, v); stamp = ts; }

if (typeof window !== 'undefined') {
  addEventListener('visibilitychange', () => { if (document.visibilityState === 'hidden') flush(); });
  addEventListener('pagehide', flush);
}

export const PlayerPrefs = {
  // await once before the game starts
  init() {
    if (initP) return initP;
    initP = (async () => {
      db = await openIdb();
      const snap = db ? await idbRead() : null;
      const lsTs = stamp;
      if (snap && snap.data && (+snap.ts || 0) > lsTs) {
        // IndexedDB copy is newer (e.g. localStorage was cleared/blocked): restore it and re-mirror to localStorage
        mem.clear();
        for (const [k, v] of Object.entries(snap.data)) mem.set(k, String(v));
        stamp = +snap.ts;
        if (ls) try {
          for (const k of Object.keys(ls)) if (k.startsWith(PREFIX)) ls.removeItem(k);
          for (const [k, v] of mem) ls.setItem(PREFIX + k, v);
          ls.setItem(TS_KEY, String(stamp));
        } catch (e) { }
      } else if (mem.size) idbWrite();
      const where = [db && 'IndexedDB', ls && 'localStorage'].filter(Boolean).join(' + ');
      if (where) console.info(`[PlayerPrefs] ${mem.size} keys, saving to ${where}`);
      else console.warn('[PlayerPrefs] storage is blocked in this browser/embed: progress will NOT be saved');
    })();
    return initP;
  },
  GetInt(k, d = 0) { const v = mem.get(k); if (v === undefined) return d; const n = parseInt(v, 10); return isNaN(n) ? d : n | 0; },
  SetInt(k, v) { this.SetString(k, String(v | 0)); },
  GetFloat(k, d = 0) { const v = mem.get(k); if (v === undefined) return d; const n = parseFloat(v); return isNaN(n) ? d : n; },
  SetFloat(k, v) { this.SetString(k, String(+v)); },
  GetString(k, d = '') { const v = mem.get(k); return v === undefined ? d : v; },
  SetString(k, v) {
    v = String(v); if (mem.get(k) === v) return;
    mem.set(k, v);
    if (ls) try { ls.setItem(PREFIX + k, v); } catch (e) { }
    touch();
  },
  HasKey(k) { return mem.has(k); },
  DeleteKey(k) {
    if (!mem.delete(k)) return;
    if (ls) try { ls.removeItem(PREFIX + k); } catch (e) { }
    touch();
  },
  DeleteAll() {
    mem.clear();
    if (ls) try { for (const k of Object.keys(ls)) if (k.startsWith(PREFIX) && k !== TS_KEY) ls.removeItem(k); } catch (e) { }
    touch();
  },
  Save() { flush(); },
};
