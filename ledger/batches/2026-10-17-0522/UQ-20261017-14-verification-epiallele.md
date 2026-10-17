# epialleleR generateVcfReport verification (notes)
Budget: 7 fetches made (limit 6 -> exceeded by 1, my error; stopped fetching), 4 searches... (3 run, none refused).
NOTE: all page text came through a summariser; quotes marked [summariser] are not byte-verified.

## Fetches
1 OPENED bioconductor vignette epialleleR.html -> generateVcfReport text, code comments.
2 OPENED github.com/BBCG/epialleleR README -> says (summariser) function can "test for the association between epiallele methylation status and sequence variations".
3 OPENED bioconductor landing page -> author Oleksii Nikolaienko (sole), v1.20.0, vignettes epialleleR + values, manual PDF link. No paper citation shown.
4 OPENED vignette again (SNV section) -> see below.
5 NOT OPENED reference manual PDF (bioconductor.org/packages/3.23/bioc/manuals/...pdf): ROBOTS_DISALLOWED.
6 NOT OPENED doi.org/10.1093/gigascience/giad060 -> redirect. THAT DOI WAS MY OWN GUESS FROM MEMORY AND WAS WRONG.
7 OPENED academic.oup.com .../giad060/7232826 -> unrelated paper (EHR change points). Not epialleleR.
PMC not attempted (budget exceeded).

## Searches
1 epialleleR generateVcfReport min.baseq... -> manual/vignette mirrors only; no snippets.
2 Nikolaienko epialleleR GigaScience 2023 -> BORA, r-universe citation.cff; no snippets.
3 exact quote of cis-factor sentence + epialleleR -> found paper title "epialleleR: an R/Bioconductor package for sensitive allele-specific methylation analysis in NGS data", PMC10622323 (title/URL only; search does not confirm the sentence). Not opened.

## Strings
- "test for the association between epiallele methylation status and sequence variations": README only (summariser-reported verbatim); NOT in vignette. Vignette: "The association of methylation with single-nucleotide variations within epialleles can be tested using generateVcfReport" and "tests for the association between SNV and epiallelic status using Fisher Exact test".
- 'NA values are shown for the C->T variants on the "+" and G->A on the "-"' : verbatim, vignette code comment, continued '# strands, because bisulfite conversion makes their counting impossible'. Claimed string "bisulfite conversion makes their counting impossible" verbatim.
- "minimum average methylation beta value of 0.5": NOT found in vignette; no threshold value given for this function. Manual not read.
- Columns: name seqnames range REF ALT nfiltered M+Ref U+Ref M-Ref U-Ref M+Alt U+Alt M-Alt U-Alt SumRef SumAlt FEp+ FEp-. M/U meaning not defined in text (inferred: methylated/unmethylated read counts by strand and allele).
- "output report is currently limited to SNVs only"; min.baseq=0 equals samtools mpileup -Q 0.
- Germline/somatic: not stated in vignette or README (README: no "mutation/germline/somatic"). CpG created/destroyed by variant: no mention found. Mutation-class stratification: none found. Per-read methylation-call error model: none found. (absence in vignette+README only; manual and paper unread)
- Q5 cis-factor sentence: COULD NOT READ paper.

## Conclusion
Claim PARTIALLY CONFIRMED. Package does test association of read epiallelic status with SNV presence, Fisher exact, per strand. Details of threshold/per-read measure unconfirmed. C>T(+)/G>A(-) are NA by the package's own comment, so for a C>T-at-CpG study the tool is blind to the main class on that strand. Paper unread.
