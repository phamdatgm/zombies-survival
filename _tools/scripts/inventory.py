import UnityPy,sys,collections
env=UnityPy.load(*sys.argv[1:])
c=collections.Counter()
for f in env.files.values():
    print('FILE',getattr(f,'name',f))
for o in env.objects:
    c[o.type.name]+=1
for k,v in c.most_common(): print(v,k)
# typetree check
sf=[f for f in env.assets]
for a in sf[:50]:
    print(a.name, 'enable_type_tree=',getattr(a,'_enable_type_tree',None), getattr(a,'unity_version',None))
