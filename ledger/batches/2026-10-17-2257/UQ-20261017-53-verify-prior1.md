# UQ-20261017-53 verify prior1: bioRxiv 10.1101/2025.07.02.662769

Read level: FULL TEXT of v1 (bioRxiv .full page), read through a summariser, so quotes are the summariser's renderings (each under ~125 chars, none stitched). Metadata from the bioRxiv API.

## Calls (2 of 6 searches budget used: 1; 4 of 6 fetches used)
1. WebFetch https://doi.org/10.1101/2025.07.02.662769 : ROBOTS_DISALLOWED, no content.
2. WebSearch "bioRxiv 10.1101/2025.07.02.662769" : only generic biorxiv panels_ajax links, none matching. Not useful.
3. WebFetch api.biorxiv.org/details/biorxiv/10.1101/2025.07.02.662769 : OK. Preprint exists.
4. WebFetch biorxiv .../2025.07.02.662769v1.full : OK, full text, no title/authors on page; Methods/Discussion content.
5. WebFetch same v1.full, targeted prompt on unit/endpoint/comparator/estimand/saturation : OK.
6. WebFetch genomebiology.biomedcentral.com/articles/10.1186/s13059-026-04260-2 : redirect to springer, not followed (published version is out of scope).

## Findings
1. Exists. Title: "Perplexity as a Metric for Isoform Diversity in the Human Transcriptome". v1 posted 2025-07-02; authors Schertzer MD, Park SH, Su J, Sheynkman GM, Knowles DA (category genomics). v2 posted 2026-03-25 adds author Reese F; API lists published DOI 10.1186/s13059-026-04260-2 (not opened).
2. About: entropy-based "perplexity" (2^H) as effective number of isoforms per gene from long-read data (124 ENCODE4 PacBio datasets, 55 human cell types). It concerns isoform diversity in long-read data, NOT saturation or estimating unobserved isoforms.
3. Unit: gene (gene perplexity, pc-transcript perplexity, ORF perplexity per gene); Fig 3 uses sample-specific ORF. Endpoint: perplexity; headline mean ORF perplexity 2.1; gene potential (count of detected isoforms) ranges 1 to 316. Comparator: fixed expression cutoffs and raw isoform count ("gene potential"). Estimand: no formal estimand stated; effectively effective number of isoforms per gene from average proportions across all 124 samples (close to order-1 Hill number, summariser's inference; paper does not use the term).
4. NOT FOUND. No richness/unseen-class estimator applied. Paper considered Miller-Madow and Nemenman-Shafee-Bialek entropy bias corrections and did not apply them. No Chao, Good-Turing, rarefaction.
5. NOT FOUND as a statement on saturation vs depth. Nearest: "Given the high coverage of the datasets analyzed here, the bias in our estimates will be minimal." (Discussion); gene potential called an "upper bound" (Results) but not tested for plateau; isoform filter "10 supporting reads across all 124 samples" (Methods). Read: v1 full text only, via summariser; v2 and published version not read.
