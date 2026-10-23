import sys,time
from pysat.solvers import Solver
def build(s,n,name,sym=True):
    N=s*n; v=lambda x:x+1
    sol=Solver(name=name)
    for i in range(n):
        sol.add_clause([v(x) for x in range(i*s,i*s+s)])
        for a in range(i*s,i*s+s):
            for b in range(a+1,i*s+s): sol.add_clause([-v(a),-v(b)])
    for a in range(N):
        for c in range(a+2,N,2):
            sol.add_clause([-v(a),-v((a+c)//2),-v(c)])
    if sym:
        for o1 in range(s):
            for o2 in range(s):
                if o1+o2>s-1: sol.add_clause([-v(o1),-v((n-1)*s+o2)])
    return sol
def run(s,n,name,sym=True):
    sol=build(s,n,name,sym); t=time.time(); r=sol.solve()
    xs=None
    if r:
        m=sol.get_model(); xs=[x for x in range(s*n) if m[x]>0]
        S=set(xs); assert len(xs)==n and all(i*s<=xs[i]<i*s+s for i in range(n))
        assert not any(a<b and (a+b)%2==0 and (a+b)//2 in S for a in xs for b in xs)
    return r,xs,time.time()-t
if __name__=="__main__":
    s,n,name=int(sys.argv[1]),int(sys.argv[2]),sys.argv[3]; sym=len(sys.argv)<5
    r,xs,t=run(s,n,name,sym)
    print(s,n,name,"sym" if sym else "nosym","SAT" if r else "UNSAT","%.1fs"%t,flush=True)
