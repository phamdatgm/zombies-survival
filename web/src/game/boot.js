// Game bootstrap: load metadata, register ported scripts, preload prefabs, open the garage scene.
import { G } from './G.js';
import { Lang } from './util.js';
import { App } from '../engine/app.js';
import { SceneManager } from '../engine/scene.js';
import { Resources, PlayerPrefs } from '../engine/unity.js';
import { Audio } from '../engine/audio.js';
import { setLoading } from '../main.js';

export async function startGame() {
  setLoading(0.1, 'Loading scripts…');
  window.__G = G;
  await PlayerPrefs.init();   // load the save (IndexedDB / localStorage) before any script reads it
  G.fieldTypes = await fetch('src/game/fieldtypes.json').then((r) => r.json());
  await import('./scripts/index.js');
  Lang.load(Lang.detect());
  setLoading(0.2, 'Loading prefabs…');
  await Resources.preloadAll((p) => setLoading(0.2 + p * 0.6, 'Loading prefabs…'));
  // warm the browser cache with every UI sprite atlas so windows don't pop in
  setLoading(0.82, 'Loading UI…');
  const { DB, textureUrl } = await import('../engine/assets.js');
  const urls = [...new Set(Object.values(DB.sprites).map((s) => textureUrl(s.tex)).filter(Boolean))];
  await Promise.all(urls.map((u) => new Promise((r) => { const im = new Image(); im.onload = im.onerror = r; im.src = u; })));
  Audio.init();
  setLoading(0.85, 'Loading garage…');
  await SceneManager.LoadScene('garage');
  setLoading(false);
  App.start();
}
