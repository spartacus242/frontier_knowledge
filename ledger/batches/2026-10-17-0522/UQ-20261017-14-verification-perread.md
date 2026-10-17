# Per-read 5mC accuracy, conversion-free: working notes (2026-10-17)

Budget: 6 searches used (of 8), 0 refused; 6 fetches used (of 6). Fetch pool exhausted.
Fetch answers are from a small summariser model, not raw text; quoted strings are as the summariser returned them, not independently verified against the PDF.

## Searches
1. per-read 5mC accuracy PacBio/nanopore WGA/M.SssI control -> links only (bioRxiv 2020.10.14.340315 = Yuen et al nanopore tools; PMC8187371; s41467-021-23778-6; s41467-023-39784-9 ccsmeth; UTS benchmarking pdf; pacb.com ?p=56717/56381; PAG-5hmC-Portik.pdf). NOT all opened.
2. PacBio primrose/jasmine per-read accuracy -> links only (pacb.com pages, PacBio jasmine GitHub, PMC10329642 fig3, Genome Medicine Jan 2026 doaj). NOT opened.
3. somatic mutation vs wild-type reads methylation, same locus -> links only (bioRxiv 2024.09.27.614715 "Fine Mapping Regulatory Variants..." germline; PMC10155347 cfDNA nanopore; PMC7704922; PMC7898412; nanoporetech AACR2024 poster). NOT opened. No hit that obviously does somatic-vs-wildtype read comparison.
4. bisulfite per-read non-CpG conversion filter -> links (seqanswers min conversion rate thread; dnmtools bsrate; nf-core biscuit bsconv; biscuit qc; MultiQC biscuit). Only bsconv opened.
5. biscuit bsconv CH retention -> links only.
6. Genome Research 2025 benchmarking -> links only; no Genome Research 2025 paper surfaced. Not identified.

## Fetches
1. doi.org/10.1093/bib/bbae413 -> 302 to academic.oup.com (not auto-followed).
2. academic.oup.com/bib/article/25/5/bbae413/7739685 -> opened (summary). ONT only (R10.4); per-read AUC/F1 vs Dorado; negatives are BS-seq fully (un)methylated CpGs, not WGA/PCR; no M.SssI; no PacBio.
   Strings: "the fully methylated and unmethylated CpGs in their corresponding BS-seq data"; "superior and more stable performances compared with Dorado".
3. opus.cloud1.lib.uts.edu.au ... benchmarking-tools-for-5mC-detection-v2.pdf (Yuen et al, Nat Commun 2021 preprint/postprint) -> opened. ONT only. Per-read ROC/PR; AUCPR >0.8 (Megalodon highest). Controls: 100 fully unmethylated sites and fully methylated sites, counts of correct per-SITE calls (88 Guppy, 71 Megalodon unmethylated; Nanopolish 52, Tombo 39 methylated). No FPR/FNR percentages.
   Strings: "using individual reads, control mixtures of methylated and unmethylated reads, and bisulfite sequencing"; "failed to predict any sites at this cutoff" (Guppy, methylated).
4. paperity ccsmeth page -> opened (abstract only, truncated). "ccsmeth achieves 0.90 accuracy and 0.97 Area Under the Curve on 5mCpG detection at single-molecule resolution"
5. nature.com/articles/s41467-023-39784-9.pdf (ccsmeth, PacBio CCS) -> opened. Per-read, PCR vs M.SssI controls from Tse et al: "ccsmeth achieves accuracies of 0.9232, 0.8788, and 0.8765 on M01&W01, M02&W02, and M03&W03"; long CCS reads (NA12878/HG002/SD0651_P1) "0.8721-0.9062 accuracies, 0.8621-0.8903 sensitivities, 0.8765-0.9220 specificities, and 0.9464-0.9682 AUCs". FPR/FNR not reported as such; 1-spec ~0.08-0.12, 1-sens ~0.11-0.14 are derived by the summariser, pooled across control-type and native datasets (BS-seq-labelled for the native ones). No somatic comparison; variants used are germline SNVs for phasing.
   Note: ccsmeth is a third-party model (Ni et al), NOT PacBio's primrose/jasmine 5mC CpG model.
6. registry.nextflow.io/modules/nf-core/biscuit/bsconv -> opened. "Summarize and/or filter reads based on bisulfite conversion rate." Page does not say whether it uses non-CpG cytosines.

## NOT opened / not tried
- PacBio primrose/jasmine docs (github.com/PacificBiosciences/jasmine seen in search results only), pacb.com pages, PAG-5hmC-Portik.pdf: not opened (fetch budget).
- dorado / remora / megalodon documentation: not searched specifically, not opened.
- Genome Research 2025 benchmarking paper: search 6 did not surface it; not found, not read.
- PMC, Europe PMC, PubMed: not attempted (budget; PMC link PMC8187371 seen but not opened).

## Conclusions
- PacBio native 5mC: the only per-read controlled figures I read are for ccsmeth (third-party), accuracy ~0.88-0.92 per read on M.SssI vs PCR controls (Tse data). Per-read, yes, but accuracy on a balanced mix, not separate FPR/FNR. PacBio's own model figures: COULD NOT READ (not opened).
- ONT: Yuen 2021 gives per-read AUC and per-site call counts on controls, no percentage FPR/FNR. bbae413 uses BS-seq negatives. Dorado/remora docs: not read.
- Somatic-mutation-carrying vs non-carrying reads, conversion-free: none found in 3 queries (search 3, plus ccsmeth and bbae413 contents). This is "found nothing in a narrow search", not proof of absence.
- Per-read conversion QC in bisulfite: biscuit bsconv exists and filters reads by conversion rate; whether it uses CH sites per read is not confirmed from the page. Not verified.
