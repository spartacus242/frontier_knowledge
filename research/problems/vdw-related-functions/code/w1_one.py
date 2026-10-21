import sys, time
from sat_funcs import w1_sat
s=int(sys.argv[1]); n=int(sys.argv[2]); t0=time.time(); r,A=w1_sat(n,s)
print(f"s={s} n={n} {'SAT' if r else 'UNSAT'} {time.time()-t0:.1f}s", flush=True)
if r: open(f"w1_s{s}_n{n}.txt","w").write(" ".join(map(str,A))+"\n")
