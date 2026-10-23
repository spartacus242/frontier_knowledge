# VERIFY - UQ-20261023-04 leg L3: the methylation-limb neighbour prints an agreement correlation, not a signed adaptive-sampling bias
Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Leg L3 of UQ-20261023-04, which the entry says the verdict stands on as a found fact rather than an unopened lead:

1. bioRxiv 2023.12.10.571037 is a nearer published neighbour on the METHYLATION limb than any of the record's three priors, on a limb where the record's prior list has no neighbour at all;
2. it reports Pearson r = 0.86 against published WGBS;
3. it has NO non-adaptive arm, so it prints an agreement correlation rather than a signed selection bias;
4. it states neither that adaptive sampling biases methylation nor that it does not.

Components 2, 3 and 4 are checkable against the document and were checked. Component 1 is comparative and was NOT checkable here: the record's three priors were not supplied to me and I opened none of them, and my fetch budget went to the named document. Component 1 is COULD NOT CHECK - not a negative finding.

## READ LEVEL

bioRxiv 2023.12.10.571037, "Profiling age and body fluid DNA methylation markers using nanopore adaptive sampling".

- **Body: FULL TEXT**, via `https://www.biorxiv.org/content/10.1101/2023.12.10.571037v1.full` - Introduction, Methods (DNA samples; Quality control; Shearing and size selection; Library preparation and sequencing with adaptive sampling; Data processing and methylation analysis), Results (all five subsections), Discussion, Conclusion, and the Figure 1 / Figure 2 legends as rendered inline. Read through the summariser, whose verbatim cap is ~125 characters, so every quotation below is a short served fragment, not a block I transcribed from a PDF.
- **Front matter / printed byline: COULD NOT READ.** The biorxiv HTML served to the summariser began at the Introduction on both the `v1` landing URL and the `v1.full` URL; title, byline, affiliations, posting date, DOI and Abstract were stripped from what the tool saw. Author names below therefore come from `api.biorxiv.org/details/biorxiv/10.1101/2023.12.10.571037`, which serves them in an initials short form. Per this ledger's own rule - take author names from the front matter, never from a short form someone else wrote - **the given names are unverified**; only the surnames and the printed order should be relied on.
- **Abstract: NOT READ VERBATIM.** Both the landing page and the details API declined to reproduce it; I hold only a paraphrase, which I do not quote or grade on.
- **Supporting information: NOT OPENED.** The body carries a "Supporting information" section; I did not reach it. This bounds sub-claim (c) below.
- **Published journal version: NOT OPENED.** Its existence and DOI are from the bioRxiv API record; I did not fetch the article.

### (a) Front matter as served, and the published version

- Title: "Profiling age and body fluid DNA methylation markers using nanopore adaptive sampling"
- Authors, printed order, as the bioRxiv details API serves them (initials short form, given names unverified): Yuen, Z.; Shanmuganandam, S.; Stanley, M.; Jiang, S.; Hein, N.; Daniel, R.; McNevin, D.; Jack, C.; Eyras, E. - nine authors.
- Corresponding author: Eduardo Eyras, Australian National University.
- Preprint DOI 10.1101/2023.12.10.571037; posted 2023-12-12; version 1; server bioRxiv; category genomics; licence CC BY.
- **Published version: yes.** The bioRxiv record carries `published: 10.1016/j.fsigen.2024.103048` - i.e. Forensic Science International: Genetics (2024). Volume, article/page numbers and the published author byline were not obtained (budget). The entry cites the preprint only.

## WHAT THE SOURCE SAYS (quotations as served)

All strings below were returned by the summariser from the `.full` page. Each is short enough to have come back whole; where I needed the clause on both sides of a cut, I asked for the neighbouring words and they are shown. No string below was completed by inference, and nothing below is assembled from non-consecutive returns.

### (b) The Pearson figure

Printed sentence:

> "A notable consistency between Nanopore and WGBS data was observed with a Pearson's correlation coefficient (r) of 0.86"

- **Printed value: 0.86. CONFIRMED** as a printed number. Note the typography: the paper writes "a Pearson's correlation coefficient (r) of 0.86"; the exact string "r = 0.86" does not appear. The entry's "Pearson r = 0.86" is the right quantity in the wrong notation.
- **What the two things are:** per-CpG methylation calls from the nanopore **adaptive sampling** run, against **published whole genome bisulfite sequencing (WGBS) data from the HG002 sample** - external, previously published data, not a run performed here. So the comparison is cross-platform concordance on one sample, nanopore-vs-bisulfite.
- **Where printed:** the text cites Figure 2 panels e and f for this comparison; the 0.86 sits with Figure 2e.
- **n: NOT PRINTED.** The source does not state the number of CpG sites (or samples) behind the 0.86. Figure 2f carries "1,686 observations per coverage level", but the source does not say that this is the denominator of the 0.86, and I did not treat it as such. Under PUBLISHED IS NOT PERFORMED: the paper **prints** the correlation but **does not print its n**.
- **The 0.86 is the lowest-threshold value, not an unconditioned one.** The same subsection prints:
  > "the r-value increased from 0.86 to 0.89"
  i.e. 0.86 is the value at coverage of at least 1 read and 0.89 at at least 2 reads. Anyone quoting "r = 0.86" is quoting the >=1x stratum.
- Context for the WGBS side's own noise, as served: "Considering that the mean coverage of CpG sites with WGBS was 6.9x..."

**Numerator class and denominator, both directions of overlap.** Numerator class: agreement, across CpG sites, between two *measurement platforms* on the same sample - nanopore modified-base calling under adaptive sampling vs published bisulfite sequencing. Denominator: CpG sites inside the study's target panel that the adaptive-sampling run covered at >=1 read in HG002. What this class MISSES relative to a selection-bias quantity: every CpG outside the target panel (precisely the sites adaptive sampling rejects, where a selection effect would show), and every site at zero coverage. What it INCLUDES that a selection-bias quantity excludes: the whole of the chemistry and basecalling difference between nanopore and bisulfite, plus the sampling noise of a 6.9x WGBS reference. A correlation that is high or low for either of those reasons says nothing signed about enrichment. **A number one word away from the claim's is a different quantity:** this is a concordance coefficient, not a bias.

### (c) Matched non-adaptive arm

**ABSENT in the main text I read.** There is no arm. Statement of absence, with what I checked:

- The string "non-adaptive" does not occur anywhere on the `.full` page.
- The Methods subsection is titled "Library preparation and sequencing with adaptive sampling"; its procedure is a single adaptive-sampling workflow, with re-runs only for yield - as served: runs producing fewer than two million reads "were re-prepared" and run for roughly another 36 hours. There is no second, selection-off run of the same library or sample.
- The methylation baseline is external: the comparison is against "published whole genome bisulfite sequencing (WGBS) data from the HG002 sample". Published external WGBS is not a matched non-adaptive arm: different platform, different chemistry, different laboratory, different coverage.
- The two EpigenDx methylation controls (high control measured mean 93%, low control 4%) are *expectation* controls - known methylation standards - not samples run both with and without adaptive sampling.

Per AN UNENUMERATED UNIVERSAL IS UNVERIFIED: the universal "no non-adaptive arm" is **true over the instances I opened** - Introduction, all Methods subsections, all five Results subsections, Discussion, Conclusion, Figure 1 and Figure 2 legends. It is **unenumerated over the Supporting information**, which I did not open. I have no indication of an arm there; I simply did not look.

### (d) Does it say adaptive sampling does, or does not, bias per-site methylation fraction?

**NEITHER.** The paper makes no such statement in the text I read. The nearest sentence, which must not be mistaken for one, is:

> "For both samples, the four bases around the CpG sites were evenly distributed, ... indicating no sequence biases in methylation predictions with nanopore sequencing"

**What the opening words scope.** The opener "For both samples, the four bases around the CpG sites were evenly distributed" scopes the clause to (i) the two EpigenDx methylation control samples and (ii) **sequence context** - the four bases flanking each CpG. The concluding clause then attributes the absence of bias to "**nanopore sequencing**", the instrument, not to adaptive sampling, the selection. The clause **ASSERTS** the absence of a sequence-composition bias in methylation prediction. It neither asserts nor denies a selection bias in per-site methylation fraction arising from adaptive sampling. Cutting it back to "no sequence biases in methylation predictions" and reading it as "adaptive sampling does not bias methylation" is exactly the misquotation this ledger's rule is about: verbatim, grammatical on both sides, and wrong, because the dropped opener scopes it to flanking-base composition and the dropped subject names the wrong cause.

Two further near-misses, each scoped to something other than selection:

> "for methylation calls only covered by one single read, we observed that the methylation level remained nearly unchanged"

- opener scopes to **coverage depth** (single-read sites), asserting stability against depth, not against enrichment.

> "The overall methylation levels observed were consistent with the expected methylation level from each control sample"

- opener scopes to the **EpigenDx controls' expected values**, asserting agreement with a known standard.

And the hedged, cited formulation of the accuracy claim, which is the one to quote in preference to the bare ones:

> "These results are consistent with our previous study indicating that nanopore technology can reliably detect methylation"

- opener scopes the reliability claim to **nanopore technology** and leans it on the authors' prior work. Again: instrument, not selection.

Searched and absent from every section: "unbiased", "underestimat", "overestimat", "concordan", "agreement". The Discussion and Conclusion contain none of the bias-family terms at all.

### (e) Use of the rejection log

**YES, but only for a read-length sanity check - never for methylation and never for a bias estimate.** As served:

- Figure 1a legend, median read length by MinKNOW decision: "471 nt for rejected reads (pink)"
- Results, enrichment subsection: "In contrast, rejected reads exhibited a sharp and narrow peak around 500 bases"
- "This demonstrated the successful rejection of DNA fragments outside the target regions"

So the rejected-read decision data is used to show that rejection truncated off-target fragments as intended. Note the small internal slack: the legend prints a median of **471 nt** while the prose says "around 500 bases". Separately, the paper prints "a median 6-fold enrichment in coverage within target regions compared to the off-target regions"; the source does **not** state whether rejected reads enter that calculation, so I cannot attribute the enrichment figure to the rejection log either way.

### (f) One sentence

**Agreement correlation.** The 0.86 is a cross-platform concordance coefficient between adaptive-sampling nanopore methylation calls and published external WGBS on HG002 at >=1x coverage; the paper prints no signed per-site methylation bias, and with no non-adaptive arm it is not in a position to.

## REGIME

The source's regime, in its own words and its own units:

- **What it calls itself:** a pilot. It tests whether nanopore adaptive sampling can profile age-associated and body-fluid-specific DNA methylation markers in one assay without special DNA preparation or chemical treatment, and says further validation is needed.
- **Population / samples:** two EpigenDx methylation control DNAs (a high control, above 85% methylation, measured mean 93%; a low control, below 5%, measured mean 4%); ten blood donors; HG002 for the WGBS comparison.
- **Unit of analysis:** the CpG site - per-site methylation percentage. For the age analysis, each site tested by simple linear regression against age, sex-chromosome sites excluded, Stouffer's unweighted method combining p-values across sites at a meta p-value threshold of 0.00001. Nine CpG sites for the body-fluid analysis.
- **Operating condition:** adaptive sampling (selective sequencing) against a target panel covering forensic STR/SNP loci, age-associated genes, body-fluid genes and rDNA repeats; alignment to a modified hg38 carrying extra rDNA copies.
- **Instrument:** MinION, R9.4.1 flow cells, ligation-based libraries, MinKNOW adaptive sampling decisions.
- **Thresholds that matter to L3:** the correlation is stratified by coverage (>=1 read gives 0.86, >=2 reads gives 0.89); the WGBS reference itself averaged 6.9x.

**Does the claim sit inside this regime?** Components 2, 3 and 4 of L3 sit squarely inside it - they are statements about what this paper measures and what it says, and that is what I graded. The regime is forensic marker profiling on R9.4.1 MinION with a forensic panel; it is silent on any other panel, chemistry or platform. In particular, nothing here is a measurement of how adaptive sampling perturbs methylation fraction, because the design has no condition in which selection is off.

## DEFECTS FOUND

1. **The citation is incomplete: this paper is published, not merely a preprint.** The bioRxiv record carries a published DOI, 10.1016/j.fsigen.2024.103048 (Forensic Science International: Genetics, 2024). The entry carries the preprint only. The entry must add the published version. Note which direction this cuts: it makes the neighbour *stronger*, peer-reviewed rather than a preprint, which strengthens L3's "nearer published neighbour" wording while making the entry's own citation wrong. Volume and pages were not obtained and remain to be filled.
2. **"r = 0.86" is the paper's quantity in the wrong notation and without its stratum.** The paper writes "a Pearson's correlation coefficient (r) of 0.86", and 0.86 is specifically the >=1-read stratum, rising to 0.89 at >=2 reads. An entry that quotes a bare 0.86 should say "at coverage of at least one read".
3. **The entry's "against published WGBS" needs the sample named.** It is published WGBS of **HG002**, a cross-platform comparison on one sample, with the WGBS side at 6.9x mean coverage. "Against published WGBS" is true but reads as a broader benchmark than it is.
4. **n is not printed for the 0.86.** Anyone who later cites it should not borrow Figure 2f's "1,686 observations per coverage level" as the denominator; the paper does not say that it is.
5. **The "no non-adaptive arm" universal is unenumerated over the Supporting information.** True over the whole main text, figures and Methods; the supplement was not opened.
6. **Component 1 of L3 - the comparative "nearer neighbour than any of the record's three priors" - was not tested here** and is marked COULD NOT CHECK. I was shown neither the three priors nor the limb's prior list, and opened none of them. Per DO NOT NOMINATE AN UNOPENED SOURCE: settling component 1 requires opening the three priors and asking of each whether it reports a per-CpG methylation measurement under adaptive sampling; I am not naming any document as that settler, because I have opened none of them. That is a gap in this check, not a finding against the leg.
7. **One cosmetic slack inside the source,** recorded so a later reader is not confused: Figure 1a prints a 471 nt median for rejected reads while the prose says "around 500 bases".

No defect was found in components 3 or 4 of L3. The entry's characterisation of what the paper does and does not say about adaptive-sampling bias is accurate, and accurate in the specific way that matters: the paper's one "no ... bias" sentence is about flanking-base sequence context and is attributed to nanopore sequencing, not to adaptive sampling.

## ROUTES THAT FAILED

- `https://www.biorxiv.org/content/10.1101/2023.12.10.571037v1` (landing page) via WebFetch: served body text beginning at the Introduction; title, byline, affiliations, posting date, DOI, published-version note and Abstract were all absent from what the tool saw. Front matter could not be read this way.
- `https://www.biorxiv.org/content/10.1101/2023.12.10.571037v1.full` via WebFetch: same header stripping - the page as served starts at the Introduction. Body text itself came through complete.
- `https://api.biorxiv.org/details/biorxiv/10.1101/2023.12.10.571037`: returned the metadata fields (title, author short-form list, dates, DOI, published DOI) but **declined to reproduce the abstract verbatim**, so the abstract remains unread.
- The summariser's ~125-character verbatim cap prevented quoting either Methods subsection or the methylation Results subsection as a block; everything above is a short served fragment with its neighbouring words requested explicitly.
- Not attempted, for budget: Crossref (`api.crossref.org/works/10.1016/j.fsigen.2024.103048`) for the published byline with full given names, volume and pages; the journal article itself; the Supporting information. These are the three open routes a follow-up should take, in that order. PMC and Europe PMC are hard-blocked here and were not tried.

## BEARING ON THE LEDGER ENTRY

**L3 holds as stated on the components that can be tested from the document - narrowed on wording, and with its citation corrected.**

- Component 3 **CONFIRMED**: there is no matched non-adaptive arm. The baseline is external published WGBS on HG002; the methylation controls are known-value standards; no sample is sequenced both with and without adaptive sampling anywhere in the main text. So the paper is structurally incapable of printing a signed selection bias, and it prints an agreement correlation instead. The entry's reasoning here is sound, not merely its conclusion.
- Component 4 **CONFIRMED**: the paper states neither that adaptive sampling biases per-site methylation nor that it does not. Its one bias sentence is scoped by its opener to flanking-base sequence composition in the two control samples and credited to nanopore sequencing, not to selection.
- Component 2 **CONFIRMED with corrections**: the printed figure is "a Pearson's correlation coefficient (r) of 0.86", comparing per-CpG nanopore adaptive-sampling methylation calls against published WGBS of HG002, at Figure 2e, at coverage >=1 read, rising to 0.89 at >=2 reads, with **no n printed**.
- Component 1 **COULD NOT CHECK**. The leg's comparative clause - nearer than any of the three priors, on a limb the prior list leaves empty - was not tested, because the priors were not opened. The entry should not read this check as having ratified that clause.

**So the methylation limb is not occupied by this paper**, on the two grounds the entry's "why it matters" names: the paper has no matched non-adaptive arm, and it prints no signed methylation bias. The thing that would have knocked the entry down is absent. The leg does what the entry asks of it, subject to component 1 remaining open.

**What the entry should change.** Add the published version to the citation - Forensic Science International: Genetics, DOI 10.1016/j.fsigen.2024.103048 (2024) - and stop citing the preprint alone; this neighbour is peer-reviewed. Qualify the correlation as "r of 0.86 against published WGBS of HG002, at coverage of at least one read (0.89 at >=2), n not printed". Mark the no-non-adaptive-arm finding as enumerated over the main text and open over the Supporting information. And keep the comparative clause flagged as untested until the three priors are opened.

**Net: HOLD, with the citation corrected and the correlation qualified.** Nothing found here moves the entry off Provisional, and nothing found here raises it either.
