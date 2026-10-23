#!/usr/bin/env python3
"""SAT formulation: exists x_i in [s(i-1), s*i-1], i=1..n, 3-AP-free?
usage: sat_search.py s n [solver] [fixes like 1=3 ...]
Prints RESULT s n SAT|UNSAT ...
"""
import sys, time
from pysat.solvers import Solver

def build(s, n):
    N = s * n
    var = lambda v: v + 1
    cls = []
    for i in range(n):
        blk = list(range(s * i, s * i + s))
        cls.append([var(v) for v in blk])                     # at least one
        for a in range(len(blk)):
            for b in range(a + 1, len(blk)):
                cls.append([-var(blk[a]), -var(blk[b])])      # at most one
    for a in range(N):
        for d in range(1, (N - 1 - a) // 2 + 1):
            cls.append([-var(a), -var(a + d), -var(a + 2 * d)])
    return cls

def main():
    s, n = int(sys.argv[1]), int(sys.argv[2])
    name = sys.argv[3] if len(sys.argv) > 3 else 'cadical153'
    fixes = [tuple(map(int, t.split('='))) for t in sys.argv[4:]]
    t0 = time.time()
    cls = build(s, n)
    assum = []
    for b, v in fixes:
        assert s * (b - 1) <= v <= s * b - 1
        assum.append(v + 1)
    with Solver(name=name, bootstrap_with=cls) as S:
        r = S.solve(assumptions=assum)
        out = f"RESULT {s} {n} {'SAT' if r else 'UNSAT'} solver={name} clauses={len(cls)} time={time.time()-t0:.1f}s"
        for b, v in fixes:
            out += f" fix:{b}={v}"
        if r:
            m = S.get_model()
            sol = sorted(l - 1 for l in m if l > 0)
            # verify solution
            assert len(sol) == n and all(s * i <= sol[i] <= s * i + s - 1 for i in range(n))
            ss = set(sol)
            assert not any((2 * b - a) in ss for a in sol for b in sol if b > a)
            out += " sol: " + " ".join(map(str, sol))
    print(out, flush=True)

main()
