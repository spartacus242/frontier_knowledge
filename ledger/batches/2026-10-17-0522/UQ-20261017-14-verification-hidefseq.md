# HiDEF-seq verification notes
Searches (3 of 8 used; 0 refused):
1. "HiDEF-seq single-molecule fidelity somatic mutation Nature Liu Evrony" -> DOI 10.1038/s41586-024-07532-8 (Nature 630, 2024); bioRxiv 10.1101/2023.02.19.526140; PMC9949150 (preprint).
2. "HiDEF-seq PMC ..." -> same; links only.
3. per-read 5mC error rate PacBio/nanopore controls -> only titles/links (benchmark PDFs, Genome Res 2025 supplement, Brief Bioinform bbae413); no figure read.
Fetches (6 of 6 used):
1. doi.org/10.1038/s41586-024-07532-8 -> redirect to nature.com
2. nature.com/articles/s41586-024-07532-8?code=... -> read. Quote: "achieves single-molecule fidelity for base substitutions" (abstract fragment); "HiDEF-seq also detects cytosine deamination ... with single-molecule fidelity." No FP rate stated on page as summarised. Only "methyl" hit = ref 36 title "Hydroxyl-radical-induced oxidation of 5-methylcytosine in isolated and cellular DNA."
3. nature.com/articles/s41586-024-07532-8 (plain) -> error
4. pmc.ncbi.nlm.nih.gov/articles/PMC9949150/ -> reCAPTCHA interstitial, COULD NOT READ
5. nature.com (code URL) 2nd keyword pass: no 5mC, CpG, kinetic, inter-pulse, bisulfite.
6. biorxiv .full.pdf (PREPRINT v2, not published version) -> "is < 1 error per 7⋅10^16 base pairs with ≥ 5 passes per strand"; "requires single-molecule fidelity of < 1 error per 1 billion bases"; "arise from deamination of 5-methylcytosine and cytosine, respectively"; "most cytosines in the genome are not methylated"; "such as cytosine methylation"; kinetics used to characterise ssDNA damage (e.g. "This analysis revealed a distinct kinetic signature for ssDNA C>T calls"); no 5mC/CpG/bisulfite hits.
Conclusion: HiDEF-seq is a duplex-with-single-strand-resolution PacBio method for mismatches/damage; no evidence it calls 5mC; no methylation error rates; no mutant vs non-mutant methylation comparison found. Caveat: published full text only seen via summariser; 7e16 figure from preprint.
