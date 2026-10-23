# VERIFY - UQ-20261023-13: is the leave-one-study-out identity exact, and are its premises in the protocol as written?
Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

The claim under test, verbatim from the entry field "Strongest remaining objection":

> "Leave-one-study-out is a train/test split; with the parameter set frozen, an assessment's prediction for study k is unchanged by whether k is withheld, so the leave-one-study-out residual equals the apparent residual datum for datum, the gap of limb (b) is identically zero and the tau of limb (a) is identically 1, for every system and every corpus."

Its stated premise, verbatim from entry presupposition P7:

> "that \"leave-one-study-out predictive evaluation\" is a defined, non-degenerate operation on a FIXED published parameter set given only an attributed corpus. The record asserts this in P2 (\"so 'leave one study out' is definable\") and its answer-protocol contains no re-fitting step."

And the entry's own characterisation of the leg's status, verbatim from "VULNERABILITY OF THIS REJECTION":

> "It is an ALGEBRAIC identity — not a bitwise or empirical one — following from the design of the protocol as written (a fixed parameter set and an answer-protocol with no re-fitting step), not from any reported result, and all three adversaries labelled the junction as their own reasoning rather than a source finding."

VERDICT IN ONE LINE: the identity is EXACT under one aggregation of the fold residuals and FALSE under the other, and the other is the one in which the standard reference literature DEFINES a cross-validation estimator. The universal quantifier "for every system and every corpus" does not survive. Two further premises fail on the files: the protocol as written never freezes the parameter set (the only "fixed" in the record is about the metric), and the record's own P4 already makes the hold-out STRUCTURE a protocol item, which defeats the "cannot be written in" step.

## READ LEVEL

On-disk files, all read in FULL TEXT (no summariser, direct file reads):
- /home/claude/frontier_knowledge/ledger/batches/2026-10-23-1233/UQ-20261023-13-entry.md (23,259 bytes) — FULL TEXT.
- /home/claude/frontier_knowledge/ledger/batches/2026-10-23-1233/UQ-20261023-13-record.md (40,650 bytes) — PARTIAL, read in full at lines 6, 8, 10, 18, 19, 20, 25, 38, 42, 56, 58, 62, 63, 67 plus whole-file keyword sweeps (below). The fields the brief named (R1 canonical question; "WHY R1, AND WHAT R1 ITSELF PRESUPPOSES"; P2; P4; "What would count as an answer") were all read in full.
- UQ-20261023-13-adversary-1.md — PARTIAL: attack 4 section (C3, C4, C5) and the verdict/nomination sections, read in full.
- UQ-20261023-13-adversary-2.md — PARTIAL: attack 4 section (C3, C5, C6, "Where that leaves attack 4") and verdict, read in full.
- UQ-20261023-13-adversary-3.md — PARTIAL: section 5 (C3, C5, C6), section 11, the attack table rows 5 and 8, and the verdict, read in full.

External, the one route the brief told me to try first because adversary #3 recorded a BUDGET stop rather than a route failure on it:
- Arlot & Celisse, "A survey of cross-validation procedures for model selection", DOI 10.1214/09-SS054 (arXiv:0907.4728v1, 27 Jul 2009) — READ at FULL TEXT through the summariser over two prompts (definitional sections 4.1, 4.2.1, 4.2.2, 4.3.1, 4.3.2, 4.4, 5.1.2, 5.2.1, 10.2), route arxiv.org/pdf/0907.4728, worked first call. FRONT MATTER read: authors "Sylvain Arlot, CNRS; Willow Pro jet-Team, Laboratoire d'Informatique de l'Eole Normale Superieure (CNRS/ENS/INRIA UMR 8548), 45, rue d'Ulm, 75 230 Paris, Frane" and "Alain Celisse, Laboratoire Paul Painlevé, UMR CNRS 8524, Université des Sienes et Tehnologies de Lille 1, F-59 655 Villeneuve dAsq Cedex, Frane" (the served text is OCR-garbled; I transcribe it as served and do not silently repair it). The arXiv v1 I read prints NO journal/volume/page line; the DOI 10.1214/09-SS054 is read from the arXiv abs-page metadata block, and the "Statistics Surveys 4 (2010) 40-79" volume/pages in my citation line come from search-result metadata, NOT from front matter I opened. Flagged, not asserted.
- M. Stone, "Cross-Validatory Choice and Assessment of Statistical Predictions", J. R. Stat. Soc. B 36(2) 111-147, 1974 — COULD NOT READ, route failure (see ROUTES THAT FAILED). It is also, by kind, the WRONG document to settle the question at issue, and I say so in DEFECTS FOUND rather than carrying it forward as a lead.

The scikit-learn LeaveOneGroupOut docstring was NOT re-read here; it is check 3's business and nothing below depends on it.

## WHAT THE SOURCE SAYS (quotations as served)

### A. The two answer-protocols, in full, for sub-claim 1

ENTRY, field "What would count as an answer", verbatim and entire:

> "What would count as an answer: per system, a table of (assessment identifier, apparent residual on the pooled corpus under the declared metric, leave-one-study-out predictive residual under the same metric); across the frame, the tau with a bootstrap interval over systems and folds, the gap distribution in units and as a ratio, the count and identity of systems whose winner changes, and a weighting-sensitivity panel under >=2 pre-declared schemes. Explicitly NOT an answer: one new better-fitting assessment; cross-validation used inside a fitting loop to set dataset weights; a structural credibility index; a one-system database-vs-database comparison with no apparent-fit comparator."

RECORD, field "What would count as an answer" (line 25), verbatim and entire:

> "What would count as an answer: For each system in the declared frame, a table of (assessment identifier, apparent residual on the common pooled corpus under the declared common metric, leave-one-study-out predictive residual under the same metric), plus across the frame: (1) Kendall tau between the apparent and predictive orderings, with a bootstrap interval over systems and over hold-out folds; (2) the distribution of the predictive-minus-apparent gap, in the metric's units and as a ratio; (3) the count and identity of systems whose top-ranked assessment changes; (4) a weighting-sensitivity panel showing the tau under at least two pre-declared weighting schemes, since R1 presupposes the metric choice is not what decides the ordering. A tau indistinguishable from 1 with a small gap answers the question in the negative and is as publishable as a reordering. NOT an answer: a single new assessment that fits better; cross-validation used inside one fitting procedure to set dataset weights (that is the Zomorodpoosh prior, not the question); a structural credibility index (FAB/FAT counts), which predicts credibility rather than measuring a residual; a database-vs-database comparison on one system with no apparent-fit comparator."

### B. The R1 canonical question, for sub-claim 2

RECORD line 8, verbatim and entire:

> "Question (canonical, R1 — THE ONE PERMITTED GATE 1 REFORMULATION, ADOPTED): For a declared frame of systems each carrying two or more independently published CALPHAD assessments whose full parameter sets are retrievable, and on one commonly digitised experimental corpus with every datum attributed to its source study: (a) what is the Kendall tau between the ordering of the competing assessments by their APPARENT residual (recomputed on the pooled corpus under one pre-declared common metric, since the assessments' own reported fit is in general not a published number — see Gate 1) and their ordering by leave-one-study-out predictive residual under that same metric; (b) what is the distribution of the predictive-minus-apparent residual gap, in the metric's units and as a ratio; and (c) in how many systems, and which, does the top-ranked assessment change?"

And R1's own self-declared presuppositions, record line 10, the clause that comes nearest to a freeze:

> "R1 now presupposes, in its own right: (i) that one common metric can be fixed over heterogeneous property types (invariant temperatures, activities, enthalpies of mixing, heat capacities) without the choice of weighting deciding the ordering — a weighting-sensitivity analysis therefore has to be inside the protocol, not after it; (ii) that each assessment's parameter set is complete enough to evaluate, which in the one instance opened is true only after chasing cited sub-system parameters (Table 7's Ga-La binary parameters are \"adopted from Ref. [12]\" and SGTE pure-element functions are not reproduced); and (iii) that study-level inclusion is recoverable, on which see presupposition P2 below."

SCOPE-SETTING OPENER on (ii): the sentence opens "R1 now presupposes, in its own right", which scopes the list as conditions R1 ASSUMES rather than operations it PRESCRIBES, and the clause asserts COMPLETENESS of the parameter set for the purpose of evaluation. It does not assert, deny, or record a move away from re-fitting; it is silent on it.

### C. P4, for sub-claim 6

RECORD line 20, verbatim and entire:

> "P4 — PRIMARY CONTESTED PRESUPPOSITION. A predictive residual is meaningful for a thermodynamically self-consistent model: a Gibbs-energy description is not a free-form regressor, so held-out data of the SAME property in the SAME composition region may be near-determined by the model form, making a same-property hold-out trivially satisfied. The protocol must declare its hold-out structure and argue it is not trivial; the informative structures are cross-PROPERTY (fit calorimetry, predict phase boundaries) and cross-COMPOSITION-REGION (fit binaries and one ternary region, predict another). Unresolved here and carried forward."

RECORD line 67, the scoring rationale, same point stated as a scoring move:

> "and P4 — whether a held-out residual is informative for a thermodynamically self-consistent description — is unresolved and is handled by requiring the protocol to declare its hold-out structure rather than by settling the point."

### D. The entry's declared residue, for sub-claim 6

ENTRY, "VULNERABILITY OF THIS REJECTION", verbatim:

> "What the identity does NOT exclude, and this is the honest residue: a per-assessment partition of the pooled corpus into studies each assessor DID and did NOT fit is non-degenerate without any re-fit, and is sourced (Cheng & Zhang's newer Al-Sn-Zn description \"took into account\" newly reported data that the earlier one could not have fitted). That reading would rescue the empirical core, but it is a different operation from leave-one-study-out and writing it in is the forbidden second reformulation; it also confounds the contrast with assessment age and with each assessor's own exclusions (\"we exclude these data [4] from further analysis in this study\")."

LOCATED: both strings the brief handed me are in the entry file at the field named. The string "a per-assessment partition of the pooled corpus into studies each assessor DID and did NOT fit is non-degenerate without any re-fit, and is sourced" is present verbatim; the brief's ellipsis "… That reading would rescue" elides the parenthetical Cheng & Zhang citation, which I restore above. No existence defect.

### E. The three adversaries' versions, for sub-claim 4

Adversary #3, section 5 C3 (the only bare version), verbatim:

> "a fixed parameter set's prediction for study k is identical whether or not k is \"left out\", so without re-fitting the predictive residual equals the apparent residual datum for datum, the gap of limb (b) is identically zero and the tau of limb (a) is identically 1 — the question answers itself before any evidence is collected."

Adversary #1, attack 4 C3, verbatim, WITH its parenthetical intact:

> "with parameters fixed, removing study j from the evaluation corpus changes nothing about the model's prediction for study j, so the \"held-out\" residual on study j is identical to that study's share of the apparent residual; summed over folds, predictive residual equals apparent residual (up to fold weighting), the gap is identically zero and tau is identically 1 by construction, for every system, regardless of the data."

Adversary #2, attack 4 C5, verbatim:

> "on a frozen parameter set, dropping study k changes which data are SCORED, not what the model was TOLD, so a no-refit \"LOSO\" residual is a reweighted apparent residual and the gap in (b) becomes an artefact of corpus composition"

### F. Adversary #3's C6, for sub-claim 5

Verbatim:

> "C6. The pooled corpus is an IN-SAMPLE (\"apparent\") set for every assessment in a system. — CONTESTED, my own reasoning from an opened instance: the newer Al-Sn-Zn assessment \"took into account\" \"newly reported\" data that the earlier assessment could not have fitted, so the \"apparent residual recomputed on the pooled corpus\" is already partly out-of-sample for older assessments and in-sample only for the newest; the apparent-versus-predictive contrast is confounded with assessment age and with each assessor's data exclusions (the record's own instance: \"we exclude these data [4]\"). The record does not address this. Not fatal on its own; it compounds C3."

### G. The external definition of a cross-validation estimator, as served

Arlot & Celisse (arXiv:0907.4728v1), Section 4.2.1, hold-out estimator, equation (8), rendered in plain text by the summariser:

> "LbH-O(A; Dn; I(t)) := (1/nv) × sum over i in I(v) of γ(A(D(t)n); (Xi, Yi))"

introduced by the sentence:

> "The hold-out estimator of the risk of A(Dn) with training set I(t) is defined by"

Section 4.2.2, the GENERAL cross-validation estimator, equation (9):

> "LbCV(A; Dn; (I(t)j) for j = 1..B) := (1/B) × sum over j = 1..B of LbH-O(A; Dn; I(t)j)"

with the surrounding sentences:

> "In brief, CV consists in averaging several hold-out estimators of the risk corresponding to different splits of the data."

> "All existing CV estimators of the risk are of the form (9), each one being uniquely determined by the way the sequence is chosen."

Section 4.3.1, leave-one-out, equation (10):

> "LbLOO(A; Dn) = (1/n) × sum over j = 1..n of γ(A(D(-j)n); ξj)"

> "Formally, LOO is defined by (9) with B = n and I(t)j = { j }c for j = 1, . . . , n"

Section 4.3.2, V-fold:

> "relies on a preliminary partitioning of the data into V subsamples of approximately equal ardinality n/V"

> "Let A1, . . . , AV be some partition of {1, . . . , n} with Card (Aj ) ≈ n/V."

and equation (11), per the summariser's reading, "normalizes within each fold by 1/Card(Aj), then averages the V fold-level terms with equal weight 1/V."

Section 5.1.2, the one sentence in the paper that conditions a result on EQUAL fold sizes:

> "When the Aj s have exatly the same size n/V , the orreted VFCV riterion is equal to the sum..."

Section 4.4, the attribution of LOO:

> "LOO was atually introdued independently by Stone (1974), by Allen (1974) and by Geisser (1975)."

READ-LEVEL AND SWEEP DISCIPLINE ON THIS SOURCE. I ran TWO prompts against the same full text: a first aimed at the definitions, and a SECOND aimed term-by-term at "cardinality"+"equal", "leave-p-out", "leave-one-group-out"/"group"/"block"/"clustered", any statement that validation sets must be equally sized or that unbalanced splits bias the estimate, and the per-split weighting. The second sweep returned, explicitly: "Leave-one-group-out" does not appear; "clustered" does not appear; "group" does not appear as a term for CV; and "The document never states that validation sets must have the same size, or that unbalanced splits cause a problem or bias." That is a two-sweep absence, not a one-sweep silence, and it is an absence of a WARNING, not of the formula.

LOGICAL FORM OF EQUATION (9), which is the whole of this check's external content. It is a DEFINITION (hence a biconditional, not a one-way necessary or sufficient condition), stated unhedged, and it is universally quantified over CV estimators by the authors' own next sentence: "All existing CV estimators of the risk are of the form (9)". It is not a disjunction. Its modality is flat assertion. The weight on each split is 1/B regardless of that split's validation size; the normalisation by validation size 1/nv happens INSIDE each split's own term, at equation (8).

## REGIME

ARLOT & CELISSE. Population: a statistical algorithm A applied to a sample Dn of n data, with a loss ("contrast") γ and a risk to be estimated. Unit of analysis: a SPLIT of the sample into training index set I(t) and validation index set I(v), with nv = Card(I(v)); the estimator's outer unit is the split, the inner unit the datum. Operating condition: the authors' standing simplification is a fixed training size — Section 4.3 "Card(I(t)j) ≈ nt for every j", and Section 5.2.1 assumes it exactly — and V-fold is set up with "subsamples of approximately equal ardinality n/V". Instrument: equations (8)-(11). Threshold: none; it is a definitional section, not an evaluation.

DOES THE LEDGER CLAIM SIT INSIDE THAT REGIME? Partly, and the mismatch is the finding. The entry's device is leave-one-STUDY-out, i.e. leave-one-GROUP-out with groups of whatever size the source studies happen to have. Arlot & Celisse's canonical cases are LOO (nv = 1, so B = n equal singleton folds) and V-fold (folds of approximately equal cardinality n/V). Leave-one-group-out with UNEQUAL group sizes is outside both: the survey's term "Leave-one-group-out" does not appear, and the survey gives no equal-size requirement that would exclude it either. So equation (9) applies to it by the authors' own universal — "All existing CV estimators of the risk are of the form (9)" — while none of the survey's worked special cases makes the outer 1/B average coincide with a datum-equal average. PUBLISHED IS NOT PERFORMED: this source DEFINES the aggregation; it measures nothing, and it prints no number that bears on CALPHAD.

THE LEDGER ENTRY'S OWN REGIME, for completeness: the unit is a published CALPHAD assessment of one alloy system; the operating condition is a parameter set obtained from publication and a corpus of experimental data attributed to source studies; the instrument is a "pre-declared common metric" that is nowhere named; the threshold is tau = 1 and gap = 0. The claim under test is an arithmetic claim about that instrument, so it stands or falls on the aggregation rule, and the protocol as written does not state one.

## DEFECTS FOUND

Sub-claims answered in order, not merged.

---

### SUB-CLAIM 1 — does either answer-protocol contain a re-fitting step? ANSWER: NO. The kill's stated premise is TRUE on this half.

Both fields are quoted entire in section A above. Neither contains any re-fitting, re-optimisation or parameter-adjustment step in any words.

SWEEPS RUN, because one sweep's silence is not absence. Sweep 1, a case-insensitive regex over the entry's "What would count as an answer" line and the record's line 25 for `re-?fit | re-?optimi[sz] | reoptimi | re-?estimat | re-?assess | adjust | tune | tuned | tuning | calibrat | train | retrain | optimis | optimiz | parameter-adjust`: ZERO matches on both lines. Sweep 2, a dedicated extraction of every stem that DOES occur from the list `re-?fit | re-?optimi[sz] | re-?estimat | adjust | tun | calibrat | train | optimi[sz] | recomput | freez | frozen | fixed`: the entry field returns NOTHING; the record field returns only "weighting" (x2) and "weights" (x1), both inside "(4) a weighting-sensitivity panel showing the tau under at least two pre-declared weighting schemes" and inside the exclusion "cross-validation used inside one fitting procedure to set dataset weights".

GRAMMAR ON BOTH SIDES OF THAT EXCLUSION, because it is the one clause that could be read as a re-fit ban. The record writes: "NOT an answer: ... cross-validation used inside one fitting procedure to set dataset weights (that is the Zomorodpoosh prior, not the question)". The parenthetical scopes the exclusion to one named prior. What is excluded is CV USED TO SET WEIGHTS INSIDE A FITTING LOOP. That is not the same proposition as "the predictive limb must not re-fit", and reading it as the latter would be an inference, not the text. So: no re-fit step is written in, AND no re-fit prohibition is written in either. The protocol is SILENT on re-fitting, in both versions.

NO DEFECT on sub-claim 1. This half of P7 holds, and it holds at the level of a two-sweep textual absence.

---

### SUB-CLAIM 2 — does R1 freeze the parameter set for the predictive limb? ANSWER: NO, AND NEITHER DOES ANYTHING ELSE IN THE RECORD. The other half of P7's premise is NOT in the protocol as written. DEFECT 1, and it is the premise defect.

R1's clauses, numbered as the question states them (quoted entire in section B):
1. "For a declared frame of systems each carrying two or more independently published CALPHAD assessments whose full parameter sets are retrievable" — a condition on FRAME MEMBERSHIP. Grammatically "whose full parameter sets are retrievable" is a restrictive relative clause on "assessments", inside the prepositional phrase that defines the frame. It restricts WHICH systems and assessments are admitted. It says the parameter sets CAN BE OBTAINED. It does not say they are held at their published values during either limb.
2. "and on one commonly digitised experimental corpus with every datum attributed to its source study" — a condition on the CORPUS.
3. limb (a): "the Kendall tau between the ordering of the competing assessments by their APPARENT residual (recomputed on the pooled corpus under one pre-declared common metric, since the assessments' own reported fit is in general not a published number — see Gate 1) and their ordering by leave-one-study-out predictive residual under that same metric".
4. limb (b): "the distribution of the predictive-minus-apparent residual gap, in the metric's units and as a ratio".
5. limb (c): "in how many systems, and which, does the top-ranked assessment change?"

The ONLY operation R1 prescribes is the parenthetical "recomputed": and it is attached to the RESIDUAL, not to the parameters — "their APPARENT residual (recomputed on the pooled corpus under one pre-declared common metric ...)". Limb (a)'s second ordering is named and not defined: "their ordering by leave-one-study-out predictive residual under that same metric". No word in R1 freezes anything.

SWEEP, run because the brief's rule demands a dedicated one. Whole-file case-insensitive sweep for `fixed | frozen | freez*` in the RECORD: ONE occurrence in the entire file, at line 10, and it is about the METRIC, not the parameters — "that one common metric can be fixed over heterogeneous property types". Whole-file sweep of the same terms in the ENTRY: SEVEN occurrences, at lines 10, 25, 26, 33, 34 and 35, and EVERY ONE sits inside Gate-4 attack-4 material — P7 itself ("on a FIXED published parameter set"), the attack-4 table rows ("a Gibbs-energy description is a fixed artefact"; "on a FIXED published parameter set it changes what is scored"), the "Strongest remaining objection" ("with the parameter set frozen"), the "VULNERABILITY" field ("a fixed parameter set"; "evaluating a frozen published description") and the "Suggested first step" ("fixed-parameter scoring"). The freeze appears NOWHERE in the question, nowhere in P1-P6, nowhere in either answer-protocol, and nowhere in the record at all.

THE DEFECT. The entry's VULNERABILITY field says the identity follows "from the design of the protocol as written (a fixed parameter set and an answer-protocol with no re-fitting step)". That is a CONJUNCTION. Its second conjunct is true of the protocol as written (sub-claim 1). Its first conjunct is NOT in the protocol as written: the record never fixes or freezes the parameter set, and its single use of "fixed" is about the metric. The freeze is supplied at Gate 4 by the adversaries and then attributed back to the design of the protocol. On the files, the protocol is silent in BOTH directions — it neither re-fits nor freezes.

CONSEQUENCE FOR DERIVABILITY, MY OWN REASONING ABOUT THE LOGIC, NOT A SOURCE FINDING, and labelled as such: from silence in both directions no identity follows. An identity needs the freeze as a premise, and the premise is an addition to the question rather than a reading of it. What the files support is the weaker proposition that limb (a)'s second ordering is an UNDECLARED OPERATION — the protocol names "leave-one-study-out predictive residual" and never says what is done to the parameters when a study is withheld. That is a well-posedness cap on a question whose central operation is undefined. It is not an identity, and it is not "the answer is forced with no data". The distinction is not cosmetic: an undeclared operation is repaired by declaring it, which is a protocol item (see sub-claim 6); a forced identity cannot be repaired at all, which is the entry's whole ground for rejecting rather than capping.

WHAT WOULD GROUND THE OTHER WAY. A document that would overturn this finding is simply a passage in the record or entry, written before Gate 4, that states the parameters are held at their published values. I swept both files for every stem of fix/freeze and found none outside attack 4. That is an enumerated textual absence over the two files, not an inference from search silence.

---

### SUB-CLAIM 3 — THE DECIDING ONE. Is the identity exact, or exact only up to fold aggregation? ANSWER: EXACT UNDER POOLED AGGREGATION ONLY. Under the fold-mean aggregation the gap is nonzero, takes either sign, and tau can be -1. The universal claim is FALSE AS WRITTEN. DEFECT 2, and it is the one the entry pre-declared as fatal to itself.

Notation. For one assessment with its parameters held at published values: the pooled corpus is partitioned by attribution into K source studies S_1 ... S_K with sizes n_1 ... n_K summing to n. Per-datum loss under the declared metric is l_i. Per-study mean residual r_k = (1/n_k) * sum over i in S_k of l_i. Nothing below depends on what the metric IS, only on its being an average of a per-datum loss — which is what "residual ... in the metric's units and as a ratio" requires.

AGGREGATION (a), POOLED / DATUM-EQUALLY-WEIGHTED. Apparent residual R_app = (1/n) * sum over all i of l_i = sum over k of (n_k/n) * r_k. Leave-one-study-out: in fold k, study k is the validation set; across the K folds each datum is validated exactly once; pooling all folds' held-out losses with datum-equal weight gives (1/n) * sum over k of sum over i in S_k of l_i, which is the SAME SUM over the SAME data. Therefore R_LOSO = R_app EXACTLY, gap = 0 exactly, every assessment's two residuals are identical, and both orderings are the same ordering, so tau = +1 exactly. THE ENTRY'S IDENTITY IS CORRECT UNDER THIS AGGREGATION. MY OWN ARITHMETIC; it is also the step all three adversaries took.

AGGREGATION (b), MEAN OVER FOLDS, which is the Arlot-Celisse equation (9) / equation (11) form — normalise within each fold by its own validation size, then average the folds with equal weight 1/B. R_LOSO(b) = (1/K) * sum over k of r_k, a STUDY-equally-weighted mean, against R_app = sum over k of (n_k/n) * r_k, a DATUM-equally-weighted mean.

Closed form of the gap, MY OWN ARITHMETIC, verified numerically:
  gap = R_LOSO(b) - R_app = sum over k of (1/K - n_k/n) * r_k
      = -(1/n) * sum over k of (n_k - n/K) * (r_k - rbar),   where rbar = (1/K) * sum over k of r_k.
So the gap is exactly minus the equal-weight-over-studies covariance between study SIZE and study RESIDUAL, scaled by 1/n. It is zero if and only if all studies are the same size, or study size is uncorrelated with study residual. It is POSITIVE when the large studies are the better-fitted ones and NEGATIVE when the large studies are the worse-fitted ones. Both signs are reachable. Nothing in the protocol as written constrains either.

WORKED COUNTEREXAMPLE, MY OWN ARITHMETIC, verified with a two-line computation. One system, two attributed studies, sizes n_1 = 100 data and n_2 = 10 data, n = 110, K = 2. The metric is any per-datum average; units are "metric units", denominator is the number of attributed data in the class being averaged (110 for the pooled limb, 100 and 10 respectively inside the two folds).

| assessment | r_1 | r_2 | apparent (pooled, n=110) | LOSO pooled | LOSO fold-mean (K=2) | gap under (b) | ratio under (b) |
|---|---|---|---|---|---|---|---|
| A | 1.0 | 10.0 | 1.8182 | 1.8182 | 5.5000 | +3.6818 | 3.025 |
| B | 2.0 | 2.0 | 2.0000 | 2.0000 | 2.0000 | +0.0000 | 1.000 |
| C | 10.0 | 1.0 | 9.1818 | 9.1818 | 5.5000 | -3.6818 | 0.599 |

Take the system's two competing assessments to be A and B. Apparent ordering: A ahead of B (1.8182 < 2.0000). Fold-mean LOSO ordering: B ahead of A (2.0000 < 5.5000). THE ORDERING REVERSES. With two assessments there is one comparable pair and it is discordant, so Kendall tau between the apparent and predictive orderings is -1, not +1. Limb (c)'s "top-ranked assessment changes" count is 1, not 0. The gap distribution of limb (b) is {+3.6818, 0.0000} in metric units and {3.025, 1.000} as a ratio — non-degenerate, and assessment-specific. Row C shows the sign reverses when the large study is the badly-fitted one: gap -3.6818, ratio 0.599.

ANSWERS TO THE THREE QUESTIONS AS POSED. Does the predictive residual differ from the apparent residual under (b) with unequal study sizes and unequal per-study residuals? YES, by exactly the covariance term above. Can the difference have either sign? YES — rows A and C. Can two assessments with different per-study residual profiles reorder so that tau is not 1? YES — A against B, tau = -1.

IS AGGREGATION (b) ADMISSIBLE UNDER THE PROTOCOL AS WRITTEN? Yes, and on two grounds, one textual and one external.

Textual: the protocol never states an aggregation. The one phrase that bears on it is the record's "(1) Kendall tau between the apparent and predictive orderings, with a bootstrap interval over systems and over hold-out folds". "Over hold-out folds" makes the FOLD a unit of resampling. A bootstrap over folds presupposes per-fold statistics and belongs to the fold-mean family; and, MY OWN REASONING, labelled: resampling studies with replacement gives them unequal multiplicities in every non-degenerate replicate, so even a predictive estimate built by pooling is, inside the bootstrap, a reweighted-corpus estimate, while the apparent residual is computed once "on the pooled corpus". The protocol's own uncertainty device therefore reintroduces exactly the reweighting that breaks the datum-for-datum equality. Second textual ground: the protocol REQUIRES plurality of weighting — "(4) a weighting-sensitivity panel showing the tau under at least two pre-declared weighting schemes" — so a protocol that mandates two weightings cannot be read as silently fixing the one weighting on which the identity depends.

External: the standard reference definition of a cross-validation estimator IS the fold-mean. Arlot & Celisse, equation (9): "LbCV(A; Dn; (I(t)j) for j = 1..B) := (1/B) × sum over j = 1..B of LbH-O(A; Dn; I(t)j)", prefaced "In brief, CV consists in averaging several hold-out estimators of the risk corresponding to different splits of the data", with each hold-out term internally normalised by its own validation size at equation (8), "(1/nv) × ...". The authors then universally quantify it: "All existing CV estimators of the risk are of the form (9)". The outer weight is 1/B per SPLIT, not per datum.

AND HERE IS WHY THE ENTRY'S INTUITION MISFIRES, which is the heart of this check. Under leave-one-OBSERVATION-out the two aggregations COINCIDE, because every fold holds out exactly one datum: Arlot & Celisse's equation (10), "LbLOO(A; Dn) = (1/n) × sum over j = 1..n of γ(A(D(-j)n); ξj)", is simultaneously a fold-mean over n folds and a datum-mean over n data, and the summariser's own note on reading it says so — "the split-level average in (9) coincides with the per-point average, because each split holds out a single point (nv = 1)". Leave-one-STUDY-out has nv = n_k > 1 and in general unequal, so the coincidence fails. The entry has transported a property of LOO's singleton folds onto a GROUP-wise split where it does not hold. I find no statement in the survey requiring equal validation sizes — my dedicated second sweep returned "The document never states that validation sets must have the same size, or that unbalanced splits cause a problem or bias" — but the survey's V-fold setup assumes them ("subsamples of approximately equal ardinality n/V") and its Section 5.1.2 result is stated under the explicit condition "When the Aj s have exatly the same size n/V", which is the authors treating equal fold size as a special case that buys an identity. That is the shape of the error here, in the survey's own habits of statement.

WHICH ADVERSARY WAS RIGHT. Adversary #1's version carries the defeating hedge inside the sentence — "summed over folds, predictive residual equals apparent residual (up to fold weighting)" — and "up to fold weighting" names precisely the loophole worked above; with that parenthetical the sentence is TRUE and does not yield an identity. Adversary #2's version is correct and is not an identity: "a no-refit \"LOSO\" residual is a reweighted apparent residual and the gap in (b) becomes an artefact of corpus composition". My arithmetic says what #2 says: the gap IS the corpus-composition covariance. Adversary #3's bare version — "the gap of limb (b) is identically zero and the tau of limb (a) is identically 1" — is the only one of the three that is false as a universal, and it is the one the entry adopted verbatim.

---

### SUB-CLAIM 4 — modality and logical form. ANSWER: THE ENTRY WROTE IT BARE AND UNIVERSAL, WITH NO HEDGE. It is therefore defeated by sub-claim 3. DEFECT 3, and it is a hedge-deletion of the kind this ledger has lost legs to before.

What the entry wrote, every instance:
- "Strongest remaining objection": "the gap of limb (b) is identically zero and the tau of limb (a) is identically 1, for every system and every corpus" — "identically", twice, plus an explicit double universal over systems and corpora. Followed by "The question as worded answers itself before any evidence is collected."
- Adversarial log row 1: "Under the literal wording the answer is forced with no data: gap identically 0, tau identically 1."
- "VULNERABILITY OF THIS REJECTION": "It is an ALGEBRAIC identity — not a bitwise or empirical one".
- Entry header, rolled up by the brief from the same leg: "so limb (b)'s gap is identically 0 and limb (a)'s tau identically 1 regardless of evidence".

There is no "up to", no "under the natural aggregation", no "in general", no modal verb anywhere in the claim. It is a flat, unhedged, universally quantified assertion. A single admissible aggregation under which the gap is nonzero therefore defeats it, and sub-claim 3 exhibits one with worked numbers.

THE HEDGE-DELETION, stated precisely because it is checkable. The entry's VULNERABILITY field defends the leg by appeal to independent convergence: "What makes it more than one reader's inference is that three fresh-context adversaries derived the same identity independently (#1 C3, #2 C5, #3 C3)". On the files that sentence is FALSE in two respects. (i) #1 C3 did not derive the same identity: its sentence contains "(up to fold weighting)", and the entry's own adoption of the claim drops that parenthetical with the grammar clean on both sides of the cut — the exact failure mode the brief flags ("a hedge deleted with the grammar clean on both sides of the cut, changing the MODALITY"). (ii) #2 C5 did not derive an identity at all; it derived the denial of one — "a reweighted apparent residual", "an artefact of corpus composition" — which is the position sub-claim 3's arithmetic vindicates. So of the three convergent derivations the entry claims, ONE asserts the bare identity, ONE asserts it only up to the fold weighting that defeats it, and ONE asserts its negation. INSTANCED, per the unenumerated-existence rule: I opened all three adversary files and read all three attack-4 sections in full; the count is 1 / 1 / 1, and the entry's "three ... derived the same identity independently" is FALSE on the instances, not merely unenumerated.

COUNT THE GROUPS, NOT THE CITATIONS, applied here: the convergence the entry leans on reduces to ONE reader asserting the load-bearing universal, and all three readers labelled their own junction as reasoning rather than a source finding, which the entry itself records.

---

### SUB-CLAIM 5 — is the pooled corpus in-sample for every assessment? ANSWER: NO, on adversary #3's sourced instance; BUT this does NOT defeat the identity, and I say so against the direction of this check. The entry addresses it in one place and for the opposite purpose. DEFECT 4, smaller, and a labelling defect rather than an arithmetic one.

The finding itself is #3's C6, quoted entire in section F. Its sourced core is that Cheng & Zhang's newer Al-Sn-Zn description "took into account" data "newly reported" after the earlier assessment, so the earlier assessment never had the chance to fit them. READ LEVEL ON THAT SOURCE, carried from the logs and not re-verified by me: Cheng & Zhang, "Thermodynamic re-assessment of the Al-Sn-Zn ternary system", J. Min. Metall. Sect. B 55(3)B (2019) 439-449, DOI 10.2298/JMMB190320036C — ABSTRACT AND METADATA ONLY, landing page jmmab.com/?p=1218, full author list NOT established. So C6's evidential base is an abstract-level read, and under this ledger's own rule an abstract-only read cannot carry a kill. It can and does carry a confound.

WHETHER THE IDENTITY SURVIVES IT. It does, and this is the one place where my finding runs in the entry's favour. MY OWN ARITHMETIC: the pooled-aggregation equality R_LOSO = R_app derives only from (i) the parameters not changing when a study is withheld and (ii) the two limbs averaging the same per-datum losses over the same data with the same weights. Neither premise mentions whether the data were in the assessment's own fitted corpus. If some studies are out-of-sample for an older assessment, both limbs still score the same data with the same frozen parameters, so the two numbers are still equal and the gap is still 0 under aggregation (a). C6 therefore does NOT break the identity.

WHAT IT DOES BREAK is the word "apparent". Under C6, limb (a)'s first quantity is not an in-sample residual for the older assessments; it is a mixture, in-sample for the newest description and partly out-of-sample for the older ones, in proportions nobody has measured. R1 calls it "their APPARENT residual" and the significance section argues about it as apparent fit — "apparent agreement ... is not a valid selector between competing descriptions". So the entry's triviality verdict, on its own best case, is a verdict about a quantity that the question MISNAMES, and the misnaming cuts toward the question being substantive rather than empty: a comparison between a partly-out-of-sample residual and a differently-aggregated hold-out residual is not an identity in any aggregation.

DOES THE ENTRY ADDRESS IT? Partly, and in one place only: the VULNERABILITY field names the same Cheng & Zhang fact, but deploys it as the "honest residue" of an operation the entry then excludes, not as a challenge to limb (a)'s in-sample status. The record does not address it at all — I swept the record for the Al-Sn-Zn / "took into account" / "newly reported" material and it is not in the record's P1-P7 or protocol; adversary #3's own verdict on that is "The record does not address this", and on my read of the record that is correct.

---

### SUB-CLAIM 6 — is the did-fit/did-not-fit partition genuinely excluded by the canonical wording, or is it a hold-out STRUCTURE the protocol already has to declare? ANSWER: IT IS A HOLD-OUT STRUCTURE, AND THE RECORD'S OWN P4 ALREADY MAKES THE HOLD-OUT STRUCTURE A PROTOCOL ITEM. The kill's "cannot be written in" step FAILS on the record's own text. DEFECT 5, and it is independent of sub-claim 3 — it would stand even if the identity held.

The entry's exclusion, verbatim: "but it is a different operation from leave-one-study-out and writing it in is the forbidden second reformulation".

Against it, the record's P4, verbatim: "The protocol must declare its hold-out structure and argue it is not trivial; the informative structures are cross-PROPERTY (fit calorimetry, predict phase boundaries) and cross-COMPOSITION-REGION (fit binaries and one ternary region, predict another)."

Three things follow from that sentence, and the first two are textual rather than inferential.

FIRST: the record itself instructs the protocol to DECLARE a hold-out structure. It is written as an obligation on the protocol — "The protocol must declare" — not as a reformulation of the question. Record line 67 says the same in the scoring rationale: P4 "is handled by requiring the protocol to declare its hold-out structure rather than by settling the point."

SECOND, and this is the decisive textual point: the two structures the record NAMES as the informative ones — cross-PROPERTY and cross-COMPOSITION-REGION — are NEITHER OF THEM leave-one-study-out. Fitting calorimetry and predicting phase boundaries is a property-wise split; fitting binaries and one ternary region and predicting another is a region-wise split. If naming those two as protocol items is not a second reformulation, then naming a third — partition by what each assessor did and did not fit — cannot be one either. The record has already granted the protocol licence to fix a hold-out structure other than the one named in the question's own wording. The entry's "writing it in is the forbidden second reformulation" asserts a prohibition that the record's own P4 contradicts.

THIRD, and with the entry's own adversary as witness: adversary #3's C3 concedes the distinction in terms — "the record converts weighting (C4) and hold-out STRUCTURE (P4) into protocol items, never the re-fitting step." Exactly so. The residue partition is a hold-out STRUCTURE, not a re-fitting step. By #3's own line it falls on the protocol-item side of the line #3 drew.

LOGICAL FORM OF THE EXCLUSION, because its form is what fails. "writing it in is the forbidden second reformulation" is a sufficiency claim: that writing the partition in SUFFICES to constitute a second reformulation. The counter is not that reformulation is permitted; it is that the antecedent is misclassified — declaring a hold-out structure is, by P4's own wording, a protocol item and not a reformulation of the question. The entry treats a necessary feature of any hold-out protocol as if it were an amendment to the canonical wording.

WHAT SURVIVES OF THE EXCLUSION. The entry's second ground against the residue does survive and I record it: "it also confounds the contrast with assessment age and with each assessor's own exclusions (\"we exclude these data [4] from further analysis in this study\")". That is a real confound, it is sourced at full text in the record's one opened instance, and adversary #1 states the same thing independently — "a residual against excluded studies penalises an assessor for correctly rejecting bad data". But a confound is a design criticism of a non-degenerate measurement. It caps and complicates; it does not make the operation undefined, and it is not a rejection ground under this ledger's rules.

---

## ROUTES THAT FAILED

- Stone 1974, M. Stone, "Cross-Validatory Choice and Assessment of Statistical Predictions", J. R. Stat. Soc. B 36(2) 111-147 (1974), DOI 10.1111/j.2517-6161.1974.tb00994.x — COULD NOT READ. Route tried: onlinelibrary.wiley.com/doi/10.1111/j.2517-6161.1974.tb00994.x, which returned "failed at its site (client_error), and nothing of the page was retrieved". That is a ROUTE FAILURE, not a budget stop; it was my last fetch. Untried routes for the next reader: jstor.org/stable/2984809 and any institutional-repository scan.
  AND, BY KIND, STONE 1974 IS NOT THE DOCUMENT THAT SETTLES THIS QUESTION, so I do not carry it forward as the lead. The kind of document that could settle the aggregation question is one that DEFINES a cross-validation estimator for splits whose validation sets contain MORE THAN ONE observation and states how the folds are combined. Stone 1974 introduced leave-one-OBSERVATION-out — Arlot & Celisse, Section 4.4, read at full text: "LOO was atually introdued independently by Stone (1974), by Allen (1974) and by Geisser (1975)" — and leave-one-out is precisely the case where singleton folds make the fold-mean and the datum-mean coincide, so Stone's own formulation cannot discriminate the two aggregations. Naming it as the settling document would be a kind mismatch. I substituted Arlot & Celisse, which IS that kind — a survey whose stated purpose is to give the general form of every CV estimator — and it answered the question in one fetch.
- Project Euclid published version, projecteuclid.org/download/pdfview_1/euclid.ssu/1268143839 — COULD NOT READ; the proxy served an Incapsula bot-protection resource and the summariser reported "only a single `/_Incapsula_Resource` URL, which is typically a bot-protection or access-challenge resource, not the published paper". ROUTE FAILURE, not a property of the document. Consequence: the PUBLISHED front matter of Arlot & Celisse (volume, page range, ISSN, received date, published equation numbers) is unread by me; the equation numbers I quote (8, 9, 10, 11) are the arXiv v1's.
- dx.doi.org/10.1214/09-SS054 — COULD NOT READ; "RATE_LIMIT_EXCEEDED ... This fetch was rate limited". This is the known doi.org 429 recorded in the batch's route facts. I did not retry: BUDGET STOP, and I say so. One fetch at this route, or at the Lille HAL copy hal-ens.archives-ouvertes.fr/docs/00/40/79/06/PDF/preprintLilleArlotCelisse.pdf, would pin the published citation.
- No search was refused by the classifier. One search was run, of the two allowed; five of six fetches were spent, two of them on the two failures above and one on a second aimed sweep of a document already open.

NOT REACHED / NOT ATTEMPTED, so that nobody mistakes a gap for a finding: I did not re-open the scikit-learn LeaveOneGroupOut docstring (check 3's), Schmid-Fetzer et al. Calphad 31 (2007) 38-52, Cheng & Zhang 2019 full text, Wertz et al. 2018 full text, or any of the four unopened Q7 CALPHAD-UQ papers. None of them bears on any of the six sub-claims above, all of which are either textual questions about files on disk or arithmetic.

## BEARING ON THE LEDGER ENTRY

THE PRE-DECLARED FALSIFICATION CONDITION IS MET. The entry wrote, against itself: "If the algebraic leg fell, nothing here would reject the entry and it would stand Provisional." The leg has fallen on its own terms, and in three independent places.

1. The universal is false as written (sub-claim 3, DEFECT 2). The identity holds exactly under pooled, datum-equal aggregation and fails under mean-over-folds aggregation, where the gap equals minus the size-residual covariance over studies, takes either sign, and can reorder two assessments so that tau = -1 (worked example, MY OWN ARITHMETIC, verified: apparent 1.8182 vs 2.0000 reorders to fold-mean 5.5000 vs 2.0000 for studies of 100 and 10 data). The protocol as written declares no aggregation; its own uncertainty device, "a bootstrap interval over systems and over hold-out folds", treats folds as units; and the fold-mean is the form in which Arlot & Celisse DEFINE every CV estimator at equation (9), with per-split weight 1/B. The entry carried adversary #3's bare version and dropped adversary #1's "(up to fold weighting)", which is exactly the clause that defeats it. Adversary #2's reading — "a reweighted apparent residual ... an artefact of corpus composition" — is the one my arithmetic supports, and #2 graded attack 4 Partial on it.

2. The premise is not in the protocol as written (sub-claim 2, DEFECT 1). The record NEVER freezes or fixes the parameter set; its only "fixed" in the whole file is "one common metric can be fixed over heterogeneous property types". Every "FIXED/frozen parameter set" in the entry sits inside Gate-4 attack-4 material. "whose full parameter sets are retrievable" is a frame-membership clause and states retrievability, not invariance. So the protocol is silent in both directions — no re-fit step (sub-claim 1, which I confirm with a two-sweep absence) and no freeze either — and from two-way silence no identity follows. What the files support is an UNDECLARED OPERATION in limb (a)'s second ordering: a well-posedness cap, repairable by declaration, not a question that answers itself.

3. The "cannot be written in" step fails independently (sub-claim 6, DEFECT 5). The record's own P4 says "The protocol must declare its hold-out structure and argue it is not trivial" and names cross-PROPERTY and cross-COMPOSITION-REGION as the informative structures — NEITHER of which is leave-one-study-out. If declaring those is a protocol item, declaring the did-fit/did-not-fit partition is one too, and adversary #3's own C3 concedes the category: "the record converts weighting (C4) and hold-out STRUCTURE (P4) into protocol items, never the re-fitting step." The entry's declared residue — "a per-assessment partition of the pooled corpus into studies each assessor DID and did NOT fit is non-degenerate without any re-fit, and is sourced" — is therefore NOT excluded by the canonical wording. Its confound with assessment age and with assessors' own exclusions survives and is real, but a confound caps; it does not reject.

WHAT I DID NOT FIND AGAINST THE ENTRY, recorded so the bearing is not read as one-sided. Sub-claim 1 goes the entry's way: there genuinely is no re-fitting step in either answer-protocol, confirmed by two sweeps. Sub-claim 5 goes the entry's way on the arithmetic: adversary #3's C6 does NOT defeat the identity, because the pooled equality needs only frozen parameters and the same data in both limbs, not in-sample status — though C6 does show that limb (a)'s "APPARENT residual" is misnamed for all but the newest assessment in a system, which cuts toward the comparison being substantive. And aggregation (a) is a perfectly natural reading under which the entry is right; my finding is not that the entry's arithmetic is wrong but that its QUANTIFIER is.

BEARING: STRIKE the Rejection and the attack-4 UNRESOLVED that carries it. On the entry's own pre-declared condition the status becomes PROVISIONAL. Attack 4 should be re-graded to Partial, which is what adversaries #1 and #2 graded it; #3's Unresolved rested on the bare universal and on the "forbidden second reformulation" step, and both fail above. The surviving substance of attack 4, which should be carried as the Partial, is narrower and worth stating in the entry's own terms: limb (a)'s predictive ordering is an UNDECLARED OPERATION — the protocol names leave-one-study-out and specifies neither the parameter treatment nor the fold aggregation — and under the pooled reading the two limbs coincide, which is a well-posedness cap on the question's central operation. That is a Well-posedness 1/3 and a Provisional, not a rejection. Attacks 5 and 8, which adversary #3 recorded as collapsing into attack 4 ("Partial — collapses into attack 4; not counted twice"; "Partial — dissolves only if attack 4 holds"), stay Partial and gain no force.

PROMOTION CONDITION I would attach in place of the kill, stated as a protocol item because that is what sub-claim 6 establishes it is: the entry declares, in the protocol and not by reformulating the question, (i) the fold aggregation — pooled or mean-over-folds — since the two give different answers and only one of them is degenerate; and (ii) the hold-out structure, from the set the record's own P4 already licenses, which includes cross-property, cross-composition-region, and the per-assessment did-fit/did-not-fit partition. Under (i) = mean-over-folds, or under any of the structures in (ii), both estimands are non-degenerate with the parameter sets held at their published values and no re-fit anywhere.

THE OTHER LEGS, unchanged by me and not tested here: the entry itself says the weights-irreproducibility leg "is sourced in the ESPEI regime only plus two full-text instances that print no weights, and would not survive a traditional-assessment paper that printed per-dataset weights and its free-parameter list"; the per-datum study-attribution leg "rests on one full text that R1's frame would exclude by construction"; and the unverified-frame-member leg "is Unverified, which under this ledger's own rule caps a status and never rejects". None of the three was tested in this check, and none of them is a rejection ground on the entry's own account. The novelty grade is untouched: I opened none of the five documents in the entry's demotion condition, so Medium stands with its stated caveat, and the promotion condition toward High is unaffected.
