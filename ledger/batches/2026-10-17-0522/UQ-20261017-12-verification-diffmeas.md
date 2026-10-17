# Prior-art: group-dependent measurement error in automated behaviour tracking -> effect-size bias
Budget: 9/9 searches used (none refused), 6/6 fetches used. Search returns titles/URLs only (no snippets), so hits not opened are NOT read.

## Queries (1-line results)
1. differential misclassification automated behavior scoring bias effect size ... pose estimation -> generic epidemiology misclassification pages (CDC, bookdown, ISPOR QBA); no animal-behaviour hit.
2. prediction-powered inference automated behavior classifier animal ... -> arXiv 2411.19908 (Gronsbell et al.), Kabra/Branson classifier-error pages; nothing animal+PPI.
3. DeepLabCut OR SLEAP tracking error differs between genotypes/treatment groups ... -> eNeuro 2026 DLC zebrafish larva paper, eLife RP 95709; no group-differential-error effect-size paper seen.
4. "measurement error" ML-derived behavioral phenotype ... annotator classifier groups -> arXiv 2604.07591 (human labelling framework, not opened), Jhuang et al. (not opened).
5. post-prediction inference "predicted outcomes" bias correction behavior neuroscience ... -> postpi (bioRxiv 2020.01.21.914002), PMC7720220, arXiv 2512.05456, 2507.09119 (latter three not opened).
6. automated behavior classifier accuracy differs between control and knockout mice ... -> mouse knockout phenotyping/temporal variation (PMC4208881), eLife RP 107259 (could not open); nothing on point seen.
7. automated tracking errors systematically differ between experimental groups ... -> PMC6686839 (aquatic toxicology video analytics; NOT opened), EthoVision vs ANY-Maze, others.
8. quantitative bias analysis misclassification sensitivity preclinical animal ... -> episensr vignette, sunitinib preclinical threats meta-analysis (PMC4600817, not opened); epidemiology QBA only.
9. prediction-powered inference ecology/ethology/animal behavior ... -> bioRxiv 2024.10.18.618969 (holistic ML classification animal studies, not opened), camera-trap "Robust ecological analysis of camera trap data labelled by ML model" (not opened; possibly the closest applied-ecology use of correcting inference for ML labels).

## URLs opened
- https://arxiv.org/abs/2411.19908 : OPENED (abstract summary). Gronsbell et al., "Another look at statistical inference with machine learning-imputed data". Generic PB inference; no animal behaviour; no group-differential error.
- https://www.eneuro.org/content/13/9/ENEURO.0071-26.2026.full.txt : OPENED (summariser answer only). DLC larval zebrafish tracking; error compared across imaging conditions, not genotypes/treatments; no effect-size bias estimate. Strings: "These results suggest that our DLC models are more sensitive to changes in image resolution."; "we did not evaluate the accuracy of eye-angle estimates."
- https://elifesciences.org/reviewed-preprints/95709 : COULD NOT READ (JS client challenge).
- https://elifesciences.org/reviewed-preprints/107259/figures : COULD NOT READ (JS client challenge).
- Kabra supplementary PDF (janelia.org) : OPENED. Per-example influence of training examples; no group comparison. String: "a training example has influence on a test example if its score changed by more than twice".
- https://www.biorxiv.org/content/10.1101/2020.01.21.914002v1.full.pdf : OPENED (summary). postpi, Wang/McCormick/Leek. Human RNA-seq and verbal autopsy only. Does not model differential error. Strings: "we can no longer assume that the errors are independent of the predicted values"; "we assume the training, testing and validation sets follow approximately the same data generating distribution".

## Conclusion
Found nothing doing BOTH (i) and (ii) in animal tracking/behaviour within this budget. That is "found nothing in 9 searches / 5 pages read", not proof of absence; ~8 candidate hits unopened. Only-(i)-type: none confirmed (eNeuro compares conditions, not experimental groups). General machinery (PPI, postpi, ML-imputed inference, epidemiological QBA) exists but the pages read show no animal-behaviour application.
