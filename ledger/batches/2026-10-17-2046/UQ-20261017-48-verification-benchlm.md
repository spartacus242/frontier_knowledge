# UQ-20261017-48 BenchLM verification notes
Read level: FULL TEXT (via summariser; page appeared complete, ends with FAQ + footer). No PDF/DOI; it is a web blog post.
Calls: 1 search, 4 fetches.
- Search 1 "The Missing-Benchmark Problem" ... -> found https://www.benchlm.ai/blog/posts/missing-benchmark-problem in results (no other copies).
- Fetch 1 benchlm.ai/blog/posts/missing-benchmark-problem -> OK. Title, BenchLM Research/BenchLM, Jul 4 2026, updated Sep 22 2026.
- Fetch 2 same URL (quote pull) -> OK. Confirms 272/170, Rubin 1976, MNAR phrase; no slope/IRT/latent words.
- Fetch 3 https://benchlm.ai/ -> OK. Commercial leaderboard site, ads/sponsorships, affiliate disclosure.
- Fetch 4 same post, targeted -> OK. Second quote sits in two sentence halves (summariser split).
Findings
1. Exists: https://benchlm.ai/blog/posts/missing-benchmark-problem. Title "The Missing-Benchmark Problem: How Leaderboards Reward Hiding Weak Scores". BenchLM (Research). Published 4 Jul 2026, updated 22 Sep 2026.
2. Industry blog post on a commercial leaderboard site (ads, sponsorships, affiliate disclosure). Not peer reviewed; no review claimed.
3. FOUND: "We rescored all 272 tracked models on July 4, 2026"; "the final recalculation moved the stored scores of 170 of 272 tracked models"; "Most models moved three to five points down" (most, not all). Rescored = stored composite overall scores, method changed from renormalisation to conservative imputation; sourced benchmark results unchanged.
4. FOUND: heading "Statisticians named this problem in 1976"; "since Donald Rubin's 1976 work"; "missing not at random, where the probability that a value is absent depends on the value itself". No full bibliographic reference.
5. FOUND, with a caveat: "unreported scores are, on average, worse than reported ones" verbatim (in "The absence is informative: ..."). Second quote is one sentence in the source, reproduced by the summariser only as two fragments: "averaging observed values is not merely noisy, it is biased upward" and "and biased most for exactly the models whose gaps are most strategic." Fragments not stitched by me; the attributed wording "averaging observed cells" is NOT what the page says ("observed values"); and the attributed wording omits the lead-in. Fetch 1 summariser rendered it as one sentence "it is biased upward, and biased most for ...", consistent.
6. NOT FOUND for trend/slope. Level of composite only. Keywords slope, rate of progress: none. "trend" only in nav ("Pricing trends"), "Over time" only nav heading. Read the full page text.
7. NOT FOUND for IRT/latent trait; no MNAR departure family with bounds. Fixed "half-blend" of cohort median and model's own weighted mean, shrink constant 0.5. FAQ uses word "bounded" once ("bounded family information") and mentions uncertainty intervals (e.g. 90% 62.43-85.46 for GPT-5.4 Pro, from BenchAlign v5) without specifying a model.
Extra: A 14 Jul 2026 update says the body's method is superseded by BenchAlign v5 (missing results widen uncertainty rather than a fixed fill). Body is history, not the live method.
