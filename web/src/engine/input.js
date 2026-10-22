// Keyboard / mouse / touch / gamepad -> Unity-like Input API.
export const KeyCode = {
  W: 'KeyW', A: 'KeyA', S: 'KeyS', D: 'KeyD', N: 'KeyN', Space: 'Space', LeftShift: 'ShiftLeft', RightShift: 'ShiftRight',
  UpArrow: 'ArrowUp', DownArrow: 'ArrowDown', LeftArrow: 'ArrowLeft', RightArrow: 'ArrowRight', Escape: 'Escape', Return: 'Enter', R: 'KeyR', P: 'KeyP', F: 'KeyF', E: 'KeyE', Q: 'KeyQ',
};
const down = new Set(), pressed = new Set(), released = new Set();
const virtual = new Map(); // on-screen buttons: name -> bool
let mouse = { x: 0, y: 0, down: false, pressed: false, released: false };

addEventListener('keydown', (e) => {
  if (e.repeat) return; down.add(e.code); pressed.add(e.code);
  if (['Space', 'ArrowUp', 'ArrowDown', 'ArrowLeft', 'ArrowRight'].includes(e.code) && e.target === document.body) e.preventDefault();
});
addEventListener('keyup', (e) => { down.delete(e.code); released.add(e.code); });
addEventListener('blur', () => { down.clear(); virtual.clear(); });
addEventListener('pointerdown', (e) => { mouse.down = true; mouse.pressed = true; mouse.x = e.clientX; mouse.y = innerHeight - e.clientY; });
addEventListener('pointerup', () => { mouse.down = false; mouse.released = true; });
addEventListener('pointermove', (e) => { mouse.x = e.clientX; mouse.y = innerHeight - e.clientY; });

let pads = [];
export const Input = {
  GetKey: (k) => down.has(k),
  GetKeyDown: (k) => pressed.has(k),
  GetKeyUp: (k) => released.has(k),
  GetMouseButton: () => mouse.down,
  GetMouseButtonDown: () => mouse.pressed,
  GetMouseButtonUp: () => mouse.released,
  get mousePosition() { return { x: mouse.x, y: mouse.y, z: 0 }; },
  get anyKeyDown() { return pressed.size > 0 || mouse.pressed || padAnyPressed(); },
  get anyKey() { return down.size > 0 || mouse.down; },
  // device tilt (accelerometer) emulation: -1..1
  acceleration: { x: 0, y: 0, z: 0 },
  setVirtual(name, v) { virtual.set(name, !!v); },
  virtual(name) { return !!virtual.get(name); },
  pad() { return pads[0] || null; },
  // high-level controls used by the game
  get throttle() { return down.has('KeyW') || down.has('ArrowUp') || Input.virtual('gas') || padBtn(7) || padAxis(1) < -0.5; },
  get brake() { return down.has('KeyS') || down.has('ArrowDown') || Input.virtual('brake') || padBtn(6); },
  get fire() { return down.has('Space') || Input.virtual('fire') || padBtn(0); },
  get nitro() { return down.has('ShiftLeft') || down.has('KeyN') || Input.virtual('nitro') || padBtn(2); },
  get tilt() {
    let t = 0;
    if (down.has('KeyA') || down.has('ArrowLeft') || Input.virtual('tiltLeft')) t -= 1;
    if (down.has('KeyD') || down.has('ArrowRight') || Input.virtual('tiltRight')) t += 1;
    const ax = padAxis(0); if (Math.abs(ax) > 0.2) t = ax;
    return t;
  },
  endFrame() { pressed.clear(); released.clear(); mouse.pressed = false; mouse.released = false; prevPad = curPad; },
  pollGamepads() { pads = (navigator.getGamepads ? [...navigator.getGamepads()] : []).filter(Boolean); curPad = pads[0] ? pads[0].buttons.map((b) => b.pressed) : []; },
};
let curPad = [], prevPad = [];
function padBtn(i) { const p = pads[0]; return !!(p && p.buttons[i] && p.buttons[i].pressed); }
function padAxis(i) { const p = pads[0]; return p && p.axes[i] !== undefined ? p.axes[i] : 0; }
function padAnyPressed() { return curPad.some((b, i) => b && !prevPad[i]); }
export function padPressed(i) { return !!curPad[i] && !prevPad[i]; }
