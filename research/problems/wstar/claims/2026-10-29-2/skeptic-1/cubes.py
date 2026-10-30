# resumable cube-and-conquer: n=76, s=5, cubes = all colour assignments to positions POS (1-based)
import sys,json,time,os,itertools
from pysat.solvers import Solver
from enc import encode,decode,var
from check import bad_aps
n,s=76,5
POS=[int(x) for x in sys.argv[1].split(',')]
out=sys.argv[2]
done=set()
if os.path.exists(out):
    for l in open(out):
        try: done.add(tuple(json.loads(l)['cube']))
        except Exception: pass
cls=encode(n,s)
S=Solver(name='cadical153',bootstrap_with=cls)
allc=list(itertools.product(range(1,s+1),repeat=len(POS)))
print(len(allc),"cubes,",len(done),"done",flush=True)
for cube in allc:
    if cube in done: continue
    assum=[var(p-1,c-1,s) for p,c in zip(POS,cube)]
    t=time.time(); r=S.solve(assumptions=assum); dt=time.time()-t
    rec={'cube':list(cube),'sat':r,'sec':round(dt,2)}
    if r:
        col=decode(S.get_model(),n,s); rec['col']=''.join(map(str,col)); rec['good']=len(bad_aps(col))==0
    with open(out,'a') as f: f.write(json.dumps(rec)+'\n'); f.flush(); os.fsync(f.fileno())
    print(rec,flush=True)
    if r: print("FOUND GOOD 76-COLOURING",flush=True)
print("ALL DONE",flush=True)
