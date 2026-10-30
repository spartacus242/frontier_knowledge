import sys,time,json
from pysat.solvers import Solver
from enc import encode,var
cube=json.loads(sys.argv[1]); name=sys.argv[2]
cl=encode(76,5)
for p,c in cube: cl.append([var(p,c,5)])
t=time.time()
with Solver(name=name,bootstrap_with=cl) as S: r=S.solve()
print(name,r,round(time.time()-t,1),flush=True)
