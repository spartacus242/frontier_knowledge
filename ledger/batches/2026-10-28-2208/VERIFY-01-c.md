# VERIFY-01-c — Checker note: the kill's framing against the transplanted paper (Lemke Oliver–Soundararajan)

Checker: fresh context, did not write the entry. Entry under check:
`/home/claude/frontier_knowledge/ledger/batches/2026-10-28-2208/UQ-20261028-01-entry.md`.
Assigned leg: is the entry's description of the Lemke Oliver–Soundararajan (LO-S) statistic accurate, and
does the DOI the entry carries name that paper or a different one?

BUDGET SPENT: 0 of 2 web searches; 4 of 4 fetches (one of the four returned an error and retrieved nothing).
No step of this check was abandoned for want of budget.

---

## 0. The brief's premise about the record is FALSE — stated first because the rest depends on it

My brief asserted that "the entry carries DOI 10.1073/pnas.2022377118 among its identifiers." It does not.

Route: local grep over the entry file, all DOI- and arXiv-shaped strings extracted and counted
(`grep -o -E "DOI 10\.[0-9]{4,9}/[^ ,;)]*|arXiv:[0-9]{4}\.[0-9]{4,5}|PNAS [0-9]+|10\.1073/[^ ,;)]*"`).
READ LEVEL: full text of the entry.

The complete identifier inventory of UQ-20261028-01-entry.md is:

| identifier | occurrences | attached to |
|---|---|---|
| `DOI 10.1007/s00208-021-02307-2` | 1 | P1 David–Devin–Nam–Schlitt (line 21) |
| `DOI 10.1016/j.aim.2021.108040` | 1 | P3 Devin–Meng (line 21) |
| `arXiv:2405.03540` | 1 | P2 Holt |
| `arXiv:2105.05048` | 1 | P1 |
| `arXiv:1809.09662` | 1 | P3 |
| `arXiv:1911.05295` | 1 | Zhang–Han |
| `arXiv:1808.04001` | 1 | Sawin–Shusterman |
| `arXiv:1505.01970` | 1 | Keating–Roditty-Gershon |
| `arXiv:2302.13665` | 1 | audience list |
| `PNAS 113` | 1 | LO-S (line 10) |

There is **no `10.1073/` string of any kind in the entry**. The entry cites LO-S by journal, volume and year
only — "Lemke Oliver and Soundararajan (PNAS 113, 2016)" (line 10, Motivating gap) — and carries **no DOI
for it at all**. So the specific error my brief alleged (a wrong DOI attached to LO-S) **cannot be committed
by this entry**, because the entry attaches no DOI there to be wrong.

Where `10.1073/pnas.2022377118` actually lives in this batch: it is carried by a **different entry**,
`UQ-20261028-04-entry.md` line 22, and by `UQ-20261028-04-record.md` line 59 and
`UQ-20261028-04-adversary-2.md` lines 68–69 and 216, in each case correctly attached to
**Booker, A. R. and Sutherland, A. V., "On a question of Mordell", PNAS 118(11) e2022377118 (2021),
arXiv:2007.01209** — the sums-of-three-cubes candidate, nothing to do with consecutive primes.
MY OWN INFERENCE, labelled as such: the brief's premise is cross-entry contamination inside the brief,
not a defect in the record. I report what the record says rather than inheriting the brief's framing,
as instructed.

## 1. The paper, established at first hand

**DOI 10.1073/pnas.1605366113 · first author Robert J. Lemke Oliver (with Kannan Soundararajan) · 2016 ·
"Unexpected biases in the distribution of consecutive primes" · Proceedings of the National Academy of
Sciences 113(31), E4446–E4454, dated July 14, 2016 · preprint arXiv:1603.03720v4 (submitted 2016-03-11,
v4 2016-05-30).**

Routes and read levels:

1. `https://arxiv.org/abs/1603.03720` — OPENED. READ LEVEL: metadata only. Served front matter: title and
   both authors as above; `Subjects: math.NT`; **`DOI: 10.1073/pnas.1605366113`**; no Journal-reference
   field on the page. The summariser declined to reproduce the abstract verbatim at length and gave a
   paraphrase instead; I did not need it verbatim, because the abstract's content is independently
   established below and in §2(c).
2. `https://doi.org/10.1073/pnas.1605366113` — **COULD NOT READ.** Single error returned:
   "failed at its site (client_error), and nothing of the page was retrieved." One route, one attempt;
   I did not retry, because route 3 supplied the same fields. This is a fact about the fetcher/publisher
   handshake, not about the article.
3. `https://dl.tufts.edu/concern/pdfs/9c67x0009` (the institutional mirror adversary #1 had used) —
   OPENED. READ LEVEL: catalog bibliographic record. Printed fields: Title "Unexpected biases in the
   distribution of consecutive primes."; Authors "Lemke Oliver, Robert J.; Soundararajan, Kannan";
   Journal "Proceedings of the National Academy of Sciences"; Volume 113; Issue 31; Pages E4446-E4454;
   Date July 14, 2016; DOI "doi:10.1073/pnas.1605366113".
4. `https://ar5iv.labs.arxiv.org/html/1603.03720` — OPENED twice (second time with an offset to reach
   deeper text). READ LEVEL: **section read — the Introduction (Section 1) only.** I did not read
   Sections 2 onward (the heuristic derivation and the numerical tables beyond the one mod-10 table
   discussed in Section 1), and no finding here rests on them.

**Verdict on the identifier question: the entry's bibliographic handling of LO-S is correct as far as it
goes (PNAS, volume 113, 2016 — all three confirmed at first hand) and is simply incomplete (no DOI).
The DOI the brief put in the entry's mouth is not in the entry. Nothing in the entry names a different
paper.** Recommended addition, not a correction: `DOI 10.1073/pnas.1605366113, arXiv:1603.03720`.

## 2. What the LO-S statistic actually is

All quotations in this section are from the ar5iv render of arXiv:1603.03720, **Section 1 (Introduction)**,
with the render's display labels given. READ LEVEL: section read.

**(a) What it conditions on, and at what grain.** The counting function, Section 1, display S1.Ex3
(unnumbered in the text), served as ordered segments:

> "Define" / "\pi(x;q,\mathbf{a}):=\#\{p_{n}\leq x:p_{n+i-1}\equiv a_{i}\,(\text{mod }q)" /
> "\text{ for each }1\leq i\leq r\}," / "which counts the number of occurrences of the pattern" /
> "among r consecutive primes the least of which is below x."

So: the unit (grain) is **one ordered r-tuple of consecutive primes**, anchored by its least member being
≤ x; it conditions on **the full ordered pattern of residue classes mod q of all r members**; for pairs,
r = 2 and the pattern is (a,b). The quantity reported is a **cumulative count over the whole archimedean
range [2,x]**, compared against the uniform-independent value li(x)/φ(q)^r.

**(b) What quantity it reports.** The Main Conjecture (unnumbered, Section 1, after the heuristic
introduction), verbatim segments:

> "\pi(x;q,\mathbf{a})=\frac{\mathrm{li}(x)}{\phi(q)^{r}}\Big(1+c_{1}(q;\mathbf{a})\frac{\log\log x}{\log x}"
> / "+c_{2}(q;\mathbf{a})\frac{1}{\log x}+O\Big(\frac{1}{(\log x)^{7/4}}\Big)\Big),"

with, in the same Main Conjecture,

> "c_{1}(q;\mathbf{a})=\frac{\phi(q)}{2}\Big(\frac{r-1}{\phi(q)}-\#\{1\leq i<r:a_{i}\equiv a_{i+1}"
> / "\,(\text{mod }q)\}\Big),"

and the surrounding sentence

> "The dominant factor in this bias is determined by the number of i for which a_{i+1}≡a_i (mod q)".

The reported quantity is therefore a **leading-order-equidistributed count with a signed secondary term of
relative size log log x / log x**, whose sign and size are set by how many adjacent members of the pattern
repeat a class. The bias is a correction that **tends to zero as x grows**; it is not a persistent
proportional deficit.

**(c) Direction on the diagonal.** Section 1, in the paragraph discussing the mod-10 data table at
π(x₀) = 10⁸, verbatim:

> "the key feature to be observed in this data is that the diagonal classes $(a,a)$ occur significantly
> less often than the non-diagonal classes."

LOCATION OF STRING: Section 1, immediately after the mod-10 table. A nearby sentence adds that (3,3) and
(7,7) appear less frequently than (1,1) and (9,9). The paper states no threshold and no relative
percentage at this point; "significantly" is its word.

**(d) Explanatory status.** The arXiv abstract (paraphrased by the summariser, which declined verbatim
reproduction, and independently corroborated by the Tufts record's verbatim fragments as logged by
adversary #1) is that the distribution of consecutive-prime pairs across the permissible φ(q)² class pairs
is "surprisingly erratic" and that the paper "proposes a conjectural explanation ... based on the
Hardy−Littlewood conjectures", fitting numerical data. So: observed in data, explained conjecturally.

## 3. Mathematics, tested as mathematics

Script: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/diag.py`
(run with `python3 -I`; sympy absent, so `fractions.Fraction` exact arithmetic). All three blocks below are
MY OWN arithmetic on the verbatim c₁ formula transcribed in §2(b).

**(A) The diagonal coefficient.** Substituting r = 2 into the paper's own c₁:

```
r=2, off-diagonal (no repeat): c1 = 1/2 for every phi  (phi = 1,2,4,6,8)
r=2, diagonal (one repeat):    phi=1 -> 0, phi=2 -> -1/2, phi=4 -> -3/2, phi=6 -> -5/2, phi=8 -> -7/2
closed form -(phi(q)-1)/2 matches c1(phi,2,1) for every phi in 1..39: True
```

Two consequences. First, the off-diagonal c₁ = 1/2 reproduces exactly the `+\frac{\log\log x}{2\log x}`
printed in the paper's displayed **Conjecture 1.1**, whose own opening clause I have verbatim —
"If a and b are distinct reduced residue classes (mod q), then π(x;q,(a,b))+π(x;q,(b,a)) equals" — i.e.
Conjecture 1.1 as displayed is **restricted to a ≠ b**. Second, the diagonal case is c₁ = −(φ(q)−1)/2 < 0
for every φ(q) > 1, i.e. **the same-class deficit is a consequence of the paper's own printed c₁ formula**,
and the diagonal case is introduced separately in Section 1 by the clause "if 𝐚=(a,a) for a reduced residue
class a (mod q), then regardless of the choice of a we have", with Eq. (1.1) supplying the diagonal c₂
constant `\frac{\phi(q)\log(q/2\pi)+\log 2\pi}{2}-\frac{\phi(q)}{2}\sum_{p\mid q}\frac{\log p}{p-1}`.

**(B) Aggregation-level premise check (quantifier and aggregation, as the rules require).** Summing the
Main Conjecture over all φ(q)² ordered class pairs must return π(x) ~ li(x)(1 + O(1/log x)), so the
log log x / log x coefficient must cancel in aggregate. Computed exactly:

```
phi=1,2,4,6,8,10 : aggregated loglogx/logx coefficient = 0 in every case
```

It cancels identically. The deficit is therefore **a redistribution among class pairs at fixed total, not a
shortfall in the count of primes** — the diagonal loses exactly what the off-diagonal gains. This is a real
structural feature of the statistic and it is the one the entry's delta, a ratio of a class-pair count to
the uniform-independent expectation, is in fact the right shape to carry.

**(C) Magnitude sanity check against the paper's own mod-10 table.** At x₀ with π(x₀) = 10⁸ (x₀ ≈ 2.038e9):

```
log x0 = 21.4352, loglog x0 / log x0 = 0.1430, c1(diagonal, phi(10)=4) = -3/2
predicted diagonal / (li/phi^2) = 0.7855  -> predicted deficit 21.4%
li/phi^2 ~ 1e8/16 = 6.25e6; predicted diagonal count ~ 4.91e6
```

The summariser's own reading of the paper's table (ITS arithmetic, not the paper's and not mine, and so
labelled) put the four diagonal entries at roughly 4.4–4.6e6 against 6.25e6. My predicted 4.91e6 from the
c₁ term alone is the same order and the same side, the residual being the c₂/log x term I did not evaluate.
This corroborates the sign and scale; it settles nothing on its own.

## 4. What this means for the entry

**(i) The entry's description of LO-S is ACCURATE.** Line 10: "Lemke Oliver and Soundararajan (PNAS 113,
2016) report a deficit of consecutive primes in equal classes mod q, explained heuristically by
Hardy-Littlewood correlations plus counting." Every clause checks out against §2: consecutive primes (the
unit is a tuple of consecutive primes), equal classes mod q (the diagonal (a,a)), deficit (verbatim
"occur significantly less often"), heuristic explanation via Hardy–Littlewood ("proposes a conjectural
explanation ... based on the Hardy−Littlewood conjectures"), "plus counting" (the c₁ formula is a counting
expression in #{i : a_i ≡ a_{i+1}}). The record's added words "large, slowly decaying" are also right in
kind: the decay is log log x / log x.

**(ii) One grain difference, which the entry does not state but does not misstate.** LO-S's quantity is
**cumulative over a growing range x**, with the bias a secondary term vanishing as x → ∞; the entry's
delta(a,a;m,n,q) is a **within-a-single-degree-n ratio** over a fixed finite population of q^n monics.
Mapping one to the other requires the transport log x → n log q, which the entry performs and labels as a
transport (attack-5 row, "under the record's own transport"). The entry's canonical question asks "how does
it behave as n grows at fixed q", which is the correctly-shaped question for a vanishing secondary term.
No inaccuracy; a precision the entry could add.

**(iii) One citation-location correction, minor.** Line 34 (attack 5) attributes to "LO-S's printed
Conjecture 1.1" the factor `1 - ((phi(q)-1)/2)(log log x)/(log x)`. The **numerical content is exactly
right** — it is c₁(q;(a,a)) = −(φ(q)−1)/2, which I derived in §3(A) from the paper's own verbatim c₁ — but
the displayed **Conjecture 1.1 is explicitly restricted to distinct classes a ≠ b** and prints the
off-diagonal `+log log x/(2 log x)` instead. The diagonal factor comes from the **Main Conjecture's c₁
formula** together with the separate diagonal clause before Eq. (1.1). The fix is a label, not a number:
cite the Main Conjecture and Eq. (1.1) rather than Conjecture 1.1. Adversary #2's detectability figures in
the attack-5 row rest on the right quantity.

**(iv) Nothing here touches the fatal leg.** The verdict's single load-bearing leg (line 39) is adversary
#2's algebraic order-2 degeneracy on m = t^d. That leg does not cite LO-S and does not depend on LO-S's
statistic. My check therefore cannot move the rejection in either direction; it removes a candidate ground
for overturning it. The leg I was given to test — the kill's framing of the transplanted paper — **STANDS**,
in the sense that the entry's framing of the paper it is transplanting is faithful and its one defect is an
omission (no DOI) plus one mislabelled internal cross-reference.

**(v) The brief's own premise FALLS**, on the record, as set out in §0.
