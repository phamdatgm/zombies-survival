// Build docs/ui/index.html: one self-contained page (screenshots embedded as base64) with the status table from
// ui-screens.index, the screenshots from shots/ and the text of ui-screens.md.
//   node docs/ui/ui_index.mjs          retake every screenshot (ui_shots.mjs), then build the page
//   node docs/ui/ui_index.mjs --html   only rebuild the page from the files already on disk
import { spawnSync } from 'node:child_process';
import fs from 'node:fs';
import path from 'node:path';
import url from 'node:url';

const here = path.dirname(url.fileURLToPath(import.meta.url));

if (!process.argv.includes('--html')) {
  const r = spawnSync(process.execPath, [path.join(here, 'ui_shots.mjs')], { stdio: 'inherit' });
  if (r.status !== 0) { console.error('ui_shots.mjs failed; page not rebuilt'); process.exit(r.status || 1); }
}

const STATUS = {
  ' ': ['todo', 'Chưa làm'], '~': ['doing', 'Đang làm'], x: ['done', 'Xong'], '-': ['skip', 'Bỏ / giữ nguyên'], '?': ['ask', 'Cần quyết định'],
};
const esc = (s) => String(s).replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;').replace(/"/g, '&quot;');

// ---- ui-screens.index
const screens = [];
for (const line of fs.readFileSync(path.join(here, 'ui-screens.index'), 'utf8').split(/\r?\n/)) {
  const m = line.match(/^\[(.)\]\s+(\S+)\s+(.*)$/);
  if (!m) continue;
  const [name, kind, scene, objects] = m[3].split(/\s{2,}/);
  screens.push({ st: m[1], nn: m[2], name, kind, scene, objects });
}

// ---- shots/NN.jpg + variants NNb.jpg, NNc.jpg...
const shotFiles = fs.existsSync(path.join(here, 'shots')) ? fs.readdirSync(path.join(here, 'shots')).sort() : [];
const shotsOf = (nn) => shotFiles.filter((f) => new RegExp(`^${nn}[a-z]?\\.(jpe?g|png)$`, 'i').test(f));
const dataUri = (f) => `data:image/${/png$/i.test(f) ? 'png' : 'jpeg'};base64,${fs.readFileSync(path.join(here, 'shots', f)).toString('base64')}`;

// ---- ui-screens.md: tiny markdown renderer (headings, lists, fenced code, paragraphs, inline code/bold)
const inline = (s) => esc(s).replace(/`([^`]+)`/g, '<code>$1</code>').replace(/\*\*([^*]+)\*\*/g, '<b>$1</b>');
function md(src) {
  const out = []; const lines = src.split(/\r?\n/);
  let para = [], list = null;
  const flushPara = () => { if (para.length) out.push(`<p>${inline(para.join(' '))}</p>`); para = []; };
  const flushList = () => { if (list) out.push(`<ul>${list.map((li) => `<li>${inline(li)}</li>`).join('')}</ul>`); list = null; };
  for (let i = 0; i < lines.length; i++) {
    const l = lines[i];
    if (l.startsWith('```')) {
      flushPara(); flushList();
      const code = []; for (i++; i < lines.length && !lines[i].startsWith('```'); i++) code.push(lines[i]);
      out.push(`<pre>${esc(code.join('\n'))}</pre>`); continue;
    }
    const h = l.match(/^(#{1,3})\s+(.*)$/);
    if (h) { flushPara(); flushList(); out.push(`<h${h[1].length + 1}>${inline(h[2])}</h${h[1].length + 1}>`); continue; }
    if (/^---+\s*$/.test(l)) { flushPara(); flushList(); continue; }
    const li = l.match(/^- (.*)$/);
    if (li) { flushPara(); (list ||= []).push(li[1]); continue; }
    if (list && /^\s{2,}\S/.test(l)) { list[list.length - 1] += ' ' + l.trim(); continue; }
    if (!l.trim()) { flushPara(); flushList(); continue; }
    flushList(); para.push(l.trim());
  }
  flushPara(); flushList();
  return out.join('\n');
}
const mdSrc = fs.readFileSync(path.join(here, 'ui-screens.md'), 'utf8');
const parts = mdSrc.split(/^(?=## \d\d )/m);
const intro = parts[0];
const sectionOf = {};
for (const p of parts.slice(1)) sectionOf[p.slice(3, 5)] = p.replace(/^## .*\r?\n/, '');

// ---- page
const counts = {}; for (const s of screens) counts[s.st] = (counts[s.st] || 0) + 1;
const summary = Object.entries(STATUS).filter(([k]) => counts[k]).map(([k, [cls, label]]) => `<span class="pill ${cls}">${label}: ${counts[k]}</span>`).join(' ');
const rows = screens.map((s) => {
  const [cls, label] = STATUS[s.st] || STATUS[' '];
  return `<tr><td><span class="pill ${cls}">${label}</span></td><td class="nn"><a href="#s${s.nn}">${esc(s.nn)}</a></td><td><a href="#s${s.nn}">${esc(s.name)}</a></td><td>${esc(s.kind)}</td><td>${esc(s.scene)}</td><td><code>${esc(s.objects)}</code></td></tr>`;
}).join('\n');
const cards = screens.map((s) => {
  const [cls, label] = STATUS[s.st] || STATUS[' '];
  const imgs = shotsOf(s.nn).map((f) => `<figure><img loading="lazy" src="${dataUri(f)}" alt="${esc(s.name)} ${esc(f)}"><figcaption>${esc(f)}</figcaption></figure>`).join('');
  return `<section class="card" id="s${s.nn}">
  <header><span class="big">${esc(s.nn)}</span><h2>${esc(s.name)}</h2><span class="pill ${cls}">${label}</span></header>
  <div class="meta">${esc(s.kind)} · scene <b>${esc(s.scene)}</b> · <code>${esc(s.objects)}</code></div>
  <div class="shots">${imgs || '<p class="none">Chưa có ảnh chụp.</p>'}</div>
  <div class="text">${md(sectionOf[s.nn] || '')}</div>
</section>`;
}).join('\n');

const html = `<!doctype html>
<html lang="vi">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Zombie Derby UI</title>
<style>
:root{--bg:#f4f5f7;--card:#fff;--ink:#1d1f24;--muted:#5d6370;--line:#dde0e6;--code:#eef0f3;--accent:#c8361f;
--todo:#6b7280;--doing:#b7791f;--done:#2f855a;--skip:#4a5568;--ask:#6b46c1}
@media (prefers-color-scheme:dark){:root:not([data-theme="light"]){--bg:#15171b;--card:#1e2126;--ink:#e7e9ee;--muted:#9aa1ad;--line:#30343b;--code:#272b31;--accent:#ff6b4a}}
:root[data-theme="dark"]{--bg:#15171b;--card:#1e2126;--ink:#e7e9ee;--muted:#9aa1ad;--line:#30343b;--code:#272b31;--accent:#ff6b4a}
*{box-sizing:border-box}
body{margin:0;background:var(--bg);color:var(--ink);font:15px/1.55 "Segoe UI",system-ui,-apple-system,Arial,sans-serif}
main{max-width:1180px;margin:0 auto;padding:24px 16px 64px}
h1{margin:0 0 4px;font-size:26px}
.sub{color:var(--muted);margin:0 0 18px}
a{color:var(--accent);text-decoration:none}
code{background:var(--code);padding:1px 5px;border-radius:4px;font-size:13px;word-break:break-word}
pre{background:var(--code);padding:12px 14px;border-radius:8px;overflow-x:auto;font-size:12.5px;line-height:1.35}
.pill{display:inline-block;padding:1px 9px;border-radius:999px;font-size:12px;font-weight:600;color:#fff;white-space:nowrap}
.pill.todo{background:var(--todo)}.pill.doing{background:var(--doing)}.pill.done{background:var(--done)}.pill.skip{background:var(--skip)}.pill.ask{background:var(--ask)}
.tablewrap{overflow-x:auto;background:var(--card);border:1px solid var(--line);border-radius:10px;margin:12px 0 22px}
table{border-collapse:collapse;width:100%;min-width:720px}
th,td{text-align:left;padding:8px 10px;border-bottom:1px solid var(--line);vertical-align:top}
th{font-size:12px;text-transform:uppercase;letter-spacing:.04em;color:var(--muted)}
tr:last-child td{border-bottom:0}
td.nn{font-variant-numeric:tabular-nums;font-weight:700}
th,td:nth-child(4){white-space:nowrap}
details.intro{background:var(--card);border:1px solid var(--line);border-radius:10px;padding:4px 16px 8px;margin-bottom:22px}
details.intro summary{cursor:pointer;font-weight:600;padding:8px 0}
.card{background:var(--card);border:1px solid var(--line);border-radius:12px;padding:16px;margin:0 0 18px;scroll-margin-top:12px}
.card header{display:flex;align-items:center;gap:12px;flex-wrap:wrap}
.card h2{margin:0;font-size:20px;flex:1}
.big{font-size:22px;font-weight:800;color:var(--accent);font-variant-numeric:tabular-nums}
.meta{color:var(--muted);font-size:13px;margin:4px 0 12px}
.shots{display:grid;grid-template-columns:repeat(auto-fill,minmax(300px,1fr));gap:12px}
figure{margin:0}
figure img{width:100%;display:block;border-radius:8px;border:1px solid var(--line);cursor:zoom-in;aspect-ratio:16/9;object-fit:cover;background:#000}
figcaption{font-size:12px;color:var(--muted);margin-top:3px}
.text h3{font-size:15px;margin:14px 0 4px}
.text ul{padding-left:20px;margin:10px 0 0}
.none{color:var(--muted)}
dialog{border:0;padding:0;background:transparent;max-width:96vw;max-height:96vh}
dialog::backdrop{background:rgba(0,0,0,.82)}
dialog img{max-width:96vw;max-height:92vh;display:block;border-radius:6px}
</style>
</head>
<body>
<main>
<h1>Zombie Derby — UI</h1>
<p class="sub">Giai đoạn 1 ReskinUI · ${screens.length} màn · ${summary} · dựng lúc ${esc(new Date().toLocaleString('vi-VN'))}</p>
<div class="tablewrap"><table>
<thead><tr><th>Trạng thái</th><th>#</th><th>Màn</th><th>Loại</th><th>Scene</th><th>Object gốc</th></tr></thead>
<tbody>
${rows}
</tbody></table></div>
<details class="intro" open><summary>Luồng màn hình và lưu ý chung</summary>${md(intro.replace(/^# .*\r?\n/, ''))}</details>
${cards}
</main>
<dialog id="zoom"><img alt=""></dialog>
<script>
const dlg = document.getElementById('zoom'), big = dlg.querySelector('img');
document.addEventListener('click', (e) => {
  if (e.target.matches('figure img')) { big.src = e.target.src; dlg.showModal(); }
  else if (dlg.open) dlg.close();
});
</script>
</body>
</html>
`;
fs.writeFileSync(path.join(here, 'index.html'), html);
console.log(`index.html: ${screens.length} screens, ${shotFiles.length} shots, ${(html.length / 1024 / 1024).toFixed(2)} MB`);
