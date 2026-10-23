# VERIFY - CGMacros descriptor (Das et al., Sci Data 2025;12:1557) opens in one fetch; no artifact share published, but the dual-wear traces are openly released

Checker: fresh context. Budget used: 7 WebFetch, 1 WebSearch. Date 2026-10-23.

BUDGET OVERSPEND, DECLARED: the brief allowed 6 fetches. I used 7. The seventh was spent
because one fetch (physionet.org/content/cgmacros/1.0.0/DataDictionary.pdf) returned only the
PhysioNet file-listing chrome and none of the PDF's contents, so it bought nothing. I stopped
at 7 and did NOT spend an eighth on `DataDictionary_CGMacros-00X.csv`, which is the file that
would have given me the per-participant column names verbatim. That gap is marked below as
mine, not the source's.

I did not read the reviewer's notes or the adversary files in this batch directory. Everything
below comes from the documents.

## CLAIM

As the entry carries it: that the dataset underlying the nearest prior's illustrative analysis
was RETURNED BUT NOT OPENED by this batch, and that neither it nor its descriptor publishes a
share of time-below-range attributable to pressure artifact.

Two separable legs:

- **Leg 1 (process):** the document is an unchecked item - returned, not opened.
- **Leg 2 (substance):** neither dataset nor descriptor publishes a TBR share attributable to
  pressure artifact.

Leg 1 is a claim about what this batch did, which no document can settle. What a document CAN
settle is the implied property - whether the thing is hard to open. It is not. See READ LEVEL.

## READ LEVEL

**Das, A. et al., "CGMacros: a pilot scientific dataset for personalized nutrition and diet
monitoring", Scientific Data 2025;12(1):1557, DOI 10.1038/s41597-025-05851-7 - FULL TEXT.**

It opened on the FIRST fetch, at `https://www.nature.com/articles/s41597-025-05851-7` - the
second route the entry's own citation note lists. The entry's note says "nature.com fails both
ways in this environment for scientificdata". In this run it did not fail at all, either time:
three separate fetches to that URL all returned body text (Background, Methods, Data Records,
Technical Validation, figure captions, Author information, Data Availability). I never needed
doi.org, a PAR mirror or an institutional copy. **No route to the article failed.** If this
document was logged as returned-not-opened for reachability reasons, that is the precise
false-absence the ledger's own rule warns about: a route note inherited from an earlier run and
recorded as a property of the source.

Sections I read: Background, Methods, Data Records, Technical Validation, Fig. 3 caption,
Author information, Contributions, Data Availability, license line. The served text contained
**no Usage Notes and no Limitations section** - I report that as a fact about what was served,
not as a claim that the published article lacks them.

**Crossref record for 10.1038/s41597-025-05851-7 - FULL METADATA RECORD.** Read to confirm the
author list independently of nature.com's ellipsis.

**PhysioNet, CGMacros v1.0.0 landing page (`www.physionet.org/content/cgmacros/1.0.0/`) -
FULL TEXT of the landing page** (abstract, background, methods, access policy, license, file
table, citation block).

**PSI-TAMU/CGMacros README (raw.githubusercontent.com, main branch) - SUMMARISED, not verbatim.**
The summariser refused verbatim return ("would exceed the quoting limit"), so I have its content
in paraphrase only. Treat its one load-bearing line as reported-not-quoted.

**COULD NOT READ (distinct from not found):** `DataDictionary.pdf` (967,993 bytes, listed on the
PhysioNet file table). The fetch to its content URL returned the PhysioNet navigation page and
file metadata only - no PDF text. Exact tool outcome: the fetch succeeded but the summariser
reported "The page you provided doesn't include the data dictionary's contents. It only has the
PhysioNet website navigation and metadata for the file DataDictionary.pdf (967,993 bytes)". So
the route resolved to the wrong object; I never saw the PDF's bytes.

**NOT OPENED, named so it is not mistaken for absence:** `DataDictionary_CGMacros-00X.csv`
(1.6 KB), `DataDictionary_Bio.csv`, `DataDictionary_Gut_Health_Test.csv`,
`DataDictionary_Microbes.csv`, `CGMacros_dateshifted365.zip` (626.7 MB - the data itself),
`parse_data.ipynb`, and any figshare record. Budget, not failure, for all of these.

## WHAT THE SOURCE SAYS (quotations as served)

**(b) FRONT MATTER.** Two independent routes agree, and both disagree with the entry.

Author list, printed order, from the article's own Author information block and confirmed
name-for-name and position-for-position by the Crossref record (**7 authors, no ellipsis behind
which an eighth hides** - nature.com's citation line abbreviates to "Das, A., Kerr, D.,
Glantz, N. et al.", which is what produced the "…" in the first fetch):

1. Anurag Das
2. David Kerr
3. Namino Glantz
4. Wendy Bevier
5. Rony Santiago
6. Ricardo Gutierrez-Osuna
7. Bobak J. Mortazavi

Affiliations as printed: (1) Texas A&M University, College Station, USA; (2) Sutter Health,
Santa Barbara, USA; (3) Health Linkages, Santa Barbara, USA; (4) Sansum Diabetes Research
Institute, Santa Barbara, USA.

Title: "CGMacros: a pilot scientific dataset for personalized nutrition and diet monitoring".
Journal: Scientific Data. Volume 12, issue 1, article number 1557 (no page range exists - it is
an article-number journal). Published 25 September 2025. DOI 10.1038/s41597-025-05851-7.
Crossref type `journal-article`; licence CC BY 4.0 for both tdm and vor versions.

**(f) ARTICLE TYPE.** nature.com labels it **Data Descriptor**. So it is a dataset descriptor,
not a primary study and not a reuse paper. Crossref's coarser `journal-article` does not
contradict that; Crossref has no Data Descriptor type.

**(c) COMPRESSION / PRESSURE-ARTIFACT EVENTS - NONE, and I ran three sweeps, not one.**

Sweep 1 (broad, fetch 1, as one item among ten): returned "None of these terms appear in the
article."

Sweep 2 (**dedicated**, fetch 2, whose entire second half was this and nothing else, over
Background, Methods, Data Records, Technical Validation and all figure/table captions), results
term by term:

- "compression" - does not occur (0)
- "compress" - does not occur (0)
- "pressure" - does not occur (0)
- "artifact" - does not occur (0)
- "artefact" - does not occur (0)
- "compression low" - does not occur (0)
- "lying on" - does not occur (0)
- "sleep position" - does not occur (0)
- "dropout" - does not occur (0)
- "signal loss" - does not occur (0)
- "missing data" - does not occur (0)
- "gap" - occurs 2 times, **both in the Background and both about the literature, not the data**:
  "To address this gap, we present CGMacros, a dataset containing multimodal information from an
  activity tracker" and "To address this gap, the Recipe1M dataset contains one million
  structured cooking recipes and their corresponding images".

SCOPE-SETTING OPENER, both occurrences: the sentence opens "To address this gap, ...". Those
opening words scope the clause to a *gap in the prior literature* that the authors are filling.
The clause ASSERTS the existence of a literature gap; it does not assert, deny, or record any
move away from a *data* gap or a dropout. Anyone reading "gap" here as a data-completeness
statement has taken the one word and dropped the four that scope it.

Sweep 3 (the PhysioNet landing page, fetch 7): compression - absent; pressure artifact - absent;
sensor artifact - absent; data quality - absent as a dedicated discussion; missing data or gaps -
absent.

So: **there is no number to name.** The descriptor does not measure, bound, predict or even
define a compression or pressure-artifact quantity. It is silent on the concept, not merely
short of a figure.

**The one inter-device number that could be mistaken for it, and why it is not it.** Technical
Validation reports a device discrepancy and attributes it:

- Group mean glucose, healthy adults: **84.89 mg/dL (Abbott) vs 122.36 mg/dL (Dexcom)**.
- Dexcom readings "higher by up to 58.7 mg/dl (for healthy adults)".
- Attribution as served: the discrepancy is attributed to **earlier device generations and
  anatomical placement** - explicitly not to artifact. No MARD or other agreement statistic is
  reported anywhere.

NUMERATOR CLASS of the source's quantity: the arithmetic difference in mean sensor glucose
between two device models worn at two body sites, over all readings of a diagnostic group.
DENOMINATOR: all of that group's interpolated one-minute readings across ~10 days - checked
against the near neighbours it is NOT: it is not per-participant, not per-event, not
per-excursion, and not restricted to any below-range window.

OVERLAP IN BOTH DIRECTIONS. What the source's class **misses** that the claim needs: any
event-level identification of a compression episode, any time-resolved share of anything, and
any decomposition of below-range time into causes. What the source's class **includes** that the
claim's excludes: every systematic calibration, generation and body-site difference between a
Libre Pro on the arm and a G6 Pro on the abdomen - i.e. exactly the mechanisms the authors name,
none of which is pressure artifact. A level offset between two sites is not a transient
pressure-induced depression; the directions differ too (a steady bias in one device versus
episodic downward excursions in whichever sensor is lain upon). **Different quantity.**

**Time below range: p-values only, no percentage.** The hedged, cited formulation as served:
"For time below range (<70 mg/dL), we found main effects for device (p < 0.001) and state
(p < 0.01)". LOGICAL FORM: this is an ANOVA main-effects statement - a *conjunction* of two
main effects, not a disjunction, and not a condition of either kind. MODALITY: flat indicative
("we found"), no hedge to delete. It ASSERTS that device and state matter; it does not assert
any magnitude. Differences were significant between the two devices and between the healthy and
T2D groups. Fig. 3 plots per-participant time in range with the denominator described as
"proportion of time (i.e., CGM readings)", but the figure's values are not given in the text.
TIR was analysed at the "180 mg/dL, 250 mg/dL" thresholds, and no 250 mg/dL result is reported.

**So on the quantity the entry cares about, the descriptor BOUNDS AND TESTS but does not
PUBLISH: no TBR percentage of any kind appears - let alone one attributable to pressure
artifact.** Published is not performed, and here not even published.

**(d) PER-READING TRACES FOR BOTH SENSORS - YES, AND OPENLY DOWNLOADABLE, with two caveats a
recomputing reader must know.**

Both sensors were worn simultaneously: "Abbott FreeStyle Libre Pro CGM (15-min sampling period)"
on the upper arm and "Dexcom G6 Pro CGM (5-min sampling)" on the abdomen, and "Both CGMs were
blinded to prevent glucose readings from influencing participants."

Both traces are released per participant. Data Records: "we used linear interpolation to obtain
a uniform sampling rate of one minute"; for the Libre the team "linearly interpolated between
them to obtain CGM readings every minute"; for the Dexcom they "linearly interpolated between
consecutive readings separated by 5 minutes." The per-participant CSVs carry "one row per
measurement (plus a heading), and one column per variable", holding CGM and Fitbit readings,
heart rate and METs, with meal fields at photo timestamps. That the Technical Validation can run
a *device* main effect on TBR, and that Fig. 3 shows per-participant time-in-range **by device**,
is itself proof both traces are in the release per participant.

Open download, PhysioNet CGMacros v1.0.0 (published 28 January 2025). Access policy as printed:
labelled "Open Access", access line "Anyone can access the files, as long as they conform to the
terms of the specified license." **No credentialing.** File table: `CGMacros_dateshifted365.zip`
626.7 MB, `DataDictionary.pdf` 945.3 KB, four `DataDictionary_*` CSVs, `LICENSE.txt`,
`SHA256SUMS.txt`; total uncompressed 627.9 MB. Dataset citation: Gutierrez-Osuna, R., Kerr, D.,
Mortazavi, B. & Das, A. (2025), CGMacros: a scientific dataset for personalized nutrition and
diet monitoring (version 1.0.0), PhysioNet; DOI 10.13026/3z8q-x658 (v1.0.0), 10.13026/8mak-rs10
(latest).

CAVEAT 1, and it is load-bearing for anyone computing a compression metric: **the one-minute rows
are interpolated, not native readings.** Native cadence is 15 min (Libre) and 5 min (Dexcom).
Only every 15th and every 5th minute is a measurement; the rest is linear fill. "Per-reading" in
the strict sense is therefore 15-min and 5-min resolution, and any event detector run on the
one-minute grid is running partly on interpolant. The interpolation also smooths precisely the
short downward excursions a compression detector looks for.

CAVEAT 2: **licences differ between article and data.** The article is CC BY 4.0. The PhysioNet
dataset is "Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public
License" - CC BY-NC-SA, strictly more restrictive. Also: "Dates for CGM recordings and food
photos were time-shifted for privacy" (hence `dateshifted365`), which is a handling detail, not
a quality metric, but it rules out joining to external records by wall-clock time.

**(e) POPULATION, n, WEAR DURATION, SENSOR MODELS.** n = 45: 15 healthy, 16 pre-diabetes, 14
type 2 diabetes, groups defined by HbA1c. Ages 18-69; BMI 21-46 kg/m². Recruited at Sansum
Diabetes Research Institute, Santa Barbara, CA, between 2021 and 2024. T2D exclusions: oral
medications other than metformin, or injectable GLP-1 receptor agonists or insulin. Duration:
ten days of free-living meal logging; "Data from each participant spans approximately ten days."
Instruments: Abbott FreeStyle Libre Pro CGM (upper arm, 15-min), Dexcom G6 Pro CGM (abdomen,
5-min), Fitbit Sense smartwatch (activity, heart rate), Viome microbiome kit (stool), with
MyFitnessPal and WhatsApp for meal logging and photos. Breakfasts were protein shakes and
lunches came from a fast-casual chain. Supplementary CSVs: `bio.csv` (demographics,
anthropometrics, blood analytics, a presence/absence indicator for 1,979 bacteria, gut health
scores), `microbes.csv`, `gut_health_test.csv` (22 Viome measures scored 0/1/2).

## REGIME

**The descriptor's own regime, in its own words.** Population: 45 adults, ages 18-69, BMI 21-46,
recruited at one site (Sansum, Santa Barbara) 2021-2024, stratified by HbA1c into healthy,
pre-diabetes and T2D, with T2D participants on metformin at most. Unit of analysis: the
participant-day, and in the released files the one-minute interpolated reading; in Fig. 3 the
unit is the participant and the denominator is "proportion of time (i.e., CGM readings)".
Operating condition: **free-living**, ten consecutive days, with two standardised meals
(protein-shake breakfasts, fast-casual lunches) and otherwise self-chosen food, CGMs **blinded**.
Instruments: FreeStyle Libre Pro (arm) and G6 Pro (abdomen), simultaneously. Thresholds: TBR
<70 mg/dL; TIR analysed at 180 and 250 mg/dL. Category: Data Descriptor - the paper's job is to
document a release, and its Technical Validation exists to show the data behave sensibly, not to
estimate a glycaemic quantity.

**Does the claim sit inside it?** Partly, and the part that falls outside matters.

- The *dual-wear, free-living, simultaneous-two-sensor* regime the claim presupposes: **yes,
  squarely inside.** This is genuinely the right kind of release.
- A *share of time-below-range attributable to pressure artifact*: **outside.** Nothing in this
  regime is set up to attribute below-range time to a cause. There is no reference method, no
  position or posture channel, no event adjudication, and the two sensors sit at different body
  sites with a documented level offset, which confounds exactly the comparison a dual-wear
  artifact metric would want to make. The descriptor is silent here, and silence outside a
  regime is silence, not support in either direction.

## DEFECTS FOUND

**1. The entry's citation misnames the first author. "Das S. et al." is wrong: the front matter
reads Anurag Das - initial A, not S.** Taken from the front matter and confirmed against
Crossref, two routes. The entry should carry "Das, A. et al."

**2. The entry's route note is stale and, if it drove the not-opened status, caused a false
absence.** The note asserts "nature.com fails both ways in this environment for scientificdata".
It did not fail once in three fetches today. The article opens in ONE fetch at the URL the
citation itself names. This is verbatim the failure mode the ledger flagged last batch: a
publisher route recorded as broken when it resolves first try.

**3. An internal inconsistency in the source worth carrying, since the ledger takes names from
front matter.** The front matter prints "Rony Santiago"; the article's own Contributions section
spells the same person "Ronny Santiago". Front matter governs: Rony Santiago. Flagging it so a
later reader does not treat the Contributions spelling as a correction.

**4. The descriptor's Data Availability statement points somewhere other than the open release.**
It says only: "The CGMacros dataset is available on figshare", citing "Gutierrez-Osuna, R.,
Kerr, D., Mortazavi, B. & Das, A. CGMacros: a scientific dataset for personalized nutrition and
diet monitoring. figshare (2025)", and gives no figshare DOI or URL. The copy I actually verified
as openly downloadable is on **PhysioNet** (DOI 10.13026/3z8q-x658). I did not open any figshare
record and do not assert one does or does not exist - I did not enumerate it.

**5. The GitHub README contradicts the live release, and is almost certainly stale.** Per the
summariser, PSI-TAMU/CGMacros README states the dataset is still under review on PhysioNet with
no download link available yet. PhysioNet v1.0.0 was published 28 January 2025 and is Open
Access with a 626.7 MB zip. Anyone checking availability from the repo alone would wrongly
conclude the data are unreleased. (Reported from a summary, not a verbatim quotation - the
summariser refused verbatim return of the README.)

**6. A participant-count discrepancy, benign but worth recording.** The PhysioNet landing page
describes per-participant folders "numbered 1 to 49" while the study reports 45 participants. The
GitHub README accounts for the difference: participants 24, 25, 37 and 40 did not finish the
study and are not included. 49 minus those 4 is 45. **MY OWN ARITHMETIC**, on two sources, one
of them read only in summary.

**7. The title the entry implies is not the printed title.** The entry calls this "the CGMacros
dataset descriptor"; the printed title is "CGMacros: **a pilot** scientific dataset for
personalized nutrition and diet monitoring". The PhysioNet dataset title drops "pilot". The word
"pilot" is the authors' own scoping of the release's weight and should not be dropped silently.

**8. On the enumeration rule, stated plainly rather than overclaimed.** Leg 2 is a negative
universal over a document and its supplements. **Instances I opened:** the full article text
(three fetches, one of them a dedicated term sweep) and the PhysioNet v1.0.0 landing page. Over
those, the claim is **TRUE** - no artifact term and no TBR percentage occurs. **Instances I did
NOT open:** `DataDictionary.pdf` (route resolved to the wrong object), the four
`DataDictionary_*` CSVs, `CGMacros_dateshifted365.zip` (the data), `parse_data.ipynb`, and any
figshare record. Over those, the claim is **UNENUMERATED**. The honest verdict is therefore
"true over the instances I opened, unenumerated over the supplements", and not "established".

**9. Nomination, with its kind justified as the rule requires.** What KIND of document could
overturn Leg 2? One that either (i) enumerates the per-participant CSV's columns, so a
quality/artifact/exclusion flag column would show, or (ii) prints a decomposition of below-range
time by cause. `DataDictionary_CGMacros-00X.csv` (1.6 KB, on the PhysioNet file table) **is**
kind (i): a published data dictionary for the per-participant file is by construction a column
enumeration. So this is a justified nomination, not a guess - I simply did not open it, having
already overrun the fetch budget. Nothing I saw is kind (ii), and I would call any expectation
of kind (ii) in a Data Descriptor a guess.

**10. One leg of the claim is unverifiable from documents, and I am marking it as such rather
than inferring it.** Whether this batch opened the file is a fact about the batch's process. No
document can settle it and I did not read the batch's own notes. **MY OWN REASONING, NOT A
SOURCE FINDING:** all I can say is that the not-opened status cannot have been forced by
reachability, because the document opens first try. What would have grounded the process leg is
the batch's own fetch log, which I was not given and did not seek.

## ROUTES THAT FAILED

Almost none - which is the finding.

- `https://www.nature.com/articles/s41597-025-05851-7` - **SUCCEEDED**, three times, full body
  text each time. No 403, no redirect, no paywall. The entry's predicted failure did not occur.
- `https://api.crossref.org/works/10.1038/s41597-025-05851-7` - **SUCCEEDED**. Full metadata
  record. No contact email was supplied, in line with the no-personal-identifier rule; none was
  needed. Unpaywall was skipped entirely for the same reason, as instructed.
- `https://raw.githubusercontent.com/PSI-TAMU/CGMacros/main/README.md` - HTTP fetch
  **SUCCEEDED** (branch `main` was correct), but the summariser **refused verbatim return**:
  "I can't return the full README verbatim, since that would exceed the quoting limit for source
  documents." Content held in paraphrase only.
- `https://physionet.org/content/cgmacros/1.0.0/DataDictionary.pdf` - **FAILED usefully**: the
  fetch returned the PhysioNet navigation page and the file's metadata (967,993 bytes) rather
  than the PDF body. The page's own download form is `.../files/cgmacros/1.0.0/
  DataDictionary.pdf?download`, which I did not try - no budget left.
- `https://www.physionet.org/content/cgmacros/1.0.0/` - **SUCCEEDED**, full landing page.
- doi.org, NSF PAR, institutional mirrors - **never attempted**, because the publisher host
  resolved first try. Not failures.
- One WebSearch ran; it was not refused by the classifier. Its first hit was a PMC URL, which I
  did **not** fetch, PMC being hard-blocked here and a PMCID being an identifier to convert
  rather than a route. I reached the dataset through the physionet.org hits instead. Per the
  title-match rule: PMC12462512 and DOI 10.1038/s41597-025-05851-7 are **ONE document**, not two
  sources, and the several physionet.org URLs in those results are one dataset record, not six.

## BEARING ON THE LEDGER ENTRY

**Leg 2 HOLDS, and should be upgraded from unchecked to a checked absence - with its enumeration
boundary written in.** The descriptor publishes no share of time-below-range attributable to
pressure artifact, and publishes no TBR percentage at all: on TBR it prints only ANOVA main
effects, "main effects for device (p < 0.001) and state (p < 0.01)". The words compression,
compress, pressure, artifact and artefact occur **zero** times across the full text, by a
dedicated sweep aimed only at those terms, backed by a second sweep of the PhysioNet landing
page. The only inter-device number it does print - Dexcom "higher by up to 58.7 mg/dl (for
healthy adults)", 84.89 vs 122.36 mg/dL mean - is a different quantity in both directions, and
the authors attribute it to device generation and anatomical placement, not artifact.

**Leg 1 FALLS as a property of the source, and must be rewritten.** "RETURNED NOT OPENED" can
stand as a record of what the batch did, but it must not carry the implication that the document
resists opening. It opens in one fetch at the route its own citation names. **The entry's route
note ("nature.com fails both ways in this environment for scientificdata") should be struck for
this DOI**, or it will keep manufacturing the same false absence in later batches.

**So: convert this item from RETURNED NOT OPENED to OPENED AND CHECKED, with the artifact-share
absence recorded as verified over the article full text and the PhysioNet landing page, and
explicitly UNENUMERATED over `DataDictionary.pdf`, the four `DataDictionary_*` CSVs, the 626.7 MB
data zip and `parse_data.ipynb`.** Under this ledger's own rules that is the whole move: an
unchecked item becomes a bounded absence, not an unbounded one.

**NOVELTY CLAUSE: survives, and is now better grounded than when the item was unchecked.** The
one dataset of the right kind does not publish the metric, so the candidate is not anticipated
by it. This now rests on a read rather than on a route note.

**FRAME-NON-EMPTINESS CLAUSE: strengthened, not weakened, and it is now INSTANCED rather than
asserted.** The entry worried this was the one dataset that could carry per-reading dual-wear
traces. It does, and they are open. Per the existence-claim rule, I can now name the instance
instead of asserting the kind: **CGMacros v1.0.0, PhysioNet, DOI 10.13026/3z8q-x658** -
45 participants, two CGMs worn simultaneously (FreeStyle Libre Pro on the arm, G6 Pro on the
abdomen, both blinded), ~10 free-living days each, per-participant CSVs with both traces, Open
Access, no credentialing, 626.7 MB. The frame is **TRUE OVER AN INSTANCE I OPENED** (the landing
page and file table; I did not download the zip).

**Three caveats that must travel with that strengthening, or the clause will be read as more
than it is.**

1. **The traces are interpolated to one minute from 15-min and 5-min native cadences.** "We used
   linear interpolation to obtain a uniform sampling rate of one minute." A reader recomputing a
   compression metric is working at 15-min (Libre) and 5-min (Dexcom) true resolution, with
   linear fill between - and that fill smooths exactly the brief downward excursions such a
   metric hunts. Do not let the one-minute grid be read as per-reading fidelity.
2. **Licence mismatch.** Article CC BY 4.0; dataset **CC BY-NC-SA 4.0**. If the frame's
   non-emptiness is doing work that assumes permissive reuse, the NonCommercial and ShareAlike
   terms bind.
3. **The sensors sit at different body sites with a documented ~58.7 mg/dL level offset in
   healthy adults.** Any dual-wear artifact detector built on this release must separate that
   standing site/generation bias from episodic compression. The descriptor gives no reference
   method, no posture or position channel and no event adjudication with which to do it. On that
   question the dataset is an opportunity, not an answer - and the descriptor is silent outside
   its regime, which is silence, not support.
