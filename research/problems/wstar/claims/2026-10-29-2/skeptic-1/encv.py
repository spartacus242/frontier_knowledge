# generic: colourings of [1,n] with colour VALUES vals, forbidding 3-APs whose colour values form an AP
from itertools import product
import sys,time
def encv(n,vals):
    s=len(vals); V=lambda i,c:i*s+c+1; cl=[]
    for i in range(n):
        cl.append([V(i,c) for c in range(s)])
        for c in range(s):
            for e in range(c+1,s): cl.append([-V(i,c),-V(i,e)])
    trip=[(a,b,c) for a,b,c in product(range(s),repeat=3) if vals[b]-vals[a]==vals[c]-vals[b]]
    for a in range(n):
        for d in range(1,n):
            if a+2*d>=n: break
            for x,y,z in trip: cl.append([-V(a,x),-V(a+d,y),-V(a+2*d,z)])
    return cl
if __name__=="__main__":
    from pysat.solvers import Solver
    vals=[int(x) for x in sys.argv[1].split(',')]
    for n in range(int(sys.argv[2]),200):
        t=time.time()
        with Solver(name='cadical153',bootstrap_with=encv(n,vals)) as S: r=S.solve()
        print(vals,n,r,round(time.time()-t,1),flush=True)
        if not r: break
