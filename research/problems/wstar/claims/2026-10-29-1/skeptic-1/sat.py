import sys, time
from pysat.solvers import Solver
def good_exists(n,s,solver='cadical153',symbreak=True):
    v=lambda i,c: i*s+c+1   # i in 0..n-1, c in 0..s-1
    cl=[]
    for i in range(n):
        cl.append([v(i,c) for c in range(s)])
        for c1 in range(s):
            for c2 in range(c1+1,s): cl.append([-v(i,c1),-v(i,c2)])
    trip=[(x,y,z) for x in range(s) for y in range(s) for z in range(s) if y-x==z-y]
    for a in range(n):
        for d in range(1,n):
            if a+2*d>=n: break
            for (x,y,z) in trip: cl.append([-v(a,x),-v(a+d,y),-v(a+2*d,z)])
    S=Solver(name=solver,bootstrap_with=cl)
    assum=[]
    if symbreak:
        # colour complement c->s-1-c preserves goodness: force colour(1) <= (s-1)/2
        cl2=[-v(0,c) for c in range(s) if c> (s-1)//2]
        for x in cl2: S.add_clause([x])
    t=time.time(); r=S.solve(); dt=time.time()-t
    m=S.get_model() if r else None
    col=None
    if r:
        ms=set(x for x in m if x>0)
        col=''.join(str(c+1) for i in range(n) for c in range(s) if v(i,c) in ms)
    return r,col,dt
if __name__=='__main__':
    s=int(sys.argv[1]); n=int(sys.argv[2])
    r,col,dt=good_exists(n,s, symbreak=len(sys.argv)<4)
    print(s,n,r,col,round(dt,2),flush=True)
