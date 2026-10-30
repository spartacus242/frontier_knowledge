#!/usr/bin/env python3
"""Exhaustive search for good s-colourings of [1, n] via SAT (pysat / CaDiCaL).

A colouring chi:[1,n]->[1,s] is good iff for every 3-AP a, a+d, a+2d (d>=1)
the colour triple (c1,c2,c3) is NOT an arithmetic progression (c2-c1 == c3-c2),
including constant triples.

Usage:
  sat_search.py n s [--cube K] [--state FILE] [--nosym]
With --cube K the search is split into cubes = assignments of the first K
positions (each cube a separate SAT call); finished cubes are recorded in the
state file so the run is resumable. Any model found is printed and verified.
"""
import sys, os, time, argparse, itertools
from pysat.solvers import Cadical153

def var(i, c, s):          # position i in [0,n), colour c in [0,s)
    return i * s + c + 1

def build_clauses(n, s, sym=True):
    cl = []
    for i in range(n):
        cl.append([var(i, c, s) for c in range(s)])            # at least one colour
        for c1 in range(s):
            for c2 in range(c1 + 1, s):
                cl.append([-var(i, c1, s), -var(i, c2, s)])     # at most one
    # forbidden colour triples
    forb = [(c1, c2, c3) for c1 in range(s) for c2 in range(s) for c3 in range(s)
            if c2 - c1 == c3 - c2]
    nap = 0
    for d in range(1, (n - 1) // 2 + 1):
        for a in range(0, n - 2 * d):
            nap += 1
            for (c1, c2, c3) in forb:
                cl.append([-var(a, c1, s), -var(a + d, c2, s), -var(a + 2 * d, c3, s)])
    if sym:
        # colour reversal c -> s-1-c is a symmetry: restrict position 0 to colours
        # c <= (s-1)//2 ... but careful, we only need colour of pos 0 in lower half+middle.
        cl.append([var(0, c, s) for c in range(0, (s - 1) // 2 + 1)])
    return cl, nap, len(forb)

def verify(model, n, s):
    col = [None] * n
    for i in range(n):
        cs = [c for c in range(s) if model[var(i, c, s) - 1] > 0]
        assert len(cs) == 1, (i, cs)
        col[i] = cs[0] + 1
    bad = 0
    for d in range(1, (n - 1) // 2 + 1):
        for a in range(0, n - 2 * d):
            if col[a + d] - col[a] == col[a + 2 * d] - col[a + d]:
                bad += 1
    return col, bad

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("n", type=int); ap.add_argument("s", type=int)
    ap.add_argument("--cube", type=int, default=0)
    ap.add_argument("--state", default=None)
    ap.add_argument("--nosym", action="store_true")
    args = ap.parse_args()
    n, s = args.n, args.s
    cl, nap, nf = build_clauses(n, s, sym=not args.nosym)
    print(f"n={n} s={s} vars={n*s} clauses={len(cl)} 3-APs={nap} forbidden triples={nf}", flush=True)
    t0 = time.time()
    if args.cube == 0:
        with Cadical153(bootstrap_with=cl) as S:
            r = S.solve()
            print("result:", "SAT (good colouring exists)" if r else "UNSAT (no good colouring)",
                  f"time {time.time()-t0:.1f}s", flush=True)
            if r:
                col, bad = verify(S.get_model(), n, s)
                print("witness:", "".join(map(str, col)), "violations(independent recheck):", bad)
        return
    K = args.cube
    done = set()
    if args.state and os.path.exists(args.state):
        for line in open(args.state):
            line = line.strip()
            if line: done.add(line.split()[0])
    cubes = list(itertools.product(range(s), repeat=K))
    # respect symmetry restriction on position 0
    if not args.nosym:
        cubes = [c for c in cubes if c[0] <= (s - 1) // 2]
    print(f"cubes total={len(cubes)} already done={len(done)}", flush=True)
    found = 0
    st = open(args.state, "a") if args.state else None
    for idx, cube in enumerate(cubes):
        key = "".join(str(c + 1) for c in cube)
        if key in done: continue
        # quick prefix filter: cube itself must be good
        assum = [var(i, c, s) for i, c in enumerate(cube)]
        t1 = time.time()
        with Cadical153(bootstrap_with=cl) as S:
            r = S.solve(assumptions=assum)
            if r:
                col, bad = verify(S.get_model(), n, s)
                found += 1
                print(f"CUBE {key}: SAT witness {''.join(map(str,col))} viol={bad}", flush=True)
                res = "SAT " + "".join(map(str, col))
            else:
                res = "UNSAT"
        dt = time.time() - t1
        if st:
            st.write(f"{key} {res} {dt:.2f}\n"); st.flush()
        if idx % 50 == 0 or dt > 30:
            print(f"[{idx+1}/{len(cubes)}] cube {key} {res.split()[0]} {dt:.1f}s elapsed {time.time()-t0:.0f}s", flush=True)
    print(f"ALL CUBES DONE. good colourings found in {found} cubes. total time {time.time()-t0:.0f}s", flush=True)

if __name__ == "__main__":
    main()
