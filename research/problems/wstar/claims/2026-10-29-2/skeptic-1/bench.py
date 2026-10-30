import sys,time
from pysat.solvers import Solver
from enc import encode
n,s,name=int(sys.argv[1]),int(sys.argv[2]),sys.argv[3]
t=time.time()
with Solver(name=name,bootstrap_with=encode(n,s)) as S: r=S.solve()
print(n,s,name,r,round(time.time()-t,1),flush=True)
