import sys, time
from pysat.solvers import Cadical153
from pysat.card import CardEnc
def var(i,c,s): return (i-1)*s+c   # i in 1..n, c in 1..s
def build(n,s,symbreak=True):
    cl=[]
    for i in range(1,n+1):
        cl.append([var(i,c,s) for c in range(1,s+1)])
        for c in range(1,s+1):
            for c2 in range(c+1,s+1): cl.append([-var(i,c,s),-var(i,c2,s)])
    triples=[(c1,c2,c3) for c1 in range(1,s+1) for c2 in range(1,s+1) for c3 in range(1,s+1) if c2-c1==c3-c2]
    for a in range(1,n+1):
        d=1
        while a+2*d<=n:
            for (c1,c2,c3) in triples: cl.append([-var(a,c1,s),-var(a+d,c2,s),-var(a+2*d,c3,s)])
            d+=1
    if symbreak:
        for c in range((s+1)//2+1,s+1): cl.append([-var(1,c,s)])
    return cl
n=int(sys.argv[1]); s=int(sys.argv[2])
cl=build(n,s); t=time.time()
with Cadical153(bootstrap_with=cl) as S:
    r=S.solve()
    print("n=%d s=%d SAT=%s clauses=%d time=%.1fs"%(n,s,r,len(cl),time.time()-t))
    if r:
        m=set(v for v in S.get_model() if v>0)
        col="".join(str(c) for i in range(1,n+1) for c in range(1,s+1) if var(i,c,s) in m)
        print("MODEL",col)
sys.stdout.flush()
