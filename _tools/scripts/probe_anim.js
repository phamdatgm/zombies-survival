(() => { let n = 0; for (const g of __world().objects) for (const c of g.components) if (c.constructor.name === 'Animator') { c.enabled = true; n++; } return n; })()
@@@
(() => { const out = []; for (const g of __world().objects) for (const c of g.components) if (c.constructor.name === 'Animator' && out.length < 6) out.push([g.name, c.state && c.state.name, c.time.toFixed(2), c.bind && c.bind.size, c.ctrl && c.ctrl.layers[0].states.map(s=>s.name).join('|')]); return out; })()
