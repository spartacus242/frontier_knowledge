import sys,time
from pysat.solvers import Solver
from enc import encode,decode
from check import bad_aps
for s,expect in [(2,9),(3,23),(4,40)]:
    for n in [expect-1,expect]:
        t=time.time()
        for sv in ['cadical153','glucose4']:
            with Solver(name=sv,bootstrap_with=encode(n,s)) as S:
                r=S.solve()
                extra=''
                if r:
                    col=decode(S.get_model(),n,s); extra=f" verified_good={len(bad_aps(col))==0} {''.join(map(str,col))}"
                print(f"s={s} n={n} {sv} SAT={r} {time.time()-t:.1f}s{extra}",flush=True)
