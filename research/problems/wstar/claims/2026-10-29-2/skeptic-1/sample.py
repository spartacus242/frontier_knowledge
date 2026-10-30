import json,random,time,sys
from pysat.solvers import Solver
from enc import encode,var
D=json.load(open(sys.argv[1])); random.seed(1)
cl=encode(76,5)
for cube in random.sample(D['cubes'],int(sys.argv[2])):
    S=Solver(name='cadical153',bootstrap_with=cl)
    t=time.time(); r=S.solve(assumptions=[var(p-1,c-1,5) for p,c in zip(D['pos'],cube)])
    print(cube,r,round(time.time()-t,2),flush=True); S.delete()
