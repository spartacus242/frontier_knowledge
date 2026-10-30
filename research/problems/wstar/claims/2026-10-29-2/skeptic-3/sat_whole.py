#!/usr/bin/env python3
"""Whole-instance SAT run (no cubes): good s-colouring of [1,n] exists?
usage: sat_whole.py n s [solver]   (clauses incl. symmetry breaking from sat_inc2.build)
Also writes the CNF to DIMACS file cnf_<n>_<s>.cnf for the record."""
import sys, os, time
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pysat.solvers import Solver
from pysat.formula import CNF
from sat_inc2 import build, decode

n, s = int(sys.argv[1]), int(sys.argv[2])
name = sys.argv[3] if len(sys.argv) > 3 else "kissat404"
cl = build(n, s)
CNF(from_clauses=cl).to_file(f"cnf_{n}_{s}.cnf")
print(f"n={n} s={s} solver={name} vars={n*s} clauses={len(cl)} start {time.ctime()}", flush=True)
t = time.time()
with Solver(name=name, bootstrap_with=cl) as S:
    r = S.solve()
    print("RESULT:", "SAT (good colouring exists)" if r else "UNSAT (no good colouring)",
          f"time {time.time()-t:.1f}s", time.ctime(), flush=True)
    if r:
        col, viol = decode(S.get_model(), n, s)
        print("witness:", "".join(map(str, col)), "violations(independent recheck):", viol, flush=True)
