# Notes UQ-20261017-30-lategate4-lit-a
## Queries (9 of 9)
1 agent benchmark infra failures excluded/failure/retry ranking -> titles only; leads: DeepSWE 2607.07946, Rollout Cards, Can Agent Benchmarks Support Their Scores (2605.10448)
2 ITT analogy LLM benchmark crashed runs -> only clinical ITT pages (PMC3428470 etc.); no ML application surfaced
3 "Can Agent Benchmarks Support Their Scores" -> titles
4 Rollout Cards -> titles
5 infra errors SWE-bench/terminal-bench errored trials -> DeepSWE, Anthropic infrastructure-noise (known (v))
6 reporting checklist / CONSORT flow ML eval -> only CONSORT-for-LLM-reading papers; no ML eval standard
7 MNAR/informative censoring agent benchmarks -> Terminal-Bench hardness, ReliabilityBench; nothing on denominators
8 (extended) harness errors exclude/fail/rerun ranking replay -> Harness-Bench, 2610.16067 oracle failures, 2605.23950 harness disclosure (titles only, NOT read)
9 open problem denominator failed runs -> Rollout Cards again; nothing new
## Fetches (4 of 4)
1 alphaxiv 2605.10448.md OK (summariser; reports it read full text incl. appendices A-E)
2 arxiv.org/pdf/2605.12131 OK (summariser; main text + App A,B, start C; last 10,942 chars unread)
3 arxiv.org/html/2607.12338 OK (summariser; full text claimed)
4 arxiv.org/html/2607.07946v1 OK (summariser; to start of Conclusion; last ~5.9k chars + appendices unread)
## Strings found (all via summariser quotes)
- 2605.10448: "only infrastructure or pre-run failures are excluded from N" FOUND; Unknown shares 50.0% AndroidWorld, 16.7% AgentDojo, 0.3% tau3 retail, 0 AppWorld/MiniWoB; 92/1282 ~7.2% (summariser's arithmetic); "can create agent-dependent post-selection" re dropping Unknown. Cites Manski partial identification. Unknown = unverifiable outcomes, not harness crashes; infra exclusions not counted.
- 2607.07946 DeepSWE: excluded "from both the numerator and the denominator of every metric"; excluded fraction "ranges from 0% ... to 5.3% (Gemini 3 Flash)"; "the leaderboard ordering is not sensitive to the rule" (no arm shown per summariser); timeouts/context exhaustion scored as failures; 7,174 scored rollouts.
- 2607.12338: no failure handling, no missing-data terms (full text claimed read).
- Rollout Cards 2605.12131: no requirement to disclose failure rate + denominator rule; closest "names every view and reporting rule applied to the card".
## Conclusions: see structured output.
