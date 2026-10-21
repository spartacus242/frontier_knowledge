import sys, time
from sat_funcs import M_sat, G_sat
f={'M':M_sat,'G':G_sat}[sys.argv[1]]; s0=int(sys.argv[2]); s1=int(sys.argv[3]); n=int(sys.argv[4])
for s in range(s0, s1+1):
    while True:
        t0=time.time(); r,X=f(n,s); print(f"{sys.argv[1]} s={s} n={n} {'SAT' if r else 'UNSAT'} {time.time()-t0:.1f}s", flush=True)
        if r: open(f"{sys.argv[1]}_s{s}_n{n}.txt","w").write(" ".join(map(str,X))+"\n"); n+=1
        else: print(f"RESULT {sys.argv[1]}(3,{s}) = {n}", flush=True); break
