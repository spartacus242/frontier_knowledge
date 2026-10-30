# W(3;4) check: 4-colourings of [1,n] minus holes, no monochromatic 3-AP among non-hole positions,
# with value-precedence symmetry breaking (sound: constraints are invariant under all colour permutations).
import sys,time
from pysat.solvers import Solver
n=int(sys.argv[1]); holes=set(int(x) for x in sys.argv[2].split(',') if x) if len(sys.argv)>2 else set()
name=sys.argv[3] if len(sys.argv)>3 else 'cadical153'
s=4; V=lambda i,c: i*s+c+1
P=[i for i in range(1,n+1) if i not in holes]; idx={p:k for k,p in enumerate(P)}
cl=[]
for p in P:
    k=idx[p]; cl.append([V(k,c) for c in range(s)])
    for c in range(s):
        for e in range(c+1,s): cl.append([-V(k,c),-V(k,e)])
for a in P:
    for d in range(1,n):
        if a+2*d>n: break
        if a+d in idx and a+2*d in idx:
            for c in range(s): cl.append([-V(idx[a],c),-V(idx[a+d],c),-V(idx[a+2*d],c)])
for k in range(len(P)):
    for c in range(1,s): cl.append([-V(k,c)]+[V(j,c-1) for j in range(k)])
t=time.time()
with Solver(name=name,bootstrap_with=cl) as S: r=S.solve()
print("n",n,"holes",sorted(holes),name,"SAT" if r else "UNSAT",round(time.time()-t,1),flush=True)
