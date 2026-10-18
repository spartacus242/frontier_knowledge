# UQ-20261018-15 — LATE Gate 4, adversary 2 of 2 (independent, cold)

Date: 2026-10-18. Prior Gate 4 verdict on this candidate: STRUCK, not inherited.
Files opened in the batch directory: ONLY UQ-20261018-15-record.md. No -entry/-adversary-N/-verify- file opened.
Budget used: 8 web searches (cap 8), 6 fetches (cap 6). Both at cap.

## 0. Disposal of the struck kill (not re-derived; taken from ESTABLISHED FACTS)
The struck verdict rested on arXiv:2407.07890 "already asking and answering" the candidate with a
mediated share attributable to format. Per the first-hand facts, every load-bearing element of that
kill is wrong on the paper's own text:
- MEDIATOR is training on the test task in general, NOT multiple-choice-format ability.
- UNIT is 56 released base models split by release date at matched pretraining compute, NOT
  within-pretraining-run checkpoints. No cooldown, no annealing, no LR decay anywhere in the text read.
- NO mediated share exists: Appendix B Table 3 gives indirect effects in accuracy units (0.071 MMLU,
  0.168 GSM8K) with SEs, and the total effect is not in the same table, so no share is formable.
  ">17 points GSM8K" does not exist (the paper says 19); 0.071 vs ~7 and 0.168 vs 19 are different
  regressions, so they are not shares of those gaps.
- INSTRUMENT is a weight update (fine-tune all models on MMLU aux train) plus prompt reformulation,
  NOT a fixed-weight output transform.
- Author line is Dominguez-Olmedo, Dorner, Hardt; the record's "Mendler-Dunner" is not an author.
The kill does not survive. I re-ran all eight attacks cold.

## 1. My own checks (all 8 searches, all 6 fetches)
Searches (vocabularies the record did not try are marked NEW):
S1 NEW mediation/causal-inference: "causal mediation analysis how much of a language model benchmark
   improvement is mediated by answer format compliance training stage" -> gender-bias CMA for
   interpretability, CMA tutorials/benchmarks, one blog-grade "causally faithful evaluation" page.
   Nothing mediating a training-phase benchmark gain.
S2 NEW surface-form-competition / PMI scoring-rule: "surface form competition PMI scoring pretraining
   checkpoints multiple choice label bias knowledge probe over training" -> Holtzman et al. 2021
   (surface form competition, PMI_DC), a COLM 2026 preprint 2605.21776, "Rewriting History"
   2510.14261 (interventional data-effect analyses). None decomposes a phase's gain.
S3 NEW in-mix-supervision/contamination: "annealing mixture contains benchmark train split FLAN
   cooldown gain task-specific supervision versus genuine capability decomposition" -> Marin 8B Retro,
   a SECOND mid-training survey (2510.06826), 2607.16246 continued-pretraining supervision analysis.
   No decomposition.
S4 routing/feasibility: OLMo 2 Dolmino intermediate checkpoints -> OLMo 2 paper + HF cards.
S5 routing: exact-title query for the record's flagged unread 2609.02015 -> arXiv PDF, HF papers page,
   Pebblous vendor blog (en/ko), aggregator.
S6 NEW scoring-rule-drives-the-gain: "benchmark score improvement during pretraining driven by scoring
   rule cloze versus label multiple choice checkpoints how much of the gain" -> base-rate effect on
   benchmark performance (2406.11634), a QA-modelling-improvements paper, benchmaxxing explainer.
   Nothing on point.
S7 NEW format-corrected mixture selection: "format-corrected evaluation for data mixture selection
   annealing microanneal ranking changes format compliance confound" -> data-mixture-optimisation ACL
   2025, IR position/trust-bias correction, MixEval-X. Nothing at the interface.
S8 NEW follow-up/citing check on the struck kill's source: "'training on the test task' follow-up work
   decomposing stage-wise gains mid-training annealing mediation 2026 format ability" -> 2407.07890
   itself, both mid-training surveys, and 2512.07783. No follow-up applying the mediation framing to a
   within-run stage.
Sweep result: clean in six new vocabularies.

Fetches:
F1 marin.readthedocs.io/en/latest/reports/marin-8b-retro/ — FULL TEXT (summariser).
   Two named cooldowns (Jellyfish 3.78T->4.78T, Starling 11.1T->12.75T) plus deeper Raccoon/Spoonbill.
   Checkpoint policy "permanent full checkpoints every 20,000 steps"; the retro does NOT state that
   cooldown-phase checkpoints are released. Before/after pairs: low-LR "Dessert" continuation GSM8K
   "from 0.509 to 0.611", MATH "from 0.184 to 0.211"; FLAN gave "MMLU 5-shot (.653->.651)".
   Microanneal results "described qualitatively, without numbers". NO format-vs-knowledge
   decomposition; length-normalised scoring, cloze-vs-label scoring, label emission, calibration and
   temperature scaling all ABSENT. Two practitioner lines matter: "High quality data seems to often
   lack data that leads to good few-shot performance" and, on the harness, "systematic failures to
   follow the strict templates".
F2 arxiv.org/pdf/2609.02015 — COULD NOT READ. Exact: "[This PDF is empty or contains no
   machine-readable text]". Not a refusal; a transfer that delivered no text. Alternate route taken.
F3 blog.pebblous.ai/blog/output-format-confounds-data-quality/en/ — FULL TEXT, VENDOR BLOG ONLY (the
   paper itself remains COULD NOT READ; nothing here is an author-line or first-page check).
   Stage: instruction tuning via LoRA adapters; 4x4 format transfer map; unit = selected groups of
   training examples (24 units of 64). Reports a fixed-weight evaluation-time ARC-C swing "up to 70
   points" from changing only the format on the untrained base model, a 22.5-point average shift, and
   an oracle selector's 25.2-point gain falling to 7.4 points on held-out formats. NO share or
   percentage with a denominator. NO re-ranking of data mixtures after format control. Cooldown,
   annealing, mid-training and within-run intermediate checkpoints all ABSENT.
F4 huggingface.co/allenai/OLMo-2-1124-7B — FULL TEXT (model card). Revision naming convention
   "stage2-ingredientN-stepXXX-tokensYYYB" for "checkpoints with ingredients of the soup", plus
   pretraining "stepXXX-tokensYYYB" with example "step1000-tokens5B" and a list_repo_refs snippet.
   No save cadence stated; no pre- vs post-anneal benchmark numbers on the page.
F5 arxiv.org/html/2512.07783v1 — FULL TEXT (HTML; appendices A.5/A.8 contents not in retrieved text).
   "On the Interplay of Pre-Training, Mid-Training, and RL on Reasoning Language Models", Zhang,
   Neubig, Yue. Unit: a 100M decoder-only model on synthetic GSM-style problems; endpoint pass@k under
   strict process verification. NO stage-gain decomposition; no format/calibration/sharpening-versus-
   knowledge split; no length-normalised or cloze scoring, no temperature scaling; no cooldown-phase
   checkpoints. Closest text is about RL: "RL only sharpens existing capabilities without extending
   them".
F6 arxiv.org/html/2510.06826v1 (a SECOND, independent mid-training survey) — PARTIAL: substantive
   sections read; Section VII Future Work body COULD NOT READ (absent from retrieved text).
   It does not say what the LR-decay gain consists of and cites no decomposition work. Format
   sensitivity, length-normalised scoring, cloze scoring, calibration and temperature scaling are each
   ABSENT in connection with evaluating mid-training; "format" appears only as data rewriting
   ("rewriting tasks into more amenable formats"). Mixture selection described by quality/diversity
   filters with the metric never stated explicitly.

## 2. Ledger classification
UN-ASKED. Not a disguised known and not asked-but-open. The two nearest POSED-AND-ANSWERED questions
are (a) 2407.07890's cross-cohort question — is recent models' benchmark progress confounded by
training on the test task? — answered for released-model cohorts with a weight-update adjustment, and
(b) Bunn et al.'s question — what is an intermediate checkpoint's format-corrected MCQ LEVEL? —
answered with a trained auxiliary step. The candidate's estimand (the share of a within-run cooldown
phase's score CHANGE reproducible with no weight update, and whether published mixes re-rank without
it) is posed by neither, and no source was found posing it and leaving it open: both mid-training
surveys carry an optimization-only account and cite nothing. There IS a method-transfer component
(decomposition/mediation applied to a new unit), so the candidate is adjacent to the "method never
applied to a given unit" category — but it is not reducible to it, because the question it answers
differs in estimand and in decision endpoint from the ones the prior literature posed.

## 3. The eight attacks
1 TRIVIALITY — Resolved. The number exists nowhere. 2407.07890 reports effects in accuracy units with
no formable share; OLMo 2 Table 9 reports a LEVEL difference (7B 53.0->62.9, 13B 58.9->68.3); Marin
reports before/after pairs and qualitative microanneal results; Bunn reports levels; both surveys
report nothing. Honest caveat, routed to attack 4: one named limb IS deducible in a paragraph —
Guo et al. 2017 ("the class prediction remains unchanged") makes temperature/entropy rescaling an
exact no-op for single-token label-argmax MCQ accuracy. And the qualitative direction is partly
foreseeable (34-point SciQ swing in Bunn, "up to 70 points" ARC-C in the Pebblous blog). Neither
bounds the share of a phase's change.
2 DISGUISE — Resolved. Non-identity is first-hand on all four attributes for both nearest priors
(above), the record's own flagged most-dangerous unread turns out to be an SFT-stage study with no
cooldown, no share and no mixture re-ranking, 2512.07783 shows the sharpening vocabulary in the
neighbouring literature is attached to pass@k coverage rather than a format/knowledge split, and my
six new-vocabulary sweeps are clean. Named residual: the three RLVR papers (2504.13837, 2507.14843,
ICML 2025 "Limits of RLVR") were NOT ATTEMPTED here; 2512.07783 covers the shape of that estimand but
is not one of them.
3 COMBINATORIAL NOVELTY — Resolved. The interface carries a live, documented problem: OLMo 2 chose its
math sources through 19 microanneals scored mainly on MMLU and a 200-question GSM8K dev subset, and
Marin's own retro records the practitioner form of the worry unquantified ("High quality data seems to
often lack data that leads to good few-shot performance") alongside harness "systematic failures to
follow the strict templates". The two fields meet on a running selection procedure, not on a slogan.
4 PRESUPPOSITION FAILURE — Partial. Three findings.
  (a) P3 partly sourced, the ">=2 runs" clause at risk: OLMo 2 releases stage-2 anneal checkpoints as
      revisions ("stage2-ingredientN-stepXXX-tokensYYYB"), cadence unstated; Marin's retro gives
      "permanent full checkpoints every 20,000 steps" as internal policy and does not state that
      cooldown checkpoints are released. One run sourced, a second unverified.
  (b) A provably dead limb in the instrument. Guo et al.'s invariance covers the argmax over one
      input's K-class logit vector — exactly label-emission MCQ accuracy — so temperature/entropy
      rescaling contributes identically zero there. It does NOT extend to multi-token summed or
      length-normalised option scoring, to sampling, or to generative decoding, and the other two
      named transforms move accuracy by tens of points with no weight update (Bunn SciQ 24.6 -> 58.6;
      blog ARC-C "up to 70 points"). So the presupposition survives but the question's own instrument
      list contains a limb a referee would strike or restrict.
  (c) STRONGEST REMAINING: the two-way partition is not exhaustive on the only run where P3 is
      sourced. The GSM8K train split is literally in the Dolmino cooldown mix (2.74M tokens, 17.6K
      documents), with TinyGSM-MIND at 6.48B tokens and FLAN at 17.0B. A documented third channel —
      direct test-task supervision, which 2407.07890 names and measures — would be absorbed silently
      into the "knowledge residual", and the mix-re-ranking limb would then re-rank mixes partly on
      how much of each benchmark's own training distribution the mix contained. The candidate's
      available answer (the sharpening component is still identified by the transform whatever the
      residual contains; per-probe reporting would expose it) is correct for limb (i) but is nowhere
      stated in the record and does not repair limb (ii)'s interpretation. Partial, not Unresolved:
      the objection damages the second limb, not the primary estimand.
5 VAGUENESS — Partial. V2 supplies an estimator, a manipulation check, a pre-declared probe panel and
three pre-committed bands, so it is not unfalsifiable. But the bands turn on "small" versus "large"
with no numeric threshold — the record concedes the band-(ii) size "is not bounded by anything read" —
so the study can return a number without returning a verdict. Two sourced pressures: 2407.07890 is a
first-hand demonstration that this shape of quantity resisted expression as a share (effects in
accuracy units, total effect absent from the table); and per-benchmark denominators are not all large
(Marin's FLAN arm moved MMLU .653 -> .651), so a per-benchmark ratio can be unstable or sign-flipping
where V2 promises a vector of shares.
6 SIGNIFICANCE INFLATION — Resolved. The named audience runs the procedure the answer would change:
19 microanneals scored on MMLU plus a 200-example GSM8K dev subset at AI2; microanneal-driven mix
decisions and the few-shot-structure worry in Marin's retro. The phase's gain is large (9.4-9.9 average
points in OLMo 2 Table 9). And the confound has a demonstrated selector-ranking consequence one stage
later: per the vendor blog, an oracle selector's 25.2-point gain falls to 7.4 points on held-out
formats. The change asked of them is an endpoint swap in a running screening procedure.
7 REASON FOR SILENCE — Resolved. Dated, triangulated mechanism: the phase's owners measure it in loss
and geometry, and a SECOND independent survey of the field, read this pass, carries no decomposition
and never mentions format sensitivity, length-normalised scoring, cloze scoring, calibration or
temperature scaling in connection with mid-training evaluation; the phase's consumers hold the
intuition and have no reason to audit it (Marin's few-shot-structure line is exactly that, an aside
with no measurement); and the instrument reached within-run checkpoints only in 2025 (Bunn, 10
checkpoints of one OLMo-1B run) at the same vintage as the public anneal-stage revisions. Tension
reported rather than hidden: 2407.07890 was an ICLR 2025 Oral that named the gain-confound template in
2024, so the silence must survive two years of a visible template — its own aim was cross-cohort
comparability and emergence, which is where its follow-through went. Limitation: 2510.06826's Future
Work body was COULD NOT READ, so I cannot certify the question is absent from its open-problem list.
8 DISSOLUTION — Partial. Against dissolution, concretely: the split is operationalisable on frozen
weights and non-degenerate (Bunn SciQ 24.6 label vs 58.6 sequence; blog ARC-C up to 70 points), so
there is a quantity, not a verbal distinction. For dissolution: the share has no instrument-independent
value. Fact B establishes that the declared family's members behave qualitatively differently
(temperature is argmax-invariant for single-softmax label scoring but changes each token's log-softmax
non-uniformly, so sequence rankings can move), and Bunn records that length normalisation "does not
consistently improve performance". Different admissible transforms therefore give different shares and
nobody has shown the share is stable across them, so the answer settles an operational quantity while
leaving the conceptual question where it was. V2's pre-declaration plus per-probe reporting is a
plausible response, unevidenced on stability.

## 4. Tally and recommendation
Resolved 5 (1,2,3,6,7) · Partial 3 (4,5,8) · Unresolved 0 · Unverified 0.
No attack landed a kill. Recommend ACCEPT; the struck kill's ground does not survive first-hand
reading. Three amendments worth attaching to the entry: strike or restrict the temperature/entropy
limb to scoring modes where it can move accuracy; declare a third channel for in-mix test-task
supervision (FLAN, benchmark train splits) so the "knowledge residual" is not reported as knowledge;
and pre-commit numeric band thresholds plus a minimum denominator per benchmark. Verify the second
open run's cooldown-checkpoint availability before relying on the ">=2 runs" clause.

## 5. Read levels
FULL TEXT: the UQ record (local); Marin 8B Retro; Pebblous vendor blog (BLOG, not the paper);
  OLMo-2-1124-7B model card; arxiv.org/html/2512.07783v1 (appendices A.5/A.8 not included).
PARTIAL: arxiv.org/html/2510.06826v1 — substantive sections read, Section VII body COULD NOT READ.
COULD NOT READ: arxiv.org/pdf/2609.02015 (paper itself; blog route used instead and labelled as such).
SEARCH SNIPPETS ONLY: 2605.21776, 2510.14261, 2607.16246, 2406.11634, 2510.23081 (this pass).
NOT ATTEMPTED: 2504.13837, 2507.14843, ICML 2025 "Limits of RLVR"; arXiv:2407.07890 and Guo et al.
  (taken from the ESTABLISHED FACTS block as instructed, not re-derived).
Failed routes: one. arxiv.org/pdf/2609.02015 -> "[This PDF is empty or contains no machine-readable
text]". No search or fetch was refused; no refused call is counted as a check that ran.
No personal identifier appeared in any query, URL, header or form. Unpaywall was not used.
