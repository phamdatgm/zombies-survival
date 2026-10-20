import re,sys,os
src,outdir=sys.argv[1],sys.argv[2]
txt=open(src,encoding='utf-8').read()
imgs=[(int(m.group(2)),m.group(1)) for m in re.finditer(r'^// Image \d+: (.+?) - (\d+)$',txt,re.M)]
imgs.sort()
blocks=re.split(r'\n(?=// Namespace: )',txt)
def img_of(idx):
    name=None
    for start,n in imgs:
        if idx>=start: name=n
    return name
os.makedirs(outdir,exist_ok=True)
files={}
for b in blocks:
    m=re.search(r'// TypeDefIndex: (\d+)',b)
    if not m: continue
    n=img_of(int(m.group(1)))
    files.setdefault(n,[]).append(b)
for n,bs in files.items():
    open(os.path.join(outdir,n.replace('.dll','')+'.cs'),'w',encoding='utf-8').write('\n\n'.join(bs))
print(len(files))
