# VERIFY-04-b — Heath-Brown, Math. Comp. 59 (1992) 613-623: is the per-k constant local or does it factor through zeta_K?

Checker: fresh context, did not write UQ-20261028-04 or either adversary log.
Entry checked: `/home/claude/frontier_knowledge/ledger/batches/2026-10-28-2208/UQ-20261028-04-entry.md` (read in full).
Adversary logs: NOT read. The claim under test lives in the entry's own lines 48-51, which carry the full citation, so the logs were not needed.
Budget: 2 searches / 5 fetches allowed. USED 1 search, 5 fetches. Fetch budget exhausted; 1 search left unspent because with no fetches remaining a search returns a URL I cannot open.

## VERDICT IN ONE LINE

Leg A **STANDS, and is a DOCUMENTARY FINDING, not an inference** — and it is stronger than the entry records. Heath-Brown 1992 prints the factorisation himself, 29 years before Booker-Sutherland, and evaluates the global factor **by the class number formula**. This also discharges the entry's self-declared vulnerability on Leg B.

## WHAT I OPENED, WITH ROUTE AND READ LEVEL

1. **WebSearch** (1 of 2): `Heath-Brown "density of zeros of forms for which weak approximation fails" Mathematics of Computation 1992`. Returned, among others, a bibtex entry at cr.yp.to and an Oxford ORA record + file.
2. **FETCH 1** — `https://cr.yp.to/bib/1992/heathbrown.tex` (D. J. Bernstein's bibliography). READ LEVEL: full (short record). Gave: Heath-Brown, D. R., "The density of zeros of forms for which weak approximation fails", *Mathematics of Computation* **59** (1992), 613-623, ISSN 0025-5718.
3. **FETCH 2** — `https://ora.ox.ac.uk/objects/uuid:231055aa-e770-4155-b496-df50519b0e1c` (Oxford University Research Archive record). READ LEVEL: metadata only. Title and 1992 confirmed; journal/volume/pages NOT stated on the record; located the full-text PDF `wa.pdf`.
4. **FETCH 3** — `https://ora.ox.ac.uk/objects/uuid:231055aa-e770-4155-b496-df50519b0e1c/files/mb95313d0adb75b5de3e0667d218aecf3` (the `wa.pdf` full text). **READ LEVEL: full text, via summariser extraction** — abstract, introduction, the local-density sections, the final section on x^3+y^3+z^3=k, and the complete reference list. The PDF is the author's own typescript: it carries the title and author (Magdalen College, Oxford) but **no journal line, volume or page numbers**.
5. **FETCH 4** — same PDF, re-requested as **ordered consecutive segments under ~125 characters** for the two load-bearing passages (this is the escalation the rules require before recording text as unreadable; it worked, so no "could not read" is recorded here).
6. **FETCH 5** — `https://sugaku.net/oa/W2018446591` (OpenAlex mirror, a URL returned by the search). READ LEVEL: metadata only. Confirmed title + journal *Mathematics of Computation* + 1992, 31 citations. **Did NOT carry volume, issue, pages or DOI.**

**Publisher-record confirmation NOT obtained.** No ams.org or doi.org URL for this article ever entered the conversation, and my fetch budget was spent before I could chase one. This is a **spent budget, not an absence**: the AMS route was never tried and its silence is untested. The volume/page range is therefore corroborated at the level of *two independent agreeing metadata sources* (Bernstein's bibtex and the entry's own citation), with the primary typescript agreeing on title and year and contradicting nothing.

## FINDING 1 — EXACT TITLE (the entry never gives one)

**"The density of zeros of forms for which weak approximation fails"**, D. R. Heath-Brown, *Mathematics of Computation* **59** (1992), 613-623.

READ LEVEL: title page of the primary PDF (full), plus bibtex and OpenAlex metadata.

The entry cites this paper five times (lines 21, 48, 49, 51, 53) and **never once gives its title**. That is a citation defect in the entry, not a factual error: the volume and page range it gives are the ones I found. The title matters because it tells you what the paper is for — weak approximation failure for `x^3+y^3+z^3 = kw^3` at k=2,3 — and hence why it computes the densities at all.

Abstract, first sentence, verbatim as extracted (the PDF's own typo preserved): *"The weak approximation principal fails for the forms x^3 + y^3 + z^3 = kw^3, when k = 2 or 3."*
Introduction, first sentence: *"Let f(x_1, ..., x_n) in Q[x_1, ..., x_n] be a rational form."*

## FINDING 2 — DOES IT DEFINE THE PER-k CONSTANT? YES.

READ LEVEL: full text (sections on local densities and the final section "Hardy-Littlewood formula for x^3+y^3+z^3=k").

Heath-Brown defines **both factors** of the constant, for the affine equation `x^3+y^3+z^3 = k` (not just the projective `=kw^3`):

- **Real density.** Defined over the range `N_1 <= max(|x|,|y|,|z|) <= N_2`, as `2 log(N_2/N_1) * integral_0^1 dt/(1-t^3)^{2/3}`, evaluated to **`sigma_inf = 3.5332... log(N_2/N_1)`**.
- **p-adic densities.** `sigma_p = lim_n p^{-2n} N(p^n)`, where `N(p^n)` counts `(x,y,z) mod p^n` with `x^3+y^3+z^3 = k (mod p^n)`. Evaluated case by case: `sigma_p = 1` for `p = 2 (mod 3)`, `p` not dividing `k`; `1 - p^{-2}` for `p = 2 (mod 3)`, `p | k`; `sigma_3 = N(9)/81`; and for `p = 1 (mod 3)` a formula involving the cubic residue symbol and `a/p^2` where `4p = a^2+3b^2`, `a = 1 (mod 3)`.
- **The conjecture.** He prints `sigma_inf prod_p sigma_p = 0.366... log(N_2/N_1)` for k=3 and `0.539... log(N_2/N_1)` for k=2 (the extraction renders the second as "k = 30", which I read as "k = 3" and "0." running together — the two values plainly belong to k=3 and k=2), and states: *"we conjecture that these figures give, approximately, the number of solutions of x^3+y^3+z^3 = k"*. He conjectures infinitely many solutions and says no adjustment is needed for the weak-approximation failure.

So: **this is the source of the per-k constant, and the comparator is defined per-k, at the precise altitude the entry needs.** He does not use the symbol `rho_sol` and does not carry Booker-Sutherland's `1/6`.

## FINDING 3 — IS THE COMPARATOR LOCAL OR GLOBAL? **DEFINED LOCALLY, EVALUATED GLOBALLY, AND HE SAYS SO.**

This is the decisive passage. PASSAGE 1, located in the paper's **final section, the Hardy-Littlewood formula for `x^3+y^3+z^3=k`** (page 13 of the extracted text), transcribed as consecutive short segments:

> *"As before we may compare sigma_p with the Euler factor E(p, k) in zeta_{Q(k^{1/3})}(s)."*
>
> **`prod_p sigma_p = A_k^3 prod_p sigma'_p`**, where
>
> **`A_k = lim_{s->1} (s - 1) zeta_{Q(k^{1/3})}(s)`**,
>
> and **`sigma'_p = sigma_p ((1 - 1/p)/E(p, k))^3`**.

`E(p,k)` is given no separate closed form; it is described only as the Euler factor of `zeta_{Q(k^{1/3})}(s)` at p. (The raw extraction reads `Y p sigma_p = A 3 k Y p sigma 0 p`, i.e. `prod_p sigma_p = A_k^3 prod_p sigma'_p`; the fraction layout inside `sigma'_p` is partly garbled, so the exact grouping of the `(1-1/p)/E(p,k)` quotient is **[unclear]** in my read, though the cube is not.)

**Answer to the brief's question: the comparator is a product of purely local densities BY DEFINITION, and Heath-Brown himself proves it FACTORS THROUGH the Dedekind zeta of Q(k^(1/3)) — the cube of the residue at s=1, times a residual Euler product.** The "purely local" and "factors through zeta_K" arms of the entry's dichotomy are not alternatives; the original source of the conjecture establishes they are the same thing.

## FINDING 4 — DOES IT, OR ANYTHING IT CITES, ALREADY RELATE THE CONSTANT TO AN INVARIANT OF THE PURE CUBIC FIELD? **IT DOES, ITSELF, VIA THE CLASS NUMBER FORMULA.**

PASSAGE 2, located in the earlier section on the local densities and `sigma_{inf,k}` for the projective form, transcribed as consecutive segments:

> preceding sentence: *"the product being for primes p = 1 (mod 3) which do not split in Q(k^{1/3})."*
>
> *"b_k = lim_{s->1} (s - 1) zeta_{Q(k^{1/3})}(s)."*
>
> *"The class number formula gives"* — and then, in closed form:
>
> **`b_k = pi log(1 + 2^{1/3} + 4^{1/3}) / (3 sqrt 3)` for k = 2**
>
> **`b_k = 2 pi log(4 + 3*3^{1/3} + 2*9^{1/3}) / (9 sqrt 3)` for k = 3**
>
> following sentence: *"Moreover the products are now absolutely convergent and can be computed numerically to give c = 0.30663 ..."*

Words searched for in the extraction: **"Dedekind zeta" — present** (as `zeta_{Q(k^{1/3})}`). **"class number formula" — present, in terms.** **"regulator" — NOT present as a word** (the regulator appears only as the `log(unit)` inside `b_k`). **"L-function" — NOT present; HB uses the zeta residue directly where Booker-Sutherland use `L(1,f_1)`.**

**Nothing in HB's five-item reference list makes this connection; the relation is HB's own.** Reference list verbatim as extracted: [1] Cassels, *A note on the Diophantine equation x^3+y^3+z^3=3*, Math. Comp. **44** (1985), 265-266. [2] Cassels and Guy, *On the Hasse principle for cubic surfaces*, Mathematika **13** (1966), 111-120. [3] Davenport, *Cubic forms in thirty-two variables*, Phil. Trans. Royal Soc. A **251** (1959), 193-232. [4] Gardiner, Lazarus and Stein, *Solutions of the Diophantine equation x^3+y^3=z^3-d*, Math. Comp. **18** (1964), 408-413. [5] Vaughan, *The Hardy-Littlewood circle method*, CUP, 1981. (The extraction notes the in-text citations number Vaughan as [4], colliding with Gardiner — HB's own numbering slip, not load-bearing.)

**Side corroboration for the entry's PRIOR 3:** HB's [1] confirms the entry's Cassels citation exactly — *Math. Comp.* 44 (1985), 265-266 — a reference the entry records as "RETURNED, NOT OPENED by any reader." The citation is right; I still have not opened Cassels, so nothing about its content is settled here.

## NUMBERS I COMPUTED MYSELF (MY OWN ARITHMETIC, not read from any paper)

Script: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chk2.py`, plain Python 3 (`python3 -I`), double precision.

**(i) Heath-Brown's printed closed forms ARE the analytic class number formula value `2 pi h R / sqrt|d_K|`.**
For a pure cubic field, signature `(r_1,r_2) = (1,1)` and `w = 2`, so
`Res_{s=1} zeta_K(s) = 2^{r_1} (2 pi)^{r_2} h R / (w sqrt|d_K|) = 2 pi h R / sqrt|d_K|`.

- k=2: `K = Q(2^{1/3})`, `d_K = -108`, `h = 1`. `u = 1 + 2^{1/3} + 4^{1/3} = 3.847322101863073`; it is a unit — I checked `u * (2^{1/3} - 1) = 1.000000000000000`. With `R = log u`:
  `2 pi h R / sqrt(108) = 0.814624059261141`
  HB's printed `pi log(u)/(3 sqrt 3) = 0.814624059261141` — **match to 1e-15.**
- k=3: `K = Q(3^{1/3})`, `d_K = -243`, `h = 1`. `u = 4 + 3*3^{1/3} + 2*9^{1/3} = 12.486916357026033`; I computed `Norm_{K/Q}(4 + 3t + 2t^2)` with `t^3 = 3` by the determinant of the multiplication matrix and got **exactly 1**, so it is a unit. With `R = log u = 2.524681404706316`:
  `2 pi h R / sqrt(243) = 1.017614561500059`
  HB's printed `2 pi log(u)/(9 sqrt 3) = 1.017614561500060` — **match to 1e-15.**

So `A_k = Res_{s=1} zeta_K(s) = 2 pi h(K) R(K) / sqrt|d_K|`, and HB reaches his printed values by exactly that route — he says "The class number formula gives". **`h(K)` and `R(K)` are in the comparator, to the third power, in print, in 1992.**

**(ii) Heath-Brown's constant and Booker-Sutherland's `rho_sol` are the same object.**
HB prints `sigma_inf prod_p sigma_p = 0.366...` for k=3. BS's `rho_sol(3) = 0.061052` with `rho_sol = (1/6) sigma_inf prod_p sigma_p`.
`0.366 / 6 = 0.061000`; ratio to BS's `0.061052` = **0.99915**. Agreement to HB's three printed digits. (For k=2, `0.539/6 = 0.089833`; I have no BS value for k=2 to compare, since k=2 is not cube-free-admissible in the same table.)

**(iii) The quantity the entry says nobody has evaluated — I evaluated it.**
Entry line 49: *"nobody has evaluated rho_sol |d_K|^{3/2} / (h(K) R(K))^3 numerically for a single k, nor checked the convergence of the residual Euler factor E_k."*
For k=3, with `rho_sol = 0.061052` (BS), `|d_K|^{3/2} = 243^{3/2} = 3787.995116`, `h = 1`, `R = 2.524681404706316`:

> **`rho_sol * |d_K|^{3/2} / (h R)^3 = 14.371085130`**

Dividing out the constants that HB's identity predicts should remain — `(1/6) * 3.5332 * (2 pi)^3`, where `(2 pi)^3 = 248.050213442` and `3.5332/6 = 0.588866667` — gives the implied residual product:

> **`prod_p sigma'_p = 0.098385928`** (k=3)

Cross-check by the other route: `rho_sol / ((1/6) * 3.5332 * A_3^3)` with `A_3 = 1.017614561500059` gives **0.098385928** — the two routes agree to 9 digits, as they must, which confirms the substitution is consistent rather than confirming the value independently.

**What this number does and does not establish (my own labelling).** It establishes that HB's identity, instantiated at k=3 with BS's published `rho_sol` and the class-number-formula value of `A_3`, closes to a finite `O(0.1)` residual — exactly what a convergent corrected Euler product should look like, and in the same range as the `c = 0.30663...` HB computes for the analogous product. It does **not** independently verify `prod_p sigma'_p`: I did not compute that product from the `sigma_p` formulas, so `0.0984` is a *derived consequence* of the identity, not a test of it. The one genuine test it survives is a sanity test — had `h` and `R` not sat in the comparator cubed, this quotient would not have landed at an `O(0.1)` number consistent with a convergent correction.

## WHAT THIS MEANS FOR THE ENTRY'S VERDICT

**Leg A: STANDS, and upgrades from "algebraic substitution by two adversaries" to "printed in the source of the conjecture."** The entry (line 49) nominates HB 1992 as "the document of the right kind to print whether `prod_p sigma_p` is expressed through `L(1,f_1)` or `Res_{s=1} zeta_K`." **The answer is `Res_{s=1} zeta_K`, written out as a display, with the residual factor `prod_p sigma'_p` defined alongside it.** Booker-Sutherland's `L(1,f_1)^3` is the same quantity under `zeta_K(s) = zeta(s) L(s,f_1)` and `Res_{s=1} zeta(s) = 1`; the adversaries' substitution was correct, and it is no longer a substitution — one reader (me) has now read both halves of it in print, one half in each paper.

**The entry's own declared vulnerability is discharged, in the direction that strengthens the kill, not weakens it.** Line 49 records that Leg B — `h(K)` and `R(K)` in the comparator cubed — was "each adversary's own arithmetic from the analytic class number formula ... with no primary source opened for the formula", and that adversary 1 invited "a downgrade of attacks 4 and 8 to Partial for a verifier who requires the (hR)^3 dependence to be printed." **That verifier's condition is now met.** Heath-Brown invokes the class number formula by name and prints `b_k` in a closed form that I verified numerically, to 1e-15 at two values of k, to be exactly `2 pi h R / sqrt|d_K|`. Attacks 4 and 8 should **not** be downgraded. Leg B now rests on a primary source for the formula plus my own verified arithmetic, and the "unverified in both directions" clause on line 49 no longer describes the record.

**Leg A is now independent of Booker-Sutherland entirely.** This matters for the entry's "WHICH LEGS WOULD SURVIVE" line. Previously the whole kill ran through one paper's Section 2. It now also runs through the 1992 paper that originated the conjecture, so the global factorisation cannot be dismissed as Booker-Sutherland's computational convenience (a PARI/GP shortcut for getting 18 digits). It is in the conjecture's definition from the start.

**What the kill still does NOT reach — the entry is right, and I checked this rather than inheriting it.** `A_k` carries `h(K)` and `R(K)` only as the *product* `h R`. My own algebra: `h R` does not determine `h`; and even given `h`, the 3-rank of `Cl(K)` is not determined (`h = 9` admits 3-rank 1 and 3-rank 2). Nothing in HB separates the 3-part. So the **3-rank arm survives this leg untouched**, exactly as the entry states on line 48, and HB 1992 gives it no new competition — no 3-rank, no Cohen-Lenstra, no class group structure anywhere in the paper.

**One further documentary leg of the entry is independently confirmed.** Adversary 1's min-vs-max convention objection (entry line 17, attack 5): HB states his real density for the range **`N_1 <= max(|x|,|y|,|z|) <= N_2`**. The conjecture is max-convention at its source. The entry's record of this defect is correct.

**Correction to the brief that launched me.** The brief frames this check as deciding "whether leg A of the kill is a documentary finding or an inference." On the record as it stood, leg A was *already* documentary — the entry states it rests on "two separate fetches of Booker-Sutherland Sec. 2 (not an abstract-only read)". What was an inference was the **step from that display to `h` and `R`**, i.e. Leg B, which the entry labels own-reasoning. So the check I actually ran settled Leg B's documentary status and gave Leg A a second, earlier, independent source. The brief named the right document for the wrong leg.

## ROUTES THAT FAILED OR WERE NOT TRIED

- **AMS journal archive (ams.org): NEVER TRIED.** No ams.org URL entered the conversation and my 5 fetches were spent on the title/metadata leg and the two full-text passes. **This is a spent budget recorded as a spent budget, not as an absence.** The entry's claim that "no openable copy of Heath-Brown ... located" (line 21, after adversary 1's two searches including a `site:ams.org` filter) is now **superseded**: an openable full text exists at Oxford ORA, reached in one search plus two fetches. The document's prior unopenability was a property of the earlier fetchers' route choices, not of the document.
- **doi.org: not tried** — no DOI for this article was ever surfaced by any source I opened. The OpenAlex mirror carried no DOI.
- **Publisher-grade confirmation of "613-623": not obtained.** Corroborated by Bernstein's bibtex and by agreement with the entry's own citation; contradicted by nothing. Read level for the page range: **metadata only, secondary.**
- No search was refused. No personal identifier was placed in any URL, query or header.

## STRINGS I COULD NOT LOCATE

None of the strings I tested failed to locate. Every quotation above is placed by section. Two extraction defects are flagged inline rather than resolved: the `k = 30` run-together in the printed constants, and the internal grouping of the quotient inside `sigma'_p`. Neither affects the finding, since the cube and the identification of `A_k` are both clear.
