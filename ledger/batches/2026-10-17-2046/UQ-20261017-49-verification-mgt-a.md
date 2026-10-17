# Verification notes: arXiv:2609.40295
Read level: FULL TEXT via arxiv.org/html (summariser-mediated, TRUNCATED: Appendix A.1/A.2 and D bodies missing, Table 1 cut mid-row). Abstract page also read.

## Calls
1. WebFetch arxiv.org/abs/2609.40295 -> OK. Title/authors/date/abstract.
2. WebSearch "arXiv 2609.40295 machine-generated text pretraining quality filters" -> nothing relevant (returned 2510.00866 Apple quality-filtering paper etc).
3. WebFetch arxiv.org/pdf/2609.40295 -> FAILED, HTTP 429 proxy rate limit.
4. WebFetch arxiv.org/html/2609.40295 -> OK, truncated, answers below.
Used 1 search, 3 fetches.

## Findings
1. Exists. "How Much Is an AI Token Worth? Scaling Laws for Wild AI-Generated Web Text"; Jenna Russell, Ben Glickenhaus, Katherine Thai, John Wieting, Mohit Iyyer, Max Spero, Bradley Emi; cs.CL; v1 30 Sep 2026.
2. FOUND (sec 2 "AI-generated data is more likely to survive quality filters"; intro). 2.3x = AI-labeled/human-labeled survival through FineWeb pipeline, 29.3% vs 12.8%. 9.8x = DCLM full pipeline 14.5% vs 1.5% (14.5/1.5=9.7; rounding). Units are texts/documents. Audit of 10,000 raw CC documents. Fig 2 caption says "2026 Common Crawl sample" - sample description not clearly consistent.
3. FOUND, but with caveats. 27.5% -> 31.1% are TOKEN shares among tokens passing FineWeb filters, June 2026 vs August 2026 (time trend, not pre/post filter). Fig 1 caption: share is Pangram "AI or Mixed"; "AI alone" 28% June 2026 -> label definition of 31.1% unclear. Trend sample ~310,000 docs, ~5,000/month.
4. FineWeb v1.4.0 replication run on Jul 2025-Jun 2026 CC (fn 2). DCLM "full pipeline" referenced with survival numbers; components not named, DCLM cited (Li et al. 2024). FineWeb-Edu, DCLM fastText, Nemotron-CC: not mentioned in text I could read. Thresholds not stated.
5. FineWeb-style filtering on Jul 2025-Jun 2026 data; trend sample Jan 2021-Aug 2026, one sample/month. No snapshot IDs given.
6. Pangram 3.3.2, with EditLens Llama-3.2-3B preselection over >280B tokens. FPR 0.05%, FNR 1.99% attributed to Glickenhaus et al. 2026 (Pangram-affiliated author, i.e. developer-reported). 0.062% = Pangram label rate on 60,000 pre-2022 docs from 2021 crawls, called an upper bound on FPR.
7. NOT FOUND in readable text: no Rogan-Gladen or equivalent; shares appear to be raw labels (not explicitly said). WildAI 42% AI share inflated by preselection (fn 3), not corrected.
8. NOT FOUND: no threshold sweep / keep-rate ladder in readable text; Fig 2 is per-stage survival for one sample. Appendix A.1 "Effects of Quality Filtering" body was truncated, so cannot rule out.
