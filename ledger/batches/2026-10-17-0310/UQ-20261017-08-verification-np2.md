# UQ-20261017-08 verification np2: Gradient Inversion Attacks Beyond SGD
Verdict: COULD NOT READ full text (only ICML poster page abstract + lay summary reached).

## Searches (5 of 7)
1. exact title + authors -> icml.cc/virtual/2026/poster/64051 plus unrelated surveys; no arXiv copy
2. title + Adam optimizer state arxiv + authors -> nothing new
3. "Beyond SGD" update-matching label recovery Adam RMSProp AdaGrad ImageNet PACS -> only icml.cc page
4. authors + adaptive optimizers (extended) -> icml.cc page; openreview.net/forum?id=uLdGZhxlxV titled same (different id from task's RNDJpm1kUW; unverified whether same paper); horseee.github.io
5. title + arxiv/huggingface/mlr.press -> no copy found

## Fetches (6 of 6, pool used up)
- https://icml.cc/virtual/2026/poster/64051 : OPENED. Abstract + lay summary only. No PDF/arXiv link. Links OpenReview forum RNDJpm1kUW.
- https://openreview.net/pdf?id=RNDJpm1kUW : FAILED (fetch error)
- https://openreview.net/forum?id=RNDJpm1kUW : bot-verification page, no content
- https://openreview.net/forum?id=uLdGZhxlxV : bot-verification page, no content
- https://horseee.github.io/ : opened; no entry for this paper
- https://api.semanticscholar.org/graph/v1/paper/search?... : FAILED (fetch error)
Not tried (fetch pool exhausted): proceedings.mlr.press, arxiv listing, HF papers, Gongfan Fang / Guangnian Wan / Xinchao Wang pages, Google Scholar.

## Strings checked (against ICML page summary only)
- "Adam moment", "checkpoint", "released model": page summary says it does NOT mention moment estimates or checkpoints.
- "the server or an eavesdropper can directly observe true gradients" (SGD case, abstract)
- "the server may only observe processed model updates instead" (lay summary)
- "momentum-based parameter updates" (abstract)

## Findings from abstract level only
- Setting: federated learning; observable = model updates exchanged in training (server/eavesdropper), not stored optimizer tensors in a released checkpoint. Inferred from abstract wording; no sentence from body text.
- Method: analytical label recovery from optimizer updates + update-matching objective on dummy inputs; also better under plain SGD.
- Data: ImageNet and PACS (images). Batch size: not found. Text/LM experiments: none mentioned in abstract; cannot confirm absence.
- Checkpoint experiment / optimizer-state disclosure discussion: not found (not readable).
