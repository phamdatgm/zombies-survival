(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonSettings(); } catch (e) { return 'err ' + e.stack; } return 'settings'; })()
@@@
(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonCloseWindow(); gg.ButtonAchievements(); } catch (e) { return 'err ' + e.stack; } return 'ach'; })()
@@@
(() => { const gg = [...__world().objects].map(o => o.GetComponent('GUIGarage')).find(Boolean); try { gg.ButtonCloseWindow(); gg.ButtonPlay(); gg.ButtonEncyclopedia(); } catch (e) { return 'err ' + e.stack; } return 'enc'; })()
@@@
(() => 'done')()
