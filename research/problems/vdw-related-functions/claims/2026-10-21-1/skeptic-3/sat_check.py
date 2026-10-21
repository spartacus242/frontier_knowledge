# Independent second method: SAT encoding with CaDiCaL (python-sat).
# M mode: variables v_t for t in [0, n*s): exactly one chosen per block [(i-1)s, is-1]; no 3-AP among chosen.
# G mode: WLOG x_1 = 0; variables v_t for t in [0, (n-1)*s]; x_1 chosen; exactly n chosen? Instead:
#   encode "set S containing 0 with all consecutive gaps <= s and |S| >= n, 3-AP-free":
#   for every t chosen, some element in (t, t+s] is chosen unless t is the last; simpler: use order encoding
#   with position variables p[i][t] = "x_i = t", i=1..n, t in range; x_1=0; x_{i} - x_{i-1} in [1,s]; 3-AP-free.
import sys
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
from pysat.formula import IDPool
mode, s, n = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
pool = IDPool()
clauses = []
if mode == "M":
    T = n*s
    v = [pool.id(('v',t)) for t in range(T)]
    for i in range(n):
        blk = [v[t] for t in range(i*s, (i+1)*s)]
        clauses += CardEnc.equals(lits=blk, bound=1, vpool=pool, encoding=EncType.pairwise).clauses
    for a in range(T):
        for d in range(1, (T-1-a)//2+1):
            clauses.append([-v[a], -v[a+d], -v[a+2*d]])
else:
    T = (n-1)*s+1
    p = [[pool.id(('p',i,t)) for t in range(T)] for i in range(n)]
    v = [pool.id(('v',t)) for t in range(T)]
    clauses.append([p[0][0]])
    for i in range(n):
        clauses += CardEnc.equals(lits=p[i], bound=1, vpool=pool, encoding=EncType.seqcounter).clauses
        for t in range(T):
            clauses.append([-p[i][t], v[t]])
            if i>0:
                # x_{i-1} in [t-s, t-1]
                clauses.append([-p[i][t]] + [p[i-1][u] for u in range(max(0,t-s), t)])
    # v[t] -> some p[i][t]
    for t in range(T):
        clauses.append([-v[t]] + [p[i][t] for i in range(n)])
    for a in range(T):
        for d in range(1, (T-1-a)//2+1):
            clauses.append([-v[a], -v[a+d], -v[a+2*d]])
with Cadical153(bootstrap_with=clauses) as sol:
    r = sol.solve()
    print(mode, "s=%d n=%d :"%(s,n), "SAT (exists)" if r else "UNSAT (impossible)", "clauses=%d"%len(clauses))
    if r:
        m = set(l for l in sol.get_model() if l>0)
        print(sorted(t for t in range(T) if v[t] in m))
