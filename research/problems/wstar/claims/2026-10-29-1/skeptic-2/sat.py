import sys,time
from pysat.solvers import Cadical153
def run(n,s,symm=True):
    v=lambda i,k:(i-1)*s+k
    S=Cadical153()
    for i in range(1,n+1):
        S.add_clause([v(i,k) for k in range(1,s+1)])
        for k in range(1,s+1):
            for l in range(k+1,s+1): S.add_clause([-v(i,k),-v(i,l)])
    for a in range(1,n+1):
        for d in range(1,n):
            c=a+2*d
            if c>n:break
            for x in range(1,s+1):
                for e in range(-(s-1),s):
                    z=x+2*e
                    # colors x,x+e,x+2e
                    if 1<=z<=s: S.add_clause([-v(a,x),-v(a+d,x+e),-v(c,z)]) if True else 0
    if symm:
        for k in range(s//2+1+ (s%2), s+1): S.add_clause([-v(1,k)])  # chi(1)<=ceil(s/2)
    t=time.time();r=S.solve();return r,time.time()-t
if __name__=="__main__":
    s=int(sys.argv[1]);n=int(sys.argv[2]);print(s,n,run(n,s),flush=True)
