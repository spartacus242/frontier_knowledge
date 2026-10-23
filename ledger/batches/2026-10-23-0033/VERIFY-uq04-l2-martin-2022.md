# VERIFY - Martin et al. 2022 Genome Biology 23:11 is READABLE and is an enrichment benchmark, not a per-estimand bias benchmark
Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Leg L2 of UQ-20261023-04: that a major adaptive-sampling benchmark is wholly ABSENT from the
record's prior list, was returned to all three adversaries, and was opened by nobody - and that
it was COULD NOT READ at adversary 1's biomedcentral track/pdf route, which 302'd to
link.springer.com with the fetch cap reached.

Source as the entry carries it: Martin S. et al. (2022), 'Nanopore adaptive sampling: a tool for
enrichment of low abundance species in metagenomic samples', Genome Biology 23:11,
DOI 10.1186/s13059-021-02582-x.

L2 is a conjunction of four things. Two are facts about the DOCUMENT (its read status; what it
contains) and two are facts about the BATCH'S OWN RECORD (absence from the prior list; opened by
nobody). I can settle the first two. I was not shown the prior list or the adversary transcripts,
so the second two I mark COULD NOT CHECK and treat as unenumerated - see DEFECTS FOUND.

## READ LEVEL

**FULL TEXT.** Route that worked: `https://link.springer.com/content/pdf/10.1186/s13059-021-02582-x.pdf`,
read three times (front matter + Methods + Results, then quotation segments, then table/figure
locations). Front matter and the abstract were then confirmed a second, independent way through
the article HTML landing page.

The entry's premise about the 302 is CORRECT as a description of the host behaviour and WRONG as a
verdict on readability. `https://genomebiology.biomedcentral.com/articles/10.1186/s13059-021-02582-x`
does return `302 Found` to
`https://link.springer.com/article/10.1186/s13059-021-02582-x?code=...&error=cookies_not_supported`.
That redirect is followable in one further call and serves the abstract and front matter. The
PDF route needs no redirect at all. So the document cost me one fetch to open, not a cap.

**COULD NOT READ is therefore reversed for this source.** Nothing about this paper is
abstract-level here.

### (a) Front matter - confirmed, with two corrections to flag

Confirmed exactly as the entry carries them: year **2022**; title *'Nanopore adaptive sampling: a
tool for enrichment of low abundance species in metagenomic samples'*; journal **Genome Biology**;
volume **23**; article number **11**; DOI **10.1186/s13059-021-02582-x**. Published 24 January 2022.

Author line from the PDF front matter, verbatim:

> "Samuel Martin1†, Darren Heavens1†, Yuxuan Lan1, Samuel Horsfield1, Matthew D. Clark2 and Richard M. Leggett1*"

Two notes rather than corrections:
1. The dagger sits on **both** Martin and Heavens - these are joint first authors. "Martin S. et al."
   is a defensible short form but it conceals a shared first authorship.
2. The entry's citation is otherwise clean. No front-matter defect found.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below are as the summariser served them, in ordered consecutive segments where
longer than ~125 characters. Where I assembled fragments I say so and say how many.

### (b) Matched non-adaptive control - YES, but matched by library, not always concurrent

Methods/Results sentence on controls, with its opening words:

> "For each library, we performed a control run in which we sequenced for approximately 1 h"

Opening words scope: **"For each library"** - this ASSERTS that a control exists per library. The
clause asserts the quantity (a control run), it does not deny it or record a move away from it.

For the mock-community runs the baseline came from an unenriched first hour:

> "runs were set up with no enrichment for the first hour to ascertain their baseline composition."

Concurrent same-flow-cell controls exist for two libraries only:

> "For the 10.6kbp and 16.4kbp runs, pores 1 to 256 were chosen to enrich and pores 257 to 512 were chosen for controls."

Opening words scope: **"For the 10.6kbp and 16.4kbp runs"** - this is a SCOPED assertion. It does
not generalise, and the paper says so explicitly:

> "for all other runs, we did not maintain control pores after the initial control run."

That last clause RECORDS A MOVE AWAY from concurrent control. So: the answer to (b) is yes, there
is a matched non-adaptive control on the same library - but for most runs it is a *temporally*
matched control (the first hour, or a separate ~1 h run), not a *channel-split concurrent* control.
Only the 10.6 kbp and 16.4 kbp runs have the split-flow-cell design, confirmed in Results:
"For both of these runs, we maintained half the pores as control pores throughout".

### (c) Estimands reported - NONE of the candidate's four

What is printed, with locations:

- **Enrichment by composition and by yield.** Abstract: "Enrichment is up to 13.87-fold for the
  least abundant species in the longest read length library;" / "factoring in reduced yields from
  rejecting molecules the calculated efficiency raises this to 4.93-fold." (2 consecutive segments;
  reconstruction of one abstract sentence.) Results: "Highest enrichment of 4.93x was found for
  P. aeruginosa in the 10.6 kbp low to high run." Units: fold, dimensionless ratio of enriched to
  control. Per-run enrichment for the mock runs is in **Figures 1c, 2a and 3d**, not a table;
  **Table 8** tabulates it for the compost *Hydrogenophaga* runs only, with columns "Enriched for
  sequence / Control reads >1kb / Enriched reads >1kb / Control bp / Enriched bp / Enrichment by
  yield / Normalised enrichment by yield / Enrichment by composition".
- **Read length.** **Table 2**, columns "Library, Control run reads, Median, Mean, N50".
- **Assembly metrics** for *S. dysgalactiae*: **Table 4** - contig number, total length, N50,
  aligned bases to reference, assembly time.
- **Genome coverage** percent per *E. coli* strain: **Table 6**.
- **False-negative (ejection) rate**, pore/channel counts, time between target reads.
- **Model fit**: RMSD (**Table 3**) and Pearson's r.

**Not printed anywhere in this paper:** allele balance or heterozygote recovery; SV or
large-insertion recall; repeat-length distributions; per-site methylation fraction. Methylation
appears only as a generic nanopore capability, not as a measured quantity. On the discipline's
test: for all four of the candidate's estimands this paper does not even DEFINE, BOUND or PREDICT
them - it is silent on them.

**The near-miss that must not be mistaken for a hit.** Table 2 prints an **N50** and Table 4 prints
an assembly **N50**, and the candidate's third estimand is **repeat-length distributions**. These
are one word apart and are different quantities. Numerator class of Table 2's N50: sequenced-read
lengths from a control run, in base pairs, over whole reads, excluding nothing by sequence content.
Denominator: the control run's read set for that library ("Control run reads" is its own column).
Numerator class of a repeat-length distribution: the called copy number or span of a specific
tandem-repeat locus, per allele. Overlap in both directions: the paper's N50 **misses** everything
the candidate's estimand is about - it is not locus-resolved, not allele-resolved, and carries no
repeat annotation; and it **includes** what the candidate's estimand excludes - every non-repeat
read in the library, and read-length variation caused by library fragmentation rather than by
genomic repeat content. Table 4's assembly N50 is a contig statistic, further still from a repeat
length. Neither is the candidate's quantity.

### (d) Signed bias from the ejection decision - a signed SELECTION effect on read quality, no signed bias in any estimand

The paper does quantify a directional consequence of ejection, and it is on read properties, not
on any downstream estimand.

Rate of wrongly ejected targets (Results, section "Reducing false negative identifications and
associated pore ejections would significantly increase enrichment by yield"; the figure is
**Fig. 4b**, "Proportion of target reads rejected during adaptive sampling"; the numbers are in the
body text, not a table):

> "approximately 36% (lowest 24.6%, highest 48.5%) of target molecules were being" / "ejected from the pore."

(2 consecutive segments; reconstruction of one sentence.) Opening words scope: **"By parsing the
logs provided by the GridION"** - the clause ASSERTS the quantity and attributes it to the decision
log. Denominator: target molecules during adaptive sampling, pooled across runs, with a per-run
lowest and highest. Per the discipline's rule on hedged-versus-bare: the Discussion restates this
bare and rounded - "Our analysis showed that around 40% of on-target reads were falsely rejected."
The Results form with its 24.6-48.5% range is the formulation to carry; note also that the two
restatements use different numerator classes, *target molecules* and *on-target reads*.

Signed comparison of ejected versus retained targets (**Fig. 4c** quality, **Fig. 4d** identity of
the first 200 bp of mappings):

> "This shows that the average quality of TPs was higher than the average quality of FNs for each run."

Opening words scope: **"This shows that"** - points back to Fig. 4c; ASSERTS the direction.

> "We found that the TPs had a higher average identity than the FNs, although in this case the TPs"

Opening words scope: **"We found that the TPs"**, and the sentence is HEDGED by "although in this
case" before an exception about the 1.7 kbp run. I do not complete the clause past the cut: the
served continuation reads "for the 1.7kbp run had a lower identity than the FPs from the 12.8kbp
run", where "FPs" is almost certainly a typo for FNs. The direction is asserted with a named
exception; I report it as asserted-with-exception, not as clean.

Where the wrongly ejected reads map (**Fig. 4e**, coverage of target genomes by false-negative
reads in the 12.8 kbp run):

> "and shows no obvious clustering."

Opening words scope: **"A heatmap showing the coverage of each genome by the FN reads"** - the
clause DENIES a positional pattern. This is the paper's only statement bearing on whether ejection
is positionally non-uniform across a genome, and it is a negative eyeball result on one run, with
no test statistic and no stated uncertainty.

On downstream bias as such, the paper is silent. The closest caveat is about off-target enrichment,
not about bias in a measurement:

> "Targeting a specific strain also enriched the 4 other strains and, depending on the application," / "this could be a beneficial or detrimental attribute."

(2 consecutive segments.) Opening words scope: **"Targeting a specific strain"** - the clause
records a side effect and declines to sign it ("beneficial or detrimental").

### (e) The unblocked-read log as a record of the decisions - YES

Methods, "Bioinformatic analysis of mock communities", 3 consecutive segments, assembled:

> "the script RU_decision_stats.py was used to parse the adaptive sampling logs created by MinKNOW for each experiment." / "This script determines the signal sent to the pore for each read and uses these to split the read set" / "into reads that have been ejected from the pore (“unblocked”) and those that were sequenced."

(Reconstruction from 3 fragments, verified at both junctions.) The paper does not use the filename
`unblocked_read_ids.txt`; it uses the MinKNOW adaptive-sampling decision log and derives the
unblocked/sequenced split from the per-read signal. Functionally this is the decision record, and
it is what the 36% figure is computed from.

### (f) One sentence

This is a benchmark of **enrichment** - of composition and yield, with a false-negative-ejection
accounting - and not in any part a benchmark of bias in allele balance, SV recall, repeat lengths
or methylation.

## REGIME

In the paper's own terms. Unit of analysis: the sequencing **run** / library, and within it the
**read**; not the variant site, not the locus, not the CpG. Population: a **synthetic mock
metagenomic community** of bacterial species at designed relative abundances, plus one complex real
sample (**compost**, targeting *Hydrogenophaga*), plus multiple *E. coli* strains for the
cross-strain coverage table. Instrument: ONT **GridION**, MinKNOW's own adaptive-sampling
implementation (Readfish-era ONT software), libraries at designed fragment lengths 1.7, 10.6, 12.8,
16.4 kbp. Operating condition: enrichment of a **low-abundance species against a reference**, with
rejection decisions made on the first ~200 bp of signal. Thresholds: reads >1 kb for the yield
tables; identity assessed on the first 200 bp of mappings.

Does the claim sit inside this regime? For the entry's question "does it print per-estimand
comparisons against matched non-adaptive controls - allele balance, SV recall, repeat lengths or
methylation" - **no, and the regime makes it structurally impossible.** A mock bacterial community
with one haploid reference per species has no heterozygotes, so allele balance and heterozygote
recovery are undefined in it. The unit of analysis is the run, so a per-site or per-locus estimand
has no place to be reported. The paper is not a weak or partial answer to the candidate's question;
it is silent outside its assumptions, and a metagenomic enrichment regime is outside a diploid
variant-calling regime.

## DEFECTS FOUND

1. **The COULD NOT READ is wrong and should be struck.** The document opens FULL TEXT at
   `link.springer.com/content/pdf/10.1186/s13059-021-02582-x.pdf` in one fetch, no redirect. The
   BMC article HTML does 302 to link.springer.com as the entry says, but that redirect is
   followable in one further call and serves the front matter and abstract. The entry's own
   citation already names the working route, so the leg records a budget exhaustion as if it were a
   property of the source.

2. **"Opened by nobody" and "returned to all three adversaries" - COULD NOT CHECK, and they are
   unenumerated as stated.** These are claims about the batch's record, not about the paper, and I
   was shown neither the prior list nor the adversary transcripts. Per the rule on universals: of
   the instances I opened (one: this paper), I can say only that it is openable. I name what I did
   not open: the record's prior list, and the three adversary transcripts. The claim "opened by
   nobody" is therefore **unenumerated** from my position - neither verified nor falsified - and the
   entry must not carry it as established. Note the asymmetry it creates: a leg that asserts nobody
   opened a document is cheap to assert and is falsified the moment one person opens it, which is
   what makes an unopened-source universal the batch's recurring failure mode.

3. **"Wholly ABSENT from the record's prior list" - COULD NOT CHECK** (prior list not shown). But
   the substantive consequence can be resolved without it, which is the useful finding: this paper
   being absent or present changes the entry's novelty verdict **not at all on the candidate's four
   estimands**, because the paper reports none of them. The entry's own conditional resolves to its
   second branch: "If it benchmarks enrichment and throughput only, the entry's Medium survives but
   its prior list still needs correcting." That is the branch the document puts us on.

4. **A real finding the entry's framing would have missed.** The paper does print a signed selection
   effect of the ejection decision - retained on-target reads have higher quality (Fig. 4c) and
   higher first-200-bp identity (Fig. 4d) than wrongly ejected ones, with ~36% of target molecules
   ejected (24.6-48.5% across runs). That is a quality-composition shift in the retained read set
   caused by the decision rule. It is not any of the candidate's four estimands, but it is the
   nearest published signed consequence of ejection, and the entry's prior list should cite it for
   that rather than for the estimands it does not contain.

5. **A paper-internal oddity worth recording, since the entry may quote the abstract.** The abstract
   reads "Enrichment is up to 13.87-fold ... the calculated efficiency **raises** this to
   4.93-fold." 4.93 is lower than 13.87, so "raises" is backwards; and 13.87 does not recur in the
   Results text, whereas 4.93x does ("Highest enrichment of 4.93x was found for P. aeruginosa in the
   10.6 kbp low to high run"). I verified "raises" at two independent routes (PDF and the article
   landing page), so this is the published wording and not a summariser artefact. Anyone quoting the
   headline number should quote 4.93x from the Results, not 13.87 from the abstract.

6. **No defect in the entry's citation front matter.** Authors, year, title, journal, volume, article
   number and DOI all check out. The only nuance is the joint first authorship of Martin and Heavens,
   which "Martin S. et al." hides.

## ROUTES THAT FAILED

- `https://genomebiology.biomedcentral.com/articles/10.1186/s13059-021-02582-x` - **302 Found** to
  `https://link.springer.com/article/10.1186/s13059-021-02582-x?code=...&error=cookies_not_supported`.
  Not a failure: following it once served the abstract and citation block.
- The Springer article landing page truncates the author list with an ellipsis
  ("Matthew D. Clark & ... Richard M. Leggett"), so the full author line must be taken from the
  **PDF** front matter, not the HTML. I took it from the PDF.
- Nothing else failed. No search was needed; the citation located the document directly. 0 of 2
  searches used, 5 of 6 fetches used.

## BEARING ON THE LEDGER ENTRY

**Strike the COULD NOT READ on L2 and replace it with FULL TEXT.** The source is readable here in
one fetch at the route the entry itself names. A read-level verdict that reports a budget cap as a
property of the document should not survive into the entry.

**Narrow L2 to the one conjunct that the document settles, and demote the rest.** What the document
settles: Martin et al. 2022 is a benchmark of **enrichment of a low-abundance species in a
metagenome**, with matched non-adaptive controls (per-library ~1 h control runs; concurrent control
pores 257-512 for the 10.6 and 16.4 kbp runs only), reporting enrichment by composition and by
yield, read-length N50 (Table 2), assembly metrics (Table 4), per-strain coverage (Table 6), and a
~36% false-negative ejection rate (Fig. 4b). It reports **none** of allele balance, heterozygote
recovery, SV or large-insertion recall, repeat-length distributions, or per-site methylation
fraction - and its mock-community, run-level, haploid-reference regime leaves the first of those
undefined.

**Therefore the entry's Medium holds on novelty.** Per the entry's own stated conditional, this is
the "enrichment and throughput only" branch: the candidate's novelty on per-estimand bias against
matched non-adaptive controls is **not** anticipated by this paper. Do not let a title match on
"nanopore adaptive sampling" do the work of a content match on the estimands.

**But correct the prior list, and correct the reason.** Add Martin et al. 2022 as prior art for
*enrichment benchmarking with matched non-adaptive controls* and for the *signed read-quality
selection effect of ejection* (Fig. 4c-d, with the ~36% / 24.6-48.5% ejection rate), not as prior
art for the candidate's estimands. Fig. 4e's "no obvious clustering" of false-negative reads is the
closest thing to a positional-bias check in the literature the entry has named, and it is an
eyeball result on one run with no test statistic - which is itself an argument that the candidate's
question is open rather than answered.

**Convert the two record-level conjuncts into promotion conditions, not findings.** "Absent from the
prior list" and "opened by nobody" cannot be graded from the documents and must not be carried as
established. Promotion condition: before L2 asserts either, someone must (i) paste the prior list so
absence can be checked against it, and (ii) enumerate which adversaries were served this DOI and
what each returned. Until then both read "unenumerated", and the leg's weight rests only on the
content finding above - which, on its own, is enough to correct the prior list and to leave the
Medium standing.
