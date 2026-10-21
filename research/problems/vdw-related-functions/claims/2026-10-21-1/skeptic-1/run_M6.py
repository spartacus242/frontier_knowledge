from check import *
for n in (37, 38):
    t = time.time(); w = M_sat(n, 6)
    print(f"SAT M s=6 n={n}: {'SAT' if w else 'UNSAT'} [{time.time()-t:.0f}s] {w if w else ''}", flush=True)
    if w: assert check_M_witness(w, 6) and len(w) == n
