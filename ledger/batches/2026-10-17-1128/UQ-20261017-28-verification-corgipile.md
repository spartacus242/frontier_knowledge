# UQ-20261017-28 CorgiPile verification notes
All reads went through the WebFetch page summariser (no raw text), so quotes are summariser-reproduced, not independently diffed.

## Searches (1 of 8)
1. "CorgiPile: Efficient Data Shuffling block-level buffer SGD Xu SIGMOD 2022 arXiv" -> found arXiv 2206.05830 (Stochastic Gradient Descent without Full Data Shuffle), Springer VLDBJ page, MSR page.

## Fetches (6 of 6)
1. arxiv.org/abs/2309.01640 - OK (abstract only): Corgi^2, Livne, Kaplun, Malach, Shalev-Shwartz. h_D not in abstract.
2. arxiv.org/pdf/2206.05830 - OK (full text via summariser): h_D, datasets, no measurement.
3. arxiv.org/pdf/2206.05830 (2nd prompt, verbatim passage) - OK.
4. arxiv.org/html/2309.01640v1 - OK (full text incl. appendix claim): h_D, h'_D, experiments.
5. link.springer.com/article/10.1007/s00778-024-00845-0 - OK main text; appendix with proofs NOT included (deferred to technical report [46]).
6. arxiv.org/pdf/2206.05830 offset 40000 - OK, covered only the middle excerpt; could not rule out appendix beyond the excerpt.

## Strings checked
CorgiPile arXiv 2206.05830 (SIGMOD-version content):
- "Here, $h_D$ is an essential parameter to measure the "cluster" effect within the original data blocks." FOUND
- "Let's consider two extreme cases: 1) ( $h_D=1$ ) all samples in the data set are fully shuffled," FOUND
- "2) ( $h_D=b$ ) samples are well clustered in each block, for example, all samples in the same block are identical." FOUND
- "Therefore, the larger $h_D$ , the more "clustered" the data." FOUND
- "uniformly and independently with replacement": NOT FOUND in arXiv CorgiPile ("uniformly" absent; "uniform distribution" only in Example 2)
- gradient noise / critical batch / large-batch / language model: absent in excerpt read (offset 40000 onward) and in first full-text pass
VLDBJ 2024 (Springer):
- "the factor h_D to characterize the upper bound of a block-wise data variance" FOUND (summariser)
- "an essential parameter to measure the "cluster" effect within the original data blocks" FOUND
- "the common assumption is that data is sampled uniformly and independently with replacement in each epoch" FOUND (summariser) -> comparator language is in VLDBJ extension, not in arXiv SIGMOD version
Corgi^2:
- "h_D represents a constant that characterizes the variability of this block-wise gradient." FOUND
- "the value of $h_D$ will be larger when each block exhibits greater homogeneity." FOUND
- "where $h'_D = 1 + \left(\frac{1}{n} - \frac{1}{nb}\right) h_D$" FOUND (matches review's h'_D)
- "$h'_D$ controls the convergence rate, as it linearly impacts the leading term $\frac{1}{T}$." FOUND
- "uniformly and independently with replacement": NOT FOUND (uses "(i.i.d with replacement)")
- Corgi^2 "essential parameter" phrase: not reported; h_D=b always holds, near 1 for shuffled.

## Conclusions
- h_D defined by (1/N) sum_l ||grad f_{B_l}(x) - grad F(x)||^2 <= h_D sigma^2/b; a bound constant in Theorems 1 and 2, not estimated.
- No empirical measurement of h_D or gradient variance in any main text read; appendices of CorgiPile arXiv only partly checked; VLDBJ proofs live in a technical report not read.
- No link to gradient noise scale, critical batch size, large-batch prescriptions.
- No LLM pretraining. Datasets: CorgiPile: higgs, susy, epsilon, criteo, yfcc, cifar-10, ImageNet, yelp-review-full (VGG19, ResNet18/50, HAN, TextCNN, LR, SVM). VLDBJ adds YearPredictionMSD, mini8m. Corgi^2: proprietary Mobileye crops (~27TB), CIFAR-100/ResNet-18, ImageNet/ResNet-50.
