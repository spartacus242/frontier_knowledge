# UQ-20261017-09 verification notes
Web searches run: 0 (not needed). Fetches used: 6 of 6.
## URLs opened
1. https://arxiv.org/abs/2512.02393 - OK. Process-Centric Analysis of Agentic Software Systems (Graphectory); 4,000 trajectories, SWE-agent + OpenHands, four LLMs. No cost/tokens in abstract.
2. https://arxiv.org/abs/2607.22585 - OK. The Scaffold Effect in Coding Agents (Vats, Golev), 50-task Terminal-Bench Pro subset, 2 models x 3 harnesses.
3. https://arxiv.org/pdf/2512.02393 - OK. LC/ALL definitions, 600-of-4000 sample, Table 4, $2 cost cap.
4. https://arxiv.org/html/2607.22585v1 - OK. Tables 2,3,4,6; B=10,000 bootstrap.
5. https://arxiv.org/html/2512.02393v1 - OK. Keyword search: token/tokens/dollar/waste no matches.
6. https://arxiv.org/html/2607.22585v1 (second keyword pass) - OK.
Not opened: arxiv.org/search, export API (not tried).
## Exact strings checked
Paper 1: "token", "tokens", "dollar", "waste" -> none. "wasted" -> none; "wasting execution cost" appears (NoEffectEdit). "redundant" -> 3 hits. "inefficiencies, although to a lesser extent, are prevalent in resolved instances as well."
Paper 2: "wasted","discard","rework","re-rank","$" -> none. "waste" -> "...each waste thousands of tokens." (no-action turns). "Tokens per solved task is amortized: the cell-wide sum of tokens_total divided by the cell's solved count."
## Conclusion
Neither paper reports share of token/dollar spend discarded as rework; neither re-ranks leaderboard on net-of-rework cost.
Caveat: all figures from a summariser over fetched pages; paper-1 per-pair loop numbers are in figures only and were not recovered. Paper 2 internal inconsistency between Table 2 and Table 4 solved counts (per summariser).
