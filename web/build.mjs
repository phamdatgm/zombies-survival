// Release build: bundles + minifies the game into a static folder that any web server can host.
//   node build.mjs <outDir> [version]
import * as esbuild from 'esbuild';
import fs from 'node:fs';
import path from 'node:path';
import url from 'node:url';

const root = path.dirname(url.fileURLToPath(import.meta.url));
const out = path.resolve(process.argv[2] || path.join(root, 'dist'));
const version = process.argv[3] || new Date().toISOString().slice(2, 10).replace(/-/g, '') + '01';
const title = 'Zombie Derby: Pixel Survival';

fs.rmSync(out, { recursive: true, force: true });
fs.mkdirSync(out, { recursive: true });

// 1) bundle all JS (engine + 94 game scripts + three.js + Rapier wasm) into one minified file
await esbuild.build({
  entryPoints: [path.join(root, 'src/main.js')],
  bundle: true, format: 'esm', minify: true, target: 'es2022', legalComments: 'none',
  outfile: path.join(out, 'game.js'),
  logLevel: 'warning',
});

// 2) static data
const copyDir = (src, dst, filter = () => true) => {
  fs.mkdirSync(dst, { recursive: true });
  for (const e of fs.readdirSync(src, { withFileTypes: true })) {
    const s = path.join(src, e.name), d = path.join(dst, e.name);
    if (e.isDirectory()) copyDir(s, d, filter); else if (filter(s)) fs.copyFileSync(s, d);
  }
};
copyDir(path.join(root, 'assets'), path.join(out, 'assets'));
fs.mkdirSync(path.join(out, 'src/game'), { recursive: true });
fs.mkdirSync(path.join(out, 'src/ui'), { recursive: true });
fs.copyFileSync(path.join(root, 'src/game/fieldtypes.json'), path.join(out, 'src/game/fieldtypes.json'));
fs.copyFileSync(path.join(root, 'src/ui/ui.css'), path.join(out, 'src/ui/ui.css'));
const loading = path.join(root, 'loading.png');
if (fs.existsSync(loading)) fs.copyFileSync(loading, path.join(out, 'loading.png'));

// 3) page
fs.writeFileSync(path.join(out, 'index.html'), `<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no, viewport-fit=cover">
  <title>${title}</title>
  <meta name="robots" content="noindex, nofollow">
  <link rel="stylesheet" href="src/ui/ui.css">
  <style>#loading{background:#111 url(loading.png) center/cover no-repeat}#loading::before{content:"";position:absolute;inset:0;background:rgba(0,0,0,.45)}#loading>*{position:relative}.ld-ver{position:absolute;right:10px;bottom:10px;font:18px Arial,sans-serif;color:#fff;opacity:.5}</style>
</head>
<body>
  <canvas id="game"></canvas>
  <div id="ui"></div>
  <div id="loading"><div class="ld-logo"></div><div class="ld-bar"><div class="ld-fill"></div></div><div class="ld-text">Loading…</div><div class="ld-ver">${version}</div></div>
  <script type="module" src="game.js?v=${version}"></script>
</body>
</html>
`);

// 4) helper for local testing (ES modules + fetch need http://, not file://)
fs.copyFileSync(path.join(root, 'server.js'), path.join(out, 'server.mjs'));
fs.writeFileSync(path.join(out, 'start-local-server.bat'), '@echo off\r\ncd /d "%~dp0"\r\necho Open http://localhost:8080/\r\nstart "" http://localhost:8080/\r\nnode server.mjs 8080\r\n');

const size = (p) => { let n = 0; for (const e of fs.readdirSync(p, { withFileTypes: true })) n += e.isDirectory() ? size(path.join(p, e.name)) : fs.statSync(path.join(p, e.name)).size; return n; };
console.log(`built ${out}  (${(size(out) / 1048576).toFixed(1)} MB, game.js ${(fs.statSync(path.join(out, 'game.js')).size / 1048576).toFixed(2)} MB, version ${version})`);
