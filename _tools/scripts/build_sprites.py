"""Extract sprite rects from texture .meta files -> web/assets/sprites.json
Key format matches build_web refs: '@<asset path w/o ext>#<fileID>'.
Usage: python -I build_sprites.py <ExportedProject> <web/assets>
"""
import os, re, sys, json, glob
import yaml
try:
    from yaml import CSafeLoader as Loader
except ImportError:
    from yaml import SafeLoader as Loader

PROJ, OUT = sys.argv[1], sys.argv[2]
ASSETS = os.path.join(PROJ, 'Assets')
sprites = {}
for meta in glob.glob(os.path.join(ASSETS, '**', '*.png.meta'), recursive=True):
    rel = os.path.relpath(meta[:-5], ASSETS).replace('\\', '/')
    key = os.path.splitext(rel)[0]
    d = yaml.load(open(meta, encoding='utf-8', errors='replace').read(), Loader=Loader)
    ti = d.get('TextureImporter') or {}
    names = {}
    for e in ti.get('internalIDToNameTable') or []:
        fid = list(e['first'].values())[0]
        names[e['second']] = fid
    w = h = None
    sheet = (ti.get('spriteSheet') or {}).get('sprites') or []
    for s in sheet:
        fid = names.get(s['name'], s.get('internalID'))
        r = s['rect']
        sprites['@%s#%s' % (key, fid)] = {
            'tex': '@' + key, 'name': s['name'], 'rect': [r['x'], r['y'], r['width'], r['height']],
            'pivot': [s['pivot']['x'], s['pivot']['y']], 'border': [s['border'][c] for c in 'xyzw'],
        }
    if ti.get('spriteMode') == 1 or (not sheet and ti.get('textureType') == 8):
        b = (ti.get('spriteBorder') or {'x': 0, 'y': 0, 'z': 0, 'w': 0})
        piv = ti.get('spritePivot') or {'x': .5, 'y': .5}
        sprites['@%s#21300000' % key] = {'tex': '@' + key, 'name': os.path.basename(key), 'rect': None,
                                         'pivot': [piv['x'], piv['y']], 'border': [b[c] for c in 'xyzw']}
# texture pixel sizes (PNG IHDR)
import struct
texsize = {}
for png in glob.glob(os.path.join(ASSETS, '**', '*.png'), recursive=True):
    with open(png, 'rb') as fh:
        h = fh.read(24)
    if h[1:4] == b'PNG':
        w_, h_ = struct.unpack('>II', h[16:24])
        texsize['@' + os.path.splitext(os.path.relpath(png, ASSETS).replace(os.sep, '/'))[0]] = [w_, h_]
for s_ in sprites.values():
    s_['size'] = texsize.get(s_['tex'])
    if s_['rect'] is None and s_['size']:
        s_['rect'] = [0, 0, s_['size'][0], s_['size'][1]]
json.dump(sprites, open(os.path.join(OUT, 'sprites.json'), 'w'), separators=(',', ':'))
print(len(sprites))
