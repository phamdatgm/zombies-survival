"""Export Avatar assets (skeleton, default pose, humanoid axes) -> web/assets/avatars.json
Quaternions/positions stay in UNITY space here; the JS side converts.
Usage: python -I build_avatars.py <ExportedProject> <web/assets>
"""
import os, re, sys, json, glob, struct
import yaml
try:
    from yaml import CSafeLoader as Loader
except ImportError:
    from yaml import SafeLoader as Loader

PROJ, OUT = sys.argv[1], sys.argv[2]
ASSETS = os.path.join(PROJ, 'Assets')

def hexints(s, fmt='<I'):
    if not s:
        return []
    b = bytes.fromhex(s)
    n = len(b) // 4
    return list(struct.unpack('<%d%s' % (n, fmt[-1]), b))

def v(d, keys='xyz'):
    return [float(d[k]) for k in keys]

def xform(x):
    return {'t': v(x['t'], 'xyz'), 'q': v(x['q'], 'xyzw'), 's': v(x['s'], 'xyz')}

out = {}
for f in glob.glob(os.path.join(ASSETS, 'Avatar', '*.asset')):
    txt = open(f, encoding='utf-8').read()
    body = txt.split('\n', 3)[3]
    d = yaml.load(body, Loader=Loader)['Avatar']
    av = d['m_Avatar']
    tos = {int(k): (v_ or '') for k, v_ in (d.get('m_TOS') or {}).items()}
    sk = av['m_AvatarSkeleton']['data']
    ids = hexints(sk['m_ID'])
    pose = av['m_AvatarSkeletonPose']['data']['m_X']
    dpose = av.get('m_DefaultPose', {}).get('data', {}).get('m_X') or pose
    nodes = []
    for i, nd in enumerate(sk['m_Node']):
        h = ids[i] if i < len(ids) else 0
        nodes.append({'h': h, 'path': tos.get(h, ''), 'parent': nd['m_ParentId'], **xform(dpose[i] if i < len(dpose) else pose[i])})
    entry = {'name': d['m_Name'], 'nodes': nodes}
    hum = av.get('m_Human', {}).get('data')
    if hum and hum.get('m_Skeleton', {}).get('data', {}).get('m_Node'):
        hs = hum['m_Skeleton']['data']
        hids = hexints(hs['m_ID'])
        axes = hs.get('m_AxesArray') or []
        hpose = hum['m_SkeletonPose']['data']['m_X']
        hnodes = []
        for i, nd in enumerate(hs['m_Node']):
            ax = axes[nd['m_AxesId']] if nd['m_AxesId'] >= 0 else None
            hn = {'h': hids[i], 'path': tos.get(hids[i], ''), 'parent': nd['m_ParentId'], **xform(hpose[i])}
            if ax:
                hn['axes'] = {'preQ': v(ax['m_PreQ'], 'xyzw'), 'postQ': v(ax['m_PostQ'], 'xyzw'), 'sgn': v(ax['m_Sgn'], 'xyz'),
                              'min': v(ax['m_Limit']['m_Min'], 'xyz'), 'max': v(ax['m_Limit']['m_Max'], 'xyz'), 'len': ax['m_Length'], 'type': ax['m_Type']}
            hnodes.append(hn)
        entry['human'] = {
            'nodes': hnodes,
            'boneIndex': [x if x < 0x80000000 else -1 for x in hexints(hum['m_HumanBoneIndex'])],
            'rootX': xform(hum['m_RootX']), 'scale': hum.get('m_Scale', 1),
            'armTwist': hum.get('m_ArmTwist', .5), 'foreArmTwist': hum.get('m_ForeArmTwist', .5), 'upperLegTwist': hum.get('m_UpperLegTwist', .5), 'legTwist': hum.get('m_LegTwist', .5),
        }
    out['@Avatar/' + os.path.splitext(os.path.basename(f))[0]] = entry
    print(d['m_Name'], len(nodes), 'human' if 'human' in entry else 'generic')
json.dump(out, open(os.path.join(OUT, 'avatars.json'), 'w'), separators=(',', ':'))
