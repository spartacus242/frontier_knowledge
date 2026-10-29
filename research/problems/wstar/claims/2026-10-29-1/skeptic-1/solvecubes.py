# Solve cubes (one per line, literals ending in 0) for the n=76,s=5 encoding (var (i-1)*s+c). Resumable via results file.
import sys, time, os, json
from pysat.solvers import Solver
n=int(sys.argv[1]); s=int(sys.argv[2]); cubefile=sys.argv[3]; out=sys.argv[4]; lim=int(sys.argv[5]) if len(sys.argv)>5 else 10**9
v=lambda i,c:(i-1)*s+c
cl=[]
for i in range(1,n+1):
    cl.append([v(i,c) for c in range(1,s+1)])
    for a in range(1,s+1):
        for b in range(a+1,s+1): cl.append([-v(i,a),-v(i,b)])
trip=[(x,y,z) for x in range(1,s+1) for y in range(1,s+1) for z in range(1,s+1) if y-x==z-y]
for a in range(1,n+1):
    for d in range(1,n):
        if a+2*d>n: break
        for t in trip: cl.append([-v(a,t[0]),-v(a+d,t[1]),-v(a+2*d,t[2])])
cubes=[list(map(int,L.split()))[:-1] for L in open(cubefile)]
done=0
if os.path.exists(out): done=sum(1 for _ in open(out))
S=Solver(name='cadical153',bootstrap_with=cl)
T0=time.time()
for idx in range(done,min(len(cubes),done+lim)):
    t=time.time(); r=S.solve(assumptions=cubes[idx]); dt=time.time()-t
    rec={'i':idx,'sat':r,'sec':round(dt,3)}
    if r:
        m=set(x for x in S.get_model() if x>0)
        rec['col']=''.join(str(c) for i in range(1,n+1) for c in range(1,s+1) if v(i,c) in m)
    with open(out,'a') as f: f.write(json.dumps(rec)+'\n')
    if r: print('SAT FOUND',rec,flush=True); sys.exit(0)
print('batch done',min(len(cubes),done+lim),'of',len(cubes),'elapsed',round(time.time()-T0,1),flush=True)
