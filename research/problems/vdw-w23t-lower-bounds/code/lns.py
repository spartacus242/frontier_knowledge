# Large-neighbourhood search: take a near-solution (palindromic), free all variables in violated APs plus a random
# fraction (and neighbours), fix the rest via assumptions, and let CaDiCaL repair it.
import sys, random
from pysat.solvers import Cadical153
def viol(x,n,t):
    V=[]
    for d in range(1,n):
        for a in range(1,n-2*d+1):
            if x[a]==0 and x[a+d]==0 and x[a+2*d]==0: V.append([a,a+d,a+2*d])
        for a in range(1,n-(t-1)*d+1):
            if all(x[a+j*d] for j in range(t)): V.append([a+j*d for j in range(t)])
    return V
def main(n,t,fn,frac,iters,conf,out):
    s=open(fn).read().split()[0]; assert len(s)==n
    var=lambda i: min(i,n+1-i)
    S=Cadical153()
    for d in range(1,n):
        for a in range(1,n-2*d+1): S.add_clause(sorted({var(a),var(a+d),var(a+2*d)}))
        for a in range(1,n-(t-1)*d+1): S.add_clause(sorted({-var(a+j*d) for j in range(t)}))
    x=[None]+[int(c) for c in s]
    for it in range(iters):
        V=viol(x,n,t); print("iter",it,"violations",len(V),flush=True)
        if not V:
            open(out,"w").write(''.join(map(str,x[1:]))+"\n"); print("SOLVED",n,t); return
        free=set()
        for c in V: free|={var(i) for i in c}
        for v in range(1,(n+1)//2+1):
            if random.random()<frac: free.add(v)
        assum=[(v if x[v] else -v) for v in range(1,(n+1)//2+1) if v not in free]
        S.conf_budget(conf); r=S.solve_limited(assumptions=assum)
        print("  free",len(free),"result",r,flush=True)
        if r:
            m=S.get_model(); val={abs(l):int(l>0) for l in m}
            x=[None]+[val[var(i)] for i in range(1,n+1)]
        else:
            frac=min(0.6,frac*1.15)
    print("GAVEUP")
if __name__=="__main__":
    a=sys.argv; main(int(a[1]),int(a[2]),a[3],float(a[4]),int(a[5]),int(a[6]),a[7])
