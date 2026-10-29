# VERIFY-07-c — UQ-20261029-07, the routing row (fitted irreducible term E vs analytic entropy rate H)

Date: 2026-10-29. Role: fresh-context checker, post-batch verification pass. Not an adversary, not a judge; no verdict on the entry or on the row is recommended here.

Claim tested: the drafted routing row for UQ-20261029-07 as the brief states it — its two Henighan quotations and the assertion that Henighan et al. state the irreducible-loss/entropy identification as an assumption; its universal "nobody has printed the limit quantity" and its ground "the asymptote is fitted only on data whose H is unknown"; its admissibility under LEDGER.md's routing rule and the routed file's header; whether it is broader than the graded question; and whether its "computable part" is computable as written.

Verdict on the claim as the row makes it: **PARTIAL.** The Henighan assumption claim is CONFIRMED with both sentences located and given in full. The universal is UNVERIFIED (unenumerated; ten-plus unopened candidate titles, two of them plausible carriers by design). The ground "fitted only on data whose H is unknown" is REFUTED as written (arXiv:2601.10684 fits E with intervals on random walks whose H is exactly computable from the declared generator; it prints no H). The row drops the architecture limb and the named families of the graded question. Its computable part rests on HMM matrices and PCFG productions that no file in the record enumerates or generates by rule.

**I could not find the drafted row's text.** `grep UQ-20261029-07 ledger/routed-open-problems.md` returns nothing; no `ledger/batches/2026-10-29-1246.md` exists yet; no draft is in the repo or the scratchpad. I judged the row as the brief states it, and where the brief and the entry file differ I say so.

## Budget tally (recorded first)

- Web searches: 6 of 6. Web fetches: 5 of 5. No overrun, no unspent budget.
- Fetch 1: arxiv.org/pdf/2010.14701 (Henighan, summariser pass). Fetch 2: ar5iv.labs.arxiv.org/html/2010.14701 (Henighan, second retrieval path; served content ended at §2.2). Fetch 3: arxiv.org/html/2511.19997v1 (Sahasrabudhe). Fetch 4: arxiv.org/pdf/2601.10684 (Barkeshli, Alfarano & Gromov). Fetch 5: arxiv.org/html/2511.10618v1 (Badger & Neligeorge).
- No curl was attempted (route facts: 403 at this proxy is tool-scoped; VERIFY-07-a confirmed it on arxiv). Every read below went through the WebFetch summariser, so no sweep is a grep and I say "summariser strength" wherever that matters.
- No classifier refusals. The first Henighan pass declined to return whole paragraphs and gave short quotes; the second pass asked for fragments of at most 60 characters on a different path and succeeded. That is a smaller ask, not a rework of a refusal.

## Sources and read levels

| Source | Route | Read level |
|---|---|---|
| Henighan et al., arXiv:2010.14701 | arxiv.org/pdf, 1 pass | SECTION READ via summariser: §1 "To justify" passage, Eq. (1.2), §2.2 caution passage, §3.1 S(P) sentence, §3.4 fn 9 and its attached sentence, front matter, section titles |
| same document | ar5iv.labs.arxiv.org/html, 1 pass | SECTION READ via summariser: §1 passage in 60-char fragments, fn on the order of limits, §2.2 passage in fragments, Table 1 caption sentence. **Served content ended at §2.2**: §3.1 and §3.4 NOT obtainable on this path (summariser wrote NOT FOUND for §3.1). |
| Sahasrabudhe, arXiv:2511.19997v1 | arxiv.org/html, 1 pass | SECTION READ via summariser: §1, §2.4, §3.3–3.4, §4.1–4.2, §5.1, §5.5, §7, Tables 1–3, App. A.1 |
| Barkeshli, Alfarano & Gromov, arXiv:2601.10684 | arxiv.org/pdf, 1 pass | SECTION READ via summariser: §3, §3.1.x, §4, §4.1, §5.2–5.3, Figs 1, 4–8, 11, 12 fit boxes |
| Badger & Neligeorge, arXiv:2511.10618v1 | arxiv.org/html, 1 pass | SECTION READ via summariser: §2.1, §3, §3.3, §5.2, §8.2, Tables 1–3, Figs 6–7 |
| Entry, record, adversary logs 1 and 2, VERIFY-07-a, LEDGER.md (lines 18–31, 90–100, 160–172, 195–236), routed-open-problems.md (header and grep) | local files | FULL TEXT (entry; LEDGER.md sections; routed header); grep over the record and both adversary logs for every term below |

Independence: ONE reader (me, through the summariser) on every web document. Henighan: TWO retrieval paths, ONE document (two renderings; the ar5iv rendering numbers equations and footnotes differently). The record's P3 read was also arxiv.org/pdf through the summariser, so my first Henighan pass shares a route with the record; the ar5iv pass is the addition. Adversary 2's D1 read and mine are two readers of one document; I do not know adversary 2's URL, so the retrieval path may be shared.

Front matter, Henighan et al.: Tom Henighan, Jared Kaplan, Mor Katz, Mark Chen, Christopher Hesse, Jacob Jackson, Heewoo Jun, Tom B. Brown, Prafulla Dhariwal, Scott Gray, Chris Hallacy, Benjamin Mann, Alec Radford, Aditya Ramesh, Nick Ryder, Daniel M. Ziegler, John Schulman, Dario Amodei, Sam McCandlish (OpenAI; Kaplan also Johns Hopkins). Title: "Scaling Laws for Autoregressive Generative Modeling".

## (1) The two Henighan quotations — LOCATED, given in full; the assumption claim is CONFIRMED

### Quotation 1 — §1 Introduction, the sentence after Eq. (1.2)

RECONSTRUCTION from three consecutive ar5iv fragments, cross-checked against two arxiv-PDF fragments. ar5iv: (1) "To justify equation (1), we must assume that in the limit" / (2) "D→∞ followed by N,C→∞, an infinitely large transformer" / (3) "could model the data distribution exactly." PDF: "To justify equation (1.2), we must assume that in the limit D → ∞ followed" / "an infinitely large transformer could model the data distribution exactly." Junction checks: PDF fragment 1 ends "D → ∞ followed", ar5iv fragment 2 begins "D→∞ followed"; ar5iv fragment 2 ends "an infinitely large transformer", PDF fragment 2 begins "an infinitely large transformer". Both junctions overlap. Assembled:

> "To justify equation (1.2), we must assume that in the limit D → ∞ followed by N, C → ∞, an infinitely large transformer could model the data distribution exactly."

(The ar5iv rendering prints "equation (1)" where the PDF prints "(1.2)"; the PDF numbering is the one the entry uses.) Attached footnote (fn 3 in the PDF, fn 1 in ar5iv), two fragments: "We specify this order of limits to make it clear that" / "regularization will not be required." Eq. (1.2) as printed: L∞ ≈ S(True) "Irreducible Loss", (x0/x)^αx ≈ DKL(True||Model) "Reducible Loss". The summariser paraphrased the preceding sentence (returns to scale might look diminishing as the loss approaches L∞; the KL identification suggests otherwise) and I did not obtain it verbatim. The record's bare §1 quotation "the irreducible loss estimates the entropy of the true data distribution" was NOT re-located by me (not requested; budget) and is carried from the record.

Grammar and force: the opening words "To justify equation (1.2)" scope a justification condition for the decomposition. The main clause "we must assume that ..." ASSERTS that an assumption is required and names it: unlimited-capacity exact modelling in the stated order of limits. It does not assert the identification; it asserts the identification CONDITIONAL on that assumption. The row's statement that the paper gives the identification as an assumption is therefore SUPPORTED, with the precision that the assumption is about the model family's capacity in the limit and the identification is its consequence — which is exactly the thing the row's problem would test.

### Quotation 2 — §2.2 "Model Size Scaling and Aspect Ratios" (NOT §3.1)

Four consecutive ar5iv fragments, preceded and followed by their neighbours:

- Before (3 fragments): "We define L(N) using the loss at convergence (practically," / "this means as close to convergence as is feasible), but the" / "largest models we study will not have fully converged."
- Target (4 fragments): "Thus caution is warranted when interpreting L(N) trends" / "according to equation (1) and identifying the irreducible" / "loss as an entropy, and the reducible loss as a KL" / "divergence." Assembled: **"Thus caution is warranted when interpreting L(N) trends according to equation (1.2) and identifying the irreducible loss as an entropy, and the reducible loss as a KL divergence."** The PDF pass returned the same sentence cut after "(1.2)", consistent with the ar5iv text.
- After (PDF pass): "Nevertheless, the reducible losses typically fit very well to a pure power-law trend."

Grammar and force: "Thus" binds the caution to the preceding sentence's reason — the largest models are not fully converged while L(N) is defined at convergence. The clause ASSERTS that caution is warranted on two things: reading L(N) trends by Eq. (1.2), AND identifying the irreducible loss as an entropy (and the reducible loss as a KL divergence). The next sentence RECORDS A MOVE BACK toward confidence in the power-law fit. So the caution is an under-training caveat about finite, unconverged fits; it is not a conjecture that E differs from H in the limit. **The row's truncated form 'caution is warranted when interpreting L(N) tre[nds]' cuts the sentence before the clause that names the identification, which is the clause the row needs.** The record quotes it truncated too ("...according to equation (1.2)").

### The bare formulation and the hedged formulation

- Bare, §3.1 "Varying the Image Resolution and Encoding" (image-modelling section): "Thus we can identify the irreducible loss with S(P), the constant entropy of the true distribution." (PDF pass; preceded by a sentence that the KL divergence vanishes when the distributions match and is otherwise non-negative; followed by one saying the reducible loss then estimates the KL.) The record's §3.1 conditional "This interpretation can only make sense if in the limit of infinite data and compute" was NOT re-located by me: the ar5iv path's served content ended at §2.2 and the PDF pass did not request it.
- Hedged: Quotation 1 (an assumption named) and Quotation 2 (caution attached to the identification, with its reason). These are the formulations to cite; the row cites them.
- Scope of Henighan's regime, in its own words (Table 1 caption, 3 ar5iv fragments): "Unfortunately, even with data from the largest language" / "models we cannot yet obtain a meaningful estimate for the" / "entropy of natural language." REGIME: natural multimodal corpora with unknown H; unit one trained model; instrument fitted L(N), L(C) with a fitted L∞; no analytic comparator. The row's exact-H process is OUTSIDE this regime; Henighan say nothing about such a process.

### A scope finding the brief did not ask for: fn 9

Footnote 9, "We have not encountered a clear irreducible loss in the range of model sizes that we have explored.", sits in §3.4 "Finetuning on ImageNet at 32x32 Resolution" and is attached to the sentence containing "the pre-trained models follow a smooth, pure powerlaw" (which the summariser says continues with trends in loss and error rate). On that reading it scopes the ImageNet finetuning classification trends, not the generative-modelling L∞ fits of Table 1, where the paper DOES print irreducible-loss estimates for its image and video domains. The entry's presupposition 2, the record's R3 and the entry's Routing field all use fn 9 as a general statement that the generative asymptote is not visible in an accessible range. That looks like a regime misattribution. Read level: summariser strength, section title plus a partial quote of the attached sentence; one ar5iv `offset` fetch into §3.4 would settle it, and I had no fetch left. The row's source column, as the brief states it, does not cite fn 9; the entry's Routing field does.

## (2) The universal "nobody has printed the limit quantity" — UNVERIFIED; one ground REFUTED as written

### Documents opened this pass, against the row's quantity (fitted E beside analytic H of the same process)

- **Henighan et al. 2010.14701** (SECTION READ): prints fitted L∞ for natural domains; no analytic H; says it cannot estimate the entropy of natural language. Does not carry the quantity.
- **Sahasrabudhe 2511.19997v1** (SECTION READ) — the entry's "single unopened source most likely to settle the residue". It does NOT. Excess loss is defined as observed minus analytic floor, L_excess = L_obs − L_min (Eq. 3 §2.4; Eq. 9 §3.4), floors H(A|B) = log K (Eq. 8), printed in Table 2's "Floor" column as 0.00 (K=1 and forward), 1.61 (K=5 inverse), 2.08 (K=8 inverse). Table 1 (scratch GPT-2 vs MLP; Forward / Inverse / Gap, nats, no intervals): transformer K=1 3.60 / 3.60 / 0.00; K=5 0.91 / 2.07 / 1.16; K=8 0.67 / 1.57 / 0.90; MLP K=1 0.48 / 0.50 / 0.01; K=5 0.46 / 0.69 / 0.22; K=8 0.42 / 0.53 / 0.11. **"1.16 nats at K=5" is the inverse-minus-forward gap (2.07 − 0.91), not an excess over the floor** — the record's different-numerator warning is confirmed. One model size (GPT-2 Small, about 124M), 40,000 pairs, 20 epochs, TRAIN loss ("No train/validation/test split is used in this version", App. A.1). No parametric fit, no ladder, no asymptote: "We do not claim scale laws for directional asymmetry" (§7). "irreducible loss", "entropy rate", "asymptote": NOT FOUND. REGIME: deterministic/random string mappings with analytic floors, one scale, optimisation-dynamics study. The row is OUTSIDE it.
- **Barkeshli, Alfarano & Gromov 2601.10684** (SECTION READ): fits L(N)_D = E_D + A_D N^(−α_D) and L(D)_N = E_N + B_N D^(−β_N) (Eq. 2) and E + B/C (Eq. 7). Printed irreducible terms with intervals: Fig. 1 ER 8K nodes/50K edges, unbiased walk, E = 2.61 [2.61, 2.61] (E_D rows 2.61–2.63; E_N 2.61); Fig. 4 biased κ=1, E = 2.32 [2.32, 2.32]; Fig. 5 ER 1K/5K, E = 2.36 [2.36, 2.36] and 2.35 [2.35, 2.36]; Fig. 6 language bigram (GPT-2 BPE, ~50K nodes), E = 5.40 [5.39, 5.40]; Fig. 7 T1L 4.08 [4.06, 4.10]; Fig. 8 T2L 3.85 [3.82, 3.88]; Fig. 11 language 3.03 [2.97, 3.08]; Fig. 12 2.67 [2.63, 2.70]; §5.2 Chinchilla 2D fit E = 1.8172; §5.3 E = 2.802 (no intervals on the last two). Ladders: Fig. 1 N 1.44M–117.4M, D 27.3M–3.49B; Fig. 6 N 3.3M–203.6M, D 133M–17.0B; context length 50. **Analytic entropy printed for any process: NONE. Comparison of a fitted E to an exact entropy: NOT FOUND.** "For cross-entropy loss, E is the entropy of the distribution p" (§3); "we take the smallest value of EN or ED that appear in our fits and use that as a proxy for the entropy E" (§4); "it is not feasible to compute the entropy of the sequences generated by TnL" (§4). "entropy rate": NOT FOUND; "Markov", "stationary distribution", "random walk": FOUND. This confirms adversary 2's reading (same document, second reader).
- **Badger & Neligeorge 2511.10618v1** (SECTION READ) — one of adversary 2's four unopened returns, now opened. No scaling-law fit: entropy is estimated directly as cross-entropy plus an amortized embedding cost (Eq. 1); FineWeb-Edu and FineMath only; "synthetic", "Markov", "entropy rate", "irreducible loss", "asymptote", "ground truth": NOT FOUND. Not a carrier.

### The ground "the asymptote is fitted only on data whose H is unknown" — FALSE AS WRITTEN

D1 fits E with bootstrap-style intervals on unbiased and biased random walks on declared Erdős–Rényi and Barabási–Albert graphs and on a bigram model. For an unbiased walk the entropy rate is H = Σ_u π(u) ln deg(u) with π(u) = deg(u)/2|E|, exactly computable from the graph instance; D1 prints the ingredients and not the value. So an asymptote HAS been fitted, with an interval, on data whose H is exactly computable; what has not been printed is H beside it. The entry's own words ("prints no analytic H for any of its processes") are the accurate ground; the row's (as the brief states it) are not.

MY OWN ARITHMETIC, labelled, not a finding: a Poisson(12.5) approximation to the degree distribution of G(8000, 50000) gives H ≈ 2.566 nats/step against D1's fitted E = 2.61 [2.61, 2.61], i.e. E − H ≈ +0.044 nats. Two unknowns make this illustrative only: the exact H needs D1's graph instance (its degree sequence), which is not printed; and if D1 scores the first token of each 50-token sequence from a uniform start node, the per-token optimum rises by ln(8000)/50 ≈ 0.180 to about 2.695, which would flip the sign (E − H ≈ −0.08). The "one subtraction on published numbers" adversary 2 proposed therefore needs D1's instance and loss convention, not only D1's printed numbers. What would ground it: D1's released graph seed/degree sequence and its loss-averaging convention.

### Titles my six searches returned, and whether I opened each (one line per document; repeats collapsed)

Opened: arXiv:2010.14701; arXiv:2511.19997; arXiv:2601.10684; arXiv:2511.10618 (all above).

NOT OPENED, could carry the quantity (the two starred are plausible carriers by design):
- * arXiv:2405.16684 "gzip Predicts Data-dependent Scaling Laws" — from memory (not a reading) it fits Chinchilla-form laws on PCFG-generated corpora, so it is the one returned title that fits the row's exact estimator on a process whose H is knowable; whether it prints the PCFG entropy I do not know.
- * arXiv:2505.07070 Cagnetta, Favero, Sclocchi & Wyart, "Scaling Laws and Representation Learning in Simple Hierarchical Languages" (PRE, DOI 10.1103/qtd6-nl8p) — §VI–VIII remain unread by anyone in this ledger (adversary 1 read §I–V.2).
- arXiv:2610.27789 Zhao, Ren et al., "Foundations of the Scaling Law".
- arXiv:2505.07067 "Learning curves theory for hierarchically compositional data with power-law distributed features".
- arXiv:2602.07488 "Deriving neural scaling laws from the statistics of natural language".
- arXiv:2605.07546 "On the Invariance and Generality of Neural Scaling Laws".
- arXiv:2402.04161 Makkuva et al., "Attention with Markov" (P2's group; from memory a fixed-scale loss-vs-entropy-rate study, not a fit — memory, not a reading).
- arXiv:2406.04089 "On Limitation of Transformer for Learning HMMs".
- arXiv:2512.22088 "Unifying Learning Dynamics and Generalization in Transformers Scaling Law" (seen only as a pith.science repost; resolved to its arXiv id here).
- Takahashi & Tanaka-Ishii, "Cross Entropy of Neural Language Models at Infinity—A New Bound of the Entropy Rate", Entropy 2018 (returned as PMC7512401; PMC is hard-blocked; the mdpi.com route was not tried for budget). Information-theory-of-LLMs literature; extrapolates to infinity on English (unknown H); whether it validates on a known-H source is unknown to me.
- arXiv:2411.12925 "Loss-to-Loss Prediction"; arXiv:2407.06645 "Entropy Law"; arXiv:2603.06592 (title not shown by the search).
- Unlikely carriers by domain, listed for completeness: arXiv:2602.15253 (single-cell), arXiv:2510.08702 (code), opt-ml 2024 paper78 "Scaling Collapse...", arXiv:2502.10927 (self-attention symmetry).
- Method sources for H, not carriers: arXiv:2008.12886 Jurgens & Crutchfield "Shannon Entropy Rate of Hidden Markov Processes"; Chi 1999 (ACL J99-1004); ACL N06-1044.
- Aggregators, glossaries and reposts (pith.science x3, papers.cool, alphaxiv, aitopics x2, fugumt, researchgate x3, slideslive x2, syhya.github.io, kempnerinstitute, memx.app, zeroentropy.dev, liuyz0.github.io, aiengineeringfromscratch): not priors; counted as repeats of the papers above where identifiable.

### Grade of the universal

Over the documents this ledger's readers have opened (this pass: 4; earlier: P1 arXiv:2310.14840, P2 arXiv:2404.08335, arXiv:2405.15943, arXiv:2407.17686, arXiv:2505.07070 §I–V.2), no document prints a fitted irreducible term beside the analytic entropy rate of the same process. Over the literature: **UNVERIFIED** — at least 13 returned documents unopened, two of them plausible carriers by design. The ledger's own qualifier must be restored: "no source the ledger's readers opened prints ..." is supportable; "nobody has printed" is not.

## (3) The routing test — admissible only on one clause, and only on a reading the judge must make

Entry Status line, verbatim: "Rejected — Gate 2 (novelty Low on the question as posed; the asymptotic residue is asked-but-open and recommended for routing)".

LEDGER.md Routing rule (ENVIRONMENT, line 23), verbatim: "A candidate rejected because it was already asked and is still unanswered gets a row appended to `ledger/routed-open-problems.md` (date, ledger ID, problem, source showing it is open, rough tier per PROMPT.md's tractability filter). The daily research run reads that file as a source of candidate problems. Answered or disguised-known rejections are not routed." Definitions (lines 97–98): "**Open problem:** asked but unanswered. Not for this ledger — route it to the open-questions project" / "**Disguised known:** an asked or answered question in new vocabulary. Rejected."

Routed file header, verbatim: "Questions that are posed in print and still open, found by the ledger while working a candidate. Usually the candidate was itself rejected because its question had already been asked; occasionally a row is an adjacent question located during Gate 2 or Gate 4 while the candidate survived, and then the Problem column states the question on the posing paper's own terms and says where it came from. Either way the test for a row is the same: someone posed it in print, and the Source column shows it unanswered."

Reading, marked as my own: the header admits two kinds of row. The second ("adjacent question ... while the candidate survived") is closed to this entry: the candidate did not survive. The first ("the candidate was itself rejected because its question had already been asked") is the only clause under which the row can enter, and it requires, by the rule, that the question be "still unanswered" rather than "answered or disguised-known". The entry's own text pulls both ways: its Strongest remaining objection says P2 "answers the canonical convergence limb inside the candidate's own declared byte-level regime", which is the vocabulary of an answered rejection, while its Routing field says the rejection is "asked-but-still-open on the asymptotic limb, not answered and not a disguised known on that limb". The rule and header speak of a candidate and a question, not of a limb; routing a limb of a rejected question is not provided for in either text, and the header's test ("someone posed it in print") must then be met by the limb. On that test the Source column is thin: Henighan's two sentences name an assumption and attach a caution; neither poses a question, and Henighan's regime (natural data, unknown H) is one in which the row's problem cannot be posed — their own Table 1 caption says so. P1 and P2 pose and report the finite-scale comparison, which the entry itself grades as the answered part. So: admissible at most under the first clause, and only if the judge accepts (i) a stated assumption plus a caution as "posed in print" and (ii) a limb as the routable unit. If the judge reads the Gate 2 ground as "answered on the question as posed", the rule's last sentence bars the row.

## (4) Broader than what was graded — yes, on every axis the entry called novel

Row problem (as the brief states it): "does the fitted irreducible term E of a neural scaling law exceed the analytic entropy rate H of a process whose H is exactly computable, in the limit of parameters and tokens, and by how much (Delta = E − H in nats per symbol, with an interval)?"

Canonical Version A: "... does the loss achievable by a transformer family converge to H as parameters and tokens grow, or to a strictly positive floor H + Delta, and is Delta a property of the architecture rather than of the data?" Version B adds byte-level modelling, a fixed 8-state HMM and a CNF PCFG, two architecture families (pre-LN decoder-only transformer; one gated-linear-recurrent/SSM family), matched FLOPs, the E estimator with bootstrap interval, and a ±0.01 nats/symbol band.

Dropped by the row: the architecture index ("a transformer family" becomes "a neural scaling law", unindexed); the second limb entirely ("is Delta a property of the architecture rather than of the data"); the two named process families (generic "a process whose H is exactly computable"); the byte-level/tokenization rule; matched FLOPs; the ±0.01 band (the interval survives). Kept: the limit-with-interval limb, which is the one the entry said no opened source prints. Added: an order-1 Markov sanity arm (computable part only).

Consequence, marked as my own reasoning: stated generically, the row's problem is satisfied by ANY paper that fits E on ANY exactly computable process and compares — and the literature already has papers one step short of that (D1 fits E on random walks; the unopened gzip/PCFG scaling-law paper may fit E on PCFGs). The broadening therefore raises the chance the row asks for published or near-published work, and it discards the one limb — architecture-indexed Delta at matched compute across two families — that the entry's own novelty text said no prior carried. A row that kept Version B's architecture axis and named families would be narrower than the literature; the row as drafted is wider than it.

## (5) The "computable part" — not computable as written

Grep over the entry, the record and both adversary logs (counts: entry / record / adv1 / adv2):
- "matri*": 3 / 1 / 0 / 11 — every occurrence is the phrase "declared transition and emission matrices" or a sentence saying none are given.
- "production*": 3 / 2 / 4 / 8 — likewise ("declared production probabilities", or sentences saying none are given).
- Numeric matrix rows (three or more consecutive decimals): 0 / 0 / 0 / 0.
- Production arrows (`X -> Y`): 0 / 0 / 0 / 1 — adversary 2's single match is "H_L -> H", a limit, not a production.
- SSM family names: "Mamba" 1 / 0 / 3 / 4 — in the entry only at line 23, in the pointer about adversary 2's unopened returns, never as the declared family; RWKV, GLA, Griffin, Hawk, RetNet, HGRN, S4/S6, xLSTM: 0 everywhere.
- "context length/window": 4 / 0 / 3 / 13 — in the entry only in sentences saying it is never declared.

So the entry nowhere enumerates the HMM transition and emission matrices or the PCFG productions, states no rule that generates them (no seed, no sampler, no family parameterisation), names no SSM family and declares no context length. Presupposition 6's "enumerated the members" is contradicted by the record's own text, as adversary 2 found and the entry concedes (attack 5 Unresolved; "a Gate 1 defect with the one permitted reformulation already spent").

What this does to the row: its computable part inherits the same undeclared sets. H for the HMM arm cannot be computed until someone writes the matrices; the PCFG H cannot be computed until someone writes the productions; the Blackwell integral is numerical, not closed form (record R2 concedes it; the method source arXiv:2008.12886 was returned and not opened). The row's "declared exact-H HMM and PCFG" is therefore a specification step that has not been taken, and the row's Tier claim rests on it. The only arm fully specified in principle is the order-1 Markov sanity arm; P2's binary order-2 switching source is the nearest declared instance, and my re-run of the record's arithmetic from P2's printed closed form confirms H_Ber(0.2) = 0.5004 nats/char and ln 2 − H = 0.1927 (the record's 0.193). A row that wants a computable part it can start tomorrow has two declared processes already in print — D1's ER random walks (instance needed) and P2's switching source — and does not need the unenumerated HMM.

## Brief errors (places the brief was wrong about the record)

1. The brief places the "caution is warranted" sentence in §3.1 ("sections 1 and 3.1"). It is in §2.2 "Model Size Scaling and Aspect Ratios"; §3.1 holds the bare "identify the irreducible loss with S(P)" sentence. The entry has §2.2 right. If the drafted row says §3.1 for the caution sentence, that is a citation error in the row.
2. The brief's second quotation is truncated before the clause that names the identification ("... and identifying the irreducible loss as an entropy, and the reducible loss as a KL divergence."). The record is truncated at the same point. The dropped clause is the one that bears on the row.
3. The brief's stated ground "the asymptote is fitted only on data whose H is unknown" is false as written (D1). The entry's own phrasing ("prints no analytic H for any of its processes") is correct; the brief/row's is a slip relative to the entry.
4. The brief says "a row was drafted"; no row text exists in the repo or scratchpad, so I judged the row as the brief states it.

## Citation corrections

- Caution sentence: Henighan et al. §2.2, not §3.1. Equation label (1.2) in the PDF rendering, (1) in ar5iv. Footnote attached to the "To justify" sentence: fn 3 (PDF) / fn 1 (ar5iv).
- fn 9 sits in §3.4 "Finetuning on ImageNet at 32x32 Resolution", attached to the "pre-trained models follow a smooth, pure powerlaw" sentence; its scope is the finetuning trends (summariser strength).
- arXiv:2511.19997 "1.16 nats at K=5" is the inverse-minus-forward gap (2.07 − 0.91), Table 1; floors ln K printed only in Table 2 (1.61, 2.08).
- arXiv:2601.10684 authors: Maissam Barkeshli, Alberto Alfarano, Andrey Gromov. arXiv:2511.10618 authors: Benjamin L. Badger, Matthew Neligeorge (IBM).

## Routes failed / limits

- None failed outright. ar5iv served a page whose summarised content ended at §2.2, so §3.1 and §3.4 were not obtainable on that path; the `offset` continuation was not used because the fetch budget was spent, not because it was refused.
- Henighan §3.1 "This interpretation can only make sense if ..." (record's fragment) and the bare §1 "the irreducible loss estimates the entropy of the true data distribution" were not re-located by me (budget); carried from the record, read level for those two strings: not re-read.
- PMC route for Takahashi & Tanaka-Ishii not tried (hard-blocked per route facts); mdpi.com not tried (budget). No curl attempts. No Unpaywall. No personal identifier in any URL.
- All sweeps are summariser passes, not grep; a single pass can miss an occurrence, and I did not run a second dedicated sweep on any web document (one pass each; budget). The NOT FOUNDs above are therefore single-pass absences and I say so.

## Bearing (for the judge; no verdict recommended)

The row's Henighan limb is sound and stronger in full than truncated: the paper makes the identification conditional on a named assumption and attaches a caution to it, and the caution's own reason is under-training, not architecture. The row's universal cannot be graded supported: thirteen-plus returned titles are unopened and two of them fit the row's exact estimator on knowable-H processes by design. The row's ground "fitted only on unknown-H data" is false against a document two readers have now opened: D1 fits E with intervals on random walks whose H is exactly computable from its generator and prints no H — so the gap is one unprinted subtraction whose sign my labelled arithmetic cannot fix without D1's instance and loss convention. Under the rule and header as written, the row enters only through "rejected because already asked and still unanswered", on a reading that treats a stated assumption as a posed question and a limb as the routable unit; the entry's own Strongest remaining objection uses the vocabulary of an answered rejection. The row drops every clause the entry called novel (architecture index, second limb, named families, byte-level rule) and keeps the limit-with-interval limb, so it is broader than the graded question in the direction that asks for published work. Its computable part depends on HMM matrices and PCFG productions that no file in the record contains or generates by rule, which is the entry's own second rejection leg.
