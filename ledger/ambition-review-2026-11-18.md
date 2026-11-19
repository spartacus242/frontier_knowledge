# Is the ledger's question selection ambitious enough?

Review of 2026-11-18, requested by Jace before taking the Un-Asked Questions concept public. This is an assessment only: LEDGER.md and the runner (`ledger/tools/unasked-ledger-batch-sequential-v18.js`) are unchanged, and both scheduled jobs remain paused. Every change below is a proposal for Jace to accept or reject.

Read for this review: LEDGER.md in full, the runner's generator, adversary and judge prompts, `ledger/INDEX.md` (240 entries), the canonical question, scores and significance fields of all 117 Provisional entries, and every one of the 25 entries generated under the depth gate (2026-10-28 to 2026-10-30) with its verdict line. The rankings below are my judgement, not a scored measurement.

## Verdict

**No. The pipeline selects for questions that are defensible, not for questions that are big.** It is very good at what it was built to do, which is proving that a question has not been asked and is not malformed. But nothing in it measures or rewards the size of a question, and several of its rules actively push big questions out. The result is a ledger of careful, narrow, pre-registered study designs. A few of them hide a genuinely interesting question underneath, but none would read as a moonshot to a general audience in the form the ledger stores it.

The depth gate Jace added on 2026-10-28 worked: it stopped the drift into audits of papers, registries and benchmarks. It did not, and was not designed to, make the questions larger.

## Why the gates produce narrow questions

1. **Ambition is not scored anywhere.** LEDGER.md and the runner contain no criterion for scale, breadth or field-level consequence. The only value criterion is Significance, defined as "an answer would change something ... for an identifiable community that would act on it", and Validated needs only 2 of 3. A question that would recalibrate one parameter for one subfield scores the same as one that would rewrite a textbook chapter. Of the 117 survivors, only 25 score Significance 3/3.

2. **"Never posed" is a test that big questions almost always fail.** Big questions are usually big because many people have wondered about them, so somebody has written them down. Of the 15 candidates rejected under the depth gate, about nine fell because the question, or a disguised form of it, was already in print. That group holds nearly every large question the new scope produced: whether transformer loss converges to the true entropy rate of its data (UQ-20261029-07), what actually prevents JIT programs from reaching a steady state (UQ-20261029-10), whether a carcinoma's invasive front is a pushed or a pulled wave (UQ-20261030-08), whether a colibactin signature explains the birth-cohort rise in early-onset colorectal cancer (UQ-20261030-10), whether per-organ cancer risk scales with cell number (UQ-20261030-06), and whether interfaces have a curvature-dependent free energy (UQ-20261029-02). Several of those were routed to the research workstream as asked-but-open, which is correct under the rules, but it means the ledger keeps the small ones and sends the big ones away.

3. **Specificity is the cheapest way to buy novelty.** Every constraint added to a question (one cell line, one temperature band, one estimator, one threshold) makes an exact prior less likely to exist. The generator reads the gates before it writes, so it learns to pre-narrow. The judge prompt makes this explicit: "A disguised known (same question in other words, or a covariate/instrument/corpus swap on an asked question) is Rejected even if the exact variant is unmeasured." A big new question is very often an old question applied to a new object, so that rule cuts both ways.

4. **Well-posedness is written as a protocol, so the question becomes the protocol.** Gate 1 asks what would settle the question and requires any pre-declared set to be enumerated. That is good discipline, but the schema stores only one "canonical question", so the operational version replaces the idea. Compare the idea inside UQ-20261030-01 ("is there one physical process that decides where all cellular damage goes at division?") with its canonical form, which begins "In two or more symmetrically dividing mammalian cell lines, over >=150 live-tracked divisions per line, with three damage species labelled simultaneously..." Almost every survivor reads like the second sentence.

5. **Bold presuppositions are fatal.** Attack 4 asks whether a question "smuggles in a false or contested assumption", and Unresolved on attack 4 is a rejection. Ambitious questions usually rest on a contested premise; that is part of what makes them ambitious. Attack 4 is the single most common Gate 4 kill in the new scope (UQ-20261028-04, -05, 20261029-04, -09, 20261030-05, and a leg of -08).

6. **Every lesson since launch has added rigour and none has added reach.** The prompts carry dozens of rules learned from mistakes (access routing, abstract-only reads, universal and existence claims, grouped citations). Each is justified. Together they mean an adversary has many ways to land a kill and the generator has one way to survive: be small and exact.

7. **Cost per survivor is high for what survives.** Project notes put a ledger batch at roughly $2,000 in API-equivalent cost. The first full pass under the depth gate, five batches, produced 10 Provisionals and no Validated entries. For a public "donate your tokens" platform, that ratio matters, and the pitch would be stronger if the output per batch were fewer, larger questions.

## The 10 most ambitious surviving entries

Ranked by how much would change if the question were answered, judged on the idea underneath the operational wording.

| # | Entry | The question underneath | Why it is relatively big |
|---|---|---|---|
| 1 | UQ-20261030-01 | Is there one sorting axis that decides where every kind of cellular damage goes when a mammalian cell divides? | A yes would collapse a field of per-organelle results into one mechanism of rejuvenation-by-division, a mammalian analogue of the yeast ageing mother. |
| 2 | UQ-20261017-34 | Is an organ's cell number controlled as a total, with parts compensating for each other, or is each part controlled on its own? | Goes to how body size and organ size are regulated at all, a long-standing developmental biology problem. |
| 3 | UQ-20261030-02 | Does a jumping gene (L1) "remember" where in the 3D nucleus it came from when it chooses where to land? | A yes would mean the genome's mutation landscape depends on its own folding, with consequences for evolution and cancer genomes. |
| 4 | UQ-20261030-07 | Is the size of the viral founding population at transmission a property of the person who transmits it? | If so, the people who seed new variants could be identified in advance. |
| 5 | UQ-20261030-04 | Do mitochondrial genomes in one cell replicate in a hierarchy, with a few copies carrying most of the mutations? | Bears on mitochondrial ageing and the inheritance of mitochondrial disease. |
| 6 | UQ-20261017-54 | Do binding states measured inside a living cell match what test-tube chemistry predicts? | Tests a premise behind nearly all quantitative cell models. |
| 7 | UQ-20261030-09 | Do bacteria living inside pancreatic tumours shelter the cancer cells that survive chemotherapy? | Cancer-cure relevance; links the tumour microbiome to residual disease. |
| 8 | UQ-20261017-06 | Do mixture-of-experts AI models trained from different seeds end up with the same experts? | A universality question about what neural networks learn. |
| 9 | UQ-20261023-03 | Does a bacterial cell wall fatigue like metal under repeated stress? | Would give the cell envelope a memory current models lack. |
| 10 | UQ-20261015-06 | Does a trained AI model draw measurably different power than a random one of the same shape? | A small question with a surprising possible answer about data-dependent physics of computation. |

Near misses: UQ-20261029-06 (does the spectral signature of trained weights depend on data or on the optimiser?) and UQ-20261029-08 (is the garbage-collection "generational hypothesis" really about object age?).

Even the top of this list is "important to a subfield", not "field-shifting". None would carry a Moonshots segment as written; numbers 1 to 4 could, if restated at the level of the idea.

## The 10 least ambitious surviving entries

All ten predate the depth gate and most would fail it today. 107 of the 117 survivors were admitted before 2026-10-28; they are the bulk of what a visitor to the ledger would see.

| Entry | Question, paraphrased |
|---|---|
| UQ-20261015-04 | Do Wikipedia citation links go dead faster for some article topics than others? |
| UQ-20261016-12 | What fraction of popular Hugging Face model repos changed a tokenizer or template file after the weights were posted? |
| UQ-20261021-04 | How many prior-authorization requests are abandoned by the provider before reaching the insurer? |
| UQ-20261016-36 | Does a frozen sample's rack position in one fertility lab's freezer predict its thaw quality? |
| UQ-20261022-05 | Is an antibody vendor's recommended dilution predicted by its stated stock concentration? |
| UQ-20261018-18 | How often does a "cf." or "aff." qualifier on a specimen label survive into the database record? |
| UQ-20261022-08 | Which kinds of facts are lost when a hospital migrates to a new electronic health record? |
| UQ-20261016-43 | Does the test duration authors choose bias published catalyst lifetimes? |
| UQ-20261023-12 | Does an instrument's calibration drift depend on how late its calibration was done? |
| UQ-20261017-35 | Where do the numbers in biology lab protocols originally come from? |

Among the post-gate survivors the narrowest are UQ-20261029-03 (strength ratio of sintered contacts between two forms of ice at 70 to 150 K), UQ-20261029-05 (how far ice crystal habit transitions shift in heavy water) and UQ-20261030-03 (the distribution of viral burst sizes from single cells, scored well-posedness 1/3). They pass the depth gate honestly and are still small.

## What would need to change to get moonshot-grade questions, keeping the rigour

The aim is to add a selection pressure toward size without loosening any check that protects novelty or truth. In rough order of impact:

1. **Split every entry into a headline question and an operational test.** The headline is one plain sentence a scientist in a neighbouring field would understand, with no thresholds. The operational test is the current pre-registered form. Gate 1 judges the operational test; novelty is graded on BOTH, and the entry records which layer is new. Ambition is judged on the headline. This alone would let entries like UQ-20261030-01 read as what they are.

2. **Add an Ambition score, rated by an agent that did not generate the question.** A 0 to 3 scale with anchors: 1, it fixes a parameter or practice in one subfield; 2, it would change a model or textbook section in one field; 3, it would open a field, unify two known anomalies, set a fundamental limit, or make possible something now impossible. The rater must name the specific consequence ("if yes, then ___ becomes possible") and the adversary may attack it as attack 6 (significance inflation) already allows. Proposed use: Ambition 2 or more is required for Provisional or Validated, and Ambition 3 entries are flagged as a "moonshot" tier. Ambition is a ranking, not a verdict, so it cannot launder a weak question past novelty.

3. **Generate wide, then choose for size before spending any search.** Have the generator draft 15 headline questions instead of 5, have a separate agent rank them by ambition, then take the top 5 through the gates. Gate 0 is free of searches, so this costs one extra cheap agent per batch rather than more of the expensive gate work.

4. **Add source methods aimed at large questions** to "Where candidates come from": unification (two unexplained anomalies, one cause?), limits (is there a bound, and what sets it?), capability inversion (what would have to be true for a named moonshot technology to work, and has anyone asked whether it is?), and textbook inversion (a claim every introductory text states, and what it presupposes).

5. **Make attack 4 fatal only for a presupposition shown to be false.** A presupposition that is contested, and flagged as contested at Gate 1, becomes Partial and caps the entry at Provisional instead of rejecting it. The evidentiary standard for "false" stays as strict as it is now.

6. **Distinguish "asked" from "raised once and never pursued".** Today a single "if so, ..." sentence in a Discussion section kills a question (UQ-20261030-10's verdict stands on exactly that). Add a status, say "Under-asked": the question appears in print but no study has been designed to answer it, shown by a documented search for follow-up work with the same estimand. These are routed to research as now, but also kept and displayed in the ledger. For a public audience this is where much of the moonshot material lives, and the burden of proof is no lighter: the entry must show the absence of follow-up as carefully as it now shows the absence of the question.

7. **Narrow the "covariate swap" rule in the judge prompt.** Keep rejecting a disguised known, but stop treating every new object for an old question as a disguise. A swap is a disguise when the answer is predictable from the old result; it is a new question when the old answer would not transfer, and the entry has to argue why.

8. **Settle Gate 5 before going public.** The ledger still has 0 Validated entries because of the unreachable "complete search record" clause, which is the open decision from 2026-10-18 in the ledger thread. A public site whose top tier is empty will be a hard sell.

What should NOT change: the depth gate, the requirement for two independent adversaries, the source-reading rules, and the default verdict of Rejected. Those are what make the ledger credible, and credibility is the asset a public version would be selling.

## How to validate the change before taking it public

The honest test of "ambitious enough" is retrospective. Take about ten questions now recognised as field-opening at the moment they were first asked (for example, whether a handful of transcription factors can reprogram an adult cell to pluripotency, as posed before 2006), restrict search to sources published before that date, and run them through the current pipeline and the proposed one. As a thought experiment only, not a run: the reprogramming question would likely fall to the current covariate-swap rule (one-factor conversion with MyoD was published in 1987), which is the kind of loss this review is about. A pipeline that rejects most landmark questions at their own date is not selecting for ambition. This would cost roughly one or two batches of compute and would give the pitch a concrete, defensible claim.

## Suggested next step

If Jace agrees with the direction, the changes go into LEDGER.md and a runner v19 together, as LEDGER.md requires, and one pilot batch runs with the jobs otherwise still paused. Items 1 to 4 are additive and low-risk; items 5 to 7 loosen specific kill rules and are the ones worth deciding deliberately.
