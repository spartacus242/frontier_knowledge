# calibration: plain van der Waerden w(3;s) instance (monochromatic 3-APs only)
import sys, time
from pysat.solvers import Cadical153
n=int(sys.argv[1]); s=int(sys.argv[2])
def var(i,c): return (i-1)*s+c
cl=[]
for i in range(1,n+1):
    cl.append([var(i,c) for c in range(1,s+1)])
for a in range(1,n+1):
    d=1
    while a+2*d<=n:
        for c in range(1,s+1): cl.append([-var(a,c),-var(a+d,c),-var(a+2*d,c)])
        d+=1
cl.append([var(1,1)])
t=time.time()
with Cadical153(bootstrap_with=cl) as S:
    r=S.solve(); print("mono n=%d s=%d SAT=%s time=%.1fs"%(n,s,r,time.time()-t))
