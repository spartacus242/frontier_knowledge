# UQ-20261017-28 lategate4 lit-b working notes
Budget used: 9 searches, 4 fetches. WebSearch returned titles/URLs only (no snippets), so searches serve to locate documents, not to read them.

## Queries (one-line result each)
S1 "gradient noise scale estimator bias correlated samples non-iid ..." -> 1812.06162, 2505.23971v3 among hits; no paper on the topic by title.
S2 "critical batch size ... Shallue ... noise scale not predictive" -> 2505.23971, Zhang NeurIPS19 pdf, openai blog; no new.
S3 "how does critical batch size scale in pre-training" -> 2410.21676 located (NOT fetched).
S4 "GNS correlated examples same document clustered..." -> 1812.06162 again, torch-foresight GNS doc, nothing on clustering.
S5 "Shallue Measuring the Effects of Data Parallelism" -> arxiv 1811.03600 located and fetched.
S6 "batch composition correlated samples ... data loader sampling design ..." -> Batch Renorm 1702.03275 (off-topic), nothing on the topic.
S7 "gradient noise scale correlated/non-iid/clustered ... per-example" -> Gray et al 2023 (per-example GNS norms), Study of Gradient Variance 2007.04532, LoRA batch-size bias 2602.09492; titles only, NOT read, not evidence either way.
S8 (extended) "GNS sequence packing documents correlated tokens ..." -> allenai.org/blog/critical-batch-size (OLMo CBS; NOT read), nothing on GNS under correlation.
S9 (extended) "data loader sampling scheme ... affects critical batch size ... uncontrolled" -> Rinas shuffling 2312.02368, WLB-LLM, pytorch data issue 302; titles only, not read; none on CBS prescriptions.

## Fetches
F1 https://arxiv.org/pdf/1812.06162 (McCandlish) OK; summariser claims to have seen full text incl. appendices A-E; equations garbled in extraction.
F2 https://arxiv.org/html/2505.23971v3 (Critical Batch Size Revisited) OK; summariser says full doc.
F3 https://arxiv.org/pdf/1812.06162 again (cache) OK; verbatim footnote 6 in chunks.
F4 https://arxiv.org/pdf/1811.03600 (Shallue et al.) OK but truncated: read through start of Sec 6; conclusions/appendices/refs not seen.

## Exact strings (all via summariser, chunks <125 chars, McCandlish full text per summariser)
FOUND  fn6: "This is strictly true only when training examples are sampled independently from the same data distribution."
FOUND  fn6: "For example, when batches are sampled without replacement from a dataset of size D, the variance instead scales like" / "1/B - 1/D."
FOUND  fn6: "For simplicity, we restrict ourself to the case where B << D or where batches are sampled with replacement, but our" / "conclusions can be altered straightforwardly to account for correlated samples."
  -> so fn6 is NOT silent: it asserts without proof that the conclusions are alterable for correlated samples, and gives one worked deviation (without replacement, 1/B-1/D).
FOUND  Sec 2.5: "individual data points will be less correlated, or only correlated in a more abstract way." (correlation across data points as a driver of B_noise, not an estimator-bias statement)
NOT FOUND in McCandlish: "clustered", "i.i.d.", any discussion of batch formation beyond sampling from rho (summariser, full text).
FOUND  Sec 2.2: "the switch between the two occurs at B ~ Bnoise"; Fig 3 caption: turning point where "training speed drops to 50% of the maximum possible".
FOUND  Sec 2.3: "Our model predicts Bcrit ~ Bnoise." ; "When we choose B = Bcrit ... training takes twice as many passes through the training data..."
FOUND  Sec 2.6: "can be predicted at the order of magnitude level by measuring the gradient noise scale..."
NOT FOUND "within a factor" for Bcrit in Sec 2/App A (closest: App D fn17 "both within the same factor of optimal").
SUMMARISER-ONLY (not verbatim-checked): Sec 5 "B_simple roughly matches B_crit for all datasets" but ratio B_simple/B_crit "can vary by about an order of magnitude between tasks"; Sec 3 range "from 20 (SVHN autoencoder) to over 10 million"; Table 1 values (MNIST Bcrit 20->200, ImageNet 1,000->15,000, Billion Word 700->100,000, Dota 1v1 50,000->3,000,000).
SUMMARISER-ONLY: A.1 says S/|G|^2 "is not an unbiased estimator for B_noise"; moving averages used for variance.
2505.23971v3 (summariser, full doc as provided): "the noise scale cannot be used reliably as a proxy for the CBS"; "the gradient noise scale underestimates the CBS by several orders of magnitude" (Sec 3.3); abstract: "strong assumptions are required to justify gradient noise as a proxy for the CBS"; CBS plateaus "around 4096" (documents of 4096 tokens), "does not seem to depend on model size"; Appendix D "it may be worse to overestimate the CBS compared to underestimate". Paper does NOT discuss independence/sampling for the noise-scale estimator, nor shuffling/packing/correlated samples (searched the whole doc as provided).
1811.03600 (summariser, through start of Sec 6): perfect-scaling regime ended "anywhere from" 2^4 to 2^13; max useful batch "varied between roughly 2^9 and 2^16"; "We were unable to find reliable support for any of the previously proposed heuristics for adjusting the learning rate as a function of batch size"; recommends "practitioners tune all optimization parameters anew when they change the batch size"; "accurate scaling predictions must depend on a combination of non-obvious properties of the model, optimizer, and data set"; no mention of gradient noise scale/McCandlish in what was seen; sampling stated as method only: "we actually follow the common practice of cycling through permutations of the training set"; not studied as a factor.

## Q1 algebra (MY OWN REASONING, not from the paper)
Let g_i = G + e_i, E|e|^2 = tr(Sigma) per example. Batch-mean E|G_B|^2 = |G|^2 + v(B), define h(B) = B v(B)/tr(Sigma); independent sampling => h = 1.
A.2 (as in background): Gest = (Bb|Gb|^2 - Bs|Gs|^2)/(Bb-Bs); Sest = (|Gs|^2-|Gb|^2)/(1/Bs-1/Bb).
E[Gest] - |G|^2 = tr(Sigma) * (h_b - h_s)/(Bb - Bs).         (1)
E[Sest] = tr(Sigma) * (h_s*Bb - h_b*Bs)/(Bb - Bs).            (2)
Identity: Gest + Sest/B_i reproduces |G|^2+v(B_i) exactly at both batch sizes; the two estimators only re-partition the same two measured numbers, so a mis-booking in one is the negative of the mis-booking in the other weighted by 1/B.
Cases:
 a) h constant in B (e.g. both batches span many clusters of size m with intra-cluster trace-correlation rho, h = 1+(m-1)rho): bias in Gest = 0 exactly; Sest = h*tr(Sigma). The whole effect lands in tr(Sigma). Sign = sign(rho). Arguably then Sest is the right input for that loader (noise really is h*tr(Sigma)/B) but it is not the independent-sample tr(Sigma).
 b) clusters of size m, h(B)=1+(min(B,m)-1)rho, nondecreasing for rho>0: if Bs<Bb<=m (batches inside a cluster): v(B)=tr(Sigma)[(1-rho)/B + rho]; Gest = |G|^2 + rho tr(Sigma) (positive, floor booked as signal), Sest=(1-rho)tr(Sigma). If Bs<m<Bb: Gest bias = tr(Sigma)(h_b-h_s)/(Bb-Bs) > 0 but smaller.
 c) h decreasing in B (negative correlation: stratified/balanced batches, or without-replacement per footnote 6: h = 1-B/D): bias in Gest = -tr(Sigma)/D <0 exactly. Sest = tr(Sigma)(1 - ...) mild.
 d) Devices independent, per-device batch Bs clustered, Bb = D*Bs from D independent devices: v_b = v_s/D => h_b = h_s => no bias in Gest, Sest = h_s tr(Sigma).
Conclusion: sign of Gest bias = sign(h(Bb)-h(Bs)), set by how the loader's design changes effective per-example variance factor between the two batch sizes. Positive correlation does NOT by itself fix the sign (case a gives zero; b positive; negative-correlation designs negative). Not determined a priori; the paper does not derive it. A confident claim "bias falls in |G|^2 with sign X" is NOT derivable from the paper; fn6 only asserts correction is "straightforward". Also Bnoise_est = Sest/Gest is a ratio (paper itself says not unbiased), so the ratio's bias depends on both.

## Q3 sensitivity arithmetic (MY OWN, from the paper's tradeoff form (S/Smin-1)(E/Emin-1)=1 as relayed by summariser)
Set batch B = x * B_true. Steps cost vs minimum = 1+1/x; examples cost = 1+x. x=1 -> (2,2). x=1/1.1 -> steps 2.10, examples 1.91 (+-5%). x=1/2 -> steps 3.0 (+50%), examples 1.5 (-25%). x=2 -> steps 1.5 (-25%), examples 3.0 (+50%). A 1.1x error moves cost ~5%; 2x moves cost 25-50%, i.e. flat-ish optimum.
Scale of the quantity itself: Bcrit across tasks 20 -> >10 million (McCandlish, ~5-6 orders); 2^9..2^16 (Shallue, ~2 orders); McCandlish's own Bsimple/Bcrit mismatch ~order of magnitude (summariser). A factor 1.1-2 is 0.04-0.3 orders.

## Conclusions
Q2: no published analysis found (9 searches, titles only for most; 3 papers read at summariser-over-full-text level). Closest: fn6 sentence. Unread candidates: Gray 2023, 2007.04532, OLMo CBS blog, Zhang 2410.21676.
Q4: strongest case = measured/empirical CBS procedures replaced noise scale (2505.23971v3), Shallue "tune anew", flat optimum (my arithmetic).
Q5: no statement found; closest is Shallue method note and McCandlish fn6 (without replacement). Absence over: abstracts/titles of search hits plus full text of 2505.23971v3 (as provided), McCandlish, and Shallue to Sec 6.
