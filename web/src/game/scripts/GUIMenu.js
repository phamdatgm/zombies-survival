// GUIMenu: ScriptableObject (Resources/GUIMenu) with seo/title/desc strings (data only)
import { G } from '../G.js';

export class GUIMenu {
  constructor(o) {
    this.seo = null; this.title = null; this.desc = null;
    if (o) Object.assign(this, o);
  }
}
G.GUIMenu = GUIMenu;
