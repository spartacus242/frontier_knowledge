#!/usr/bin/env python3
"""Resumable cube-and-conquer with kissat: cubes = colourings of the first K positions
(chi(1) restricted by symmetry breaking); each cube solved by a fresh kissat 4.0.4 run on the
full clause set (incl. symmetry breaking from sat_inc2.build) plus K unit clauses.
Finished cubes are appended to the state file and skipped on relaunch.
usage: sat_kcubes.py n s K statefile"""
import sys, os, time, itertools
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pysat.solvers import Solver
from sat_inc2 import build, decode, var

n, s, K, sf = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
base = build(n, s)
done = set()
if os.path.exists(sf):
    for line in open(sf):
        if line.strip(): done.add(line.split()[0])
cubes = [c for c in itertools.product(range(s), repeat=K) if c[0] <= (s - 1) // 2]
print(f"n={n} s={s} K={K} cubes={len(cubes)} done={len(done)} start {time.ctime()}", flush=True)
for cube in cubes:
    key = "".join(str(c + 1) for c in cube)
    if key in done: continue
    bad = any(cube[a + d] - cube[a] == cube[a + 2 * d] - cube[a + d] for d in range(1, K) for a in range(0, K - 2 * d))
    t1 = time.time()
    if bad:
        res = "BADPREFIX"
    else:
        print(f"cube {key} start {time.ctime()}", flush=True)
        with Solver(name="kissat404", bootstrap_with=base + [[var(i, c, s)] for i, c in enumerate(cube)]) as S:
            r = S.solve()
            if r:
                col, viol = decode(S.get_model(), n, s)
                res = "SAT " + "".join(map(str, col)) + f" viol={viol}"
            else:
                res = "UNSAT"
    dt = time.time() - t1
    with open(sf, "a") as st: st.write(f"{key} {res} {dt:.1f}\n")
    print(f"cube {key} {res} {dt:.1f}s {time.ctime()}", flush=True)
print("ALL CUBES DONE", time.ctime(), flush=True)
