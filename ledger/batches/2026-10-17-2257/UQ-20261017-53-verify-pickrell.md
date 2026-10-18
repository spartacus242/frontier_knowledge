# UQ-20261017-53 verify Pickrell et al. 2010

Read level: FULL TEXT of the PLOS Genetics article HTML page, read through a summariser (not raw text; quotes short, no stitching). Figure S1 image not seen, only its legend. Table 1 not reproduced.

## Calls
1. WebFetch doi.org/10.1371/journal.pgen.1001236 -> 302 redirect to journals.plos.org (not fetched).
2. WebSearch "Pickrell Pai Gilad Pritchard Noisy splicing drives mRNA isoform diversity in human cells PLoS Genetics" -> paper exists; PMC3000347 (blocked, not opened), UChicago repository record.
3. WebFetch journals.plos.org article page, broad prompt -> OK, paper confirmed, all 7 phrases located.
4. Bash curl of PLOS manuscript file -> 403 from proxy (host blocked for curl). Nothing read.
5. WebFetch same page, Results novel-junction subsection -> OK. 1.7% denominator, saturation sentence, Fig S1 subsampling.
6. WebFetch same page, keyword search for artefact terms + 98.4/0.7 context -> OK.
Totals: 1 search, 4 WebFetch (1 redirect-only) + 1 failed curl.

## Findings
1. Pickrell JK, Pai AA, Gilad Y, Pritchard JK (2010) Noisy Splicing Drives mRNA Isoform Diversity in Human Cells. PLoS Genet 6(12): e1001236. doi:10.1371/journal.pgen.1001236
2. All seven present:
 - "no sign ... near saturation" and "deeper sequencing ... additional low-abundance isoforms": Results, "Many identified junctions are novel" (cites Fig S1).
 - Fig S1 legend "Identification of isoforms is not at saturation.": Supporting Information.
 - ~150,000 previously unannotated junctions: Abstract (Results: 154,927 of 306,606 junctions = 50.5% unannotated).
 - 0.7%: Abstract and Author Summary say per-intron splicing error rate; Results "Estimation of splicing error rates" says ~0.7% of reads at either end of a conserved junction go to unconserved splice sites (read-based denominator).
 - 98.4%: Results "Characteristics of identified junctions and splice sites": major splice form = 98.4% of reactions involving each splice site.
 - 1.7%: Results "Many identified junctions are novel": unannotated junctions are 1.7% of all junction-spanning reads (denominator is reads, not junctions; 50.5% is the junction fraction).
3. Depth analysis: graphical subsampling curve (Fig S1: junction-spanning reads from LCL data subsampled, unannotated junctions counted vs depth). No model fit or estimator described in the text I saw. Caveat: figure image not seen.
4. Richness / capture-recapture estimator: NOT FOUND (read full article page; no Chao, Good-Turing, capture-recapture).
5. RT artefacts / template switching: NOT FOUND (keyword search of article page for artifact, artefact, reverse transcri, template switch, chimeric, PCR found nothing). Spurious-junction concern is addressed only as mapping/sequencing errors.
