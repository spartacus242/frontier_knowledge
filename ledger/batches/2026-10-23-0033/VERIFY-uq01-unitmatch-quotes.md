# VERIFY - UnitMatch (van Beest et al.) quotations, printed rates, and the unopened Supplementary Fig. S3
Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-22.

Entry: UQ-20261023-01. Prior 1 only. I was not shown the reviewer's reasoning and did not read
the entry or adversary files in this directory; everything below is from the documents.

## CLAIM

The entry's eight-part claim about Prior 1: (1) match threshold is "If probability is >0.5,
UnitMatch defines a pair as a match" (Fig. 3 caption), with the Step-3 total-score threshold
data-driven and no numeric value printed; (2) it prints "UnitMatch found 31.3 +/- 11.2% ... to be a
match" and an acute probe-repositioned control where "finding a match was rare (4.0 +/- 2.8%, n = 18
pairs of consecutive days"; (3) it disclaims ground truth outright, "However, neither can be
considered ground truth."; (4) its cross-day validation is FUNCTIONAL - "we looked for functional
fingerprints, i.e., patterns of activity that are known to be distinctive and are potentially stable
across days"; (5) it names the confound while declining to quantify it: "the slow decrease in AUC
values that we observed across days could be explained either by a decrease in the quality of
matching, or changes in functional properties of the units"; (6) its only function-independent check
is WITHIN-day (split halves); (7) "representational drift" never appears anywhere in it; (8) its
false-positive and false-negative rates are ANNOUNCED and pointed at Supplementary Fig. S3, which
nobody has opened.

Verdict in one line: the spine holds, sub-claim (6) is FALSE, sub-claim (3) is overread, and two
quotations are cut where the scope changes.

## READ LEVEL

**Source, as the entry carries it:** van Beest E.H., Bimbard C., Fabre J.M.J., Dorgans K., Reddy
C.B., Bhagat J., Mrsic-Flogel T.D., Carandini M., Harris K.D. et al. (2023/2024), "Tracking neurons
across days with high-density probes", bioRxiv 10.1101/2023.10.12.562040; published in Nature
Methods 2024. (Author list corrected under DEFECTS, D8. Published DOI established as
10.1038/s41592-024-02440-1.)

1. **bioRxiv preprint, MAIN TEXT - FULL TEXT (main text only).** Route that worked:
   `https://www.biorxiv.org/content/10.1101/2023.10.12.562040.full.pdf`, fetched twice (two
   different prompts). Served as rendered full text carrying inline reference markup
   (`[Fig figS3]`, `[Disp-formula eqn28]`, `^[40]^`). I read: Introduction; the Results paragraph
   headed "Performance metrics"; the comparison-with-manual-curation paragraph; the section heading
   and opening of "Validation with stable functional properties"; the Steps 0-4 methods overview
   including "Step 4: Drift correction"; the Fig. 3 caption; and the Discussion.
   **Two things are absent from this document as served, and I verified their absence rather than
   assuming it:** (i) ALL front matter - no author list, no affiliations, no DOI line, no date; the
   document as served begins at "Introduction"; (ii) ALL supplementary figures AND their captions -
   only citations to Fig. S1, Fig. S3, Fig. S5 and Table S1 survive, and Supplementary equation 28,
   which defines the Step-3 threshold, is likewise not present.

2. **Supplementary Fig. S3 and the "Supplementary analyses" - COULD NOT READ.** Three routes
   attempted, all failed; enumerated under ROUTES THAT FAILED. This is COULD NOT READ, **not** NOT
   FOUND: I have no evidence about what S3 does or does not print, beyond what the main text says
   when it cites it.

3. **Published Nature Methods 2024 version - COULD NOT READ.** The UCL Discovery record names the
   file but the constructed file path returned client_error. nature.com not attempted (the task
   records it as failing both ways here) and the PAR mirror not attempted - fetch budget exhausted.

4. **UCL Discovery eprint record 10198050 - METADATA ONLY.** Read: title, journal, year ("In
   press"), DOI, a TRUNCATED author list, and the name of the attached published PDF. This is a
   repository metadata record, i.e. a short form written by someone other than the authors. Under
   the front-matter rule I use it to IMPEACH the entry's author list, not to replace it.

5. **PMC11978519** surfaced in the one search. PMC is hard-blocked here and is an identifier to
   convert, never a route. Not attempted.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are from the bioRxiv main text, reassembled from the summariser's ordered
consecutive segments (the summariser caps verbatim quotation at roughly 125 characters). Each
multi-segment sentence is **a reconstruction from consecutive returns**, assembled only from
consecutive segments, verified at the junctions, with the number of fragments stated. No cut string
was ever completed by inference.

### (b) The five quoted strings, one at a time

**Quotation 1 - the probability threshold. VERBATIM. Single fragment, no reconstruction.**

> "If probability is >0.5, UnitMatch defines a pair as a match."

Sentence before (in the Fig. 3 caption): "*Bottom* same, for units recorded across days (*red*)."
Neighbouring caption sentence: "The threshold for putative matching (dashed line) depends on the
number of units and of recordings."

*What the opening words scope:* this sits inside a FIGURE CAPTION, so its opening words scope it to
the probability distributions Fig. 3 displays, within and across days. *The clause ASSERTS* a fixed
numeric decision rule on the probability output. Note that this is a threshold on PROBABILITY,
which is a different quantity from the Step-3 threshold on the total score T. The entry keeps these
two apart correctly, which is the right call.

**Quotation 2 - the chronic match rate. VERBATIM but CUT WHERE THE SCOPE CHANGES. Reconstruction
from 2 consecutive fragments.**

> "From the maximum possible number of units recorded across two consecutive days, UnitMatch found
> 31.3 ± 11.2% (median ± m.a.d., n = 446 pairs of days) to be a match."

Sentence before - reconstruction from 2 consecutive fragments: "We first evaluated UnitMatch's
performance using the cross-validation of the units' waveforms within days, and found low
percentages of false positives and false negatives (Supplementary analyses, [Fig figS3])."
Sentence after: the acute-control sentence, Quotation 3 below.

*What the opening words scope:* "From the maximum possible number of units recorded across two
consecutive days" **is the denominator**. The entry's ellipsis "UnitMatch found 31.3 +/- 11.2% ...
to be a match" deletes both that opener and the parenthetical "(median ± m.a.d., n = 446 pairs of
days)". *The clause ASSERTS* the quantity. The defect is that as the entry carries it, 31.3% reads
as a match rate over an unstated base, and the reader cannot see that the spread is a median
absolute deviation over 446 PAIRS OF DAYS rather than a standard deviation over units.

**Quotation 3 - the acute probe-repositioned control. VERBATIM as far as it goes, but cut
mid-parenthesis and stripped of the qualifier that follows. Reconstruction from 3 consecutive
fragments.**

> "Reassuringly, when we applied UnitMatch to acute recordings, where the probe was reinserted
> daily and had negligible chance of finding the same unit, finding a match was rare (4.0 ± 2.8%,
> n = 18 pairs of consecutive days; Wilcoxon rank sum comparing chronic and acute: p < 10^-10^;
> [Fig figS3])."

Sentence after - reconstruction from 2 consecutive fragments, and this is the load-bearing one the
entry omits:

> "Note that this was when UnitMatch was pushed to find matches by pretending the probe was in the
> same location between the recording sessions."

*What the opening words scope:* "Reassuringly, when we applied UnitMatch to acute recordings, where
the probe was reinserted daily and had negligible chance of finding the same unit" scopes the 4.0%
to a NEGATIVE CONTROL in a different preparation, and states the labelling assumption in the
authors' own words - "negligible chance", which is an assumption, not a verified per-pair label.
*The clause ASSERTS* the quantity, but only at a declared adversarial operating point. The entry's
cut stops at "n = 18 pairs of consecutive days", dropping the Wilcoxon result, the Fig. S3 pointer
and - worse - the following sentence, which tells the reader the number was obtained with the
matcher deliberately mis-configured to over-match.

**Quotation 4 - the ground-truth disclaimer. VERBATIM, but the entry's GLOSS overreads it. Single
fragment, no reconstruction.**

> "However, neither can be considered ground truth."

Sentence before - reconstruction from 2 consecutive fragments: "The higher similarity between
UnitMatch and manual curation is reassuring because the latter is generally regarded more highly
than automated spike sorting." Sentence after: none in that section; the next element is the
heading "Validation with stable functional properties."

*What the opening words scope:* "However, **neither**" is a two-referent pronoun, and the preceding
sentence fixes its referents: UnitMatch's output and manual curation (contrasted with automated
spike sorting). *The clause DENIES* ground-truth status **to those two comparators**. It is not a
blanket disclaimer. The entry's gloss - "it disclaims ground truth outright" - converts a scoped
two-referent denial into a universal, and the error runs in the direction that flatters the entry:
it makes the paper look more ground-truth-free than it is, and in particular it reads the acute
reinsertion control and the within-day waveform cross-validation out of existence. Both of those are
labellings the paper does rely on, and this sentence does not touch either.

**Quotation 5 - the functional fingerprints. NOT VERBATIM. Reconstruction from 2 consecutive
fragments.**

As served:

> "We thus looked for functional 'fingerprints', i.e., patterns of activity that are known to be
> distinctive and are potentially stable across days."

The entry carries: "we looked for functional fingerprints, i.e., patterns of activity that are known
to be distinctive and are potentially stable across days". Three differences: the entry drops
"thus", drops the scare quotes the authors put around 'fingerprints', and lower-cases the sentence-
initial "We" without marking the change.

Sentence before - reconstruction from 2 consecutive fragments: "In our case, we found functional
activity to be remarkably stable, yet distinctive across neurons, and thus could use this stability
to validate UnitMatch performance." Sentence after: "We considered three such fingerprints: a unit's
autocorrelogram" (continues into a definition).

*What the opening words scope:* the dropped "thus" is the scope link to the previous sentence - the
move to functional validation is licensed by the authors' prior finding that functional activity is
"remarkably stable, yet distinctive". *The clause ASSERTS* the move to a functional validation.
Substance of the entry's characterisation - that the cross-day validation is FUNCTIONAL - is
correct; the quotation is a near-verbatim paraphrase presented as verbatim, which is a discipline
defect, not a substantive one. The authors' own scare quotes around 'fingerprints' are a hedge the
entry silently removes.

**Sixth quotation (the entry's claim 5) - the named, unquantified confound. VERBATIM; opener
dropped. Reconstruction from 2 consecutive fragments.**

> "For example, the slow decrease in AUC values that we observed across days could be explained
> either by a decrease in the quality of matching, or changes in functional properties of the
> units."

Sentence before - reconstruction from 2 consecutive fragments: "However, this would prevent any
evaluation of the variation in functional properties across time, and such a variation has been
documented^[4],[5],[20]^." Sentence after - reconstruction from 4 consecutive fragments, and this is
the HEDGED, CITED formulation, so I quote it in preference to any barer one:

> "Therefore, unless there is reason to believe that the functional properties are
> constant^[9],[17],[31]^, it is prudent to exclude these properties from the criteria that
> determine the tracking of units, and only consider them as a possible
> validation^[11],[15],[16],[19],[30]^ or as a separate question^[6],[7],[21],[22],[25],[31],[32]^."

*What the opening words scope:* "For example," scopes the clause as an instance of a general
non-identifiability the preceding sentences set up. *The clause RECORDS A MOVE AWAY* from the
quantity: it names a two-term confound and then prescribes a methodological separation instead of
estimating either term. The entry's claim (5) HOLDS, and the following sentence strengthens it -
the paper puts drift estimation outside its own estimand in its own words.

### (c) The two printed percentages, with units and denominators

| | 31.3 ± 11.2% | 4.0 ± 2.8% |
|---|---|---|
| Printed where | main text, "Performance metrics" para, with a Fig. S3 pointer | same paragraph, next sentence, with a Fig. S3 pointer |
| Spread convention | **median ± m.a.d.**, printed explicitly | median ± m.a.d. **by carry-over** - the acute parenthesis does NOT repeat it; **this carry-over is MY INFERENCE from the adjacent sentence's declared convention, not a printed statement** |
| Per-pair denominator | "the maximum possible number of units recorded across two consecutive days" | not restated; carrying the same base over is again MY INFERENCE |
| n | n = 446 pairs of days | n = 18 pairs of consecutive days |
| Preparation | chronic implant | acute, probe reinserted daily |
| Operating condition | normal | "pushed to find matches by pretending the probe was in the same location between the recording sessions" |

Both numbers as the entry prints them are CORRECT. The entry does not record that they are
**median ± median absolute deviation**, not mean ± SD, which matters for anyone who tries to
propagate the stated uncertainty.

**What n = 18 pairs of consecutive days is a sample of:** it is a count of **PAIRS OF CONSECUTIVE
DAYS** drawn from the ACUTE recordings, in which the probe was reinserted each day. It is not a
count of units, of pairs of units, of mice, of sessions, or of matches. The spread ± 2.8% is
therefore dispersion ACROSS DAY-PAIRS, so the unit of analysis for the uncertainty is the day-pair,
not the unit-pair. Near-neighbour denominator it is not: n = 446 is "pairs of days" (chronic); n = 18
is "pairs of consecutive days" (acute). The chronic sentence's own opener also restricts to "two
consecutive days", so the two are comparable in kind, and the Wilcoxon rank sum the paper reports is
over these day-pair samples.

### (d) "representational drift" and "drift"

**"representational drift": NOT PRESENT in the main text.** Claim (7) holds over what I opened.

*How I searched:* I asked the summariser, over the fetched main text, for every occurrence of the
word "drift" with its sentence, and separately whether the exact two-word phrase "representational
drift" occurs. It returned ten "drift" occurrences and reported the two-word phrase absent. **This
is a summariser-mediated search over the main text, not a byte-level grep**, and it does not cover
the supplementary information, which I COULD NOT READ.

Per the unenumerated-universal rule, the entry's claim (7) - "never appears anywhere in it" - is:
**TRUE over the instances I opened (the main text), and UNENUMERATED over the supplement.** The
supplementary files I did NOT open are: Fig. S1, Fig. S3, Fig. S5, Table S1, the "Supplementary
analyses" section, and the Supplementary equations (including eqn 28). The claim is not established
as a universal over the whole document.

All ten occurrences are **mechanical / electrode** drift. None is representational:

1. Introduction: "All electrodes tend to drift relative to the brain, so that recorded neurons may
   appear and disappear, or change their apparent spike waveform." (reconstruction, 2 fragments)
2. Introduction: "In addition, their geometry and density allow for reliable correction of electrode
   drift."
3. Methods overview: "It then corrects for drift (Step 4) across recordings and repeats Steps 1-3 to
   recompute the putative matches."
4. Step 0: "Each recording session was individually spike sorted with Kilosort^[40]^, which provides
   drift correction within each session^[30]^." (reconstruction, 2 fragments)
5. Heading: "Step 4: Drift correction"
6. Step 4: "First, we equalized the means of the distributions within and across days, to account
   for overall lower scores across days prior to drift correction." (reconstruction, 2 fragments)
7. Step 4: "Results shown in [Fig fig3] are after this drift correction."
8. Step 4: "Note that within-recording drift correction is taken care of by the spike sorting
   algorithm we used."
9. Discussion, served as a fragment only: "...quality, accumulation of uncorrected drift across
   recordings, neurons becoming silent or dying, or changes in waveform properties." I did not get
   the head of this sentence and **do not reconstruct it**.
10. Discussion: "Indeed, tracking of units was more stable when recordings were more stable,
    suggesting recording quality and drift are partially responsible ([Fig figS5])."
    (reconstruction, 2 fragments)

Occurrence 10 bears on claim (5): it is a qualitative attribution pointed at Fig. S5, with the hedge
"partially responsible". It PREDICTS/ANNOUNCES a relationship; it prints no quantity.

### (e) Supplementary Fig. S3 - COULD NOT READ

I did not open it. Routes enumerated under ROUTES THAT FAILED. I therefore cannot say what rates it
prints, how they are measured, against what ground truth, or whether they are within- or across-day.
**S3's silence is not evidence in either direction.**

What I CAN establish, from the main text's own cross-references, is that **S3 is cited twice, for
two different things**, and this contradicts the implicit picture in the entry's claim (8):

- **Citation 1 (within-day):** "We first evaluated UnitMatch's performance using the
  cross-validation of the units' waveforms within days, and found low percentages of false positives
  and false negatives (Supplementary analyses, [Fig figS3])." No numbers. On the main text, the
  false-positive and false-negative rates are **ANNOUNCED and pointed at S3, not printed**. The
  words carrying the magnitude are the unquantified "low percentages". **Claim (8) HOLDS.**
- **Citation 2 (across-day):** the chronic-vs-acute comparison, 31.3% vs 4.0%, Wilcoxon
  p < 10^-10^, "[Fig figS3]". So **S3 also carries ACROSS-DAY content** - specifically the acute
  probe-reinsertion control.

*On nominating S3 as the document that would settle the question:* the KIND of document that could
settle sub-claim (g) is one that prints, per unit-pair, a cross-day false-match rate in the CHRONIC
preparation against labels assigned without reference to functional activity. S3 is a supplementary
analysis panel reporting false-positive and false-negative percentages, so it IS the right kind of
document for the WITHIN-day rates, and it is the right kind for the acute across-day control.
Whether it is the right kind for a chronic per-pair cross-day false-match rate I **cannot** say -
the main text cites it for the within-day cross-validation and for the chronic/acute comparison, and
for nothing else. Calling it the document that would settle (g) is therefore a **guess**, and I
label it one. The defensible statement is narrower: S3 would settle the within-day numbers and the
acute control's presentation.

### (f) Function-independent cross-day validation - YES, one exists

**Claim (6) is FALSE as stated.** The acute probe-reinsertion control (Quotation 3) is both
CROSS-DAY and FUNCTION-INDEPENDENT:

> "Reassuringly, when we applied UnitMatch to acute recordings, where the probe was reinserted
> daily and had negligible chance of finding the same unit, finding a match was rare (4.0 ± 2.8%,
> n = 18 pairs of consecutive days; Wilcoxon rank sum comparing chronic and acute: p < 10^-10^;
> [Fig figS3])."

Its labelling comes from a **physical manipulation** - daily reinsertion - not from functional
fingerprints, and it is measured **across consecutive days**. It sits in the "Performance metrics"
paragraph, upstream of the "Validation with stable functional properties" section, so it is not
part of the functional validation at all.

The within-day check the entry does cite is real, but the paper does not call it "split halves" -
that is the entry's phrase. As served: "the average spatiotemporal spike waveform in the first and in
the second half of the recording", and "T tended to be high when applied to the same unit recorded
across the two halves of a recording" (within-day). So the within-day check exists; it is simply not
the ONLY function-independent check.

**Numerator / denominator / overlap in both directions, for the 4.0% against the claim's quantity
("a cross-day false-match rate against a function-independent ground truth"):**

- *Numerator class, with the source's exclusions:* cross-day pairs that UnitMatch calls a match in
  ACUTE recordings "where the probe was reinserted daily and had negligible chance of finding the
  same unit", obtained while UnitMatch was "pushed to find matches by pretending the probe was in
  the same location between the recording sessions". **Excludes** every chronic recording.
  **Excludes**, structurally, any missed true match: the control has no positive class, so no
  false-NEGATIVE rate can come out of it.
- *Denominator, checked against its near neighbours:* n = 18 pairs of consecutive days (not 446
  pairs of days, which is chronic; not units; not unit-pairs). The per-pair base is carried over
  from the preceding sentence by convention - MY INFERENCE, flagged above.
- *What the source's class MISSES relative to the claim's quantity:* no false-match rate in the
  CHRONIC preparation that drift studies actually run; no miss/false-negative rate; no per-pair
  labelling of true matches, so it cannot say which of the chronic 31.3% are wrong; and nothing at
  all about how a false match propagates into a drift estimate.
- *What it INCLUDES that the claim excludes:* an adversarial operating point no drift study would
  adopt ("pretending the probe was in the same location"), and a day-pair rather than unit-pair unit
  of analysis.

So: a function-independent **cross-day false-positive-proxy rate IS printed** - 4.0 ± 2.8%, acute,
n = 18 day-pairs, main text. A function-independent **chronic per-pair cross-day false-MATCH rate is
NOT printed** anywhere I opened. A number one word away from the claim's is a different quantity,
and this is that case.

### (g) One sentence

No - the paper prints no cross-day false-match rate against a function-independent per-pair
labelling in the chronic preparation; the closest printed quantity is the acute probe-reinsertion
match rate of 4.0 ± 2.8% (median ± m.a.d., n = 18 pairs of consecutive days), which IS a
function-independent cross-day negative control but rests on the authors' stated assumption of
"negligible chance of finding the same unit" and was measured with the matcher "pushed to find
matches", while the within-day false-positive and false-negative percentages are announced only
("low percentages") and pointed at Fig. S3, which I could not open.

## REGIME

Stated in the source's own words wherever possible.

- **Population:** units (clusters) from high-density (Neuropixels) probe recordings in mice;
  chronically implanted animals across days, plus an acute dataset "where the probe was reinserted
  daily".
- **Unit of analysis:** PAIRS of waveforms - UnitMatch "compares these parameters for every pair of
  waveforms within and across days". Summary statistics are reported per PAIR OF DAYS (n = 446
  chronic, n = 18 acute), so reported dispersion is across day-pairs.
- **Instrument:** UnitMatch, operating on the average spatiotemporal spike waveform, downstream of
  per-session Kilosort sorting - "Each recording session was individually spike sorted with
  Kilosort^[40]^, which provides drift correction within each session^[30]^". Six similarity scores
  -> total score T -> a probability. Across-day scores are then drift-corrected: "we equalized the
  means of the distributions within and across days, to account for overall lower scores across days
  prior to drift correction", and "Results shown in [Fig fig3] are after this drift correction."
- **Threshold / operating point:** Step 3 is data-driven - "To identify putative matches, we defined
  a threshold as the value of T above which there were more pairs of waveforms from the same unit
  (green curve in [Fig fig3], top) than pairs of waveforms from neighboring units (average centroid
  distance <50 μm, blue curve in [Fig fig3], top) ([Disp-formula eqn28])" (reconstruction, 3
  consecutive fragments). The Fig. 3 caption adds: "The threshold for putative matching (dashed
  line) depends on the number of units and of recordings." **No numeric value of T is printed in
  the main text**, and the defining equation (28) lives in the Supplementary Information, which I
  could not read. **Claim (1) HOLDS in both halves.** Separately, the probability operating point IS
  numeric: ">0.5".
- **Category:** this is a MATCHER-PERFORMANCE regime, and the paper says so. It explicitly declines
  to fold functional properties into the matching criteria - "it is prudent to exclude these
  properties from the criteria that determine the tracking of units, and only consider them as a
  possible validation ... or as a separate question".

**Does the claim sit inside the regime?** The entry's core framing does: the paper builds the
instrument and fixes the operating point, and in its own words puts the functional/representational
question outside the criteria it optimises, treating it as "a separate question". That is the
entry's gap, and the paper supports it. The entry's sub-claim (6) sits OUTSIDE the regime as
described - it mislocates the acute control - and the gloss on (3) misstates the scope of a
sentence inside it.

## DEFECTS FOUND

**D1 (substantive, STRIKE).** Claim (6), "its only function-independent check is WITHIN-day (split
halves)", is FALSE. The acute probe-reinsertion control is cross-day and function-independent, and
prints 4.0 ± 2.8% over n = 18 pairs of consecutive days. See (f).

**D2 (substantive, NARROW).** Claim (3)'s gloss "it disclaims ground truth outright" overreads
"However, neither can be considered ground truth." The pronoun has exactly two referents fixed by
the preceding sentence - UnitMatch's output and manual curation. The sentence says nothing about the
acute control or the within-day waveform cross-validation. The error runs in the entry's favour.

**D3 (quotation discipline).** Claim (2)'s ellipsis deletes the scope-setting opener that IS the
denominator - "From the maximum possible number of units recorded across two consecutive days" - and
the parenthetical "(median ± m.a.d., n = 446 pairs of days)". Claim (2)'s acute quotation stops
mid-parenthesis and omits the immediately following qualifier: "Note that this was when UnitMatch was
pushed to find matches by pretending the probe was in the same location between the recording
sessions." That omitted sentence is what tells a reader the 4.0% was obtained at an adversarial
operating point.

**D4 (quotation discipline).** Claim (4) is presented as verbatim but is not: the source reads "We
thus looked for functional 'fingerprints', i.e., ..." - the entry drops "thus", drops the authors'
scare quotes (a hedge), and silently lower-cases "We". Substance unaffected.

**D5 (uncertainty).** The entry does not record that both percentages are **median ± median absolute
deviation** over PAIRS OF DAYS, not mean ± SD over units. Anyone propagating the stated uncertainty
from the entry alone would propagate the wrong statistic over the wrong unit of analysis.

**D6 (read-level).** Claim (8)'s "which nobody has opened" is now partly enumerated: I attempted
three routes and failed all three, so S3 remains COULD NOT READ - not absent, not empty. But the
entry's implicit picture of S3 as a within-day-only false-positive/false-negative panel is not safe:
the main text cites S3 a second time, for the chronic-vs-acute ACROSS-DAY comparison.

**D7 (unenumerated universal).** Claim (7) is TRUE over the main text I opened and UNENUMERATED over
the supplement. Instances opened: main text. Instances NOT opened: Fig. S1, Fig. S3, Fig. S5, Table
S1, "Supplementary analyses", Supplementary equations (incl. eqn 28). The universal "never appears
anywhere in it" should be restated as "does not appear in the main text; supplement unchecked".

**D8 (citation front matter).** The entry's author list is wrong in the middle and cannot be
repaired from what I read. The entry carries "van Beest E.H., Bimbard C., Fabre J.M.J., Dorgans K.,
Reddy C.B., Bhagat J., Mrsic-Flogel T.D., Carandini M., Harris K.D. et al." The UCL Discovery record
for this exact DOI gives the opening of the list as "van Beest, Enny H; Bimbard, Célian; Fabre,
Julie MJ; Dodgson, Sam W; Takács, Flóra; Coen, Philip; Lebedeva, Anna; ... Carandini, Matteo; + view
all". So positions 4-7 are **Dodgson, Takács, Coen, Lebedeva**, not Dorgans / Reddy / Bhagat /
Mrsic-Flogel; those four names appear to have been imported from a different paper's author list.
Separately, "Harris K.D. et al." places "et al." after a senior author, which cannot be the printed
order. **CAVEAT, and it is a real one:** I read this from a REPOSITORY METADATA RECORD, not from the
article's front matter - the bioRxiv document as served carried no front matter and the published
PDF would not open. Under the front-matter rule I therefore mark the entry's list UNRELIABLE and
requiring front-matter verification; I do **not** substitute a list I have not seen in front matter.
**Also missing from the entry's citation: the published DOI, 10.1038/s41592-024-02440-1** (Nature
Methods 2024; the UCL record still says "In press", so volume and pages are not established from
what I read).

**D9 (minor).** "split halves" is the entry's phrase, not the paper's; the paper says "the first and
in the second half of the recording" and "the two halves of a recording".

**Sub-claims reached:** all of (a) through (g). **(e) is COULD NOT CHECK on its central question** -
what S3 prints - because every route failed; I reached the sub-claim and report the failure, which is
not a negative finding about S3.

## ROUTES THAT FAILED

1. `https://www.biorxiv.org/content/10.1101/2023.10.12.562040v2.supplementary-material` - WebFetch,
   **client_error**, nothing of the page retrieved.
2. `https://www.biorxiv.org/content/biorxiv/early/2023/10/13/2023.10.12.562040/DC1/embed/media-1.pdf`
   - WebFetch, **client_error**. Caveat for whoever retries: the `early/2023/10/13` date segment was
   **constructed by me**, not served by any page, so this failure may mean a wrong path rather than a
   refusing host. The supplementary-material page that would have given the true media URL is route
   1, which also failed, so the correct media path was never obtained.
3. `https://discovery-pp.ucl.ac.uk/id/eprint/10198050/1/vanBeestBimbard_TrackingNeurons_NatMethods2024.pdf`
   - WebFetch, **client_error**. The filename was served by the eprint record; the `/1/` version
   segment was **constructed by me**. Same caveat.
4. The bioRxiv main-text route (`...562040.full.pdf`) does not carry supplementary captions at all -
   verified, not assumed: I asked for the S3 caption explicitly and it is NOT PRESENT there, as are
   all front matter and Supplementary equation 28.

**Not attempted, fetch budget exhausted (not failures):** nature.com SI page; the NSF PAR mirror
`par.nsf.gov`; production `discovery.ucl.ac.uk` (I only reached the `-pp` staging mirror); the UCL
Discovery record's own "Download" link, whose URL the record did not print in the served text.
**Not a route:** PMC11978519, which surfaced in the one search - PMC and Europe PMC are hard-blocked
here, and a PMCID is an identifier to convert, never a route.

**Title-return accounting:** the one search returned the UnitMatch paper under two distinct
identifiers (PMC11978519 and UCL Discovery eprint 10198050) plus the publisher DOI
10.1038/s41592-024-02440-1. These are **ONE document under three identifiers**, counted as one
source and never as corroboration. The eLife "earth mover's distance" multi-day tracking paper
(elifesciences.org/articles/92495) also surfaced; it is a DIFFERENT paper and I did not open it, so
it grounds nothing here - though it is worth noting to the entry's author as a possible second prior
in the same problem area.

## BEARING ON THE LEDGER ENTRY

**HOLD THE ENTRY, with one STRIKE, two NARROWINGS, and one PROMOTION CONDITION.** The novelty grade
does not collapse, but the gap must be restated, because as written it contains a false universal.

**What survives, and it is the spine.** Prior 1 does build the candidate's instrument and operating
point and does stop outside its estimand, and it says so in its own words: "it is prudent to exclude
these properties from the criteria that determine the tracking of units, and only consider them as a
possible validation ... or as a separate question". Sub-claims (1) - both halves, the >0.5
probability rule and the data-driven unnumbered T - (2) on the numbers themselves, (5) in full, (7)
over the main text, and (8) as an ANNOUNCEMENT rather than a measurement, all hold. The phrase
"representational drift" does not appear in the main text, and nothing I opened measures the
propagation of match error into a drift estimate.

**STRIKE sub-claim (6).** It is false, and it is the one sub-claim that, left standing, would make
the entry's gap overbroad. There IS a function-independent cross-day check: the acute
probe-reinsertion control, 4.0 ± 2.8%, n = 18 pairs of consecutive days.

**NARROW sub-claim (3)** to its two referents - UnitMatch's output and manual curation. The paper
does not disclaim ground truth outright, and an entry that says it does invites exactly the
correction above.

**NARROW sub-claim (8).** S3 is still unopened, so nothing about it can be asserted in either
direction; but drop any implication that it is a within-day-only panel, since the main text cites it
for the across-day chronic/acute comparison too.

**Restate the gap, which is the real work this check creates.** The gap is NOT "no function-
independent cross-day validation exists". On the evidence it is narrower and still intact:

> no chronic-regime, per-unit-pair, function-independent false-match rate is printed, and no
> match-error rate of any kind is propagated into a drift estimate.

The acute 4.0 ± 2.8% does not close that: it is a day-pair-level negative control, in a different
preparation, with no positive class and therefore no miss rate, measured at an adversarial operating
point the paper itself flags ("pushed to find matches by pretending the probe was in the same
location"). A number one word away from the claim's is a different quantity, and this is that case.

**PROMOTION CONDITION.** Before this entry is promoted, Supplementary Fig. S3 and the
"Supplementary analyses" section must be opened by a working route, and Supplementary equation 28
read for the Step-3 threshold. Three routes failed here, two of them on paths I constructed rather
than paths a page served, so the next checker should first obtain the true supplementary media URL
from a working supplementary-material page, and should try the NSF PAR mirror and production
`discovery.ucl.ac.uk` for the published version. I note honestly that even if S3 opens, the main
text cites it only for the WITHIN-day cross-validation and the chronic/acute comparison, so it will
most likely settle the within-day false-positive/false-negative numbers and NOT a chronic cross-day
false-match rate against per-pair labels - which means the restated gap above probably survives S3.
That is a judgement about the kind of document S3 is, and I flag it as such rather than as a finding.

**Also fix the citation before promotion (D8):** add the published DOI 10.1038/s41592-024-02440-1,
and do not carry the current author list - positions 4-7 appear to come from a different paper, and
"Harris K.D. et al." cannot be the printed order. The correct list must be taken from the article's
front matter, which nobody in this check has read.
