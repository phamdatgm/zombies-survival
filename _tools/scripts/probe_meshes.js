(() => { const w = __world(); const out = []; const cam = __app.renderer; 
  for (const o of w.root.children) { if (o.isMesh) { const g = o.geometry; g.computeBoundingBox(); const b = g.boundingBox; out.push(['root', g.userData.key || g.userData.name, b.min.toArray().map(v=>v.toFixed(0)).join(','), b.max.toArray().map(v=>v.toFixed(0)).join(','), (o.material.length||1)]); } }
  return out.slice(0, 40); })()
