import sys,time
from pysat.solvers import Cadical153
def run(n,s,sym=True):
    v=lambda i,k:(i-1)*s+k
    S=Cadical153()
    for i in range(1,n+1): S.add_clause([v(i,k) for k in range(1,s+1)])
    for a in range(1,n+1):
        for d in range(1,n):
            if a+2*d>n: break
            for x in range(1,s+1):
                for z in range(1,s+1):
                    if (x+z)%2==0:
                        S.add_clause([-v(a,x),-v(a+d,(x+z)//2),-v(a+2*d,z)])
    if sym: S.add_clause([v(1,k) for k in range(1,(s+1)//2+1)])  # colour reversal
    t=time.time(); r=S.solve(); 
    m=None
    if r:
        mod=set(x for x in S.get_model() if x>0)
        m=[next(k for k in range(1,s+1) if v(i,k) in mod) for i in range(1,n+1)]
    return r,m,time.time()-t
if __name__=="__main__":
    n,s=int(sys.argv[1]),int(sys.argv[2]); print(n,s,run(n,s))
