import sys,os,itertools,time
from pysat.solvers import Cadical153
n=int(sys.argv[1]); s=5; K=int(sys.argv[2]); out=sys.argv[3]
v=lambda i,k:(i-1)*s+k
S=Cadical153()
for i in range(1,n+1): S.add_clause([v(i,k) for k in range(1,s+1)])
for a in range(1,n+1):
    for d in range(1,n):
        if a+2*d>n: break
        for x in range(1,s+1):
            for z in range(1,s+1):
                if (x+z)%2==0: S.add_clause([-v(a,x),-v(a+d,(x+z)//2),-v(a+2*d,z)])
def ok(p):
    for a in range(len(p)):
        for d in range(1,len(p)):
            if a+2*d<len(p) and p[a+d]-p[a]==p[a+2*d]-p[a+d]: return False
    return True
cubes=[p for p in itertools.product(range(1,6),repeat=K) if p[0]<=3 and ok(p)]
done=set()
if os.path.exists(out):
    for l in open(out):
        t=l.split()
        if t[1]=="UNSAT": done.add(t[0])
        elif t[1]=="SAT": print("SAT FOUND",l); sys.exit()
print(len(cubes),"cubes",len(done),"done",flush=True)
f=open(out,"a"); t0=time.time()
for c in cubes:
    key="".join(map(str,c))
    if key in done: continue
    r=S.solve(assumptions=[v(i+1,c[i]) for i in range(K)])
    if r:
        m=S.get_model(); mod=set(x for x in m if x>0)
        col="".join(str(next(k for k in range(1,6) if v(i,k) in mod)) for i in range(1,n+1))
        f.write(key+" SAT "+col+"\n"); f.flush(); print("SAT",col); break
    f.write(key+" UNSAT\n"); f.flush()
else: print("ALL UNSAT",time.time()-t0)
