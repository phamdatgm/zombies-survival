(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonPlay(); } catch (e) { return 'err ' + e.stack; } return 'play'; })()
@@@
(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonStartRaceGo(); } catch (e) { return 'err ' + e.stack; } return 'go'; })()
@@@
(() => ({ scene: __G.Main.NMDEEOMHAGP && __G.Main.NMDEEOMHAGP.scene_id, car: __G.Main.LCFFGBBHMPH, cc: !!__G.CarController.KECGFPHIEHF }))()
@@@
(() => { window.dispatchEvent(new KeyboardEvent('keydown', { code: 'KeyW' })); const cc = __G.CarController.KECGFPHIEHF; return cc ? { z: cc.transform.position.z.toFixed(1), tut: __G.GUIGameplay && __G.GUIGameplay.DEDOFFIOEFO } : 'nocar'; })()
@@@
(() => { const cc = __G.CarController.KECGFPHIEHF; return cc ? { z: cc.transform.position.z.toFixed(1), speed: cc.AGKGCILIANE().toFixed(1), tut: __G.GUIGameplay.DEDOFFIOEFO } : 'nocar'; })()
