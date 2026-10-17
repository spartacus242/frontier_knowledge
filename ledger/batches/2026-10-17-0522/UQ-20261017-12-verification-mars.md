# Working notes: MARS and Geuther error-by-group check (2026-10-17)

Budget: 1 search run (0 refused), 6 fetches used (pool exhausted).

## Searches
1. "Segalin Mouse Action Recognition System MARS ... implant versus without annotators bout length" -> returned titles/URLs only (elifesciences.org/articles/63720, .pdf, /figures; Caltech authors repository elife-63720-v1.pdf; bioRxiv 2020.07.26.222299v2.full.pdf; PMC 8631946). No text.

## Fetches
1. https://doi.org/10.7554/eLife.63720 -> 302 to elifesciences.org/articles/63720 (not auto-followed)
2. https://doi.org/10.1038/s42003-019-0362-1 -> fetch error
3. https://elifesciences.org/articles/63720 -> "Client Challenge" page, no article text. COULD NOT READ by this route.
4. https://www.nature.com/articles/s42003-019-0362-1 -> OPENED (summariser answer, not verbatim page)
5. raw.githubusercontent.com/elifesciences/elife-article-xml/.../elife-63720-v2.xml -> fetch error
6. https://authors.library.caltech.edu/records/x24zw-bv759/preview/elife-63720-v1.pdf -> OPENED, but summariser repeatedly said "this excerpt"; unclear whether whole paper was seen. v1 (not the published version of record).
Not opened: elifesciences .pdf, bioRxiv full pdf, PMC (blocked).

## MARS strings returned (Caltech v1 PDF, via summariser)
- "4 hr of which were obtained from animals with a cable-attached device such as a microendoscope"
- "including mice that are unoperated, cannulated, or implanted with fiberoptic cables"
- "are manually annotated by five human annotators" (pose)
- "by eight trained human annotators on a dataset of ten 10-min videos" (behaviour)
- "Two of these videos were annotated by all eight annotators a second time a minimum of 10 months later"
- "The pretrained version of MARS requires using animals of differing coat colors (black and white)."
Not found in what I was shown: any comparison of accuracy cable/implant vs none; any mention of bout length control; any error breakdown by strain/coat/camera/lighting.
Absence is "not seen in an excerpt", NOT "paper confirmed not to contain it".

## Geuther strings (Nature page via summariser, paraphrase with quoted fragments)
- "showed errors less than 4%" (black, gray, piebald, white-floor open field, Fig 2i)
- "higher levels of error were seen in albino mice in the open-field arena with a white floor (14%)"
- black mice 24-h arena 27%; black mice KOMP2 arena 10% (not verbatim-quoted)
- "4 of 12 videos greater than 20% disagreement" (albino)
- Metric: cumulative relative error in total distance travelled, Ctrax vs the neural network (summariser said not vs ground truth). Separate: mean IoU vs hand annotation per environment; Ctrax IoU 0.37 in KOMP2; centre error 3.1 px Ctrax vs 1.1 px NN.
Caveat: the 14%/<4% figures are Ctrax-vs-NN disagreement in distance, confounded with arena, not NN error by coat colour alone. I did not see the figure caption or the table myself.

## Conclusions
Claim 1: not supported by what I could read (training data included cable-bearing animals; no stratified comparison, no bout-length control seen). Full text unread via eLife; unresolved.
Claim 2: figures match, but metric is differently framed than the claim (Ctrax vs NN distance disagreement, colour confounded with arena).
Q3: neither paper, as far as I could see, propagates differential error into a treatment-effect estimate; at most error rates by group (Geuther) or nothing by group (MARS). Unconfirmed for unread portions.
