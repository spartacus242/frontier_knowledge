# Cube-and-conquer for "is there a good set for w1(3,s) at size n?".
# Cube (i,j): min A = i, max A = n+1-j.  Reversal x -> n+1-x maps a solution with (i,j) to one with (j,i), so cubes with
# i <= j (1 <= i, j <= s, forced by the first/last windows) cover every solution up to symmetry.
import sys, time
from pysat.solvers import Cadical153
s=int(sys.argv[1]); n=int(sys.argv[2]); W=int(sys.argv[3]); K=int(sys.argv[4])   # worker K of W
cubes=[(i,j) for i in range(1,s+1) for j in range(i,s+1)]
S=Cadical153()
for d in range(1,n):
    for a in range(1,n-2*d+1): S.add_clause([-a,-(a+d),-(a+2*d)])
for a in range(1,n-s+2): S.add_clause([a+t for t in range(s)])
for idx,(i,j) in enumerate(cubes):
    if idx%W!=K: continue
    assum=[-x for x in range(1,i)]+[i]+[n+1-j]+[-x for x in range(n+2-j,n+1)]
    t0=time.time(); r=S.solve(assumptions=assum)
    print(f"cube {idx} (i={i},j={j}) {'SAT' if r else 'UNSAT'} {time.time()-t0:.1f}s",flush=True)
    if r:
        m=S.get_model(); A=[x for x in range(1,n+1) if m[x-1]>0]
        open(f"w1_s{s}_n{n}_cube.txt","w").write(" ".join(map(str,A))+"\n"); break
print("DONE",flush=True)
