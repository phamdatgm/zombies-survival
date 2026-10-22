// Local test server for the builds in this folder (W:\Zombie_derby): `node server.mjs [port]` (default 8090).
//   http://localhost:8090/               -> newest build, game page <v>/<v>/index.html
//   http://localhost:8090/<v>/<v>/        -> a given build
// The portal page <v>/index.html (= preview.html) redirects to azgames.io when opened directly without a
// referrer (portal behaviour), so local play uses the inner page, which loads the SDK by itself.
import http from 'node:http';
import fs from 'node:fs';
import path from 'node:path';
import url from 'node:url';

const root = path.dirname(url.fileURLToPath(import.meta.url));
const port = +process.argv[2] || 8090;
const types = {
  '.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.json': 'application/json', '.txt': 'text/plain',
  '.png': 'image/png', '.webp': 'image/webp', '.svg': 'image/svg+xml', '.ogg': 'audio/ogg', '.mp3': 'audio/mpeg', '.wav': 'audio/wav',
  '.bin': 'application/octet-stream', '.css': 'text/css', '.wasm': 'application/wasm', '.ttf': 'font/ttf', '.otf': 'font/otf',
};
const latest = () => fs.readdirSync(root).filter((n) => /^\d{8}$/.test(n) && fs.existsSync(path.join(root, n, n, 'index.html'))).sort().pop();

http.createServer((req, res) => {
  let p = decodeURIComponent(new URL(req.url, 'http://x').pathname);
  if (p === '/') {
    const v = latest();
    if (!v) { res.writeHead(404); return res.end('no build in ' + root); }
    res.writeHead(302, { Location: `/${v}/${v}/index.html` });
    return res.end();
  }
  if (p.endsWith('/')) p += 'index.html';
  const f = path.join(root, p);
  if (!f.startsWith(root)) { res.writeHead(403); return res.end(); }
  fs.stat(f, (err, st) => {
    if (err || !st.isFile()) { res.writeHead(404); return res.end('not found'); }
    res.writeHead(200, { 'Content-Type': types[path.extname(f).toLowerCase()] || 'application/octet-stream', 'Content-Length': st.size, 'Cache-Control': 'no-cache' });
    fs.createReadStream(f).pipe(res);
  });
}).listen(port, () => console.log(`Zombie Derby builds: http://localhost:${port}/  (newest: ${latest() ?? 'none'})`));
