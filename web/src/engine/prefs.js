// PlayerPrefs, persisted like Unity WebGL: the game reads/writes an in-memory table. The table is the `prefs` area of the
// SDK save (sdk/storage.js: ONE localStorage key `azgames.<gameCode>`, batched writes, flushed on pagehide) and is also
// flushed to IndexedDB (Unity WebGL's own PlayerPrefs backend, works in some embeds where localStorage is
// blocked/partitioned differently). On boot the newer of the two copies wins.
import { gameData } from '../sdk/storage.js';

const AREA = 'prefs';                  // gameData area: { ts, kv: { key: stringValue } }
const DB_NAME = 'zdps', STORE = 'prefs', SNAP = 'all';
const FLUSH_MS = 300;

const mem = new Map();                 // key -> string value
let db = null;                         // open IDBDatabase, or null
let stamp = 0;                         // time of the last change
let timer = 0, initP = null;

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

// write the table into the SDK save, once per burst of changes (storage.js batches the localStorage write itself)
let saveQueued = false;
function save() {
  if (saveQueued) return;
  saveQueued = true;
  queueMicrotask(() => { saveQueued = false; gameData.set(AREA, { ts: stamp, kv: Object.fromEntries(mem) }); });
}

function touch() {
  stamp = Date.now();
  save();
  if (!timer) timer = setTimeout(flush, FLUSH_MS);
}
function flush() {
  if (timer) { clearTimeout(timer); timer = 0; }
  idbWrite();
}

// sync part: usable immediately (SDK save); init() then merges the IndexedDB copy
{
  const a = gameData.get(AREA);
  for (const [k, v] of Object.entries(a.kv || {})) mem.set(k, String(v));
  stamp = +a.ts || 0;
}

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
      if (snap && snap.data && (+snap.ts || 0) > stamp) {
        // IndexedDB copy is newer (e.g. localStorage was cleared/blocked): restore it and re-mirror to the SDK save
        mem.clear();
        for (const [k, v] of Object.entries(snap.data)) mem.set(k, String(v));
        stamp = +snap.ts;
        save();
      } else if (mem.size) idbWrite();
      console.info(`[PlayerPrefs] ${mem.size} keys, saving to ${db ? 'IndexedDB + ' : ''}SDK storage`);
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
    touch();
  },
  HasKey(k) { return mem.has(k); },
  DeleteKey(k) {
    if (!mem.delete(k)) return;
    touch();
  },
  DeleteAll() {
    mem.clear();
    touch();
  },
  Save() { flush(); queueMicrotask(() => gameData.flush()); },
};
