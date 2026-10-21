# SAT checks for the van der Waerden-related functions of Brown, Landman & Robertson (arXiv:0706.4420), k = 3.
#  w1(3,s): least n s.t. every 2-colouring of [n] has a 3-AP in colour A or s consecutive in colour B.
#           <=> max n with a 3-AP-free A in [n] meeting every window of s consecutive integers, plus 1.
#  M(3,s):  least n s.t. every choice x_i in block i (blocks of length s) for i=1..n contains a 3-AP.
#  G(3,s):  least n s.t. every set x1<...<xn with gaps x_i - x_{i-1} <= s contains a 3-AP.
import sys, itertools
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
from pysat.formula import IDPool

def ap3_clauses(N, var):
    for d in range(1, N):
        for a in range(1, N - 2*d + 1):
            yield [-var(a), -var(a+d), -var(a+2*d)]

def w1_sat(n, s, budget=None):
    # A subset of [n] (x_i true = i in A), no 3-AP in A, every window of s consecutive contains an element of A.
    S = Cadical153(); var = lambda i: i
    for c in ap3_clauses(n, var): S.add_clause(c)
    for a in range(1, n - s + 2): S.add_clause([var(a+j) for j in range(s)])
    S.add_clause([var(1), -var(1)])
    r = S.solve() if budget is None else (S.conf_budget(budget) or S.solve_limited())
    m = S.get_model() if r else None
    return r, ([i for i in range(1, n+1) if m and m[i-1] > 0] if r else None)

def M_sat(n, s):
    # choose exactly one element in each block [(i-1)s, is-1], i=1..n, with no 3-AP among chosen.
    N = n*s; pool = IDPool(start_from=N+1); S = Cadical153(); var = lambda x: x+1   # x in [0, N-1]
    for d in range(1, N):
        for a in range(0, N - 2*d):
            S.add_clause([-var(a), -var(a+d), -var(a+2*d)])
    for i in range(n):
        lits = [var(x) for x in range(i*s, (i+1)*s)]
        S.add_clause(lits)
        for c in CardEnc.atmost(lits, 1, vpool=pool, encoding=EncType.pairwise).clauses: S.add_clause(c)
    r = S.solve(); m = S.get_model() if r else None
    return r, ([x for x in range(N) if m[x] > 0] if r else None)

def G_sat(n, s):
    # n elements x1<..<xn, gaps <= s, no 3-AP. WLOG x1 = 1, so all xi <= 1+(n-1)s. Count elements: need exactly n
    # chosen with consecutive chosen gaps <= s: equivalently chosen set within [1, L] contains 1, every window of s
    # consecutive integers inside [1, max] meets the set... we encode with L = 1+(n-1)s, positions p_j, by:
    # choose set A in [1..L], 1 in A, no 3-AP, |A| >= n, and gaps <= s between consecutive chosen up to the n-th element.
    # Simpler: A has no gap > s anywhere before its last element; we just require |A| >= n and A starts at 1 and
    # "if x in A and some y > x in A then some element in (x, x+s]". Encode via windows: for each x, (not x) or
    # (some of x+1..x+s) or (no element > x+s).
    L = 1 + (n-1)*s; pool = IDPool(start_from=L+1); S = Cadical153(); var = lambda i: i
    for c in ap3_clauses(L, var): S.add_clause(c)
    S.add_clause([var(1)])
    # suffix-any variables: z_x = OR_{y>=x} var(y)
    z = {x: pool.id(('z', x)) for x in range(1, L+2)}
    S.add_clause([-z[L+1]])
    for x in range(1, L+1):
        S.add_clause([-z[x], var(x), z[x+1]]); S.add_clause([z[x], -var(x)]); S.add_clause([z[x], -z[x+1]])
    for x in range(1, L+1):
        nxt = [var(y) for y in range(x+1, min(L, x+s)+1)]
        far = z[x+s+1] if x+s+1 <= L+1 else None
        if far is not None: S.add_clause([-var(x)] + nxt + [-far])
    for c in CardEnc.atleast([var(i) for i in range(1, L+1)], n, vpool=pool, encoding=EncType.seqcounter).clauses: S.add_clause(c)
    r = S.solve(); m = S.get_model() if r else None
    return r, ([i for i in range(1, L+1) if m[i-1] > 0] if r else None)

def first_unsat(f, s, start):
    n = start
    while True:
        r, _ = f(n, s)
        if not r: return n
        n += 1

if __name__ == "__main__":
    which = sys.argv[1]
    for s in range(2, int(sys.argv[2])+1):
        if which == "w1": print("w1(3,%d) =" % s, first_unsat(lambda n, s: w1_sat(n, s), s, s), flush=True)
        if which == "M":  print("M(3,%d) =" % s, first_unsat(M_sat, s, 3), flush=True)
        if which == "G":  print("G(3,%d) =" % s, first_unsat(G_sat, s, 3), flush=True)
