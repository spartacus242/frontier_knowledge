import sys, time
from pysat.solvers import Solver
def solve(s,n,name='cadical153',sym=False):
    N=n*s
    var=lambda x:x+1
    cls=[[var(s*i+j) for j in range(s)] for i in range(n)]
    for a in range(N):
        for d in range(1,(N-1-a)//2+1):
            b,c=a+d,a+2*d
            if a//s==b//s or b//s==c//s: continue  # same block pair: never both under exactly-one; keep clause anyway? (safe to skip only with AMO)
            cls.append([-var(a),-var(b),-var(c)])
    # at-most-one per block (makes skipping same-block triples sound)
    for i in range(n):
        for j in range(s):
            for k in range(j+1,s): cls.append([-var(s*i+j),-var(s*i+k)])
    with Solver(name=name,bootstrap_with=cls) as S:
        t=time.time(); r=S.solve(); dt=time.time()-t
        m=None
        if r:
            m=[x-1 for x in S.get_model() if x>0]
        return r,m,dt
if __name__=="__main__":
    s,n=int(sys.argv[1]),int(sys.argv[2]); name=sys.argv[3] if len(sys.argv)>3 else 'cadical153'
    r,m,dt=solve(s,n,name)
    if m:
        S=set(m); assert len(m)==n and all(m[i]//s==i for i in range(n)); assert not any(2*b-a in S for a in m for b in m if a<b)
    print(f"s={s} n={n} solver={name} SAT={r} time={dt:.1f}s witness={m}",flush=True)
