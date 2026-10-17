# UQ-20261017-11 verification: hifiasm asmgene multi-copy metric (working notes)

Budget: 7 searches run (0 refused), 6 fetches used (all succeeded). All fetched text came through the WebFetch page summariser (small model), not raw text; quotes are as relayed by it.

## Fetches
1. https://arxiv.org/pdf/2008.01237 (hifiasm preprint) - opened. Strings: "multi-copy", "76.9", "67.3", "74.8". Result: values appear only as cells in Table 2, column "Multi-copy genes retained (%)"
2. https://arxiv.org/pdf/2109.04785 (Hi-C preprint) - opened. Strings: "purge_dups", "significantly worse". Found in Supp 1.2 and Supp Table 3 caption.
3. https://arxiv.org/pdf/2008.01237 again - Table 2 + caption + Online Methods asmgene paragraphs. Table reproduced by summariser; it said column order was "inferred because extraction garbled headers" - so cell-to-column mapping rests on the summariser.
4. https://arxiv.org/pdf/2109.04785 again - context of "significantly worse": HiCanu, not hifiasm; no numbers.
5. https://arxiv.org/pdf/2109.04785 third time - verbatim split pieces:
   "The HiCanu assemblies of European badger and Black Rhinoceros were not purged as purge_dups"
   "resulted in significantly worse assemblies."
   Main text does not mention purge_dups (per summariser).
6. https://academic.oup.com/bioinformatics/article/36/9/2896/5714742 (purge_dups paper, Guan et al. 2020) - opened. Measures BUSCO C(D)/C(S) before/after purging on 4 Falcon-unzip assemblies; no check of genuine paralog removal.
NOT opened: Nature Methods published version (only arXiv preprint read; published Table 2 numbers not compared), Nature Biotechnology published version, PMC/EuropePMC (blocked), HapSolo (PMC/Springer link seen in search, not fetched - fetch budget exhausted), PMC9516828 (appeared in search, not opened, unidentified), purge_dups GitHub issue 35 (not opened), minimap2/paftools asmgene source (not read).

## Searches (all returned; none refused)
1. "purge_dups removes true duplicated genes gene copies lost haplotig purging assembly evaluation" - only purge_dups paper (PMC7203741 / bioRxiv 729962 / OUP).
2. "haplotig purging over-purging collapses segmental duplications multi-copy genes ... benchmark" - same purge_dups paper again.
3. (extended) "purge_dups multi-copy / duplicated genes loss over-purging ..." - purge_dups GitHub issue 35 (poor purging, tetraploid), unrelated gene-duplication reviews; nothing on gene loss caused by purging.
4. "benchmarking haplotig purging tools purge_dups Purge_Haplotigs HapSolo false removal of genes" - purge_dups paper, HapSolo (PMC7788845); no benchmark that varies purging only and counts genuine gene copies lost seen in titles.
5. "gene copy number loss caused by haplotig purging ... paralogs falsely purged" - purge_dups paper again; PMC9516828 fig4 (not opened).
6. "PMC9516828 haplotype purging assembly gene content" - purge_dups paper only.
7. "hifiasm purge_dups unnecessary purging removes real segmental duplications gene families ..." - purge_dups paper only.

## Findings
Item 1. Table 2 (arXiv v of hifiasm preprint), "Statistics of human primary assemblies", column "Multi-copy genes retained (%)":
 CHM13 hifiasm 76.9 (run WITHOUT purging; HiCanu 76.7, Peregrine 41.4, Falcon 24.6, Canu ONT 61.6)
 HG00733 hifiasm (purge) 67.3 (HiCanu purge 62.4)
 HG002 hifiasm (purge) 74.8 (HiCanu purge 67.1)
 All three figures confirmed as printed. They sit in a table cell, not prose.
Caption verbatim (pieces): "Percent "multi-copy genes retained" is reported by asmgene (Online Methods)." / "It is the percentage of multi-copy genes in GRCh38 (multiple mapping positions at ≥ 99% sequence identity)" / "that remain multi-copy in the assembly."
Methods: "It first aligns the cDNAs from EnsEMBL (v99 for human and mouse and plant v47 for maize)" / "to both reference genome and assembly by minimap2" ; "We also used asmgene to measure the resolution of genes in segmental duplicates." ; "and checks how many these genes were kept multiple times on assembly." Supp S1.6: "-i.97" replaced by "-i.99" for multi-copy.
 So: unit = genes (Ensembl cDNAs) that are multi-copy in GRCh38; endpoint = % still multi-copy (>=2 alignments) in the assembly; comparator = GRCh38 itself (and across assemblers); no estimand of causal effect.
Item 2. The metric pools (a), (b), (c). It only compares copy count in assembly vs GRCh38 for genes multi-copy in GRCh38. A shortfall can be assembler collapse, purge removal, or a true copy-number difference of the individual (or GRCh38 error/alt-assembly artefact). Not decomposed anywhere in text read. Also design confound: CHM13 unpurged (haploid) vs HG00733/HG002 purged (diploid heterozygous) - purging is never the only varied factor, and no purged-vs-unpurged pair for the same sample appears in Table 2.
Item 3. Claim is real but narrower than the framing: it is HiCanu (not hifiasm) assemblies of European badger and Black Rhinoceros, in Supplementary 1.2 and Supp Table 3 caption. No numbers for purged badger/rhino. Supp Table 3 gives runtime/memory only. Main text silent on purge_dups.
Item 4. Found nothing in 7 searches / 1 read. Nearest: purge_dups paper (Guan 2020) measures BUSCO duplicated/complete before-after purge on Falcon-unzip assemblies (At C(D) 6.2% -> 1.1%; Mm 16.8 -> 3.5; complete At 98.1->97.8, Mm 95.8->94.4); says "it does not exhibit signs of significant overpurging" qualitatively; no genuine-paralog check. That is a search/limited-read negative, not proof of absence.
