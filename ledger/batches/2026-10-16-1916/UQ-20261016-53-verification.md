# UQ-20261016-53 verification: Google Deep Learning Tuning Playbook

## Searches (3 of 6 used; none refused)
1. "per-arm hyperparameter tuning confound unequal tuning budget fair comparison ..." -> returned Sivaprasad 2019 (arXiv 1910.11758), Empirical Design in RL (2304.01315); not opened.
2. "hyperparameter tuning confound comparison of methods tuned separately per method ... optimizers" -> returned DeepOBS, Choi et al. 1910.05446, Schmidt et al. 2007.01547; only Choi opened.
3. "hyperparameters tuned separately for each method confounds comparison; fix hyperparameters across arms ..." -> nothing on point (playbook scientific page, unrelated causal/ablation papers).

## URLs
- OPENED (5 of 5 fetches used): https://github.com/google-research/tuning_playbook (4 fetches: chars 0-100000 three times with different prompts, then offset 100000 for the last 19369 chars); https://arxiv.org/abs/1910.05446 (abstract only).
- NOT opened: arxiv 1910.11758, 2007.01547, 2304.01315, developers.google.com mirror of the playbook.

## Exact strings checked (one at a time)
- "need to be optimized over in order to fairly compare": FOUND. Source line-wraps after "over in". Full sentence start: "Nuisance hyperparameters are those that need to be optimized over in order to fairly compare different values of the scientific hyperparameters." Section: "Identifying scientific, nuisance, and fixed hyperparameters" under "Designing the next round of experiments" (within "A scientific approach to improving model performance").
- "would not be very insightful": FOUND. "...so comparing different model sizes assuming a single specific value of the weight decay would not be very insightful." Same section. Point: weight decay interacts with model size, so fixing a nuisance hyperparameter that interacts with the scientific one gives uninformative comparisons.
Caveat: quotes come via a page summariser, so the fragments are pieces, not full-paragraph verbatim.

## Q2 definition and prescription
Definition as above. Prescription (Creating a set of studies): run the pipeline with different values of the scientific hyperparameters "while at the same time 'optimizing away' (or 'optimizing over') the nuisance hyperparameters so that comparisons between different values of the scientific hyperparameters are as fair as possible." Simplest case: "a separate study for each configuration of the scientific parameters, where each study tunes over the nuisance hyperparameters"; e.g. "compare the two optimizers by selecting the best performing trial from each study." So the playbook prescribes per-arm re-tuning as the fair comparison.

## Q3 estimability / confounding
Searched the whole page text (0-119369 chars): terms confounding, confounded, estimability, bias not found in connection with re-tuned nuisance hyperparameters. The playbook frames the risk the opposite way: NOT re-tuning gives unfair comparisons ("we might make unfair comparisons between values of the scientific hyperparameters by not searching ..." and "due to some values getting luckier with the sampling of the nuisance hyperparameters"). It says nothing about what re-optimising per arm does to the main effect's estimand (main effect becomes a contrast of best-of-arm performances, i.e. a difference in tuned optima, not a ceteris-paribus effect at common nuisance values). That is an inference, not in the text.

## Q4 published position treating per-arm retuning as a confound
Not found. Choi et al. 2019 (arXiv 1910.05446, abstract read): optimizer rankings depend on the tuning protocol/search space; with unlimited tuning a more general optimizer should not do worse than the cases it includes. Unit: optimizers on NN training tasks; endpoint/estimand not stated in the abstract; comparator: optimizers vs each other (momentum, SGD, Adam). It supports full per-optimizer tuning, not the confound view. Unequal tuning effort/budget as a confound is a related concern (Sivaprasad 2019, not read). Conclusion: no position identified; I cannot name one.
