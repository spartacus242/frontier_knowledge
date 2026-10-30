import sys,time,json
from pysat.solvers import Solver
from enc import encode,var
from enc2 import redundant,table5
cube=json.loads(sys.argv[1]); mode=sys.argv[2]; name=sys.argv[3]; cap=float(sys.argv[4])
cl=encode(76,5)
if mode=='red': cl+=redundant(76,5,table5())
for p,c in cube: cl.append([var(p,c,5)])
S=Solver(name=name,bootstrap_with=cl)
t=time.time(); r=None
# run in chunks of conflicts until cap
while time.time()-t<cap:
    S.conf_budget(50000); r=S.solve_limited()
    if r is not None: break
print(mode,name,len(cl),r,round(time.time()-t,1),flush=True)
