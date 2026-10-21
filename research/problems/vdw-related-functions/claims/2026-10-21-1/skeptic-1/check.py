"""Independent skeptic check: witnesses + exact values of M(3,s), G(3,s) via SAT (CaDiCaL).
Definitions (as quoted):
 M(k,s): least n s.t. every X={x1..xn} with xi in [(i-1)s, is-1] has a k-AP.
 G(k,s): least n s.t. every S={x1<..<xn} with xi-x(i-1)<=s has a k-AP.
Variant readings also computed: M with closed blocks [(i-1)s, is] (distinct, increasing), G with gaps < s.
"""
import sys, itertools, time
from pysat.solvers import Solver
from pysat.card import CardEnc, EncType
from pysat.formula import IDPool

def has3ap(xs):
    S = set(xs)
    xs = sorted(S)
    for i in range(len(xs)):
        for j in range(i+1, len(xs)):
            if 2*xs[j]-xs[i] in S:
                return (xs[i], xs[j], 2*xs[j]-xs[i])
    return None

def ap_clauses(z, lo, hi):
    cl = []
    for a in range(lo, hi+1):
        for d in range(1, (hi-a)//2+1):
            cl.append([-z[a], -z[a+d], -z[a+2*d]])
    return cl

def M_sat(n, s, closed=False):
    """Is there a 3-AP-free X with xi in block i? returns witness or None."""
    pool = IDPool()
    hi = n*s - 1 + (1 if closed else 0)
    y = {}
    for i in range(1, n+1):
        lo_i, hi_i = (i-1)*s, i*s-1 + (1 if closed else 0)
        for p in range(lo_i, hi_i+1):
            y[i, p] = pool.id(('y', i, p))
    z = {p: pool.id(('z', p)) for p in range(0, hi+1)}
    cls = []
    for i in range(1, n+1):
        ps = [p for (j, p) in y if j == i]
        enc = CardEnc.equals([y[i, p] for p in ps], 1, vpool=pool, encoding=EncType.pairwise)
        cls += enc.clauses
    for p in z:
        holders = [y[i, q] for (i, q) in y if q == p]
        # z_p <-> OR holders
        cls.append([-z[p]] + holders)
        for h in holders:
            cls.append([-h, z[p]])
    if closed:
        # increasing & distinct: x_{i+1} > x_i. Only conflict: x_i = is and x_{i+1} = is.
        for i in range(1, n):
            cls.append([-y[i, i*s], -y[i+1, i*s]])
    cls += ap_clauses(z, 0, hi)
    with Solver(name='cadical153', bootstrap_with=cls) as S:
        if S.solve():
            m = set(v for v in S.get_model() if v > 0)
            xs = [p for p in z if z[p] in m]
            return sorted(xs)
        return None

def G_sat(n, s, strict=False):
    """3-AP-free set of n integers, x1=0, consecutive gaps <= s (or < s if strict)."""
    g = s-1 if strict else s
    L = (n-1)*g
    pool = IDPool()
    z = {p: pool.id(('z', p)) for p in range(0, L+1)}
    # suffix-or: a_t <-> OR_{q>=t} z_q
    a = {t: pool.id(('a', t)) for t in range(0, L+2)}
    cls = [[z[0]], [-a[L+1]]]
    for t in range(L, -1, -1):
        cls += [[-a[t], z[t], a[t+1]], [-z[t], a[t]], [-a[t+1], a[t]]]
    # gap: if z_p and some element beyond p+g then some element in (p, p+g]
    for p in range(0, L+1):
        if p+g+1 <= L:
            cls.append([-z[p], -a[p+g+1]] + [z[r] for r in range(p+1, p+g+1)])
    enc = CardEnc.equals([z[p] for p in z], n, vpool=pool, encoding=EncType.seqcounter)
    cls += enc.clauses
    cls += ap_clauses(z, 0, L)
    with Solver(name='cadical153', bootstrap_with=cls) as S:
        if S.solve():
            m = set(v for v in S.get_model() if v > 0)
            return sorted(p for p in z if z[p] in m)
        return None

def check_M_witness(xs, s):
    xs = sorted(xs)
    ok = all((i-1)*s <= x <= i*s-1 for i, x in enumerate(xs, 1)) and len(set(xs)) == len(xs)
    return ok and has3ap(xs) is None

def check_G_witness(xs, s):
    ok = all(b > a and b-a <= s for a, b in zip(xs, xs[1:]))
    return ok and has3ap(xs) is None

def value(fn, s, start, **kw):
    n = start
    while True:
        w = fn(n, s, **kw)
        if w is None:
            return n, prev
        prev = w
        n += 1

if __name__ == '__main__':
    W = {
     ('M',4): "2 4 11 12 19 23 24 30 32 38 43 47 50 55 59 61 66 69",
     ('M',5): "2 6 12 15 20 26 33 35 42 48 53 56 62 66 74 75 83 87 93 96 101 107 114 116 123 129 134 137 143 147",
     ('M',6): "4 11 13 19 24 31 40 47 52 59 65 68 74 79 88 95 98 103 113 115 121 130 133 140 148 155 160 164 169 176 184 191 194 203 209 210 216",
     ('G',6): "0 3 8 12 18 22 25 30 34 40 45 51 53 59 64 70 71 74 79 85 86 92",
    }
    for (f, s), t in W.items():
        xs = list(map(int, t.split()))
        chk = check_M_witness(xs, s) if f == 'M' else check_G_witness(xs, s)
        print(f"witness {f}(3,{s}) size {len(xs)} valid={chk}", flush=True)
    printedG = {2:5,3:9,4:11,5:17,6:22,7:33,8:37,9:48}
    printedM = {2:7,3:11,4:18,5:29,6:37,7:48}
    smax = int(sys.argv[1]) if len(sys.argv) > 1 else 7
    for s in range(2, smax+1):
        t=time.time(); v, w = value(M_sat, s, 2)
        assert check_M_witness(w, s) and len(w) == v-1
        t2=time.time(); vc, _ = value(M_sat, s, 2, closed=True)
        print(f"M(3,{s}) = {v} (printed {printedM.get(s)}) [{t2-t:.1f}s]; closed-block variant {vc}; witness {w}", flush=True)
    for s in range(2, max(smax,9)+1):
        t=time.time(); v, w = value(G_sat, s, 2)
        assert check_G_witness(w, s) and len(w) == v-1
        vs, _ = value(G_sat, s, 2, strict=True) if s > 2 else (None, None)
        print(f"G(3,{s}) = {v} (printed {printedG.get(s)}) [{time.time()-t:.1f}s]; gaps<s variant {vs}; witness {w}", flush=True)
