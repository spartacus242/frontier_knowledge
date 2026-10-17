# UQ-20261017-14 flanking-CpG mutant vs wild-type single-molecule prior art (notes)
Budget: 9/9 searches used (none refused), 6/6 fetches used (1 errored).

## Searches (all returned link lists only; no snippet text)
1. "Kusmartsev 2020 DNA methylation local sequence context neighbouring CpG" -> Oxford pub page "Cytosine Methylation Affects the Mutability of Neighbouring Nucleotides in Germline and Soma" + bioRxiv 764753 + a different Sci Rep paper (PMC6997448, not Kusmartsev).
2. nanopore long-read single-molecule methylation phased with somatic mutation ... flanking CpG -> Akbari bioRxiv 2024.02.26.582089 (somatic calling w/o normal), ONT posters; nothing matching.
3. MethylSaferSeqS PNAS 2023 -> PubMed 37014860, PMC10104560, medRxiv 2022.12.06.22283116 (links only; not opened).
4. Kusmartsev DOI search -> pubannotation PMID 32079595, bioRxiv 764753, OUP Genetics 214(4):809.
5. "same read" somatic mutation methylation haplotype PacBio HiFi 5mC ... -> PacBio marketing pages/posters; nothing matching.
6. joint genetic and epigenetic single-molecule cfDNA ... -> MethylSaferSeqS again, biomodal poster (simultaneous methylation+somatic variants for detection), cfDNA fragmentomics bioRxiv; none opened.
7. phasing somatic variants with methylation nanopore ... -> MethPhaser, ONT ASHG tumour-normal poster, others; nothing matching in titles.
8. mutant-allele-specific methylation ... "on the same read" -> Genome Res long-read cancer review (35:599), others; not opened.
9. MethylSaferSeqS mutant wild-type two patients CpG created/destroyed -> same links as #3.

## Fetches
- ndm.ox.ac.uk/publications/1088983 : opened. Kusmartsev abstract summary (no journal/year on page).
- biorxiv 2024.02.26.582089.full.pdf (Akbari): opened. Methylation only mentioned in Introduction as long-read capability; no methylation analysis in Methods. Not a match.
- pubannotation PMID 32079595: opened. Same abstract. Quote: "nucleotides in the close vicinity (+-3 bp) of methylated cytosines mutate less frequently"; "cytosine methylation has a broader mutational footprint than is commonly assumed".
- biorxiv 10.1101/764753v1.full.pdf: opened (preprint v1). Unit: per-site, flanking bases +-1..3 around focal CpG. Endpoint: incidence of singleton SNPs (germline: gnomAD, 1000G, HapMap, 1001 Arabidopsis, 3000 rice). Comparator: flanks of methylated vs matched unmethylated CpGs (matched +-4bp context, chromatin state, chromosome). Estimand: RR_met ratio. Methylation from separate bisulfite datasets (H1 hESC etc.), not same molecule. Summariser said no cancer somatic data in v1 text; published abstract says "including in cancer genomes" -> discrepancy, published full text NOT read.
- nanoporetech 2023_ashg_tumour_normal.pdf: opened. Tumour vs normal average 5mC/5hmC and DMRs; whatshap phasing for germline haplotypes; no mutant-vs-WT read split.
- https://doi.org/10.1073/pnas.2220704120 : FETCH ERROR (CLIENT_ERROR). MethylSaferSeqS content NOT read by me. PMC and PubMed routes known blocked; budget exhausted.

## Not opened (appeared in results): PMC10104560, pubmed 37014860, medRxiv 2022.12.06.22283116, biomodal poster, Genome Res 35:599, MethPhaser bioRxiv, OUP Genetics 214/4/809, PMC7898412, PMC7704922.

## Conclusion
No source opened reports flanking-CpG, same-locus, mutant vs wild-type single-molecule methylation comparison. This is "found nothing in 9 searches / 5 opened pages", not proof of absence; titles of several unopened hits (biomodal poster, Genome Res review, MethPhaser) not checked. MethylSaferSeqS characterization in the brief is unverified by me.
