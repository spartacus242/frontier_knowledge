# UQ-20261017-09 working notes (searches 5 of 9 used, 0 refused; fetches 5 of 5 used)

## Searches
1. "step-level credit assignment LLM agent trajectories counterfactual ablation remove step re-run" -> leads: CausalFlow 2605.25338, Credit Without Ground Truth 2608.19760.
2. "LLM agent run-to-run variance temperature 0 repeated trials ..." -> On Randomness in Agentic Evals (arXiv 2602.07150).
3. "failure attribution LLM multi-agent counterfactual intervention replay ..." -> Causal Agent Replay 2606.08275; AgenTracer 2509.13782 (not opened).
4. "Beyond Pass@k measuring reliability agentic code generation ..." -> 2608.14711, 2603.29231 (titles only, not opened).
5. "Causal Agent Replay action-match rate replay temperature 0 ..." -> also surfaced 2609.06445 (Causal Attribution for Agentic Decisions: Estimators, Coupling...) and 2606.08998 (The Token Not Taken), titles only, NOT opened.

## Fetches (all succeeded; summariser output, not verbatim page reads)
- arxiv.org/abs/2608.19760 : opened. Step-level credit audited against executed replay. Replay count not stated in abstract.
- iclr.cc/virtual/2026/10016323 : opened (abstract).
- alphaxiv.org/abs/2605.25338.md : opened (CausalFlow).
- arxiv.org/pdf/2606.08275 : opened (Causal Agent Replay).
- www.arxiv.org/pdf/2602.07150 : opened (On Randomness in Agentic Evals), Table 1 numbers.
Not opened: 2609.06445, 2606.08998, 2608.14711, 2603.29231, AgenTracer, tianpan blog.

## Strings/claims checked (summariser-reported; not independently verified verbatim)
- "vary by 2.2 to 6.0 percentage points depending on which run is selected"
- "re-executes the trajectory forward under the same stochastic policy"
- CRS(s_i)=1 if >=1 alternative replacement flips verifier failure->success; K=3 proposals/step
- 30.5% of decision points have nonzero replay contrast at achieved resolution

## Conclusion
Q1: Counterfactual of this kind is not decidable from the trace alone in the papers found; every method re-executes (K rollouts per intervention; K=3 CausalFlow, K unspecified in CAR; Shapley exponential). Only partial exception: CausalFlow uses LLM outcome prediction/cached web results rather than live re-runs for some benchmarks, i.e. a model-based surrogate, not a trace-derived answer.
Q2: Run-to-run variance is substantial even at temp 0 (SWE-bench Verified, 10 runs/config: SD up to 1.7 pts, best-worst 2.2-6.0 pts; median first-divergence token 56 at temp 0; two temp-0 runs diverged at token 94 with opposite outcomes). CAR: hosted models nondeterministic at temp 0.
Implication: the rule "no later action would change" is not a property of the recorded trace; it is a probabilistic claim about a distribution of continuations. A single re-run cannot establish "no later action would change" because actions change anyway from sampling noise. Well-defined only if restated: e.g. P(later actions differ | step output removed) vs P(differ | resample with output kept), K rollouts, with a noise-floor comparator, or under fixed-seed local deterministic model.
