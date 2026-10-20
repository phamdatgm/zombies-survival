// LoaderGarageScene.cs — bootstrap scene helper: loads the garage scene.
// Original: SceneManager.LoadScene("garage") (LoadSceneAsyncNameIndexInternal(name,-1,Single,mustCompleteNextFrame=true)).
import { SceneManager } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class LoaderGarageScene extends GameBehaviour {
  Awake() {
    SceneManager.LoadScene('garage');
  }
}
define('LoaderGarageScene', LoaderGarageScene);
