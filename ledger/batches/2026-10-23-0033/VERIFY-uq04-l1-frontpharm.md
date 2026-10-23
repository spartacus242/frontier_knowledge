# VERIFY - UQ-20261023-04 leg L1: Deserranno et al. 2023 (Front. Pharmacol. 14:1286764) is on-subject for HAPLOTYPE recovery but prints no allele-balance quantity and has NO matched non-adaptive arm
Checker: fresh context. Budget used: 3 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Leg L1 of UQ-20261023-04's own strongest objection, as the entry carries it (entry line 42):

> "L1: Front. Pharmacol. 2023 (10.3389/fphar.2023.1286764), on-subject for allele and haplotype recovery under adaptive sampling, returned by the record's query 5 AND independently by adversary 1 - two sweeps, one document - and opened by nobody."

Three sub-assertions, graded separately below: (i) the document exists and is on-subject for ALLELE recovery; (ii) it is on-subject for HAPLOTYPE recovery; (iii) the procedural claim - two sweeps, one document, opened by nobody.

Verdict in one line: **(ii) holds and is stronger than the entry admits; (i) fails; (iii) holds and is enumerated.** The paper does not threaten the candidate's first estimand, because it has no matched non-adaptive arm and prints no signed bias - but the entry's stated REASON for setting it aside is wrong, and that is a separate defect.

## READ LEVEL

**FULL TEXT, HTML as served, summariser-mediated**, via https://www.frontiersin.org/articles/10.3389/fphar.2023.1286764/full - three passes (front matter + methods + metric inventory; then numbers and short verbatim fragments; then section structure and the phasing/rejection paragraphs).

Read level is **PARTIAL in two specific places, and I will not grade on either**:

1. **Figure 1 is an IMAGE and I could not read its values.** Its caption came through; the per-gene percentages plotted inside it did not. Everything below about "the numbers in Figure 1" is a statement about the caption and about what the text says the figure contains, never about a value I read.
2. **The summariser refused full reproduction of Sections 3.2, 4.2 and 4.4** ("I can't reproduce those sections in full, even split into fragments, because that would effectively copy the article's text"). I therefore have those sections' *content* via summary plus the short verbatim fragments quoted below, and NOT as continuous text. No quotation below is a reconstruction across fragments; each is a single returned fragment under the ~125-character cap. Where I only have summary, I say "summary, not quotation".

The **abstract was also refused verbatim** at the 125-character cap; the two abstract figures I carry (99.35% / 99.84%) came through as reported numbers, not as a quoted sentence.

**Front matter, from the article page (sub-claim (a)):**

- Authors, printed order: **Koen Deserranno, Laurentijn Tilleman, Kaat Rubben, Dieter Deforce, Filip Van Nieuwerburgh** (last author marked corresponding).
- Title: **"Targeted haplotyping in pharmacogenomics using Oxford Nanopore Technologies' adaptive sampling"**
- **Frontiers in Pharmacology**, Sec. Pharmacogenetics and Pharmacogenomics, **2023**, **volume 14**, **article 1286764**. Published 13 November 2023. DOI 10.3389/fphar.2023.1286764.

This is one document, not two: the record (line 94) carries **PMC10679755** alongside the DOI and correctly flags it as an identifier and not a route. I did not convert or fetch it; PMC is hard-blocked here and nothing turned on it. One DOI, one PMCID, one paper.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) What it measures, on what unit, with what comparator

Unit of analysis: **a variant site within a targeted pharmacogene, within one reference sample**. Panel: 1,036 pharmacogenes drawn from PharmGKB. Samples: five GIAB reference materials - HG001 alone on an R9.4.1 flow cell (SQK-LSK110); HG002 + HG005 barcoded and pooled on an R10.4.1 flow cell (SQK-NBD114.24); HG001 + HG01190 + NA19785 pooled on a second R10.4.1 flow cell.

**IS THERE A NON-ADAPTIVE ARM ON THE SAME SAMPLES? NO.** This is the load-bearing negative and I want to be exact about what kind of negative it is. I read the Materials and methods section structure in full - **2.1 Target gene selection and .bed file construction; 2.2 DNA sample collection and QC; 2.3 Library preparation; 2.4 Data analysis pipeline** - and there is no subsection describing a control run, and no sentence anywhere in the served text stating that a non-adaptive, control or whole-genome run was performed on these samples. This is NOT "the paper says it did not do one"; it is "the paper never describes one, across a methods section whose four subsections I enumerated." A reader should treat that as the paper's silence plus a complete heading list, which is as close to a methods-level negative as a served HTML read gets.

**The methods sentence the sub-claim asks me to quote**, Section 2.4, as served (two consecutive fragments, each returned separately, NOT assembled into one sentence by me):

> "Only the reads positively selected by the adaptive sampling (AS) software were used in downstream analysis"

> "to avoid using short reads of the rejected strands that often do not map uniquely."

**Scope-setting check on this quotation, both sides of the cut.** The opening word is "Only", which SCOPES the clause restrictively: it asserts a *restriction on the analysed set*, and the trailing clause ("to avoid using short reads of the rejected strands...") gives the authors' *reason* for the restriction. The clause therefore **ASSERTS that the rejected stratum was discarded**. It does not deny a bias and it does not record a move away from one - the possibility is simply never raised. For UQ-04 this is the methodologically interesting line in the paper: the one arm that could expose a selection-induced allele effect is thrown away by design, on a mappability rationale, with no estimate of what discarding it costs.

**What the comparator actually is.** Not an arm - a **truth set**. Variant calls are scored against GIAB truth: Krusche et al. for HG001, GIAB v4.2.1 for HG002 and HG005, plus the CMRG benchmark for 32 genes. Star alleles are scored against **GeT-RM** consensus calls. Phasing is scored against "their respective truth sets". The only place a non-adaptive dataset appears at all is as **literature**, not as an arm: the paper compares to "recent whole genome sequencing results reported by Byrska-Bishop et al." - published WGS from another study, on other data, not a matched arm the authors ran.

The one thing called a "baseline" in the paper is **not** a non-AS baseline. Section 3.1 uses the R9.4.1 run "to establish the baseline performance of AS on the PGx panel" - i.e. an adaptive-sampling baseline against which the later R10.4.1 multiplexed runs are read. A checker skimming for the word "baseline" would misread this; naming it here so nobody does.

### (c) Allele balance, reference-allele fraction, heterozygote recovery, haplotype phasing accuracy

Taken one at a time, because they do not share an answer.

**Allele balance: NOT PRINTED.** No allele-balance figure appears anywhere in the served text.

**Reference-allele fraction: NOT PRINTED.** No per-site or aggregate reference-allele fraction appears anywhere in the served text.

**Heterozygote recovery: NOT MEASURED BY THIS PAPER, and the one number that looks like it is somebody else's.** The numbers that would tempt a reader are in Discussion 4.1:

> "6 X and 8 X coverage suffices to recall 98% and 90% of the homozygous and heterozygous variants"

This is **the HEDGED, CITED formulation and it is an external claim**, carried into the Discussion to justify the paper's own coverage targets. It is not a measurement of these samples. Anyone quoting "90% of heterozygous variants" from this paper would be attributing another group's number to Deserranno et al. Numerator class and denominator are not stated in the served text in a way I can check, which is itself a reason not to carry it.

**Haplotype phasing accuracy: PRINTED - but in a figure I could not read, and never as an aggregate.** Phasing method, Section 2.4, verbatim:

> "Variants were phased using WhatsHap version 2.0 with options --include-homozygous --indels --distrust-genotypes."

Figure 1 caption, three consecutive returned fragments (quoted separately, not assembled):

> "Percentage of variants that were correctly phased compared to their respective truth sets."

> "For figure clarity, the percentages are only shown for 47 Very Important Pharmacogenes (VIPs)"

> "for which reference phasing information was available."

So the quantity the sub-claim asks about **is published**, as a **per-gene percentage, per sample, plotted in Figure 1**. Discharging PUBLISHED-IS-NOT-PERFORMED honestly: I can name **where** it is printed (Figure 1) and I can name its **numerator class and denominator from the caption** - numerator, variants correctly phased against that sample's reference phasing; denominator, the reference-phased variants of that gene in that sample, restricted to the 47 VIPs with reference phasing available. I **cannot name a single value**, because they live in the figure image. That is a limit of my read and I am not converting it into a claim about the paper.

**No overall or average phasing percentage is printed anywhere in the text.** I asked for one explicitly and the answer was that none exists; the text gives only gene-level counts. The counts that did come through, Section 4.2:

> "the CFTR gene in the HG001 reference encompasses 39 phased variants"

> "the HG002 reference encompasses 280 phased variants for the same gene"

> "1 variant out of the 3 considered reference variants was correctly phased in our HG001 data"

> "1 variant out of the 1 considered reference variant correctly phased in our HG002 data"

(the last two are CYP2A6). **Denominator warning, checked against near neighbours:** "3 considered reference variants" is a count of *reference-phased variants in that gene in that sample* - it is NOT the gene's variant count, NOT the sample's het count, and NOT a per-sample phasing denominator. The 39-vs-280 contrast for one gene across two samples shows how violently the denominator moves with the reference sample, so no cross-sample percentage can be built from these without the per-gene reference sets. I did not build one.

**For completeness, the numbers the paper leads with**, so nobody mistakes them for either of the above: **99.35% recall and 99.84% precision**, for targeted variants, in the abstract, under up-to-three-sample multiplexing on one PromethION flow cell; recall/precision/accuracy for targeted SNVs and INDELs are in Tables 2-4. These are **concordance against GIAB truth**, not allele balance, not het recovery, and not phasing accuracy. Coverage metrics are in Table 1 (average on-target depth, percent of target at 15X/20X/30X, Gb per run), with "coverage at 20 X of more than 99.9% of the targeted region" for the R9.4.1 run. **Enrichment efficiency, on-target fraction and off-target rate are not reported** - which is worth noting because the WHY-IT-MATTERS framing anticipated "only enrichment and genotype concordance", and in fact it is narrower than that: concordance and coverage, without even an enrichment factor.

**Star-allele concordance** (Section 4.3, R9.4.1): "there were 14 concordant calls, 8 discordant calls, and 2 calls without a reference" - denominator 24 VIP genes run through Aldy v4.4, against GeT-RM. Table 5 carries the per-sample calls for HG001, HG01190, NA19785; **no star-allele truth set was available for HG002 or HG005**, so those samples are absent from this comparison entirely.

### (d) A SIGNED bias attributable to the adaptive-sampling decision

**NO.** No direction - no reference-allele preference, no allelic dropout rate, no loss-of-one-haplotype figure - is reported anywhere in the served text, and no quantity in the paper is attributed to the adaptive-sampling decision as its cause.

Two sentences look directional and neither is this. Quoted, with their attributions:

> "Due to low coverage, Aldy calls *7 for the *12 allele as it assumes that rs1799931 is present on this allele."

**Opening-words scope:** "Due to low coverage," scopes the whole clause to a **depth** explanation, and the rest attributes the wrong call to **Aldy's own imputation assumption**. The clause asserts a miscall and assigns it to coverage plus caller behaviour; it does not assert a selection-induced bias, and it is a single-site anecdote with no denominator.

> "The HG001 UGT1A1*28 allele was missed in our R9 flow cell data"

The authors attribute this to **homopolymer handling** - an R9 basecalling-chemistry limitation, not a selection effect. Again one site, no rate.

Phasing failures are attributed, per Section 4.2 (summary, not quotation), to **the number of heterozygous variants in the reference sample and to gene span length**, with advice to use high-molecular-weight DNA - i.e. to biology and DNA integrity, not to the AS decision. On the sub-claim's own terms the paper **DEFINES nothing and MEASURES nothing** in this direction; it does not even ANNOUNCE a signed bias as a concern.

### (e) Use of the instrument's rejection or unblocked-read log

**Once, descriptively, for a latency statistic - and the rejected stratum is otherwise discarded.** Section 4.4 ("Future perspectives"), from the authors' own experiments:

> "Our experiments' average sequenced read length before a rejection decision was made was 830-880 bp"

> "corresponding to just over 2 s of sequencing"

**This is the paper's own data, not a citation** - I checked that specifically, because the same paragraph carries an external number that is easy to confuse with it:

> "Readfish reported shorter read N50s for the rejected reads of about 500 bp"

That 500 bp is **Readfish's, from other work**, and the paragraph's point is comparative - it goes on to weigh Readfish and Readbouncer as faster or more scalable alternatives to MinKNOW's adaptive sampling, noting Readfish is "less efficient for PromethION than for MinION/GridION due to the slower unblock time". **Opening-words scope on the 830-880 bp sentence:** it opens "Our experiments'", which scopes it to these runs and ASSERTS the quantity - but the quantity asserted is **decision latency expressed as length**, sitting in a *Future perspectives* section whose rhetorical function is to argue for faster decision software. It is a **RECORD OF A MOVE AWAY** from the rejected reads as data: the figure is used to motivate better tooling, not to characterise what rejection did to the called genotypes.

**No counts of rejected or unblocked reads are reported, and no rejection log or decision CSV is analysed.** I could not determine from the served text whether the 830-880 bp came from the unblocked-read FASTQ or from MinKNOW's decision CSV; that distinction would matter to UQ-04's P2 limb and I am leaving it open rather than guessing. Note the tension this creates with 2.4: the rejected strands are discarded for analysis as unmappable, yet their mean length is measured and reported. The rejected stratum is thus *touched* but never *used*.

### (f) One sentence

**No** - Deserranno et al. 2023 prints no signed selection bias in any of the candidate's four estimands against a matched non-adaptive arm, because it runs no non-adaptive arm on its samples, prints no allele-balance or heterozygote-recovery quantity of its own, and reports no direction attributable to the adaptive-sampling decision; what it does publish is **per-gene haplotype phasing accuracy against GIAB/GeT-RM truth sets**, which is a truth-set concordance and not an arm contrast.

## REGIME

**In the source's own terms.** Population: **five GIAB reference materials** - HG001, HG002, HG005, HG01190, NA19785 - as DNA, with a QC step (2.2) and a stated preference for high-molecular-weight DNA. Unit of analysis: a **variant site within a targeted pharmacogene**, aggregated per gene and per sample. Targets: **1,036 pharmacogenes from PharmGKB**, with 47 VIPs carrying reference phasing and 24 VIPs run through Aldy. Instrument and operating condition: **ONT PromethION**, R9.4.1 with SQK-LSK110 (single sample) and R10.4.1 with SQK-NBD114.24 (two- and three-sample multiplexing), **MinKNOW's own adaptive sampling**, rejected strands excluded from analysis. Thresholds: coverage reported at **15X / 20X / 30X**. Categories scored: SNV, INDEL, complex, structural variant, star allele/diplotype, phase. Comparators: **GIAB truth sets** (Krusche et al. for HG001; v4.2.1 for HG002/HG005), **CMRG** for 32 genes, **GeT-RM** for star alleles. Cost regime: an estimated **EUR 320 per sample** at three-sample multiplexing.

**Does the claim sit inside this regime?** Split it.

- The HAPLOTYPE half of L1: **yes, squarely inside** - the paper's title is literally targeted haplotyping under ONT adaptive sampling, and the quantity is per-gene phasing accuracy.
- The ALLELE half of L1: **no** - there is no allele-balance or reference-allele-fraction quantity in this regime at all, so the regime is **silent** on it rather than supportive or contrary.
- The candidate's own estimand (a signed selection bias against a matched non-adaptive arm): **outside this regime in the one way that matters** - the regime contains **no non-adaptive arm**, so no arm contrast is definable within it. A truth-set concordance and an arm contrast are different designs; the first cannot be converted into the second after the fact, because the truth set is not a sample-matched measurement of what non-adaptive sequencing would have produced on this library.

**OVERLAP IN BOTH DIRECTIONS, on the one number that comes nearest - Figure 1's per-gene "percentage of variants correctly phased".**

- *Numerator class, quoted with its exclusions:* "Percentage of variants that were correctly phased compared to their respective truth sets", with "the percentages are only shown for 47 Very Important Pharmacogenes (VIPs)" and only those "for which reference phasing information was available."
- *Denominator, checked against the near neighbours it is not:* reference-phased variants of that gene in that sample. It is **not** the gene's total variants, **not** the sample's heterozygous sites, **not** all 1,036 panel genes, and **not** pooled across samples (the CFTR 39-vs-280 split proves the denominator is sample-specific).
- *What the source's class MISSES, relative to the candidate's haplotype estimand:* any contrast to a non-adaptive arm; the 989 non-VIP panel genes; every gene lacking reference phasing; the rejected-read stratum entirely; and any aggregate, since no overall percentage is printed.
- *What it INCLUDES that the candidate excludes:* homozygous variants, pulled in deliberately by WhatsHap's `--include-homozygous`, plus indels and complex variants - and correctness is defined against a **truth set built from other platforms**, so a disagreement counts against the AS run whatever its origin (chemistry, basecalling, caller, or truth-set error), with no term that isolates the selection decision. The candidate's estimand needs exactly that isolation.

One word apart in the caption - "compared to their respective truth sets" rather than compared to a matched arm - and it is a different quantity.

## DEFECTS FOUND

**D1. The entry's leg L1 is half right, and the half that is right is more on-subject than the entry says.** "On-subject for allele and haplotype recovery" conjoins two things the paper treats very differently. For **haplotype** recovery it is not merely on-subject: it is a paper whose title, its Results 3.2 and its Discussion 4.2 are about haplotype recovery under ONT adaptive sampling, and it **prints a phasing-accuracy figure**. For **allele** recovery it is not on-subject at all - no allele balance, no reference-allele fraction, and its only het-recall number is an external citation. L1 should be **split**: struck on the allele limb, and on the haplotype limb **narrowed from "unopened lead" to "opened, and it does not contain the estimand"**.

**D2. The record's stated reason for not opening it is wrong on the facts, and this is the more serious defect.** Record line 94 sets the paper aside as "clinical PGx star-allele concordance, i.e. outside the candidate's declared non-clinical population." The samples are **HG001, HG002, HG005, HG01190 and NA19785 - GIAB reference materials**, the archetypal non-clinical benchmark cell lines, which is also what the candidate's own benchmarking limb would use. A clinical *application domain* was read as a clinical *population*. The paper is correctly set aside - but for the reason in D3, not this one. An entry that discharges a prior on a false premise has not discharged it; it has got lucky.

**D3. The correct ground for setting it aside, which no sweep had written down.** Not population - **design**: no non-adaptive arm on the same samples, every comparator a truth set or external literature, and the rejected stratum discarded by methods fiat ("Only the reads positively selected by the adaptive sampling (AS) software were used in downstream analysis"). That sentence is the paper's most useful contribution to UQ-04 and it is an **absence of evidence created by design**, which is precisely the shape of gap the candidate claims.

**D4. Figure 1 means the candidate's haplotype limb is no longer unpopulated, even though its estimand survives.** A published per-gene phasing accuracy under adaptive sampling exists, against GIAB/GeT-RM truth. The candidate's haplotype estimand is still unmeasured, because truth-set concordance is not an arm contrast - but any novelty claim on that limb must now be stated as "no *arm-contrasted* phasing accuracy" and not "no phasing accuracy under adaptive sampling". The entry should carry Figure 1 as a **named nearest neighbour** on the haplotype limb, which is more than the record's prior list currently gives it.

**D5. Latency is published; bias is not.** 830-880 bp of sequencing before a rejection decision, from the authors' own runs, is the instrument-level quantity a selection-bias analysis would need as an input - and it appears in *Future perspectives* as an argument for faster software, with no counts of rejected reads and no analysis of any rejection log. The adversary-1 promotion condition (3), that BOSS-RUNS's own logs be checked because the P2 verdict rests on MinKNOW's CSV alone, is **untouched** by this paper: I could not establish from the served text whether even the 830-880 bp came from the decision CSV or from the unblocked FASTQ.

**D6. The procedural leg (iii) holds, and I am enumerating it rather than asserting it.** I grepped **all five** batch files for UQ-20261023-04 - record, adversary-1, adversary-2, adversary-3, entry - for the DOI, the first author and the title. **Opened:** record line 55 returns it at query 5 and line 94 marks it "NOT OPENED"; adversary 1 returns it at S1 and marks it "a REPEATED TITLE MATCH, counted as ONE document, NOT OPENED by either of us"; the entry carries it at lines 32 and 42. **Not present at all:** adversary-2 and adversary-3 (zero hits). So "two sweeps, one document, opened by nobody" is **TRUE over the five files I opened**, and it is the enumerable kind of universal: five named files, all five read, no instance outside that set claimed. Adversary 1 also already handled the repeated-return trap correctly - one document, two title matches, not corroboration. Credit where due.

**D7. The unopened-prior list for this entry deflates by one, and adversary 1's own nomination discipline was better than the entry's.** Adversary 1's promotion condition (1) called this paper "of the right SUBJECT ... but I do not know that it has a non-adaptive arm or prints a per-arm number ... so this is a lead by subject and NOT a verified nominee." That was the correct standing, and it was right: the paper is the right **kind** of document (an AS evaluation on diploid reference samples that prints a haplotype-recovery metric) and still **fails the condition**, on the arm. The entry's line 42 then promoted the same item to a leg of its strongest objection without carrying adversary 1's hedge forward. Condition (1) is now **discharged negatively** and should be struck from the open list.

## ROUTES THAT FAILED

- **Figure 1's plotted values: COULD NOT READ.** The caption served; the image did not. Not attempted by a second route - the article page is the canonical open-access source, and a figure-image OCR was not worth a fetch against a quantity I had already characterised by caption. Recorded as COULD NOT READ, strictly distinct from NOT FOUND: the numbers exist and are published, I did not read them.
- **Verbatim full text of Sections 3.2, 4.2, 4.4 and the abstract: REFUSED by the summariser**, at the ~125-character quotation cap and, on the third pass, as wholesale reproduction ("I can't reproduce those sections in full, even split into fragments"). Worked around by requesting short targeted fragments, which is why every quotation above is a single short return and nothing is assembled across returns.
- **PMC10679755: not attempted.** PMC and Europe PMC are hard-blocked here; the PMCID is carried as an identifier only, and nothing in this check needed it. No idconv call was made because the DOI already resolved.
- **doi.org: not attempted.** Went to the frontiersin.org host directly per the standing guidance, and it served on the first call. No 429, no redirect problems. **Zero searches used** - the citation located the document without one.

## BEARING ON THE LEDGER ENTRY

**Split L1 and re-grade the halves. Do not strike the leg whole, and do not keep it whole.**

- **L1, allele limb: STRIKE.** The paper prints no allele balance, no reference-allele fraction and no heterozygote recovery of its own; its one het-recall number is an external citation in the Discussion. "On-subject for allele recovery" is false of this document.
- **L1, haplotype limb: CONVERT from unopened lead to opened negative, and retain it in the entry as a NEAREST NEIGHBOUR.** It is on-subject, it prints per-gene phasing accuracy (Figure 1), and it still does not contain the candidate's estimand, because its comparator is a truth set and not a matched non-adaptive arm. Per D4, the entry's haplotype-limb novelty claim must be restated as *arm-contrasted* phasing accuracy.
- **Adversary 1's promotion condition (1): DISCHARGED NEGATIVELY.** Right kind of document, fails the condition on the arm. Remove from the open list.

**The candidate's first estimand is NOT substantially published**, on the WHY-IT-MATTERS test as written: no matched arm, no signed bias, and the one stratum that could show a selection effect is discarded in Section 2.4 by design. The entry's gap **holds on that limb** - and holds on a better ground than the record gave it. Novelty does not fall below Medium on account of this paper.

**But the entry's Gate-2 hole is confirmed, not closed, and it is worse-shaped than "a document nobody opened".** The record set this paper aside on a false premise (D2: GIAB reference cell lines read as a clinical population), and the entry built a leg of its strongest objection on a conjunction half of which is false (D1). One of the two is a sweep gap; the other is a reasoning error that survived three adversaries. **The entry's verdict should not move on L1** - as the entry itself states, "THE VERDICT STANDS ON L3, because it is a found fact and not an unopened lead", and L3 is untouched by this check. L1 is now neither a lead nor an objection: it is a closed question with a corrected reason attached. **L2 (Martin et al., 10.1186/s13059-021-02582-x, COULD NOT READ) remains the live leg**, and on kind it is the better candidate anyway - a major AS benchmark is the kind of document that could carry a matched arm, which this one, now opened, does not.
