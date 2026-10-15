# Approach: cyclic colourings of Z_p constant on cosets of a multiplicative subgroup H (order g).
# A good colouring of Z_p (no 3-AP mod p in colour 0, no t-AP mod p in colour 1) restricts to a good colouring of [1..p]
# (identify i in [1..p] with i mod p); every AP in [1..p] is an AP mod p with distinct terms.
import sys
from pysat.solvers import Cadical153
def isprime(n):
    return n>1 and all(n%q for q in range(2,int(n**.5)+1))
def primitive_root(p):
    fs=[q for q in range(2,p) if (p-1)%q==0 and isprime(q)]
    for r in range(2,p):
        if all(pow(r,(p-1)//q,p)!=1 for q in fs): return r
def run(p,t,g,conf=20000):
    r=primitive_root(p); m=(p-1)//g
    cls=[0]*p; x=1
    for e in range(p-1): cls[x]=1+(e%m); x=x*r%p
    cls[0]=m+1  # variable for 0
    # d representatives: r^e for e in 0..m-1 (cosets of H)
    ds=[pow(r,e,p) for e in range(m)]
    C=set()
    for d in ds:
        for a in range(p):
            c3=frozenset(cls[(a+j*d)%p] for j in range(3)); C.add((1,c3))
            ct=frozenset(cls[(a+j*d)%p] for j in range(t)); C.add((0,ct))
    s=Cadical153()
    for pol,c in C: s.add_clause([v if pol else -v for v in c])
    s.conf_budget(conf); res=s.solve_limited()
    if res:
        mod=s.get_model(); val={abs(v):v>0 for v in mod}
        return ''.join('1' if val.get(cls[i%p],False) else '0' for i in range(1,p+1))
    return res
if __name__=="__main__":
    t=int(sys.argv[1]); lo=int(sys.argv[2]); hi=int(sys.argv[3]); gs=[int(z) for z in sys.argv[4].split(',')]
    for p in range(lo,hi):
        if not isprime(p): continue
        for g in gs:
            if (p-1)%g: continue
            res=run(p,t,g)
            print(p,g,"SAT" if isinstance(res,str) else res,flush=True)
            if isinstance(res,str): open(f"runs/cyc_t{t}_p{p}_g{g}.txt","w").write(res+"\n")
