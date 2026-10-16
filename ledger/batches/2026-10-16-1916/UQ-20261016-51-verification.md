# UQ-20261016-51 verification notes

## Searches (2 of 6 used; none refused)
1. "Li ... Open-Source Data Contamination Report ... 2310.17589 clean input contaminated input-and-label contaminated" -> returned arxiv 2310.17589 (pdf, html v2/v1, abs v3), OpenCompass contamination_eval doc page. No snippets.
2. "MMLU answer keys taken from same web pages Hendrycks ..." -> returned only secondary items (Gaperon, infini-gram mini, 2311.09783, blogs, HF flan-ul2 discussion). No primary source found; none opened.

## Fetches (5 of 5 used)
1. https://arxiv.org/abs/2310.17589 -> opened. Title: An Open Source Data Contamination Report for LLMs (Yucheng Li, Frank Guerin, Chenghua Lin). Abstract only; three category terms not in abstract. Abstract: contamination ~1%-45%; C-Eval gain up to 14%, HellaSwag up to 7%, minimal on MMLU.
2. https://arxiv.org/html/2310.17589v2 -> opened. Definitions + table-based lower-than-clean list (summariser output, not re-checked cell by cell).
3. https://doc.opencompass.org.cn/advanced_guides/contamination_eval.html -> opened. No formal definitions; labels only. Example table numbers from summariser (not re-checked).
4. https://arxiv.org/html/2310.17589v2 (second pass) -> opened; exact-string checks confirmed.
5. https://arxiv.org/abs/2009.03300 (Hendrycks et al., MMLU) -> opened; abstract page only, says nothing on collection method, answer keys or contamination.
Not opened: github.com/liyucheng09/Contamination_Detector (no fetch budget left); the MMLU paper full text (arxiv.org/pdf/2009.03300 or html) not tried.

## Exact strings checked (arXiv html v2)
- "only question is presented in the matched pages" -> found: "where only question is presented in the matched pages but not answer"
- "both question and answer occur in the matched pages" -> found: "where both question and answer occur in the matched pages"
- "no matches with the training set" -> found: "Clean subsets on the contrary, contain examples have no matches with the training set."
- Contaminated (general) "having verbatim matches in the Common Crawl training dataset" -> reported in pass 2 only; not re-verified in isolation.
- OpenCompass: "mark each test sample as clean / question contaminated / both question and answer contaminated" and column labels "accuracy - clean", "accuracy - input contaminated", "accuracy - input-and-label contaminated" -> from one summariser pass, not re-checked.

## Findings
Q1: Li paper: all three categories, defined (clean; input-only = question but not answer in matched page; input-and-label = both). Note paper's naming: "input contamination"/"input-and-label contamination". OpenCompass: the three labels appear as column headers and "clean / question contaminated / both question and answer contaminated"; no formal definitions on that page (the OpenCompass doc is the derived implementation of the Li method).
Q2: No for both, as read. Li: input-and-label means answer present on page; paper does not record a page answer that differs from gold (summariser statement; absence claim). OpenCompass page silent. Caveat: only a text/summariser read; code (Contamination_Detector, opencompass source) not inspected.
Q3: Yes. Li Tables 2/3 per summariser: e.g. MMLU LLaMA 65B, Mistral 7B, Baichuan2 7B; Hellaswag Llama-2 13B, Mistral 7B, Yi 6B; ARC LLaMA 7B/13B; C-Eval Mistral 7B. OpenCompass example output (ppl mode): qwen-7b-hf ceval overall clean 58.97 vs input contaminated 49.28 (ceval-hard 41.13 vs 25.00); yi-6b-hf ceval-hard 44.35 vs 37.50. Caveat: cell values not verified by me directly; Table 2 vs Table 4 differ for same models (e.g. LLaMA 7B MMLU clean .3427 vs .3518); the OpenCompass numbers are a doc example, probably not a published result. Not an estimated effect: observational subset difference, subset sizes unknown, no CIs.
Q4: Not found. Hendrycks abstract silent; Li paper silent on MMLU answer keys (summariser). No primary source located within budget.
