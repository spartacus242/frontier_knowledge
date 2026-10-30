import sys,time
from pysat.solvers import Solver
from pysat.card import CardEnc,EncType
from enc import encode,var
n,s=76,5
import os; n=int(os.environ.get('N','76'))
mode=sys.argv[1]; arg=int(sys.argv[2]); name=sys.argv[3] if len(sys.argv)>3 else 'cadical153'
cl=encode(n,s); top=n*s
if mode=='atmost3s':   # at most arg positions coloured 3
    c=CardEnc.atmost([var(i,2,s) for i in range(n)],bound=arg,top_id=top,encoding=EncType.seqcounter); cl+=c.clauses
if mode=='only3at':    # 3 exactly at position arg (1-based), nowhere else
    for i in range(n): cl.append([var(i,2,s)] if i==arg-1 else [-var(i,2,s)])
if mode=='no3':
    for i in range(n): cl.append([-var(i,2,s)])
if mode=='3at':        # 3 at position arg, others free
    cl.append([var(arg-1,2,s)])
t=time.time()
with Solver(name=name,bootstrap_with=cl) as S: r=S.solve()
print(mode,arg,name,r,round(time.time()-t,1),flush=True)
