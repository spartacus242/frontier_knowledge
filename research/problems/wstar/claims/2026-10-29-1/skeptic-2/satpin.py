import sys,time
from pysat.solvers import Cadical153
n=76;s=5
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
            for y in range(1,s+1):
                z=2*y-x
                if 1<=z<=s: S.add_clause([-v(a,x),-v(a+d,y),-v(c,z)])
pins=[tuple(map(int,a.split(':'))) for a in sys.argv[1:]]
t=time.time();print(S.solve(assumptions=[v(p,c) for p,c in pins]),time.time()-t)
