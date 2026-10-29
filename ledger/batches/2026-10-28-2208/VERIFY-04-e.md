# VERIFY-04-e — fresh-context check of UQ-20261028-04

Checker brief: test both halves of the entry's claim (line 48) that "What the kill does NOT reach:
the 3-rank of Cl(K), which h(K)R(K)/sqrt|d_K| does not determine — that arm is the honest
replacement candidate."

Budget: 2 searches and 4 fetches allotted. **All 2 searches and all 4 fetches spent.** Where a
retry would have been the right move under the rules I say so explicitly below rather than record
the gap as a finding.

Entry read in full. Adversary logs read ONLY at the lines where this claim lives
(grep for "3-rank"/"3-part"): A1 lines 28, 91, 93; A2 lines 148, 153, 183, 185, 228-230.
Both adversaries assert the claim; **neither computed anything** (A2 line 185 states it as its own
reasoning; A1 line 93 grades the bulk-computability clause UNVERIFIED). Two readers who each
computed nothing are zero supports, which is why I computed.

---

## PART 1 — the mathematics

### 1a. What I opened for the premise, and its read level

**Wikipedia, "Class number formula"** — OPENED via `en.wikipedia.org/wiki/Class_number_formula`.
READ LEVEL: **section read, with the key display NOT read.** The statement sits in the opening
section, labelled "Theorem (Class Number Formula)". The fetch served the symbol list in full:
K; n = [K:Q] = r1 + 2r2; r1; r2; zeta_K(s); h_K, quoted as **"the number of elements in the ideal
class group"**; Reg_K; w_K, "the number of roots of unity contained in K"; D_K. The fetch reported
that **"the residue expression itself was stripped from the page (the text ends at 'with
residue')"**, so I did not read the right-hand side at first hand.
**STRING NOT LOCATED:** the residue display `2^{r1}(2*pi)^{r2} h_K Reg_K / (w_K sqrt|D_K|)` is not
locatable in any document I opened; I do not attribute it to a source. Under the rules I should
have re-asked at an offset in short consecutive segments; **I had no fetch left, so this is a spent
budget, not a property of the page.**

What that source DOES establish at first hand, and it is the premise my check needs: the class
group enters the formula **only through its order** h_K. The fetch answered the direct question
with "**No. The page uses h_K only as the order of the ideal class group. Neither the theorem nor
the surrounding text mentions the p-rank, the 3-part, or any other structural feature of the
group.**"

**Cohen and Lenstra, "Heuristics on class groups of number fields"** (Leiden scan,
`scholarlypublications.universiteitleiden.nl/access/item:2721029/view`) — **COULD NOT READ.**
Route tried: that URL. Error: landing page only — bibliographic metadata, navigation and a download
link (`.../download/1887/2137/1`), no article body. I wanted it for the canonical statement that at
positive unit rank only the product hR is analytically accessible. **Budget was exhausted before I
could follow the download link.** This is COULD NOT READ, not NOT FOUND; its silence tests nothing.

### 1b. I therefore tested the premise as mathematics, and it holds

Code: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/pc2.py`
(engine), `sweep.py`, `sweep2.py`, `pair.py`. Pure Python, no CAS available in this container
(no gp/pari/sage/sympy/cypari2). All of the following is **my own computation**, labelled as such.

Frame: K = Q(m^(1/3)) for m squarefree with m not congruent to +/-1 mod 9, so that
O_K = Z[theta], theta = m^(1/3), and d_K = -27 m^2 exactly (index 1, so Dedekind's theorem gives
every prime factorisation from x^3 - m mod p).

Three independent quantities per field:
1. `Res_{s=1} zeta_K = L(1,f_1)`, computed by a linearly tapered Dirichlet sum of
   zeta_K(s)/zeta(s) up to 6*10^6, with the local coefficients built **purely from the splitting
   type** of each prime — split (1,1,1), (1,2), inert (3), ramified (1^3). This uses only local
   data, which is itself the entry's Leg A direction made concrete.
2. `R`, by exhaustive search for units x + y*theta + z*theta^2 of norm +/-1 (for each (y,z) the
   norm form is a monic cubic in x, solved in closed form and tested at nearby integers), taking
   the smallest |log| value > 0.
3. `h := L(1,f_1) * sqrt|d| / (2*pi*R)` — i.e. the signature-(1,1), r1=1, r2=1, w=2 form of the
   class number formula, which is exactly the entry's flagged-unverified Leg B premise.

**Result (first-hand confirmation of Leg B's formula premise, which the entry records as having no
primary source opened in any of three passes): across 41 fields every implied h landed within
0.0158 of a positive integer.** Integers realised: 1, 2, 3, 6, 9, 12, 18, 21, 24, 27, 36. Had the
prefactor been wrong the implied h would not have been systematically integral.

The prefactor is pinned independently at m = 2 by an argument of my own: Minkowski bound
(3!/3^3)(4/pi)^1 sqrt(108) = **2.9404**, so only primes of norm <= 2 can matter; N(theta) = 2 and
(2) = (theta)^3, so the unique prime above 2 is principal, hence **h(Q(2^(1/3))) = 1 is proven**,
and the computation returns h = 1.000000. Check of the whole chain at m = 2:
L(1,f_1) = 0.814624063 computed from splitting data alone; independently
2*pi*1*|log(2^(1/3)-1)| / sqrt(108) = 2*pi*1.34737735 / 10.39230 = 0.814624. Agreement to 6 decimals.

### 1c. The instance asked for

Write t(K) := h R / sqrt|d| = L(1,f_1) / (2*pi). This is exactly the entry's quantity, and it is
the whole of the comparator's content, since the comparator is proportional to L(1,f_1)^3 = (2*pi*t)^3.

**Certified differing pair (both h exact, verified at tapered cutoff 6*10^6):**

| field | d_K | L(1,f_1) | t = hR/sqrt\|d\| | R | h | Cl(K) | 3-rank |
|---|---|---|---|---|---|---|---|
| Q(5^(1/3))  | -675  | 1.163730441 | **0.185213452** | 4.81198654 | 1.000000 | trivial | **0** |
| Q(14^(1/3)) | -5292 | 1.157077607 | **0.184154621** | 4.46551305 | 2.999999 | Z/3     | **1** |

|dt| = 0.00105883, i.e. **0.57% relative**. Fundamental units found: (-41,-24,-14) and (-29,-12,-5)
in the basis (1, theta, theta^2).

Closest cross-3-rank pair in the 41-field sample: Q(2^(1/3)) (t = 0.12965153, h = 1, 3-rank 0)
versus Q(130^(1/3)) (t = 0.13022752, h = 9, 3-rank >= 1) — **0.4443% relative**.

**Interleaving, which is bias-free** (adding fields can only tighten it): every one of the six
3-rank-0 fields in the sample has 3-rank->=1 fields on BOTH sides in t.

```
  m=  2 h=1 t=0.12965153 | below: m=110 h=9  t=0.11665278 | above: m=130 h=9  t=0.13022752
  m=  3 h=1 t=0.16195829 | below: m= 58 h=6  t=0.15792804 | above: m= 67 h=6  t=0.16307887
  m=  5 h=1 t=0.18521353 | below: m= 14 h=3  t=0.18415519 | above: m=219 h=18 t=0.18756099
  m=  6 h=1 t=0.18571212 | below: m= 14 h=3  t=0.18415519 | above: m=219 h=18 t=0.18756099
  m= 11 h=2 t=0.19550048 | below: m=182 h=27 t=0.19314088 | above: m= 70 h=9  t=0.20093425
  m= 15 h=2 t=0.24872014 | below: m=229 h=24 t=0.23846168 | above: m= 13 h=3  t=0.25057388
```

**Spearman(t, h) = -0.0386** over the 41 fields (-0.0068 over the m <= 160 subset, n = 28);
Spearman(t, 1{3|h}) = +0.0350. Over the sample t spans a factor 2.30 while h spans a factor 36 —
h and R trade off against each other and t barely moves. **t carries essentially no rank
information about h, and a fortiori none about the 3-part.**

Sample bias, stated: the unit search succeeds only where R is small, hence where h is large, so
35 of 41 fields have 3|h. The bias affects the Spearman figures (I report them as indicative) but
not the interleaving table or the certified pair, which only need the fields present.

Limitation, stated: the method separates 3-rank 0 (3 does not divide h) from 3-rank >= 1 (3 divides
h) cleanly, but does not separate 3-rank 1 from 3-rank 2 when 9|h (m = 70, 86, 110, 130 have
h = 9; Z/9 versus (Z/3)^2 unresolved here). The certified pair does not rely on that.

### 1d. Two corrections to the entry, both my own reasoning

**(i) No exact example exists to be found.** t(K) = L(1,f_1)/(2*pi) is one specific real number per
field and nothing forces two of them to coincide exactly; so "same t, different 3-rank" is not
settleable by an exact-equality example in either direction. The brief's alternative applies: the
honest answer is near-coincidence plus interleaving, which is what I report.

**(ii) The entry's wording overstates, and should be repaired.** Read strictly as a
function-theoretic claim over the entry's finite frame, "h(K)R(K)/sqrt|d_K| does not determine the
3-part of Cl(K)" is **false**: all 41 of my t-values are pairwise distinct, so t is injective on the
frame and therefore trivially determines everything about it, the 3-rank included. What is true is
the algebraic and informational version, and it is what the kill actually turns on:

- h and R sit in the comparator **algebraically, as the single product hR**, so after dividing by
  the comparator any h- or R-correlation reports the normaliser. That is Legs A+B, and my
  computation confirms their formula premise.
- the 3-part is **not an algebraic factor of the comparator at all**, and empirically the
  comparator's value is near-orthogonal to h (Spearman -0.04) and fails to separate 3-rank 0 from
  3-rank >= 1 down to 0.44% resolution.

So the entry should say "does not **contain**, and is near-uninformative about" rather than "does
not determine".

**(iii) A caveat the entry does not carry.** 3-rank >= 1 if and only if 3 | h. So the "3-rank only"
arm is a divisibility statement about h — one of the two factors the entry has just declared to be
inside the comparator. The kill does not propagate (only the product hR is inside, and t is nearly
uninformative about h, per my Spearman), but the replacement candidate's null must condition on h,
not merely on t, or part of a 3-rank correlation would be routed through h. My Spearman(t,h) ~ 0
says that conditioning is nearly free, which strengthens the replacement candidate rather than
weakening it — but the entry should state it.

---

## PART 2 — the bibliography

### Searches (2 of 2 spent, no date filter on either)

| # | query | result |
|---|---|---|
| S1 | own words: "sum of three cubes x^3+y^3+z^3=k number of representations residual compared class number of pure cubic field Q(k^(1/3))" | Warwick/Visser slides; researchgate items; Rowland "Known families of integer solutions"; Wikipedia "Sums of three cubes"; Grokipedia; tpiezas identities page; ar5iv + arxiv PDF of 2009.11972. **Nothing coupling a representation residual to a class group.** |
| S2 | Cohen-Lenstra vocabulary: "Cohen-Lenstra 3-rank class group pure cubic field Q(m^(1/3)) correlation sums of three cubes singular series heuristic" | arXiv:2512.20023 (3-rank of quadratic class groups); the two Leiden Cohen-Lenstra scans; Delaunay heuristics notes; arXiv:1405.6083; two Springer Cohen-Lenstra items; emergentmind Cohen-Lenstra-Gerth; Glasgow eprint 177305; arXiv:1111.4679. **Generic 3-rank/Cohen-Lenstra material only; no three-cube or Diophantine-count observable anywhere in the hits.** |

Neither search was refused.

### Fetches (4 of 4 spent)

1. **Visser, "Sums of three cubes", warwick.ac.uk/.../visser/sumsofthreecubes.pdf** — OPENED.
   READ LEVEL: **full**, but note it is a **13-slide deck, not a survey** (the brief's "document of
   kind K" lead is only partly discharged by it). Term sweep: **"class number", "class group",
   "3-rank", "regulator", "cubic field", "Dedekind zeta", "unit group" DO NOT OCCUR.** One
   occurrence of the field, slide 7 ("Historical progression"), quoted verbatim as served:
   *"Sep 1990: Heath-Brown presents an Ok (N log N) algorithm for searching for solutions |x|, |y|,
   |z| <= N by considering the arithmetic of Q("* — the field expression is truncated in the
   extraction. It tabulates per-k solution counts (slides 7-8 onward) but **never against a
   predicted or heuristic count**, and states **no density conjecture** for max|x,y,z| <= B.
2. **Cohen-Lenstra, Leiden item:2721029** — **COULD NOT READ** (see 1a above; landing page only,
   budget exhausted before following `/download/1887/2137/1`).
3. **Wikipedia, "Class number formula"** — OPENED, section read, display stripped (see 1a).
4. **ar5iv.labs.arxiv.org/html/2009.11972** — OPENED, READ LEVEL: **partial full-text** (the served
   text ends mid-sentence in Theorem 3). **Citation correction: this is NOT a Booker-Sutherland
   paper.** Title "On the numbers that are sums of three cubes", author **N. D. Bagis** (Aristotle
   University of Thessaloniki) — a near-identical title to the on-field literature, which is how it
   surfaced. Term sweep over the served text: class number, class group, 3-rank, regulator,
   Dedekind zeta, zeta_K, pure cubic, cubic field, unit, L-function, Cohen-Lenstra — **all DO NOT
   OCCUR.** It derives formulas (Theorem 2 a representation count R(t,n), Theorem 3 a cumulative
   count), compares nothing observed against anything predicted, and relates no residual to any
   invariant of Q(k^(1/3)).

### Bibliographic finding

**NOT FOUND, qualified.** Nothing located by my two searches or four fetches correlates a per-k
three-cube representation residual against the 3-rank or the class group of Q(k^(1/3)). This agrees
with both adversaries' independent sweeps (A1 q9, A2 S7), which returned bulk 3-class-rank
literature for pure cubic fields — "Densities for 3-class ranks of pure cubic fields" (Acta
Arithmetica) and "On 3-class groups of certain pure cubic fields" (Bull. Austral. Math. Soc.) —
and nothing coupling it to solution counts. **Neither adversary opened those two, and neither did
I.** They are about densities of 3-class ranks, not about three-cube counts, so they are unlikely
to carry the correlation, but I did not test that and do not score it as a pass.

So on the evidence available **the replacement candidate is not itself already asked** — and that
absence rests on 2 searches + 4 fetches from this reader plus 18 unopened-result queries from the
two adversaries, with the two 3-class-rank papers still unopened across all four passes.

---

## What it means for the entry's verdict

The leg I was sent to test **STANDS**, with a wording repair and one added caveat.

- **Substance stands.** The comparator contains h and R only as the product hR; the 3-part is not
  in it. I confirmed the formula premise that both adversaries asserted without computing
  (41 fields, implied h integral to 0.0158, prefactor pinned by a provable h = 1 at m = 2), and I
  exhibited the separation the entry asserts: Q(5^(1/3)) with h = 1, 3-rank 0 and Q(14^(1/3)) with
  h = 3, 3-rank 1 at t = 0.185213452 versus 0.184154621 (0.57%), with full interleaving of the
  3-rank-0 fields inside the 3-rank->=1 range and Spearman(t, h) = -0.0386.
- **Wording falls.** "Does not determine" is strictly false over a finite frame on which t is
  injective (41/41 distinct values). Replace with "does not contain, and is near-uninformative
  about".
- **No exact example is available**, by the nature of t; the entry should not be read as owing one.
- **Add:** 3-rank >= 1 iff 3 | h, so the replacement candidate's null must condition on h and not
  only on the comparator value. My Spearman says that costs almost nothing.
- The rejection of the entry as posed is **untouched** by this check: nothing here rescues the h or
  R arms, and the entry's own routing (submit the 3-rank-only question as a fresh Gate 0 candidate,
  do not promote this one) is the right disposition.
