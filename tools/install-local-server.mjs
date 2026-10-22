// npm "postbuild": copy the local test server (tools/local-server/*) into the builds folder (config.buildsDir),
// next to the <version> folders, so every build there can be played on http://localhost:8090/.
import { copyFileSync, existsSync, mkdirSync, readdirSync } from 'node:fs';
import { dirname, isAbsolute, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { config } from '../JS_SDK_2.0/config.mjs';

const root = dirname(dirname(fileURLToPath(import.meta.url)));
const dir = config.buildsDir ?? 'Build';
const builds = isAbsolute(dir) ? dir : join(root, dir);
const src = join(root, 'tools', 'local-server');
mkdirSync(builds, { recursive: true });
for (const f of readdirSync(src)) copyFileSync(join(src, f), join(builds, f));
console.log(`local server: ${join(builds, 'start-local-server.bat')} -> http://localhost:8090/`);
if (!existsSync(join(builds, 'server.mjs'))) process.exit(1);
