import sys,time
from pysat.solvers import Solver
from pysat.card import CardEnc,EncType
from enc import encode,var,decode
n=int(sys.argv[1]); s=5
for k in range(1,40):
    cl=encode(n,s)
    c=CardEnc.atleast([var(i,2,s) for i in range(n)],bound=k,top_id=n*s,encoding=EncType.seqcounter)
    S=Solver(name='cadical153',bootstrap_with=cl+c.clauses); S.conf_budget(2000000)
    t=time.time(); r=S.solve_limited()
    col=''.join(map(str,decode(S.get_model(),n,s))) if r else ''
    print(n,k,r,round(time.time()-t,1),col,flush=True); S.delete()
    if r is not True: break
