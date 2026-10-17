# Notes: does model-collapse literature parameterise risk by training-set synthetic fraction?
Budget used: 5 searches (of 8), 6 fetches (of 6). All fetch content came via a summariser; quotes are short and unstitched.

## Read levels
- Shumailov et al. arXiv:2305.17493 -- ABSTRACT ONLY (abs page). Index not stated on abs page; "GPT-{n}" notation implies generations; no formal def read.
- Alemohammad et al. arXiv:2307.01850 (MAD) -- ABSTRACT ONLY. "without enough fresh real data in each generation" ; three loop types (fully synthetic, synthetic augmentation, fresh data loop).
- Gerstgrasser et al. arXiv:2404.01413 -- ABSTRACT ONLY. replace vs accumulate; replace: error grows with generations; accumulate: "finite upper bound independent of the number of iterations".
- Bertrand et al. arXiv:2310.00429 -- ABSTRACT ONLY. Stability if initial models good and "the proportion of clean training data (w.r.t. synthetic data) is large enough" (lambda).
- Dohmatob, Feng, Kempe arXiv:2410.04840 (Strong Model Collapse) -- PDF (summariser-mediated; extent of full coverage not verified). n := n1+n2; n2/n -> p2; n2 = p2 n synthetic; extra term zeta ~ p2^2 tr Delta. Fraction set by construction (MNIST, BabiStories sweeps).
- arXiv:2402.07712 (fetched as pdf) -- PDF. OLS-regression recursion; degradation proportional to number of generations n; no mixing fraction. Title not displayed in result; content matches "Model Collapse Demystified: the case of regression" (inferred, not verified). NOT "A Tale of Tails" (that is 2402.07043 per search result).
- Seddik et al. 2404.05090; Dohmatob "Tale of Tails" 2402.07043 -- COULD NOT READ (search listing titles only; fetch budget exhausted).
- Searches for a paper deriving the fraction from a measured filtered corpus returned nothing relevant (titles only). This is absence in search listings, not a read absence.
