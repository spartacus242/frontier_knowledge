# VERIFY - Is there a function-independent cross-day unit-identity ground truth in print, and has a cross-day matcher been scored against it?

Checker: fresh context. Budget used: 5 WebFetch, 3 WebSearch. Date 2026-10-22.

I was not shown the reviewer's reasoning and did not read the sibling VERIFY files in this
batch directory. Everything below comes from the three documents I opened plus two front-matter
pages.

## CLAIM

As the entry carries it: a novelty risk that NO published work supplies a cross-day
unit-identity ground truth independent of the functional response, and so nobody could have
measured the candidate's false-match rate. The entry names five candidate label families:
(i) optogenetic / opto-tagging identification of the same units across days, (ii) anatomically
or genetically marked units, (iii) intracellular or juxtacellular ground truth, (iv) simulated
or hybrid ground-truth datasets built by injecting known units into real recordings,
(v) paired-recording designs. It names three families as "known relevant": SpikeForest /
hybrid ground-truth datasets, HYBRID_JANELIA and the paired-recording sets, and opto-tagged
chronic recordings.

Note before anything else: **the entry carries no citations.** What it carries under "THE
SOURCES" is four search strings and three dataset-family nicknames. There is not one resolvable
identifier (DOI, arXiv id, author-year) in the entry's source block. Everything I graded, I had
to resolve myself, and the resolution is mine, not the entry's. That is a defect of the entry
independent of whether its claim is true.

## READ LEVEL

**S1. "Tracking neurons across days with high-density probes" (UnitMatch).**
Opened: `https://www.biorxiv.org/content/10.1101/2023.10.12.562040v1.full`.
Read level: **PARTIAL - Introduction, Results, "Performance metrics", "Validation with stable
functional properties", Discussion, via the fetch summariser.** Supplementary analyses and
Fig. S3 NOT read. Figures not read as images.
Front matter: **NOT OBTAINED.** The `.full` view served by this proxy begins at "## Introduction"
and carries no title block, no author list and no DOI; a second fetch of the landing page
`https://www.biorxiv.org/content/10.1101/2023.10.12.562040v1` returned the same body with no
front matter. The only identifiers I hold are (a) the preprint DOI implied by the URL,
`10.1101/2023.10.12.562040`, and (b) a search-result title and URL pointing at
`https://www.nature.com/articles/s41592-024-02440-1`, from which the published-version DOI
`10.1038/s41592-024-02440-1` (Nature Methods, 2024) can be read off the URL. **I did not read
the author list from front matter and therefore do not assert it.** The short form in circulation
for this paper is "van Beest et al. 2024"; per the front-matter rule I record that as an
unverified short form someone else wrote, not as a citation.

**S2. "SpikeForest: reproducible web-facing ground-truth validation of automated neural spike
sorters."**
Opened: `https://www.biorxiv.org/content/10.1101/2020.01.14.900688v1.full`.
Read level: **PARTIAL - Introduction, ground-truth dataset descriptions (PAIRED_*, SYNTH_*,
HYBRID_JANELIA, MANUAL_FRANKLAB), recording-duration and metric sections.** Tables and the
website's live result matrices NOT read.
Front matter: **NOT OBTAINED** - same `.full` truncation. Identifier held: preprint DOI
`10.1101/2020.01.14.900688`. Author list not read from front matter and not asserted.

**S3. "Multi-day Neuron Tracking in High Density Electrophysiology Recordings using EMD."**
Opened: `https://www.biorxiv.org/content/10.1101/2023.08.03.551724v3.full` (body) and
`https://elifesciences.org/reviewed-preprints/92495v2` (front matter).
Read level: **PARTIAL for the body - Introduction, Methods (reference units, visual fingerprint),
Results around Fig. 4, Fig. 4a caption, Discussion. FULL for the front matter.** Fig. 4 not read
as an image; the integration that produces the 27% not reproduced.
Front matter, as printed on the eLife reviewed-preprint page: title "Multi-day Neuron Tracking
in High Density Electrophysiology Recordings using EMD"; authors in printed order
"Augustine(Xiaoran) Yuan", "Jennifer Colonell", "Anna Lebedeva", "Michael Okun",
"Adam S. Charles", "Timothy D. Harris" (six authors, four numbered affiliations); DOI
`https://doi.org/10.7554/eLife.92495.2`; Reviewed Preprint v2 dated February 27, 2024; original
preprint posted September 3, 2023.

**Routes not taken, and what that costs.** I did not open any opto-tagged chronic recording
paper, any genetic/anatomical-marking paper, any standalone paired-recording ground-truth paper
(Neto-type or Kampff-lab-type), SHYBRID, or the "Density-based longitudinal neuron tracking"
paper. Those are **COULD NOT CHECK**, not negative findings. I reached all five sub-claims.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations are as the summariser served them, each under the ~125-character cap, single
fragments unless marked. Where I rely on a quotation I write out what its opening words scope.

### S1 - UnitMatch

On the status of its own comparators:

> "However, neither can be considered ground truth."

Scope of the opening words: "However, neither" scopes **the two comparators just named** -
manual curation and concatenated spike sorting - and the clause **DENIES** that either is a
ground truth. It is a disclaimer about the paper's own reference standards, not a survey claim
about the literature. It does not say "no ground truth exists"; it says these two are not it.

On what the paper actually validates against:

> "we found functional activity to be remarkably stable, yet distinctive across neurons, and thus could use this stability to validate UnitMatch performance."

> "use this stability to validate UnitMatch performance"

> "only consider them as a possible validation"

Scope: the first sentence opens with "we found ... and thus", so the clause **ASSERTS** that the
validation label is the functional response. The third fragment, from the same section,
**RECORDS A MOVE AWAY** from treating it as decisive - it is the hedged formulation, and per the
hedged-and-cited rule it is the one that should be quoted. The summariser also reported the
authors noting that functional properties "are not necessarily constant over time," which limits
their use as validation.

On the within-day split:

> "It performs within-day cross-validation to identify a similarity score threshold for putative matches."

> "matching probabilities were close to 1 for the same units measured in the first and second half of the recording."

Scope: "It performs within-day cross-validation **to identify a similarity score threshold**" -
the opening scopes the split as a **threshold-calibration** device, and the clause ASSERTS that
use. The second sentence's timescale is stated in its own words: "first and second half of the
recording." **Within-day. Not across days.**

On error rates:

> "found low percentages of false positives and false negatives (Supplementary analyses, Fig S3)."

Scope: the clause ASSERTS that the percentages are low and **ANNOUNCES** where they live. No
number appears in the text I read. On the main-text read level, this **DEFINES AND ANNOUNCES**
the quantity; it does not print it.

The two numbers that are printed:

> "31.3 ± 11.2% (median ± m.a.d., n = 446 pairs of days) to be a match,"

with the denominator stated as "the maximum possible number of units recorded across two
consecutive days."

> "finding a match was rare (4.0 ± 2.8%, n = 18 pairs of consecutive days)."

### S2 - SpikeForest

Ground-truth families, as named: PAIRED_CRCNS_HC1, PAIRED_KAMPFF, PAIRED_BOYDEN,
PAIRED_MONOTRODE, PAIRED_MEA64C_YGER; SYNTH_MAGLAND, SYNTH_VISAPY, SYNTH_BIONET,
SYNTH_MONOTRODE, SYNTH_MEAREC; HYBRID_JANELIA; and MANUAL_FRANKLAB, which the paper classes as
manually curated with no ground truth.

> "The paired recordings were obtained from tetrodes or conventional silicon probes in rat hippocampus"

On the hybrid construction and its timescale:

> "The waveform templates were inserted at randomly selected channels and time points."

> "We subdivided the entire recording duration to generate three different durations (600, 1200, 2400 s)."

> "We trimmed the original simulations to generate shorter recording durations (600, 1200 s)."

Scope: each of these opens with a first-person construction step ("We subdivided", "We trimmed"),
and the clause ASSERTS the durations as the paper's own experimental grid. **600-2400 seconds is
ten minutes to forty minutes.** The only occurrence of "session" the summariser found in a
ground-truth construction was "by randomly sampling one channel from each recording session," in
PAIRED_MONOTRODE - a channel-sampling step, not a cross-session identity label.

On the unit of evaluation:

> "Averages of these metrics are then computed for all units l within each study."

On stability, which is the nearest thing to a cross-time claim:

> "we aim to measure the degree of stability."

Scope: "we aim to" **RECORDS A MOVE AWAY** from having measured it - it is future work, and in
context it is the stability of **repeated runs of the same sorter**, not of a neuron across days.

### S3 - Yuan, Colonell, Lebedeva, Okun, Charles & Harris (eLife 92495.2)

The abstract, as printed, including its typo:

> "We verified the same cell identify using measured visual receptive fields."

> "This method succeeds on datasets separated from one to 47 days, with an 84% average recovery rate."

Scope: "We verified the same cell **identify** using measured visual receptive fields" - the
opening "We verified" ASSERTS the validation, and the instrument named in the same clause is the
**visual receptive field**. The label is functional, by the authors' own sentence.

From the body:

> "we validated our unit matchings of those reference units using visual receptive field similarity."

> "Our validation relies on identifying reference units."

> "we assume all reference units are true hits."

> "The reference unit definition has limitations"

Scope: "we **assume** all reference units are true hits" - the opening "we assume" marks this as
a **stipulation**, and the clause therefore does not assert that they are true hits; it declares
them so for the purpose of scoring. This is the circularity at the centre of sub-claim (b): the
positive class against which accuracy is computed is itself defined by functional similarity.
"The reference unit definition has limitations" is the hedged formulation and is the one I rely on.

The printed numbers:

> "We also achieved 97% accuracy up to one week apart and 95% five to seven weeks apart, when applying a threshold of 10 µm."

> "Our method achieves 90% recovery rate on average for neurons separated up to one week apart and 78%…"

> "z = 10µm threshold has a false positive rate = 27% for KSgood units."

The 27% is in the **Fig. 4a caption**. The summariser reports it is obtained "by integrating the
fitted distributions, not counted directly." The 97/95% and 90/78% figures are in the Discussion
and cite Fig. 4 (green and blue bars respectively); **the denominator is not stated for any of
them.** The Results separately state the 10 µm threshold was chosen "to obtain at least 70%
accuracy in the KSgood units," which does not reconcile with 97%/95% in the text I read.

## REGIME

**S1 - UnitMatch.** Population: units from chronic high-density (Neuropixels-class) probes in
behaving mice, same probe across days. Unit of analysis: a *pair* of units, one per day; and for
the headline rate, a *pair of days* (n = 446 pairs of days). Operating condition: probe left
in place, chronic. Instrument: waveform similarity across the probe's channels, with a
within-day-calibrated similarity threshold. Threshold: a similarity score cut set by within-day
cross-validation. Validation label: **functional stability**, explicitly, and hedged to "a
possible validation". The claim sits **inside** this regime in subject matter and **inside** it
in timescale, and the regime's label is exactly the functional one the claim says is the only
kind available. S1 is therefore evidence *for* the claim's absence limb, not against it.

**S2 - SpikeForest.** Population: single extracellular recordings - rat hippocampus paired
tetrode/probe data, retinal MEA, simulated probes. Unit of analysis: a sorted unit **within one
recording**. Operating condition: one continuous recording, **600-2400 s**. Instrument:
simultaneous intracellular/juxtacellular truth, or known injected templates, or a simulator.
Threshold: per-unit accuracy/precision/recall against the true spike train. Here the identity
label **is** function-independent - a juxtacellular pipette and an injected template both say
"this spike belongs to this unit" with no reference to tuning. **But the regime is one recording
of ten to forty minutes.** The claim is about **days**. The claim sits **outside** S2's regime,
and S2 is silent on it rather than supportive either way. This is the distinction the entry has
to carry and currently does not: SpikeForest answers "is this spike this unit's?", not "is this
unit on Tuesday the unit on Friday?".

**S3 - Yuan et al.** Population: units from Neuropixels recordings in mouse visual cortex across
sessions separated 1-47 days. Unit of analysis: a candidate cross-day unit pair; for accuracy,
a pair drawn from the **reference-unit** set. Operating condition: chronic implant, visual
stimulation required (the label needs a receptive field). Instrument: earth-mover's distance on
waveform/position features. Threshold: z = 10 µm centroid displacement. Label: **visual
receptive field similarity**, with reference units *assumed* to be true hits. The claim sits
**inside** this regime, and again the regime's label is functional. Note the operating condition
narrows it further: only units with a measurable visual receptive field can carry the label at
all, so the label is unavailable for the majority of units and unavailable entirely outside
sensory cortex under stimulation.

## DEFECTS FOUND

Answering the sub-claims in order, separately.

### (a) Papers opened, with front matter and read level

Three substantive documents opened; two front-matter pages fetched. See **READ LEVEL** above for
the full statement. In short:

1. "Tracking neurons across days with high-density probes" - preprint DOI `10.1101/2023.10.12.562040`;
   published version DOI `10.1038/s41592-024-02440-1` (Nature Methods 2024), read off the
   nature.com URL, not off front matter. **Front matter not obtained; author list not asserted.**
   PARTIAL read (Intro, Results, performance-metrics and functional-validation sections, Discussion).
2. "SpikeForest: reproducible web-facing ground-truth validation of automated neural spike sorters" -
   preprint DOI `10.1101/2020.01.14.900688`. **Front matter not obtained; author list not asserted.**
   PARTIAL read (Intro, dataset descriptions, durations, metrics).
3. "Multi-day Neuron Tracking in High Density Electrophysiology Recordings using EMD" -
   Augustine(Xiaoran) Yuan, Jennifer Colonell, Anna Lebedeva, Michael Okun, Adam S. Charles,
   Timothy D. Harris; DOI `10.7554/eLife.92495.2`; v2 February 27, 2024; preprint
   `10.1101/2023.08.03.551724` (v3 read). **Front matter FULL; body PARTIAL.**

### (b) Does each supply a cross-day identity label independent of the functional response?

**S1 UnitMatch - NO, and it says so.** The label it validates against is functional:
"could use this stability to validate UnitMatch performance", hedged to "only consider them as a
possible validation". It *does* hold one function-independent identity label - the within-day
half-split, "the same units measured in the first and second half of the recording" - and that
label is genuinely independent of tuning, because identity there is known by construction. **Its
timescale is within-day.** This is the precise shape of the gap, and it is finer than the entry
states: the missing thing is not a function-independent label *per se*; it is a function-independent
label *at a cross-day timescale*.

**S2 SpikeForest - NO at the cross-day timescale; YES within a recording.** The paired,
synthetic and hybrid families all supply identity without reference to tuning. Every one of them
lives inside a single recording whose duration the paper states in its own words as
"(600, 1200, 2400 s)". Nothing in what I read supplies a label linking a unit in one recording
to a unit in another, let alone one recorded on another day. The one sentence containing
"session" - "by randomly sampling one channel from each recording session" - is a construction
step for PAIRED_MONOTRODE, not an identity label across sessions. HYBRID_JANELIA, which the entry
names specifically, is described by its construction sentence as "The waveform templates were
inserted at randomly selected channels and time points" - time points **within** a trimmed
600-1200 s recording.

**S3 Yuan et al. - NO, explicitly and circularly.** "We verified the same cell identify using
measured visual receptive fields." The reference set against which accuracy is computed is
defined by functional similarity and then stipulated true: "we assume all reference units are
true hits." The authors themselves write "The reference unit definition has limitations."

So over the three documents opened: **no function-independent cross-day identity label.**

### (c) Has any of them scored a cross-day matcher and printed a false-match, split or merge rate?

This is where the claim's second limb - "nobody could have measured the candidate's
false-match rate" - **fails as stated**, and it fails on S3.

**S1 UnitMatch: does not print one on the read level I reached.** The text ANNOUNCES it -
"found low percentages of false positives and false negatives (Supplementary analyses, Fig S3)"
- and routes the reader to supplementary material I did not open. Per PUBLISHED IS NOT PERFORMED,
on my read S1 **announces** the quantity. The two numbers it does print are not error rates:

- **31.3 ± 11.2%** (median ± m.a.d.), n = 446 pairs of days. Numerator class: unit pairs judged
  **to be a match**. Denominator: "the maximum possible number of units recorded across two
  consecutive days". This is a **match yield**, not an error rate. It is one word away from the
  claim's quantity and it is a different quantity: a matcher with a 100% false-match rate and a
  matcher with 0% could both print 31.3% here.
- **4.0 ± 2.8%**, n = 18 pairs of consecutive days, from **acute** recordings where a match
  should not be findable. Numerator class: pairs called a match in a condition the authors
  describe as one where "finding a match was rare". The summariser is explicit that **the
  authors do not label this a false-positive rate**. It functions as a chance-level control.
  Overlap in both directions: what it **misses** is every false match that arises *between*
  genuinely co-recorded populations - the hard case, where two different neurons on the same
  chronic probe have similar waveforms; what it **includes** that the claim excludes is the
  effect of the probe having been physically moved between acute recordings, which is not a
  matcher error at all but a change of population. It is a floor on a different problem.

**S3 Yuan et al.: DOES print a cross-day false-positive rate. 27%.**
- **The number, its location, units, denominator:** "z = 10µm threshold has a false positive
  rate = 27% for KSgood units", printed in the **Fig. 4a caption**. Units: percent.
  **Denominator: not stated as a count.** The summariser reports it is obtained "by integrating
  the fitted distributions, not counted directly" - so the denominator is the probability mass of
  a fitted distribution, not a tallied set of pairs. That is a material difference from a counted
  rate and must be carried forward.
- **Numerator class, with its exclusions:** pairs falling below the z = 10 µm centroid-displacement
  threshold that the fitted model assigns to the non-match distribution, **restricted to KSgood
  units**. Excluded: units Kilosort did not label good; splits; merges; and any pair whose error
  the fitted parametric form does not represent.
- **Denominator, checked against its near neighbours it is not:** it is *not* the number of
  reference units (that denominator carries the 97%/95% accuracy and the 90%/78% recovery
  figures); it is *not* all cross-day unit pairs; it is *not* pairs of days (which is S1's
  denominator for 31.3%).
- **Overlap in both directions against the candidate's quantity.** What this number **misses**:
  split and merge rates, which it does not report at all; errors among non-KSgood units; errors
  the fit smooths over; and - decisively - it never tests against an identity label that is
  independent of tuning, because the partition it integrates was drawn with reference units
  defined by receptive-field similarity. What it **includes that the claim excludes**: it counts
  as false positives pairs that a functional criterion separates but a non-functional one might
  not, i.e. it inherits every error of the functional label as if it were an error of the matcher.
  So 27% is **a cross-day false-positive rate scored against a functional label**. It is not a
  false-match rate against function-independent truth. One word apart; different quantity.
- Also note the unreconciled pair inside S3: the Results say the threshold was chosen "to obtain
  at least 70% accuracy in the KSgood units", while the Discussion prints 97%/95% for reference
  units. Different denominators, and the paper does not reconcile them in the text I read.

**S2 SpikeForest: no cross-day matcher is scored at all.** Its unit of analysis is stated in its
own words: "Averages of these metrics are then computed for all units l within each study" -
units within a recording.

### (d) Titles returned and NOT opened, listed as such

Three searches ran; none was refused. Repeated returns are counted as **title matches, not
corroboration**: "Tracking neurons across days with high-density probes" returned at **all three**
searches across four distinct URLs (nature.com, two biorxiv views, researchgate) - that is
**one document**, and I opened it. Likewise "Multi-day Neuron Tracking ... using EMD" returned at
two searches via two URLs (elifesciences reviewed preprint, biorxiv) - **one document**, opened.
The researchgate entries for both are **reposts of the same two papers and name no additional
paper**; I did not fetch them and I do not count them.

Not opened, by title as returned:

- "Density-based longitudinal neuron tracking in high-density electrophysiological recordings" -
  returned twice, both times as `pmc.ncbi.nlm.nih.gov/articles/PMC13494646/`. **PMC is hard-blocked
  here and a PMCID is not a route;** I had no fetch left to convert it via the idconv endpoint, so
  I hold **no DOI for it**. This is the most recent cross-day matcher in my returns and it is
  **COULD NOT CHECK**.
- "Consensus-Based Sorting of Neuronal Spike Waveforms" (journals.plos.org, PLOS ONE).
- "SHYBRID: A graphical tool for generating hybrid ground-truth spiking data for evaluating spike
  sorting performance" (biorxiv 10.1101/734061v2).
- "Real-time spike sorting platform for high-density extracellular probes with ground-truth
  validation and drift correction" (biorxiv 10.1101/101030v2) - returned twice, two URLs, **one
  document**.
- "Spike sorting: new trends and challenges of the era of high-density probes" (IOP).
- "A spike sorting toolbox for up to thousands of electrodes validated with ground truth
  recordings in vitro and in vivo" (researchgate repost; the underlying paper is the one to cite
  and I did not resolve it).
- "SpikeMAP: An unsupervised spike sorting pipeline ... with ground-truth validation"
  (biorxiv 10.1101/2025.03.14.643403v1).
- "Recording from the same neurons chronically in motor cortex" (journals.physiology.org,
  J Neurophysiol; also returned as pubmed 22190623 - **one document, two URLs**).
- "Recording Chronically From the Same Neurons in Awake, Behaving Primates"
  (journals.physiology.org, J Neurophysiol).
- "Tracking the Same Neurons across Multiple Days in Ca2+ Imaging Data" (pubmed 29069591) -
  imaging, not electrophysiology; in imaging the identity label is the anatomical image itself,
  which is a different instrument from the one the claim is about.

**And the finding that belongs here: the opto-tagging search returned nothing of its kind.** My
third search was aimed squarely at opto-tagged cross-day identity, and it returned no opto-tagging
paper at all - it returned the two cross-day matchers again plus the two chronic-primate
J Neurophysiol papers. That is a **title-level null**, not a read, and it is weak evidence. I
report it as what it is: I did not find the entry's third "known relevant" family, and I did not
open any member of it.

### (e) One sentence

A function-independent unit-identity ground truth is firmly in print but only **within a single
recording of ten to forty minutes** (SpikeForest's paired, synthetic and HYBRID_JANELIA families;
and UnitMatch's within-day first-half/second-half split), while every cross-day validation in the
documents I opened is **functional** - "visual receptive field similarity" in Yuan et al.,
functional stability in UnitMatch - so **no one in these three documents has scored a cross-day
matcher against a function-independent cross-day label**, even though Yuan et al. **do** print a
cross-day false-positive rate of **27%** (Fig. 4a caption) against a functional one.

### Defects in the entry itself

1. **The second limb is false as worded.** "Nobody could have measured the candidate's
   false-match rate" is contradicted by Yuan et al.'s printed 27% cross-day false-positive rate.
   A number of that shape exists; what it lacks is independence from tuning and a stated counted
   denominator. The entry must say *no function-independent* cross-day false-match rate, not
   *no* cross-day false-match rate.
2. **The entry mislocates the gap.** UnitMatch's within-day half-split *is* a function-independent
   identity label. The gap is a **timescale** gap, not a label-independence gap. Stated the
   entry's way, the claim is refuted by a half-split; stated correctly, it survives.
3. **The entry's candidate list overcounts by kind.** Writing down what KIND of document could
   settle this, before nominating one: it must supply, for a pair of units recorded on *different
   days*, a per-unit identity assertion generated by an instrument other than the tuning curve.
   Against that test, three of the entry's five families **cannot in principle** supply it:
   - *Opto-tagging and genetic/anatomical marking* supply a **cell-type or population** label, not
     a per-unit identity. A PV+ tag on Tuesday and a PV+ tag on Friday are the same label on
     possibly different neurons; the tag constrains a match, it does not certify one. The entry
     treats a type label as an identity label.
   - *Juxtacellular/intracellular ground truth and paired-recording designs* are excluded by
     instrument: the pipette is not held across days. They can certify identity within a session
     only.
   That leaves **one** family that could settle it: **simulated or hybrid datasets built by
   injecting the same known units into real recordings from different days.** That is the kind of
   document to look for, and it is a kind that does not yet appear in anything I opened -
   HYBRID_JANELIA injects "at randomly selected channels and time points" inside one trimmed
   600-1200 s recording. I name this as the settling kind; I do **not** nominate any specific
   unopened paper as being it, because I found none, and saying otherwise would be a guess.
4. **An unenumerated universal.** The claim is of the form "NO published work". Over the
   instances I **opened** - UnitMatch, SpikeForest, Yuan et al. - it is **true**. Over the
   instances I **did not open** - the density-based longitudinal tracking paper (PMCID
   PMC13494646, no DOI held), SHYBRID, SpikeMAP, the real-time/drift-correction platform paper,
   the two chronic-primate J Neurophysiol papers, the Ca2+ imaging tracking paper, and the whole
   opto-tagged-chronic family which my searches did not surface - it is **UNENUMERATED**. Not
   false on anything I saw; not established either.
5. **The entry's source block is search strings, not citations** (see CLAIM). It also names
   "SpikeForest / hybrid ground-truth datasets" and "HYBRID_JANELIA" as if they were two
   families; **HYBRID_JANELIA is a dataset inside SpikeForest**, named as such in SpikeForest's
   own dataset list. That is one document's corpus counted twice, which is exactly the
   inflated-prior-list defect.

## ROUTES THAT FAILED

- `curl` to `https://www.biorxiv.org/content/10.1101/2023.10.12.562040v1` -> **CONNECT tunnel
  failed, 403, `connect_rejected`** at the agent proxy. Tool-scoped: **WebFetch reached the same
  host on the same URL in the same turn.** I did not route around the proxy and did not probe it.
- biorxiv `.../...v1.full` and the bare `.../...v1` landing page both served the body **starting
  at "## Introduction" with no title block, author list or DOI**, for both UnitMatch and
  SpikeForest. Two of my five fetches were spent on front matter and **one of the two returned
  none**. If this is a standing property of the biorxiv route at this proxy, front matter for a
  biorxiv paper should be taken from the publisher or from eLife-style landing pages, which did
  work (`elifesciences.org/reviewed-preprints/92495v2` served complete front matter including the
  DOI and both version dates).
- `pmc.ncbi.nlm.nih.gov/articles/PMC13494646/` - **not attempted**; PMC is hard-blocked here and
  a PMCID is an identifier to convert, not a route. I had no fetch budget left for the idconv
  endpoint, so this paper carries **no DOI** in this note.
- `nature.com/articles/s41592-024-02440-1` - **not attempted** (known to fail both ways at this
  proxy, and no budget). The published-version DOI is read off the URL string only.

## BEARING ON THE LEDGER ENTRY

**HOLD the first limb, NARROWED on two points; STRIKE the second limb as worded; CONVERT the
universal to a promotion condition.**

1. **HOLD, narrowed - the absence limb.** "No published work supplies a cross-day unit-identity
   ground truth independent of the functional response" is **true over the three documents I
   opened** and should be rewritten to say what is actually missing: *no function-independent
   identity label at a cross-day timescale*. Keep the sentence but add the timescale qualifier,
   because the unqualified version is refuted by UnitMatch's own within-day half-split
   ("the same units measured in the first and second half of the recording"), which is
   function-independent and is a published identity label - just not across days. The entry's
   strongest supporting quotation is not its own assertion but Yuan et al.'s: "we assume all
   reference units are true hits."

2. **STRIKE the clause "and so nobody could have measured the candidate's false-match rate."**
   It is false as written. Yuan, Colonell, Lebedeva, Okun, Charles & Harris print
   "z = 10µm threshold has a false positive rate = 27% for KSgood units" in the Fig. 4a caption
   of eLife 92495.2 - a cross-day false-positive rate. Replace the clause with the narrower and
   defensible one: *the published cross-day error rates are scored against functional labels and
   against fitted rather than counted denominators, so none of them is a false-match rate against
   function-independent truth.* This is a strike on the inference, not on the underlying gap -
   and it is load-bearing for novelty, because a reviewer who knows the 27% will read the entry's
   present wording as simply wrong and discount the rest.

3. **NARROW the candidate-label list from five families to one.** Opto-tagging and
   genetic/anatomical marking give **type**, not per-unit identity; juxtacellular/intracellular and
   paired recordings cannot be held across days. Only **hybrid/simulated injection of the same
   known units into recordings from different days** is the right kind of document, and I found no
   instance of it. Narrowing this list makes the entry's search tractable instead of open-ended,
   and it removes three families whose absence proves nothing because their presence was never
   possible.

4. **CONVERT to a promotion condition.** The universal stays **unenumerated** until someone opens:
   (i) the density-based longitudinal tracking paper (PMCID PMC13494646 - convert to a DOI first,
   do not treat the PMCID as a route), (ii) at least one opto-tagged chronic recording paper, to
   settle by reading rather than by my title-level null whether anyone has used a tag as a
   cross-day identity constraint, and (iii) UnitMatch's **Supplementary analyses and Fig. S3**,
   which the main text says carry its "low percentages of false positives and false negatives" -
   unread by me, and the single most likely place for a published number that would move this
   entry. Until (iii) is read, the entry should not say UnitMatch prints no error rate; it should
   say the main text announces one and routes it to supplementary material.

**Net effect on novelty.** The entry's first limb survives at the timescale it should have
specified, so novelty does **not** fall to Low on anything I opened. But it does not stand at
High on this note either: the absence is true-over-three-documents and unenumerated beyond them,
and the entry currently overstates it in a way (limb two) that a knowledgeable reader can falsify
in one citation. Rewritten as in (1)-(3) and promoted only on (4), it is a defensible gap claim.
