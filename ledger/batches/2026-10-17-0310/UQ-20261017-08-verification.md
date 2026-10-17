# UQ-20261017-08 verification: Gradient Inversion Attacks Beyond SGD (Wan, Fang, Ma, Wang; ICML 2026)

## Searches (3 of 7)
1. "Gradient Inversion Attacks Beyond SGD" Wan Fang Ma Wang -> found ICML poster page https://icml.cc/virtual/2026/poster/64051; no arXiv hit.
2. Gradient Inversion Attacks Beyond SGD update-matching ... arXiv Guangnian Wan -> only ICML page again; no arXiv.
3. "Beyond SGD" gradient inversion momentum-based parameter updates ... -> ICML page again; no arXiv.

## Fetches (5 of 6)
- https://icml.cc/virtual/2026/poster/64051 -> OPENED (abstract only; summariser paraphrase; lists OpenReview id RNDJpm1kUW; no arXiv/PDF link).
- https://openreview.net/forum?id=RNDJpm1kUW -> NOT opened (browser verification wall).
- https://icml.cc/virtual/2026/poster/64051 (2nd, quote extraction) -> OPENED, three abstract fragments.
- https://openreview.net/pdf?id=RNDJpm1kUW -> NOT opened (fetch error).
- https://api2.openreview.net/notes?id=RNDJpm1kUW -> NOT opened (fetch error).
- arXiv abs/html/pdf: not tried, no arXiv id found by any search.
- Not tried: author copies, PDF on icml.cc media.

## Exact strings checked (from the abstract, via summariser)
- "where the server or an eavesdropper can directly observe true gradients."
- "for which the observable signal is not raw gradients but momentum-based parameter updates."
- "which struggle to recover labels and images from non-gradient updates."
- Abstract opens "Gradient Inversion Attack (GIA) poses a significant threat to federated learning."
- Summariser: abstract does not mention checkpoints or optimizer state.

## Conclusion
Full text COULD NOT READ. Abstract only. Attacker input per abstract = observed momentum-based parameter updates exchanged in FL (server/eavesdropper), not stored Adam m/v buffers in a released checkpoint. Q2 scale/fidelity measure and Q3 (released optimizer state) not determinable from abstract; abstract mentions ImageNet and PACS only.
