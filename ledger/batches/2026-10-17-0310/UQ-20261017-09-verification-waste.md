# UQ-20261017-09 prior art: wasted SHARE of agent token/dollar spend
Searches: 9 run, 0 refused. Fetches: 5 used (pool exhausted). WebSearch returns titles+URLs only (no snippets).

## Queries (one-line result)
1. "percentage of wasted tokens in AI coding agent runs redundant tokens share of total cost" -> 2608.01347, vantage.sh, augmentcode, codex.danielvaughan.com posts, clew-custos
2. "agent trajectory wasted tokens fraction ... SWE-bench failed attempts discarded cost" -> 2509.23586 (trajectory reduction), 2606.15954, 2607.22807, blogs
3. "leaderboard agents re-ranked cost per solved task excluding wasted retries token efficiency" -> 2607.12161, arena.ai agent cost, dev.to "we added price", notte, prefactor
4. "of the tokens spent on failed runs ... share of total cost unresolved" -> 2605.29054, 2604.24658, 2607.03691, 2604.11270, 2605.26297, evolink retry blog, diagrid
5. "Where do your tokens go ... re-reading files repeated tool calls" -> 2604.22750, 2601.16746 SWE-Pruner, 2608.07440, SAP, glean, larridin
6. "agent leaderboard adds cost dimension wasted spend re-ranking Pareto" -> HAL 2510.11977, 2607.24063, dev.to, aisnakeoil, Open Agent Leaderboard (exgentic), arena.ai
7. "wasted OR redundant tokens % of total agent run observability" -> 2606.01365 (wasted computation multi-agent), clew-custos, jumpcloud, Databricks "$1.2M annual agent waste" (aiunderstanding.org)
8. "cost of failure OR wasted spend ... failed runs percent of total token spend" -> 2511.11012, acecloud, mattmcalister, lyceum, diagrid
9. title search for 2606.01365 -> only mirrors/abstract pages; not opened (fetches exhausted)

## Opened (5)
- https://arxiv.org/pdf/2608.01347 (Prompt-Induced Waste): OPENED
- https://arxiv.org/pdf/2607.12161 (Token Reduction Is Not Cost Reduction): OPENED
- https://arxiv.org/pdf/2509.23586v2 (Trajectory Reduction): OPENED
- https://arxiv.org/pdf/2604.22750 (How Do AI Agents Spend Your Money): OPENED
- https://evolink.ai/blog/retry-failure-rate-coding-agent-api-cost: OPENED
## NOT opened (budget): 2606.01365, Databricks $1.2M item, clew-custos, vantage.sh, getunblocked, HAL 2510.11977, arena.ai, dev.to price leaderboard, 2606.15954, 2607.22807, etc.
All fetch results came via the summariser (small model), so numbers are second-hand; not checked against raw text.

## Findings
- 2608.01347: waste = prompt variant with median paired reasoning ratio>1.5, CI lb>1.1, no success gain. Unit run (paired within task-model-harness). Endpoint reasoning tokens (secondary cost). Comparator matched baseline prompt. Estimand multiplicative ratio. NOT a share. Only %-figures: tool-induced cost 4-12% of run cost, caching -61% bill. Runs with one unused branch ~1.9x median cost of clean runs; redundant verification level3+ 18.25x.
- 2607.12161: no waste share. RTK-ML tool-output reduction -38.4% (5.62M->3.46M tokens, local BPE estimate); addressable cache-dollar share bounds ~4% / 12% (Haiku) / 25-30% upper (scenarios, not measurement); unattributed billing residual 8.7% [7.2,10.1] (not waste). Metric cost per successful execution (failures stay in numerator). Orders systems by CPS ratio vs baseline (RTK 0.968, RTK-ML 1.051, Headroom 1.464); no leaderboard.
- 2509.23586 (Trae Agent, trajectory reduction): qualitative "waste is widespread" (100 trajectories, no %). Proxy: reflection module removes 69.2-77.4% of content it processes (LLM-judged, unvalidated), input tokens -39.9..-59.7%, net cost -21.1..-35.9%. Unit trajectory steps >500 tokens; comparator Trae Agent without reflection. Closest to a "share" but it is share removed by an LLM judge, not a measured waste share, and with a cost-saving estimand.
- 2604.22750: no waste share. ~50% of file actions are repeats (Qwen3-Coder-480B, Sonnet 4, Kimi-K2) = share of ACTIONS not tokens; failed runs +<0.5M tokens (GPT-5/5.2) to ~+2M (Kimi-K2) absolute; priciest run ~2x cheapest.
- evolink blog: illustrative formula, not measured; 5% failure, 2 retries => +8% cost (relative to base; ~7.4% of total). Unreliable (internal inconsistency 8-10% vs 8-15% vs 15-30%).
- Re-ranking leaderboard on cost excluding wasted work: found nothing in opened sources. 2607.12161 orders by CPS which INCLUDES failures. HAL, dev.to price leaderboard, arena.ai cost, Open Agent Leaderboard surfaced by search but NOT opened; they add cost axis, not known to exclude waste.

## Conclusion
No opened source reports wasted/redundant/discarded tokens or dollars as a share of total tokens/cost with a measured definition. Nearest: 2509.23586 (LLM-judged removal rate 69-77% of processed content; cost -21..-36%), 2607.12161 (bounded addressable cache-dollar share 4-30%, scenario), 2604.22750 (50% repeated file actions, an action share). Unchecked candidates that could contradict: 2606.01365 and Databricks item. 
