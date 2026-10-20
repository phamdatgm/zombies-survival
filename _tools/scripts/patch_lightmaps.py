"""Add lightmap info (lost in AssetRipper YAML) into web scene JSON, from original data.unity3d.
Usage: python -I patch_lightmaps.py <ExportedProject> <data.unity3d> <web/assets>
"""
import os, re, sys, json
import UnityPy

PROJ, DATA, OUT = sys.argv[1], sys.argv[2], sys.argv[3]
ASSETS = os.path.join(PROJ, 'Assets')
build = re.findall(r'path: Assets/Scenes/(\w+)\.unity', open(os.path.join(PROJ, 'ProjectSettings', 'EditorBuildSettings.asset')).read())
env = UnityPy.load(DATA)
files = {a.name: a for a in env.assets}
guid2path = {}
for root, _, fs in os.walk(ASSETS):
    for f in fs:
        if f.endswith('.meta'):
            m = re.search(r'^guid: (\w+)', open(os.path.join(root, f), encoding='utf-8', errors='replace').read(), re.M)
            if m:
                guid2path[m.group(1)] = os.path.relpath(os.path.join(root, f[:-5]), ASSETS).replace('\\', '/')
for idx, scene in enumerate(build):
    sf = files.get('level%d' % idx)
    jp = os.path.join(OUT, 'scenes', scene + '.json')
    if sf is None or not os.path.exists(jp):
        continue
    yml = open(os.path.join(ASSETS, 'Scenes', scene + '.unity'), encoding='utf-8', errors='replace').read()
    fids = [m.group(1) for m in re.finditer(r'^--- !u!\d+ &(-?\d+)', yml, re.M)]
    js = json.load(open(jp))
    nodes = js['nodes']
    n = 0
    for i, node in enumerate(nodes):
        if node['type'] not in ('MeshRenderer', 'SkinnedMeshRenderer'):
            continue
        o = sf.objects.get(int(fids[node['i']]))
        if o is None:
            continue
        d = o.read()
        li = d.m_LightmapIndex
        if li not in (65535, 65534, -1):
            t = d.m_LightmapTilingOffset
            node['props']['m_LightmapIndex'] = li
            node['props']['m_LightmapTilingOffset'] = [t.x, t.y, t.z, t.w]
            n += 1
    lm = []
    ld = os.path.join(ASSETS, 'Scenes', scene, 'LightingData.asset')
    if os.path.exists(ld):
        for g in re.findall(r'm_Lightmap: \{fileID: \d+, guid: (\w+)', open(ld, encoding='utf-8').read()):
            p = guid2path.get(g)
            lm.append('@' + os.path.splitext(p)[0] if p else None)
    js['lightmaps'] = lm
    json.dump(js, open(jp, 'w'), separators=(',', ':'))
    print(scene, 'lightmapped renderers', n, 'lightmaps', lm)
