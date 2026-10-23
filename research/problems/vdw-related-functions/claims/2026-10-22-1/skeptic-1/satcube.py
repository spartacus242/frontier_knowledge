import sys,time
from pysat.solvers import Solver
s,n,c,a,b=map(int,sys.argv[1:6]); m=(n-1)//2; N=s*n; v=lambda x:x+1
cls=[[v(s*i+j) for j in range(s)] for i in range(n)]
for x in range(N):
    for d in range(1,(N-1-x)//2+1):
        if x//s==(x+d)//s or (x+d)//s==(x+2*d)//s: continue
        cls.append([-v(x),-v(x+d),-v(x+2*d)])
for i in range(n):
    for j in range(s):
        for k in range(j+1,s): cls.append([-v(s*i+j),-v(s*i+k)])
with Solver(name='cadical153',bootstrap_with=cls) as S:
    t=time.time(); r=S.solve(assumptions=[v(s*m+c),v(s*(m-1)+a),v(s*(m+1)+b)])
    print(f"SAT-crosscheck s={s} n={n} cube=({c},{a},{b}) result={'SAT' if r else 'UNSAT'} time={time.time()-t:.0f}s",flush=True)
