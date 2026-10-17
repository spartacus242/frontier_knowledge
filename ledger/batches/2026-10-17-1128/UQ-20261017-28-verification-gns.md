# UQ-20261017-28 verification: Gradient Noise Scale (arXiv:1812.06162)

Target: McCandlish, Kaplan, Amodei, "An Empirical Model of Large-Batch Training"
Questions: (1) B_simple + |G|^2 and tr(Sigma) defs w/ eq numbers; (2) Appendix A.1 two-batch-size
estimator eqs + own inference re non-independent batch elements; (3) footnote 6 on batch formation /
data ordering / within-batch correlation; (4) explicit independence assumption statement.

Budget: <=6 searches, <=6 fetches.

## Log

### Searches: 0 so far (went straight to known arXiv id)

### Fetch 1 — https://arxiv.org/html/1812.06162v1 (no offset) — SUCCESS
- B_simple = tr(Sigma)/|G|^2 is Eq **(2.9)**. CONFIRMED.
- Sigma defined in Eq **(2.3)**: cov_{x~rho}(grad L_x) = E[(grad L_x)(grad L_x)^T] - G G^T.
- Eq (2.2): cov(G_est) = (1/B) Sigma.
- |G|^2 has no standalone numbered def; G(theta)=grad L(theta) unnumbered; |G|^2 appears in (2.5), (2.9), (2.10).
- Eq (2.10): E[|G_est - G|^2]/|G|^2 = (1/B) tr(Sigma)/|G|^2 = B_simple/B.
- Summariser called the independence footnote "footnote 4" on the HTML page; gave fragments incl.
  "This is strictly true only when training examples are sampled independently from the same data distribution."
  and "but our conclusions can be altered straightforwardly to account for correlated samples."
- Its "footnote 6" answer was garbled (mixed Appendix D / E_tot=B S_tot text) -> HTML footnote numbering differs.

### Fetch 2 — https://arxiv.org/html/1812.06162v1 offset=60000 — SUCCESS but WRONG REGION
- offset 60000 chars lands only around Sec 2.2 / Eq (2.10) (LaTeX markup inflates char counts).
  Appendix A NOT reachable at this offset. Do not burn more offset guesses on the HTML route.

### Fetch 3 — https://www.alphaxiv.org/abs/1812.06162.md — SUCCESS (summary only; refused verbatim, 125-char cap)
- Appendix A.1 = "unbiased estimate of the simple noise scale with no overhead"; two batch sizes B_small, B_big.
  Eq (A.1): E[|G_B_est|^2] = |G|^2 + tr(Sigma)/B. Eq (A.2): unbiased est of |G|^2 (difference of the two
  measurements) and unbiased est S of tr(Sigma). B_simple = S/|G|^2; ratio is biased, so they average over
  many batches (EWMA of numerator and denominator) rather than correcting the bias. In practice B_small =
  per-device local batch, B_big = global batch (norm computed before/after all-reduce).
- Footnote numbering in the alphaxiv .md: the independence footnote IS the **6th** footnote. Content:
  variance result strictly only for independently sampled examples; without replacement from dataset of
  size D the scaling becomes (1/B - 1/D); restrict to B<<D or with-replacement; conclusions can be adapted
  to correlated samples. => task's "sixth footnote" hypothesis CONFIRMED.

### Fetch 4 — https://www.alphaxiv.org/abs/1812.06162.md (prompt: raw LaTeX of A.1/A.2) — SUCCESS
Source is PDF-extracted plain text, NOT LaTeX, so sub/superscripts reconstructed by the summariser:
  (A.1)  E[|G_est|^2] = |G|^2 + (1/B) tr(Sigma).
  (A.2)  |G|^2 = (1/(B_big - B_small)) ( B_big |G_{B_big}|^2 - B_small |G_{B_small}|^2 )
         S     = (1/(1/B_small - 1/B_big)) ( |G_{B_small}|^2 - |G_{B_big}|^2 )
Both estimator lines sit inside the single display numbered (A.2). The paper writes the estimators as
"|G|^2" and "S" (no "_est" subscript); PDF text extraction drops diacritics so I cannot confirm from these
routes whether the rendered paper puts a hat/caret over them. Flagged as uncertain, not asserted.

### Fetch 5 — https://arxiv.org/html/1812.06162v1 (chunked footnote request) — SUCCESS
Exact strings checked ONE AT A TIME, all FOUND verbatim (chunked under 115 chars by the summariser):
  [FOUND] "This is strictly true only when training examples are sampled independently from the same data distribution."
  [FOUND] " For example, when batches are sampled without replacement from a dataset of size D, the variance"
  [FOUND] "instead scales like \left(\frac{1}{B}-\frac{1}{D}\right). For simplicity, we restrict ourself to the case"
  [FOUND] "where B\ll D or where batches are sampled *with* replacement, but our conclusions can be altered straightforwardly"
  [FOUND] "to account for correlated samples."
Note the source's own typo "we restrict ourself" is preserved -> good verbatim signal.
Note the raw LaTeX \left(\frac{1}{B}-\frac{1}{D}\right) and the italic *with* survive, confirming HTML route.

### Fetch 6 — https://arxiv.org/pdf/1812.06162 — SUCCESS
- Sentence right after (A.2): "We can verify with Equation A.1 that E[|G|^2] = |G|^2 and E[S] = tr(Sigma)."
  (i.e. both estimators are asserted UNBIASED, conditional on (A.1) holding.)
- Summariser: neither A.2 symbol carries hat or "est"; "est" appears on G_est in (2.1) and (A.1).
  (Treat the hat question as unresolved -- PDF text extraction loses diacritics.)
- Asked for a MAIN-TEXT independence/i.i.d. sentence near G_est / cov(G_est)=Sigma/B: summariser reports
  NONE in the main text; the closest and only statement is the footnote (the independence footnote hangs
  off Section 2.2, not 2.1). => "not in the text I read", NOT "could not read".

## Budget used
Searches: 0 of 6. Fetches: 6 of 6 (cap reached).

## Conclusions
Q1 CONFIRMED. B_simple = tr(Sigma)/|G|^2 is Eq (2.9). Sigma is Eq (2.3). |G|^2 and tr(Sigma) have no
   standalone numbered definitions of their own; G = grad L is inline/unnumbered, Eq (2.2) gives
   cov(G_est) = Sigma/B, Eq (2.10) gives E[|G_est-G|^2]/|G|^2 = B_simple/B.
Q2 CONFIRMED for the equations: (A.1) and the two-line (A.2). Direction-of-corruption analysis is MY OWN
   INFERENCE, not in the paper (see below).
Q3 CONFIRMED, with a numbering caveat: the independence/correlation footnote is the SIXTH footnote in the
   alphaxiv PDF-text numbering (the arXiv HTML summariser called the same footnote "footnote 4" -- the
   HTML renumbers, probably excluding the two first-page author notes * and dagger). Quoted verbatim above.
Q4 PARTIALLY. The independence assumption is stated ONLY in that footnote, not in the main text, and the
   "what if not" clause is limited to the without-replacement (1/B - 1/D) scaling plus the bare assertion
   that conclusions "can be altered straightforwardly to account for correlated samples". The paper does
   NOT analyse what correlated batch elements do to the Appendix A.1 estimator.

## My own inference for Q2 (derivation, NOT from the paper)
(A.1) is the load-bearing step: it assumes the noise term shrinks exactly as tr(Sigma)/B. The estimator
in (A.2) is nothing but the separation of the two measurements into "the part that does not shrink with B"
(assigned to |G|^2) and "the part that shrinks like 1/B" (assigned to tr(Sigma)).
Model: write the measured mean m_B = E[|G_B|^2] = |G|^2 + tr(Sigma)*c(B). Independence => c(B)=1/B.
Exchangeable within-batch correlation rho > 0 => c(B) = rho + (1-rho)/B.
Then B*c(B) = B*rho + (1-rho), so
  |G|^2_est -> |G|^2 + rho*tr(Sigma)        [BIASED UP]
  S_est     -> (1-rho)*tr(Sigma)            [BIASED DOWN]
  B_simple  -> (1-rho)tr(Sigma) / (|G|^2 + rho*tr(Sigma))   [BIASED DOWN, both ways]
So BOTH terms are corrupted, and the mechanism is a single misattribution: the correlated (shared)
component of the gradient noise does not average away with B, so the estimator books it as signal.
Corruption therefore enters the squared-gradient-norm term as an INFLATION and the covariance-trace term
as a DEFLATION, and the measured noise scale is too SMALL -- it understates the useful batch size.
Practical caveat (also my inference): in the paper's zero-overhead setup B_small is the per-device local
batch and B_big the global batch, so a loader that hands each device a contiguous, internally-correlated
chunk concentrates the correlation at the B_small end, which distorts the two measurements unequally and
need not follow the symmetric exchangeable model above.
