# w1(3,s) by bisection (satisfiability is monotone in n: a good set for [n] restricts to one for [n-1]).
import sys, time
from sat_funcs import w1_sat
s=int(sys.argv[1]); lo=int(sys.argv[2]); hi=int(sys.argv[3])   # invariant: lo SAT, hi UNSAT (hi assumed; checked)
def test(n):
    t0=time.time(); r,A=w1_sat(n,s)
    print(f"s={s} n={n} {'SAT' if r else 'UNSAT'} {time.time()-t0:.1f}s", flush=True)
    if r: open(f"w1_s{s}_n{n}.txt","w").write(" ".join(map(str,A))+"\n")
    return r
assert test(lo)
while test(hi): lo=hi; hi=hi+50
while hi-lo>1:
    mid=(lo+hi)//2
    if test(mid): lo=mid
    else: hi=mid
print(f"RESULT w1(3,{s}) = {hi}  (largest good n = {lo})", flush=True)
