(() => { const g = window.__G; const gg = g && g.GUIGarage && [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); if (!gg) return 'no garage'; try { gg.ButtonPlay(); } catch (e) { return 'err ' + e.stack; } return 'clicked'; })()
@@@
(() => { const w = window.__G && [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { const lv = [...document.querySelectorAll('.ug')].filter(e => e.offsetParent && e.dataset.name && /level/i.test(e.dataset.name)).map(e => e.dataset.name).slice(0, 20); return lv; } catch (e) { return e.message; } })()
