# Verification notes: MethylSaferSeqS conversion rate (UQ-20261017-14)

## Fetches (6 used of 6)
1. https://doi.org/10.1073/pnas.2220704120 - NOT OPENED (client error)
2. https://www.pnas.org/doi/10.1073/pnas.2220704120 - NOT OPENED (client error)
3. https://www.medrxiv.org/content/10.1101/2022.12.06.22283116v1.full - OPENED (preprint v1 full text, via page summariser)
4. same URL, second prompt (exact sentences + context) - OPENED
5. same URL, third prompt (unconverted C / per-molecule error rate) - OPENED
6. https://pmc.ncbi.nlm.nih.gov/articles/PMC10104560 - NOT OPENED (reCAPTCHA page returned)
Not tried (budget): opus.lib.uts.edu.au bitstream, pubmed abstract, medRxiv full.pdf.

## Searches (3 used of 8, 0 refused)
1. "average conversion efficiency of 77%" MethylSaferSeqS - links only (medRxiv pdf, UTS opus, patents)
2. "loss of half of the original DNA template molecules" ... - links only (medRxiv pdf)
3. PMC id lookup - gave PMC10104560, PubMed 37014860, opus bitstream URL

## Strings (as returned by summariser; it paraphrases around them, so only the quoted fragments are treated as verbatim)
- "average conversion efficiency of 77% (IQR: 75% to 79%)" - Performance Evaluation #5, "LM libraries"
- "with 80% of unmethylated C's converted to U's" - Step 3a, 50C 3 h, ~70% of input molecules kept
- Step 3a, 50C 16 h: >98% conversion, "loss of half of the original DNA template molecules"
- "presumably due to incomplete bisulfite conversion" - PIK3CA mutant molecules; TP53: 3.1% of C residues appeared methylated, same explanation
- fractional methylation: "the ratio of the total number of unconverted cytosines in CpG sites to the total number of CpG sites"

## Conclusion
Version read: medRxiv PREPRINT only. Published PNAS text not read (publisher + PMC blocked). Numbers could differ in the final version.
Claim 1 confirmed (preprint). Claim 2 largely confirmed: 3 h/50C chosen by trial and error for yield vs conversion; 16 h gave >98% but lost half the molecules. The paper says "optimal", not in words "deliberate lower conversion", but this is the same thing. Claim 3 partial: incomplete conversion invoked to explain methylated CpGs in mutant molecules; no per-molecule/per-read methylation error rate found in text seen (summariser noted it may have been truncated). Claim 4: per-library average (plus protocol-level 80%); no per-molecule conversion rate; fractional methylation aggregated per marker.
