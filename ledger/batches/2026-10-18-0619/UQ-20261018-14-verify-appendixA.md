# UQ-20261018-14 verify Appendix A (arXiv:2506.22419v2)

READ LEVEL: PDF (arxiv.org/pdf/2506.22419v2) read through a summariser, text only; Figure A.1 image NOT visible. Appendix A body obtained via PDF fetches at offset 43000.

## Calls (7 fetches, 1 search; budget 7/7)
F1 pdf v2: OK. Title, first authors, "Date: September 3, 2025", Appendix A heading + paraphrase.
F2 html v2: OK but appendix body absent (only TOC entry); authors list shown without Xian Li; summariser said "30 Jun 2025" (likely v1 date; inconsistent with PDF footer).
F3 pdf offset 43000: OK. Appendix A paraphrase. Summariser reported my supplied strings as "appears" = ECHO, treated as non-confirmation.
S1 search: OK, found arxiv pdf, papers.neurips.cc, neurips.cc poster 121396.
F4 papers.neurips.cc abstract page: OK. Authors 23, ordered (Zhao, Magka, Jiang, Xian Li, ...). NeurIPS 2025 Datasets and Benchmarks Track.
F5 pdf offset 43000 (no strings supplied): OK. Sentence-by-sentence transcription of Appendix A.
F6 pdf whole paper: OK. Records, FSR, hardware, failures, transfer.
F7 html offset 40000: OK but excerpt lacked Appendix A, Fig A.1, Table E.1. No errors with exact text on any call.

## Findings
Q1: Title "The Automated LLM Speedrunning Benchmark: Reproducing NanoGPT Improvements". First author is Bingchen Zhao (then Despoina Magka, Minqi Jiang, ...; last Yoram Bachrach). NOT "Jiang et al." -- Minqi Jiang is 3rd. First-page note: equal contribution for first three. PDF footer "Date: September 3, 2025". Venue NeurIPS 2025 (Datasets and Benchmarks Track), per papers.neurips.cc; the PDF itself names no venue.
Q2: Heading FOUND: "A Reproducing ground-truth speedruns on our hardware".
Q3: (a) Transcription F5 piece 3: "where we report the mean and standard deviation of three runs." -> VERBATIM (obtained from an un-primed transcription; F3 confirmation alone was echo). (b) F5 piece 4: "We can see that the two curves track closely each other and, as expected," -> "the two curves track closely each other" VERBATIM. Caveat: summariser-mediated, single source.
Q4: COULD NOT DETERMINE count from text. Appendix text names only R1..R7 / R6->R7 transition; no total count stated; text does not say 21 or May 2025. Everything quantitative is in Figure A.1, which I could not see. Elsewhere paper: "As of May 2025, the NanoGPT Speedrun includes 21 successive speedrun records" (Sec 1); benchmark has 19 tasks (record 7 excluded as PyTorch-only; summariser noted record 6 inconsistency). So the claim "Appendix A re-times all 21" is NOT supported by text I read. Per-record vs pooled: text says "mean and standard deviation of three runs" and calls it "curves" (plural: published vs rerun), implying a per-record series plotted in the figure, but numbers not readable. Unresolved.
Q5: Per-record numbers: NOT FOUND in text (none in Appendix A text); only visible in figure, unread. Statement is mean and SD of three runs (3 runs per point, presumably per record; unconfirmed).
Q6: Hardware: "our AWS cluster"; GPU type not stated in Appendix A. Main paper: single 8xH100 node (Sec 1). Software: no PyTorch/CUDA versions given; upgraded PyTorch used for R1-R6 because authors did not know the earlier version -> one common (upgraded) environment, NOT period-correct. Table E.1 lists "Upgraded PyTorch 2.5.0" for record 7 (via summariser).
Q7: Appendix A: no failure count or classification. Paper elsewhere (Sec 4.5) classifies search nodes as buggy/improved/unimproved (agent nodes, not records); no count of failed records.
Q8: NOT FOUND. No transfer test; all evals on fixed 124M GPT-2, FineWeb val loss 3.28 target, one 8xH100 node. Sec 2 cites prior work on generalization, not measured here.
Q9: FSR_i = (t_i - t'_{i+1}) / (t_i - t_{i+1}); t_i previous record time, t_{i+1} target record time, t'_{i+1} agent time. Denominator = human speedup (previous record time minus target record time). Benchmark score = mean FSR over included records (Eq 2); per-record results reported with mean/SD over 3 seeds in Appendix B figures (summariser's account).
