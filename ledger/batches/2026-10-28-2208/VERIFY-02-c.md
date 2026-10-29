# VERIFY-02-c — fresh-context check of the Sawin–Wood leg of UQ-20261028-02

Checker: fresh context, did not write the entry. Budget allowed 2 searches + 5 fetches.
SPENT: 0 searches, 4 fetches. Budget was NOT exhausted; nothing below is an absence
recorded because I ran out.

## 1. What I opened, by route and read level

| # | Route | Result | READ LEVEL |
|---|---|---|---|
| 1 | `ar5iv.labs.arxiv.org/html/2301.00791` | served; **§1.1 there is headed "Previous work"** and contains no Scholz, no reflection, no `Q(sqrt D)`. Summariser refused a full verbatim transcription of 1.1 and gave a paragraph-by-paragraph structural summary instead. | section read (wrong section — see §2) |
| 2 | `arxiv.org/html/2301.00791v2` | served; section map + targeted quotations | **section read of §1.1, via three successive targeted fetches** |
| 3 | `arxiv.org/html/2301.00791v2` | served; the "statistically independent" / "explicit formula" sentences in ≤120-char ordered snippets | section read |
| 4 | `arxiv.org/html/2301.00791v2` | served; the `|f_i − f_j| ≤ u n_i` statement, the Gras attribution, the "only be relevant" sentence with neighbours | section read |

Read level for every finding below: **SECTION READ of §1.1 of arXiv:2301.00791v2**, through the
WebFetch summariser, obtained as short ordered consecutive snippets. I did **not** read §9, §11–12,
Theorem 1.2's displayed formula, or Corollary 8.4: **NOT OPENED**. No PDF page images were read.

### Citation-precision finding (new, and it bears on every citation of "section 1.1")
The subsection numbering is **version-dependent**.
- `arxiv.org/html/2301.00791v2`: **1.1. Reflection principles and interpretation** / 1.2. Previous
  work / 1.3. Further remarks / 1.4. Outline / 1.5. Acknowledgements / 1.6. Notation.
- `ar5iv.labs.arxiv.org/html/2301.00791`: **1.1 is "Previous work"** (Achter / Malle / Garton), i.e.
  the v2 §1.2. The Scholz material is absent from 1.1 on that route.

So "Sawin–Wood sec. 1.1" is **correct for arXiv v2** and **wrong on the ar5iv route**. The entry and
both adversary logs should carry the version: `arXiv:2301.00791v2 §1.1`. A later checker who opens
ar5iv and finds no Scholz in 1.1 would wrongly record STRING NOT LOCATED. Everything I report below
is located in **v2 §1.1**.

## 2. The four claims of the leg, tested one at a time

### Claim A — "§1.1 states that reflection together with Cohen–Lenstra FORBIDS independence"
**CONFIRMED, with a scope correction.** Located in v2 §1.1, in the paragraph that follows the
Theorem 1.2 discussion. Exact text, as served in ordered consecutive snippets:

> "The reflection principle $|f_i - f_j| \leq un_i$, together with the phenomenon familiar from every
> case of" / " Cohen-Lenstra that the p-rank $f_i$ can grow arbitrarily large, imply that $f_i$" /
> " and $f_j$ cannot be statistically independent of each other."

and immediately after:

> "This is in contrast to previous conjectures which predicted that the parts of
> $\operatorname{Cl}_{K|K_0}[p^{\infty}]$" / " corresponding to different irreducible representations
> of $\Gamma$ should be independent."

The entry's quoted string "imply that f_i and f_j cannot be statistically independent of each other"
is **LOCATED** in v2 §1.1, verbatim. So the entry quotes accurately.

**The scope correction.** The `|f_i − f_j| ≤ u n_i` inequality this sentence rests on is **not**
Scholz over **Q**. It is, per §1.1 itself, "a generalization due to Gras [Gra98] of Leopoldt's
reflection principle", and the three consecutive sentences around it are:

> "In our setting, we take K an extension of a fixed field $K_0$ with Galois group $\Gamma$." /
> "the reflection principle will only be relevant when $K_0$ contains the pth roots of unity." /
> "In this case, since the action of $\Gamma$ on the pth roots of unity is trivial, a generalization
> due to Gras"

Here (summariser, own words) `f_i` is the multiplicity of the irreducible `V_i` in the p-part,
`u` the number of infinite places of `K_0`, `n_i = dim_{κ_i} V_i`. The forbidding sentence is
therefore stated **inside the hypothesis `μ_p ⊂ K_0` / trivial Γ-action on `μ_p`**, not for the
candidate's `K_0 = Q`, `p = 3`. The entry's line 19 reads the sentence as covering the candidate's
object; as a matter of what §1.1 asserts, it does not say that. **I treat the entry's attribution as
over-scoped by one step.** (That the conclusion is nevertheless true of the candidate's object is a
separate matter, settled in §3 below by my own arithmetic, not by this sentence.)

### Claim B — "names this very pair as its motivating instance"
**CONFIRMED.** §1.1 is the paper's **first** subsection, headed "Reflection principles and
interpretation", and "Scholz" first appears there:

> "The first reflection principle, due to Scholz, states that for D < -3 a fundamental discriminant,"

and the eigenspace recasting is there too:

> "The class group of $\mathbb{Q}(\sqrt{D}, \sqrt{-3})$ admits an action by the Galois group
> $(\mathbb{Z}/2)^2$" / "splits into eigenspaces of the action corresponding to the characters of the
> Galois group, of which one is trivial" / "Hence the Scholz reflection principle can be equivalently
> stated as the claim that two eigenspaces"

These are the same pairs as the candidate's, with the labels reversed (their `D < -3`, so their
`Q(sqrt D)` is the imaginary member and `Q(sqrt -3D)` the real one; the candidate's `d > 0`). The
summariser, asked directly, answers that the Scholz case is presented as **classical motivation**,
after which "[i]t then moves to general Γ-extensions of a base field `K_0`". So: motivating instance
— yes. Instance the paper's own conjecture is worked out for — no.

### Claim C — "prints no joint law for it"
**CONFIRMED**, at section-read level, asked directly twice:
- "No. The Scholz discussion in subsection 1.1 states only that two eigenspace ranks differ by at
  most one. It gives no joint distribution, conditional probability, or formula for those eigenspaces."
- "It does not identify the two Scholz eigenspaces as such a pair or give a formula for them."

What the paper **does** print is a formula for the dependence between a representation and **its
dual**, in general:

> "Conjecture 1.1 implies independence between all the parts of
> $\operatorname{Cl}_{K|K_0}[p^{\infty}]$" / " corresponding to different irreducible representations
> except for a representation and its dual, and can" / " be used to give an explicit formula for the
> dependence between those two representations."

pointed (summariser) to **Theorem 1.2**'s displayed `ν({V})` and the `C_7` instance in §2 via
**Corollary 8.4** — neither of which I opened (**NOT OPENED**). So "prints no joint law *for this
pair*" stands; "prints no joint law at all" would be false and the entry does not say it.

### Claim D — "excludes K_0 = Q at p = 3"
**REAL, BUT MIS-LOCATED IN THE ENTRY.** The entry's line 59 attributes the exclusion to §1.1. §1.1
does **not** state it. Asked directly: "Subsection 1.1 does not say that Q fails the hypothesis, that
the conjecture doesn't apply to Q at p=3, or that the roots of unity must lie in the base field",
and the summariser flags its own contrary conclusion as **its inference**, not the text's.

The exclusion is real, and it sits in two places I did locate:
1. **Conjecture 1.1** (Section 1), hypothesis on the base field: "containing the $p^r$ th roots of
   unity but not the $p^{r+1}$ th roots of unity". With `r ≥ 1` (adversary 1's quoted setup
   sentence; I did not re-open that sentence, so `r ≥ 1` is **second-hand here**), `p = 3` requires
   `μ_3 ⊂ K_0`, which `Q` fails.
2. **§1.1 itself**, one step weaker and about relevance rather than hypothesis: "the reflection
   principle will only be relevant when $K_0$ contains the pth roots of unity", with the Gras form
   resting on "the action of $\Gamma$ on the pth roots of unity is trivial".

Corroborating detail that shows the exclusion is substantive and not a reading artefact: §1.1 uses
`Q` with `Γ = C_7` at **p = 2** as a worked example. `Q ⊃ μ_2 = {±1}` but `Q ⊉ μ_4`, so `r = 1` and
`Q` is **inside** the framework at `p = 2` and **outside** at `p = 3`. The framework's door is open to
`Q` at exactly the prime the candidate does not use.

**Does the exclusion leave the candidate's exact object outside what the programme predicts?**
YES, on both available framings. The next three paragraphs are **MY OWN REASONING**, not findings
from the document.

(i) *As a `(Z/2)^2`-extension of `K_0 = Q` at `p = 3`*: outside Conjecture 1.1 outright, `Q ⊉ μ_3`.

(ii) *Recast as `Γ = Z/2` over `K_0 = Q(sqrt -3) = Q(μ_3)`* — which **does** satisfy the hypothesis
with `r = 1`: the recast collapses the candidate's object. I ran the character bookkeeping
(`/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chars.py`):

```
H = Gal(K/Q(sqrt -3)) = [(0, 0), (1, 0)]
  triv       restricted to H: [1, 1]   -> TRIVIAL
  chi_{-3}   restricted to H: [1, 1]   -> TRIVIAL
  chi_D      restricted to H: [1, -1]  -> SIGN (nontrivial)
  chi_{-3D}  restricted to H: [1, -1]  -> SIGN (nontrivial)
```

Both Scholz eigenspaces restrict to the **single** nontrivial character of `Γ = Z/2`. So over
`K_0 = Q(μ_3)` the candidate's pair is not two isotypic parts but **one**:
`Cl_3(K)^- ≅ Cl_3(Q(sqrt D)) ⊕ Cl_3(Q(sqrt -3D))`. Conjecture 1.1 in that framing predicts the law of
the **direct sum**, and a direct sum does not determine the ordered pair — so the candidate's joint
law is strictly finer than anything the conjecture predicts there. Also, both irreducible 3-adic
representations of `Z/2` are self-dual, so the "representation and its dual" dependence formula has
no distinct second representation to be about. (Adversary 2 reached the self-duality point
independently; I confirm it is right, and add the merging-into-one-part point, which is the sharper
version of it.)

(iii) Separately, the biquadratic-over-`Q` fields are a density-zero subfamily of all quadratic
extensions of `Q(μ_3)` ordered by discriminant (~`X^{1/2}` of ~`cX`), so even a correct prediction
for that family would not be a prediction for the candidate's family. Standard counting heuristic,
mine, uncomputed.

I did **not** read §9 ("a separate reflection principle about `p^r`-torsion ranks of dual pairs, when
the base field contains `p^r`-th roots of unity" — summariser's description of §1.1's forward
reference). By that description it is inside the same `μ_{p^r} ⊂ K_0` model and so by kind does not
reach `K_0 = Q, p = 3`, but **that is a guess from one sentence, not a read**: §9 remains **NOT OPENED**,
exactly as both adversaries left it.

## 3. The mathematics: does anything forbid independence for the candidate's own object?

The entry's presupposition finding (line 19) needs the candidate's clause "the single-field
Cohen–Lenstra heuristics ... neither predict nor forbid" to be FALSE. Claim A as I corrected it does
not deliver that, because §1.1's sentence is scoped to `μ_p ⊂ K_0`. So I tested the proposition
itself, as mathematics, at the candidate's exact object.

**My own proof (elementary, base-field-free).** If `X`, `Y` are independent, `X` unbounded, and
`|X − Y| ≤ 1` a.s., pick `m` with `P(Y = m) > 0` and `n` with `P(X = n) > 0` and `|n − m| ≥ 2`
(possible since `X` is unbounded). Then `P(X = n, Y = m) = P(X = n)P(Y = m) > 0`, contradicting
`|X − Y| ≤ 1`. So Scholz + unbounded 3-rank ⇒ dependence, with no hypothesis on the base field and
no appeal to Sawin–Wood's conjecture.

**Quantified at the candidate's pair.** I derived both single-field Cohen–Lenstra 3-rank laws from
their moments rather than quoting them
(`/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/cl.py`;
exact rationals, `E[#Sur(Cl,(Z/3)^n)] = 3^{-nu}`, `u = 0` imaginary / `u = 1` real, truncated at
rank 14, solved downward):

```
  r=0  imag=0.5601260779  real=0.8401891169
  r=1  imag=0.4200945584  real=0.1575354594
  r=2  imag=0.0196919324  real=0.0022721460
  r=3  imag=0.0000873902  real=0.0000032771
  r=4  imag=0.0000000410  real=0.0000000005
  sum imag=1.000000000000  sum real=1.000000000000
  check P(imag r=0) vs prod(1-3^-k) = 0.5601260779
```

Self-validation: `0.5601` is the classical CL figure for 3-rank 0 of imaginary quadratic fields
(`∏_{k≥1}(1−3^{-k})`, printed above and matching), and `0.8401891` reproduces the `.8402` the entry
quotes from Malle for 3-rank 0 on the real/CL side. The derivation is independent of either source.

Taking the two single-field laws as **independent** — the candidate's own null — and asking for
`r_3(-3d) − r_3(d) ∈ {0,1}` (Scholz for `d > 0`):

```
  P(Scholz band  r_imag - r_real in {0,1}) = 0.8928976195
  P(Scholz VIOLATED)                       = 0.1071023805
  lower bound from (a=0, b>=2) cell alone  = 0.0166184061
```

**10.71% of the independent product measure lies outside Scholz's band.** So the two single-field
Cohen–Lenstra laws, taken as independent, are flatly inconsistent with Scholz at the candidate's own
prime, pair and base field — they **forbid** independence, by a computable margin, with no joint
heuristic and no document required. The candidate's conditioning clause "neither predict nor forbid"
is **FALSE**, and `Q ⊉ μ_3` does not rescue it.

## 4. What this means for the entry's verdict

- **Claims B and C: CONFIRMED** at section-read level with located quotations.
- **Claim A: CONFIRMED as a quotation, OVER-SCOPED as an inference.** The entry should say the
  sentence is stated for the Gras/Leopoldt inequality inside the `μ_p ⊂ K_0` framework, and should
  stop using it as the ground for the candidate's clause being false.
- **Claim D: the exclusion is REAL but MIS-ATTRIBUTED to §1.1.** It lives in Conjecture 1.1's
  hypothesis, with §1.1 carrying only the weaker "only be relevant when `K_0` contains the pth roots
  of unity". And it does leave the candidate's object outside the programme's predictions on both
  framings (my reasoning, §2 D(i)–(iii)).
- **The leg STANDS as the entry uses it**, i.e. as askedness-without-closure: this pair opens the
  paper's first subsection, the paper prints no joint law for it, and its own conjecture does not
  reach it. Nothing I read weakens that.
- **The presupposition finding also stands, but on a different ground than the entry gives.** The
  "FALSE" at line 19 should be sourced to Scholz + unbounded CL 3-rank + the 0.1071 computation
  above, not to Sawin–Wood's sentence. Re-grounded, it is stronger than before: it is now a theorem
  about the candidate's own object with a number attached, not a quotation whose scope has to be
  stretched.
- Every citation of this paper in the entry and both logs should become **arXiv:2301.00791v2 §1.1**.
