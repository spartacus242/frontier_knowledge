# VERIFY-01-a — fresh-context check of UQ-20261028-01, fatal leg (adversary #2, attack 1)

Checker: fresh context, did not write the entry or either adversary log.
Date: 2026-10-29. Budget allotted: 0 web searches, 2 fetches. Spent: 0 searches, 2 fetches (both on the same URL, the second to obtain verbatim segments after the first refused length-quoting). Budget was NOT exhausted mid-check; the check is complete.

## 1. What I opened

| Document | Route | Read level |
|---|---|---|
| `/home/claude/.../UQ-20261028-01-entry.md` | local file, full | FULL TEXT |
| `/home/claude/.../UQ-20261028-01-record.md` | local file, grep for the two order definitions (lines 9, 13, 17, 19) | SECTION READ (the Gate 1 reformulation only — this is where the orders are defined verbatim) |
| `/home/claude/.../UQ-20261028-01-adversary-2.md` | local file, grep `reverse`; line 414 is attack 1's row, line 334 its §7 derivation header | SECTION READ (only the row carrying the claim under test, as instructed) |
| Cobb, Knox, Lopez, McDonald, Mitchell, NNTDM 25(4) (2019) 72–82 | `https://nntdm.net/volume-25-2019/number-4/72-82/` — publisher landing page, HTTP 200 on first try, no failed routes | ABSTRACT ONLY (title, authors, keywords, full abstract in verbatim segments; the PDF body was not opened) |

No retrieval failed. There is no COULD NOT READ in this check.

## 2. The two orders, as the ENTRY's own record defines them

From `UQ-20261028-01-record.md` line 13 (Gate 1 reformulation, "Canonical question" block), quoted in segments:

- "send f = t^n + sum_{i<n} a_i t^i to the integer sum_{i<n} a_i q^i"
- "read **constant-term-first as the least significant digit**"

and line 17: "the coefficient string read leading-coefficient-first, i.e. the reverse digit significance".

So, my transcription into code:
- ORDER 1 (forward): `pos_fwd = sum_{i<n} a_i * q^i`   (a_0 is least significant)
- ORDER 2 (reverse): `pos_rev = sum_{i<n} a_i * q^(n-1-i)`  (a_{n-1} is least significant, so a_0 is MOST significant)

and the statistic, from record line 13: P(a,a) counts ordered consecutive pairs (f,g) of degree-n monic irreducibles with f ≡ g ≡ a mod m and both coprime to m; N_pairs counts all ordered consecutive pairs with both members coprime to m; delta = P(a,a)/(N_pairs/phi(m)^2) − 1. I counted ordered pairs in both directions; the ratio is convention-independent.

## 3. Code, and its validation

Written from scratch, no CAS. F_q[t] as coefficient tuples over F_q (q prime); `pmul`, `pmod` (long division with inverse of the leading coefficient by Fermat), `pgcd`, and irreducibility by trial division against every monic of degree 1..n/2.

- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/uq01/fq.py` (arithmetic)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/uq01/sanity.py` (validation)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/uq01/final.py` (main tables, convergence, nulls)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/uq01/blocks.py` (block structure, closed form)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/uq01/q2_full.txt`, `.../final.txt` (saved output)

VALIDATION 1 — irreducible counts against Gauss, (1/n)·sum_{d|n} mu(d) q^{n/d}, with my own Mobius: OK at every (q,n) for q=2 n=1..12, q=3 n=1..8, q=5 n=1..6. Counts at q=2: n=10 → 99, n=11 → 186, n=12 → 335. The entry's "4096-monic check" is q=2, n=12 (2^12 = 4096 monics, 335 irreducible).

VALIDATION 2 — phi(t^d) = q^d − q^{d-1}: 2/t→1, 2/t^2→2, 2/t^3→4, 3/t→2, 3/t^2→6, 3/t^3→18, 5/t^2→20, 5/t^3→100. All correct.

MY OWN BUG, FOUND AND FIXED, DISCLOSED: my first `units()` tested `pgcd(a,m,q) == (1,)`, but my gcd is not monic-normalised, so a gcd of 2 was read as non-unit. This under-counted phi(m) at q=3 and q=5 only (at q=2 the only non-zero constant is 1, so the q=2 numbers — the entry's named falsification condition — were never affected). Fixed to `len(gcd) == 1`. All q=3 figures below are post-fix.

## 4. THE ENTRY'S NAMED FALSIFICATION CONDITION: q=2, m=t^2, n=10,11,12

Per-class delta, ordered pairs, irreducibles only (from `q2_full.txt`):

```
q=2 n=10  N_irr=99   N_pairs=196   phi(t^2)=2
  ORDER 1 fwd:  a=1      P= 34  E= 49.000  delta = -0.30612
                a=1+t    P= 40  E= 49.000  delta = -0.18367
  ORDER 2 rev:  a=1      P= 94  E= 49.000  delta = +0.91837
                a=1+t    P=100  E= 49.000  delta = +1.04082
q=2 n=11  N_irr=186  N_pairs=370   phi(t^2)=2
  ORDER 1 fwd:  a=1      P= 72  E= 92.500  delta = -0.22162
                a=1+t    P= 72  E= 92.500  delta = -0.22162
  ORDER 2 rev:  a=1      P=184  E= 92.500  delta = +0.98919
                a=1+t    P=184  E= 92.500  delta = +0.98919
q=2 n=12  N_irr=335  N_pairs=668   phi(t^2)=2     <-- the 4096-monic cell
  ORDER 1 fwd:  a=1      P=114  E=167.000  delta = -0.31737
                a=1+t    P=124  E=167.000  delta = -0.25749
  ORDER 2 rev:  a=1      P=328  E=167.000  delta = +0.96407
                a=1+t    P=338  E=167.000  delta = +1.02395
```

phi(t^2) − 1 = 1. Under ORDER 2 every class sits at +0.92 to +1.04. **Adversary #2's falsification condition is NOT met**: the value under order 2 is neither small nor negative, it is within 4% of the predicted +1.

## 5. Answers to the three questions, with printed numbers

### (1) Does the reverse-order claim hold, and is the limit phi(t^d) − 1? YES, exactly.

Direct structural check (`blocks.py`): counting maximal runs of constant residue mod t^d along ORDER 2 over ALL q^n monics —

```
q=2 d=1 n=11,12: runs=2  = q^d=2   CONTIGUOUS BLOCKS
q=2 d=2 n=11,12: runs=4  = q^d=4   CONTIGUOUS BLOCKS
q=2 d=3 n=11,12: runs=8  = q^d=8   CONTIGUOUS BLOCKS
q=3 d=1 n= 7, 8: runs=3  = q^d=3   CONTIGUOUS BLOCKS
q=3 d=2 n= 7, 8: runs=9  = q^d=9   CONTIGUOUS BLOCKS
q=3 d=3 n= 7, 8: runs=27 = q^d=27  CONTIGUOUS BLOCKS
```

The claim "q^d contiguous intervals on each of which the residue mod t^d is constant" is literally true, with runs = q^d exactly, no exceptions.

Convergence of mean delta under ORDER 2 (irreducibles) to phi(t^d) − 1:

```
q=2 m=t^2 (target 1):  n=8 +0.931034  n=9 +0.963636  n=10 +0.979592
                       n=11 +0.989189 n=12 +0.994012 n=13 +0.996820
   gap to target:      -0.068966 -0.036364 -0.020408 -0.010811 -0.005988 -0.003180
q=2 m=t^3 (target 3):  n=10 +2.877551 n=11 +2.935135 n=12 +2.964072 n=13 +2.980922
q=2 m=t   (target 0):  identically 0 at every n (phi(t)=1 at q=2 — contentless cell)
q=3 m=t   (target 1):  n=6 +0.982609 n=7 +0.993569 n=8 +0.997528
q=3 m=t^2 (target 5):  n=6 +4.739130 n=7 +4.903537 n=8 +4.962917
q=3 m=t^3 (target 17): n=6 +14.339130 n=7 +16.016077 n=8 +16.621755
```

The gap halves at each step in n at q=2 and falls by ~2.6x at q=3, i.e. as 1/N_irr ~ n·q^{-n}: **exponential in n**, as claimed.

STRONGER THAN CLAIMED (my own derivation, then checked): the mean is not merely asymptotic, it is an exact rational,
    mean delta(ORDER 2, m = t^d) = phi·(N − phi)/(N − 1) − 1,   N = #{monic irreducibles of degree n}.
Checked against the enumeration in 44 cells (q=2 d=1,2,3 n=5..13; q=3 d=1,2,3 n=4..8): MATCH to 1e-9 in 43 of 44. The single DIFFER is q=3, d=3, n=4, where N = 18 = phi(t^3) exactly, so the classes are not equinumerous and the closed form's uniformity step fails; delta there is still +3.235, climbing to 17. This is a boundary artefact of my formula, not a counter-example to the leg.

### (2) Does the FORWARD order show a signed under-representation at all? YES — delta is negative in every cell I ran.

Irreducibles, ORDER 1, mean over classes:

```
q=2 m=t^2:      n=10 -0.2449   n=11 -0.2216   n=12 -0.2874
q=2 m=t^3:      n=10 -0.4286   n=11 -0.4378   n=12 -0.5210
q=2 m=t^2+t+1:  n=10 -0.6327   n=11 -0.5135   n=12 -0.3443   (m coprime to t)
q=3 m=t:        n=6  -0.1130   n=7  -0.1511   n=8  -0.1422
q=3 m=t^2:      n=6  -0.7391   n=7  -0.5563   n=8  -0.4586
q=3 m=t^2+1:    n=6  -0.6522   n=7  -0.6141   n=8  -0.6143   (m coprime to t)
```

Every single per-class delta under ORDER 1 across all of these cells is negative (the per-class minimum/maximum bracket in `final.txt` never crosses zero under ORDER 1 except one cell, q=3 m=t^2+1 n=6, where one class hits +0.6696 on 230 pairs). So the phenomenon the candidate asked about — a signed under-representation of equal classes among order-adjacent irreducibles — EXISTS and is sizeable in F_q[t] under the forward order. This leg of the entry is not degenerate.

CALIBRATION I ADDED (not asked for, but it bears on what the forward number means), q=2, m=t^2, n=12, 200 trials each:
```
(a) random total order on the SAME 335 irreducibles: mean delta -0.00186, range [-0.1497, +0.1437]
(b) random 335-element subset of the 4096 monics, ORDER 1: mean -0.08338, range [-0.3421, +0.2857]
    (the irreducibles give -0.28743)
(c) random 335-element subset of the 4096 monics, ORDER 2: mean +0.98792, range [+0.9855, +0.9895]
    (the irreducibles give +0.99401)
```
Reading (my own): the forward-order deficit −0.287 is outside the random-ORDER null (a), so it is a real effect of the forward order and not of thinness alone; but it is INSIDE the random-SET null (b), so at q=2, n=12 the forward-order deficit is not yet separable from what any thin set of the same density does under that order. That is a caveat on limb 1's interpretation at the degrees reachable here, and it is new — neither adversary computed it.

### (3) Does the degeneracy depend on irreducibility? NO. The same limit over ALL monics.

```
ALL q^n monics, ORDER 2, m = t^2:
  q=2: n=10 +0.99609   n=11 +0.99804   n=12 +0.99902      (target phi−1 = 1)
  q=3: n=6  +4.93810   n=7  +4.97942   n=8  +4.99313      (target phi−1 = 5)
ALL monics, ORDER 2, m = t^3, q=2: n=10 +2.97652  n=11 +2.98827  n=12 +2.99414  (target 3)
```

The all-monics figures converge to the same phi(t^d) − 1 and do so FASTER than the irreducibles (larger N), exactly as "the derivation never uses irreducibility" predicts. The degeneracy is a fact about base-q positional notation, not about primes.

ADDITIONAL DEGENERACY NEITHER ADVERSARY RECORDED (my own finding): under ORDER 1 with t | m, the all-monics statistic is itself degenerate but in the opposite direction — at q=2 no two order-adjacent monics are both coprime to t, so N_pairs = 0 and delta is UNDEFINED (`nan`); at q=3 adjacent coprime pairs exist but never share a class, so delta = −1.000000 exactly in every cell. So BOTH declared orders are structurally degenerate on all monics when t | m; only the thinness of the irreducibles rescues the forward-order cell.

MINOR OVER-REACH IN THE LEG AS WRITTEN: adversary #2 states the limit is "phi(t^d) − 1 > 0" across the declared cells m = t, t^2, t^3. At q=2, m=t the limit is phi(t) − 1 = 0, and I measure delta identically 0 at every n from 3 to 13. The strict inequality fails on exactly that one cell of nine — which the entry's own Vagueness row (attack 5) already lists as contentless. Cosmetic; the leg does not depend on it.

## 6. The entry's one named unopened source

Cobb, Knox, Lopez, McDonald, Mitchell, "Distribution of constant terms of irreducible polynomials in Z_p[x]", NNTDM 25(4) (2019) 72–82. READ LEVEL: ABSTRACT ONLY (publisher landing page; PDF body not opened).

Abstract, verbatim, in consecutive segments as served:
1. "We obtain explicit formulas for the number of monic irreducible polynomials with prescribed constant term"
2. "and degree qk over a finite field."
3. "These formulas are derived from work done by Yucas."
4. "We show that the number of polynomials of a given constant term depends only on whether the constant term"
5. "is a residue in the underlying field."
6. "We further show that as k becomes large, the proportion of irreducible polynomials having each constant term"
7. "is asymptotically equal."
Keywords (verbatim): "Irreducible polynomials; Finite fields".

The fetch reports that the words "consecutive", "order", "ordering", "adjacent" and "pair" do not occur on the page. On an abstract-only read this is a one-point marginal count of irreducibles by prescribed constant term, with no order on monics, no adjacency, and no residue class modulo a fixed polynomial — structurally the same kind of object as the entry's P3 (Devin–Meng). It prints no delta and no equal-class adjacency rate. CAVEAT, stated per the rules: an abstract-only read cannot settle what the 11-page body contains, so I record this as "the abstract shows no adjacency statistic", not as "the paper contains none". It is, on this read, neither prior art for the candidate nor a publication of the degeneracy. The entry's novelty claim is untouched; the entry's own statement that this source "could only show the degeneracy is already published or that someone has computed delta" is borne out in the negative.

## 7. What this means for the verdict

**THE FATAL LEG STANDS, AND IT STANDS MORE FIRMLY THAN THE ENTRY RECORDS IT.** The entry nominated its own falsification condition — brute-force delta(a,a; t^2, n, 2) for n = 10, 11, 12 over the 4096 monics, "where a small or negative value under order 2 breaks the leg". I ran it. The values are +0.918 to +1.041, converging on phi(t^2) − 1 = 1 with the gap halving in n, and the same convergence holds at m = t^3, at q = 3 for d = 1, 2, 3, and over all monics as well as over the irreducibles. The block structure is exact (runs = q^d, no exceptions). I also found the leg's asymptotic is in fact an exact rational identity in N. Nothing in my numbers supports a Provisional re-grade on this leg.

Two things the entry should nevertheless now record, because they are new facts and they cut both ways:
- limb 1 is confirmed non-vacuous and the sign is confirmed NEGATIVE under the forward order, in every cell at q=2 and q=3, for m both divisible by and coprime to t — so "the first limb survives" is not a concession made on faith, it is now measured; but
- at the reachable degrees the forward-order deficit (−0.287 at q=2, n=12, m=t^2) lies inside the random-thin-subset null's range [−0.342, +0.286] while lying outside the random-order null's [−0.150, +0.144]. So the forward number is an effect of the ORDER, not yet demonstrably an effect of IRREDUCIBILITY, at q=2, n≤12. That weakens limb 1's claim to be about primes at small q, and strengthens attack 8's partial dissolution.

Also for the record: BOTH declared orders are degenerate over all monics when t | m (order 2 → phi−1; order 1 → undefined at q=2, exactly −1 at q=3). The degeneracy of the t | m cells is therefore broader than the single leg the rejection rests on.

Verdict: Rejected should stand on this leg. Legs B, C, D are unaffected by anything I ran; leg C (adversary #1's Cramér-model prediction that the forward-order delta is negative) is now empirically corroborated in sign by my tables, though I did not test its claimed leading order −(phi(m)−1)d/2 at order 1/n.
