# VERIFY - Does this ledger's written standard of proof permit the Unresolved that rejects UQ-20261023-13, and does one adversary's Unresolved reject?

Checker: fresh context. Budget used: 1 WebFetch (one curl to raw.githubusercontent.com), 0 WebSearch. Date 2026-10-23.

## CLAIM

That the Rejection of UQ-20261023-13 rests on an Unresolved that ONE adversary (#3) entered on an argument the other two graded Partial for a stated reason, and that the ledger's own written rules do not permit that Unresolved - so the entry should be Provisional, the status both other adversaries recommended. Secondary: that the verdict's "R1 has already spent Gate 1's single reformulation, so the re-fit that would make it non-trivial cannot be written in" is a rule claim and stands or falls on the written rules.

All five quotations handed to me are LOCATED AND VERBATIM, each in the file the claim names:

- entry attack-4 status cell, `UQ-20261023-13-entry.md`, adversarial-log row 4, final column: `UNRESOLVED (#3), Partial (#1), Partial (#2)` - exact.
- adversary #3, `UQ-20261023-13-adversary-3.md` section 5, clause C3, final sentence: "A reviewer applying the own-inference rule strictly should read this clause as CONTESTED rather than FALSE; it fails the question either way." - exact.
- adversary #3 section 10: "fallback if the judge reads the junction as inference: Provisional, with promotion blocked by Gate 1's one-reformulation rule unless a protocol with an explicit re-fitting step is accepted as the R1 reading." - exact. SCOPE OF THE CUT, stated because it matters: the clause is the second half of a sentence whose first half is "Rejected - Unresolved on attack 4 (clause C3: ... definitional leg sourced, junction my own reasoning, stated);". So #3's section 10 ASSERTS the Rejection as his primary and RECORDS A MOVE AWAY from it conditionally. The quotation is a fallback and the entry uses it as a fallback; the use survives.
- adversary #1, `UQ-20261023-13-adversary-1.md`, attack table row 4, status cell: "Partial - load-bearing step is my own inference (labelled); sourced step rests on two document instances, one carried from the record. Not Unresolved under this ledger's standard of proof, but the clause the question cannot survive without is the one not declared." - exact.
- adversary #2, `UQ-20261023-13-adversary-2.md` section 3 ("Where that leaves attack 4"): "Per the ledger's own distinction that is UNVERIFIED, not Unresolved: it blocks Validated and caps the entry at Provisional; it does not reject." - exact.
- the entry's counter, `VULNERABILITY OF THIS REJECTION`: "What makes it more than one reader's inference is that three fresh-context adversaries derived the same identity independently (#1 C3, #2 C5, #3 C3), and that the premise it needs is quoted from the record itself" - exact.

## READ LEVEL

- `/home/claude/frontier_knowledge/LEDGER.md` (174 lines) - FULL TEXT. Read directly; no fetch needed; it is at the path the brief names.
- `UQ-20261023-13-entry.md` (36 lines) - FULL TEXT.
- `UQ-20261023-13-adversary-1.md` (62 lines) - FULL TEXT.
- `UQ-20261023-13-adversary-2.md` (82 lines) - FULL TEXT.
- `UQ-20261023-13-adversary-3.md` (90 lines) - FULL TEXT.
- `UQ-20261023-13-record.md` (70 lines) - PARTIAL: the R1 canonical question and its "WHY R1" paragraph, presuppositions P3/P4, the "What would count as an answer" field, and the well-posedness scoring paragraph. Read by targeted extraction, not end to end.
- scikit-learn, `sklearn/model_selection/_split.py`, branch `main` - FULL TEXT, 111,854 bytes, raw.githubusercontent.com by curl, HTTP 200, one call, no error. Byte count identical to adversary #3's read, so the moving branch has not moved under the quotation since his read. I opened this because it is the ONLY external document behind the Rejection and no second reader had re-checked it.
- NOT OPENED BY ME, and therefore grounding nothing in either direction: the three ESPEI repository files (#3's R2/R3/R4), Schmid-Fetzer et al. Calphad 31 (2007) 38-52, and every prior in the entry. None of the five sub-claims turns on them.

## WHAT THE SOURCE SAYS (quotations as served)

### Sub-claim 1 - when is an attack Unresolved rather than Partial, and can an own-reasoning step carry an Unresolved?

LEDGER.md states the Resolved/Partial/Unresolved definitions twice. First, line 20 (ENVIRONMENT, "Adversary independence"), with its scoping opener kept so the clause is visible as an instruction to the runner:

> "Hold it to a strict standard of proof from the start: an attack is Resolved only when concrete evidence defeats it, Partial when the response is plausible but unevidenced, Unresolved when the response is weak or circular"

Second, line 102 (Gate 4):

> "Unresolved means the attack was run and the candidate's best response was weak or circular."

Both definitions are about the CANDIDATE'S RESPONSE, not about the attack's sourcing. Neither on its own excludes an own-reasoning attack.

But the brief's question is whether the ledger states this "in any words", and IT DOES, three times, all on line 22 ("The adversary's own claims are held to the same standard"):

> "A kill that cannot be sourced is Partial at best, never Unresolved."

> "Mark every step of an attack that is your own inference, say what search would have grounded it, and treat a multi-leg kill whose load-bearing leg is your own reasoning as Partial."

> "Two readers agreeing from one abstract is ONE unread document, not two supports - state your read level beside every leg, and grade a leg resting on an unread document Partial at best."

The second is the governing sentence and it is not a hedge. LOGICAL FORM, as the brief requires: it is an imperative with a SUFFICIENT antecedent - IF a multi-leg kill's load-bearing leg is your own reasoning, THEN treat it as Partial. It is not a disjunction, it has no modal softener ("may", "should normally"), and it does not require the leg to be unsourced ON TOP of being own reasoning: line 22 supplies the unsourced case separately, in its own sentence. So the rule reaches a kill whose OTHER legs are sourced, which is exactly #3's attack 4.

Line 22 also carries the regime instruction that bears on #3's one source:

> "the adversary must cite it to a primary source it opened, quote the relevant line, and check that the claim holds in the candidate's actual regime rather than only in the textbook case."

Does #3's attack 4 meet line 22's antecedent? HIS OWN TEXT SAYS YES. Section 5, C3, with the label in his capitals:

> "Consequence, labelled MY OWN REASONING AND NOT A SOURCE FINDING, arithmetic-grade: a fixed parameter set's prediction for study k is identical whether or not k is 'left out', so without re-fitting the predictive residual equals the apparent residual datum for datum, the gap of limb (b) is identically zero and the tau of limb (a) is identically 1"

and his attack-4 status cell, in full:

> "Unresolved on C3 (definitional leg sourced to R1; weights leg sourced to R3/R4 in the ESPEI regime only; the junction is my own reasoning, labelled). If the judge applies the own-inference rule strictly: Partial, and the entry is then Provisional with a Gate-1-blocked promotion condition."

The entry concedes the same in its own words, in `VULNERABILITY OF THIS REJECTION`:

> "all three adversaries labelled the junction as their own reasoning rather than a source finding"

ANSWER TO SUB-CLAIM 1: YES. LEDGER.md line 22 states in terms that a multi-leg kill whose load-bearing leg is the adversary's own reasoning is to be treated as Partial. #3's load-bearing junction is labelled own reasoning by #3, by #1, by #2 and by the entry. The UNRESOLVED on attack 4 is therefore wrong on the ledger's own written rule, and #3 wrote the conditional that says so.

### What #3's one sourced leg actually says, now that I have opened it

#3's C3 claims the definitional leg is "FALSE on the definitional leg, on a source I opened", glossing the docstring thus:

> "The device is a train/test split in which 'each training set is comprised of all samples except ones belonging to one specific group' (R1): a TRAINING step on the remaining studies is intrinsic to it."

The quoted string is LOCATED, verbatim, at `_split.py` lines 1312-1314, inside the `LeaveOneGroupOut` class docstring. As served, with the scoping opener restored:

> "Provides train/test indices to split data such that each training set is comprised of all samples except ones belonging to one specific group."

WHAT THE OPENING WORDS SCOPE: the grammatical subject is the Python class `LeaveOneGroupOut`, and the verb is "Provides train/test indices". The sentence ASSERTS what one library class EMITS - two arrays of integer indices. It does not assert that an estimator must be refitted on the training indices, and it is not a definition of the phrase "leave-one-study-out evaluation" in general. DEDICATED SWEEP, run because the ledger forbids resting on one sweep's silence: `grep -ic "refit\|re-fit"` over the whole 111,854-byte file returns 0. The word "intrinsic" and the training STEP are #3's gloss on the noun "training set"; they are not in the document. (That this is a gloss and not a finding is MY OWN READING of the two texts side by side; the zero count for "refit" is a sweep result.)

REGIME of that source, in #3's own honest words, which I confirm:

> "a software-primary DEFINITION of the leave-one-out / leave-one-group-out device, generic supervised learning, unit = sample or group; it defines, measures nothing, and is used here for the definitional leg only. A statistics textbook or Stone 1974 would be the stronger primary; I had no fetch left for one."

PUBLISHED IS NOT PERFORMED: this document DEFINES an API. It prints no number, measures nothing, and names no CALPHAD object. So the single external support for the whole Rejection is a software docstring whose regime (generic supervised-learning estimators, refitted per split by the consumer) is not the candidate's regime (a frozen published Gibbs-energy parameter set), which is the check line 22 requires and which was not run.

### Sub-claim 2 - the rejection rule, and whether one adversary's Unresolved rejects

The operative rule is at the end of Gate 4, line 100, verbatim and in full:

> "Save the adversary's log verbatim into the entry. Unresolved status on attacks 1, 2, or 4 → **Rejected**. Unresolved on any other attack → **Provisional** at best."

Gate 5's own rejection line, line 104-110, verbatim:

> "Switch roles again: you are the judge. Weigh the full record and set status:"
> "- **Rejected** — State the gate and the reason. If rejected as already-asked, note where it belongs."

and the Validated bullet, which is where "unresolved" reappears:

> "- **Validated** — Novelty ≥ Medium with the complete search record; Well-posedness 3/3; Significance ≥ 2/3; no unresolved fatal objections."

LOGICAL FORM: line 100's second sentence is an unconditional sufficient condition on a single Unresolved. It is singular ("Unresolved status"), it names no quorum, and Gate 5 adds no tally - it says "Weigh the full record".

DEDICATED SWEEP for the corroboration question, because this is an absence claim: `grep -in "majority|corrobor|quorum|consensus|two of three|both adversaries|second adversary|tally|vote"` over LEDGER.md returns exactly two lines, 23 and 24, and NEITHER is a counting rule. Line 24 is about RUNNING a second adversary - "run a second adversary on every candidate that drew only one ... then re-judge on both" - and line 23 is the verify rule - "Where an adversary's fatal ground does not survive, Gate 4 is incomplete".

ANSWER TO SUB-CLAIM 2: ONE Unresolved on attack 1, 2 or 4 DOES reject, with no corroboration and no majority required. The rule is UNENUMERATED-FREE here: I list what I opened (LEDGER.md in full) and name the sweep; there is no majority clause in this document. So the claim's alternative branch - "or requires more than one adversary's Unresolved to reject" - is FALSE on the written rules. The Rejection does NOT fail for want of a second Unresolved. It fails, if it fails, only on sub-claim 1: whether the Unresolved was earned.

Two written rules do cut the same way as the claim's conclusion without being counting rules, and I name them because the judge will want them. Line 23: "Order the pass by what is likeliest to fall: the entry's own pre-declared falsification condition first, then any kill no other reader made" - this check IS that rule firing, and the rule's remedy when a ground does not survive is explicit: "strike the failed ground, keep what verified, and name the attack the verdict now rests on." Line 24: "A Provisional keeps its promotion condition and comes back; a Rejected entry does not."

### Sub-claim 3 - the Unverified rule the entry invokes, and whether it reaches #2

The entry writes, in `Strongest remaining objection`:

> "the unverified-frame-member leg is Unverified, which under this ledger's own rule caps a status and never rejects"

The rule exists, at line 102, and the entry's paraphrase is faithful. Verbatim, in full, with both its definitions:

> "**Unresolved and Unverified are different statuses, and only one of them is fatal.** Unresolved means the attack was run and the candidate's best response was weak or circular. **Unverified** means the check did not run at all — the search budget was spent, the classifier refused, the source could not be opened. An unrun check is not evidence in either direction: it cannot pass the candidate and it cannot kill it. So an Unverified attack 1, 2 or 4 blocks **Validated** and caps the entry at **Provisional**, naming the unrun check as the promotion condition; it never produces a Rejection on its own. Record it as Unverified, never as Unresolved, and never as a check that passed."

A second, broader licence for the word sits at line 22:

> "Name one instance you opened, or grade the claim Unverified and say that it is."

TWO SEAMS, both recorded because the entry and #2 lean on this rule in slightly different places:

(a) Line 102's grammatical object is an "Unverified ATTACK", not an Unverified LEG. The entry applies it to one leg of an attack graded Unresolved on a different leg. That is an extension of the rule, not a quotation of it. It happens to be harmless here, because the entry invokes it only to explain why that leg is not the rejecting one.

(b) Line 102's DEFINITION of Unverified is narrow - "the check did not run at all" - and neither the entry's frame-member leg nor #2's conjunction is unrun in that sense. Both checks RAN and returned "no verified instance". The broad use is licensed by line 22's existence-claim sentence, but line 22 does not repeat the "caps and never rejects" consequence; that consequence is attached to line 102's narrow definition. So the entry is stitching a consequence from one sentence onto a definition from another.

DOES IT REACH #2's GRADING? Formally, no, and for a reason that favours the claim rather than the entry: #2 did not grade attack 4 Unverified. He graded the attack **Partial** and the CONJUNCTION Unverified -

> "What survives is weaker than a kill and stronger than nothing: the conjunction C1 AND C2 AND C3 — one verified frame MEMBER — is UNVERIFIED on everything I opened and on everything the record opened, and the record says so itself ('NO MEMBER VERIFIED'). Per the ledger's own distinction that is UNVERIFIED, not Unresolved: it blocks Validated and caps the entry at Provisional; it does not reject. Attack 4 = **Partial**."

So line 102 is not what makes #2's attack 4 non-fatal - his Partial does that - but his reading of line 102 is accurate as to the rule's substance, and he and the entry are invoking the same sentence for the same purpose. ANSWER TO SUB-CLAIM 3: the rule exists as written; the entry's paraphrase of it is faithful; it reaches the entry's own frame-member leg only by extending "attack" to "leg" and by borrowing line 22's broader sense of Unverified; and it reaches #2's conjunction in substance, though #2's attack-level grade is Partial, not Unverified.

### Sub-claim 4 - Gate 1's one reformulation, and whether it governs the answer-protocol

Gate 1 in full, verbatim, both paragraphs (LEDGER.md lines 55-61):

> "### Gate 1 — Well-posedness
>
> Answer: *what would count as an answer?* If you cannot describe the evidence, experiment, proof, or argument that would settle it, the question is not yet well-posed. One reformulation is permitted at this gate; record both versions. If the reformulation also fails, reject.
>
> Check that each presupposition is either established or explicitly flagged as contested. Confirm it is a question, not a thesis or an agenda wearing a question mark."

WHAT IT GOVERNS, on the text: "record both versions" - versions of the QUESTION. The gate's object throughout is the question ("it is a question, not a thesis"), and the entry schema at lines 116-145 keeps "Question (canonical)", "Alternative formulations" and "What would count as an answer" as three separate fields. R1 is a rewriting of the Question (canonical) field: both the record and the entry describe it that way - "V0 asked whether the ordering 'by their own reported fit' survives held-out evaluation ... R1 replaced reported fit with a recomputed apparent residual."

DEDICATED SWEEP, because this is the load-bearing absence of this sub-claim: `grep -in "protocol|hold-out|holdout|held-out"` over all 174 lines of LEDGER.md returns ONE line, 41, and it is the wrong sense -

> "**Un-asked:** no equivalent or substantially overlapping formulation found after the search protocol below."

That is the SEARCH protocol. The strings "hold-out", "holdout" and "held-out" occur NOWHERE in LEDGER.md, and "answer-protocol" occurs nowhere. So LEDGER.md says nothing whatever about an answer-protocol's hold-out structure, and Gate 1's reformulation rule does not reach it on any wording in the document. TRUE OVER THE INSTANCE I OPENED - LEDGER.md in full - and I name no other rule file, because the brief names only this one and `ls` shows only `LEDGER.md` and `PROMPT.md` at the top level.

NOW SET IT AGAINST P4. The record's P4, verbatim:

> "P4 — PRIMARY CONTESTED PRESUPPOSITION. A predictive residual is meaningful for a thermodynamically self-consistent model: a Gibbs-energy description is not a free-form regressor, so held-out data of the SAME property in the SAME composition region may be near-determined by the model form, making a same-property hold-out trivially satisfied. The protocol must declare its hold-out structure and argue it is not trivial; the informative structures are cross-PROPERTY (fit calorimetry, predict phase boundaries) and cross-COMPOSITION-REGION (fit binaries and one ternary region, predict another). Unresolved here and carried forward."

Three things follow from P4's own words, and all three cut against the verdict's secondary step.

(i) Declaring the hold-out structure is a PROTOCOL ITEM THE RECORD ALREADY OWES, by its own sentence "The protocol must declare its hold-out structure". It is carried forward as an open item, not settled. Filling an owed protocol slot is not rewriting the Question (canonical) field, and Gate 1's rule - which speaks only of "both versions" of the question - does not on its text forbid it.

(ii) P4 ALREADY names two hold-out structures, and NEITHER IS LITERAL LEAVE-ONE-STUDY-OUT: "cross-PROPERTY (fit calorimetry, predict phase boundaries) and cross-COMPOSITION-REGION". So the record as it stands at Gate 0-3 already contemplates structures other than the one the kill is addressed to. The entry concedes the asymmetry it then relies on - "The measurand exemption covers weighting and hold-out structure, never the re-fitting step" - but that distinction between "hold-out structure" (free to declare) and "re-fitting step" (a forbidden reformulation) is the ENTRY'S OWN, not the ledger's: the ledger has no sentence on either.

(iii) Gate 1's rejection trigger is "If the reformulation also fails, reject" - i.e. it fires when R1 ITSELF fails AT GATE 1. R1 did not: the record scored well-posedness 2/3 and passed the gate. Gate 4's rejection trigger is the Unresolved at line 100, not a reformulation count. So on the written rules, the one-reformulation rule FORBIDS A THIRD QUESTION VERSION; it does not itself reject anything, and nothing in LEDGER.md makes a spent reformulation a ground of rejection.

ANSWER TO SUB-CLAIM 4: Gate 1's rule, as written, governs the QUESTION's versions and is silent on the answer-protocol's hold-out structure - the relevant terms are absent from the document on a dedicated sweep. Set against P4, writing the hold-out structure in is filling a protocol slot the record's own P4 declares to be owed and carries forward unresolved, so on the written rules it is not a second reformulation at all. The verdict's secondary step - "R1 has already spent Gate 1's single reformulation, so the re-fit that would make it non-trivial cannot be written in" - is therefore NOT SUPPORTED BY THE RULE IT CITES. One honest qualification, labelled MY OWN READING: the entry's narrower point, that a RE-FIT changes the ranked OBJECT from "the published assessments" to the evaluator's re-optimisations, is a substantive argument about the question's identity and is untouched by anything I found; what fails is only the claim that Gate 1's counting rule forbids writing it in.

### Sub-claim 5 - did #1 and #2 derive it without #3's sources, and was their reason the own-inference rule?

DEDICATED SWEEP over both logs for #3's sources: `grep -in "scikit|sklearn|LeaveOneGroup|dataset_schema|bagnoud|raw.githubusercontent"` over `UQ-20261023-13-adversary-1.md` and `-2.md` returns ZERO lines in each. Their opened-source lists confirm it independently: #1 opened F1 arXiv:1902.01269, F2 arXiv:1806.05769, F3 the Sandia LASSO record, F4 the Prince APDIC PDF; #2 opened F1 the Sandia record, F2 jmmab.com/?p=1218, F3 arXiv:2508.01028, plus one GitHub code search at SNIPPET level. Neither read the scikit-learn docstring and neither read any ESPEI repository file. CONFIRMED.

#1's derivation, section "Attack 4", C3, with his label:

> "THIS IS THE LOAD-BEARING CLAUSE AND IT IS NOT TRUE AS WORDED. MY OWN REASONING ABOUT THE CLAIM'S LOGIC, NOT A SOURCE FINDING: with parameters fixed, removing study j from the evaluation corpus changes nothing about the model's prediction for study j, so the 'held-out' residual on study j is identical to that study's share of the apparent residual; summed over folds, predictive residual equals apparent residual (up to fold weighting), the gap is identically zero and tau is identically 1 by construction, for every system, regardless of the data."

#1's STATED REASON for Partial - the sentence the brief asks for - is his attack-4 status cell, and it is the own-inference rule and nothing else:

> "Partial — load-bearing step is my own inference (labelled); sourced step rests on two document instances, one carried from the record. Not Unresolved under this ledger's standard of proof, but the clause the question cannot survive without is the one not declared."

He repeats it in his recommended verdict:

> "PROVISIONAL at best. No attack is Unresolved under the standard of proof (my kill on attack 4 is my own inference plus two document instances, hence Partial), so no Rejection"

So for #1: the argument is the SAME argument, not a weaker version, and the reason for Partial IS the own-inference rule. CONFIRMED on both halves.

#2 IS DIFFERENT, AND THE BRIEF'S NOTE IS RIGHT. His C5, in full, with his label:

> "C5. A leave-one-study-out PREDICTIVE residual is definable for an already-published, frozen parameter set. -> **CONTESTED, part sourced and part my own reasoning (labelled).** THIS IS MY OWN REASONING ABOUT THE PROTOCOL'S LOGIC, NOT A SOURCE FINDING: on a frozen parameter set, dropping study k changes which data are SCORED, not what the model was TOLD, so a no-refit 'LOSO' residual is a reweighted apparent residual and the gap in (b) becomes an artefact of corpus composition"

That is NOT the identity. #2's conclusion is that the LOSO residual is "a reweighted apparent residual" and that the gap "becomes an artefact of corpus composition" - a gap that is non-informative, not a gap that is zero. The entry's sentence "three fresh-context adversaries derived the same identity independently (#1 C3, #2 C5, #3 C3)" is therefore NOT ACCURATE FOR #2.

And #2's STATED REASON for Partial on attack 4 is not primarily the own-inference rule either. He gives two, both quoted above and here in order: the venue/scope limit on his one full text -

> "SCOPE LIMIT I PUT ON MY OWN LEG: this is an arXiv preprint combining MLIPs with CALPHAD, NOT a Calphad-journal or JPED assessment paper, which is the document kind the candidate's frame rule names. ... That is exactly the scope-transfer trap, and it is why my attack 4 below is Partial and not Unresolved."

and the Unverified/Unresolved distinction, quoted under sub-claim 3. He DOES invoke the own-inference rule explicitly, but on attack 5, not attack 4:

> "I mark the load-bearing step here — the mixed-fold argument — as MY OWN REASONING ABOUT THE CLAIM'S LOGIC, NOT A SOURCE FINDING, which under this ledger's own rule caps it at Partial."

ANSWER TO SUB-CLAIM 5: confirmed that #1 and #2 reached their conclusions without #3's sources. #1 derived the identity (hedged) and gave the own-inference rule as his reason for Partial - both halves confirmed. #2 derived a DIFFERENT and weaker claim (reweighting / corpus-composition artefact, not an identity) and gave the scope-transfer limit and the Unverified/Unresolved distinction as his reasons for Partial, invoking the own-inference rule only on attack 5. So the entry's counter is accurate for #1 and #3 and INACCURATE for #2.

## REGIME

LEDGER.md: its own stated population is this repo's un-asked-questions pipeline; unit of analysis = one candidate question; operating condition = a daily batch run by one generator plus fresh-context adversary subagents; instrument = the eight Gate 4 attacks with a three-level status; threshold = line 100's mapping from a status to a verdict. The claim I am checking is a claim ABOUT this document's rules applied to one of its own entries, so it sits squarely inside the regime - this is the one source here that is not being transported anywhere.

The three adversary logs: population = one candidate (UQ-20261023-13); unit = one attack; condition = fresh context, 9 searches and 4 fetches each, first log not read by the later ones; instrument = the adversary's own reading plus whatever each opened. They are PRIMARY for what each adversary graded and why, which is all five sub-claims ask of them, so the claim sits inside their regime too.

scikit-learn `_split.py`: population = users of one Python library; unit = a sample or a group; operating condition = generic supervised learning in which the consumer fits an estimator on the training indices the splitter returns; instrument = index arrays; threshold = none; category = API documentation. THE CLAIM DOES NOT SIT INSIDE THIS REGIME. The candidate's object is a frozen published Gibbs-energy parameter set that no one refits, which is precisely the case this document does not address - it returns indices and says nothing about whether a fit follows. Ledger line 22 demands exactly this check ("check that the claim holds in the candidate's actual regime rather than only in the textbook case") and it was not run; #3 says so himself, naming the primary he could not afford.

## DEFECTS FOUND

1. **The UNRESOLVED on attack 4 is contrary to LEDGER.md line 22 as written.** "Mark every step of an attack that is your own inference ... and treat a multi-leg kill whose load-bearing leg is your own reasoning as Partial." #3's junction is labelled own reasoning by #3, #1, #2 and the entry. This is the primary finding and it is a rule finding, not a judgement call: #3's own status cell states the consequence - "If the judge applies the own-inference rule strictly: Partial, and the entry is then Provisional with a Gate-1-blocked promotion condition."

2. **The verdict's secondary step cites a rule that does not say what it is cited for.** Gate 1's "One reformulation is permitted at this gate; record both versions" governs the question's versions. "hold-out", "held-out", "holdout" and "answer-protocol" appear NOWHERE in LEDGER.md (dedicated sweep over 174 lines). The record's own P4 makes declaring the hold-out structure a protocol item it owes and carries forward unresolved. And Gate 1's reject trigger fires only if R1 fails at Gate 1, which it did not. So "the re-fit ... cannot be written in" is not supported by the rule it names. The entry's separate, substantive point - that a re-fit changes the ranked object - is untouched.

3. **The entry's own counter overstates its corroboration.** "three fresh-context adversaries derived the same identity independently (#1 C3, #2 C5, #3 C3)" is inaccurate for #2, whose C5 concludes the LOSO residual is "a reweighted apparent residual" whose gap "becomes an artefact of corpus composition" - a non-informative gap, not an identity. Two readers derived the identity, not three.

4. **A hedge is deleted between the adversaries' formulation and the entry's.** #1 wrote "summed over folds, predictive residual equals apparent residual (up to fold weighting)"; #2 made that same fold/corpus weighting the whole of his claim ("a reweighted apparent residual"). The entry's `Strongest remaining objection` carries the unhedged form: "the leave-one-study-out residual equals the apparent residual datum for datum, the gap of limb (b) is identically zero and the tau of limb (a) is identically 1, for every system and every corpus." Datum for datum the frozen-parameter claim is sound; the AGGREGATE equality is what #1 hedged and #2 denied, and the entry prints it without the hedge. MY OWN REASONING, NOT A SOURCE FINDING: a fold-averaged statistic need not equal a pooled statistic unless the aggregation weights coincide, and limb (a)'s tau is an ordering, so it survives only under weighting choices nobody has declared - which is the same unfilled protocol slot as defect 2. What would have grounded this: a document stating how the protocol aggregates folds. No reader opened one, because the protocol does not declare it.

5. **The one external source behind the Rejection is a definition outside the candidate's regime, and its load-bearing word is a gloss.** The docstring strings are LOCATED and verbatim at `_split.py` lines 1312-1314 and 174-176 (I opened the file; 111,854 bytes, same as #3's read). But the sentence's subject is a Python class and its verb is "Provides train/test indices"; a dedicated case-insensitive sweep for "refit"/"re-fit" over the whole file returns 0. #3's "a TRAINING step on the remaining studies is intrinsic to it" is his gloss on the noun "training set", not a statement of the document. PUBLISHED IS NOT PERFORMED: this source DEFINES an API and measures nothing. #3 named the stronger primary he could not afford ("A statistics textbook or Stone 1974 ... I had no fetch left for one") - a BUDGET stop, stated as such by him, and still a budget stop.

6. **A seam in the Unverified rule, recorded as minor.** Line 102's "caps a status and never rejects" consequence attaches to its own narrow definition ("the check did not run at all"), while the entry and #2 apply the word in line 22's broader existence-claim sense ("Name one instance you opened, or grade the claim Unverified"). Line 102's object is also an "Unverified ATTACK", not a leg. Both extensions happen to run in the direction of Provisional, so neither changes the bearing; I record them so a later reader does not find them for the first time.

NOT A DEFECT, and I say so because the claim offered it as an alternative: **one adversary's Unresolved DOES reject under the written rules.** Line 100 is unconditional and singular, and a dedicated sweep for majority / corroboration / quorum / consensus / tally / vote over LEDGER.md finds no counting rule anywhere. The Rejection does not fail for want of a second Unresolved.

## ROUTES THAT FAILED

None. Zero route failures and zero refusals this check.

- `/home/claude/frontier_knowledge/LEDGER.md` was at the path the brief names; the `ls`/`grep -n` fallback was not needed.
- raw.githubusercontent.com/scikit-learn/scikit-learn/main/sklearn/model_selection/_split.py - HTTP 200, 111,854 bytes, one curl, first call. One caveat and not a failure: the quotation is pinned to the moving branch `main`, not to a commit. My read today matches #3's byte for byte, so the text has not moved under it since; a later reader should pin a commit SHA rather than re-trust the branch.
- NOT TRIED, and these are BUDGET-AND-SCOPE STOPS rather than route failures, since no sub-claim turns on them: Schmid-Fetzer et al., Calphad 31 (2007) 38-52 (the entry's own single-most-likely-to-settle nominee; untried routes remain hal-00474878 and the ScienceDirect article page); the asistent.ceon.rs redirect #2 left one call short; the three ESPEI files; the Thermo-Calc methodology page returned four times and opened by nobody. I had 5 fetches left and spent none of them, because this check is a rule check and those documents bear on other legs.

## BEARING ON THE LEDGER ENTRY

**The claim HOLDS on its central point and the Rejection should be struck, with one of its two alternative grounds refuted rather than confirmed.**

Sub-claim by sub-claim: (1) HOLDS - LEDGER.md line 22 states in terms that a multi-leg kill whose load-bearing leg is the adversary's own reasoning is treated as Partial, and all four texts agree that #3's junction is that. (2) HOLDS ONLY IN ITS FIRST BRANCH AND FAILS IN ITS SECOND - one Unresolved on attack 4 rejects, with no corroboration or majority required anywhere in the document; the Rejection's defect is that the Unresolved was not earned, not that it was lonely. (3) HOLDS - the Unverified rule exists as written, the entry paraphrases it faithfully, and it reaches #2's conjunction in substance though #2's attack-level grade is Partial. (4) HOLDS - Gate 1's rule governs the question's versions, says nothing about an answer-protocol or a hold-out structure on a dedicated sweep, and P4 already makes the hold-out declaration a protocol item the record owes; so the verdict's secondary step is not supported by the rule it cites. (5) HOLDS WITH ONE CORRECTION THE CLAIM ITSELF ANTICIPATED - #1 and #2 worked without #3's sources, #1's reason for Partial was the own-inference rule, but #2's version is a reweighting claim rather than an identity and his stated reasons were the scope-transfer limit and the Unverified distinction.

CONCRETE BEARING, in the form line 23 asks for - strike the failed ground, keep what verified, name the attack the verdict now rests on:

- **Strike** the attack-4 UNRESOLVED and record it as Partial, citing LEDGER.md line 22 and #3's own conditional. With that struck, no attack in the 8-row table is Unresolved, so line 100 produces no Rejection. **The entry becomes Provisional**, which is what #1 ("PROVISIONAL at best") and #2 ("**Provisional** — nothing Unresolved, so no Gate 5 rejection") each recommended independently, and what #3 named as his own fallback.
- **Strike** the verdict's secondary step as a rule claim. Keep its substance as an argument: that a re-fit changes the ranked object from the published assessments to the evaluator's re-optimisations. That argument is undamaged by this check and is the strongest thing left in attack 4.
- **Correct** the `VULNERABILITY OF THIS REJECTION` field: "three fresh-context adversaries derived the same identity independently" should read two, with #2's C5 described as a reweighting/corpus-composition claim. And carry #1's "(up to fold weighting)" hedge into the `Strongest remaining objection` field, where it has been dropped.
- **Convert to promotion conditions** (and note that the ledger's reformulation rule does not block the first of these on the reading above): (i) the record declares its hold-out structure explicitly - fixed-parameter scoring on studies outside each assessment's own fitted corpus, or a re-fit under one declared protocol with the ranked object renamed - which P4 already obliges it to do; (ii) the record declares how LOSO folds are aggregated, which is what defects 4 and 2 both run into; (iii) one verified frame member, the condition #2 names, which is Unverified and caps rather than rejects; (iv) a primary on the hold-out device in the candidate's own regime rather than a library docstring - #3 named the kind and the instance, "A statistics textbook or Stone 1974", and had no fetch left.
- **Because the rejecting ground does not survive, line 23's second sentence now applies**: "Where an adversary's fatal ground does not survive, Gate 4 is incomplete." Three adversaries have run, so no skipped adversary is owed; what is owed is the re-judge on all three logs, and on all three the ceiling is Provisional and the floor is not Rejected.
- **Gate 5's remaining-objection line should name the surviving objection**, which on this check is attack 4 at Partial on three counts the entry already carries: the undeclared hold-out structure, the undeclared fold aggregation, and the object-identity problem under a re-fit.
