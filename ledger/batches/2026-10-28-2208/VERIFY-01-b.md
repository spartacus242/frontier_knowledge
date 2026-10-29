# VERIFY-01-b — fresh-context check of UQ-20261028-01
## Leg tested: adversary #1's reverse-order figure for m = t, against adversary #2's general formula, BY COMPUTATION

Checker: fresh context, did not write the entry. Budget: 0 searches allowed and 0 used; 1 fetch
allowed and 1 used. Everything below marked **[MINE]** is my own derivation or my own code output.

---

## 1. What I opened, with route and read level

| Item | Route | Read level |
|---|---|---|
| `UQ-20261028-01-entry.md` | local file | **full text** |
| `UQ-20261028-01-adversary-1.md` | local file, grep + targeted read of clause C3, the Cramér paragraph (§ before the table) and attack rows 1, 4, 5, and the promotion conditions | **section read** (the clauses carrying the leg) |
| `UQ-20261028-01-adversary-2.md` | local file, §7 read in full (lines 320–400) plus attack row 1 | **section read** (§7 is where the leg lives) |
| Cobb, Knox, Lopez, McDonald, Mitchell, *Notes on Number Theory and Discrete Mathematics* 25(4) (2019) 72–82 | `https://nntdm.net/volume-25-2019/number-4/72-82/` — one WebFetch, HTTP 200, served the journal landing page with title, authors, abstract, keywords | **abstract only** (PDF body NOT opened — fetch budget spent; see §6) |

I did **not** open LO-S (PNAS 113), Zhang–Han, Sawin–Shusterman, Keating–Roditty-Gershon or the OEIS
pages. Nothing below rests on them.

---

## 2. The two claims, restated from the entry's and the logs' own words

**Adversary #1, clause C3** (`UQ-20261028-01-adversary-1.md`, bullet **C3**, verbatim):

> "For m = t it fails outright: the class mod t is the constant term a_0, which in the reversed order
> is the MOST significant digit, so the reversed order is sorted BY class and consecutive irreducibles
> coprime to t are in the same class except at the q-2 class boundaries; delta(a,a; t, n, q) under the
> reversed order is then approximately q-2 (zero for q = 2 where phi(t) = 1) by construction."

**Adversary #2, §7** (`UQ-20261028-01-adversary-2.md`, §7, the displayed equation):

> "**delta(a, a; t^d, n, q) → φ(t^d) − 1 > 0, exponentially fast in n.**"
> with the stated structure: "Order 2 therefore sorts the q^n monics of degree n into **q^d contiguous
> intervals of length q^{n−d}, each constant in class**" and "Consecutive irreducibles therefore lie in
> **different** classes for at most φ(t^d) − 1 of the ≈ q^n/n − 1 adjacent pairs."

Both strings located as quoted. The entry's gloss at line 39 ("adversary #1 derived the same
degeneracy independently for m = t (delta approx q-2 = phi(t)-1)") is a faithful report of C3.

**The entry's estimand, used verbatim** (line 5): `delta(a,a;m,n,q) = P(a,a)/(N_pairs/phi(m)^2) - 1`.
I read `P(a,a)` as the count of order-adjacent irreducible pairs with both members in class `a`, and
`N_pairs = N − 1` where `N` = number of monic irreducibles of degree `n`. Order 1 = constant term
least significant, position `p1 = Σ_{i<n} a_i q^i`. Order 2 = leading coefficient least significant,
`p2 = Σ_{i<n} a_i q^{n−1−i}`. Both as the entry declares them.

---

## 3. The computation [MINE]

Code: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/delta.py`,
`.../delta2.py`, `.../d3.py`. Method: exhaustive numpy sieve of monic irreducibles by degree
(composites of degree d marked as g·h over all irreducible g of degree e ≤ d/2 and all monic h of
degree d−e), then exact sort by position and exact adjacent-pair counting. Irreducible counts
reproduce `(1/n)Σ_{e|n} μ(e) q^{n/e}` at every degree reached, which is the sieve's own check:
q=2 → 2, 1, 2, 3, 6, 9, 18, 30, 56, 99, 186, 335, 630, 1161, 2182, 4080, 7710, 14532, 27594, 52377;
q=3 → 3, 3, 8, 18, 48, 116, 312, 810, 2184, 5880, 16104, 44220, 122640; q=5 → 5, 10, 40, 150, 624,
2580, 11160, 48750, 217000. Reached n ≤ 20 (q=2), n ≤ 13 (q=3), n ≤ 9 (q=5) — above the brief's
floor of n=8 (q=3) and n=6 (q=5).

### 3a. m = t, both declared orders, mean over a ∈ (F_q[t]/t)^×

| q | n | order 1 (forward) | order 2 (reverse) | A1 prediction for order 2 |
|---|---|---|---|---|
| 2 | 5…20 | 0.00000 throughout | 0.00000 throughout | q−2 = 0 |
| 3 | 7 | −0.15113 | +0.99357 | q−2 = **1** |
| 3 | 9 | −0.15437 | +0.99908 | |
| 3 | 11 | −0.11756 | +0.99988 | |
| 3 | 13 | −0.10945 | **+0.99998** | |
| 5 | 6 | −0.30206 | +2.99535 | q−2 = **3** |
| 5 | 7 | −0.31786 | +2.99892 | |
| 5 | 8 | −0.28507 | +2.99975 | |
| 5 | 9 | −0.26256 | **+2.99994** | |

### 3b. Adversary #2's general formula, d = 1, 2, 3 — order-2 mean at the top n reached

| q | m = t (pred 0 / 1 / 3) | m = t² (pred 1 / 5 / 19) | m = t³ (pred 3 / 17 / 99) |
|---|---|---|---|
| 2, n=20 | 0.00000 | **+0.99996** | **+2.99977** |
| 3, n=13 | **+0.99998** | **+4.99976** | **+16.99750** |
| 5, n=9 | **+2.99994** | **+18.99825** | **+98.95438** |

Every cell converges to `φ(t^d) − 1` from below in n, monotonically once n > d+1.

### 3c. The mechanism, tested at the structural level, not just the aggregate [MINE]

I counted the number of **cross-class** adjacent pairs under order 2 directly. A2's structure claims
the irreducibles fall into exactly `φ(t^d)` contiguous class-constant blocks, so that count should be
exactly `φ(t^d) − 1`. Over all 27 cells (q ∈ {2,3,5} × d ∈ {1,2,3} × top three n):

> **#cross-class adjacent pairs = φ(t^d) − 1 exactly, in every one of the 27 cells, and the number of
> non-empty class blocks = φ(t^d) in every one.** (e.g. q=5, d=3, n=9: 217000 irreducibles, exactly
> **99** cross-class adjacent pairs out of 216999, in exactly 100 blocks.)

So the degeneracy is not merely numerically near `φ−1`; the block structure A2 asserts is literally
present, down to the single boundary pair.

### 3d. "Exponentially fast in n" — confirmed and sharpened [MINE]

The shortfall `(φ(m) − 1) − delta_mean` obeys, to four significant figures,

> **shortfall = φ(m)·(φ(m) − 1)·n / q^n**   [MINE, inferred from the data and then checked]

`shortfall · q^n / n` = 2.0002, 2.0031, 2.0003 at q=3, m=t, n=11,12,13 (φ(φ−1)=2) and 11.998, 12.022,
12.001 at q=5, m=t, n=7,8,9 (φ(φ−1)=12). Exponential in n, with a linear-in-n correction. A2's
"exponentially fast" is right; the rate is `q^{-n}`, not merely "some exponential".

### 3e. Adversary #2's own named falsification test, run verbatim

The entry (line 39) says A2 "names its own falsification condition — brute-force delta(a,a;t^2,n,2)
for n = 10,11,12 over 4096 monics, where a small or negative value under order 2 breaks the leg" and
that this is "the 4096-monic computation above, which nobody in this batch ran". **I ran it.**

| n | #monics | #irr | order 2, delta(1,1) | order 2, delta(3,3) |
|---|---|---|---|---|
| 10 | 1024 | 99 | +0.918367 | +1.040816 |
| 11 | 2048 | 186 | +0.989189 | +0.989189 |
| 12 | **4096** | 335 | +0.964072 | +1.023952 |

Against the prediction `φ(t²) − 1 = +1`. Not small, not negative. **The named falsification test
passes; the leg is not broken by the check its own author nominated.**

---

## 4. Direct answers to the three questions in my brief

**(i) Is adversary #1's figure right?** **Yes.** `delta(a,a; t, n, q)` under order 2 → `q − 2` at
q=3 (0.99998 at n=13, target 1) and q=5 (2.99994 at n=9, target 3). At q=2 the figure 0 is also
right, but for a reason A1 himself gives and which is *not* the sorting: `φ(t) = 1`, there is a single
unit class, and `delta ≡ 0` under **every** order. That cell carries no information either way, and
the entry already books it as contentless (attack 5).

**(ii) Does it agree with adversary #2's general formula at d = 1?** **Yes, identically.**
`φ(t^1) − 1 = (q−1) − 1 = q − 2`. The two statements are the same statement. And A2's formula holds
at d = 2 and d = 3 as well (§3b), which A1 did not compute.

**(iii) Same mechanism or two different ones?** **One mechanism, stated at two levels of generality
— not two mechanisms.** Both say: under order 2 the class mod `t^d` is the *d* most significant
base-q digits of the position, so the order sorts the irreducibles into `φ(t^d)` contiguous
class-constant blocks and all but `φ(t^d) − 1` adjacent pairs are same-class. A1 states exactly this
for d=1 ("the class mod t is the constant term a_0, which in the reversed order is the MOST
significant digit, so the reversed order is sorted BY class"); A2 states it for general d. My §3c
confirms that this *is* the mechanism operating, not merely a correct prediction.

One presentational wrinkle in A1, recorded for accuracy and **not** an error in his number: C3 states
the number of class boundaries (`q − 2`) and then states `delta ≈ q − 2` in the same sentence, with
the normalisation step (`P(a,a)/(N_pairs/φ²) → φ`, hence `delta → φ − 1`) never displayed. The count
of boundary pairs and the limit of delta both equal `φ − 1`, for the shared reason that there are `φ`
blocks, but they are two different quantities; C3 reads as if one were the other. The figure is right
by either route.

**Consequence for the entry's bookkeeping.** The entry's line 39 calls these "two independent
derivations rather than two readings of one document", and claims "**two supports** and one check".
The independence is real (A1 did not see A2's log). But they are not two independent *grounds* —
they are the same identity derived twice, so the entry should not count them as two mechanisms
corroborating each other. This is now moot: the ground has been upgraded from derivation to
computation.

---

## 5. Two further findings from the same computation, both bearing on the entry [MINE]

### 5a. Leg C (A1's Cramér prediction) has the right sign and order and the WRONG constant — i.e. the excess the entry calls the non-trivial content is visibly there

A1 predicts `delta_Cramér ≈ −(φ(m)−1)·ρ/2` with `ρ ≈ (q/(q−1))/n`, i.e. −0.75/n at q=3, m=t and
−1.875/n at q=5, m=t. Forward order, m=t:

| q=3 | n=7 | n=9 | n=11 | n=13 |
|---|---|---|---|---|
| observed delta | −0.15113 | −0.15437 | −0.11756 | −0.10945 |
| n·delta | −1.058 | −1.389 | −1.293 | −1.423 |
| observed/predicted | 1.411 | 1.852 | 1.724 | **1.897** |

| q=5 | n=6 | n=7 | n=8 | n=9 |
|---|---|---|---|---|
| observed/predicted | 0.967 | 1.187 | 1.216 | **1.260** |

Sign: correct everywhere. Leading 1/n order: roughly correct. Constant: under-predicted by a factor
that **drifts upward** in n (1.41 → 1.90 at q=3; 0.97 → 1.26 at q=5), consistent with a slowly
growing secondary factor of the LO-S `log log x → log n` type that A2 conjectured in §7 and declined
to rest on. **There is a real excess over the correlation-free null**, which is the one quantity both
adversaries agree is not derivable in a page (A1's promotion condition 2; A2's "what remains").
This is a point in the candidate's favour on the surviving first limb, and it has now been measured.

### 5b. NEW: the FORWARD order is also pre-decided on the large-q^d cells, which the entry books only against the reverse order

The entry's attack-5 row mentions "degenerate cells (t | m under the reverse order)" and "tiny n where
classes may be empty and delta = -1 trivially". The computation shows something sharper and aimed at
the limb the entry says *survives*. Forward order, class = position mod `q^d`, so same-class adjacency
requires a position gap that is a nonzero multiple of `q^d`, while the mean position gap between
order-adjacent irreducibles of degree n is ≈ n. Where `q^d ≫ n`, there are **no** same-class adjacent
pairs at all:

| q | m | n range | #same-class adjacent pairs, forward order | delta |
|---|---|---|---|---|
| 5 | t³ (q^d = 125) | **4, 5, 6, 7, 8, 9** | **0, 0, 0, 0, 0, 0** | **−1.00000 throughout** |
| 5 | t² (q^d = 25) | 3, 4, 5 | 0, 0, 0 | −1.00000 |
| 3 | t³ (q^d = 27) | 4, 5, 6, 7 | 0, 0, 0, 0 | −1.00000 |

At q=5, m=t³ the mean gap is 4.17 … 9.00 against a required 125, and the entry's own feasibility note
(presupposition 4) caps q=5 at **n ≈ 10**. So the (q=5, m=t³) forward-order cell returns `delta = −1`
for a reason with nothing to do with irreducibility — it is a fact about `q^d` versus the mean gap —
across *essentially its entire declared range*. The same holds for (q=5, m=t²) and (q=3, m=t³) at the
low end of their ranges. **The "one structured order is informative" half of the repair is therefore
also partly pre-decided on the declared t^d cells**, by a mirror image of A2's own mechanism. Neither
adversary states this. It does not create a new kill — the entry is already Rejected on this leg —
but it means the surviving first limb is narrower than the entry records: the declared index set's
t^d cells are contentless at both ends, not just under order 2.

### 5c. Off the t^d cells the comparison is NOT pre-decided, but at reachable n it is in the noise

Control: m = t+1, coprime to t, where A1's C3 condition says the degeneracy should vanish. It does —
`f mod (t+1) = f(−1)` depends on all digits, and neither order sorts by class.

| q | n | order 1 | order 2 | difference | Poisson noise floor on the difference |
|---|---|---|---|---|---|
| 3 | 11 | −0.12563 | −0.15308 | −0.02745 | ±0.0081 |
| 3 | 12 | −0.11893 | −0.12766 | −0.00873 | ±0.0081 |
| 3 | 13 | −0.11206 | −0.13011 | −0.01805 | ±0.0081 |
| 5 | 7 | −0.35765 | −0.35156 | +0.00609 | ±0.0121 |
| 5 | 8 | −0.32741 | −0.30739 | +0.02002 | ±0.0121 |
| 5 | 9 | −0.29006 | −0.29025 | −0.00018 | ±0.0121 |

Non-monotone, sign-inconsistent across q, and at or barely above the sampling floor. So the repair the
entry declines to make (restrict the reverse-order limb to m coprime to t) is genuinely *not* settled a
priori — but at the n the entry's own feasibility note permits, it also yields **no detectable
order-dependence signal**. Note also that at q=2, m=t+1 has φ=1 and is contentless.

---

## 6. The nominated unopened source — OPENED, and it is not what the log's snippet suggested

The entry (line 39) nominates exactly one unopened document: "The single unopened source most likely
to settle the fatal leg: Cobb, Knox, Lopez, McDonald and Mitchell, *Notes on Number Theory and
Discrete Mathematics* 25(4) (2019) 72-82, nntdm.net/volume-25-2019/number-4/72-82/ — returned to
adversary #1 on a snippet match to 'consecutive irreducible polynomials' plus 'same class'". Rule
followed: a lead nominated by kind is a work item, so I spent my one fetch there.

Route: `https://nntdm.net/volume-25-2019/number-4/72-82/`, one WebFetch, served. **Read level: abstract
only** — title, author list, abstract and keywords as served on the landing page. The PDF body was
not in the served content and I had no fetch left to retrieve it, so I assert nothing about the
interior.

Title, verbatim: **"Distribution of constant terms of irreducible polynomials in ℤ_p[x]"**. Authors:
Sarah C. Cobb, Michelle L. Knox, Marcos Lopez, Terry McDonald, Patrick Mitchell. Keywords:
"Irreducible polynomials; Finite fields". Abstract, verbatim in order: *"We obtain explicit formulas
for the number of monic irreducible polynomials with prescribed constant term and degree q^k over a
finite field. These formulas are derived from work done by Yucas. We show that the number of
polynomials of a given constant term depends only on whether the constant term is a residue in the
underlying field. We further show that as k becomes large, the proportion of irreducible polynomials
having each constant term is asymptotically equal."*

Findings, at abstract-only read level:
- It is about F_q[x], not integer primes. Correct arena.
- **No order on monic polynomials, no notion of consecutive or adjacent irreducibles, anywhere in the
  title, abstract or keywords.** The phrase "consecutive irreducible polynomials" that put it in A1's
  log does not appear in the served text; on the evidence I have, that snippet match was a **false
  positive**.
- It is a **one-point marginal count** — monic irreducibles by prescribed constant term, after Yucas,
  with equidistribution as k grows. Structurally the same category as the entry's P3 (Devin–Meng):
  "a one-point marginal statistic over single polynomials with no notion of adjacency". It does not
  print `delta`, and it does not contain the order-2 degeneracy.
- **STRING NOT LOCATED**: "consecutive irreducible polynomials" and "same class", in the served
  landing-page text. I do not reattribute them to any other source.

So the entry's characterisation of this item as "the only unopened item in any log whose snippet
matched the candidate's own phrase combination" stands as a description of the *snippet*, but the
document behind it is a prescribed-constant-term counting paper. The entry's statement at line 22 —
"No opened source anywhere in the three logs prints any value of delta(a,a;m,n,q) or of any
function-field equal-class adjacency rate" — survives my fetch, now with one more source opened.

---

## 7. What this means for the entry's verdict

**The leg I was asked to test STANDS, and its evidential status has changed from derived to measured.**

1. **A1's figure is right** (q=3: 0.99998 vs 1; q=5: 2.99994 vs 3; q=2: 0, vacuously).
2. **It agrees with A2's general formula at d=1 exactly**, and A2's formula also holds at d=2, 3 over
   all three q.
3. **The two derivations describe one mechanism, not two** — A2's is the general-d version of A1's
   d=1 argument — and §3c confirms the mechanism itself (exactly `φ(t^d) − 1` cross-class adjacent
   pairs, exactly `φ(t^d)` contiguous blocks, in all 27 cells). **They do not disagree anywhere.**
4. **A2's own nominated falsification test has now been run and it passes** (§3e). The entry's
   candidly recorded vulnerability — "THIS REJECTION RESTS ON SOMETHING NOBODY HAS MEASURED" and
   "what would actually break the leg is the 4096-monic computation above, which nobody in this batch
   ran" — is discharged. It has been run; the leg holds.

**Amendments the entry should take:**
- Line 39: replace "two supports and one check" with: two derivations of **one** identity, plus an
  independent exhaustive computation (this check) that confirms the limit, the block structure and the
  `q^{-n}` convergence rate, and that passes A2's own named falsification test. Strike the
  "nobody has measured" vulnerability — it is now measured. The LEDGER.md rule that an unsourced
  technical leg is Partial at best no longer needs the "displayed elementary derivation" exemption:
  the leg is computed.
- Add my §5b: the forward-order limb is **also** pre-decided (`delta ≡ −1`, zero same-class adjacent
  pairs) on (q=5, m=t³) across its whole declared n-range, and at the low end of (q=5, m=t²) and
  (q=3, m=t³), by a mirror of the same position-to-residue mechanism. This belongs in attack 5
  (vagueness / contentless cells) and narrows the limb the entry says survives.
- Record §5a as a point in the candidate's favour that is now evidence rather than hope: the forward-
  order excess over A1's Cramér null is real and drifting upward in n (ratio 1.41 → 1.90 at q=3), so
  the one limb both adversaries agree is not derivable in a page is measurable at reachable n.
- Record §5c: off the t^d cells the two orders differ, but at the entry's own feasible n the
  difference sits at the sampling floor.
- Line 39's nominated source is now opened (abstract only) and is a prescribed-constant-term counting
  paper with no adjacency notion; the snippet match appears to have been a false positive. The claim
  that no opened source prints `delta` survives.

**Nothing I found refutes any part of the entry.** The Rejected status and the single load-bearing leg
are confirmed on the strongest available ground.
