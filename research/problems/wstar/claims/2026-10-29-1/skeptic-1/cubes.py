# resumable cube-and-conquer: n, s=5; cubes fix colours of position 1 (<=3 via complement symmetry) and position n (middle-out)
import sys, os, json, time, itertools
from pysat.solvers import Solver
n=int(sys.argv[1]); s=5; out=f'cubes_{n}.jsonl'
v=lambda i,c: i*s+c+1
cl=[]
for i in range(n):
    cl.append([v(i,c) for c in range(s)])
    for c1 in range(s):
        for c2 in range(c1+1,s): cl.append([-v(i,c1),-v(i,c2)])
trip=[(x,y,z) for x in range(s) for y in range(s) for z in range(s) if y-x==z-y]
for a in range(n):
    for d in range(1,n):
        if a+2*d>=n: break
        for t in trip: cl.append([-v(a,t[0]),-v(a+d,t[1]),-v(a+2*d,t[2])])
done=set()
if os.path.exists(out):
    for L in open(out): done.add(tuple(json.loads(L)['cube']))
mid=n//2
cubes=[(a,b,m) for a in range(3) for b in range(5) for m in range(5)]
for cb in cubes:
    if cb in done: continue
    S=Solver(name='cadical153',bootstrap_with=cl)
    t=time.time(); r=S.solve(assumptions=[v(0,cb[0]),v(n-1,cb[1]),v(mid,cb[2])]); dt=time.time()-t
    rec={'cube':list(cb),'sat':r,'sec':round(dt,2)}
    if r:
        ms=set(x for x in S.get_model() if x>0)
        rec['col']=''.join(str(c+1) for i in range(n) for c in range(s) if v(i,c) in ms)
    S.delete()
    with open(out,'a') as f: f.write(json.dumps(rec)+'\n')
    print(rec,flush=True)
print('ALLDONE',flush=True)
