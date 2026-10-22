// GUIEmptyElement ("kostyl"): invisible Graphic that only enlarges the raycast (touch) area of its parent button.
// DOM: make the element hit-testable; pointer events bubble to the parent Button/EventTrigger element.
import { GameBehaviour, define } from '../base.js';

export class GUIEmptyElement extends GameBehaviour {
  _buildDom() {
    const el = this.gameObject._el;
    if (el && (this.props.m_RaycastTarget ?? 1)) el.classList.add('ug-hit');
  }
  // OnPopulateMesh: clears the vertex helper (draws nothing)
  OnPopulateMesh(DILFJODFKMA) { if (DILFJODFKMA && DILFJODFKMA.Clear) DILFJODFKMA.Clear(); }
}
define('GUIEmptyElement', GUIEmptyElement);
