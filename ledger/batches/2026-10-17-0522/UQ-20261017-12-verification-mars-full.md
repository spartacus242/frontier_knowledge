# MARS full-text check, working notes (2026-10-17)

## Fetches (6 of 6 used)
1. https://www.biorxiv.org/content/10.1101/2020.07.26.222299v1.full.pdf  OPENED (main text of v1 preprint, via summariser; no Methods, no Extended Data figures in the extracted text)
2. https://doi.org/10.7554/eLife.63720  -> 302 to elifesciences.org/articles/63720 (not followed automatically)
3. same bioRxiv v1 PDF, prompt on cable/implant quotes  OPENED
4. https://cdn.elifesciences.org/articles/63720/elife-63720-v2.pdf  FAILED (client error)
5. https://elifesciences.org/articles/63720  FAILED (JS "Client Challenge")
6. same bioRxiv v1 PDF, prompt on inter-annotator / stratification / bias  OPENED
NOT opened (fetch pool exhausted): bioRxiv v2 full pdf, authors.library.caltech.edu/records/x24zw-bv759 (+ preview/elife-63720-v1.pdf), elifesciences.org/articles/63720.pdf, /figures, /peer-reviews, PubMed 34846301. PMC8046566/PMC8631946: not tried (blocked per brief).

## Searches (2 of 9; none refused)
1. "presence of a microendoscope or other cabled device" MARS ... -> lists bioRxiv .full.pdf, v2 .full.pdf, eLife .pdf, Caltech preview PDF, PMC8631946, PubMed. No snippets.
2. authors.library.caltech.edu MARS ... -> Caltech record x24zw-bv759 and preview PDF exist.

## Strings checked (all in bioRxiv v1 main text, as relayed by summariser)
- "the presence of a microendoscope or other cabled device only marginally affected the performance of pose estimation" (Fig 4B-C); no numbers given
- "We do not observe a difference on individual videos with vs without cable when controlling for mean bout length" (ED Fig 7); no numbers/p-values in text
- "Precision and Recall of MARS are correlated with the average duration of behavior bouts"
- Test set 2 = mice with head-mounted microendoscopes/cable devices, 1.66 h; test set 1 = 1.7 h
- Human inter-annotator vs Human #1: mounting P 96.7+-0.9 R 96.9+-0.6; attack P 83.7+-1.3 R 86.2+-2.5; close investigation P 89+-0.9 R 80.5+-1.8; close-investigation F1 per video 0.543-0.959; "mean annotator F1 score was well predicted by the mean bout duration"
- Pose: human 86.2% within 5 mm top view vs 52.3% front; MARS 92% top vs 67% front
- Bias of group-differing classifier error on treatment effect: not found in this text

## Conclusion
Comparison with vs without cable/implant EXISTS in v1 preprint main text, for both pose and classifier, but stated qualitatively; numbers presumably in Fig 4/ED Fig 7 (not read). Published eLife version, Methods, figures, supplements NOT read. Verdict PARTIALLY CONFIRMED. Caveat: all content is summariser output, not direct page text.
