# Notes UQ-20261017-30-lategate4-lit-b
Budget: 9 searches used (cap 9), 4 fetches used (cap 4). Search results in this environment returned titles+URLs only (no snippets), so searches served as URL discovery; every content claim below comes from a fetch (via WebFetch summariser) or is labelled as my own reasoning or memory.

## Queries
1 infrastructure noise agentic coding benchmarks -> titles; Anthropic engineering/infrastructure-noise found
2 agent benchmark infra failures excluded/counted, ranking -> titles; DeepSWE 2607.07946, MASEval exception-handling, HAL-related; nothing read
3 Inspect AI eval log format fields -> titles; inspect.aisi.org.uk/eval-logs.html.md found
4 SWE-bench Verified 477/500 denominator -> titles only (OpenAI pages, GPT-5 system card, Epoch); NOT read
5 Terminal-Bench/tau-bench/SWE-bench errored runs, infra errors -> titles; Harbor Adapters 2609.04298, Rollout Cards, MASEval
6 HAL log analysis -> titles (HAL 2510.11977); NOT read
7 Harbor trial result fields -> titles; mintlify trial-result page found
8 SWE-bench harness report fields -> titles (swebench.com guides/evaluation, OpenHands/benchmarks issue 140); NOT read
9 results flip when crashed runs excluded vs failed -> titles (DeepSWE, Rollout Cards, Noise Floor Audit 2608.22331, others); NOT read

## Fetches
1 https://anthropic.com/engineering/infrastructure-noise - success (summariser)
2 https://inspect.aisi.org.uk/eval-logs.html.md - success (summariser); page lacks EvalSample field table
3 https://maseval.readthedocs.io/en/stable/guides/exception-handling/ - success (summariser)
4 https://www.mintlify.com/harbor-framework/harbor/api/trial-result - success (summariser)
No fetch gave raw text; all quotes are as relayed by the summariser.

## Exact strings (as relayed)
- "as many as 6% of tasks were failing because of pod errors" FOUND (Anthropic; early calibration figure)
- "Most of the tasks that were crashing at 1x would have failed regardless" FOUND
- "a momentary memory fluctuation can OOM-kill a container that would otherwise have succeeded" FOUND
- "leaderboard differences below 3 percentage points deserve skepticism" FOUND (summariser flagged as truncated)
- infra error 5.8% (1x) -> 0.5% (uncapped); +6 pp uncapped vs 1x p<0.01; 1x-3x within noise p=0.40: FOUND
- Anthropic explicit scoring/denominator rule for infra-failed tasks: NOT STATED in the page as summarised (read level: whole page via summariser)
- MASEval "Validation failures indicate agent-provided bad input" FOUND; "Execution failures after validation indicate infrastructure issues" FOUND
- MASEval default: AgentError included in score; EnvironmentError, UserError, TaskTimeoutError excluded; example 60/92 = 65.22% not 60/100: FOUND
- Inspect: status "started"/"success"/"error" FOUND; sample `error` in summaries FOUND; error_retries, limit, fail_on_error, retry_on_error NOT PRESENT in the page as summarised (that page is a log-format page and links to a separate errors page I did not read) - absence over one page only
- Harbor: ExceptionInfo{exception_type, exception_message, exception_traceback, occurred_at} FOUND; any field separating infra from agent failure: NOT PRESENT (one API page read)

## Secondary (not re-verified by me): other workers' notes in same dir
UQ-20261017-30-verification-rolloutcards.md and ...-lit-a.md (both summariser-based): Rollout Cards audit, 50 repos, none reports failure rate beside score; re-grading study: SWE-bench Verified missing patches as failures vs excluded 15.6 vs 13.3 pp; tau-bench grader choice reversed GPT-4o vs Claude 3.5 Sonnet (grader, not denominator); DeepSWE excluded infra failures from numerator and denominator, excluded fraction 0 to 5.3%, "the leaderboard ordering is not sensitive to the rule".

## Conclusions: see structured output.
