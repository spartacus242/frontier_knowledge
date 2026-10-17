# Guiglielmoni et al 2021 BMC Bioinformatics 22:303 - verification notes
Searches: 0 run, 0 refused.
Fetches (4 of 6 used):
1. https://doi.org/10.1186/s12859-021-04118-3 -> NOT OPENED, proxy HTTP 429 (told not to refetch).
2. https://bmcbioinformatics.biomedcentral.com/articles/10.1186/s12859-021-04118-3 (abstract/summary) -> opened; one genome (A. vaga), 7 assemblers, 3 purgers.
3. same URL, datasets prompt -> only A. vaga; 102 Mb haploid (k-mer est), 204.6 Mb diploid; Illumina 25M x 250bp PE; PacBio 23.5 Gb; ONT 17.5 Gb.
4. same URL, overpurging/gene prompt -> no gene-level analysis; overpurging = k-mer completeness <50%; BUSCO only gene measure.
5. same URL, tools/definitions prompt -> HaploMerger2, purge_dups, purge_haplotigs; no reference/ground truth; KAT comp 2.4.2; BUSCO metazoa odb10 (954).
Caveat: all page text came via a summariser (small model), not the raw page; quotes are as returned, not independently verified against raw HTML. Not seen directly: tables/figures.
Strings: "a lower value indicates that too many k-mers were lost (overpurging)"; "HaploMerger2 seemed to overpurge assemblies of the filtered datasets."; "The genome size of our benchmark organism was estimated as 102 Mb based on k-mer frequencies."; "The haploidy score represents the fraction of collapsed bases in the assembly"; "The BUSCO score only represents orthologs and does not account for the completeness of non-coding regions."
Conclusion: PARTIALLY CONFIRMED. Claim re overpurging at k-mer level w/o ground truth or gene-level measurement holds; but paper is not a with/without purging only-factor design and uses 1 genome.
