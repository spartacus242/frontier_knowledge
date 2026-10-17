# WIMBD (arXiv:2310.20707) Appendix B.4 verification notes

CONCLUSION: Appendix B.4 COULD NOT READ. Every route I reached is truncated at ~90.7k characters, ending inside Appendix B.1.6 (Language Distribution), before B.2/B.3/B.4. Neither decisive absence can be established or refuted.

## Fetches (6 of 6 used)
1. https://arxiv.org/html/2310.20707v2 - succeeded, truncated at B.1.6 (Figure 8 caption). Visible headings B, B.1, B.1.1-B.1.6. Main text and appendix intro read. B.4 not reached.
2. same, offset 100000 - "Nothing left to read" (page text 91,682 chars).
3. same, offset 70000 - ends at "Suffix distributio" in B.1; no B.4.
4. https://arxiv.org/pdf/2310.20707 offset 90000 - ends in B.1.6 footnote (Internet Archive); no B.4.
5. same, offset 140000 - "Nothing left to read" (page text 90,693 chars).
6. https://proceedings.iclr.cc/paper_files/paper/2024/file/1f7336fd66b6e6e63d1801fdd5930a5a-Paper-Conference.pdf offset 80000 - text 90,710 chars, ends at footnote 11 in B.1; no B.4.
Not tried (fetch cap): openreview.net, wimbd.allen.ai, github.com/allenai/wimbd, ar5iv. All likely hit the same ~90k cap.

## Searches (2 of 8 used; stopped, no more fetch budget)
1. "What's In My Big Data" WIMBD Appendix "Cross-Data Analysis" ... - returned only titles/links (arxiv pdf, proceedings.iclr.cc, ar5iv, iclr.cc poster, liner review). No snippets.
2. WIMBD "B.4" cross-data analysis "document overlap" ... - links only (arxiv pdf, ar5iv, github.com/allenai/wimbd, hf papers). No snippets.

## Strings checked
- "Cross-Data Analysis (Appendix B.4)" - FOUND in appendix B intro (list of four analyses).
- Main text: B.4 described as cross-corpora analysis, "e.g., comparing the most common n-gram and document overlap" - reported by fetch summariser (paraphrase/short quote), full text of main body.
- Main text sec 4.3.2 duplicates: documents with same MD5 hash of text are duplicates; no similarity threshold; footnote 3: different random seed gave no count differences across >7 billion hashes - from fetched full text of main body.
- Pairwise overlap matrix, multiplicity distribution, union de-dup size inside B.4: NOT CHECKED, because the text was unreachable. This is NOT an absence finding.

## Bearing
B.4 is described in the main text as including document overlap between corpora, so a document-overlap table IS plausible in B.4; I cannot say whether it is a full pairwise matrix. Do not treat the proposed study as safe from duplication on this evidence. Next step: read the openreview PDF tail or the github repo via a route that is not capped at 90k chars, or a person with a browser opening Appendix B.4.
