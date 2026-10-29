import sys, time, random, itertools, threading
from pysat.solvers import Solver
n=76; s=5; K=int(sys.argv[1]); T=float(sys.argv[2]); name=sys.argv[3]
v=lambda i,c:(i-1)*s+c
cl=[]
for i in range(1,n+1):
    cl.append([v(i,c) for c in range(1,s+1)])
    for a in range(1,s+1):
        for b in range(a+1,s+1): cl.append([-v(i,a),-v(i,b)])
trip=[(x,y,z) for x in range(1,6) for y in range(1,6) for z in range(1,6) if y-x==z-y]
for a in range(1,n+1):
    for d in range(1,n):
        if a+2*d>n: break
        for t in trip: cl.append([-v(a,t[0]),-v(a+d,t[1]),-v(a+2*d,t[2])])
pos=list(range(39-K//2,39+K//2))
random.seed(1)
def good(d):
    for x in d:
        for y in d:
            if y>x and (x+y)%2==0 and (x+y)//2 in d and d[(x+y)//2]-d[x]==d[y]-d[(x+y)//2]: return False
    return True
S=Solver(name=name,bootstrap_with=cl)
random.seed(int(sys.argv[4]))
for trial in range(1):
    while True:
        d={p:random.randint(1,5) for p in pos}
        if good(d): break
    pass
    t=time.time(); r=S.solve(assumptions=[v(p,c) for p,c in d.items()])
    pass
    print(K,name,''.join(str(d[p]) for p in pos),r,round(time.time()-t,1),flush=True)
