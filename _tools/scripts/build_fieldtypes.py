"""Export Assembly-CSharp field names/types/offsets -> web/src/game/fieldtypes.json
{ "Class": { "inst": {"FIELD": "Type"}, "static": {...}, "consts": {"NAME": "value"} } }
Usage: python -I build_fieldtypes.py <by_assembly/Assembly-CSharp.cs> <out.json>
"""
import re, sys, json
src = open(sys.argv[1], encoding='utf-8').read()
out = {}
for m in re.finditer(r'\n([^\n]*?(?:class|struct|enum) (\S+)[^\n]*// TypeDefIndex: \d+)\n\{(.*?)\n\}', src, re.S):
    name, body = m.group(2), m.group(3)
    inst, stat, consts = {}, {}, {}
    for f in re.finditer(r'\n\t(?:\[[^\]]*\]\n\t)*((?:public|private|protected|internal)[^;\n]*?) (\S+) (\w+)(?: = ([^;]+))?;(?: // 0x([0-9A-F]+))?', body):
        mods, typ, fname, val, off = f.groups()
        if ' const ' in ' ' + mods + ' ':
            consts[fname] = val
        elif ' static' in ' ' + mods:
            stat[fname] = typ
        else:
            inst[fname] = typ
    out[name] = {'inst': inst, 'static': stat, 'consts': consts}
json.dump(out, open(sys.argv[2], 'w'), indent=0)
print(len(out))
