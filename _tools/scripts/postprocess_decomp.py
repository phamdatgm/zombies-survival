"""Make Ghidra output more readable using Il2CppDumper field offsets.
 - *(T *)((long)__this + 0xNN)   -> this.FIELD
 - (long)__this + 0xNN           -> &this.FIELD
 - *(T *)(*(long *)(X_TypeInfo + 0xb8) + 0xNN) -> X.STATIC
 - adds a header with the class definition (fields with offsets)
Usage: python -I postprocess_decomp.py <dump.cs by_assembly/Assembly-CSharp.cs> <in dirs...> <out dir>
"""
import os, re, sys, glob

cs_path = sys.argv[1]
ins = sys.argv[2:-1]
out = sys.argv[-1]
os.makedirs(out, exist_ok=True)
src = open(cs_path, encoding='utf-8').read()

classes = {}  # name -> {'inst': {off: (name,type)}, 'static': {...}, 'text': str}
for m in re.finditer(r'\n(?:// Namespace: [^\n]*\n)?((?:\[[^\n]*\]\n)*)([^\n]*?(?:class|struct) (\S+)[^\n]*// TypeDefIndex: \d+)\n\{(.*?)\n\}', src, re.S):
    name = m.group(3)
    body = m.group(4)
    inst, stat = {}, {}
    for f in re.finditer(r'\n\t(?:\[[^\]]*\]\n\t)*((?:public|private|protected|internal)[^;\n]*?) (\S+) (\w+); // 0x([0-9A-F]+)', body):
        mods, typ, fname, off = f.group(1), f.group(2), f.group(3), int(f.group(4), 16)
        (stat if ' static' in ' ' + mods else inst)[off] = (fname, typ)
    text = re.sub(r'\n\t// RVA[^\n]*', '', m.group(0))
    classes[name] = {'inst': inst, 'static': stat, 'text': text}
    short = name.split('.')[-1]
    classes.setdefault(short, classes[name])

def cls_for_file(fn):
    base = os.path.splitext(os.path.basename(fn))[0]
    return classes.get(base) or classes.get(base.replace('_', '.'))

def tname(t):
    return re.sub(r'\W', '_', t)

files = {}
for d in ins:
    for f in glob.glob(os.path.join(d, '*.c')):
        files.setdefault(os.path.basename(f), []).append(f)

for fn, parts in files.items():
    code = ''.join(open(p, encoding='utf-8', errors='replace').read() for p in sorted(parts))
    # order functions by address for stable output
    funcs = re.split(r'(?=^// ==== )', code, flags=re.M)
    funcs = [f for f in funcs if f.strip()]
    funcs.sort(key=lambda f: int((re.search(r'@0x([0-9a-f]+)', f) or [0, '0'])[1], 16))
    code = ''.join(funcs)
    c = cls_for_file(fn)
    if c:
        inst = c['inst']
        def rep_field(m):
            off = int(m.group(2), 16)
            f = inst.get(off)
            return ('this.' + f[0]) if f else m.group(0)
        code = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(\(long\)__this \+ (0x[0-9a-f]+)\)', rep_field, code)
        code = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(__this \+ (0x[0-9a-f]+)\)', rep_field, code)
        def rep_addr(m):
            off = int(m.group(1), 16); f = inst.get(off)
            return ('&this.' + f[0]) if f else m.group(0)
        code = re.sub(r'\(long\)__this \+ (0x[0-9a-f]+)', rep_addr, code)
    # statics of any class: *(T *)(*(long *)(_X_TypeInfo + 0xb8) + 0xNN)
    def rep_static(m):
        cname = m.group(1); g2 = m.group(2) or '0'; off = int(g2, 16) if g2.startswith('0x') else int(g2)
        for cand in (cname, cname.replace('_', '.')):
            cc = classes.get(cand)
            if cc and off in cc['static']:
                return cand + '.' + cc['static'][off][0]
        return m.group(0)
    code = re.sub(r'\*\([\w ]+?\s*\**\s*\)\(\*\(long \*\)\(_?(\w+?)_TypeInfo \+ 0xb8\)(?: \+ (0x[0-9a-f]+|\d+))?\)', rep_static, code)
    # first static field (offset 0) accessed as **(long **)(_X_TypeInfo + 0xb8)
    def rep_static0(m):
        cname = m.group(1)
        for cand in (cname, cname.replace('_', '.')):
            cc = classes.get(cand)
            if cc and 0 in cc['static']:
                return cand + '.' + cc['static'][0][0]
        return m.group(0)
    code = re.sub(r'\*\*\([\w ]+?\s*\*\*\s*\)\(_?(\w+?)_TypeInfo \+ 0xb8\)', rep_static0, code)
    code = re.sub(r'\*\(long \*\)\(_?(\w+?)_TypeInfo \+ 0xb8\)', lambda m: m.group(1) + '.<statics>', code)
    def rep_statics_off(m):
        cname, g = m.group(1), m.group(2); off = int(g, 16) if g.startswith('0x') else int(g)
        cc = classes.get(cname) or classes.get(cname.replace('_', '.'))
        if cc and off in cc['static']:
            return cname + '.' + cc['static'][off][0]
        return m.group(0)
    code = re.sub(r'\*\([\w ]+?\s*\**\s*\)\((\w+)\.<statics> \+ (0x[0-9a-f]+|\d+)\)', rep_statics_off, code)

    # typed member chains: *(T *)(EXPR + 0xNN) where EXPR's type is a known class
    def type_of(expr):
        parts = expr.split('.')
        if parts[0] == 'this':
            cur = c; parts = parts[1:]
            if cur is None:
                return None
            t = None
            for p_ in parts:
                f = next((v for v in cur['inst'].values() if v[0] == p_), None)
                if not f:
                    return None
                t = f[1]; cur = classes.get(t.split('.')[-1]) if not t.endswith(']') else None
                if cur is None and p_ is not parts[-1]:
                    return None
            return t
        # Class.Static(.Field)*
        for k in range(len(parts) - 1, 0, -1):
            cname = '.'.join(parts[:k]); cc = classes.get(cname)
            if not cc:
                continue
            f = next((v for v in cc['static'].values() if v[0] == parts[k]), None)
            if not f:
                return None
            t = f[1]
            for p_ in parts[k + 1:]:
                cur = classes.get(t.split('.')[-1])
                if not cur:
                    return None
                f = next((v for v in cur['inst'].values() if v[0] == p_), None)
                if not f:
                    return None
                t = f[1]
            return t
        return None
    EXPR = r'((?:this|[A-Z][\w]*(?:\.[\w]+)*?)\.[A-Za-z_]\w*(?:\.[A-Za-z_]\w*)*)'
    def rep_member(m):
        expr, g = m.group(2), m.group(3); off = int(g, 16) if g.startswith('0x') else int(g)
        t = type_of(expr)
        if not t:
            return m.group(0)
        if t.endswith('[]'):
            if off == 0x18:
                return expr + '.Length'
            return m.group(0)
        if t.startswith('List<'):
            return expr + ({0x10: '._items', 0x18: '.Count'}.get(off, '+0x%x' % off)) if off in (0x10, 0x18) else m.group(0)
        cc = classes.get(t.split('.')[-1].split('<')[0])
        if not cc or off not in cc['inst']:
            return m.group(0)
        return expr + '.' + cc['inst'][off][0]
    for _ in range(4):
        code2 = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(' + EXPR + r' \+ (0x[0-9a-f]+|\d+)\)', rep_member, code)
        code2 = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(\(long\)' + EXPR + r' \+ (0x[0-9a-f]+|\d+)\)', rep_member, code2)
        if code2 == code:
            break
        code = code2
    # array element access: *(T *)(E + (long)(int)IDX * K + 0x20)  -> E[IDX]
    code = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(' + EXPR + r' \+ \(long\)(?:\(int\))?(\w+) \* (?:\d+|0x[0-9a-f]+) \+ 0x20\)', lambda m: m.group(2) + '[' + m.group(3) + ']', code)
    code = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(' + EXPR + r' \+ 0x20\)', lambda m: m.group(2) + '[0]' if (type_of(m.group(2)) or '').endswith('[]') else m.group(0), code)
    # local variable typing: lVarN = EXPR; (single typed assignment per function) -> *(T *)(lVarN + off) => lVarN.FIELD
    def type_locals(fn_code):
        assigns = {}
        for m in re.finditer(r'([a-z][A-Za-z]*Var\d+|__this_00) = (?:\(\w+ \*?\))?' + EXPR + r';', fn_code):
            t = type_of(m.group(2))
            assigns.setdefault(m.group(1), set()).add(t)
        types = {}
        for v, ts in assigns.items():
            if len(ts) != 1 or not list(ts)[0]:
                continue
            total = len(re.findall(r'(?<![\w.])' + re.escape(v) + r' = ', fn_code)) + len(re.findall(r'[(,]' + re.escape(v) + r' = ', fn_code))
            typed = len(re.findall(r'(?<![\w.])' + re.escape(v) + r' = (?:\(\w+ \*?\))?' + EXPR + r';', fn_code))
            if total == typed:
                types[v] = list(ts)[0]
        def rep_local(m):
            var, g = m.group(2), m.group(3); off = int(g, 16) if g.startswith('0x') else int(g)
            t = types.get(var)
            if not t:
                return m.group(0)
            if t.endswith('[]'):
                return var + '.Length' if off == 0x18 else m.group(0)
            cc = classes.get(t.split('.')[-1].split('<')[0])
            if not cc or off not in cc['inst']:
                return m.group(0)
            return var + '/*' + t + '*/.' + cc['inst'][off][0]
        fn_code = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\(\(long\)(\w+) \+ (0x[0-9a-f]+|\d+)\)', rep_local, fn_code)
        fn_code = re.sub(r'\*\(([\w ]+?\s*\**)\s*\)\((\w+) \+ (0x[0-9a-f]+|\d+)\)', rep_local, fn_code)
        return fn_code
    code = ''.join(type_locals(f) for f in re.split(r'(?=^// ==== )', code, flags=re.M))
    header = '/* ---- class definition (Il2CppDumper) ----\n' + (c['text'] if c else '(not found)') + '\n*/\n\n'
    open(os.path.join(out, fn), 'w', encoding='utf-8').write(header + code)
print('files', len(files))
