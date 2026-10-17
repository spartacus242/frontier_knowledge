# UQ-20261017-28 — Verification of arXiv:1706.05699 (Yin et al., gradient diversity)

Started 2026-10-17. Budget: <=6 searches, <=6 fetches.

## Log

### Fetches
1. FETCH https://arxiv.org/abs/1706.05699 — SUCCESS. Title "Gradient Diversity: a Key Ingredient for Scalable Distributed Learning", Yin, Pananjady, Lam, Papailiopoulos, Ramchandran, Bartlett. v3 Jan 2018 (v1 Jun 2017). Abstract too long for summariser to quote verbatim (125-char cap) -> paraphrase only.
2. FETCH https://www.alphaxiv.org/abs/1706.05699.md — SUCCESS (full text route, via summariser).
   - Gradient diversity = Definition 4, Sec 4.1, Eq (4): Delta_S(w) := sum_i ||grad f_i(w)||^2 / || sum_i grad f_i(w) ||^2
     = sum_i ||g_i||^2 / ( sum_i ||g_i||^2 + sum_{i != j} <g_i, g_j> )
   - Batch-size bound = Definition 5, Sec 4.1 (no eq number): B_S(w) := n * Delta_S(w)
   - Lemma 1 uses B = delta * B_S(w_{kB}) + 1
   - Appendix B.1 identity: B_S(w) = M^2(w)/G(w), M^2 = (1/n) sum ||grad f_i||^2, G = ||grad F||^2
   - Definition 6 (Sec 5.2): B_S(w,w') := n * Delta_S(w,w') on gradient differences
   - Sampling: Sec 3 Eq (2) "each index s_i is drawn uniformly at random from [n] with replacement"; App B.2 "s_ell's are sampled i.i.d. uniformly from [n]"
3. FETCH https://arxiv.org/abs/1812.06162 — SUCCESS. "An Empirical Model of Large-Batch Training", McCandlish, Kaplan, Amodei, OpenAI Dota Team. Abs page has no formulas, no B_simple string.

4. FETCH https://www.alphaxiv.org/abs/1812.06162.md — SUCCESS.
   - B_simple = tr(Sigma)/|G|^2, Eq (2.9), under assumption Hessian ~ multiple of identity
   - Sigma(theta) = cov_{x~rho}(grad L_x(theta)), Eq (2.3)
   - B_noise = tr(H Sigma)/(G^T H G), Eq (2.8)
   - B_crit = E_min/S_min, Eq (2.12)/(5.2); theory B_crit ~ B_noise; empirical B_crit ~ B_simple (order of magnitude)
   - minibatch gradient = average over B samples x_i ~ rho, Eq (2.1); covariance Sigma/B, Eq (2.2); independent samples
5. FETCH https://www.alphaxiv.org/abs/1812.06162.md (2nd prompt, exact strings) — SUCCESS.
   - STRING FOUND: "typically differ only by a small constant multiplicative factor"
   - STRING FOUND: "training examples are sampled independently from the same data distribution"
   - Around Eq 2.9: "If that is the case, then Equation 2.8 reduces to:"

6. FETCH https://www.alphaxiv.org/abs/1706.05699.md (2nd prompt, exact strings) — SUCCESS. FETCH CAP NOW REACHED (6/6).

### Exact-string checks (one line each)
- "We refer to the following ratio as gradient diversity"  -> FOUND (Definition 4, Sec 4.1)
- "Definition 5 (Batch-size Bound). B S (w) := n · ∆ S (w)." -> FOUND
- "with batch-size B = δ · B S (w kB ) + 1" -> FOUND (Lemma 1)
- "each index s i is drawn uniformly at random from [n] with replacement" -> FOUND (Sec 3, Eq (2))
- "Since s` 's are sampled i.i.d. uniformly from [n]" -> FOUND (App B.2; apostrophe garbled in extraction)
- "typically differ only by a small constant multiplicative factor" -> FOUND (1812.06162, B_simple vs B_noise)
- "training examples are sampled independently from the same data distribution" -> FOUND (1812.06162)

### UNRESOLVED
- Equation number of the gradient-diversity formula. Pass 1 of the summariser said "Equation (4)";
  pass 2 over the SAME source said no equation number visible. CONFLICT -> report as Definition 4
  (Section 4.1), equation number NOT CONFIRMED. Definition 5's formula: no equation number (both passes).
- Could not fetch ar5iv.arxiv.org/html/1706.05699 to settle numbering: fetch cap reached. NOT a
  "could not read" — it is "not verified within budget".

### Searches
1. SEARCH "gradient diversity" Yin Papailiopoulos "batch-size bound" "B_S(w)" n Delta_S
   -> surfaced arxiv.org/pdf/1706.05699, ar5iv.arxiv.org/html/1706.05699, arxiv-vanity, mlanthology
      (AISTATS 2018 version). No equation numbers in snippets.

## Algebra for Q3 (MY OWN INFERENCE, not in either paper)
Yin et al.: B_S(w) = n*Delta_S(w) = n * sum_i||g_i||^2 / ||sum_i g_i||^2.
With sum_i g_i = n*grad F(w):  B_S = n*sum_i||g_i||^2 / (n^2 ||grad F||^2) = [(1/n)sum_i||g_i||^2]/||grad F||^2
                             = M^2(w)/G(w)   <- matches their App B.1 identity.
McCandlish et al.: B_simple = tr(Sigma)/|G|^2, Sigma = E[g g^T] - G G^T
  => tr(Sigma) = E||g||^2 - ||G||^2
  => B_simple = E||g||^2/||G||^2 - 1.
Identify rho with the uniform empirical distribution on the n training points at the same w:
  E||g||^2 = (1/n)sum_i||g_i||^2 = M^2(w);  ||G||^2 = ||grad F(w)||^2 = G(w).
  => B_simple = M^2/G - 1 = B_S(w) - 1,  i.e.  B_S(w) = B_simple + 1.   EXACT IDENTITY.
Sanity check: perfectly diverse (mutually orthogonal) gradients => Delta_S = 1 => B_S = n => B_simple = n-1.

## Conclusion
- The review's identification is EXACT as algebra, conditional on: (i) rho = uniform empirical
  distribution over the n components, (ii) i.i.d./with-replacement sampling (both papers assume it),
  (iii) both evaluated at the same w.
- BUT two caveats make the review's framing only partially right:
  (a) Yin et al.'s operative admissible batch size in their theorems is delta*B_S(w)+1 with delta a
      free slack parameter; it coincides with B_simple+1 only at delta = 1.
  (b) B_simple is itself McCandlish et al.'s well-conditioned approximation to B_noise =
      tr(H Sigma)/(G^T H G), and B_crit ~ B_simple only to order of magnitude. So the exact match is
      to the *simple noise scale*, not to their predicted critical batch size.
- Q4: YES, Yin et al. assume independent sampling (i.i.d. uniform from [n], with replacement).
- Verdict: PARTIALLY CONFIRMED.
