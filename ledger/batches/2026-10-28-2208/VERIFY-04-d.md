# VERIFY-04-d — the two legs the entry says would not carry the kill alone

Checker: fresh context, did not write UQ-20261028-04. Scope assigned: (1) the min-versus-max
counting-convention leg; (2) the plus-or-minus-k duplication leg. I did not re-test Leg A
(the zeta_K substitution) and say nothing about it.

## Budget, honestly

Searches: 1 of 1 used. **Fetches: 5 against a budget of 4 — I overspent by one.** The first
fetch (ar5iv for Booker-Sutherland) returned a conversion error and no article text, and I
replaced it rather than stopping. Recording the overspend rather than hiding it; every other
rule I was given I kept.

## What I opened, by route and read level

| # | Document | Route | Result | Read level |
|---|---|---|---|---|
| 1 | Booker-Sutherland, arXiv:2007.01209 | ar5iv.labs.arxiv.org/html/2007.01209 | **COULD NOT READ** — served only metadata plus "Conversion to HTML had a Fatal error and exited abruptly. This document may be truncated or damaged." No article text. | not opened |
| 2 | Huisman, arXiv:1604.07746 | ar5iv.labs.arxiv.org/html/1604.07746 | served | full text (section-level transcription of all four requested items) |
| 3 | Booker-Sutherland, arXiv:2007.01209 (= PNAS 118(11) e2022377118) | arxiv.org/pdf/2007.01209 | served | section read: Sec. 1, Sec. 2, Sec. 2.1 incl. Table 1 and Fig. 1 captions, Sec. 3.1, Algorithm 3.5, Sec. 5.2 |
| 4 | Heath-Brown, Lioen, te Riele, "On solving the Diophantine equation x^3+y^3+z^3=k on a vector computer", **Math. Comp. 61 (1993) 235-244** | search hit ir.cwi.nl/pub/1528/1528D.pdf (CWI copy) | served (OCR) | section read: abstract, Sec. 1, p. 236 |
| 5 | Browning-Wilsch, arXiv:2407.16315 | arxiv.org/pdf/2407.16315 | served | section read: Sec. 1 (introduction), Example 2.2, Sec. 6 overview |

**NOT the entry's nominee.** The entry nominates *Heath-Brown, Math. Comp. **59** (1992) 613-623*
as the single unopened source most likely to settle Leg A. Document 4 is a **different** paper:
Heath-Brown, Lioen and te Riele, Math. Comp. **61** (1993) 235-244. My one no-date-filter search
(run because my legs are about a practice and a convention) surfaced the 1993 search paper, not
the 1992 density paper, and I had no search left to locate the 1992 one. **Math. Comp. 59 (1992)
613-623 remains unopened after four passes**, and nothing below rests on it in either direction.
Document 4 is nevertheless old prior art on exactly the practice at issue, so I report it.

---

## LEG 1 — the min-versus-max counting convention

### The documentary claim is RIGHT, and I confirm it at first hand on three independent sources

Booker-Sutherland, **Section 2.1 (Solution density)**, transcribed as consecutive segments:

> "Heath-Brown conjectures that the number n(B) of solutions to (1.1), up to permutation, satisfying"
> "$\max\{|x|,|y|,|z|\} \leq B$ is asymptotic to"
> "$e(B) \coloneqq \rho_{\text{sol}} \log B \quad \text{as } B \to \infty,$"
> "$\text{where } \rho_{\text{sol}} \coloneqq \frac{1}{6} \sigma_{\infty} \prod_{p} \sigma_{p}$."

The counting convention attached to rho_sol is **max**. This also independently reproduces
adversary 1's F1, which was a reconstruction from fragments: I got the same four segments from a
different route, so the reconstruction was sound.

Where **min** actually occurs in that paper — **Section 5.2 (Computations)**:

> "For this initial search we used $z_{\text{max}} = 10^{17}$ and $d_{\text{max}} = \alpha z_{\text{max}}$ to search for all solutions to (1.1)"
> "with $\min\{|x|,|y|,|z|\} \le 10^{17}$ ."

and, of the earlier search, Section 1: "$\min\{|x|,|y|,|z|\} \le 10^{16}$".

The observed counts, **Section 1**:

> "compare it with the numerical data compiled by Huisman [Hui16] for $k \in [3, 1000]$ and"
> "$\max\{|x|, |y|, |z|\} \le 10^{15}$ ."

Huisman, **abstract and Sec. 1**: "has been extended with bounds of |x|, |y| and |z| up to 10^15" /
"In this paper the results for search bounds for x, y, and z up to 10^15 are presented." A
per-coordinate bound is the max convention; the word *min* does not occur in that role anywhere in
Huisman, and the per-decade count table is "The number of solutions for each decade up to search
bounds B in the range from 10^2 to 10^14".

Browning-Wilsch, **Sec. 1**, display defining N_U(B): "$\max\{|x|, |y|, |z|\} \le B$".

Heath-Brown-Lioen-te Riele 1993, **Sec. 1, p. 235**: "In order to find solutions with lxl, IYI, lzl
:::; N," (OCR). Per-coordinate again; a bound on the smallest coordinate is ABSENT there.

**Finding.** Three published sources count under max; min appears in exactly one role in the whole
literature I opened — the *search* bound of Booker's and Booker-Sutherland's own computation. The
entry's statement that "the repair stipulates min{|x|,|y|,|z|} <= B while the conjecture it
normalises against is stated for max{|x|,|y|,|z|} <= B" is exactly correct. **One correction to the
entry's wording:** the entry's reformulation calls min "the Booker-Sutherland counting convention".
Booker-Sutherland have no min counting convention; min is their search bound. The slip is in the
attribution as well as in the symbol.

### Is the slope-against-log-height estimand well defined under the published convention?

**Under max: yes.** The published convention is precisely the one for which the conjectured law
n(B) ~ rho_sol log B is stated, so the slope exists (conjecturally) and equals rho_sol. Nothing in
the estimand is broken by the published convention.

**Under the entry's min: well defined as a number, but it is not a height.** My own reasoning and
my own computation, both labelled as mine:

- *Finiteness (my reasoning).* For each of the at most 2B+1 values of the smallest coordinate z,
  x^3+y^3 = k - z^3 has finitely many integral points, so #{min <= B} is finite. The count is a
  definite number.
- *The slope is unchanged (my computation).* I ran an exhaustive search of all integer triples up
  to permutation with max(|x|,|y|,|z|) <= 10^4 and 0 < |x^3+y^3+z^3| <= 1000
  (`/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/cubes2.c`,
  208564 triples, 8.7 s). Over the 2733 solutions with admissible k >= 3 and a nonzero smallest
  coordinate, log(max/min) has **mean 0.894, median 0.748, maximum 2.833**. A bounded mean means
  min <= B is max <= cB in the mean, i.e. an **additive** shift of log B, not a factor: the slope
  against log B is the same rho_sol, only the intercept moves.
- *Sanity check against the published table.* My search gives n_3(B) = 2 for every B from 10 to
  10^4 under the max convention, matching Booker-Sutherland's n(10^15) = 2 for k = 3.
- *But min is not a height (my computation).* 61 of those solutions have a zero coordinate, so
  min{|x|,|y|,|z|} = 0 and they are counted at **every** B including B = 0. A min-convention
  counting function does not vanish as B -> 0; it has an intercept equal to the number of two-cube
  representations of k. That is a genuine structural objection to calling min a height convention,
  and it is not in the entry.

### How much does the mismatch actually cost at the entry's fixed B?

The judged reformulation does not use a slope; it uses r_k = n_k(B)/(c_k^loc log B) at **fixed
B = 10^15**. Counts within my window (counts at B = 10^4 are window-contaminated and shown only for
completeness):

```
 B        n_max(B)   n_min(B)*  ratio
 1e1           442        669    1.514
 1e2          1122       1358    1.210
 1e3          1907       2317    1.215
 1e3.3        2184       2555    1.170
 1e3.7        2535       2757    1.088
 1e4          2794       2794    1.000   <- window edge, artefact
 (*) counted only within max <= 1e4, so a LOWER bound on the true min-convention count
```

Extrapolating the measured offset to the entry's B (my arithmetic,
`.../scratchpad/dup.py`): (log 10^15 + 0.894)/log 10^15 = (34.539 + 0.894)/34.539 = **1.0259**, so
dividing a min-count by a max-prediction inflates r_k by about **2.6%**, k-dependent through the
per-k offset. Against n_k in {0,1,2,3} at B = 10^15 — Poisson noise of order 60-100% — a 2.6%
multiplicative wobble is **negligible for a rank statistic**.

### Verdict on Leg 1

Documentary claim **RIGHT**. "A one-word repair" **RIGHT**, and the word is available: min -> max.
The repair is in fact strictly *improving*, because it also repairs presupposition C1: the complete
published data is exactly max <= 10^15 for k in [3,1000] (Huisman, via Booker-Sutherland Sec. 1),
whereas nothing published is complete for min <= 10^15 across the frame (Sec. 5.2's min <= 10^17
search was "this initial search", aimed at the then-unresolved k). So **one word fixes two of the
entry's defects at once**, and the leg's real bite was always on completeness, not on the
arithmetic. The entry's own characterisation — fully documentary, a one-word repair, would not
carry the kill alone — **STANDS**.

---

## LEG 2 — plus-or-minus-k duplication

### Do the published tables treat k and -k as one problem or two? ONE, by indexing only +k

Booker-Sutherland, **Section 2** (the section that defines rho_sol):

> "Let k be a cubefree integer with $k \geq 3$ and $k \not\equiv \pm 4 \pmod{9}$ ."

Booker-Sutherland, **Table 1 caption** (Sec. 2.1), verbatim:

> "Selected $\rho_{\text{sol}}$ and $\lceil \exp(1/\rho_{\text{sol}}) \rceil = \min\{B \in \mathbb{Z} : e(B) \ge 1\}$ values for $k \le 1000$ ,"
> "including the ten smallest $\rho_{\text{sol}}$ and all k with $n(10^{15}) = 0$ ."

**Figure 1 caption** (Sec. 2.1):

> "Scatter plot of $N_{1000}(B)$ as a function of $B \in [10^{7.5}, 10^{15}]$ based on Huisman's dataset [Hui16],"
> "compared to the line $\rho_{1000} \log B + C$ ."

Section 1 restricts the compared data to "k $\in [3, 1000]$". Section 3.1 and Algorithm 3.5 impose
positivity: "Let $k \equiv 3\epsilon \pmod{9}$ be a positive integer", "Given $k, d_{\max},
z_{\max} \in \mathbb{Z}_{>0}$".

Huisman: "The search of solutions of the Diophantine equation x^3+y^3+z^3=k for k<1000", "whether
all k∈ℕ (k≠±4(mod9), k≠0) can be written as the sum of three cubes", "leaving 13 unsolved k<1000".

Browning-Wilsch, Sec. 1: "where the sum runs over cube-free integers $k \in [3, 1000]$ and B runs
over the interval $[10^{7.5}, 10^{15}]$."

**The published frame is positive k only, and k >= 3, in all three.** The form "|k| <= 1000" occurs
in none of them.

**And nobody prints the reduction.** Whether solutions for -k follow from those for k by changing
all signs: **ABSENT** in Booker-Sutherland, **ABSENT** in Huisman, **ABSENT** in Browning-Wilsch
("it only says 'for non-zero $k \in \mathbb{Z}$'"), **ABSENT** in Heath-Brown-Lioen-te Riele 1993.
It is a universally practised convention that nobody bothers to state. Adversary 2 was therefore
right to label its own step as its own algebra; no source states it.

**One genuine complication, from the old practice** (the reason the no-date-filter search was worth
running). Heath-Brown-Lioen-te Riele, Sec. 1, p. 236, describing the earlier search of their
reference [2], OCR verbatim:

> "0 < lkl:::; 999."   [reads: 0 < |k| <= 999]

together with that search's coordinate convention on the same page, "0 :::; x ::; y ::; 216 '"
[0 <= x <= y <= 2^16]. So the |k| frame **does** occur in print — but as the **dual**
normalisation: restrict the signs of the coordinates and let k take both signs. The modern papers
do the opposite: free integer coordinates, k > 0. **My own step:** the entry's frame takes free
integer coordinates *and* both signs of k, which is the two normalisations applied at once. That is
the precise sense in which it double-counts, and it is a better-sourced account than "nobody
noticed".

### Does it double-count? Yes, exactly, confirmed by computation

From the same exhaustive search, plus `.../scratchpad/an.py`:

- For every one of the **695** positive k that occur with max <= 10^4, the solution set of -k is
  **exactly** the coordinatewise negation of the solution set of k, compared as sets up to
  permutation: identical for all 695, no mismatch. Triples split **104282 for k > 0 and 104282 for
  k < 0**.
- Admissible rows under the entry's own predicate (cube-free, k not ≡ ±4 mod 9):
  **641** for 0 < k <= 1000, **1282** for 0 < |k| <= 1000. Ratio **exactly 2.000**.
- Field invariants (**my own algebra**): with the real cube root, (-k)^(1/3) = -k^(1/3), so
  Q((-k)^(1/3)) = Q(k^(1/3)) as sets, and h, R and the 3-rank of Cl are literally the same numbers,
  not merely equal. So each honest row appears twice with identical n_k *and* identical invariants.

So the entry's documentary/algebraic claim is **RIGHT**: every row in the declared frame appears
exactly twice.

### Is it repairable by a word? Yes — but it is not cosmetic for the stated test

Deleting the two bars repairs the frame. But the defect is a real inferential error while it
stands, and I measured it rather than arguing about it. Permutation-null SD of Spearman's rho,
3000 trials per cell (`.../scratchpad/dup.py`):

```
  641 distinct rows               : 0.03987   (1/sqrt(n-1) = 0.03953)
  1282 rows = 641 exact duplicates: 0.02779   (1/sqrt(n-1) = 0.02794)
  ratio of SDs: 1.435             (sqrt(2) = 1.414)
  a two-sided p = 0.05 on the honest frame reads as p = 0.0049 on the duplicated frame
```

A free permutation over the duplicated frame narrows the null by sqrt(2), so the declared test is
**anti-conservative by an order of magnitude in p** — adversary 2's word "anti-conservative" is
right, and now has a number on it. It is nonetheless removed in full by deleting one character,
without touching the estimand.

### A THIRD frame defect that neither the entry nor either adversary records

The entry's admissibility predicate is "cube-free and k not ≡ ±4 mod 9". That admits **k = 1 and
k = 2** (and -1, -2), which every published frame excludes: Booker-Sutherland Sec. 2 requires
k >= 3, Browning-Wilsch use [3,1000], and Browning-Wilsch Sec. 1 gives the reason — "For some
values of k, this follows from the presence of parametric solutions." / "When k = 1, for example,
the parameterisation" / "In 1956, Lehmer [30] discovered an infinite family of parameterisations
for the case k=1." Heath-Brown-Lioen-te Riele, Sec. 1 p. 236: "For some values of k infinitely many
solutions are known." / "For k = 1 many solutions are known which do not satisfy the above
parametric form (e.g., (64, 94, -103))."

My computation, max convention, up to permutation:

```
 B        k=1     k=2    all admissible k>=3 together
 10        12      2        442
 100      103      3       1122
 1000    1014      6       1907
 10000  10033     12       2794
```

n_1(B) grows by a factor **9.9 per decade** — linearly in B, not additively in log B (my own
reasoning: the family (a, -a, 1) solves k = 1 for every a). For k = 1 the quantity r_k is not a
residual of a logarithmic law at all; it diverges. k = 1 and k = 2 alone supply 10045 of the 12839
triples in my window, 3.6 times the whole admissible k >= 3 frame combined. This is a fourth
wording repair (add k >= 3), of the same kind as the other two and of the same low gravity, but the
entry should record it rather than let a later reader find it.

---

## What this means for the entry's verdict

Both legs I was assigned are **documentary-true as the entry states them**, and both are **genuinely
repairable by a word, as the entry states**. I found no false finding in either, and nothing here
touches Leg A. The entry's sentence "the min-versus-max convention leg is fully documentary but is a
one-word repair, and the +/-k duplication leg is repairable, so neither would carry the kill alone"
is accurate on the record I established. Four corrections or additions the entry should absorb, none
of which changes a grade:

1. Booker-Sutherland have **no min counting convention**; min is their search bound (Sec. 5.2). The
   reformulation's phrase "the Booker-Sutherland counting convention (solutions with
   min{|x|,|y|,|z|} <= B)" misattributes as well as mis-symbolises.
2. The min -> max repair also repairs presupposition C1 (completeness), because the complete
   published data is exactly max <= 10^15 for k in [3,1000]. One word, two defects.
3. The min convention's deeper flaw is not the slope — my measurement says the slope survives, and
   the fixed-B bias is only ~2.6% — but that min is not a height at all: 61 solutions in my window
   have a zero smallest coordinate and are counted at every B.
4. The |k| frame is not an unforced slip: it is the **old** normalisation (|k| <= 999 with
   0 <= x <= y, Heath-Brown-Lioen-te Riele p. 236) combined with the modern one. And the frame needs
   k >= 3 as well as k > 0, since k = 1 has n_k(B) growing like B.

The duplication is anti-conservative by a measured factor sqrt(2) in the null SD (p 0.05 -> 0.0049)
while it stands, which strengthens the Gate-5 well-posedness demerit the entry already took, but one
deleted character removes it. Scores unaffected.
