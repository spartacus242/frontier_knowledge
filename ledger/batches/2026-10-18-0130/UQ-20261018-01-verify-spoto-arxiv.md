# UQ-20261018-01 verify Spoto arXiv:2506.14669

Read level: PDF (arxiv.org/pdf/2506.14669, read through the WebFetch summariser; not raw text). Abstract page also read. Quotes below are short summariser-relayed fragments, each quoted alone, none stitched.

## Calls
- Searches: 0 of 6
- Fetch 1: https://arxiv.org/abs/2506.14669 -> OK. Title, authors, date, abstract (abstract was paraphrased by summariser).
- Fetch 2: https://arxiv.org/pdf/2506.14669 -> OK. Sections 3-5, Table 2, Fig 4, Table S2 described.
- Total: 2 of 6 fetches. Not opened: /html/ route, publisher, mirrors (not needed).

## Findings
1. Identifier names the paper. Title: "Quantifying Diagnostic Signal Decay in Dementia: A National Study of Medicare Hospitalization Data". Authors: Federica Spoto, Jiazi Tian, Jonas Hugel, Daniel T. Ortega, Christine S. Ritchie, Deborah Blacker, Francesca Dominici, Chirag J. Patel, Daniel Mork, Hossein Estiri. Submitted 17 Jun 2025, stat.ME. First author Spoto matches.
2. Measures: patient-level cohort (1,827,468 FFS beneficiaries 65+, 3,045,819 hospitalizations, 2016-2018 Part A, 17 ICD-10 dementia codes in 5 categories). tSPM+ builds patient-level code sequences; temporal code-correlation matrices per county/state compared with national matrix by random-skewers similarity. Endpoint: county-level similarity score (Sec 3.4). Estimand: not formally stated; regression is descriptive association with county covariates (state fixed effects); abstract says model explains 38% of variance in alignment. Counties <11 patients suppressed.
3. Persistence: partly. Measured as within-category temporal correlation and specific-to-non-specific shift (Sec 4.2: "persistent documentation of vague diagnoses over time"). Code disappearance/removal is NOT a measured quantity.
4. No conditioning on any test result, biomarker, imaging or disconfirming finding; claims/ICD-10 only. Limitations (Sec 5.1) mention delirium misclassification and "real clinical uncertainty" but do not analyse them.
5. No hazard, survival analysis or cumulative incidence of code removal. Methods: frequencies, Spearman correlations (Holm-Bonferroni), random skewers, linear regression, 1-MAD sensitivity (Table S2).

## Caveat
Section numbers and quotes come via the summariser; not independently checked against raw PDF text.
