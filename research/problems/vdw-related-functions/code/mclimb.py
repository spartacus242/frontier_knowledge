"""Witness climbing for M(3,s): grow a valid one-per-block choice by one block at a time.
Usage: python3 mclimb.py s start_file K_list [max_T]
start_file holds a valid choice x_1..x_T (one per block [(i-1)s, is-1]). For T+1 blocks, solve SAT with the choices of all
blocks fixed except a window of K free blocks, tried at the right end, the left end (after shifting everything one block
right) and centred windows; the first K in K_list that works wins. Each success is written to m8/climb_T<T>.txt.
A witness search only (incomplete)."""
import sys, time
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
from pysat.formula import IDPool

def build(n, s):
    N = n * s; pool = IDPool(start_from=N + 1); S = Cadical153(); var = lambda x: x + 1
    for d in range(1, N):
        for a in range(0, N - 2 * d):
            S.add_clause([-var(a), -var(a + d), -var(a + 2 * d)])
    for i in range(n):
        lits = [var(x) for x in range(i * s, (i + 1) * s)]
        S.add_clause(lits)
        for c in CardEnc.atmost(lits, 1, vpool=pool, encoding=EncType.pairwise).clauses: S.add_clause(c)
    return S, N

def ok(xs, s):
    S = set(xs)
    if any(not (i * s <= x < (i + 1) * s) for i, x in enumerate(xs)): return False
    return not any(2 * b - a in S for a in xs for b in xs if a < b)

s = int(sys.argv[1]); xs = list(map(int, open(sys.argv[2]).read().split())); Ks = list(map(int, sys.argv[3].split(',')))
maxT = int(sys.argv[4]) if len(sys.argv) > 4 else 200
assert ok(xs, s)
while len(xs) < maxT:
    T = len(xs) + 1; S, N = build(T, s); found = None
    for K in Ks:
        # candidate assignments of the old elements in the new frame: appended at the end (offsets unchanged) or prepended
        frames = [("end", xs), ("start", [x + s for x in xs])]
        for name, fx in frames:
            blocks_old = [x // s for x in fx]
            for lo in sorted(set([0, T - K] + list(range(0, T - K + 1, max(1, K // 2)))), key=lambda b: (b not in (0, T - K), b)):
                free = set(range(lo, lo + K))
                if name == "end" and T - 1 not in free: continue
                if name == "start" and 0 not in free: continue
                assum = [x + 1 for x, b in zip(fx, blocks_old) if b not in free]
                t0 = time.time()
                if S.solve(assumptions=assum):
                    m = S.get_model(); found = [x for x in range(N) if m[x] > 0]
                    print(f"T={T} K={K} frame={name} lo={lo} SAT {time.time() - t0:.1f}s", flush=True); break
            if found: break
        if found: break
        print(f"T={T} K={K} no window worked", flush=True)
    S.delete()
    if not found: print(f"stuck at T={T - 1}", flush=True); break
    assert ok(found, s); xs = found
    open(f"m8/climb_s{s}_T{T}.txt", "w").write(" ".join(map(str, xs)) + "\n")
