# Build TSV inputs for the Ghidra script from Il2CppDumper output.
import json,re,sys,os
dump_dir,out=sys.argv[1],sys.argv[2]
os.makedirs(out,exist_ok=True)
d=json.load(open(os.path.join(dump_dir,'script.json'),encoding='utf-8'))
PRIM={'void':'void','bool':'bool','int8_t':'char','uint8_t':'uchar','int16_t':'short','uint16_t':'ushort','int32_t':'int','uint32_t':'uint','int64_t':'long','uint64_t':'ulong','float':'float','double':'double','intptr_t':'long','uintptr_t':'ulong','Il2CppChar':'ushort'}
HFA={'UnityEngine_Vector3_o':['x','y','z'],'UnityEngine_Vector2_o':['x','y'],'UnityEngine_Quaternion_o':['x','y','z','w'],'UnityEngine_Color_o':['r','g','b','a']}
def ctype(t):
    t=t.replace('const ','').strip()
    if t in PRIM: return PRIM[t]
    return 'void *'
def conv(sig,name):
    m=re.match(r'(.+?)\s+(\S+)\s*\((.*)\);$',sig)
    if not m: return ''
    ret,fn,args=m.groups()
    r='void *' if ret.strip() not in PRIM else PRIM[ret.strip()]
    if ret.strip() in HFA: r='void *'
    ps=[]
    for a in [x.strip() for x in args.split(',') if x.strip()]:
        mm=re.match(r'(.+?)\s*([A-Za-z_][A-Za-z0-9_]*)$',a)
        if not mm: return ''
        t,n=mm.groups(); t=t.strip()
        if n=='method': continue
        if t in HFA:
            ps+=[f'float {n}_{c}' for c in HFA[t]]
        else: ps.append(f'{ctype(t)} {n}')
    safe=re.sub(r'[^A-Za-z0-9_]','_',name)
    return f"{r} {safe}({', '.join(ps) or 'void'})"
with open(os.path.join(out,'methods.tsv'),'w',encoding='utf-8') as f:
    for m in d['ScriptMethod']:
        f.write(f"{m['Address']:x}\t{m['Name']}\t{conv(m['Signature'],m['Name'])}\n")
with open(os.path.join(out,'labels.tsv'),'w',encoding='utf-8') as f:
    for s in d['ScriptString']:
        v=re.sub(r'[^A-Za-z0-9_]','_',s['Value'])[:40]
        f.write(f"{s['Address']:x}\tStr_{v}\n")
    for s in d['ScriptMetadata']:
        f.write(f"{s['Address']:x}\t{re.sub(r'[^A-Za-z0-9_]','_',s['Name'])[:80]}\n")
    for s in d['ScriptMetadataMethod']:
        f.write(f"{s['Address']:x}\t{re.sub(r'[^A-Za-z0-9_]','_',s['Name'])[:80]}\n")
# targets = Assembly-CSharp methods
cs=open(os.path.join(dump_dir,'by_assembly','Assembly-CSharp.cs'),encoding='utf-8').read().split('\n')
cls=None;tg=[]
for i,l in enumerate(cs):
    m=re.match(r'^\S.*?(?:class|struct|enum|interface) (\S+)',l)
    if m and '// TypeDefIndex' in l: cls=m.group(1)
    m=re.match(r'\s*// RVA: 0x([0-9A-F]+)',l)
    if m and int(m.group(1),16)>0 and cls:
        tg.append((m.group(1).lower(),cls,cs[i+1].strip()))
with open(os.path.join(out,'targets.tsv'),'w',encoding='utf-8') as f:
    for a,c,s in tg: f.write(f"{a}\t{c}\t{s}\n")
print(len(d['ScriptMethod']),len(tg))
