"""Re-resolve meshes referenced from scenes whose names are ambiguous (e.g. static-batch
'Combined Mesh (root: scene)') directly through the original scene files (fileID == pathID).
Usage: python -I fix_scene_meshes.py <ExportedProject> <data.unity3d> <web/assets>
"""
import os, re, sys, json, collections
PROJ, DATA, OUT = sys.argv[1], sys.argv[2], sys.argv[3]
sys.argv = [sys.argv[0], PROJ, DATA, OUT]
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import build_web  # noqa: E402  (module-level config only; main() not executed)
import UnityPy
from UnityPy.helpers.MeshHelper import MeshHandler

ASSETS = os.path.join(PROJ, 'Assets')
build = re.findall(r'path: Assets/Scenes/(\w+)\.unity', open(os.path.join(PROJ, 'ProjectSettings', 'EditorBuildSettings.asset')).read())
env = UnityPy.load(DATA)
files = {a.name: a for a in env.assets}
names = collections.Counter()
for o in env.objects:
    if o.type.name == 'Mesh':
        names[o.read().m_Name] += 1
dups = {n for n, c in names.items() if c > 1}
index = json.load(open(os.path.join(OUT, 'index.json')))
mesh_dir = os.path.join(OUT, 'mesh')
total = 0
for idx, scene in enumerate(build):
    sf = files.get('level%d' % idx)
    jp = os.path.join(OUT, 'scenes', scene + '.json')
    if sf is None or not os.path.exists(jp):
        continue
    yml = open(os.path.join(ASSETS, 'Scenes', scene + '.unity'), encoding='utf-8', errors='replace').read()
    fids = [m.group(1) for m in re.finditer(r'^--- !u!\d+ &(-?\d+)', yml, re.M)]
    js = json.load(open(jp))
    done = {}
    n = 0
    for node in js['nodes']:
        if node['type'] not in ('MeshFilter', 'MeshCollider', 'SkinnedMeshRenderer'):
            continue
        o = sf.objects.get(int(fids[node['i']]))
        if o is None:
            continue
        d = o.read()
        pp = d.m_Mesh
        if not pp or pp.m_PathID == 0:
            continue
        try:
            mesh = pp.read()
        except Exception:
            continue
        if mesh.m_Name not in dups:
            continue
        key = '@SceneMesh/%s_%d_%d' % (scene, pp.m_FileID, pp.m_PathID)
        if key not in done:
            fn = build_web.safe(key[1:]) + '.bin'
            entry = build_web.write_mesh(mesh, MeshHandler, os.path.join(mesh_dir, fn))
            entry['file'] = fn; entry['name'] = mesh.m_Name
            index['meshes'][key] = entry
            done[key] = 1
        node['props']['m_Mesh'] = key + '#4300000'
        n += 1
    json.dump(js, open(jp, 'w'), separators=(',', ':'))
    total += n
    print(scene, 'remapped', n, 'unique meshes', len(done))
json.dump(index, open(os.path.join(OUT, 'index.json'), 'w'), separators=(',', ':'))
print('total', total)
