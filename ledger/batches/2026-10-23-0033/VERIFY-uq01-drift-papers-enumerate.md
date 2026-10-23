# VERIFY - enumerating the drift papers that consume matcher-matched units: the universal is NOT true as stated, but its exact class is still unenumerated
Checker: fresh context. Budget used: 6 WebFetch, 3 WebSearch. Date 2026-10-22.

## CLAIM

The entry's motivating gap contains, and flags, an UNENUMERATED UNIVERSAL: "zero drift papers
consuming UnitMatch/EMD-matched units were opened by Gate 2 or by any of the three adversaries, so
'the consuming literature never propagates them' is an unverified universal." The same universal is
the load-bearing half of the entry's own fallback: line 35 says that if Sheintuch 2017 fell, the
entry would still be held below Validated by "the unenumerated universal in the motivating gap,
since zero drift papers consuming matcher-matched high-density units were opened by any of the four
agents." Line 36's promotion condition asks for ">=3 named drift papers consuming UnitMatch/EMD-matched
units checked for an error-propagation term."

My job: turn the universal into a list. Find and OPEN >=3 papers that report day-to-day change in
tuning or representation using units matched across days by a published matcher, and report for each
whether it carries any term, correction, control or sensitivity analysis for matcher identity error.

TWO FORMULATIONS MUST BE KEPT APART, because my finding falls between them:
  (N) NARROW, the entry's words: no such paper carries an ERROR-PROPAGATION TERM.
  (B) BROAD, this check's sub-claim (c): no such paper carries ANY term, correction, control or
      sensitivity analysis for matcher identity error.
(B) is FALSE on opened instances. (N) is true over the three documents I opened but those three do
not sit inside the entry's exact class, so for the class the entry names (N) remains UNENUMERATED.

## READ LEVEL

Three documents OPENED, two COULD NOT READ. Every quotation below is as served by the WebFetch
summariser, not as read off the publisher's page; the summariser caps verbatim return at roughly
125 characters, and I assembled nothing across fragments.

1. Lu, Hung-Yun; Stealey, Hannah M.; Zhao, Yi; Barnett, Cole R.; Contreras-Hernandez, Enrique;
   Santacruz, Samantha R. (2025). "Long-term neuron tracking reveals balance of stability and
   plasticity in functional properties." bioRxiv 10.1101/2025.03.14.643204 (v1, posted 2025-03-14).
   Authors taken from the front matter as served.
   READ LEVEL: PARTIAL - front matter, the tracking Methods, the PD/tuning Results, and the
   Discussion sentence the entry quotes. I did not read the figures or supplements.
   IDENTIFIER COLLAPSE, which is itself a finding: my searches returned this ONE document under
   three identifiers - bioRxiv 2025.03.14.643204, PLOS ONE 10.1371/journal.pone.0321830, and
   PMC13313350. One document, not three sources.

2. Bimbard, Celian; Takacs, Flora; Catarino, Joana A; Fabre, Julie MJ; Gupta, Sukriti; Lenzi,
   Stephen C; Melin, Maxwell D; O'Neill, Nathanael; Orsolic, Ivana; Robacha, Magdalena; Street,
   James S; Gomes Teixeira, Jose M; Townsend, Simon; van Beest, Enny H; Zhang, Arthur M; Churchland,
   Anne K; Duan, Chunyu A; Harris, Kenneth D; Kullmann, Dimitri Michael; Lignani, Gabriele; Mainen,
   Zachary F; Margrie, Troy W; Rochefort, Nathalie L; Wikenheiser, Andrew; Carandini, Matteo; Coen,
   Philip (2025). "An adaptable, reusable, and light implant for chronic Neuropixels probes."
   eLife 13:RP98522, DOI 10.7554/eLife.98522 (page cites version .3; Version of Record 2025-02-18).
   Authors taken from the front matter as served, in the printed order.
   READ LEVEL: PARTIAL - front matter, the UnitMatch tracking passage, the across-day unit-count and
   waveform/ISIH results, the same-day matching ceiling, Figure 7's behavioural comparison, and a
   targeted negative search of the text for "false positive".

3. [FIRST AUTHOR COULD NOT BE OBTAINED] (2025). "Temporal coding carries more stable cortical visual
   representations than firing rate over time." bioRxiv 10.1101/2025.05.13.652528 (v1);
   journal version Nature Communications 2025, article s41467-025-62069-2.
   READ LEVEL: PARTIAL, and DEFICIENT IN FRONT MATTER. Both bioRxiv routes - the /v1.full route and
   the /v1 landing page - served text that begins at the Introduction, with no author list, no
   abstract, no posting date and no DOI line; the only identifier in the served text was "652528v1"
   inside figure image filenames. I therefore CANNOT name its first author, and I will not take a
   name from a search-result title or a ResearchGate restatement. Sections I did read: Introduction,
   the matching Results, the tuning-correlation and drift-index Results, the decoding Results, and
   the shuffled-identity and tracking-error control sentences.
   IDENTIFIER COLLAPSE: bioRxiv 2025.05.13.652528, Nature Communications s41467-025-62069-2 and
   PMC12322180 are ONE document. The Nature host is where its front matter lives and it is the route
   that failed.

COULD NOT READ (strictly distinct from NOT FOUND; their silence is evidence in neither direction):
  - Nature Communications s41467-025-62069-2, the journal version of document 3. WebFetch:
    "failed at its site (client_error)". This is the entry's known nature.com failure. I had no
    fetch left for the PAR mirror or a repository copy.
  - "Firing rates in visual cortex show representational drift, while temporal spike sequences
    remain stable", Cell Reports, PII S2211124725003183 (2025). WebFetch at sciencedirect:
    "failed at its site (robots_disallowed)". This is a SEPARATE document from document 3 - similar
    claim, plausibly the same group - and I did not merge them.

## WHAT THE SOURCE SAYS (quotations as served)

### Document 1 - Lu et al. 2025, bioRxiv 2025.03.14.643204

MATCHER. It does NOT consume UnitMatch or the EMD matcher; it publishes and uses its own. Served:
"a waveform-based neuron tracking method optimized for standard microelectrode arrays", with
"Pearson correlation and Euclidean distance were used to quantify similarity." UnitMatch and EMD
appear only as other approaches, in the Introduction and Discussion.

DAY-TO-DAY CHANGE (sub-claim b): YES, reported as STABILITY. Preferred direction (PD) shift between
neighbouring sessions, cosine tuning model, one-sample t-test: Monkey A N=540, p=0.54; Monkey B
N=1420, p=0.36, served as "PD shifts were not significant, suggesting that PDs remained stable over
time." Long-term PD span against a permutation null: 48% (Monkey A) and 60% (Monkey B) of tracked
neurons classified stable. Modulation depth b1 is defined in Methods with no statistic for its change.

MATCHER-ERROR TERM (sub-claim c): A NOMINAL FALSE-POSITIVE RATE, SET BY CONSTRUCTION, AND A
CROSS-CHANNEL NULL - and no propagation. Served: "the 95th percentile of this null distribution,
ensuring a false positive rate of 5%", with the null built as "MWs were randomly paired from distinct
channels across sessions in batches." Also served: "this approach does not explicitly control false
negatives", and "some neurons that persisted across sessions may have been excluded due to waveform
variability." No split-half, no acute/same-day control, no ground truth; the authors point future
work at "known same and different neurons" from simultaneous two-photon imaging with ephys.
SCOPE-SETTING OPENER on the 5%: the clause is governed by "ensuring", i.e. the sentence RECORDS A
THRESHOLD CHOICE. It ASSERTS that the threshold was placed at the 95th percentile of a cross-channel
null; it does NOT assert that 5% of accepted matches were measured to be wrong. PUBLISHED IS NOT
PERFORMED: this source DEFINES the rate at an operating point, it does not MEASURE it.
HEDGED FORMULATION the entry relies on, quoted as hedged: "Conversely, findings of instability may
result from tracking inconsistencies rather than true neuronal plasticity." The opener "Conversely,"
scopes it as the second horn of a two-sided caution, and the clause RECORDS A MOVE AWAY from
attributing instability to plasticity. It asserts no quantity.

### Document 2 - Bimbard et al. 2025, eLife 13:RP98522

MATCHER. A genuine UnitMatch consumer. Served: "We used the tracking software UnitMatch to track the
same units across days, based on their waveforms." Also served: "Tracked neurons had stable waveforms
over days, as expected from the matching procedure."

DAY-TO-DAY CHANGE (sub-claim b): NO. It reports no tuning, selectivity or task-response change across
days. Its across-day numbers are yield and signal: "The mean decrease in unit count per day was 3%
(median 2%)"; mean units per bank 85 +/- 6 (days 0-10), 65 +/- 7 (10-50), 54 +/- 15 (50-100),
44 +/- 25 (beyond), SEM as given; "The proportion of tracked neurons typically decreased to 10% after
32 days"; "The RMS values were stable across days, across all mice." Figure 7 compares hit rate,
trial number and reaction time before and after implantation - behaviour, not neural tuning.
THEREFORE THIS DOCUMENT IS NOT AN INSTANCE OF THE UNIVERSAL'S CLASS. It is the closest thing I opened
to one - UnitMatch, chronic Neuropixels, across days - and it fails on the consequent, not the
antecedent: it never computes a drift statistic into which a matcher error could propagate.

MATCHER-ERROR TERM (sub-claim c): NONE, and I searched for it. The fetch returned, as an explicit
negative, that no sentence in the article contains "false positive" and that no false-match rate is
given. Two things that look like controls and are not: the ISIH check, served with "These ISIHs were
not used to match neurons across days" and reported via "as measured by the area under the receiver
operating characteristic curve (AUC)" - a validator comparing tracked versus different units, not a
false-match rate; and a same-day ceiling, served as "For two recordings on the same day, 50% of
neurons were matched, suggesting an upper limit in neuron tracking with the method we used." The
opener "For two recordings on the same day" SCOPES that number to a within-day pair of recordings and
the clause ASSERTS a matched FRACTION (a ceiling on recovery), not an error rate. Quantification is
deferred: the article points to van Beest et al. for "a rigorous quantification of the number of
neurons that one can expect to track with these methods."

### Document 3 - "Temporal coding carries more stable cortical visual representations than firing rate over time", bioRxiv 2025.05.13.652528

MATCHER. Not UnitMatch, not EMD. Served: "We used an actively-learned ensemble of hierarchical
clustering trees to match neurons across all sessions", cross-checked - "We cross-validated this
process of matching units across days with other methods including dense neural network and
discriminant analysis" - and restricted - "Only common channels available for all 15 days were used
to track putative same units." Instrument: ultraflexible nanoelectronic threads (NETs), 32-channel
probes, spike sorting in Mountainsort4. Tracking span, served: "We tracked the same neuronal
populations over the course of 15 consecutive days."

DAY-TO-DAY CHANGE (sub-claim b): YES, and it is the real thing - a drift paper. Tuning similarity is
the Pearson correlation between a neuron's tuning curves on day x and day x+7, Fisher-Z transformed;
neurons with r > 0.9 called stable. Stable fractions: 23% static gratings (n = 533), 24% drifting
gratings (n = 481), 9% receptive-field Gabors (n = 455), 13% natural images (n = 684). Population
trajectories: same stimulus r = 0.90 +/- 0.01 with itself after 14 days versus r = 0.20 +/- 0.01 for
different stimuli (P < 1.3e-29). A representational drift index is defined as
(CC_wd - CC_bd)/(CC_wd + CC_bd). Fixed-in-time decoder error rose with time while sliding-in-time
decoders showed no increase (P > 0.21). Temporal components: smaller drift slope than firing rates
(P < 2.7e-41). Functional-connectivity pair loss 2.8% per day.

MATCHER-ERROR TERM (sub-claim c): YES - A SHUFFLED-IDENTITY SENSITIVITY ANALYSIS AND AN EXPLICIT
TRACKING-ERROR CONTROL. This is the finding that breaks formulation (B). Served:
  "shuffling 10% of neuron identity within mice per day as a simulation of unstable recording eroded
   the decoder performance significantly towards chance level"
  "suggesting that the observed tuning drift cannot be trivially explained by the possible existence
   of tracking errors (Supplementary Fig4e)"
What else is there and what it is not: a deep-learning matching check scored as "The decoding quality
was defined as the percentage of correctly recovered user decisions", validated against human labels
("to validate the consistency of the human labeling") - a concordance with human labelling, NOT a
false-match rate; within-day comparisons used as a reference, which is not an acute matching control;
and 50%-of-trials resampling repeated 30 times, which addresses trial variability, not identity.
The fetch returned as an explicit negative that the text contains no calculation or sensitivity
analysis showing how matching errors would affect the drift or stability results, and that "false",
"mismatch", "misidentif" and "UnitMatch" do not appear in the matching context.
SCOPE-SETTING OPENERS, both load-bearing:
  - The shuffle clause is governed by "as a simulation of unstable recording": it ASSERTS that
    injected identity error degrades a decoder. It is a control in the DIRECTION OF SUFFICIENCY
    (identity error would leave a different signature), not a propagation of a measured false-match
    rate into the drift index.
  - "suggesting that ... cannot be trivially explained" RECORDS A MOVE AWAY from the tracking-error
    alternative. The word "trivially" is doing the work, and the clause asserts no quantity. Note
    also that the cited evidence is unit-location change, which the authors call "a minor role" - so
    the rebuttal rests on a waveform/location argument, exactly the family the entry's Presupposition
    (3) already grades as surrogate.

## NUMBERS, WITH NUMERATOR CLASS AND DENOMINATOR IN BOTH DIRECTIONS

TWO numbers in my opened set could be mistaken for the entry's missing false-match rate. Both are
one word away from it, i.e. both are different quantities.

(i) Lu et al.'s 5%. PRINTED: in the tracking Methods, as "ensuring a false positive rate of 5%",
unitless (a proportion). NUMERATOR CLASS: the tail mass of a NULL distribution of waveform-similarity
scores built from pairs that are known to be different units because they sit on DISTINCT CHANNELS
("MWs were randomly paired from distinct channels across sessions in batches") - so the class excludes,
by construction, every hard case: a different unit on the SAME channel, a split, a merge, and drift of
one unit onto a neighbouring channel. DENOMINATOR: all such cross-channel null pairs, NOT the accepted
matches, and NOT all candidate pairs within a channel. WHAT IT MISSES relative to the entry's quantity:
every same-channel confusion, which is where cross-day identity error actually lives, and all
false-negative/split-merge structure (the paper says so: "this approach does not explicitly control
false negatives"). WHAT IT INCLUDES that the entry's quantity excludes: nothing measured at all - it
is a chosen threshold, so it includes a stipulation the entry's quantity would have to earn by
measurement. It DEFINES an operating point; it does not EVALUATE one.

(ii) Document 3's 10%. PRINTED: in the decoding Results, as "shuffling 10% of neuron identity within
mice per day". NUMERATOR CLASS: a hand-chosen fraction of tracked neurons whose identity labels are
PERMUTED, per mouse per day. DENOMINATOR: the tracked population within a mouse within a day. WHAT IT
MISSES relative to the entry's quantity: it is an INJECTED rate, not the matcher's own rate - the
matcher's false-match rate is nowhere printed in this paper - and the shuffle is a permutation, which
destroys tuning association at random and so realises exactly the tuning-INDEPENDENT error model the
EMD paper's own sentence expects to fail. WHAT IT INCLUDES that the entry's quantity excludes: it
perturbs the DECODER, not the per-neuron tuning-correlation drift statistic or the drift index; and it
includes an assumed error process rather than a measured one. It is a sensitivity analysis of a
stipulated rate, which is very close to the entry's limb (b) in FORM, and is NOT a measured rate
propagated, which is limb (a) feeding limb (b).

No document I opened prints a MEASURED cross-day false-match rate against a function-independent
identity labelling. On that, nothing in my read moves the entry.

## REGIME

Entry's regime, in its own words: "chronic high-density extracellular recordings" in which units are
matched by ">=2 published cross-day unit matchers at declared operating points", with drift reported
as a statistic. Where my three documents sit:

1. Lu et al. 2025 - "standard microelectrode arrays" (the matcher is explicitly "optimized for" them),
   non-human primate motor cortex, two monkeys, unit of analysis = a tracked unit's preferred
   direction across neighbouring sessions. INSIDE the entry's regime on: chronic, cross-day, matched
   units, declared operating point (95th percentile, nominal 5%), functional change measured.
   OUTSIDE on: NOT high-density, and the matcher is the paper's OWN, published in the same paper, so
   this is a matcher paper measuring tuning, not a consumer of someone else's matcher. It is the
   fourth group the entry already cites for the qualitative confound, now read for its controls.

2. Bimbard et al. 2025 - chronic Neuropixels, mice (and the implant is used across labs), unit of
   analysis = a tracked unit's presence, waveform and ISIH across days. INSIDE on instrument, matcher
   (UnitMatch) and chronic cross-day tracking - the only document I opened that is inside on all
   three. OUTSIDE on estimand: it measures YIELD and SIGNAL, not tuning or representation. The claim
   being checked does not sit inside its estimand.

3. Document 3 - ultraflexible NETs, 32 channels, mouse visual cortex, 15 consecutive days, unit of
   analysis = a tracked unit's tuning curve on day x versus day x+7, plus population trajectories and
   decoders. INSIDE on: cross-day matched units, declared matching procedure, drift reported as named
   statistics, and - uniquely in my set - a sensitivity analysis on identity error. OUTSIDE on:
   32-channel NETs are not the "high-density" instrument the entry's question is scoped to, and the
   matcher is the authors' own ensemble, not UnitMatch or EMD.

So: of three opened documents, ZERO are strictly inside "drift paper consuming UnitMatch/EMD-matched
high-density units". One is inside on instrument and matcher but outside on estimand (Bimbard). Two
are inside on estimand but outside on instrument and on "published external matcher" (Lu, Document 3).

## DEFECTS FOUND

D1. THE BROAD UNIVERSAL IS FALSE ON AN OPENED INSTANCE. Sub-claim (c) as this check words it - "any
term, correction, control or sensitivity analysis for matcher identity error" - is contradicted by
TWO of the three documents I opened: Lu et al.'s declared 5% cross-channel-null false-positive rate,
and Document 3's 10% identity shuffle plus its explicit "cannot be trivially explained by the possible
existence of tracking errors". Anyone writing "the consuming literature carries nothing" in that
broad form is wrong, and wrong on the first three papers anybody opens. The entry should not use the
broad form.

D2. THE NARROW UNIVERSAL IS NOT FALSIFIED, BUT ITS CLASS IS STILL EMPTY OF OPENED INSTANCES. None of
my three documents carries an error-propagation term in the entry's sense - a matcher error rate
carried through into a drift statistic under a declared null. But none of my three is a
UnitMatch/EMD-consuming high-density drift paper either. The one UnitMatch consumer I opened reports
no tuning drift. So the entry's sentence "zero drift papers consuming matcher-matched high-density
units were opened by any of the four agents" is STILL TRUE AFTER THIS CHECK, and line 36's promotion
condition - ">=3 named drift papers consuming UnitMatch/EMD-matched units checked for an
error-propagation term" - IS NOT MET. I checked three papers; they are not three papers of that kind.

D3. THE ENTRY'S FALLBACK LEG IS WEAKER THAN IT READS, FOR A NEW REASON. Line 35 leans on the
universal being unenumerated. After this check the honest statement is narrower and harder: it is not
that the consuming literature ignores matcher error - Document 3 does a 10% identity shuffle and
argues the point explicitly - it is that nobody carries a MEASURED matcher rate into a drift statistic.
That is a thinner gap than "nobody prices it in", and a reader who opens Document 3 will say the field
does address it. The leg survives only in the narrow form, and the narrow form now has to be stated
with Document 3's shuffle acknowledged in the same breath, or the entry will look like it did not look.

D4. THE 10% SHUFFLE IS ALREADY HALF OF LIMB (b), FROM INSIDE THE DRIFT LITERATURE. This is the same
shape of damage the entry recorded for Leg B when Stevenson 2011 turned up: a published paper in the
consuming literature stipulates an identity-error rate and reports the induced change in a
representation statistic (decoder performance). It is NOT limb (a) - no measured rate - and it is NOT
applied to the paper's own drift index or tuning correlations, only to the decoder. But limb (b) of
the entry's reformulation asks for "what apparent change do those rates ALONE induce in >=2 published
drift statistics under a declared null", and this is one rate inducing one change in one statistic.
Novelty for limb (b) should drop a notch, and the entry's triviality attack gets a little stronger,
because the move is now demonstrated and not merely algebraic.

D5. AN INFLATED UNOPENED-PRIOR LIST, TWICE. Both documents in my opened set that have journal versions
were returned to me under three identifiers each (bioRxiv + journal + PMC). Document 1 is
2025.03.14.643204 = pone.0321830 = PMC13313350, one document; Document 3 is 2025.05.13.652528 =
s41467-025-62069-2 = PMC12322180, one document. Anyone counting returns as sources would have counted
six. Separately, the Cell Reports title "Firing rates in visual cortex show representational drift,
while temporal spike sequences remain stable" is a DIFFERENT document from Document 3 and must not be
collapsed into it on the strength of a similar claim.

D6. MY OWN DEFECT, RECORDED: I cannot name Document 3's first author. Both bioRxiv routes served text
starting at the Introduction. Per the front-matter rule I left the author field empty rather than
lifting a name from a search title or a ResearchGate restatement. A "named instance" with no nameable
first author is a weak instance, and the fix is one fetch at the Nature host or the PAR mirror.

D7. NOMINATION, LABELLED BY KIND. What KIND of document could settle the narrow universal? A primary
research paper that (i) records across-day neural data on a high-density probe, (ii) matches units
with UnitMatch or the EMD matcher rather than its own method, and (iii) reports a tuning or
representational-similarity statistic as a function of day. Bimbard et al. 2025 is the right
instrument and the right matcher but fails (iii) - it is an implant methods paper, so it is NOT that
kind. I did not open any document of that kind. The best-justified leads for one, and I call them
guesses because I did not open them: the UnitMatch paper's own citing literature, and Schoonover et
al. 2021, which the entry already lists as live and unopened. A UnitMatch GitHub issue or README is
NOT that kind of document and should not be nominated as one.

## ROUTES THAT FAILED

- https://www.nature.com/articles/s41467-025-62069-2 - WebFetch: "failed at its site (client_error)".
  The entry's known nature.com failure, reproduced. Untried for lack of budget: the PAR mirror
  https://par.nsf.gov/servlets/purl/<id> and any institutional repository copy.
- https://www.sciencedirect.com/science/article/pii/S2211124725003183 - WebFetch: "failed at its site
  (robots_disallowed)". Same sciencedirect refusal the entry records for Sheintuch 2017.
- https://www.biorxiv.org/content/10.1101/2025.05.13.652528v1 (the landing page, fetched specifically
  for front matter after the .full route served none) - returned, but served the same
  Introduction-onward body with no author list, no abstract, no DOI line. NOT a host failure: a
  served page that does not contain what was asked for.
- PMC and Europe PMC not attempted: hard-blocked per the environment rules. PMC13313350 and
  PMC12322180 were treated as identifiers to convert, never as routes.
- Unpaywall not attempted, per the no-personal-identifier rule.
- No search was refused by the classifier. All three searches ran.

RETURNED, NOT OPENED (sub-claim d) - every title my three searches returned that I did not open.
Titles only; repeated returns counted as ONE document each, never as corroboration:
  - "Tracking neurons across days with high-density probes" - returned at all three searches, under
    four URLs (biorxiv .full, biorxiv .full.pdf, nature.com s41592-024-02440-1, researchgate). ONE
    document = the entry's PRIOR 1 (van Beest et al.), already read in full by the entry. Not reopened.
  - "The UnitMatch pipeline a, Preprocessing..." (researchgate figure page) - NOT A PAPER: a figure
    extracted from the document above.
  - "Multi-day Neuron Tracking in High Density Electrophysiology Recordings using EMD" (PMC10802241)
    - ONE document = the entry's PRIOR 2 (Yuan et al., eLife 92495), already read in full. PMC route
    blocked in any case.
  - "Density-based longitudinal neuron tracking in high-density ..." (biorxiv 2025.12.19.695632) -
    the Yu-lab tracker the entry already lists as live and unread. A MATCHER paper, not a consumer.
  - "Repix: reliable, reusable, versatile chronic Neuropixels implants using minimal components"
    (researchgate) - an implant methods paper; same kind as Bimbard, so expected to fail sub-claim (b).
  - "An adaptable, reusable, and light implant for chronic Neuropixels probes" also returned as a
    reviewed-preprint URL and as PMC11835385 - the SAME document as my Document 2, opened once.
  - "Long-term neuron tracking reveals balance of stability and plasticity in functional properties"
    also returned as PLOS ONE pone.0321830 and PMC13313350 - the SAME document as my Document 1.
  - "Firing rates in visual cortex show representational drift, while temporal spike sequences remain
    stable" (Cell Reports, PII S2211124725003183; also a researchgate restatement) - ATTEMPTED and
    refused, so it is listed under ROUTES THAT FAILED as COULD NOT READ, not merely unopened.
  - "Temporal coding carries more stable cortical visual representations than firing rate over time"
    also returned as nature.com s41467-025-62069-2 (attempted, client_error), PMC12322180, PubMed
    40462909 and a researchgate PDF page - the SAME document as my Document 3.
Net: my 3 searches returned 9, 9 and 9 links = 27 returns resolving to 7 distinct documents, of which
I opened 3, failed on 2, and left 2 unopened by choice (the Yu-lab tracker and Repix, both methods
papers of the wrong kind for sub-claim (b)).

## BEARING ON THE LEDGER ENTRY

HOLD the entry's status, NARROW one sentence of the motivating gap, and DO NOT tick line 36's third
clause.

1. Line 36's third promotion clause - ">=3 named drift papers consuming UnitMatch/EMD-matched units
   checked for an error-propagation term, converting the motivating gap's universal from unverified to
   a stated absence over named instances" - is NOT SATISFIED. I opened three papers and checked them;
   they are not three papers of the named kind. Zero UnitMatch/EMD-consuming high-density DRIFT papers
   were opened by me either. The clause should stay open, and the batch should know the reason is not
   that they are hard to read but that the first one anybody opens (Bimbard) turns out not to measure
   tuning at all.

2. NARROW the gap's wording. The entry's line 7 phrase "nobody prices it into a drift estimate" should
   be qualified wherever it appears, because Document 3 (bioRxiv 2025.05.13.652528) injects a 10%
   identity shuffle, reports that it "eroded the decoder performance significantly towards chance
   level", and states that "the observed tuning drift cannot be trivially explained by the possible
   existence of tracking errors". The defensible form is: no paper carries a MEASURED matcher
   false-match rate into a reported drift statistic; at least one stipulates an identity-error rate
   and reports its effect on a decoder.

3. Line 35's fallback leg SURVIVES but in the narrow form only, and it should be restated so that it
   does not read as a claim the first three opened papers refute. Its current wording - the universal
   is unenumerated - is still literally accurate for the class the entry names, and this check makes
   it accurate over a LARGER opened set rather than converting it to a stated absence.

4. NOVELTY: a small reduction on limb (b), per D4. A stipulated-rate-to-statistic sensitivity analysis
   now exists inside the drift literature on a tracked-unit dataset, which is the same kind of damage
   Stevenson 2011 did to Leg B. Limb (a) - a measured rate against a function-independent labelling -
   is untouched by everything I opened, and remains the part of the question nothing in print answers.

5. ADD to the live-unread list, with their routes: Nature Communications s41467-025-62069-2 (front
   matter and Methods of Document 3, needed to name its first author and to confirm the matching
   description survived peer review) and Cell Reports PII S2211124725003183. Both are the right KIND
   of document for grading drift statistics, and neither is the kind that could settle the narrow
   universal, since neither uses UnitMatch or EMD.

6. UNCHANGED BY THIS CHECK: Sheintuch 2017, UnitMatch Fig S3, Dhawale 2017, Schoonover 2021, and the
   Yu-lab density-based tracker. I opened none of them and my budget never reached them.

SUB-CLAIMS NOT REACHED: none. (a) through (e) are all answered above; (e) is answered in the CLAIM
section's two-formulation split and restated here: over the three documents I opened the universal
"no such paper carries an error-propagation term" is TRUE, the broader "no such paper carries any
control or sensitivity analysis for matcher identity error" is FALSE, and for the entry's own class -
drift papers consuming UnitMatch/EMD-matched high-density units - it remains UNENUMERATED, because I
opened none of that class.
