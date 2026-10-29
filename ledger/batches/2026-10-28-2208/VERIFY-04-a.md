# VERIFY-04-a — fresh-context check of UQ-20261028-04 (Leg A, the dissolution kill)

Checker: fresh context, did not write the entry. Read the entry in full; read the adversary logs
ONLY by grepping them for the retrieval route (see "Routes"), not for their claims or labels.
Budget used: 2 web searches allowed / 1 spent; 6 fetches allowed / 3 spent. Budget did NOT run out.

## Document identification (from the entry's own citations, not from a log label)

PRIOR 1 in the entry = Booker, A. R. and Sutherland, A. V., "On a question of Mordell",
PNAS 118(11) e2022377118 (2021), DOI 10.1073/pnas.2022377118, arXiv:2007.01209.

## Routes tried, and read level

1. `curl https://arxiv.org/abs/2007.01209` and `curl https://ar5iv.labs.arxiv.org/html/2007.01209`
   via Bash — BOTH FAILED, identically: `curl: (56) CONNECT tunnel failed, response 403`,
   0 bytes. This is a fact about the agent proxy for raw curl, not about arXiv or the document.
2. `WebFetch https://arxiv.org/pdf/2007.01209` — **SUCCEEDED, twice** (two prompts against the
   same URL). Route taken from the adversary logs' URL list (the only thing I read them for;
   both logs name `https://arxiv.org/pdf/2007.01209`).
   **READ LEVEL: SECTION READ — Section 2 ("Density computations"), subsection 2.1
   ("Solution density"), served verbatim in ordered sub-125-character segments as requested.**
   Not an abstract-only read. I did not read Sections 1, 3, 4, 5 or the tables.
3. `WebSearch` (no date filter) for Heath-Brown, Math. Comp. 59 (1992) 613-623 — the entry's
   nominated "single unopened source most likely to settle it", i.e. a work item of kind K.
   Returned no openable publisher copy (no ams.org article page, no DOI landing page) — this is
   now the FOURTH independent failure to locate it (record, A1, A2, me).
4. `WebFetch https://cr.yp.to/bib/1992/heathbrown.tex` (from result 3) — SUCCEEDED.
   **READ LEVEL: METADATA ONLY.** It pins the identification and nothing more:
   > `\by D. R. Heath-Brown` / `\paper The density of zeros of forms for which weak approximation fails`
   > / `\jour Mathematics of Computation` / `\vol 59` / `\pages 613--623`
   "The page contains no MR number, URL, or DOI." **HB92 = COULD NOT READ (full text), NOT
   "not found": it exists, is correctly cited, and no open route to its text was located.**
   Its silence has still never been tested and grounds nothing here in either direction.
   (Its title is on-point — weak approximation is exactly the local-global gap — but a title is
   metadata and I draw no finding from it.)

## The four items under check — all CONFIRMED, with quotation and location

All four sit in **Section 2, subsection 2.1 "Solution density"** of arXiv:2007.01209.

**(1) Definition of rho_sol — CONFIRMED verbatim.**
> "e(B) := \rho_{\text{sol}} \log B \quad \text{as } B \to \infty, \qquad
> \text{where } \rho_{\text{sol}} := \frac{1}{6} \sigma_{\infty} \prod_{p} \sigma_{p}."

Location: Sec. 2.1, following the statement of the Heath-Brown conjecture. Exactly
(1/6) · sigma_infinity · prod_p sigma_p, as the entry says.

**(2) Equation (2.2) — CONFIRMED verbatim, with one refinement that STRENGTHENS the entry.**
> "(2.2)  \prod_{p} \sigma_{p} = (1 + O(X^{-2} \log X)) L(1, f_1)^{3} L(2, f_2) L(2, f_1)^{-6}
> \zeta(2)^{-6} L(2, (\tfrac{\cdot}{3}))^{-3} \prod_{p \le X} r_p."

Introduced by: "Under the generalized Riemann hypothesis (GRH), for large X we have".
Preceded by: "Since -a_p c_p(k) is the coefficient of p^{-s} in the Rankin-Selberg L-function
L(s, f_1 \boxtimes f_2)," / "we expect square-root cancellation in the product \prod_p r_p."

So YES: (2.2) does express the product of local densities with L(1,f_1)^3 as its only s=1 factor.
**Refinement, as my own reading:** the entry says "proportionally to L(1,f_1)^3". True, but the
remaining factors are not all k-independent — **L(2,f_1)^{-6} also depends on K**. f_2 is attached
to F = Q(sqrt(-3)), not to K ("there is a holomorphic newform f_2 of weight 2 and level
|Disc(F)| N(3 o_F) = 27 such that L(s,f_2) = L(s - 1/2, \chi)"), so f_2, zeta(2), L(2,(·/3)) are
k-independent. Hence zeta_K enters the comparator TWICE, at s=1 to the third power and at s=2 to
the power -6. The entry understates the K-dependence; it does not overstate it.

**(3) Definition of f_1 and K — CONFIRMED verbatim.**
> "Define K = \mathbb{Q}(\sqrt[3]{k}) and F = \mathbb{Q}(\sqrt{-3}), and let o_K and o_F be their
> respective rings of integers."
> "First, let f_1 be the modular form of weight 1 and level |\operatorname{Disc}(K)| such that"
> "\zeta_K(s) = \zeta(s) L(s, f_1)."

**(4) ~18 digits for all cube-free k up to 1000 — CONFIRMED verbatim, immediately after (2.2).**
> "Applying (2.2) with X = 10^9 allows us to compute the solution densities \rho_{\rm sol} to
> roughly 18 digits of precision for all cubefree k \leq 1000."

Small citation correction: the paper writes "cubefree k \leq 1000", not "|k| <= 1000"; the entry's
"all cube-free k up to 1000" is faithful.

## Two facts I established that the entry does not state, and that matter for fairness

**(a) The sigma_p really ARE purely local, by definition.** Sec. 2.1 defines
> "\sigma_p := \lim_{e \to \infty} \frac{\#\{(x,y,z) \pmod{p^e} : x^3+y^3+z^3 \equiv k
> \pmod{p^e}\}}{p^{2e}}"
with closed forms credited verbatim: **"Then, as calculated by Heath-Brown [HB92], we have"**
followed by the three-case formula for p ∤ 3k, p | k (p ≠ 3), p = 3. And r_p is defined as the
residual local ratio: "r_p := \sigma_p / [ L_p(1,f_1)^3 L_p(2,f_2) L_p(2,f_1)^{-6}
\zeta_p(2)^{-6} L_p(2,(\tfrac{\cdot}{3}))^{-3} ]".

So the presupposition "a purely local per-k prediction EXISTS" is TRUE, and the kill is not that
the sigma_p are secretly global. **The kill is about the comparator's VALUE:** the product of these
purely local densities is, as a theorem under GRH printed as (2.2), a cubed zeta_K quantity of K
times k-independent factors, L(2,f_1)^{-6}, and the residual prod r_p. This also settles the
entry's own "suggested first step" without needing HB92: B-S cite HB92 **for the local sigma_p
closed forms**, and the product evaluation through L(1,f_1) is B-S's own display. HB92 cannot
make (2.2) not be in B-S. The nominated lead is therefore no longer load-bearing — which I
establish from the citing sentence, not from HB92's unread silence.

**(b) "class number", "regulator", "class group" do not occur.** My Sec. 2 fetch, asked directly:
"None of these phrases appear in the text." Consistent with the entry's body claim. (Caveat: this
is the summariser's report over the fetched document, and my own read level is section-level for
Sec. 2 only, so I record it as corroboration, not as a whole-paper term sweep I performed.)

## The step nobody had computed — now computed. MY OWN DERIVATION AND MY OWN CODE.

The entry records as its own vulnerability that Leg B — "h and R sit in the comparator to the
third power" — is "unverified in both directions" and that "nobody has evaluated
rho_sol |d_K|^{3/2} / (h(K) R(K))^3 numerically for a single k". I closed the algebraic half of
that gap at first hand. **Every line below is my own reasoning and my own arithmetic, derived in
this session, not quoted from any document.**

My derivation: from (3), zeta_K(s) = zeta(s) L(s,f_1). zeta has a simple pole at s=1 with
residue 1 and L(s,f_1) (weight-1 newform) is holomorphic at s=1, so
**L(1,f_1) = Res_{s=1} zeta_K(s)**. For K = Q(k^(1/3)) with k not a cube, x^3 - k has exactly one
real root, so the signature is (1,1) (r_1 = 1, r_2 = 1), K has a real embedding so w = 2, and the
analytic class number formula gives
**Res_{s=1} zeta_K = 2^{r_1}(2 pi)^{r_2} h R / (w sqrt|d_K|) = 2 pi h(K) R(K) / sqrt|d_K|**,
hence **L(1,f_1)^3 = (2 pi)^3 (h R)^3 / |d_K|^{3/2}**.

I then tested that numerically rather than arguing it. No PARI/GP, sympy or mpmath is installed
here, so I wrote it in pure Python (`-I`):
`/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/res2.py`
and `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/fin.py`.
Method: build the Dedekind-zeta ideal-counting function of K by a multiplicative sieve to
X = 10^6 using pure-cubic splitting rules (p | k or p = 3: totally ramified; p = 2 mod 3: one
degree-1 and one degree-2 prime; p = 1 mod 3: split completely iff k is a cubic residue mod p,
else inert), restricted to k != +-1 mod 9 so that d_K = -27(ab)^2 and 3 = P^3; estimate
Res = lim N(x)/x by least squares on N(x)/x against x^{-1/3}; get R(K) by brute-force search for
the fundamental unit via N(a + b t + c t^2) = a^3 + k b^3 + k^2 c^3 - 3kabc = +-1; then output
h_pred = Res * sqrt|d_K| / (2 pi R).

**First attempt was WRONG and I caught it**: my sieve re-read indices already written at lower
prime powers. I added a self-test — forcing every local factor to (1 - p^{-s})^{-1} must give
a_n = 1 for all n — which printed `#n with a_n != 1 : 0` only after the fix. Numbers below are
post-fix.

| k | d_K | R(K) (my search) | Res_num(zeta_K) | 2 pi h R / sqrt\|d_K\| | ratio | h_pred |
|---|---|---|---|---|---|---|
| 2 | -108 | 1.347377 | 0.814332 | 0.814624 (h=1) | 0.999642 | **0.9996** |
| 3 | -243 | 2.524681 | 1.017145 | 1.017614 (h=1) | 0.999539 | **0.9995** |
| 5 | -675 | 4.811987 | 1.164114 | 1.163731 (h=1) | 1.000330 | **1.0003** |
| 6 | -972 | 5.789932 | 1.166582 | 1.166864 (h=1) | 0.999758 | **0.9998** |
| 7 | -1323 | 2.441056 | 1.264755 | 1.265025 (h=3) | 0.999787 | **2.9994** |
| 11 | -3267 | 5.587207 | 1.228141 | 1.228372 (h=2) | 0.999812 | **1.9996** |

h_pred lands on the integers 1, 1, 1, 1, 3, 2 to four significant figures with no input class
number — a self-validating test, since a wrong constant (pi instead of 2 pi, or w = 6) would push
h_pred off the integers by that factor. **The identity L(1,f_1) = 2 pi h(K) R(K) / sqrt|d_K| for
pure cubic fields is CONFIRMED numerically**, and therefore
L(1,f_1)^3 = (2 pi)^3 (h R)^3 / |d_K|^{3/2}: cubed, as the entry asserts.
Cubed values for comparison: L(1,f_1)^3 = 0.540013 / 1.052322 / 1.577562 / 1.587617 / 2.023109 /
1.852442 for k = 2 / 3 / 5 / 6 / 7 / 11, against (2 pi)^3 (hR)^3 / |d_K|^{3/2} = 0.540594 /
1.053779 / 1.576004 / 1.588768 / 2.024402 / 1.853490.

I also checked that the OTHER factor of rho_sol carries no k at all. The printed
sigma_infinity = 4 * int_1^inf (t^3+1)^{-2/3} dt = (2/3) Gamma(1/3)^2 / Gamma(2/3); my numeric
integral (substituting t = 1/u to land on [0,1]) gives **3.5332775006** against the closed form
**3.5332775006**, difference **7.99e-15**. sigma_infinity contains no k. **Therefore the entire
k-dependence of rho_sol sits in prod_p sigma_p, i.e. in (2.2), i.e. in zeta_K of K and prod r_p.**

What I did NOT compute, and the entry's vulnerability that accordingly SURVIVES: I did not
evaluate rho_sol itself for any k, did not reproduce any published rho_sol value (e.g. k = 3:
0.061052), and did not check the convergence or size of the residual prod_p r_p. So "how much of
rho_sol's k-variation is (hR)^3 versus prod r_p" remains unmeasured — the (hR)^3 factor is present
exactly, but its SHARE of the variation is unquantified.

## The question the kill turns on

> Does the "purely local" comparator the candidate wants to divide out already have a value that
> is a cubed Dedekind-zeta quantity of the very field whose invariants the residual is to be
> correlated against?

**YES — document-only, section read, confirmed at first hand.** The comparator is
rho_sol = (1/6) sigma_infinity prod_p sigma_p; sigma_infinity is k-free; and prod_p sigma_p is
printed in (2.2) as L(1,f_1)^3 · L(2,f_1)^{-6} · (k-free factors) · prod_{p<=X} r_p, with f_1
defined by zeta_K(s) = zeta(s) L(s,f_1) for K = Q(k^(1/3)) — and this is explicitly how the
published rho_sol values were computed to ~18 digits for all cube-free k <= 1000. So the
comparator's value is a cubed zeta_K quantity of K (and, as I add, a -6th power of L(2,f_1) of K
as well). By my verified identity, L(1,f_1)^3 = (2 pi)^3 (h(K) R(K))^3 / |d_K|^{3/2}.

### Which of the three arms this voids, and which it leaves standing

- **Arm 1, h(K): VOIDED.** h(K) sits in the divisor. Dividing n_k(B) by c_k^loc removes (hR)^3
  exactly; a rank correlation of the residual against h would be reporting the normaliser's own
  content, not a missing factor.
- **Arm 2, R(K): VOIDED,** for the same reason, and with an extra defect the entry does not state:
  **h and R enter only as the PRODUCT hR.** The construction cannot separate them, so the
  candidate's arms 1 and 2 are not two arms but one, and neither is independently interpretable.
  (This sharpens the entry's "comparator whose two arms are not disjoint" — they are not merely
  non-disjoint, they are the same single real number.)
- **Arm 3, 3-rank of Cl(K): STANDS.** (hR)^3/|d_K|^{3/2} is one real number; the 3-rank of Cl(K)
  is not a function of it, so dividing out the comparator does not pre-determine a residual
  correlation with the 3-rank. My own caveat: the arm is CONFOUNDED but not void — 3-rank >= 1
  iff 3 | h(K), so h, which the normaliser removes, is informative about (not determining of) the
  3-rank. An honest test of this arm would have to condition on that.

## Is the brief's framing right about the record?

Mostly, with two corrections. (i) The brief says to read "its section 2" for the heuristic; the
section is titled "Density computations" (sub-2.1 "Solution density") and the paper's heuristic
discussion proper is in a later section — immaterial, all four items are in 2.1. (ii) The brief,
following the entry, says (2.2) expresses the product "proportionally to L(1,f_1) cubed". True but
incomplete: L(2,f_1)^{-6} is also a zeta_K factor. The record is understating, not overstating.
I found nothing in the entry's Leg A that the document contradicts.

## What this means for the entry's verdict

**Leg A STANDS, at first hand, on a section-level read, independent of both adversary logs.** All
four of its components are verbatim in Section 2.1 of arXiv:2007.01209, and the pivotal question
answers YES. Leg B — "h and R sit in the comparator to the third power" — which the entry records
as UNVERIFIED in both directions and which no reader had computed, is now **CONFIRMED by my own
derivation plus my own numerics** (h_pred hitting 1,1,1,1,3,2; sigma_infinity check to 8e-15),
with the honest residue that the SHARE of rho_sol's variation carried by (hR)^3 versus prod r_p is
still unmeasured. Gate 4 attack 4 and attack 8 are therefore better supported after this check
than before it, and adversary 1's invitation to downgrade them to Partial "for a verifier who
requires the (hR)^3 dependence to be printed" should be DECLINED on the ground that the dependence
is now verified computationally even though it remains unprinted. The entry's grades, scores and
rejection need no change; two sentences of its "own vulnerability" paragraph are now overtaken by
this check and the h/R non-disjointness can be stated more sharply. HB92 remains COULD NOT READ
(full text) at a fourth attempt, and is no longer the document that would settle this.
