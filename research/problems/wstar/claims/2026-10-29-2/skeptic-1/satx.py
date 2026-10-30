# independent cross-check: random central blocks (positions 34..43, 1-based) decided by CaDiCaL on the full CNF
import random,time,sys
from pysat.solvers import Solver
from enc import encode,var
from check import bad_aps
random.seed(int(sys.argv[1])); n,s=76,5; S0,S1=33,42
cl=encode(n,s); done=0
while done<int(sys.argv[2]):
    b=[random.randint(1,5) for _ in range(10)]
    if bad_aps(b): continue
    t=time.time()
    with Solver(name='cadical153',bootstrap_with=cl) as S:
        S.conf_budget(3000000); r=S.solve_limited(assumptions=[var(S0+i,b[i]-1,s) for i in range(10)])
    print(''.join(map(str,b)),r,round(time.time()-t,1),flush=True); done+=1
