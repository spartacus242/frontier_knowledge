# VERIFY - ReadBouncer's ejection-decision error rate and Munro's use of the unblocked-read-IDs file

Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

Two prior descriptions in one check, as the entry UQ-20261023-04 carries them.

(1) ReadBouncer measures the ejection DECISION'S OWN ERROR RATE - the entry says recall 94.38%
means about 5.6% of target reads are missed - and says nothing about WHICH ones or what that does
to a biological quantity; its single use of the word 'bias' is about its playback design; its
Suppl. Table S5 COULD NOT READ at the route tried.

(2) Munro et al. 2025 divides reads using the unblocked read IDs file - 'reads were divided into
those actively sequenced and those unblocked using the unblocked read IDs file' - then uses them
for CNV as low-pass background, never as a propensity record, and does explicitly no SNV calling.

What turns on it (stated, not defended): these two sources carry the entry's limb that the
instrument's own rejection log exists and has never been used as a propensity record.

## READ LEVEL

### Source 1 - ReadBouncer

Ulrich J.-U., Lutfi A., Rutzen K., Renard B.Y., 'ReadBouncer: Precise and Scalable Adaptive
Sampling for Nanopore Sequencing', bioRxiv 10.1101/2022.02.01.478636 (published in Bioinformatics
2022, 38(Suppl 1)).

**PARTIAL.** Read via the bioRxiv preprint PDF (https://www.biorxiv.org/content/10.1101/2022.02.01.478636.full.pdf).
Served: Introduction, Methods, Results prose, Discussion, Table 1 **caption**, and the in-text
citations of the supplementary items. NOT served: the **body (cells) of Table 1**, and the
Supplementary Material in any form.

Front matter: **not served.** The retrieved content began at the Introduction with no title block,
no author list, no affiliations, no date and no DOI. I therefore did NOT verify the authors,
their order or their initials from the front matter of this document, and per the ledger's rule
(take author names from the front matter, never from a short form someone else wrote) I am
reporting the entry's author string for source 1 as **UNVERIFIED**, not as confirmed. A
title-and-author match appeared in a search listing; a search listing is a title match, never
front matter.

- **Suppl. Mat. Table S5: COULD NOT READ.** No supplementary URL is given in the served PDF text
  (the only URL carried is the software repository, https://gitlab.com/dacs-hpi/readbouncer).
  I had no fetch budget left to try a DC1/media or Silverchair supplementary route. This is
  COULD NOT READ, not NOT FOUND: the table exists and is cited in the main text (quoted below).
- **Table 1 values: COULD NOT READ.** The caption was served; the cells were not.

### Source 2 - Munro et al.

Munro R., Payne A., Holmes N., Moore C., Cahyani I., Loose M., 'Enhancing nanopore adaptive
sampling for PromethION using readfish at scale', Genome Research gr.279329.124.

**FULL TEXT of the author-accepted manuscript**, via the University of Nottingham repository
(https://nottingham-repository.worktribe.com/index.php/OutputFile/45036255). Front matter served,
including the author block and the printed DOI. Methods (incl. 'Target coverage'), Results,
Discussion, figure captions and Table 1 caption all served. Supplementary material NOT opened.
The publisher's typeset version at genome.cshlp.org was NOT read (route failed, below), so section
and page locations below are the accepted manuscript's, not the typeset article's.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter, read level, failed routes

**ReadBouncer** - front matter not served; read level PARTIAL; see READ LEVEL and ROUTES THAT
FAILED. **Munro et al.** - front matter as printed on the accepted manuscript:

> "Rory Munro,1,3 Alexander Payne,1,3 Nadine Holmes,2 Chris Moore,2 Inswasti Cahyani,1"
> ... "Matthew Loose1"

and the printed DOI line:

> "https://www.genome.org/cgi/doi/10.1101/gr.279329.124"

with the running citation on the manuscript given as **Genome Research 35:1-9**.

### (b) ReadBouncer: the 94.38% figure, 'bias', Table S5

**94.38% - COULD NOT CONFIRM AT A PRINTED LOCATION.** The string "94.38" does not occur anywhere
in the text served to me. The nearest figure printed in the served text is in the Discussion:

> "single raw read accuracies of about 94%"

which is a **read basecalling accuracy**, not a recall. These are different quantities one word
apart, and I flag the collision explicitly:
- *numerator class* of the Discussion figure: correctly basecalled bases within a raw read;
  *denominator*: bases in the read. It is a sequencing-chemistry property.
- *numerator class* the entry needs: correctly classified target reads; *denominator*: all target
  reads (TP + FN). It is a classifier property.
The entry's 94.38% must NOT be grounded on the "about 94%" sentence.

Because the **body of Table 1** and **Suppl. Mat. Table S5** were not served, the absence of
"94.38" from my read is COULD NOT READ, not a negative finding. The figure is most likely a cell
in one of those two, since the main text points both at classification metrics. Until a cell is
named, ReadBouncer **ANNOUNCES** recall as a reported metric in my read and I cannot say it
**PRINTS** 94.38%.

**'bias' - exactly one occurrence, and it is the playback-design sentence.** Served as two
consecutive segments; **this is a reconstruction from 2 fragments**, junction at
"...sequencing experiment," / "we do not expect...":

> "Since a playback run can be regarded as real data from a real sequencing experiment, we do not
> expect any bias resulting from this comparison."

Scope-setting opener, as the ledger requires: the opening words "Since a playback run can be
regarded as real data from a real sequencing experiment," scope the clause to the **validity of
comparing a playback run against a live run**. The clause **DENIES** a bias (it asserts the
expected absence of one) and it is an expectation, not a measurement. It is not about any
biological quantity and not about which reads are missed. **The entry's characterisation of this
occurrence is correct.** One caveat on the universal: "bias"/"biased"/"unbiased" appears once in
the *main text I read*; the Supplementary Material was not opened, so "its single use of the word
'bias'" is true over the document I opened and **unenumerated** over the supplement.

**Suppl. Table S5 - what the main text says it carries.** I could not open S5, but the main text's
citation of it is served and it is load-bearing against the entry's "says nothing about WHICH ones":

> "ReadBouncer consistently demonstrates best accuracy, recall, precision, F1-scores, and MCC
> (Suppl. Mat. Table S5)."

cited in the context of the simulated mock community **across read accuracy levels** (the
simulation sweep is 80-98% read accuracy). So S5 is, on the main text's own account, a
tool x read-accuracy-level table of classification metrics. **Whether errors are broken down by
read or target class: COULD NOT READ.** What the main text implies is a breakdown by *read
accuracy level*, which is a read class, though not a taxon or target class and not a biological
quantity.

The kind of document that could settle this: a supplementary PDF or spreadsheet carrying Table S5
itself (bioRxiv DC1/media-*.pdf, or the Bioinformatics btac*_supplementary_data archive). That is
the right kind, and it is named here as a route to try, not as a source I have graded.

**ReadBouncer's unit of analysis, which is the substance of limb (1).** Confirmed from the served
Methods: reads are classified individually on their first 360 nucleotides, with TP/FP/TN/FN counted
per read and bacterial reads the positives for the depletion task; the paper does not print the
recall and precision formulae, so TP/(TP+FN) and TP/(TP+FP) are implied, not stated. This is a
**classification decision error rate**, exactly as the entry's limb (1) says - that part stands
independently of whether 94.38% can be located.

### (c) Munro: the quotation, the use, the SNV question

**The quotation, whole in its sentence.** Served as two consecutive segments; **this is a
reconstruction from 2 fragments**, junction at "...those unblocked using the" / " unblocked read
IDs file...", verified at the junction:

> "To visualize coverage over specific targets, reads were divided into those actively sequenced
> and those unblocked using the unblocked read IDs file generated by readfish."

printed in Methods, under the heading **'Target coverage'**.

The entry's quoted string is verbatim inside this sentence and is grammatically clean on both
sides of the cut, but the cut **drops the scope-setting opener** "To visualize coverage over
specific targets," and drops the tail "generated by readfish." What the opener scopes: the
division of reads is performed **for the purpose of visualising coverage over targets**. The clause
the entry's words sit in **ASSERTS** the division and **names its purpose**; it records no
reweighting. The restored opener happens to cut in the entry's favour - it makes the use
visualisation rather than correction - but the entry should carry the sentence whole.

**What the ejected reads are used FOR.** Two uses, both served:

1. Coverage visualisation. Fig. 2 caption: "Blue is coverage from accepted read; red illustrates
   coverage from rejected reads."
2. CNV calling. Results: "Finally, we turned to a natural application for adaptive-sampling, which
   considers the mappings of rejected reads." The method is equal-count binning:
   "mappings binned into windows along the genome such that on average each bin contains 100
   reads." Validation: "As expected, CNV plots generated in this manner for NB4 (barcode 06) and
   22Rv1 (barcode 07) (Fig. 4A,C) both closely recapitulate CNV plots generated by Bionano optical
   mapping (Fig. 4B,D)."

**Correction to the entry's wording here:** the paper does **not** use the words "low-pass" or
"background" for the rejected reads. "CNV as low-pass background" is the entry's own paraphrase
presented inside a description of what the paper says. It is a fair gloss of equal-count-binned
rejected-read mappings, but it should be marked as the entry's gloss, not quoted or implied as the
paper's framing.

**SNV calling - the entry is WRONG as worded.** There is **no explicit statement that no SNV
calling was done.** What is printed:

> "Current best practice for single nucleotide variant calling requires higher minimal depth than
> we achieve when looking at three samples on a MinION flow cell."

(reconstruction from 2 consecutive fragments, junction at "...than we achieve" / " when looking
at three samples..."). This clause **RECORDS A MOVE AWAY** from SNV calling and scopes the reason
to a specific operating condition - *three samples on a MinION flow cell* - not to the work as a
whole. And:

> "Furthermore, it is possible to target three human genomes on a single flow cell on PromethION
> devices to a sufficient depth for further SNP analysis."

which **ANNOUNCES/PREDICTS** sufficiency for SNP analysis rather than performing it. The
Introduction also carries the hedged, cited formulation: "Increased coverage over target regions
allows for the determination of structural variants (SVs) and single-nucleotide polymorphisms
(SNPs) with greater confidence (Beyter et al. 2021)." The only variant calling actually performed
and reported is **structural variant calling with cuteSV**; no SNP/SNV calling results are
presented. Correct wording for the entry: *reports no SNV/SNP calling results; gives a depth
reason scoped to three samples on a MinION; and announces PromethION depth as sufficient for
future SNP analysis.* Drop "explicitly".

**'bias' in Munro:** does not occur. Not once, in any form, in the full accepted manuscript I read.

### (d) Does EITHER paper reweight or correct an estimate using the rejection/unblocked log?

**No - over the documents I opened, and I state how I checked.**

- ReadBouncer: I asked the served full text directly for any use of the rejection/unblocked-read
  decision log to reweight, correct, adjust or normalise an estimate (abundance, coverage,
  quantification). Absent. The paper compares unblocked read lengths and on-/off-target counts
  **descriptively**. Checked over: Introduction, Methods, Results prose, Discussion. NOT checked:
  Table 1 cells, Supplementary Material.
- Munro: the unblocked read IDs file has exactly the two uses quoted in (c) - a split for coverage
  visualisation, and rejected-read mappings as the input data for CNV. In both the log is a **data
  source**, never a propensity record used to correct an estimate. Checked over: the full accepted
  manuscript. NOT checked: supplementary material.

Two near neighbours I examined and reject as reweightings, because each is one word away from the
claim's quantity:
- Munro's "each bin contains 100 reads" is **equal-count binning of the rejected reads themselves**.
  It normalises bin width to read count; it does not correct any locus for its probability of being
  rejected. Not a propensity correction.
- Munro's Table 1 reports "Fold enrichment," and the served text **does not define how it is
  calculated**. I therefore cannot say whether its denominator involves the unblocked counts. This
  is the one place in either paper where a rejection-derived quantity might enter an estimate, and
  it is **COULD NOT CHECK**, not a negative finding. Resolving it needs the typeset Methods or the
  supplement.

**On the entry's universal.** The entry's limb is of the form *has never been used as a propensity
record*. Per the ledger's rule, I enumerate: **instances I opened** - ReadBouncer main text
(partial), Munro accepted manuscript (full). **Instances I did not open** - ReadBouncer Suppl. Mat.
Tables S1-S6 and its Table 1 cells, Munro's supplementary material, the typeset Genome Research
version, and every other adaptive-sampling paper (readfish, UNCALLED, BOSS-RUNS, Dynamic/Bayesian
adaptive sampling, SPREAD and the rest). The claim is therefore **true over the two documents I
opened and UNENUMERATED beyond them** - it is not established, and the entry must not carry it as
"never" without saying over what.

### (e) Decision error only, or propagated bias?

**ReadBouncer:** decision error only - its recall and precision are per-read classification error
rates computed on the first 360 nt against a mapping-quality gold standard, and the paper's one use
of "bias" merely denies an expected playback-vs-live comparison artefact, so nothing is propagated
to a biological quantity.

**Munro:** neither - the rejection log is consumed as input data for coverage plots and equal-count-
binned CNV, so the paper performs no error-rate measurement of the ejection decision and no
propagated-bias analysis at all.

## REGIME

**ReadBouncer**, in its own words as served. Population: simulated PBSIM2 R9.4-like reads from the
seven-bacterium ZymoBIOMICS mock community plus *S. cerevisiae* at 80-98% read accuracy; real
R9.4.1 reads from the same mock community with 2.27% *S. cerevisiae*; and a 60-minute human
whole-genome **playback** run targeting chromosomes 21 and 22. Unit of analysis: the individual
read, classified on its first 360 nucleotides. Operating condition: depletion (bacterial reads are
the positives). Instrument: MinION/playback, R9.4.1 chemistry. Thresholds: minimum 200 nt to
classify with a 1,500 bp cap on further attempts; k = 13, 100,000 nt fragments, three hash
functions, max false positive rate 0.01; match threshold from a 95% confidence interval at a 10%
expected error rate (GPU basecalling: fragment 200,000, k = 15, error rate 0.05); real mock
community filtered below 2,000 bp with MAPQ >= 30 as the gold standard.

Does the entry's claim sit inside this regime? **Yes for limb (1) as a statement about what is
measured** - a per-read classification error rate on a mock community and a playback run is
precisely "the decision's own error rate." It sits inside nothing that would license a statement
about a biological quantity, because no biological quantity is estimated here: the mock community's
composition is the *ground truth* used to score the classifier, not an estimand.

**Munro et al.**, in its own words. Population: human cell lines and samples barcoded on a flow
cell (NB4 / barcode 06, 22Rv1 / barcode 07 named for CNV), plus multi-genome PromethION runs. Unit
of analysis: the read, and for CNV the genomic bin (~100 reads per bin). Operating condition:
readfish adaptive sampling at PromethION scale, three human genomes per flow cell contemplated.
Instrument: PromethION (with MinION comparisons). Category split: "those actively sequenced and
those unblocked."

Does the entry's claim sit inside this regime? **Yes for the existence of the rejection log and
for its uses**, which is all the entry asks of it. The SNV sub-claim as the entry words it sits
*outside* what the paper asserts: the paper's depth statement is scoped to three samples on a
**MinION** flow cell, and its PromethION statement runs the other way.

## DEFECTS FOUND

1. **94.38% is not grounded at a printed location.** The figure does not occur in the ReadBouncer
   text served to me, and the only nearby number, "single raw read accuracies of about 94%", is a
   *basecalling accuracy*, a different quantity with a different numerator and denominator. The
   figure is probably a Table 1 or Suppl. Table S5 cell, both of which were COULD NOT READ. The
   entry currently prints a number without naming the table, figure or sentence it comes from,
   which is the exact failure mode the ledger's PUBLISHED-IS-NOT-PERFORMED rule targets. Severity:
   the entry must cite the cell or drop the digits and say "a reported recall in the low-90s".
2. **"says nothing about WHICH ones" is not safe yet.** ReadBouncer's own main text cites Suppl.
   Table S5 as carrying "accuracy, recall, precision, F1-scores, and MCC" **across read accuracy
   levels**. That is a per-read-class breakdown of the error, even if not a per-taxon or
   per-target one. Since S5 is unopened, the entry is asserting a negative about a document nobody
   in this check has read.
3. **Munro's quotation is cut before its scope-setting opener.** The sentence begins "To visualize
   coverage over specific targets," and ends "generated by readfish." The entry's clipped form
   hides that the purpose clause is in the very same sentence.
4. **"does explicitly no SNV calling" is wrong.** There is no such explicit statement. The paper
   gives a depth reason scoped to *three samples on a MinION flow cell* and separately announces
   PromethION depth as sufficient for *further SNP analysis*. The performed variant calling is
   structural, with cuteSV.
5. **"low-pass background" is the entry's paraphrase, not the paper's words.** The paper uses
   neither term.
6. **"never used as a propensity record" is an unenumerated universal.** True over the two
   documents opened; the instances not opened are listed in (d).
7. **Munro's "Fold enrichment" is undefined in the served text.** The one quantity in either paper
   that could conceivably involve the unblocked counts in a denominator is unresolved. COULD NOT
   CHECK.
8. **ReadBouncer's authors are unverified from front matter.** The retrieved PDF content carried no
   title block. The entry's author string for source 1 has not been confirmed in this check.

**What is CONFIRMED and should not be reopened:** ReadBouncer's unit of analysis is the per-read
classification decision; its single served use of "bias" is the playback-comparison sentence and
it denies rather than measures a bias; Munro's quoted clause is verbatim within its sentence; the
unblocked read IDs file is used for coverage visualisation and as the read source for CNV; "bias"
appears nowhere in Munro; neither paper reweights an estimate with the rejection log.

## ROUTES THAT FAILED

- `https://www.biorxiv.org/content/10.1101/2022.02.01.478636v2.full` - WebFetch returned
  client_error, nothing of the page retrieved. (The `.full.pdf` form of the same DOI **worked**;
  prefer it.)
- `https://genome.cshlp.org/content/early/2025/01/30/gr.279329.124.full` - WebFetch SERVER_ERROR.
- `https://genome.cshlp.org/content/35/4/877.full` - WebFetch SERVER_ERROR. **genome.cshlp.org
  appears unreachable by WebFetch at this proxy by either the early-release or the volume path;
  use the Nottingham Worktribe repository copy instead.**
- `https://academic.oup.com/bioinformatics/article/38/Supplement_1/i153/6617499` - fetched
  successfully but **served the wrong article**: the returned front matter is Liu S. & Koslicki D.,
  'CMash: fast, multi-resolution estimation of k-mer-based Jaccard and containment indices',
  Bioinformatics 38(Suppl_1):i28-i35, DOI 10.1093/bioinformatics/btac237. One fetch lost. Do not
  reuse this article-ID guess for ReadBouncer; resolve the OUP article ID from a search result
  before fetching.
- Suppl. Mat. Table S5: **not attempted** - no supplementary URL is carried in the served
  ReadBouncer text and the fetch budget was exhausted. Untried routes for the next checker, named
  by kind (a supplementary PDF/spreadsheet is the right kind of document to settle a
  per-class-error question): the bioRxiv DC1 supplementary media path for 2022.02.01.478636, the
  Bioinformatics Silverchair `btac*_supplementary_data` archive, and the RKI/Refubium repository
  records for the thesis chapter version (edoc.rki.de/handle/176904/12050,
  refubium.fu-berlin.de/handle/fub188/35791).
- PMC/Europe PMC are hard-blocked here; PMC9235500 and PMC12047233 surfaced in search listings and
  were **not** used as routes.

## BEARING ON THE LEDGER ENTRY

**HOLD limb (1)'s substance, NARROW its wording, and CONVERT the "which ones" clause into a
promotion condition. CORRECT limb (2) on SNV calling and restore its quotation's opener.**

- **Limb (1), "ReadBouncer measures the ejection decision's own error rate": HOLDS.** Confirmed
  from the served Methods - per-read classification on the first 360 nt, TP/FP/TN/FN per read, mock
  community as ground truth rather than estimand. No biological quantity is estimated, so nothing
  can be propagated. This is the correctability limb's strongest support in the pair and it does
  not depend on the contested number.
- **The 94.38% / 5.6% figure: NARROW.** Either cite the cell (Table 1 or Suppl. Table S5) or stop
  printing the digits. Do not let "single raw read accuracies of about 94%" stand in for it; that
  is a basecalling accuracy, not a recall. The "about 5.6% of target reads are missed" inference is
  YOUR OWN ARITHMETIC (100 - 94.38) and must be labelled as such, and it carries no stated
  uncertainty because the source's recall is reported without one in anything I read.
- **"says nothing about WHICH ones": CONVERT TO A PROMOTION CONDITION.** Condition: open
  ReadBouncer's Suppl. Mat. Table S5 (and Table 1's cells) and confirm the metrics are not broken
  down by read or target class beyond the read-accuracy sweep. Until then the entry is asserting a
  negative about an unread table that its own source describes as carrying recall across accuracy
  levels. This is the entry's most exposed sentence.
- **"its single use of the word 'bias' is about its playback design": HOLDS** over the main text,
  with the sentence restored whole and the clause labelled as *denying* an expected comparison
  artefact, not measuring a bias. Add "in the main text" - the supplement is unopened.
- **"Suppl. Table S5 COULD NOT READ at the route tried": HOLDS and is reaffirmed.** Still COULD NOT
  READ after this check, by a different (unattempted) route set. Keep it strictly distinct from
  NOT FOUND: the table exists and the main text says what it carries.
- **Limb (2), the quotation and the uses: HOLDS, with the opener restored.** Carry the sentence as
  "To visualize coverage over specific targets, reads were divided into those actively sequenced
  and those unblocked using the unblocked read IDs file generated by readfish." Mark "low-pass
  background" as the entry's gloss.
- **Limb (2), "does explicitly no SNV calling": STRIKE AND REPLACE.** No such explicit statement
  exists. Replace with: *reports no SNV/SNP calling results; the only variant calling performed is
  structural, with cuteSV; the depth objection is scoped to three samples on a MinION flow cell;
  and the paper announces PromethION depth as sufficient for further SNP analysis.* As worded the
  entry overstates the paper in the direction that favours the entry, which is the kind of error
  this ledger should catch in itself.
- **The candidate's correctability limb - "the rejection log exists and has never been used as a
  propensity record": NOT PUBLISHED by either of these two papers**, which is the answer the entry
  needed. But the universal is **unenumerated**: it is true over ReadBouncer's main text and
  Munro's full accepted manuscript, and untested over both supplements, over Munro's undefined
  "Fold enrichment", and over every other adaptive-sampling paper. The entry should say "we opened
  two" and name them, not "never". A second promotion condition: define Munro's fold enrichment.
