# VERIFY - UQ-20261022-19: does "Reasoning-Aware IRT" already print the within-item dose-response separated from between-item difficulty selection?

Checker: fresh context. Budget used: 7 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

The entry's surviving remainder: that the candidate's estimand - the decomposition of the
reported accuracy-versus-reasoning-token relationship into (i) a WITHIN-ITEM causal
dose-response and (ii) a BETWEEN-ITEM difficulty-selection component - **is not already
computed anywhere**, so that the question is asked-but-still-open and a routing row is
warranted. The entry is already rejected on a different ground (arXiv:2608.04001, which
proposes the randomized-budget experiment in print without running it). This check tests the
remainder against the ONE source the intake designated as nearest neighbour and recorded as
UNOPENED at paper level: "Reasoning-Aware IRT: Explainable Evaluation of Test-Time Scaling in
Reasoning Models", NeurIPS 2026 virtual poster 139400.

The hinge, as the task sets it: if the paper prints a within-item dose-response on a
reasoning-token axis separated from item difficulty, the question is ASKED AND ANSWERED and the
routing row is WITHHELD. If it only fits IRT to final accuracy with no token-budget dose axis,
the row stands.

## READ LEVEL

**"Reasoning-Aware IRT: Explainable Evaluation of Test-Time Scaling in Reasoning Models":
ABSTRACT ONLY (NeurIPS 2026 virtual poster page, title + single-author front line + abstract).
PAPER-LEVEL: COULD NOT READ.**

I did advance the record on identity: the paper now has an identifier it did not have before.

- Exact title as printed: `Reasoning-Aware IRT: Explainable Evaluation of Test-Time Scaling in Reasoning Models`
- Author list, from the poster page's own author line, in printed order: **Ratthachat Chatpatanasiri** - a SINGLE author. No co-authors are listed. I note explicitly that this is the poster page's author line, not a PDF front matter; I could not reach front matter.
- Venue / year: NeurIPS 2026, poster session Wed 9 Dec 2026, 10:00-13:00 AEDT, Hall 1-4.
- Identifier: **OpenReview `Szz5xYoydw`** (https://openreview.net/forum?id=Szz5xYoydw), linked from the
  poster page. NeurIPS internal poster id 139400. **No arXiv ID and no DOI exists for it as far as
  two searches reach.**

Disposition of the five candidate arXiv identifiers the intake could not attribute. **None of them
is this paper.** Two are positively identified as different papers:
- `arXiv:2608.04001` = "Test-Time Scaling in Reasoning LLMs: Inference Regimes, Evaluation, and
  Reproducibility" - i.e. the paper the entry was ALREADY rejected on. It is not the IRT paper.
- `arXiv:2510.06014` = "ARISE: An Adaptive Resolution-Aware Metric for Test-Time Scaling Evaluation
  in Large Reasoning Models". Not the IRT paper.
- `arXiv:2509.06861`, `arXiv:2503.19877`, `arXiv:2505.20522`: NOT CHECKED individually. They are
  excluded only by the negative that no arXiv posting of this title surfaced at either search, which
  is weaker than a positive exclusion. Treat them as unresolved rather than cleared.

Read level is the governing fact of this note. Everything below that bears on sub-claims (c) and
(d) is bounded by ABSTRACT ONLY. "Abstract-level only" is a fact about my read, not about the paper.

## WHAT THE SOURCE SAYS (quotations as served)

The abstract, **a RECONSTRUCTION assembled from 12 ordered consecutive segments** returned by the
summariser under its ~125-character verbatim cap. Junctions were checked for grammatical continuity
at every seam; no string was completed by inference. Segment numbers are mine.

1. "Reasoning models increasingly depend on test-time computation, but raw accuracy conflates"
2. "intrinsic ability, problem difficulty, guessing effects, and reasoning budget."
3. "Item Response Theory (IRT) adjusts for problem difficulty, yet collapses test-time compute"
4. "into a single latent score."
5. "We propose reasoning-aware IRT, an extension in which each model's effective ability depends"
6. "on baseline ability, reasoning-budget responsiveness, and overthinking curvature."
7. "Parameter estimation is performed via multi-pass generalized EM with post-hoc initialization refinement."
8. "On LiveBench with 42 language models, our method improves rank stability, gives stronger"
9. "held-out correctness discrimination, and reveals interpretable structure unavailable to classical IRT:"
10. "a unified benchmark--ability scale with quantified reasoning-token benefits,"
11. "budget-efficient and overthinking regimes, and rank reversals obscured by raw scores."
12. "Our framework offers a compact, explainable evaluation tool for reasoning models under test-time scaling."

Openers and what they scope, taken one at a time, because this is where the sub-claims turn:

- Segments 1-2. Opening words: "Reasoning models increasingly depend on test-time computation, but
  raw accuracy conflates ...". The opener scopes a STATEMENT OF THE PROBLEM about *raw accuracy*,
  not about the authors' method. The clause ASSERTS that accuracy confounds four things - ability,
  difficulty, guessing, budget. This is the motivation sentence. It is not a measurement, and it
  must not be read as the paper reporting a decomposition.
- Segments 3-4. Opening words: "Item Response Theory (IRT) adjusts for problem difficulty, yet
  collapses test-time compute into a single latent score." The opener scopes **CLASSICAL IRT, not
  this paper**. The clause DENIES that plain IRT separates a compute axis: in plain IRT, compute is
  absorbed into one latent score. This is the sentence that disposes of the "IRT is already the
  decomposition" worry for the generic case.
- Segments 5-6. Opening words: "**We propose** reasoning-aware IRT, **an extension in which** each
  model's effective ability depends on ...". The opener scopes a MODEL SPECIFICATION the author is
  introducing. The clause ASSERTS that a budget-responsiveness term EXISTS IN THEIR MODEL. It does
  not assert a measured value, and the words "each **model's** effective ability" locate the term at
  the MODEL level, not at the item level.
- Segments 8-11. Opening words: "**On LiveBench with 42 language models**, our method improves ...".
  The opener scopes every claim after it to that one benchmark and that one model pool. Inside the
  colon the clause ASSERTS that the fit yields "quantified reasoning-token benefits" - i.e. it
  announces that numbers were produced. **No number, unit or denominator is named anywhere in the
  abstract.**
- Segment 12. Opening words: "Our framework offers ...". The opener scopes a TOOL claim. The clause
  RECORDS A MOVE AWAY from measurement toward instrument-building ("a compact, explainable
  evaluation tool").

Sub-claim answers, in order.

**(a) Identity.** Established as far as the poster goes; see READ LEVEL. Title, single author
(Ratthachat Chatpatanasiri), NeurIPS 2026, OpenReview `Szz5xYoydw`. Paper level COULD NOT READ -
distinct from NOT FOUND: the document exists and is located, I could not open it.

**(b) Is there a DOSE axis - reasoning tokens / thinking budget as an axis, with the same item at
two or more compute levels?** **PARTLY YES at the model level; the item-level question is NOT
SETTLED by the abstract.** The settling sentence available to me is segments 5-6: "We propose
reasoning-aware IRT, an extension in which each model's effective ability depends on baseline
ability, reasoning-budget responsiveness, and overthinking curvature." Corroborated by segment 10,
"a unified benchmark--ability scale with quantified reasoning-token benefits". So reasoning budget
is NOT collapsed into the latent score here: it is a named covariate with a responsiveness slope and
a curvature term, fitted alongside IRT's item-difficulty parameter. That is strictly more than "an
IRT model of final accuracy across items", so the blunt form of the hinge ("it only fits IRT to
final accuracy") is FALSE. But the budget term is attached to "each **model's** effective ability",
i.e. it is a per-MODEL slope pooled over items; the abstract nowhere says the same ITEM is run at two
or more budgets. With 42 models over one benchmark, each item is answered at 42 different token
counts, but that is between-MODEL variation, not a per-item dose series. COULD NOT CHECK at paper
level.

**(c) Manipulated or observed?** **COULD NOT CHECK.** No sentence in the reachable text says whether
the reasoning budget is set by a dial / max-token cap / forced stop, or read off natural trace
lengths. I will not infer it. I record only the structural pressure, as my own reading and not as a
finding: a 42-model cross-sectional fit on one benchmark is the shape of an OBSERVATIONAL design, and
if the budget is observed trace length then the confound the candidate exists to break - harder
items draw longer traces - survives inside this paper too. That is a hypothesis for whoever opens
the PDF, not a result.

**(d) Is a within-item effect printed, separated from item difficulty - a number, a slope, a variance
decomposition, a share?** **No such number is named in anything I could read.** I cannot name a
number, a table, a figure, a unit or a denominator. What the reachable text does is ANNOUNCE the
quantity: segment 10's "quantified reasoning-token benefits" asserts that numbers exist in the body
without printing one, and segments 5-6 DEFINE the parameter ("an extension in which ..."). On my
read level, therefore, the paper **DEFINES and ANNOUNCES** a difficulty-adjusted reasoning-token
slope; whether it PRINTS one, and of what kind, is COULD NOT CHECK. Published is not performed, and
announced is not printed.

**Numerator and denominator, for the quantity the paper announces versus the candidate's.** This is
the comparison that decides the entry even if someone later opens the PDF and finds a number.
- The paper's announced numerator class, from segments 5-6 and 10: a **per-model** responsiveness
  coefficient (plus an overthinking curvature) in a latent-ability function, with item difficulty
  (and, by IRT convention, discrimination and guessing) carried as separate item parameters.
  Denominator: the 42-model x LiveBench-item response matrix - models are the units, items the
  conditioning variable.
- The candidate's numerator class: a **within-item** dose-response of correctness to a compute dose,
  with the between-item difficulty-selection component split off as its own term. Denominator: items
  (or item x budget cells), with compute as the varied factor.
- What the paper's class MISSES relative to the candidate's: any per-item dose series; any causal
  manipulation of compute on a held-fixed item; and any variance decomposition or share that
  apportions the observed accuracy-token relationship between a within-item and a between-item
  component. Conditioning on a difficulty parameter is not the same object as reporting the size of
  the between-item selection component.
- What the paper's class INCLUDES that the candidate EXCLUDES: cross-model ability differences,
  guessing, overthinking curvature, model rank stability and rank reversals - all model-comparison
  estimands that the candidate's within-item decomposition does not contain, and all of which are
  what this paper's stated purpose ("a compact, explainable evaluation tool") is built for.
  A number one word away from the claim's is a different quantity, and "model's budget
  responsiveness, adjusted for item difficulty" is one word away from "within-item dose-response net
  of between-item difficulty selection".

## REGIME

In the paper's own words, as far as the abstract states it, and the opener that scopes it is "On
LiveBench with 42 language models":
- Population / instrument: **LiveBench**. One benchmark. No other item set is named.
- Units: **42 language models** ("42 language models"), unnamed in the abstract - no model list,
  no families, no sizes.
- Unit of analysis: the model, with items as conditioning parameters ("each model's effective
  ability").
- Compute range: **NOT STATED.** No token counts, no budget caps, no minimum or maximum. "reasoning
  budget" and "reasoning-token benefits" appear with no numeric range anywhere in the abstract.
- Estimation condition: "multi-pass generalized EM with post-hoc initialization refinement".
- Outcome: item-level correctness, scored for "held-out correctness discrimination" and "rank
  stability".

Does the candidate's population sit inside it? **Partly, and not where it matters.** The candidate's
axis (reasoning tokens vs accuracy on reasoning items) and the paper's axis are the same family. But
the candidate's unit of analysis is the ITEM under varied compute, and this regime's unit is the
MODEL under one unspecified compute condition per response; the candidate's operating condition is a
manipulated budget, and this regime states no budget manipulation at all. A result established over
42 models on LiveBench with an unstated compute range is silent about a per-item dose-response under
a budget dial, not supportive of it and not contradictory to it.

## DEFECTS FOUND

1. **The entry's remainder is too strong as written and must be narrowed.** "Not already computed
   anywhere" cannot stand unqualified once this paper is on the table: the paper's own abstract
   announces a reasoning-budget slope fitted jointly with item difficulty, which is the same
   *family* as the candidate's quantity. The remainder survives only in its precise form - no
   WITHIN-ITEM, MANIPULATED-dose decomposition is shown to be computed - and the entry should say so
   in those words rather than in the general ones.
2. **The intake's nomination was the right KIND, and the record's note that it was never opened is
   the live defect.** Kind-of-document test, written down before naming it, as the discipline
   requires: what could settle this question is a document that fits a latent-variable model in
   which an item-difficulty parameter and a compute-dose term appear in the same likelihood, and
   that reports an estimate of the compute term. An IRT-framework paper on test-time scaling is
   exactly that kind. So the nomination was not a guess. It remains COULD NOT READ, so it settles
   nothing - but it is the correct target and the entry should not be promoted while it is shut.
3. **The entry's citation of the source is thin and now improvable**: it carries no author, no
   identifier and no venue beyond the poster URL. It should now carry: Chatpatanasiri, R. (single
   author), NeurIPS 2026, OpenReview `Szz5xYoydw`, poster 139400, no arXiv ID, no DOI.
4. **Two of the five unattributed arXiv candidates are positively other papers** and should be
   struck from the entry's candidate list rather than left dangling: 2608.04001 is the rejection
   ground's own paper, 2510.06014 is ARISE. Leaving them listed as possible identities for the IRT
   paper invites a future agent to conflate the nearest neighbour with the rejection ground.
5. **An unopened lead, named as a lead and not as a finding.** A second-search return,
   `arXiv:2512.07019`, "Latency-Response Theory Model: Evaluating Large Language Models via Response
   Accuracy and Chain-of-Thought Length", is the same KIND by the test in defect 2 - a latent-trait
   model with chain-of-thought length on an axis. I did not open it; my fetch budget was exhausted.
   I am naming it as an unopened lead that passes the kind test, not as evidence of anything. It is
   one document that surfaced at one query; it is not corroboration of anything.
6. **Counting discipline, recorded so the next pass does not inflate it:** the IRT title came back at
   both of my searches and at the poster fetch. That is ONE document surfacing three times, not
   three sources. No part of this note treats repeated title returns as corroboration.
7. **OpenReview is effectively closed at this proxy** (see routes below), which means the record
   should not keep re-nominating "open the OpenReview PDF" as a cheap next step. It is not cheap
   here; it needs a different route or a different agent.

## ROUTES THAT FAILED

- `https://openreview.net/pdf?id=Szz5xYoydw` - client_error, nothing retrieved.
- `https://openreview.net/attachment?id=Szz5xYoydw&name=pdf` - client_error, nothing retrieved.
- `https://openreview.net/forum?id=Szz5xYoydw` - served an interstitial, "Verifying your browser";
  no title, authors, abstract, PDF link or reviews on the page.
- `https://api2.openreview.net/notes/search?query=...` - client_error.
- `https://api2.openreview.net/notes?forum=Szz5xYoydw` - client_error.
- arXiv: no posting of this title found at either search; no arXiv HTML route to try, since no ID was
  ever recovered to try it on. This is NOT FOUND for an arXiv copy, and COULD NOT READ for the paper.
- Semantic Scholar and DBLP: NOT ATTEMPTED - fetch budget (7) was exhausted by the OpenReview
  attempts. Neither would have carried the body text that sub-claims (c) and (d) need; they would
  have corroborated identity only, which the poster page plus OpenReview ID already gives.
- No search was refused by the classifier. Searches used: 2 of 3. Fetches used: 7 of 7.

## BEARING ON THE LEDGER ENTRY

**NARROW, do not strike; and convert the routing row's warrant into a promotion condition.**

The claim being checked HOLDS PARTLY. This paper does not leave the candidate's question untouched:
its abstract announces a reasoning-budget responsiveness slope estimated jointly with an IRT
item-difficulty parameter, which kills the easy version of the entry's remainder ("nobody has put
reasoning tokens and item difficulty in the same model"). But it does not answer the candidate's
question either, on the only read I could get: the budget term is attached to "each model's effective
ability", the unit of analysis is the model and not the item, nothing in the reachable text says the
same item is run at two or more compute levels, nothing says the compute level is manipulated rather
than observed, and no number, unit or denominator for any such slope is printed anywhere I could
read. On my read level the paper DEFINES and ANNOUNCES the quantity; whether it MEASURES anything
like the candidate's is COULD NOT CHECK, not a negative finding.

So: the question survives as **asked-but-still-open, with the open part narrowed to the within-item,
manipulated-dose form**, and the rejection ground stays where the entry put it (arXiv:2608.04001,
proposed-not-run). The routing row **STANDS, but conditionally**: it should be rewritten to name the
within-item manipulated-dose decomposition specifically rather than "the accuracy-versus-tokens
relationship", and it should carry an explicit promotion condition - *do not promote until
Chatpatanasiri 2026 (OpenReview Szz5xYoydw) is read at paper level and checked for (i) whether any
item appears at two or more budgets, (ii) whether that budget is set or observed, and (iii) whether
any printed number separates a within-item slope from the item-difficulty parameter.* If (i) and (ii)
come back yes-and-manipulated with a printed number, the entry flips to a disguised known and the row
must be withdrawn. Until someone opens it, the row is warranted and the entry is not promotable.
