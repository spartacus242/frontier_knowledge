# VERIFY-03-b — Pomerance Theorems 1.1 and 2.4 (Gate 2 Low leg, entry line 31 leg (ii))

Checker: fresh context, did not write the entry. I read the entry in full and did **not**
read either adversary log: the claim I was assigned lives in the entry itself (lines 9, 13,
31, 34), and the entry carries the citations.

## 0. Correction to my own brief

My brief told me to identify the paper "from the entry's citation (DOI plus first author plus
year plus title)". **The entry's citation carries no DOI, no year and no venue.** Entry line 12
item (2) gives only: `C. Pomerance, "The First Function and Its Iterates",
math.dartmouth.edu/~carlp/aliquot7.pdf`. So the brief is wrong about the record. I identified
the paper myself (§1) and that identification is a **citation repair the entry needs**, not a
check that the entry passed.

## 1. What I opened, by route and read level

| # | Route | Result |
|---|---|---|
| — | `curl -sSL https://math.dartmouth.edu/~carlp/aliquot7.pdf` | **FAILED**: `curl: (56) CONNECT tunnel failed, response 403` (tool-scoped proxy block). No local `pdftotext` extraction was therefore possible. |
| F1 | WebFetch `https://math.dartmouth.edu/~carlp/aliquot7.pdf` | **OPENED**. Title/author/footnote, Thm 1.1 + flanking sentences, Conj 2.3, Thm 2.4, the p. 6 sentence. |
| F2 | WebFetch same URL, targeted at §2 | **OPENED**. Definition of `A_k`, range of the Thm 2.4 sum, the complete paragraph holding the p. 6 sentence, β and its value, and the Catalan–Dickson / Guy–Selfridge sentences. |
| F3 | WebFetch same URL, raw continuous transcription of Conj 2.3 → end of §2 | **REFUSED to quote at length** ("I can't reproduce that section verbatim"), but returned a substantive summary that **independently corroborated** F2 on the definition of `A_k` and on the closing sentence. Per the rules I had already asked for ordered consecutive segments under ~125 characters in F2 and got them, so this is a fact about the third request, not about the document. |
| F4 | WebFetch `cambridge.org/core/books/connections-in-discrete-mathematics/first-function-and-its-iterates/3027B2FE76D7A78C3F4A78219BE863BA` (from search S1) | **OPENED**. Full bibliographic identity. |

**READ LEVEL: section read** — Sections 1 and 2 of the paper, through three WebFetch passes,
with text served by the fetch summariser rather than rendered raw by me. Not full text (I did
not read §§3+), and not abstract-only. Authenticity signals in the served text are strong and
consistent with a real PDF extraction: it carries the paper's own OCR/LaTeX breakage
(`p k n` for `p ‖ n`, a printed `mod n` where `mod m` is meant, `exp((log x) )` with the
epsilon dropped, `1 x X n≤x`), which a confabulation would not invent.

**Budget: 1 of 2 searches used, 4 of 4 fetches used — fetches exhausted.**

## 2. The paper, properly identified (F4)

Carl Pomerance, "The First Function and Its Iterates", **chapter 7** in *Connections in
Discrete Mathematics: A Celebration of the Work of Ron Graham*, eds. Steve Butler, Joshua
Cooper, Glenn Hurlbert, **Cambridge University Press, 2018, pp. 125–138**,
**DOI 10.1017/9781316650295.008**; online 25 May 2018. Dedication on p. 1 of the preprint:
"For Ron Graham on his 80th birthday." MSC 2010: 11N37, 11N64, 11A25. The Dartmouth PDF the
entry cites is the author's copy of this chapter; the entry's three claimed page numbers
(pp. 2, 3, 6) are preprint pages, not CUP pages.

## 3. What Theorem 1.1 actually establishes (F1, §1, p. 2)

Quoted verbatim, located immediately after the sentence "Our principal result is an extension
of the Bosma–Kane theorem to the next iterate.":

> "Theorem 1.1. The average value of log(s2(2n)/s(2n)) is asymptotically equal to the average
> value of log(s(2n)/2n). That is,"

with the display

> 1/x Σ_{2≤n≤x} log(s2(2n)/s(2n)) ∼ 1/x Σ_{1≤n≤x} log(s(2n)/2n) ∼ β, as x → ∞.

and, following it, "(The reason the first sum excludes n = 1 is that s2(2) = 0.)"

**Established:** over **even arguments 2n with n ≤ x** (seed-indexed, one row per seed, not per
iterate); for **k = 2 only**; **averaging = unweighted mean over seeds, asymptotic as
x → ∞**; **unconditional** (no hypothesis, and in particular **no conditioning on survival**).
The entry's quotation of this theorem at line 13 is **word-for-word correct**.

## 4. What Theorem 2.4 actually establishes (F1, F2, F3; §2, p. 5, proof p. 6)

> "Theorem 2.4. Assuming Conjecture 2.3, then for each integer k ≥ 2 there is a set Ak of
> asymptotic density 1 such that"
>
> 1/x Σ_{n≤x, n∈Ak} log(sk(n)/sk−1(n)) → β, as x → ∞.

> "Conjecture 2.3. If A is a set of natural numbers of asymptotic density 0, then s^{-1}(A)
> has asymptotic density 0."

**`A_k` is an arithmetic-regularity set, not a survival set.** From the proof (F2, confirmed
independently by F3): A is "the set of integers n such that for each m ≤ log2 n/(log3 n)" …
"2 there are at least 5 distinct primes p k n with p ≡ −1 (mod n)" [printed modulus is a typo
for m]; "If we also insist that members n of A satisfy ω(n) ≤ 3 log2 n, then A still has
asymptotic density 1."; and then "Let Ak be the part of A lying outside of each of these sets
s −1 j (B) so that Ak has density 1." — B being the complement of A. "However, if n ∈ Ak then
all of n, s(n), . . . , sk−1(n) are in A, so all of the ratios sj+1(n)/sj (n)" "are asymptotic
to each other."

**Established:** for **each fixed k ≥ 2** (k fixed *before* x → ∞); over a set **A_k of
asymptotic density 1** defined by prime-divisor congruences, a bound on ω(n), and removal of
the first k−1 s-preimages of A's complement; **averaging = unweighted mean with the 1/x
normalisation**, limit β; **conditional on Conjecture 2.3**. Two further facts worth recording:

- **No survival condition appears anywhere.** There is no `s_k(n) > 0` clause, no
  non-termination clause, no unboundedness clause. F3, asked separately, reached the same
  reading of `A_k`.
- **No parity restriction.** Theorem 1.1 runs over even arguments 2n; Theorem 2.4's sum runs
  over `n ∈ A_k` with no restriction to even n. The entry does not note this.

**Answer to the question I was set:** Theorems 1.1 and 2.4 give the mean of
log(s^k(n)/s^{k−1}(n)) **unconditionally (1.1) and on a density-1 set (2.4)**. Neither gives
it **conditional on survival**. The candidate's estimand is the conditional one.

## 5. The p. 6 sentence — LOCATED, and in its paragraph (F2)

The sentence the entry attributes to p. 6 **is there**, verbatim, at the **end of Section 2**,
after the proof of Theorem 2.4:

> "We do not have an analogue of Theorem 2.4 for log(sk(n)/sk−1(n)) since presumably the sum
> of these terms is principally supported on a set of n of density 0."

Its paragraph makes the referent unambiguous, and the paragraph is about the **full (unnormalised,
unrestricted) sum**, not the density-1 average:

> "In [3] the authors also study the full sum P 1<n≤x log(s(n)/n), showing that it is
> asymptotically −e−γx log2 x."
> "We can prove this for log(s2(n)/s(n)), with the proviso that n runs over composite numbers
> to avoid undefined summands."

followed by the sieve sketch ("one reduces to the case when p = P+(n) > x1/ log2 x, writes
n = pm", "This can be done asymptotically correctly using the fundamental lemma of the sieve,
see [12]."), and the parenthesis "(and so this is another case where the asymptotics are
dominated by those terms corresponding to a set of density 0)."

So what Pomerance declares unavailable is the **full-sum analogue for k ≥ 3** — he has it for
k = 2 over composite n — and the stated obstruction is that the sum's support is a density-0
set. **The entry's reading of what is open and what is closed is correct**: entry line 34 calls
open "the unrestricted average of log(s^k(n)/s^{k−1}(n)) over all n ≤ x for k ≥ 3 without the
density-1 restriction", and calls closed the fixed-k density-1 average modulo Conjecture 2.3.
Both halves match the document, and the entry's ellipsis in that quotation is faithful.

## 6. Other entry quotations from this paper that I could check

- Line 9, presupposition (2), "beta ~ -0.03 is negative", p. 2 — **CONFIRMED**: p. 2 reads
  "and that β ≈ −0.03 is negative."
- Line 13, "beta ~ -0.03 printed at p. 2 and p. 3" — **CONFIRMED**: p. 2 as above; p. 3
  "where β ≈ −0.03." The paper gives **no more precise value for β than ≈ −0.03**; the figure
  −0.0332594808010… the entry attributes to Chum et al. is not in this paper.
- Line 9, clause (7) — **CONFIRMED** on p. 2: "The evidence either for the Catalan–Dickson
  conjecture or the Guy–Selfridge counter conjecture is mixed." and "This may be interpreted as
  evidence in favor of Catalan–Dickson and against Guy–Selfridge." **One-word discrepancy,
  low confidence**: the entry writes "perhaps lending *some* support to Guy-Selfridge"; the
  served p. 2 text reads "perhaps lending support to Guy–Selfridge". Since the text was
  summariser-served I will not call this an error, only a string to re-check if it is ever
  load-bearing. It is not load-bearing here.

## 7. Mathematics I ran myself

The claim under test is about **quantifier and conditioning level**, which is checkable without
a further document. Script: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chk.py`.
Inputs are the Chum et al. Table 1 λ_k values and log μ **as printed in the entry at line 13**
— I did **not** open Chum et al., so these are entry-reported, and the arithmetic below is
**mine**:

```
k    lambda_k(2^37) [survivor-conditional]    lambda_k - log mu
 1        -0.03326                              -0.00000
 2        -0.03706                              -0.00380
 3        -0.01849                              +0.01477
 5        -0.00411                              +0.02915
 6        +0.00145                              +0.03471
10        +0.02339                              +0.05665
lambda_1 vs log mu: -0.03326 vs -0.033259481   diff -5.19e-07
sign change between k=5 and k=6: True
monotone nondecreasing from k=2 onward: True
separation at k=10: +0.05665 = 1.70x |beta|
```

**My reading of my own numbers.** At k = 1 the survivor-conditional mean agrees with β to
5.2e-07 — i.e. to the printed precision, because at k = 1 the survivor set is essentially all
even seeds. From k = 2 onward it separates monotonically, changes sign between k = 5 and k = 6,
and at k = 10 sits 0.0567 above β, which is 1.70 times |β| in magnitude and the opposite sign.
If those entry-reported numbers are right, then **the survival-conditional fixed-k drift is a
numerically different quantity from Pomerance's density-1 fixed-k drift, and the difference is
larger than β itself.** That is not a contradiction between the two results — the divergence
lives on a set of vanishing density, exactly the regime Pomerance's own closing sentence (§5)
flags as beyond his method. It is a demonstration that Theorem 2.4 does not reach the
candidate's estimand.

## 8. What this means for the entry's verdict

**Leg (ii) as worded at entry line 31 is overstated.** Line 31 says the Gate 2 Low grade rests
on "Pomerance's Theorems 1.1 and 2.4, which answer the fixed-k limb in the candidate's own
field and notation". The field and notation part is **right**: this is the s-map, the same
log-ratio statistic, the same β, and the candidate's k-indexing. The **"answer"** part is
right only for the *unconditional / density-1* fixed-k limb. Neither theorem conditions on
survival, and Pomerance says in the same section that the case whose support is a density-0
set is one he cannot do.

**The entry already knows this, inconsistently.** Line 13 states the gap accurately — "the
candidate differs only in conditioning on survival rather than arithmetic regularity, in
binning by iterate size rather than by seed bound, and in not fixing k before x → infinity".
Lines 13 and 31 cannot both stand as written; line 13 is the one that matches the document.

**Net effect on the rejection.** The Low grade is not thereby disturbed, because what leg (ii)
genuinely supplies is still enough for Gate 2: the candidate's fixed-k limb, in its
unconditional form, is a published theorem in the candidate's own field and notation, and the
candidate's framing of it as an open empirical matter is wrong at that level. But leg (ii)
**cannot carry the survival-conditional headline estimand on its own.** That burden sits
entirely on adversary 1's leg — Chum et al.'s Table 1 over B_k(X) = {n ≤ X even, s_k(n) > 0},
which is survivor-conditional by construction — and I did not open Chum et al., so I neither
confirm nor disturb it. Leg (ii) should be re-worded, not deleted.

**One thing leg (ii) adds that the entry does not currently claim.** Pomerance's closing
sentence is affirmative evidence *for* the entry's own line 17/24 position that the formal
uncensored limb is the genuine opening: the author of the nearest analytic result states in
print that the density-0-supported case is outside his reach. The entry uses that sentence only
in its routing note (line 34). It belongs in the fecundity and reason-for-silence rows too.
