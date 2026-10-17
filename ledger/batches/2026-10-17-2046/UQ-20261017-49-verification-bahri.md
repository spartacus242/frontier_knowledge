# Verification: arXiv:2008.13533 (Bahri et al.)
Read level: PDF (arxiv.org/pdf/2008.13533, via summariser; two fetches) + abs page. Quotes below are summariser-returned, each a single short quote, not stitched.
Calls: searches 1 (arXiv id + authors: returned irrelevant listings, no use); fetches 3 (abs: OK; pdf #1: OK; pdf #2 targeted quotes: OK). No publisher/mirror needed.

## Findings
1. Confirmed: arXiv:2008.13533v1, "Generative Models are Unsupervised Predictors of Page Quality: A Colossal-Scale Study", Dara Bahri, Yi Tay, Che Zheng, Donald Metzler, Cliff Brunk, Andrew Tomkins; submitted 2020-08-17. (Google affiliation not shown on abs page; not checked.)
2. Scale: "a random sample of 500 million English web documents obtained from the Common Crawl" (Sec 3.1) = "Web500M". Detectors: OpenAI GPT-2 detector (RoBERTa-large 356M fine-tuned on GPT-2 output) and GLTR (GPT-2 XL token ranks + logistic regression); plus an Enron-trained TF-IDF spam baseline. So the detector is not simply "GPT-2-based" in one model: it is a RoBERTa classifier trained on GPT-2 text, and GLTR uses GPT-2 XL. Time range/dedup not stated.
3. FOUND, Sec 3.3: "documents with high P(machine-written) score tend to have low language quality." Also Intro: "texts that appear machine-generated tend to be incoherent or unintelligible." Also 3.3: "Machine authorship detection can thus be a powerful proxy for quality assessment."
4. Sign: negative. High P(machine) = LOW language quality. LQ is a human rater scale (0 low, 1 medium, 2 high), raters rated buckets of documents by detector score; LQ is not defined as 1-P(machine).
5. NOT FOUND. No published pretraining quality filter (no fastText, no educational-value classifier). "fastText" absent. Only the spam baseline.
6. NOT FOUND. No pass/retention rate by provenance.
7. NOT FOUND as a corpus prevalence estimate with or without error correction. Reports fractions of flagged docs at score thresholds over time (Fig 3, Sec 3.5), burst early 2019; detector accuracy 75-85% on balanced held-out sets (Table 3) not used for correction. The word "prevalence" appears only in the abstract motivation.
Caveat: full text read through summariser, so absence claims (5-7) rest on the summariser's reading of the whole PDF, not my own grep.
