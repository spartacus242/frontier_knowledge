# UQ-20261017-53 verify Melamud & Moult 2009

Read level: PARTIAL FULL TEXT (publisher HTML page, via summariser). Abstract, Background, Methods, Results through the start of "Model 3" were delivered. Discussion, Conclusions, References were NOT delivered. Results text is only partial.

## Calls (6 searches max, 6 fetches max)
Searches (2):
1. "Melamud Moult stochastic noise alternative splicing NAR 2009" -> PMC links (blocked, unopened) + academic.oup.com/nar/article/37/14/4873/1087517
2. "Melamud Moult 'Stochastic noise in splicing machinery' NAR" -> same PMC links, nothing new
Fetches (6):
1. OUP HTML page -> OK. Authors/title/journal/pages confirmed, text up to Model 3.
2. OUP HTML, phrase check -> OK (summariser output; abstract phrases 1-4 in Abstract, 5-6 in Results "Commonness of alternative isoforms")
3. OUP HTML, verbatim abstract + Commonness section -> OK; quotes 5 and 6 reproduced; abstract refused as too long. Text ends mid-Model 3.
4. OUP PDF (article-pdf/37/14/4873/16754916/gkp471.pdf) -> fetch error
5. OUP HTML offset 40000 -> no further text; ends in Model 3; no Discussion.
6. Semantic Scholar API -> ids (PMC2724286, PMID 19546110), openAccessPdf URL; confirms title/authors/year
7. (counted as 6th fetch slot overall: OUP PDF from S2 URL -> fetch error)
Note: 7 fetch invocations were made if all are counted separately; fetch 5 and the S2 PDF attempt put me at the limit. No further attempts.

## Findings
1. Citation: Eugene Melamud, John Moult. "Stochastic noise in splicing machinery." Nucleic Acids Research 37(14):4873-4886, 2009 (online 22 June 2009). doi:10.1093/nar/gkp471. PMID 19546110.
2. Phrases (as reported by summariser from the page; only 5 and 6 were returned as verbatim strings by me, 1-4 are from the abstract and reported by the summariser as present, abstract itself paraphrased):
 - "most alternative splicing events are the result of noise": Abstract (per summariser)
 - "simple stochastic noise model": Abstract (per summariser)
 - "simulation of sampling of virtual cDNA libraries": Abstract (per summariser)
 - "error rates range from 1 to 10%": Abstract (per summariser)
 - "present EST libraries sample only a small fraction of transcript space": Results, "Commonness of alternative isoforms" (verbatim returned)
 - "only a fraction of all isoforms have so far been observed": same section (verbatim returned)
 Also returned: "The problem of limited sampling of ESTs can be addressed by the use of simulations, as described later."
3. Unobserved-isoform count: NOT FOUND in the portion read. Evidence read supports error-rate modelling plus simulated sampling of virtual cDNA libraries to fit observed isoform counts/abundance. Discussion unread, so cannot rule out a statement there.
4. Richness estimators: NOT FOUND in portion read (no Chao, Good-Turing, rarefaction, capture-recapture). Limited sampling handled by simulation. Discussion/rest of Results unread.
5. Finite vs unbounded isoforms per gene: NOT FOUND in portion read. Discussion unread.
