# UQ-20261017-53 Chiu & Chao PeerJ 2016 4:e1634

Read level: FULL TEXT via summariser (peerj.com/articles/1634/, 52,843 chars, two passes; whole page covered). DOI link and PDF fetches failed (CLIENT_ERROR). 1 search run, 3 successful fetches + 2 failed.

1. Citation: Chiu C-H, Chao A (2016) Estimating and comparing microbial diversity in the presence of sequencing errors. PeerJ 4:e1634. doi:10.7717/peerj.1634
   NOTE: title differs from the task's descriptive label ("species richness estimation with high diversity but spurious singletons"). Authors/journal/year confirmed.
2. Problem: sequencing errors create spurious low-frequency taxa, esp. singletons, inflating richness. Handling: discard observed f1, replace with nonparametric estimate; keep other f_k observed; observed-vs-estimated f1 gap may signal errors.
3. Estimator: f1 estimated from f2,f3,f4 (Eq 5, modified Good-Turing); adjusted Chao1 (Eq 6a-b); extension to estimate f2 from f3-f5; Hill numbers q=0,1,2, rarefaction/extrapolation (iNEXT), profile estimator (Eq 7). Input: abundance frequency counts f2,f3,f4 (+ n, S_obs).
4. Examples: simulations (6 abundance models, S=2000, n 2000-10000, 10% error, vs breakaway); real: Allen et al. 2013 phage metagenome contig spectra, swine feces (7 pooled) and reclaimed water (4 pooled): swine n=9988, 8833 taxa, f1=8025, f2=605, est f1=2831; water n=9973, 8739 taxa, f1=7986, f2=518, est f1=2105. Other Allen data sets in Supp Table S1 (no detail seen). Sequencing data only; no classical ecological survey data.
5. DECISIVE: transcripts/isoforms/RNA-seq/mRNA/cDNA/gene expression: NOT FOUND in whole page as read via summariser. Only "RNA" occurrence: "16S rRNA sequencing" in Discussion. Applies method to sequencing data (viral metagenome contigs), but not transcript data.
Caveat: summariser-based keyword search, not a literal text grep.
