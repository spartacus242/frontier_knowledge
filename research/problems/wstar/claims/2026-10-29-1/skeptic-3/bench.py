# benchmark pysat solvers on the s-colour instance at n, with the group symmetry breaking
import sys, time
from pysat.solvers import Solver
n=int(sys.argv[1]); s=int(sys.argv[2]); names=sys.argv[3].split(",")
def var(i,c): return (i-1)*s+c
cl=[]
for i in range(1,n+1):
    cl.append([var(i,c) for c in range(1,s+1)])
    for c in range(1,s+1):
        for c2 in range(c+1,s+1): cl.append([-var(i,c),-var(i,c2)])
triples=[(c1,c2,c3) for c1 in range(1,s+1) for c2 in range(1,s+1) for c3 in range(1,s+1) if c2-c1==c3-c2]
for a in range(1,n+1):
    d=1
    while a+2*d<=n:
        for (c1,c2,c3) in triples: cl.append([-var(a,c1),-var(a+d,c2),-var(a+2*d,c3)])
        d+=1
for c in range((s+1)//2+1,s+1): cl.append([-var(1,c)])
for c1 in range(1,s+1):
    for cn in range(1,s+1):
        if not (c1<=cn and c1+cn<=s+1): cl.append([-var(1,c1),-var(n,cn)])
for name in names:
    t=time.time()
    with Solver(name=name,bootstrap_with=cl) as S:
        r=S.solve()
    print("%s n=%d s=%d SAT=%s time=%.1fs"%(name,n,s,r,time.time()-t)); sys.stdout.flush()
