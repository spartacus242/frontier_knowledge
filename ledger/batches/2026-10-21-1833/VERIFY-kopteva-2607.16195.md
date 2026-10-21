# VERIFY — Kopteva & Hlynianyi-Zhuk, arXiv:2607.16195

Checker note, fresh context. Budget used: 1 search, 4 fetches (cap 6 / 5).

## CLAIM

Source as the entry cites it: Kopteva, E.; Hlynianyi-Zhuk, V., "Rater State Bias in RLHF
Preference Data: An Audit Framework", arXiv:2607.16195 (v3, 2026-09-28). It is the neighbour
that caps the candidate entry's novelty at Medium.

Claims handed to me, each checked alone:

- (a) identity, title, author order, version date;
- (b) the recorded string "we get Deff = 20.9, so a nominal workforce of N = 1,000 yields only
  Neff ~ 48" (Section 4.1, Table 1), its inputs, and whether rho is measured or assumed;
- (c) the strings "illustrative and require empirical validation" and "The ICC among annotation
  workers who share working conditions is not directly measured";
- (d) whether the audit protocol or pilot measures an annotator-level ICC on real preference
  labels, and the string "not test whether rater state caused any observed variation";
- (e) whether the paper PROPOSES the candidate's measurement (variance components and a design
  effect from real per-annotator data) or only defines and illustrates it;
- (f) regime: corpora, real annotator identifiers, self-claims.

## READ LEVEL

**Full text**, via the summariser over https://arxiv.org/pdf/2607.16195 (four targeted reads:
Section 4.1 + Table 1; the two (c) strings; Section 7 protocol/pilot; scope and self-claims).
Front matter (title, author line, version history, abstract) read at
https://arxiv.org/abs/2607.16195.

Direct-quotation cap ~125 characters per quotation. Every multi-clause quotation below is a
**reconstruction from ordered consecutive segments** with verified word overlap at each junction;
the fragment count is stated each time. Nothing is completed by inference. The abstract was NOT
obtained verbatim in full — only two short quotations from it were served, and I did not spend a
further fetch to segment it, because no claim handed to me turns on the abstract.

Not COULD NOT READ, and not NOT FOUND. The identifier exists and the full text was readable.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity — confirmed, exact match

- Title as served: **"Rater State Bias in RLHF Preference Data: An Audit Framework"** — identical
  to the entry.
- Author line as served, in order: **Elena Kopteva, Vitaliy Hlynianyi-Zhuk** — matches the entry's
  "Kopteva, E.; Hlynianyi-Zhuk, V." in order and spelling.
- Version as served: **v3, dated 2026-09-28** — matches the entry.
- Subjects: cs.AI. The abs page lists only one version entry (v3) and gives no file sizes.
- One metadata oddity, as served: the abs page carries **"Submitted: 2026-04-14"** while the
  identifier 2607 denotes a July 2026 announcement and the version line reads 2026-09-28. Recorded
  as served; not resolved (it bears on nothing in the entry, and the entry's v3 date is right).

### (b) The numbers, and where they are printed

The string checked alone: **"Deff = 20.9" appears in Section 4.1 and again in Table 1.**
**"N = 1,000"** appears in Section 4.1 and in the Table 1 caption. **Neff is given as "≈ 48"** in
Section 4.1 and as **48** in the Table 1 row for rho = 0.10.

The sentence and the one before it — **reconstruction from 3 consecutive segments**, junctions
verified on the overlaps "the idealized case" (SEG1/SEG2) and "with ρ = 0.1," (SEG2/SEG3):

> "To illustrate the effect of clustering, we use the Kish design effect for the idealized case of
> equal cluster sizes [41]. For a cluster of n = 200 workers with ρ = 0.1, we get Deff = 20.9, so a
> nominal workforce of N = 1,000 yields only Neff ≈ 48."

The entry's recorded string is **verbatim**, with one transcription difference: the paper prints
**"Neff ≈ 48"**, the entry renders it "Neff ~ 48".

**Inputs to that Deff.** Cluster size **n = 200 workers**; **rho = 0.1**; nominal **N = 1,000**.
The paper itself labels the setting "**the idealized case of equal cluster sizes**" and attributes
the formula to Kish [41]. So n = 200 is a stipulated figure for an illustration, **not a measured
or average cluster size** — both inputs are assumed, not only rho.

**Is rho measured or assumed? ASSUMED, and swept.** The paper introduces it as "Let ρ denote the
intraclass correlation coefficient (ICC) within a cluster of size n", states that it "is not
directly measured" (see (c)), and frames a nontrivial value as "**a sensitivity assumption**".
Table 1 carries rho = **0.00, 0.10, 0.20**. The entry's record — rho swept as an assumption at
0, 0.1, 0.2 — is **accurate**.

**Table 1 as served.** Caption, **reconstruction from 4 consecutive segments** (overlaps
"f: fraction of affected raters", "Deff: design effect", "The mean shift"):

> "Table 1: Illustrative estimates of rater state bias entry. f: fraction of affected raters.
> δ: per-rater preference shift. ρ: intraclass correlation. Deff: design effect (n = 200).
> Neff: effective independent sample size (N = 1,000). The mean shift fδ is invariant to ρ; the
> effective sample size is not."

Columns: f | δ | ρ | Deff | Neff | f·δ. Rows as served:

| f | δ | ρ | Deff | Neff | f·δ |
|---|---|---|---|---|---|
| 0.10 | 0.10 | 0.00 | 1.0 | 1000 | 0.010 |
| 0.10 | 0.10 | 0.10 | 20.9 | 48 | 0.010 |
| 0.20 | 0.15 | 0.00 | 1.0 | 1000 | 0.030 |
| 0.20 | 0.15 | 0.10 | 20.9 | 48 | 0.030 |
| 0.20 | 0.15 | 0.20 | 40.8 | 25 | 0.030 |

**Re-derived at the author's own stated inputs** (Kish, Deff = 1 + (n-1)rho, n = 200):
rho = 0.1 gives 1 + 199(0.1) = **20.9**; rho = 0.2 gives 1 + 199(0.2) = **40.8**. Neff = N/Deff:
1000/20.9 = **47.8 -> 48**; 1000/40.8 = **24.5 -> 25**. Every printed figure reproduces exactly.
No uncertainty is attached to any of them — there is none to carry, because the inputs are
stipulated rather than estimated, so the table has no interval, standard error or sampling
variability of its own.

### (c) The two strings, checked alone and unprimed

**(A) "illustrative and require empirical validation" — appears verbatim**, in the **preamble to
Section 4** ("How Rater State Bias Propagates Through RLHF"), **before Section 4.1**. It is **not**
in the Limitations section. Reconstruction from 4 consecutive segments (overlaps "detectability
(Section 4.1);", "In what follows ... labels"):

> "The contribution of this section is the argument for correlation and detectability
> (Section 4.1); the parameter values below are illustrative and require empirical validation. In
> what follows, rater state confound refers to the distortion at the level of recorded preference
> labels, while rater state bias refers to its aggregate retention in the learned preference
> signal."

**(B) "The ICC among annotation workers who share working conditions is not directly measured" —
appears verbatim**, in **Section 4.1** ("Entry into the Preference Signal"), **not** in
Limitations. The sentence stands whole inside the 125-character cap. The sentence that follows it
— reconstruction from 2 consecutive segments, overlap "attitudinal":

> "However, clustered human data can show substantial intraclass correlation, especially for
> attitudinal and other non-factual items, where interviewer effects tend to be strongest
> [42, 43]."

**Grammar on both sides of the cut.** String (B) is verbatim but the clause that follows reverses
its direction: the paper says the ICC is unmeasured and then argues that a nontrivial rho is
nevertheless defensible, citing [42, 43] for interviewer effects in other clustered human data and
concluding that "allowing for a nontrivial ρ is well justified as a sensitivity assumption". (B)
quoted alone reads as a concession that rho is unknown; in place it is the setup for a justified
assumption. Anyone using (B) as the paper conceding its own number is unsupported must carry the
"However" sentence with it.

**The claim is stated more than once (instruction 4).** Four formulations:
1. Section 4 preamble: "the parameter values below are illustrative and require empirical
   validation." No citation.
2. Table 1 caption: "Illustrative estimates of rater state bias entry." No citation.
3. Section 4.1: "allowing for a nontrivial ρ is well justified as a sensitivity assumption." No
   citation — this is the **hedged** form, and the only one that points outward (to [42, 43] in the
   preceding sentence) for support.
4. Section 8, Limitations, "Parameter uncertainty": "The illustrative parameter combinations in
   Section 4 use plausible but unvalidated values." / "Actual values could differ substantially."
   No citation.

None of the self-referential statements carries a citation; [42, 43] support a general claim about
ICC in other clustered human data and **do not measure or bound rho for annotation workers**.

### (d) What the paper actually does

**It performs no empirical study and reports no pilot results.** Section 7.3 describes the pilot as
a **plan** with procedures and success criteria; the only computed numbers in the paper are the
analytic illustrations of Section 4 (Table 1, Eq. 7) built on assumed parameters.

What the pilot is designed to measure, in the paper's own words (segments as served):
"The pilot study validates the measurement instrument." / "Use 200 prompts, 50 per category, as
defined in the audit protocol." / "For each model × prompt pair, sample 5 responses at temperature
0.7." / "Compute per-model, per-category distributions." Its planned variables are the named
stylistic/linguistic features UVPD, DHF, TDS, VQR, RRR, EMI, TIAR, CFP, VO, RRASP, RS, grouped in
Section 7.1 into lexical, pragmatic, discourse, safety-boundary and positional families, with
reliability checks (kappa, Pearson r thresholds), construct-coherence and discriminative-validity
tests (category sensitivity, a model × category interaction, a safety-boundary endpoint).

So the unit of analysis is **model x prompt x sampled response of a public instruction-tuned
model** — features of model OUTPUTS, never annotators or preference labels.

**The entry's string "not test whether rater state caused any observed variation" — appears
verbatim** in Section 7.3. Reconstruction from 4 consecutive segments (overlaps "cohere in the
predicted structure", "observed variation"):

> "It tests whether the proposed features measure reliably, cohere in the predicted structure, and
> discriminate across prompt categories and alignment regimes. It does not test whether rater state
> caused any observed variation. The study is executable entirely on publicly available
> instruction-tuned models."

The disclaimer recurs: Section 7.3 also carries "It does not establish that rater state is the
source of that variation", and a near-variant wording "It does not test whether rater state caused
any observed differences" surfaced on one of my two reads of Section 7.3 — see DEFECTS, item 7, for
the unresolved wording question.

**Annotator-level ICC on real preference labels: NO.** Nowhere measured or estimated. The paper's
own statements on rater-level data, as served: "Direct measures of rater state and exposure history
are usually unavailable." (Sec. 3.1) / "**Rater IDs may be available, but not reliably.**"
(Sec. 3.1) / footnote 1: "requires access to proprietary rater level data and is not testable
externally." / Sec. 7.3: "Full causal testing requires data that is currently proprietary: rater
demographics and working conditions, individual rating patterns over time," / Conclusion: "requires
rater level data that annotation vendors and AI laboratories already possess."

The entry's record of this — pilot measures stylistic features of model outputs, does "not test
whether rater state caused any observed variation", rater-level data listed as proprietary — is
**accurate on all three counts**.

### (e) Published is not performed

Against the candidate's measurement (variance components and a design effect estimated from real
per-annotator data), this paper:

- **DEFINES** it. Section 4.1 defines rho as the within-cluster ICC and imports the Kish design
  effect as the clustering penalty, attributing the formula to [41].
- **PREDICTS / ILLUSTRATES** its consequences. Table 1 and Eq. 7 print Deff and Neff for
  stipulated (f, delta, rho) at n = 200. The paper's own word for these is "Illustrative".
- **ANNOUNCES** the need for empirical values — "require empirical validation", "plausible but
  unvalidated values".
- **Does NOT MEASURE** it. No variance components, no ICC, no design effect estimated from any
  real per-annotator data anywhere in the paper.
- **Does not clearly PROPOSE it as a procedure either.** The audit protocol of Section 7 is an
  instrument for model-output features, not a variance-components design. The closest material is
  "require empirical validation" (Sec. 4), the unmeasured-ICC sentence (Sec. 4.1), the proprietary-
  data sentence (Sec. 7.3) and the Limitations item (Sec. 8). These **imply** that someone should
  obtain the values; **no sentence I found lays out estimating variance components or a design
  effect from per-annotator labels as a recommended analysis**. Stated at my read level: the
  recommendation is implicit at most, and I did not find an explicit one.

A citation to a definition is not an evaluation. Deff = 20.9 is **printed**, but it is printed as
arithmetic on stipulated inputs, not as a measurement of anything.

### (f) Regime

- **Corpora: none analysed.** HH-RLHF, OpenAssistant, SHP and Chatbot Arena are **not mentioned**.
  Resources named are all either proposed targets of the future pilot — Llama 3.1-8B base ("Llama
  3.1-8B as the common base") and Llama 3.1-Instruct, Tulu 2-DPO, a Constitutional AI / RLAIF
  variant, all-MiniLM-L6-v2, a RoBERTa-base dialogue-act classifier, Reddit r/SuicideWatch and
  r/offmychest as human baseline sources — or cited as existing tools and background (DailyDialog,
  GoEmotions, EmpatheticDialogues, LIWC, VADER, NRC Emotion Lexicon, Hyland hedge lexicon; GPT-4o
  and successors cited only as public discourse in footnote 2 / refs [53, 54]). **No dataset or
  model is analysed.**
- **Real annotator identifiers: none used.** "Rater IDs may be available, but not reliably."
- **Unit of analysis of everything the paper plans to measure:** model outputs (model x prompt x
  response), not raters and not preference labels.
- **Regime of the Deff result:** the Kish formula under **equal cluster sizes**, n stipulated at
  200, rho stipulated at 0 / 0.1 / 0.2, N stipulated at 1,000, within a hypothetical where a
  fraction f of raters carry a per-rater preference shift delta. The paper is explicit: "the
  idealized case of equal cluster sizes". Outside those stipulations the number is silent.
- **Self-description.** "This paper presents a hypothesis and an audit framework." (Intro) /
  "This paper develops a hypothesis and an audit framework for studying this source of bias."
  (Abstract) / "an audit protocol and pilot study plan that can be applied to publicly available
  instruction tuned models." (Abstract) / "We define a protocol applicable to any instruction-tuned
  model." (Sec. 7.2). **Genre: a position / framework paper carrying a proposed protocol and a
  pilot plan.** Not a primary empirical study, not a review, not a completed audit, not a
  guideline.
- **Disclaimers, as served:** "We do not infer the training history of any specific deployed
  model." (Abstract) / "We propose rater state shift as a plausible and testable source of
  structured bias in RLHF preference data." (Abstract) / "It does not argue that any observed model
  behavior can be reduced to a single cause." (Intro) / "We do not claim direct evidence that RLHF
  preference raters underwent a specific state change during annotation," (Sec. 5) / "Our goal is
  not to prove a mechanism but to identify a plausible confound," (Sec. 8).
- The Conclusion describes an "audit protocol with pre registered success criteria"; **no
  registration record is given in the paper**, so that label is unverified from the paper alone.

## REGIME — does the handed claim sit inside it?

The entry's uses of this source divide:

1. **Inside the regime.** The entry's reading of (b), (c) and (d) — Deff = 20.9 and Neff ~ 48
   printed in Section 4.1 with Table 1; rho assumed and swept at 0 / 0.1 / 0.2; the pilot measuring
   model-output features and not testing causation; rater-level data proprietary — all sit inside
   what the paper establishes, and are accurate.
2. **Outside the regime, if leaned on.** Deff = 20.9 / Neff ~ 48 are arithmetic under equal cluster
   sizes with **both** n and rho stipulated. They are not evidence about any real annotation
   workforce, and the paper does not offer them as such. The paper's own regime for anything
   empirical is **public instruction-tuned model outputs**; the candidate's regime is **real
   per-annotator preference labels**, which this paper states it cannot reach.

## DEFECTS FOUND

Defects in how the source has been characterised, and hazards for anyone quoting it:

1. **Transcription.** The entry renders "Neff ≈ 48" as "Neff ~ 48". The paper prints the
   approximately-equal sign. Trivial, but the entry presents the line as a quotation.
2. **An assumed input went unrecorded.** The entry records rho as an assumption but, as handed to
   me, says nothing about **n = 200** being equally stipulated. Deff = 20.9 depends on n exactly as
   much as on rho (1 + 199 x 0.1); 20.9 is not "the design effect at rho = 0.1" but "at rho = 0.1
   **and n = 200, equal clusters**". Reporting rho as the only assumption understates the
   stipulation.
3. **Location of string (A).** "illustrative and require empirical validation" sits in the
   **Section 4 preamble**, not in Limitations. If the entry (or an adversary) presents it as the
   paper's limitations-section concession, that is wrong; the Limitations formulation is the
   different sentence "plausible but unvalidated values" (Sec. 8).
4. **Cut hazard on string (B).** Verbatim, but the next sentence ("However, clustered human data
   can show substantial intraclass correlation... [42, 43]") turns the concession into a justified
   sensitivity assumption. Quoted alone it misrepresents the paper's stance.
5. **Published is not performed, at the pilot too.** The paper **reports no pilot results at all** —
   Section 7.3 is a plan. Any characterisation implying the pilot was run and measured stylistic
   features is wrong: it is **specified** to measure them. The entry's own wording ("the pilot
   measures...") is ambiguous on this and should be tightened to "the pilot is specified to
   measure".
6. **Granularity, not absence, on (e).** The paper does not merely omit the candidate's
   measurement; it **defines the exact quantity** (ICC, Kish design effect) and stops short of
   estimating it. That is a granularity/performance gap, and it is the right way to describe the
   overlap — not "the neighbour doesn't cover this".
7. **Unresolved wording, flagged not resolved.** My two reads of Section 7.3 returned "It does not
   test whether rater state caused any observed **variation**" (with segment reconstruction) and,
   separately, "It does not test whether rater state caused any observed **differences**", plus "It
   does not establish that rater state is the source of that variation". The paper may well carry
   two or three such sentences; or one read paraphrased. The entry's string was confirmed verbatim
   on the segmented read, which is the stronger evidence, but **I hit the 5-fetch cap and did not
   re-check**. Treat the entry's string as verbatim-confirmed and the variant as unverified.
8. **Unverifiable self-label.** "pre registered success criteria" (Conclusion) with no registration
   record in the paper. Do not repeat the pre-registration claim as established.
9. **Front-matter oddity.** abs page "Submitted: 2026-04-14" against a 2607 identifier and a v3 of
   2026-09-28. Recorded as served.
10. **Not a defect, recorded so it is not mistaken for one.** The paper's silence on HH-RLHF,
    OpenAssistant, SHP and Chatbot Arena is silence, not a statement that such corpora are
    unsuitable. Its noting that "Direct measures of rater state and exposure history are usually
    unavailable" flags the absence of **state measures**, which is not the same absence as the
    candidate's gap (per-annotator variance components).

## ROUTES THAT FAILED

**None.** No search or fetch was refused, rate-limited or blocked. Both arXiv routes given in the
entry worked first time: https://arxiv.org/abs/2607.16195 and https://arxiv.org/pdf/2607.16195.
PubMed Central, Europe PMC, doi.org, Crossref and Unpaywall were not needed and not touched; no
personal identifier was placed in any URL, header or form.

The only budget constraint that bit: the ~125-character quotation cap, which was worked around by
ordered consecutive segments with verified overlaps (all multi-clause quotations above are labelled
reconstructions with their fragment counts). The 5-fetch cap stopped me re-checking defect 7.

## BEARING ON THE LEDGER ENTRY

Every string the entry attributes to this source is **present and verbatim** (one "≈"/"~"
transcription aside), and every characterisation the entry makes of what the paper does — rho
assumed and swept, pilot on model-output features, no causal test, rater-level data proprietary —
**holds**. Adversary 2's claim of a full-PDF read is consistent with what the full text says; Gate
2's abstract-only read would not have reached Section 4.1 or Section 7.3, and the four Section-4
and Section-7 formulations above are not in the abstract.

On the question the Medium cap turns on: the neighbour **defines** the candidate's quantity (ICC +
Kish design effect on clustered annotator data in RLHF) and **illustrates** it with wholly
stipulated inputs; it **does not measure** it on any real data, states that doing so needs
proprietary rater-level data, and — at my read level — **does not set out the estimation as an
explicit recommended procedure**. So the conceptual framing is genuinely pre-empted and the
measurement is not performed. The cap rests on a definition-and-illustration precedent, not on a
prior performance of the candidate's measurement.

Two things would change the entry's calculus if the entry relies on them: if the entry treats the
neighbour as having *proposed* the variance-components estimation, that is weaker than it looks
(implicit at most); and if the entry treats Deff = 20.9 / Neff ~ 48 as the neighbour having
*characterised* real annotator clustering, that is outside the paper's regime — it is arithmetic
under equal cluster sizes with n and rho both stipulated.

Nothing here judges the candidate or the question. It records what the source says.
