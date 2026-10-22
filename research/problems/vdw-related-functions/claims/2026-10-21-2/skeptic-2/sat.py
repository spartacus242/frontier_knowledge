import sys,time
from pysat.solvers import Cadical153
from pysat.card import CardEnc,EncType
def run(s,n,extra=None):
    N=(n-1)*s
    x=lambda i:i+1          # 0..N
    e=lambda i:N+2+i        # e_i, i in 0..N+s
    top=2*N+s+5
    cl=[[x(0)]]
    for i in range(N+1):
        cl.append([-x(i),e(i)])
        if i<N: cl.append([-e(i+1),e(i)])
    for j in range(s,N+1):  # if element at >=j then window j-s..j-1 has one
        cl.append([x(i) for i in range(j-s,j)]+[-e(j)])
    for a in range(N+1):
        for d in range(1,(N-a)//2+1):
            cl.append([-x(a),-x(a+d),-x(a+2*d)])
    card=CardEnc.atleast(lits=[x(i) for i in range(N+1)],bound=n,top_id=top,encoding=EncType.seqcounter)
    cl+=card.clauses
    if extra: cl+=extra(x)
    sv=Cadical153(bootstrap_with=cl)
    t=time.time();r=sv.solve()
    m=None
    if r:
        mm=set(l for l in sv.get_model() if l>0);m=[i for i in range(N+1) if x(i) in mm]
    return r,m,time.time()-t
if __name__=="__main__":
    s=int(sys.argv[1]);n=int(sys.argv[2])
    r,m,t=run(s,n);print(s,n,r,round(t,1),m)
