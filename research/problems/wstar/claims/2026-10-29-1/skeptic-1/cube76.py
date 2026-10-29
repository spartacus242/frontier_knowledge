# Resumable cube-and-conquer SAT proof that no good s-colouring of [1,n] exists.
# Symmetries: reversal i->n+1-i, complement c->s+1-c (both preserve goodness). Cubes = colours of a reversal-symmetric
# set of central positions; one representative per symmetry orbit is solved (sound: any good colouring maps to one in a rep cube).
import sys, os, json, time, itertools
from pysat.solvers import Solver
n=int(sys.argv[1]); s=int(sys.argv[2]); K=int(sys.argv[3]); out=sys.argv[4]; tlim=None
v=lambda i,c: (i-1)*s+c   # i in 1..n, c in 1..s
cl=[]
for i in range(1,n+1):
    cl.append([v(i,c) for c in range(1,s+1)])
    for c1 in range(1,s+1):
        for c2 in range(c1+1,s+1): cl.append([-v(i,c1),-v(i,c2)])
trip=[(x,y,z) for x in range(1,s+1) for y in range(1,s+1) for z in range(1,s+1) if y-x==z-y]
for a in range(1,n+1):
    for d in range(1,n):
        if a+2*d>n: break
        for t in trip: cl.append([-v(a,t[0]),-v(a+d,t[1]),-v(a+2*d,t[2])])
# central symmetric positions
c0=(n+1)/2
pos=sorted(range(1,n+1),key=lambda i:(abs(i-c0),i))[:K]
pos=sorted(pos); assert sorted(n+1-p for p in pos)==pos
def img(a,rev,comp):
    d=dict(zip(pos,a))
    if rev: d={n+1-p:c for p,c in d.items()}
    if comp: d={p:s+1-c for p,c in d.items()}
    return tuple(d[p] for p in pos)
def goodpart(a):
    d=dict(zip(pos,a))
    for x in pos:
        for y in pos:
            if y>x and (x+y)%2==0 and (x+y)//2 in d:
                m=(x+y)//2
                if d[m]-d[x]==d[y]-d[m]: return False
    return True
reps=[]
for a in itertools.product(range(1,s+1),repeat=K):
    if a==min(img(a,r,c) for r in (0,1) for c in (0,1)) and goodpart(a): reps.append(a)
done={}
if os.path.exists(out):
    for L in open(out):
        r=json.loads(L); done[tuple(r['cube'])]=r
print('positions',pos,'cubes',len(reps),'done',len(done),flush=True)
S=Solver(name='cadical153',bootstrap_with=cl)
for a in reps:
    if a in done: continue
    t=time.time(); r=S.solve(assumptions=[v(p,c) for p,c in zip(pos,a)]); dt=time.time()-t
    rec={'cube':list(a),'sat':r,'sec':round(dt,2)}
    if r:
        m=set(x for x in S.get_model() if x>0)
        rec['col']=''.join(str(c) for i in range(1,n+1) for c in range(1,s+1) if v(i,c) in m)
    with open(out,'a') as f: f.write(json.dumps(rec)+'\n')
    print(rec,flush=True)
    if r: print('GOOD COLOURING FOUND',flush=True); break
else:
    tot=sum(json.loads(L)['sec'] for L in open(out))
    print('ALLDONE UNSAT' if not any(json.loads(L)['sat'] for L in open(out)) else 'ALLDONE SAT', 'solve-seconds',round(tot,1),flush=True)
