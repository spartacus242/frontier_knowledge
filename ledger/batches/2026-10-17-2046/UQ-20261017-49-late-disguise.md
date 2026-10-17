# Working notes UQ-20261017-49 (8 searches, 6 fetches used)
Finding: no second study found that measures AI vs human keep-rate through a pretraining quality filter. Absence over search results + abstract-level reads only; not proof of absence.
Opened (read level):
- arXiv 2602.10833 Xion & Nejdl, dense-retrieval source bias: ABSTRACT ONLY (abs page); not about pretraining filters.
- arXiv 2604.06163 Huang et al., Data Not Model, retriever source bias: ABSTRACT ONLY; no filters.
- arXiv 2609.12353 SynthSentry: ABSTRACT ONLY; corpus-level contamination score; no keep rates.
- arXiv 2510.25771 Gaperon: PDF, partial (sec 2.1.2, 2.1.4 read; sec 7.2.2 and appendices NOT in the text returned); no AI-vs-human classifier scores seen.
- arXiv 2509.18577: PDF, sections 1-5 + appendices; noise filtering (PPL, DSIR, fastText); no AI-vs-human keep rates. (Title not returned by summariser.)
- Pew Data Labs methodology 2026-08-20: FULL PAGE (summarised); prevalence of AI text in Common Crawl, 49 crawls x 10,000 English pages, Pangram editlens_Llama-3.2-3B threshold 0.2, 35% of July 2026 dated pages; ~1% FP on pre-ChatGPT 2021-22; no numeric correction; nothing on filters.
SEARCH SNIPPETS ONLY / titles, not opened: Graphite "AI now writes as many articles as humans" (prevalence); Dolezal et al 2026 (cited by Pew, 35% of newly published sites); 2502.15654 Machine-generated text detection prevents language model collapse (detection, not filter survival); Apple "Data-Quality Illusion"; Nemotron-CC 2412.02595; FineWeb 2406.17557 (both only as listed results, not read for this question); digitalapplied and chatpaper summaries of 2609.40295 (secondary).
Method-vocabulary search (Rogan-Gladen, sensitivity/specificity) returned: 2601.17036 (arXiv review vs non-review LLM-text prevalence), 2601.05420, Indeed blog on calibrating LLM estimates, NBER w34223 -- all titles only, not opened; none appears to concern pretraining filters.
