# UQ-20261017-53 late-fpaware working notes
Budget used: 7 searches, 6 fetches (PMC fetch redirected, not followed; counted).

Searches: (1) Chao1 unobserved isoforms per gene long-read saturation; (2) species richness splice isoform Good-Turing RNA-seq;
(3) richness false positive spike-in technical replicates Chao1 spurious singletons; (4) unseen isoforms per gene extrapolation rarefaction;
(5) capture-recapture total alternative splicing isoforms Good-Turing; (6) Chao1/Good-Turing corrected false positives spike-in/technical replicates;
(7) "How Many Genes Are Expressed in a Transcriptome?" abstract (snippets only).

Opened (abstract/summary level via summariser):
- Schmitz & Rahmann, DivQuant, WABI 2026 (LIPIcs 390, art. 16), PDF. Richness + entropy from small samples; scRNA-seq tags as units; no isoforms; notes singleton inflation by seq errors, no correction.
- Schertzer...Knowles, Perplexity as metric for isoform diversity, bioRxiv 10.1101/2025.07.02.662769, PDF. ENCODE4 PacBio, 124 samples, per gene Hill numbers D0/D1; no Chao1/Good-Turing; no FP model, filters (>=10 reads); considered Miller-Madow/NSB, not applied.
- Willis, arXiv 1604.02598, breakaway_nof1: discards observed singletons, predicts f1 and f0 from f>=2; simulations use assumed "chimeric rate"; no spike-ins/replicates.
- Newman, Conesa, McIntyre SMBE 2016 poster: isoform resolvability, not richness.
- Chauhan, Prawer, Clark Lorne 2025 poster: long-read scRNA-seq benchmark; excess unique isoforms read as false positives; no estimator.
Not read: PLoS ONE 2015 PMC4479379 (gene-level "how many genes expressed", PMC blocked); Chiu & Chao PeerJ preprint 1353 (title only).
