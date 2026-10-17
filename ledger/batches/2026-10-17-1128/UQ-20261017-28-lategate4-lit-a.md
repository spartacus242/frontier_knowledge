# Notes: clustered-batch variance inflation, prior art (budget 9 searches / 4 fetches; used 9 / 3)
## Queries (search returns titles+URLs only, no snippets)
1. design effect / ICC / minibatch SGD / block sampling / shuffle buffer -> scDataset 2506.01883, Demystifying SGD w/ doubly stochastic grads, Mini-batch size & variance (2004.13146)
2. GNS correlated samples same document packing critical batch size -> Critical Batch Size Revisited (2505.23971); nothing on loader correlation seen in titles
3. measured gradient variance shuffled vs sequential shards LLM -> curriculum papers (2506.11300, 2601.21698), data temporality; no variance-ratio hit by title
4. "design effect" SGD cluster sampling -> Stratified sampling SGD 1405.3080, Study of Gradient Variance in DL 2007.04532
5. shuffle quality metric dataset libs -> Ray, MosaicML streaming, Activeloop, moderndescartes shuffle_viz
6. CorgiPile open problem/clustering factor -> CorgiPile 2206.05830, VLDB J (s00778-024-00845-0)
7. effective sample size correlated minibatch GNS -> scDataset again, McCandlish 1812.06162
8. non-iid minibatch correlation inflates GNS -> 2505.23971, 1812.06162, torch-foresight GNS; nothing new
9. Kish design effect minibatch ML -> scDataset, Wikipedia design effect, PracTools, HU Berlin thesis (random effects, small batch)
## Fetches
F1 arxiv.org/pdf/2506.01883 (scDataset) OK, summariser. F2 docs.mosaicml.com streaming shuffling OK, summariser. F3 same scDataset, targeted at Sec 3.4, OK, summariser. F4 edoc.hu-berlin.de/18452/37499 OK, abstract only.
(WebFetch: summariser for all; none full-text-verified by me.)
## Exact strings
scDataset: "larger than the IID estimator sigma^2/m by a factor of b" FOUND (summariser). "heuristic approximation valid under the plate-constant model" FOUND. "Block sampling is equivalent to cluster sampling (Cochran, 1977)" FOUND. entropy numbers 1.76+-0.33 (f=1), 3.61+-0.08 (f=256), ~3.62 random FOUND (summariser). No gradient-variance number reported; no LLM data (Tahoe-100M single-cell; linear + MLP).
Mosaic: no metric, only qualitative ("great shuffle quality").
HU thesis: abstract only; no ICC/deff number reported in abstract.
Not run: any open-problem sentence found. Not read in full: CorgiPile (established), McCandlish, 2505.23971, Ray/Activeloop docs, curriculum papers (titles only).
## Conclusions
Closest: scDataset (2506.01883). Analytic bound b + empirical batch label entropy diagnostic; variance never measured. Everything else absent/unread.
