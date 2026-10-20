(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonPlay(); gg.ButtonMap(); } catch (e) { return 'err ' + e.stack; } return 'map'; })()
@@@
(() => { const lv = [...__world().objects].map(o => o.GetComponent('GUILevel')).filter(Boolean); return lv.map(l => l.gameObject.name + ':' + l.gameObject.activeInHierarchy).slice(0, 20); })()
@@@
(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); const lv = [...__world().objects].map(o => o.GetComponent('GUILevel')).filter(Boolean); const first = lv.find(l => /1$|_1\b|level_1/.test(l.gameObject.name)) || lv[0]; try { gg.ButtonMapLevelSelect(first.gameObject); } catch (e) { return 'err ' + e.stack; } return 'selected ' + first.gameObject.name + ' -> ' + (__G.Main.NMDEEOMHAGP && __G.Main.NMDEEOMHAGP.scene_id); })()
@@@
(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonStartRaceGo(); } catch (e) { return 'err ' + e.stack; } return 'go'; })()
@@@
(() => ({ level: __G.Main.NMDEEOMHAGP && __G.Main.NMDEEOMHAGP.scene_id, objs: __world().objects.size, cc: !!__G.CarController.KECGFPHIEHF }))()
