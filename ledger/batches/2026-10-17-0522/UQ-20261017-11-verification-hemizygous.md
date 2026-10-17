# Hemizygous copy / primary-alternate convention: literature check notes

## Searches (3 of 9 used, 0 refused)
1. NCBI definitions "primary assembly" "alternate loci" "pseudohaplotype" -> links only (NCBI datasets glossary, assembly/help, assembly/model, GRC definitions, Bookshelf NBK153600). No text.
2. Rhie 2021 purging haplotigs hemizygous -> links only (institutional repository records of the paper). No text.
3. EBP standards alternate haplotype purging hemizygous -> links only (PMC8795494 = EBP standards paper, PMID 35042802; PMC12121479 sample-collection guidance). No text. PMC is blocked, PubMed not tried.

## Fetches (6 of 6 used; fetch budget exhausted)
1. https://doi.org/10.1038/s41586-021-03451-1 -> FAILED ("error while fetching"). NOT READ.
2. https://www.nature.com/articles/s41586-021-03451-1 -> FAILED. NOT READ.
3. https://www.ncbi.nlm.nih.gov/datasets/docs/v2/glossary/ -> opened; summariser output only.
4. https://www.ncbi.nlm.nih.gov/assembly/help/ -> opened; same content as 3.
5. https://www.biorxiv.org/content/10.1101/2020.05.22.110833v1.full -> opened; this is the 2020 PREPRINT v1, not the Nature version. Summariser output only.
6. https://www.ncbi.nlm.nih.gov/assembly/model/ -> redirected/returned only metadata (data-model page); no definitions.
Not opened at all: EBP standards paper (Lawniczak et al. 2022, PMC8795494 / PMID 35042802; Lewin et al. 2018 PNAS EBP paper), GRC definitions page, NBK153600.

## Strings checked (via summariser, so these are paraphrase-grade, not verified verbatim)
NCBI glossary:
- "also known as the primary assembly" (inside Alternate locus entry)
- "A specific sequence that represents a different version or variation of a particular locus present in the haploid assembly, also known as the primary assembly" (reconstructed from two fragments)
- "A genome assembly from a diploid in which many of the haplotypic sequences have been resolved and phased" (Linked pseudohaplotype assemblies)
- "principal or alternate pseudohaplotype" (Linked assembly entry; term not defined)
- No standalone entries for primary assembly, pseudohaplotype, alternate haplotype, principal haplotype.
bioRxiv preprint v1 of Rhie et al.:
- "one of the most common assembly errors was the introduction of false duplications"
- "removed retained false duplicated contigs that were not scaffolded" (purge_haplotigs, VGP v1.0-1.5)
- "Only the primary pseudo-haplotype is shown for each assembly."
- "the BUSCO gene duplication rate were all reduced"
- "average base quality of Q40"
- "Completeness of the genome assembled measured from k-mers indicated 87.2 to 98.1%"
- "hemizygous": summariser says term does not appear. "6.7.P5.Q40.C90": summariser says does not appear in the preprint; only "6.7.Q40". These are single-pass negatives from a small-model summariser over possibly truncated text, not a text search.

## Conclusions
Q1: Published-standard definitions: NCBI glossary defines only "alternate locus" (relative to "the primary assembly") and "linked pseudohaplotype assemblies". Nothing found defining primary/principal pseudohaplotype or what happens to a hemizygous copy. Rhie 2021 Nature text NOT READ; preprint only partly read.
Q2: Nothing found, in what I could read, that defines moving a hemizygous copy to the alternate as correct OR as an error. The preprint frames the problem as false duplications (an error to remove), and the summariser reports the word "hemizygous" is absent. So the standard framing is one-directional (over-retention is the named error; over-removal is not named). I cannot say the Nature version is the same.
Q3: Nothing found defining a target rate of false removal of real sequence. QC statistics that exist in what I read: k-mer completeness, BUSCO duplication, Q40 base quality. Of these, k-mer completeness of the primary (or primary+alternate) could in principle reveal over-removal, but I found no text saying it is used for that or with a threshold for it. Published-version thresholds NOT READ.
Q4: No figure for hemizygous fraction found in anything read. Not read is not the same as absent in the Nature paper or EBP standards.

Net: COULD NOT READ the primary target (Nature paper) and the EBP standards paper. Preprint + NCBI glossary read via summariser only.
