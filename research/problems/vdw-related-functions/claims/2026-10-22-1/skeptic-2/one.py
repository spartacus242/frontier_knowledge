import sys,time
from sat import solve
s,n=int(sys.argv[1]),int(sys.argv[2])
t=time.time(); r,m=solve(s,n)
if r:
    # verify model independently
    xs=[next(x for x in m if i*s<=x<i*s+s) for i in range(n)]
    S=set(xs); assert len(m)==n
    assert not any(a<b and (a+b)%2==0 and (a+b)//2 in S for a in xs for b in xs)
open("res_%d_%d.txt"%(s,n),"w").write("s=%d n=%d %s %.1fs %s\n"%(s,n,"SAT" if r else "UNSAT",time.time()-t,xs if r else ""))
