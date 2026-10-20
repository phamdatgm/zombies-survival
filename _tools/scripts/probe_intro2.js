(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); gg.ButtonPlay(); gg.ButtonMap(); return 'intro'; })()
@@@
(() => { window.dispatchEvent(new KeyboardEvent('keydown', { code: 'KeyW' })); return 'gas'; })()
@@@
(() => { const C = __G.CarController, cc = C.KECGFPHIEHF; return { scene: __G.Main.NMDEEOMHAGP && __G.Main.NMDEEOMHAGP.scene_id, z: cc && cc.transform.position.z.toFixed(0), over: C.MKEGHDPIIFK, fin: C.LNNMJCIFMGH, tut: __G.GUIGameplay && __G.GUIGameplay.DEDOFFIOEFO, hp: cc && cc.PHKPMGOICOM }; })()
@@@
(() => { const C = __G.CarController, cc = C.KECGFPHIEHF; return { z: cc && cc.transform.position.z.toFixed(0), over: C.MKEGHDPIIFK, fin: C.LNNMJCIFMGH, tut: __G.GUIGameplay && __G.GUIGameplay.DEDOFFIOEFO, hp: cc && cc.PHKPMGOICOM, win: [...document.querySelectorAll('.ug')].filter(e => e.offsetParent && e.parentElement && e.parentElement.classList.contains('ug-canvas')).map(e => e.dataset.name).join(',') }; })()
@@@
(() => { const g = [...__world().objects].map(o => o.GetComponent('GUIGameplay')).find(Boolean); try { g.ButtonTutorialCrashCancel(); } catch (e) { return 'err ' + e.stack; } return 'closed'; })()
@@@
(() => ({ scene: __G.Main.NMDEEOMHAGP && __G.Main.NMDEEOMHAGP.scene_id, car: __G.Main.LCFFGBBHMPH, active: (window.__world && [...__world().objects].length), win: [...document.querySelectorAll('.ug')].filter(e => e.offsetParent && e.parentElement && e.parentElement.classList.contains('ug-canvas')).map(e => e.dataset.name).join(',') }))()
