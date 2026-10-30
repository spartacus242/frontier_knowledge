#!/usr/bin/env python3
"""Incremental cube-and-conquer SAT search (one long-lived CaDiCaL instance,
learned clauses kept across cubes) for good s-colourings of [1,n].
usage: sat_inc.py n s K statefile [ONLYCUBE]
Cubes = colourings of the first K positions (colour of position 1 restricted to
the lower half by the colour-reversal symmetry). Each finished cube is appended
to statefile with its result; cubes already in statefile are skipped.
"""
import sys, os, time, itertools
from pysat.solvers import Cadical153
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from sat_search import build_clauses, var, verify

def main():
    n, s, K, sf = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
    only = sys.argv[5] if len(sys.argv) > 5 else None
    cl, nap, nf = build_clauses(n, s, sym=True)
    done = set()
    if os.path.exists(sf):
        for line in open(sf):
            if line.strip(): done.add(line.split()[0])
    cubes = [c for c in itertools.product(range(s), repeat=K) if c[0] <= (s - 1) // 2]
    print(f"n={n} s={s} K={K} clauses={len(cl)} cubes={len(cubes)} done={len(done)}", flush=True)
    t0 = time.time(); found = 0; ndone = 0
    S = Cadical153(bootstrap_with=cl)
    for idx, cube in enumerate(cubes):
        key = "".join(str(c + 1) for c in cube)
        if only and key != only: continue
        if key in done: continue
        # cheap prefix check: skip cubes whose prefix is itself bad
        col = [c for c in cube]
        bad = any(col[a + d] - col[a] == col[a + 2 * d] - col[a + d]
                  for d in range(1, K) for a in range(0, K - 2 * d))
        t1 = time.time()
        if bad:
            res = "BADPREFIX"
        else:
            r = S.solve(assumptions=[var(i, c, s) for i, c in enumerate(cube)])
            if r:
                colr, viol = verify(S.get_model(), n, s)
                found += 1
                res = "SAT " + "".join(map(str, colr)) + f" viol={viol}"
                print(f"CUBE {key}: {res}", flush=True)
            else:
                res = "UNSAT"
        dt = time.time() - t1
        with open(sf, "a") as st:
            st.write(f"{key} {res} {dt:.2f}\n")
        ndone += 1
        if dt > 5 or ndone % 200 == 0:
            print(f"[{idx+1}/{len(cubes)}] {key} {res.split()[0]} {dt:.1f}s elapsed {time.time()-t0:.0f}s", flush=True)
    print(f"ALL CUBES DONE: found={found} total time {time.time()-t0:.0f}s", flush=True)

if __name__ == "__main__":
    main()
