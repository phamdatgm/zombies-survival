// [web] More Games button (JS_SDK_2.0/docs/MOREGAMES.md): opens the publisher's page in a new tab.
// URL: the portal's GMSOFT_GAME_INFO.more_games_url when it is set (read at CLICK time: the portal may fill it late),
// else config.moreGamesUrl (azgames.io with this game's gid). Hidden on CrazyGames (no cross-promotion allowed).
import { config } from '../config.mjs';
import { DB } from '../engine/assets.js';
import { analytics } from '../sdk/analytics.js';

const SPRITE = '@web/more_games';   // assets/tex/web_more_games.png: orange card like settings_button

export const moreGamesAllowed = () => globalThis.GMSOFT_SDKTYPE !== 'crazy';

export function moreGamesUrl() {
  return globalThis.GMSOFT_GAME_INFO?.more_games_url || config.moreGamesUrl;
}

export function openMoreGames() {
  const url = moreGamesUrl();
  analytics.log('more_games_click', { url });
  try { window.open(url, '_blank', ''); } catch (e) { console.warn('[moreGames] window.open failed', e); }
}

// register the button art as a uGUI sprite (call once DB is loaded)
export function moreGamesSprite() {
  if (!DB.sprites[SPRITE]) {
    DB.index.textures[SPRITE] = { file: 'tex/web_more_games.png', filter: 1, wrap: 1 };
    DB.sprites[SPRITE] = { tex: SPRITE, name: 'more_games_button', rect: [0, 0, 200, 200], pivot: [0.5, 0.5], border: [0, 0, 0, 0], size: [200, 200] };
  }
  return SPRITE;
}
