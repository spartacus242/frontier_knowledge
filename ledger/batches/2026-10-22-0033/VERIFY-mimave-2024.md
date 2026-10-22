# VERIFY-mimave-2024

## CLAIM

Ledger source: "the minimum-information standard for variant-effect experiments," Genome Biology (2024), DOI 10.1186/s13059-024-03223-9.

Sub-claims handed to me:
- (a) Does the published standard mention REPLICATES anywhere — required, recommended or optional reporting item? Report every occurrence of the word.
- (b) Does it require or recommend reporting raw counts, pre-normalisation scores and raw reads, as the preprint does? Quote as served.
- (c) Does it publish any RELIABILITY quantity (test-retest correlation, ICC, measurement-error variance, ceiling)? If not, say which it does: defines / recommends / bounds / measures.
- (d) Does the published version differ from arXiv 2306.15113 on any of (a)-(c)?

## READ LEVEL

**FULL TEXT, read twice by two independent routes.** Not "could not read," and not "not found."

- Route that worked (1): `https://GenomeBiology.biomedcentral.com/counter/pdf/10.1186/s13059-024-03223-9.pdf` — the publisher PDF, served directly, no interstitial. Used three times (Table 1 + keyword scan + segmented quotes; then figure/paragraph pass).
- Route that worked (2): `https://link.springer.com/article/10.1186/s13059-024-03223-9?code=…&error=cookies_not_supported` — the full HTML article body is served *despite* the `error=cookies_not_supported` query string. The earlier agent's conclusion that this route failed is wrong: the cookie error is cosmetic, the article text comes through.
- Comparison version, full text: `https://arxiv.org/pdf/2306.15113` (arXiv PDF, opened first try).

**One bounded unread region, flagged rather than papered over:** Figure 1 is the structured vocabulary itself, drawn as a diagram. Its caption extracts as text; **the label text drawn inside the figure does not extract at either route.** So any term that exists only as a box label inside Figure 1 is outside my read. See DEFECTS FOUND.

## FRONT MATTER (taken from the article's own front matter, both routes agreeing)

Claussnitzer M, Parikh VN, Wagner AH, Arbesfeld JA, Bult CJ, Firth HV, Muffley LA, Nguyen Ba AN, Riehle K, Roth FP, Tabet D, Bolognesi B, Glazer AM, Rubin AF. "Minimum information and guidelines for reporting a multiplexed assay of variant effect." *Genome Biology* **25**, article 100 (2024). Published 19 April 2024. No page range is issued; the article number is the locator.

(The Springer HTML elides middle authors with an ellipsis in its byline strip; the PDF front matter serves the list in full, and that is the list above. The preprint title capitalises "Multiplexed Assay of Variant Effect"; the published title lower-cases it.)

**Article type, as the article labels itself: CORRESPONDENCE.** Printed as "CORRESPONDENCE" in the PDF header and "Correspondence" on the Springer page. It is not a research paper, not a review, and not a formally balloted guideline document. It is a community recommendation piece — a proposed controlled vocabulary plus deposition advice — and the ledger should not describe it as a primary study or as a measurement paper.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) REPLICATES — the word does not occur

**Occurrences of "replicat" (replicate / replicates / replication / replicability) in the published article: ZERO.** Checked unprimed as a bare string scan over the whole document — abstract, body, Table 1, figure caption, reference titles — at both the PDF route and the Springer HTML route, independently. Both scans return nothing.

Also absent as bare strings, same scan: "variance", "noise", "confidence interval", "standard deviation", "quality control", "QC", "reliability", "test-retest", "intraclass", "correlation", "measurement error", "ceiling".

The nearest thing the article contains is a single occurrence of "error", inside its data-analysis paragraph, where the recommendation is to describe the statistical steps used to *"calculate scores and associated error estimates."* That is a recommendation to describe a pipeline step, not a replicate-reporting requirement and not a quantity.

The phrase "quality filtering" does appear in that same data-analysis paragraph (as one of the read-processing steps to be described). It is not "quality control" and it is not replicate-related.

So: **the published standard contains no replicate reporting item at any strength — not required, not recommended, not optional.** Note the distinction the instructions insist on: this is silence, not prohibition. The article nowhere says replicates need not be reported; it simply never raises them.

### (b) Raw counts, pre-normalisation scores, raw reads — all three ARE recommended

All three are present in the published version. Each is a *recommendation* with a stated verb strength, and the strengths differ. Reconstructed quotations below.

**(i) Raw counts — "we urge"** — *reconstruction from 3 consecutive segments, junctions verified by two-word overlap ("raw counts", "want to"):*

> "In addition to processed variant scores, we urge researchers to share raw counts for each dataset, as these have tremendous utility for downstream users who want to reanalyze datasets or develop new statistical methods."

**(ii) Pre-normalisation scores — "we recommend"** — *reconstruction from 3 consecutive segments, junctions verified by two-word overlap ("or imputation", "normalized/imputed scores"):*

> "Similarly, we recommend that researchers also report scores prior to normalization or imputation, and MaveDB supports the deposition of counts, scores, normalized/imputed scores, and sequence metadata for the same dataset (Table 1)."

(The summariser rejoined a line-break hyphen in "meta-data" as "metadata"; flagged, not silently corrected.)

**(iii) Raw sequence reads — "we strongly recommend"** — *reconstruction from 3 consecutive segments, junctions verified by two-word overlap ("as the", "along with"):*

> "We strongly recommend that raw sequence reads be deposited in a suitable repository, such as the Sequence Read Archive (SRA) [39] or Gene Expression Omnibus (GEO) [40], along with a description of each file (e.g., time point and sample information)."

**Table 1, reproduced in full as served** — note its actual title, which matters for how the ledger may cite it:

Table 1 — "Recommended locations for MAVE data deposition"

| Type of data | Deposition location |
|---|---|
| Processed scores, unprocessed scores, raw counts | MaveDB [15, 16] |
| Raw sequence reads | Sequence Read Archive [39]/ Gene Expression Omnibus [40] |
| Target sequence | MaveDB [15, 16] |
| Linked sequence references | MaveDB [15, 16] |
| Sequence metadata/digests | MaveDB [15, 16]/SeqRepo [25] |
| Variant library | MaveDB [15, 16] |
| Analysis code | GitHub/Zenodo |
| Structured vocabulary description | This work/MaveDB [15, 16] |

**Table 1 is a routing table, not the minimum-information checklist.** It says *where* each data type should be deposited. The article publishes **no numbered minimum-information checklist table at all**: the reporting items are stated in running prose across the Results-and-discussion sections plus the Figure 1 vocabulary diagram. Anyone citing "Table 1 of MIM-MAVE" for a list of required items is citing the deposition-location table.

The prose items, in order of appearance (my enumeration of the article's own recommendations, not the article's numbering — it has none): target sequence / library-diversity method / variant delivery method in controlled-vocabulary terms; variant generation method (endogenous editing vs in vitro library); model system by NCBI Taxonomy ID and Cell Line Ontology term; a versioned stable identifier to RefSeq/Ensembl/UniProt; the full target sequence; variant exchange and storage via a VRS-compatible model with mapping to linked references; variant descriptions in MAVE-HGVS; assay readout terms from OBI; known-effect calibration/validation variants with effects and sources; environmental variables (e.g. temperature, added small molecules); assay protocols on a public protocol resource; high-throughput sequencing method in controlled-vocabulary terms; raw sequence reads with per-file descriptions; disease terms from Mondo or OMIM; associated gene-disease entity and assay-to-mechanism relationship; the data analysis pipeline with software versions, code shared and archived with a DOI; raw counts per dataset; scores prior to normalisation or imputation.

**Replicates appear nowhere in that list.** Neither does a sample-size or replicate-count item.

### (c) RELIABILITY quantity — none published; the article does not even DEFINE one

Asked whether the source publishes a reliability quantity, the answer by the "name the number" test is: **there is no number.** No test-retest correlation, no ICC, no measurement-error variance, no ceiling, no reproducibility coefficient — not in a table, not in a figure, not in a sentence, with or without units or denominator.

Of the ladder DEFINES / BOUNDS / PREDICTS / ANNOUNCES / MEASURES, the published article does **none of them for a reliability quantity.** It does not define one. What it does, and this is the honest characterisation:

- It **RECOMMENDS depositing the inputs** from which someone else could compute one (raw counts, pre-normalisation scores, raw reads, analysis code).
- It **RECOMMENDS describing** the statistical step that produces uncertainty: the pipeline should be detailed down to the steps that *"calculate scores and associated error estimates."* It names error estimates as an output of someone's pipeline. It sets no requirement to report them, no format for them, and no quantity.
- It uses "reproducibility" twice, both times as a *goal word*, never as a measured property. Both occurrences as served:
  - Abstract: "To address these issues and promote reproducibility and reuse of MAVE data" (sentence continues past the quotation cap).
  - Conclusions: "accessibility is real only when it ensures usability and reproducibility."

Neither sentence is about the reproducibility of a measurement between replicates. They are about the reusability of deposited data by third parties. **A reader who takes "promotes reproducibility" in this abstract as a claim about assay reliability has moved regimes.**

### (d) Published vs arXiv 2306.15113 — no difference on (a), (b) or (c)

I read the preprint PDF in full myself rather than relying on the earlier agent's report. Same title (modulo capitalisation), same fourteen authors in the same order.

- **(a) Replicates:** zero occurrences of "replicat" in the preprint too. **No difference.**
- **(b) Raw counts / pre-normalisation scores / raw reads:** present in the preprint with the same three verb strengths and substantively the same wording — "we urge researchers to share raw counts for each dataset … as these have tremendous utility for downstream users who want to reanalyze datasets or develop new statistical methods"; "we recommend that researchers also report scores prior to normalization or imputation"; "We strongly recommend that raw sequence reads be deposited in a suitable repository". Preprint Table 1 carries the same two rows ("Processed scores, unprocessed scores, raw counts | MaveDB"; "Raw sequence reads | Sequence Read Archive/Gene Expression Omnibus"). The one textual drift I can see is the published version's parenthetical "(e.g., time point and sample information)" against the preprint's "(e.g. time point and sample information)" — punctuation, nothing more. **No substantive difference.**
- **(c) Reliability quantity:** none in the preprint either; "reproducibility" appears in the same two goal-word positions (abstract, conclusions); "reliability", "correlation", "intraclass", "test-retest", "measurement error", "variance", "ceiling" all absent. **No difference.**
- Table title drift: the preprint's table is served as "Recommendation locations for MAVE data deposition", the published as "Recommended locations for MAVE data deposition". Cosmetic.

**So the ledger cannot gain anything from the version distinction.** Whatever is said about the preprint on (a)-(c) is true of the published Correspondence, and vice versa. Any ledger entry whose force rests on "the published standard dropped / added this relative to the preprint" is unsupported.

## REGIME

What this source establishes, and where it is silent:

- **Kind of document:** a Correspondence in Genome Biology — a community recommendation and a proposed controlled vocabulary. Not a primary study, not a review, not a protocol, not a balloted guideline. It measures nothing. It has no data, no cohort, no estimand, no comparator, no endpoint. Its unit of analysis, to the extent it has one, is **the dataset-level metadata record**: what fields should accompany a deposited MAVE dataset and where that dataset should live.
- **Population / scope:** multiplexed assays of variant effect (MAVEs) and deep mutational scans, their reporting and deposition. Its operative verbs are "recommend", "strongly recommend", "urge". It binds nobody; MaveDB is named as the implementing repository.
- **The regime it is silent in:** experimental design and measurement-quality specification. It does not specify how many replicates to run, how many to report, how to report agreement between them, or what reliability a dataset must reach. It explicitly brackets analysis out — "Although it is not within the scope of this controlled vocabulary, it is still crucial to detail the data analysis…" — and then asks only for a *description* of the pipeline, not for its quality figures.
- **Regime fit for a ledger entry about replicate reporting:** a claim of the form "the minimum-information standard for variant-effect experiments does not ask for replicates" sits **inside** this regime and is supported by the bare-string scan. A claim of the form "the standard permits / endorses / has considered and rejected single-replicate experiments" sits **outside** it: the article never raises replicates, and silence is not a prohibition nor an endorsement. A claim that the standard "requires raw data so reliability is recoverable" is a claim about what a *third party* could compute from the deposits; the standard itself prints no reliability figure and sets no reliability requirement.

## DEFECTS FOUND

1. **The earlier agent's "could not read" is wrong, and this is the prior-art defect the instructions warn about.** This source opens at two routes. `genomebiology.biomedcentral.com/articles/…` does 302 to `link.springer.com/article/…?error=cookies_not_supported` — but that redirect target *serves the full article text anyway*; the cookie error is cosmetic. And `GenomeBiology.biomedcentral.com/counter/pdf/10.1186/s13059-024-03223-9.pdf` serves the whole PDF with no interstitial at all and was the better route. COULD NOT READ was recorded for a source that is open at two places. PMC was never needed.
2. **Table 1 is misnameable.** It is "Recommended locations for MAVE data deposition" — a routing table. The article publishes **no minimum-information checklist table**; its items are in prose and in a figure. Any ledger text citing "Table 1" as the item list is citing the wrong object, and any count of items derived from Table 1's eight rows is a count of data types, not of reporting requirements.
3. **"Reproducibility" in the abstract is a goal word, not a measurement.** Both of its two occurrences concern third-party reuse of deposited data. Lifting "promote reproducibility" into a claim about assay reliability or replicate agreement is a regime switch of exactly the kind flagged.
4. **PUBLISHED-IS-NOT-PERFORMED, in its strongest form here.** On reliability the article does not even reach DEFINES. It recommends depositing inputs and recommends describing the step that computes "error estimates". There is no quantity to name, no table, no figure, no sentence carrying one. "Recommends the inputs" must not be written up as "bounds" or "evaluates".
5. **One bounded unread region, declared.** Figure 1 is the controlled vocabulary drawn as a diagram, and its internal box labels do not extract as text at either route — only its caption does. The caption as served begins: "Fig. 1 A structured vocabulary of terms relevant to the technical development, execution and recording of" (continues past the quotation cap; it goes on to describe gray category boxes, three published MAVE dataset examples colour-coded green/blue/red by citation, and example files in the GitHub repository). **So my zero-occurrence finding for "replicat" covers the extractable text of the article, not the pixels of Figure 1's labels.** The vocabulary is also published as files in the project's GitHub repository, which would be the place to close this; I was at the fetch cap and did not open it. If the ledger entry's force depends on the vocabulary containing no replicate term, that repository should be checked before the entry is relied on. I have not merged this into a COULD NOT READ for the article — the article was read in full; one figure's embedded label text was not.
6. **Quotation-cap artefacts to be aware of, not treated as the source's wording.** Three sentences in WHAT THE SOURCE SAYS are **reconstructions from 3 consecutive segments each**, with two-word overlaps verified at every junction; nothing was completed by inference. Separately, the summariser rejoined a line-break hyphen ("meta-data" to "metadata") in sentence (ii) — reported, not silently corrected. The Springer byline elides middle authors with "…"; the author list above comes from the PDF front matter instead.
7. **Grammar on both sides of the cuts, checked.** The counts sentence begins "In addition to processed variant scores…" — the raw-counts recommendation is *additive* to score reporting, not a substitute, so a ledger quotation starting at "we urge researchers to share raw counts" drops a qualifier that matters. The pre-normalisation recommendation and the MaveDB capability statement are **one sentence joined by "and"**: "we recommend that researchers also report scores prior to normalization or imputation, and MaveDB supports the deposition of…". Quoting the second half alone converts a recommendation-plus-capability into a bare capability claim about MaveDB.

## ROUTES THAT FAILED

**None failed on this task.** No search or fetch was refused; nothing was blocked. Recorded for completeness:

- `https://genomebiology.biomedcentral.com/articles/10.1186/s13059-024-03223-9` returned **302 to link.springer.com with `error=cookies_not_supported`** — the same thing the earlier agent saw. This is **not a failure**: following the redirect returns the full text. It must not be recorded as a block.
- PubMed Central (`PMC11027375`, which surfaced as the top search hit) was **not tried**, per the routing brief; it is an identifier, not a route. It was not needed.
- doi.org was not tried; the DOI was resolved by going to the publisher host directly.
- Figure 1's internal label text: not retrievable as text at either working route (see DEFECTS FOUND 5). This is a limit of text extraction from a diagram, not a route failure.

Budget used: 1 search, 5 fetches (cap 6 / 5).

## BEARING ON THE LEDGER ENTRY

- **(a) Supported, in the regime stated.** The published standard mentions replicates nowhere — not as required, recommended or optional. Zero occurrences of "replicat" in the extractable text, confirmed by two independent unprimed scans of two independently fetched copies. Caveat: Figure 1's embedded labels are outside that scan.
- **(b) Supported, with the verb strengths kept.** All three are recommended, at three different strengths that the ledger should preserve: raw counts "we urge", pre-normalisation scores "we recommend", raw sequence reads "we strongly recommend". None is a requirement; this document requires nothing of anybody.
- **(c) Supported as an absence, and the absence is deeper than "no number".** No reliability quantity is published, and none is defined, bounded, predicted or announced. The article recommends depositing the inputs for one and recommends describing the step that computes "error estimates". That is the ceiling of what it does.
- **(d) No difference.** Published Correspondence and arXiv 2306.15113 agree on (a), (b) and (c); the only drifts I found are capitalisation, a comma, and a one-word table title. **Any ledger entry that leans on a preprint-to-published change for its force should be struck or rewritten.**
- **Two corrections the ledger should absorb regardless of its verdict:** this source is **readable**, at two routes, and the prior COULD NOT READ against it was an artefact of not following a cosmetic cookie redirect; and the source is a **Correspondence**, so it should not be cited as a study, a review, or a mandate.
- **One thing to close before relying on (a):** the controlled-vocabulary terms inside Figure 1 and in the project's GitHub repository. My zero-count is a count over article text.
