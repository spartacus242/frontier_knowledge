# Large-neighbourhood hunt for a good 5-colouring of [1,76] near the claimant's
# 75-colouring: place the 75-colouring at positions 1..75 (shift 0) or 2..76 (shift 1),
# free a window of W consecutive positions plus the extra end position, and ask CaDiCaL
# (under assumptions) for a good completion.  Any SAT answer refutes the claim.
import sys, time
from pysat.solvers import Cadical153
base="115442212114125512525422541445455112411544221211412551252542254144545511242"
n=76; s=5; W=int(sys.argv[1]); step=int(sys.argv[2]); tlimit=float(sys.argv[3])
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
t0=time.time(); tried=0
with Cadical153(bootstrap_with=cl) as S:
    for shift in (0,1):
        fixed={i+1+shift:int(base[i]) for i in range(75)}
        for start in range(1,n-W+2,step):
            free=set(range(start,start+W))|{76 if shift==0 else 1}
            assum=[var(p,c) for p,c in fixed.items() if p not in free]
            r=S.solve(assumptions=assum); tried+=1
            if r:
                m=set(v for v in S.get_model() if v>0)
                col="".join(str(c) for i in range(1,n+1) for c in range(1,s+1) if var(i,c) in m)
                print("FOUND shift=%d start=%d %s"%(shift,start,col)); sys.exit(0)
            if time.time()-t0>tlimit: print("time limit"); break
print("NOTFOUND W=%d tried=%d time=%.0fs"%(W,tried,time.time()-t0))
