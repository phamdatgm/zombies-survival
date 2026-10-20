"""Rebuild web/assets/texts.json from the ORIGINAL TextAsset bytes (data.unity3d),
decoding each line as UTF-8 and falling back to cp1252 (the English file mixes both).
Usage: python -I build_texts.py <data.unity3d> <web/assets>
"""
import os, sys, json
import UnityPy
DATA, OUT = sys.argv[1], sys.argv[2]
env = UnityPy.load(DATA)
texts = {}
for o in env.objects:
    if o.type.name != 'TextAsset':
        continue
    d = o.read()
    raw = d.m_Script
    if isinstance(raw, str):
        raw = raw.encode('utf-8', 'surrogateescape')
    if raw.startswith(b'\xef\xbb\xbf'):
        raw = raw[3:]
    lines = []
    for ln in raw.split(b'\n'):
        try:
            lines.append(ln.decode('utf-8'))
        except UnicodeDecodeError:
            lines.append(ln.decode('cp1252', errors='replace'))
    texts[d.m_Name] = '\n'.join(lines).replace('\r', '')
json.dump(texts, open(os.path.join(OUT, 'texts.json'), 'w', encoding='utf-8'), ensure_ascii=False)
print(len(texts), sorted(texts))
