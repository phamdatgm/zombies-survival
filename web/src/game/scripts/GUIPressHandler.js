// GUIPressHandler: invokes a UnityEvent on pointer down (instead of on click).
import { UnityEvent } from '../../engine/unity.js';
import { GameBehaviour, define } from '../base.js';

export class GUIPressHandler extends GameBehaviour {
  // GUIPressHandler.ButtonPressEvent : UnityEvent (no extra members)
  static ButtonPressEvent = class ButtonPressEvent extends UnityEvent { };
  constructor(go, p) {
    super(go, p);
    this.JEKJJJHEBGF = new GUIPressHandler.ButtonPressEvent([], null); // press event
  }
  onDeserialize(p) {
    super.onDeserialize(p);
    const raw = p.JEKJJJHEBGF; // keep raw persistent calls (targets are resolved at invoke time)
    this.JEKJJJHEBGF = new GUIPressHandler.ButtonPressEvent(raw && raw.m_PersistentCalls && raw.m_PersistentCalls.m_Calls, this._inst);
  }
  OnPointerDown(GFLJNNPANJG) { this.JEKJJJHEBGF.Invoke(); }
}
define('GUIPressHandler', GUIPressHandler);
