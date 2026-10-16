# UQ-20261016-48 verification notes (2026-10-16)

Budget: 4 of 6 searches used (none refused); 5 of 5 fetches used.

## Searches
1. "US AISI and UK AISI joint pre-deployment evaluation report upgraded Claude 3.5 Sonnet" -> found aisi.gov.uk page (and NIST node, fedscoop).
2. "Chao1 estimator two lists capture-recapture heterogeneity lower bound ..." -> links only: arxiv 1703.03022, Chao 1987 (gwern PDF), Reading centaur 9572 (Brittain & Bohning), Southampton eprint 210557.
3. "Chao lower bound estimator two sources ... positive dependence negative dependence" -> same set, links only.
4. "Chao1 estimator documentation ..." -> metricgate, mobr calc_chao1 docs, gwern 2017-chao.pdf; links only, not opened (fetch budget gone).

## Fetches
1. https://aisi.gov.uk/work/pre-deployment-evaluation-of-anthropics-upgraded-claude-3-5-sonnet -> opened (via summariser).
2. https://gwern.net/doc/statistics/order/capture/1987-chao.pdf -> opened (scan, OCR garbled).
3. AISI page again, exact-string check -> opened.
4. https://arxiv.org/abs/1703.03022 -> opened (abstract page only).
5. https://centaur.reading.ac.uk/9572 -> NOT readable (Anubis Access Denied).
Not opened: NIST node, fedscoop, mobr docs, metricgate, 2017-chao.pdf, Southampton eprint, technical report PDF (referred to by the AISI page).

## Exact strings checked
- "separate but complementary tests" -> present. Sentence begins: "US AISI and UK AISI ran separate but complementary tests to assess the model's capabilities across four domains..."
- "limited period of pre-deployment access" -> present: "US AISI and UK AISI conducted testing during a limited period of pre-deployment access to the upgraded Sonnet 3.5 model."
- Chao 1987: "our estimator can be regarded only as a lower bound of the population size"; "are negatively biased by heterogeneity of capture probabilities" (about Schnabel-type estimators); "We assume ... are mutually independent." Formula OCR-garbled ("N= S + fi/(2f). (8)"), read as S + f1^2/(2 f2).
- arXiv 1703.03022: "under the assumption that capture and recapture status of each individual is independent"; "there is an inherent dependency between capture and recapture attempts"; "which is not well-studied in the literature of the dual system or two sample capture-recapture method".

## Findings
Q1: Report = UK AISI / US AISI pre-deployment evaluation of upgraded Claude 3.5 Sonnet (Oct 2024 model). Division: separate but complementary tests (not the same suite). Per summary: biology only US AISI published; cyber US 40 public challenges vs UK 47 (15 public, 32 private); software/AI dev US public ML-improvement challenges vs UK private; safeguards both red-teamed (US public jailbreaks; UK public and private). Access: one shared statement, "limited period of pre-deployment access"; no per-team access levels seen on the page (not checked against the technical report). Overlap: not computable from the web page; it gives findings by institute but no item-level results; a separate technical report is referred to (not opened).
Q2: Not satisfactorily sourced. Chao 1987 confirms lower-bound property and independence assumptions but is a multi-occasion (t>2) paper; it does not discuss two lists in the text I could read. arXiv 1703.03022 confirms LP independence assumption and that dependence is understudied for two samples, but does not state identifiability. The key two-source methods paper (Brittain & Bohning 2009) was blocked. The Chao1 own documentation (mobr/metricgate) was not opened.
Unverified background (my reasoning, not from a source read here): at two lists the data are only n1, n2, m (3 numbers); a model with independence is saturated-minus-one, so dependence/heterogeneity is not identifiable without extra assumptions or covariates; Chao-type bound uses f1 = n1+n2-2m, f2 = m and is only a lower bound under heterogeneity but cannot correct for between-list dependence.
