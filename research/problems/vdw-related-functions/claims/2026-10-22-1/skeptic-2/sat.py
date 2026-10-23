import sys,time
from pysat.solvers import Cadical153
def solve(s,n):
    N=s*n; v=lambda x:x+1
    sol=Cadical153()
    for i in range(n):
        sol.add_clause([v(x) for x in range(i*s,i*s+s)])
        for a in range(i*s,i*s+s):
            for b in range(a+1,i*s+s): sol.add_clause([-v(a),-v(b)])
    for a in range(N):
        for c in range(a+2,N,2):
            sol.add_clause([-v(a),-v((a+c)//2),-v(c)])
    r=sol.solve()
    m=[x for x in range(N) if r and sol.get_model()[x]>0]
    return r,m
def M(s):
    n=2
    while True:
        r,m=solve(s,n)
        if not r: return n
        n+=1
if __name__=="__main__":
    for s in range(2,7):
        t=time.time(); print("M(3,%d)="%s,M(s),"%.1fs"%(time.time()-t),flush=True)
