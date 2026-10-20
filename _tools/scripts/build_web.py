"""Convert the AssetRipper Unity project (+ original data.unity3d for mesh data)
into web-ready assets for the JS port.

Coordinate conversion: Unity is left-handed (Z forward); three.js is right-handed.
We negate Z:  pos (x,y,z)->(x,y,-z), quat (x,y,z,w)->(-x,-y,z,w), triangle winding reversed.

Usage: python -I build_web.py <unity_project/ExportedProject> <data.unity3d> <web/assets>
"""
import os, re, sys, json, glob, shutil, struct, math, zlib
import yaml

try:
    from yaml import CSafeLoader as Loader
except ImportError:
    from yaml import SafeLoader as Loader

PROJ, DATA, OUT = sys.argv[1], sys.argv[2], sys.argv[3]
ASSETS = os.path.join(PROJ, 'Assets')
os.makedirs(OUT, exist_ok=True)

# ---------------------------------------------------------------- guid index
guid2path = {}
for meta in glob.glob(os.path.join(ASSETS, '**', '*.meta'), recursive=True):
    with open(meta, encoding='utf-8', errors='replace') as f:
        m = re.search(r'^guid: (\w+)', f.read(), re.M)
    if m:
        guid2path[m.group(1)] = os.path.relpath(meta[:-5], ASSETS).replace('\\', '/')

def script_name(guid):
    p = guid2path.get(guid)
    if p and p.endswith('.cs'):
        return os.path.basename(p)[:-3]
    return None

# ---- classes living in DLLs: Unity fileID = first 4 bytes (LE int32) of MD4("s\0\0\0" + namespace + name)
def _md4(msg):
    import struct as st
    def F(x, y, z): return (x & y) | (~x & z)
    def G(x, y, z): return (x & y) | (x & z) | (y & z)
    def H(x, y, z): return x ^ y ^ z
    rol = lambda v, n: ((v << n) | (v >> (32 - n))) & 0xffffffff
    ml = len(msg) * 8
    msg += b'\x80' + b'\0' * ((55 - len(msg)) % 64) + st.pack('<Q', ml)
    a, b, c, d = 0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476
    for i in range(0, len(msg), 64):
        X = st.unpack('<16I', msg[i:i + 64]); A, B, C, D = a, b, c, d
        for k in range(16):
            s_ = [3, 7, 11, 19][k % 4]
            if k % 4 == 0: A = rol((A + F(B, C, D) + X[k]) & 0xffffffff, s_)
            elif k % 4 == 1: D = rol((D + F(A, B, C) + X[k]) & 0xffffffff, s_)
            elif k % 4 == 2: C = rol((C + F(D, A, B) + X[k]) & 0xffffffff, s_)
            else: B = rol((B + F(C, D, A) + X[k]) & 0xffffffff, s_)
        for k in range(16):
            idx = [0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15][k]; s_ = [3, 5, 9, 13][k % 4]
            if k % 4 == 0: A = rol((A + G(B, C, D) + X[idx] + 0x5a827999) & 0xffffffff, s_)
            elif k % 4 == 1: D = rol((D + G(A, B, C) + X[idx] + 0x5a827999) & 0xffffffff, s_)
            elif k % 4 == 2: C = rol((C + G(D, A, B) + X[idx] + 0x5a827999) & 0xffffffff, s_)
            else: B = rol((B + G(C, D, A) + X[idx] + 0x5a827999) & 0xffffffff, s_)
        for k in range(16):
            idx = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15][k]; s_ = [3, 9, 11, 15][k % 4]
            if k % 4 == 0: A = rol((A + H(B, C, D) + X[idx] + 0x6ed9eba1) & 0xffffffff, s_)
            elif k % 4 == 1: D = rol((D + H(A, B, C) + X[idx] + 0x6ed9eba1) & 0xffffffff, s_)
            elif k % 4 == 2: C = rol((C + H(D, A, B) + X[idx] + 0x6ed9eba1) & 0xffffffff, s_)
            else: B = rol((B + H(C, D, A) + X[idx] + 0x6ed9eba1) & 0xffffffff, s_)
        a, b, c, d = (a + A) & 0xffffffff, (b + B) & 0xffffffff, (c + C) & 0xffffffff, (d + D) & 0xffffffff
    return st.pack('<4I', a, b, c, d)

def _fid(ns, name):
    return struct.unpack('<i', _md4(b's\0\0\0' + (ns + name).encode())[:4])[0]

_DLL_CLASSES = {}
for _ns, _names in (('UnityEngine.UI', ['Image', 'RawImage', 'Text', 'Button', 'Toggle', 'ToggleGroup', 'Slider', 'Scrollbar', 'ScrollRect', 'Mask', 'RectMask2D', 'InputField', 'Dropdown',
                                       'CanvasScaler', 'GraphicRaycaster', 'HorizontalLayoutGroup', 'VerticalLayoutGroup', 'GridLayoutGroup', 'LayoutElement', 'ContentSizeFitter',
                                       'AspectRatioFitter', 'Outline', 'Shadow', 'PositionAsUV1', 'Selectable']),
                    ('UnityEngine.EventSystems', ['EventSystem', 'StandaloneInputModule', 'EventTrigger', 'PhysicsRaycaster', 'Physics2DRaycaster', 'TouchInputModule'])):
    for _n in _names:
        _DLL_CLASSES[_fid(_ns, _n)] = _n

def dll_script(guid, fid):
    return _DLL_CLASSES.get(fid) or ('%s:%s' % (guid, fid))

# Unity builtin meshes
BUILTIN_MESH = {10202: 'Cube', 10206: 'Cylinder', 10207: 'Sphere', 10208: 'Capsule', 10209: 'Plane', 10210: 'Quad'}

# ---------------------------------------------------------------- unity yaml
DOC_RE = re.compile(r'^--- !u!(\d+) &(-?\d+)( stripped)?\s*$', re.M)

def load_unity_yaml(path):
    with open(path, encoding='utf-8', errors='replace') as f:
        txt = f.read()
    docs = []
    heads = list(DOC_RE.finditer(txt))
    for i, h in enumerate(heads):
        body = txt[h.end():heads[i + 1].start() if i + 1 < len(heads) else len(txt)]
        try:
            d = yaml.load(body, Loader=Loader)
        except Exception as e:
            print('yaml error', path, h.group(2), e)
            continue
        if not d:
            continue
        tname = next(iter(d))
        docs.append((int(h.group(1)), h.group(2), tname, d[tname] or {}, bool(h.group(3))))
    return docs

def asset_key(relpath):
    return os.path.splitext(relpath)[0]

# ---------------------------------------------------------------- refs
class Ctx:
    def __init__(self):
        self.local = {}  # fileID(str) -> index

def conv_ref(v, ctx):
    fid = v.get('fileID', 0)
    guid = v.get('guid')
    if guid and guid != '0000000000000000f000000000000000' and guid != '0000000000000000e000000000000000':
        p = guid2path.get(guid)
        if p is None:
            return None
        if p.endswith('.cs'):
            return {'$script': os.path.basename(p)[:-3]}
        return '@' + asset_key(p) + ('' if fid in (0,) else '#' + str(fid))
    if guid == '0000000000000000e000000000000000':
        return '@builtin#' + str(fid)
    if guid == '0000000000000000f000000000000000':
        return '@builtin_extra#' + str(fid)
    if fid == 0:
        return None
    idx = ctx.local.get(str(fid))
    return '#' + str(idx) if idx is not None else '#?' + str(fid)

def is_ref(v):
    return isinstance(v, dict) and 'fileID' in v and len(v) <= 3 and set(v) <= {'fileID', 'guid', 'type'}

def conv(v, ctx):
    if is_ref(v):
        return conv_ref(v, ctx)
    if isinstance(v, dict):
        # ACTk obscured types -> plain value
        if 'fakeValue' in v and 'hiddenValue' in v:
            return v['fakeValue']
        return {k: conv(x, ctx) for k, x in v.items()}
    if isinstance(v, list):
        return [conv(x, ctx) for x in v]
    if isinstance(v, float):
        if math.isnan(v) or math.isinf(v):
            return 0
        return v
    return v

def vec3(v, flip=True):
    if v is None:
        return [0, 0, 0]
    return [v['x'], v['y'], -v['z'] if flip else v['z']]

def quat(v):
    return [-v['x'], -v['y'], v['z'], v['w']]

# ---------------------------------------------------------------- scene/prefab conversion
SKIP_COMPONENT_KEYS = {'m_ObjectHideFlags', 'm_CorrespondingSourceObject', 'm_PrefabInstance', 'm_PrefabAsset',
                       'm_GameObject', 'm_EditorHideFlags', 'm_EditorClassIdentifier', 'serializedVersion'}

mesh_refs = set()

def convert_hierarchy(path):
    docs = load_unity_yaml(path)
    ctx = Ctx()
    # assign indices: objects get their own index space and components another; unify into one list
    for i, d in enumerate(docs):
        ctx.local[d[1]] = i
    nodes = []
    for cid, fid, tname, data, stripped in docs:
        n = {'i': ctx.local[fid], 'type': tname}
        if tname == 'GameObject':
            n['name'] = data.get('m_Name', '')
            n['active'] = data.get('m_IsActive', 1)
            n['layer'] = data.get('m_Layer', 0)
            n['tag'] = data.get('m_TagString', 'Untagged')
            n['comps'] = [conv_ref(c['component'], ctx) for c in data.get('m_Component', [])]
        elif tname in ('Transform', 'RectTransform'):
            n['go'] = conv_ref(data['m_GameObject'], ctx)
            n['p'] = vec3(data.get('m_LocalPosition'))
            n['r'] = quat(data.get('m_LocalRotation', {'x': 0, 'y': 0, 'z': 0, 'w': 1}))
            n['s'] = vec3(data.get('m_LocalScale', {'x': 1, 'y': 1, 'z': 1}), flip=False)
            n['parent'] = conv_ref(data.get('m_Father', {'fileID': 0}), ctx)
            n['children'] = [conv_ref(c, ctx) for c in data.get('m_Children', [])]
            if tname == 'RectTransform':
                for k in ('m_AnchorMin', 'm_AnchorMax', 'm_AnchoredPosition', 'm_SizeDelta', 'm_Pivot'):
                    v = data.get(k)
                    n[k[2:]] = [v['x'], v['y']] if v else None
                n['p'][2] = -n['p'][2]  # keep UI in unity space
                n['r'] = [data['m_LocalRotation'][a] for a in 'xyzw']
        elif tname == 'PrefabInstance':
            n['data'] = conv(data, ctx)
        else:
            if 'm_GameObject' in data:
                n['go'] = conv_ref(data['m_GameObject'], ctx)
            if tname == 'MonoBehaviour':
                sc = data.get('m_Script', {})
                n['script'] = script_name(sc.get('guid', '')) or dll_script(sc.get('guid', ''), sc.get('fileID', 0))
            props = {}
            for k, v in data.items():
                if k in SKIP_COMPONENT_KEYS or k == 'm_Script':
                    continue
                props[k] = conv(v, ctx)
            # coordinate conversion for known vector props
            if tname in ('BoxCollider', 'SphereCollider', 'CapsuleCollider') and 'm_Center' in data:
                props['m_Center'] = vec3(data['m_Center'])
            if tname == 'BoxCollider':
                props['m_Size'] = vec3(data['m_Size'], flip=False)
            if tname == 'Rigidbody' and 'm_CenterOfMass' in data:
                props['m_CenterOfMass'] = vec3(data['m_CenterOfMass'])
            if tname in ('MeshFilter', 'MeshCollider', 'SkinnedMeshRenderer'):
                m = props.get('m_Mesh')
                if isinstance(m, str) and m.startswith('@'):
                    mesh_refs.add(m)
            n['props'] = props
        nodes.append(n)
    return nodes

# ---------------------------------------------------------------- meshes
def build_meshes(out_dir):
    import UnityPy
    from UnityPy.helpers.MeshHelper import MeshHandler
    os.makedirs(out_dir, exist_ok=True)
    env = UnityPy.load(DATA)
    by_name = {}
    for o in env.objects:
        if o.type.name == 'Mesh':
            d = o.read()
            by_name.setdefault(d.m_Name, []).append(d)
    manifest = {}
    files = sorted(glob.glob(os.path.join(ASSETS, '**', '*.asset'), recursive=True))
    for f in files:
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        with open(f, encoding='utf-8', errors='replace') as fh:
            head = fh.read(4096)
        if '\nMesh:' not in head:
            continue
        key = asset_key(rel)
        name = re.search(r'm_Name: (.*)', head).group(1).strip().strip("'\"")
        vcs = [int(x) for x in re.findall(r'vertexCount: (\d+)', open(f, encoding='utf-8', errors='replace').read(200000))]
        cands = by_name.get(name, [])
        mesh = None
        for c in cands:
            if [s.vertexCount for s in c.m_SubMeshes] == vcs[:len(c.m_SubMeshes)]:
                mesh = c
                break
        if mesh is None and cands:
            mesh = cands[0]
        if mesh is None:
            print('mesh not found', rel)
            continue
        if len(cands) > 1:
            cands.remove(mesh)
        try:
            entry = write_mesh(mesh, MeshHandler, os.path.join(out_dir, safe(key) + '.bin'))
        except Exception as e:
            print('mesh fail', rel, e)
            continue
        entry['file'] = safe(key) + '.bin'
        entry['name'] = name
        manifest['@' + key] = entry
    return manifest

def safe(key):
    return re.sub(r'[^A-Za-z0-9_\-]', '_', key)

def write_mesh(mesh, MeshHandler, path):
    h = MeshHandler(mesh)
    h.process()
    vc = h.m_VertexCount
    buf = bytearray()
    attrs = {}

    def add(name, arr, comps, fmt='f'):
        nonlocal buf
        if arr is None or len(arr) == 0:
            return
        flat = []
        for v in arr:
            if isinstance(v, (list, tuple)):
                v = list(v[:comps])
                flat.extend(v + [0] * (comps - len(v)))
            else:
                flat.append(v)
        if len(flat) != vc * comps:
            return
        while len(buf) % 4:
            buf.append(0)
        attrs[name] = [len(buf), comps, fmt]
        buf += struct.pack('<%d%s' % (len(flat), fmt), *flat)

    pos = [(v[0], v[1], -v[2]) for v in h.m_Vertices]
    add('position', pos, 3)
    if h.m_Normals:
        add('normal', [(v[0], v[1], -v[2]) for v in h.m_Normals], 3)
    if h.m_UV0:
        add('uv', [(u[0], u[1]) for u in h.m_UV0], 2)
    if h.m_UV1:
        add('uv1', [(u[0], u[1]) for u in h.m_UV1], 2)
    if h.m_Colors:
        cols = h.m_Colors
        add('color', [tuple(c[:4]) for c in cols], 4)
    if h.m_BoneWeights and h.m_BoneIndices:
        add('skinWeight', [tuple(w[:4]) for w in h.m_BoneWeights], 4)
        add('skinIndex', [tuple(int(i) for i in b[:4]) for b in h.m_BoneIndices], 4, 'H')
    # indices per submesh; reverse winding
    idx = list(h.m_IndexBuffer)
    subs = []
    out_idx = []
    is16 = h.m_Use16BitIndices
    for sm in mesh.m_SubMeshes:
        start = sm.firstByte // (2 if is16 else 4)
        cnt = sm.indexCount
        tri = idx[start:start + cnt]
        if sm.topology == 0:
            for t in range(0, len(tri) - 2, 3):
                out_idx += [tri[t] + sm.baseVertex, tri[t + 2] + sm.baseVertex, tri[t + 1] + sm.baseVertex]
        else:
            out_idx += [i + sm.baseVertex for i in tri]
        subs.append([len(out_idx) - (cnt if sm.topology != 0 else (len(tri) // 3) * 3), (cnt if sm.topology != 0 else (len(tri) // 3) * 3), sm.topology])
    while len(buf) % 4:
        buf.append(0)
    big = vc > 65535
    ifmt = 'I' if big else 'H'
    index = [len(buf), len(out_idx), ifmt]
    buf += struct.pack('<%d%s' % (len(out_idx), ifmt), *out_idx)
    entry = {'vc': vc, 'attrs': attrs, 'index': index, 'sub': subs}
    if mesh.m_BindPose:
        bps = []
        for m in mesh.m_BindPose:
            # Unity Matrix4x4 e{row}{col}; convert with S*M*S, S=diag(1,1,-1,1); output column-major
            e = [[getattr(m, 'e%d%d' % (r, c)) for c in range(4)] for r in range(4)]
            s = [1, 1, -1, 1]
            e = [[e[r][c] * s[r] * s[c] for c in range(4)] for r in range(4)]
            bps.append([e[r][c] for c in range(4) for r in range(4)])
        entry['bindposes'] = bps
        entry['boneHashes'] = list(mesh.m_BoneNameHashes or [])
        entry['rootBoneHash'] = getattr(mesh, 'm_RootBoneNameHash', 0)
    with open(path, 'wb') as f:
        f.write(buf)
    return entry

# ---------------------------------------------------------------- materials / shaders
def shader_name(ref):
    if not ref:
        return 'Standard'
    if isinstance(ref, str) and ref.startswith('@builtin_extra#'):
        return {'46': 'Standard', '45': 'Standard (Specular setup)', '10770': 'UI/Default', '200': 'Particles/Standard Unlit',
                '207': 'Legacy Shaders/Particles/Additive', '203': 'Legacy Shaders/Particles/Alpha Blended',
                '10753': 'Sprites/Default', '10101': 'GUI/Text Shader', '10750': 'Unlit/Texture', '10752': 'Unlit/Transparent'}.get(ref.split('#')[1], 'builtin:' + ref.split('#')[1])
    p = ref[1:].split('#')[0]
    fp = os.path.join(ASSETS, p + '.shader')
    if os.path.exists(fp):
        m = re.search(r'Shader\s+"([^"]+)"', open(fp, encoding='utf-8', errors='replace').read(2000))
        if m:
            return m.group(1)
    return p

def build_materials():
    mats = {}
    ctx = Ctx()
    for f in glob.glob(os.path.join(ASSETS, '**', '*.mat'), recursive=True):
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        docs = load_unity_yaml(f)
        if not docs:
            continue
        d = docs[0][3]
        sp = d.get('m_SavedProperties', {})
        tex = {}
        for k, v in (sp.get('m_TexEnvs') or {}).items():
            t = conv_ref(v['m_Texture'], ctx)
            if t:
                tex[k] = {'tex': t, 'scale': [v['m_Scale']['x'], v['m_Scale']['y']], 'offset': [v['m_Offset']['x'], v['m_Offset']['y']]}
        cols = {k: [c['r'], c['g'], c['b'], c['a']] for k, c in (sp.get('m_Colors') or {}).items()}
        mats['@' + asset_key(rel)] = {
            'name': d.get('m_Name'), 'shader': shader_name(conv_ref(d.get('m_Shader', {'fileID': 0}), ctx)),
            'tex': tex, 'floats': sp.get('m_Floats') or {}, 'colors': cols,
            'keywords': d.get('m_ValidKeywords') or d.get('m_ShaderKeywords') or [],
            'queue': d.get('m_CustomRenderQueue', -1),
        }
    return mats

# ---------------------------------------------------------------- textures / audio / text
def copy_assets():
    tex = {}
    for ext, sub, store in (('png', 'tex', tex),):
        for f in glob.glob(os.path.join(ASSETS, '**', '*.' + ext), recursive=True):
            rel = os.path.relpath(f, ASSETS).replace('\\', '/')
            dst = safe(asset_key(rel)) + '.' + ext
            os.makedirs(os.path.join(OUT, sub), exist_ok=True)
            shutil.copyfile(f, os.path.join(OUT, sub, dst))
            meta = open(f + '.meta', encoding='utf-8', errors='replace').read() if os.path.exists(f + '.meta') else ''
            info = {'file': sub + '/' + dst}
            m = re.search(r'filterMode: (-?\d+)', meta)
            if m: info['filter'] = int(m.group(1))
            m = re.search(r'wrapU: (-?\d+)', meta)
            if m: info['wrap'] = int(m.group(1))
            store['@' + asset_key(rel)] = info
    audio = {}
    for f in glob.glob(os.path.join(ASSETS, '**', '*.*'), recursive=True):
        if os.path.splitext(f)[1].lower() not in ('.ogg', '.wav', '.mp3', '.m4a'):
            continue
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        dst = safe(asset_key(rel)) + os.path.splitext(f)[1].lower()
        os.makedirs(os.path.join(OUT, 'audio'), exist_ok=True)
        shutil.copyfile(f, os.path.join(OUT, 'audio', dst))
        audio['@' + asset_key(rel)] = {'file': 'audio/' + dst, 'name': os.path.basename(asset_key(rel))}
    texts = {}
    for f in glob.glob(os.path.join(ASSETS, 'Resources', '*.txt')) + glob.glob(os.path.join(ASSETS, 'Resources', '*.json')):
        texts[os.path.splitext(os.path.basename(f))[0]] = open(f, encoding='utf-8', errors='replace').read()
    return tex, audio, texts

# ---------------------------------------------------------------- animation
def fnum(x):
    try:
        return float(x)
    except (TypeError, ValueError):
        return float('inf')

def hermite(t, k0, k1):
    dt = k1['time'] - k0['time']
    if dt <= 0:
        return k0['value']
    s = (t - k0['time']) / dt
    s2, s3 = s * s, s * s * s
    h00, h10, h01, h11 = 2 * s3 - 3 * s2 + 1, s3 - 2 * s2 + s, -2 * s3 + 3 * s2, s3 - s2
    out = {}
    for c in k0['value']:
        m0 = fnum(k0['outSlope'][c] if isinstance(k0['outSlope'], dict) else k0['outSlope'])
        m1 = fnum(k1['inSlope'][c] if isinstance(k1['inSlope'], dict) else k1['inSlope'])
        if not all(map(math.isfinite, (m0, m1))):
            out[c] = k0['value'][c]
            continue
        out[c] = h00 * fnum(k0['value'][c]) + h10 * dt * m0 + h01 * fnum(k1['value'][c]) + h11 * dt * m1
    return out

def sample_curve(keys, t):
    if not keys:
        return None
    norm = []
    for k in keys:
        v = k['value']
        if not isinstance(v, dict):
            k = dict(k, value={'v': v}, inSlope={'v': k['inSlope']}, outSlope={'v': k['outSlope']})
        norm.append(k)
    if t <= norm[0]['time']:
        return norm[0]['value']
    if t >= norm[-1]['time']:
        return norm[-1]['value']
    for a, b in zip(norm, norm[1:]):
        if a['time'] <= t <= b['time']:
            return hermite(t, a, b)
    return norm[-1]['value']

def path_hash(p):
    if isinstance(p, int):
        return p & 0xffffffff
    m = re.match(r'path_0x([0-9A-Fa-f]{8})', p or '')
    if m:
        return int(m.group(1), 16)
    return zlib.crc32((p or '').encode('utf-8')) & 0xffffffff

def build_animations():
    clips = {}
    for f in glob.glob(os.path.join(ASSETS, '**', '*.anim'), recursive=True):
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        docs = load_unity_yaml(f)
        d = docs[0][3]
        settings = d.get('m_AnimationClipSettings', {})
        length = max(settings.get('m_StopTime', 0) - settings.get('m_StartTime', 0), 1 / 30)
        loop = bool(settings.get('m_LoopTime', 0))
        fps = 30
        n = max(2, int(math.ceil(length * fps)) + 1)
        times = [min(length, i / fps) for i in range(n)]
        tracks = []
        for kind, key in (('q', 'm_RotationCurves'), ('p', 'm_PositionCurves'), ('s', 'm_ScaleCurves'), ('e', 'm_EulerCurves')):
            for c in d.get(key) or []:
                keys = c['curve']['m_Curve']
                vals = []
                for t in times:
                    v = sample_curve(keys, t)
                    if kind == 'q':
                        l = math.sqrt(sum(v[a] ** 2 for a in 'xyzw')) or 1
                        vals += [-v['x'] / l, -v['y'] / l, v['z'] / l, v['w'] / l]
                    elif kind == 'p':
                        vals += [v['x'], v['y'], -v['z']]
                    elif kind == 'e':
                        vals += [v['x'], v['y'], v['z']]
                    else:
                        vals += [v['x'], v['y'], v['z']]
                tracks.append({'k': kind, 'path': c.get('path', ''), 'h': path_hash(c.get('path', '')), 'v': [round(x, 5) for x in vals]})
        for c in d.get('m_FloatCurves') or []:
            keys = c['curve']['m_Curve']
            vals = [sample_curve(keys, t)['v'] for t in times]
            tracks.append({'k': 'f', 'attr': c.get('attribute'), 'cls': c.get('classID'), 'path': c.get('path', ''), 'h': path_hash(c.get('path', '')),
                           'v': [round(x, 5) for x in vals]})
        events = [{'t': e.get('time'), 'fn': e.get('functionName'), 's': e.get('data'), 'f': e.get('floatParameter'), 'i': e.get('intParameter')}
                  for e in d.get('m_Events') or []]
        bake = [settings.get('m_LoopBlendOrientation', 0), settings.get('m_LoopBlendPositionY', 0), settings.get('m_LoopBlendPositionXZ', 0)]
        clips['@' + asset_key(rel)] = {'name': d.get('m_Name'), 'length': length, 'loop': loop, 'fps': fps, 'n': n, 'tracks': tracks, 'events': events, 'bake': bake}
    return clips

def build_controllers():
    ctrls = {}
    for f in glob.glob(os.path.join(ASSETS, '**', '*.controller'), recursive=True):
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        docs = load_unity_yaml(f)
        ctx = Ctx()
        for i, d in enumerate(docs):
            ctx.local[d[1]] = i
        objs = {('#%d' % ctx.local[fid]): (tname, conv(data, ctx)) for _, fid, tname, data, _ in docs}
        ctrl = next(v for v in objs.values() if v[0] == 'AnimatorController')[1]
        out = {'params': [{'name': p['m_Name'], 'type': p['m_Type'], 'f': p.get('m_DefaultFloat'), 'i': p.get('m_DefaultInt'), 'b': p.get('m_DefaultBool')} for p in ctrl.get('m_AnimatorParameters') or []], 'layers': []}

        def trans(ids):
            res = []
            for t in ids or []:
                if t not in objs:
                    continue
                td = objs[t][1]
                dst = td.get('m_DstState')
                res.append({'to': objs[dst][1].get('m_Name') if dst in objs else None, 'conds': [{'mode': c['m_ConditionMode'], 'param': c['m_ConditionEvent'], 'th': c['m_EventTreshold']} for c in td.get('m_Conditions') or []],
                            'exit': td.get('m_HasExitTime'), 'exitTime': td.get('m_ExitTime'), 'dur': td.get('m_TransitionDuration'), 'fixed': td.get('m_HasFixedDuration')})
            return res
        for layer in ctrl.get('m_AnimatorLayers') or []:
            sm = objs.get(layer['m_StateMachine'])
            if not sm:
                continue
            smd = sm[1]
            states = []
            for cs in smd.get('m_ChildStates') or []:
                st = objs.get(cs['m_State'])
                if not st:
                    continue
                sd = st[1]
                motion = sd.get('m_Motion')
                states.append({'name': sd.get('m_Name'), 'clip': motion, 'speed': sd.get('m_Speed', 1), 'trans': trans(sd.get('m_Transitions'))})
            default = objs.get(smd.get('m_DefaultState'))
            out['layers'].append({'name': layer['m_Name'], 'default': default[1].get('m_Name') if default else None, 'states': states,
                                  'any': trans(smd.get('m_AnyStateTransitions'))})
        ctrls['@' + asset_key(rel)] = out
    return ctrls

# ---------------------------------------------------------------- main
def main():
    if '--anims-only' in sys.argv:
        index = json.load(open(os.path.join(OUT, 'index.json')))
        index['clips'] = build_animations()
        index['controllers'] = build_controllers()
        json.dump(index, open(os.path.join(OUT, 'index.json'), 'w'), separators=(',', ':'))
        return
    if '--meshes-only' in sys.argv:
        index = json.load(open(os.path.join(OUT, 'index.json')))
        index['meshes'] = build_meshes(os.path.join(OUT, 'mesh'))
        print('meshes', len(index['meshes']))
        json.dump(index, open(os.path.join(OUT, 'index.json'), 'w'), separators=(',', ':'))
        return
    scenes_dir = os.path.join(OUT, 'scenes')
    os.makedirs(scenes_dir, exist_ok=True)
    index = {'scenes': [], 'prefabs': {}}
    for f in sorted(glob.glob(os.path.join(ASSETS, 'Scenes', '*.unity'))):
        name = os.path.basename(f)[:-6]
        nodes = convert_hierarchy(f)
        json.dump({'name': name, 'nodes': nodes}, open(os.path.join(scenes_dir, name + '.json'), 'w'), separators=(',', ':'))
        index['scenes'].append(name)
        print('scene', name, len(nodes))
    pdir = os.path.join(OUT, 'prefabs')
    os.makedirs(pdir, exist_ok=True)
    for f in sorted(glob.glob(os.path.join(ASSETS, '**', '*.prefab'), recursive=True)):
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        nodes = convert_hierarchy(f)
        fn = safe(asset_key(rel)) + '.json'
        json.dump({'name': os.path.basename(asset_key(rel)), 'nodes': nodes}, open(os.path.join(pdir, fn), 'w'), separators=(',', ':'))
        index['prefabs']['@' + asset_key(rel)] = 'prefabs/' + fn
    print('prefabs', len(index['prefabs']))
    # scriptable objects / other assets referenced by MB (e.g. GUIMenu.asset)
    sodir = os.path.join(OUT, 'objects')
    os.makedirs(sodir, exist_ok=True)
    index['objects'] = {}
    for f in glob.glob(os.path.join(ASSETS, '**', '*.asset'), recursive=True):
        with open(f, encoding='utf-8', errors='replace') as fh:
            head = fh.read(600)
        if 'MonoBehaviour:' not in head:
            continue
        rel = os.path.relpath(f, ASSETS).replace('\\', '/')
        nodes = convert_hierarchy(f)
        fn = safe(asset_key(rel)) + '.json'
        json.dump({'name': os.path.basename(asset_key(rel)), 'nodes': nodes}, open(os.path.join(sodir, fn), 'w'), separators=(',', ':'))
        index['objects']['@' + asset_key(rel)] = 'objects/' + fn
    index['materials'] = build_materials()
    tex, audio, texts = copy_assets()
    index['textures'] = tex
    index['audio'] = audio
    json.dump(texts, open(os.path.join(OUT, 'texts.json'), 'w', encoding='utf-8'), ensure_ascii=False)
    index['clips'] = build_animations()
    index['controllers'] = build_controllers()
    print('clips', len(index['clips']), 'controllers', len(index['controllers']))
    index['meshes'] = build_meshes(os.path.join(OUT, 'mesh'))
    print('meshes', len(index['meshes']))
    json.dump(index, open(os.path.join(OUT, 'index.json'), 'w'), separators=(',', ':'))

if __name__ == '__main__':
    main()
