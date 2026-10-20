"""Print decompiled methods compactly: python -I show.py <Class> [MethodSubstr ...] [--list]
Strips local declarations, metadata-init boilerplate and class-init checks."""
import re, sys, os
D = os.path.join(os.path.dirname(__file__), '..', '..', 'dump', 'decompiled')
cls = sys.argv[1]
pats = [a for a in sys.argv[2:] if not a.startswith('--')]
src = open(os.path.join(D, cls + '.c'), encoding='utf-8').read()
body = src.split('*/', 1)[1] if src.startswith('/*') else src
funcs = re.split(r'(?=^// ==== )', body, flags=re.M)
if '--list' in sys.argv:
    for f in funcs:
        m = re.match(r'// ==== (.*?)   @0x(\w+)', f)
        if m:
            print(m.group(2), m.group(1), len(f))
    sys.exit()
if '--def' in sys.argv:
    print(src.split('*/', 1)[0])
for f in funcs:
    head = f.split('\n', 1)[0]
    if pats and not any(p in head for p in pats):
        continue
    out = []
    lines = f.split('\n')
    skip_init = False
    for ln in lines:
        s = ln.strip()
        if re.match(r'^(undefined\d?|uint|int|long|ulong|float|double|bool|char|byte|void|code|short|ushort)\s*\**\s*\(?\**[\w\[\]\s\)\(]*;$', s) and '(' not in s.split()[0] and '=' not in s:
            continue
        if re.match(r'^\w[\w \*]*\[\d+\];$', s):
            continue
        if s.startswith('/* WARNING'):
            continue
        if re.match(r'^if \(\(bRam\w+ & 1\) == 0\) \{$', s) or re.match(r"^if \(cRam\w+ == '\\0'\) \{$", s):
            skip_init = True; continue
        if skip_init:
            if s == '}':
                skip_init = False
            continue
        if re.match(r'^if \(\*\(int \*\)\(_\w+_TypeInfo \+ 0xe0\) == 0\) \{$', s):
            skip_init = True; continue
        out.append(ln)
    print('\n'.join(l for l in out if l.strip() != ''))
