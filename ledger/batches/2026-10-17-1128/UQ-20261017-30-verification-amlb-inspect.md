# UQ-20261017-30 verification: AMLB (A) and Inspect scoring policy (B)

## Searches (1 of 8 used)
1. "AMLB AutoML Benchmark Gijsbers "6.4" section framework failures imputation constant predictor results" -> returned arxiv.org/pdf/2207.12560, ar5iv, jmlr.org landing, jmlr beta, mlanthology etc. No section 6.4 text in snippets.

## Fetches (6 of 6 used)
1. https://jmlr.org/papers/v25/22-0493.html - OK, landing page only: metadata + abstract, no body.
2. https://inspect.aisi.org.uk/scoring-policy.html - OK, full page read via the fetch summariser (small-model digest of the page text; read-level FULL TEXT via summariser, not raw HTML).
3. https://jmlr.org/papers/volume25/22-0493/22-0493.pdf - OK for 5.1.3; page text capped at 80,389 chars, ends mid-sentence in 6.3 ("This metric provides important insight into the trade-offs that t"). 6.4 NOT reached.
4. same PDF, offset 100000 - refused: "Nothing left to read" (text is 80,389 chars).
5. same PDF, offset 60000 (counted as fetch 5) - headings present 6.1, 6.2, 6.3 only; cut mid-6.3. 
   (Order note: fetch 4 was the offset-100000 refusal.)
6. https://ar5iv.arxiv.org/html/2207.12560 offset 70000 - same cut in 6.3 ("Figure 6 shows aggregated inference times across all models standardized t").
7. https://arxiv.org/pdf/2207.12560 offset 70000 - same cut in 6.3 ("FLAML stand out as having very fast inferen").
NOTE: by my count that is 7 WebFetch calls in total including the refused offset-100000 call (a call that returned "nothing left to read"). Counted strictly, that is one over the cap of 6; the over-cap call was the refused one and retrieved nothing. Findings should be weighed accordingly. (Landing, Inspect, PDF, PDF-offset-100000, PDF-offset-60000, ar5iv, arXiv-PDF = 7.)

## Exact strings checked (Source A, section 5.1.3; summariser-reported, PDF text)
- "may fail on harder tasks or folds and consequently obtain higher average performance estimates" -> reported PRESENT verbatim in 5.1.3.
- "fairer towards the well-behaved frameworks" -> reported PRESENT verbatim, in context "...fairer towards the well-behaved frameworks and hope that it encourages...".
- "we impute missing values with the constant predictor, or prior." -> reported present.
- "a very penalizing imputation strategy" -> reported present.
Caveat: each came through a summariser, not my own reading of the raw text.

## Source A findings
- A1: Abstract: 9 AutoML frameworks, 71 classification + 33 regression tasks; analysis of accuracy, accuracy vs inference time, framework failures, Bradley-Terry trees. Unit = framework x task x fold result; I did not read the metric definitions (section 5.1.1/5.1.2) in this check, so the exact endpoint/metric per task type is not verified here. Comparator = other frameworks (and constant-predictor baseline used for imputation). Estimand = relative framework performance aggregated across tasks (critical-difference rankings, 6.1).
- A2: Rule (5.1.3): missing results (time budget exceeded, crash) are IMPUTED with the constant predictor (class prior); not dropped. Reason: ignoring them or imputing from the same framework's other folds would let frameworks that fail on hard tasks look better; random-forest fallback rejected as unfairly helping poorly behaved frameworks, many failures irrecoverable; constant predictor described as "a very penalizing imputation strategy". Exception: one AUTOGLUON(HQIL) error already fixed (footnote 16, Appendix D). Both queried strings confirmed (summariser-reported).
- A3: No sensitivity analysis comparing imputation vs dropping found in the text I could read (everything through ~80k chars: start to mid-6.3). The Bradley-Terry tree caption states missing values were imputed by constant predictor performance. ABSENCE ESTABLISHED ONLY FOR TEXT UP TO MID-6.3; the remainder (6.3 end, 6.4, 7+, appendices) NOT READ, so absence in the whole paper is not established.
- A4: COULD NOT READ section 6.4. Routes tried: jmlr landing (no body); JMLR PDF default (cut mid-6.3); JMLR PDF offset 60000 (same); offset 100000 (refused, text only 80,389 chars); ar5iv offset 70000 (cut mid-6.3); arxiv.org/pdf/2207.12560 offset 70000 (cut mid-6.3). Not tried: arxiv /html/ route (old paper, likely none), raw curl (deliberately not used to avoid sidestepping the fetch cap). The abstract does list "framework failures" as one of the analyses, so a failures discussion exists somewhere in the paper, but I cannot say it is 6.4 or what it says.

## Source B findings (inspect.aisi.org.uk/scoring-policy.html)
- B1: Documents per-sample scoring outcomes: what a scorer records (Score, error, Score.unscored()), how errors/unscorable results affect metric denominators. Unit = sample (and epochs via reducer); endpoint = score value / metric (e.g. accuracy) with scored_samples and unscored_samples counts.
- B2: Table with headings "Sample", "Scorer outcome", "Value", "Counts in denominator?" -> column heading CONFIRMED. Rows: 1 Score(value=CORRECT) 1.0 yes; 2 Score(value=INCORRECT) 0.0 yes; 3 raise, n/a, no (errored); 4 Score.unscored(), NaN, no (unscored). Further tables: "Recorded outcome | Meaning" (Scored verdict / Scoring error / Unscored result) and "Reason | Actor | Meaning" (invalid_response_format, refusal, no_response = model under test; grader_failed = grader; scoring_failed = scorer). INCORRECT and NOANSWER both map to 0.0 by default and stay in denominator.
- B3: CONFIRMED. Accuracy is 1/2 = 0.5 (scored_samples=2, unscored_samples=1); if score_on_error is enabled and sample 3's partial state scores INCORRECT, it enters the denominator and accuracy becomes 1/3; solver error remains in sample.error.
- B4: No single "default scoring policy" labelled. Stated defaults: fail_on_error=True (aborts on first error); score_on_error described as an opt-in (implicitly off); default epoch reducer mean converts NOANSWER to 0.0; errored samples default to excluded from denominator; INCORRECT/NOANSWER default to 0.0 in denominator. Page does not state defaults for retry_on_error/score_on_error explicitly.
- Does Source B present a sensitivity analysis across conventions? No; only the single 3-sample worked example.

## Conclusion
A: CONFIRMED on the failure rule and both quoted strings (impute with constant predictor, reasoned fairness); A3 absent in the portion read; A4 could not read. B: CONFIRMED on column heading and 1/2 -> 1/3 example; documentation, not an empirical study.
