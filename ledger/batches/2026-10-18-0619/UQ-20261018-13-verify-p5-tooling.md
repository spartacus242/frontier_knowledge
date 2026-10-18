# UQ-20261018-13 verify p5 tooling: smoothing of training metrics (working notes)

Read level: W&B smoothing page = FULL TEXT via summariser (no quotes beyond ~125 chars); Substack post = FULL TEXT via summariser; W&B support formula page = FULL TEXT via summariser (very short); TensorBoard = COULD NOT READ any primary documentation (search snippets/titles only).

## Calls (budget 7 searches / 7 fetches)
Fetches (7 used):
1. docs.wandb.ai/guides/app/features/panels/line-plot/smoothing/ -> REDIRECT 302 to docs.coreweave.com/products/wandb/app/features/panels/line-plot/smoothing.md (not auto-followed; counted).
2. github.com/tensorflow/tensorboard/blob/master/README.md -> read OK; says nothing about smoothing. Only quote: "TensorBoard's Scalar Dashboard visualizes scalar statistics that vary over time;"
3. docs.coreweave.com/.../smoothing.md -> OK ("Smooth line plots").
4. morganredding.substack.com/p/uniform-smoothing-is-better-than -> OK.
5. docs.wandb.ai/support/formula_smoothing_algorithm -> OK.
6. codegenes.net/blog/what-is-the-mathematics-behind-the-smoothing-parameter-in-tensorboard-s-scalar-graphs/ -> error: {"error_type":"SERVER_ERROR","source":"target","message":"There was an error while fetching."}
7. raw.githubusercontent.com/tensorflow/tensorboard/master/tensorboard/webapp/widgets/line_chart_v2/lib/utils.ts -> read OK, wrong file (no smoothing code); guessed path.
Searches (4 used of 7; 3 unused because fetch budget was exhausted):
1. "TensorBoard scalars smoothing slider exponential moving average default 0.6 debiasing" -> titles/URLs only.
2. "tensorboard smoothing scalars default 0.6 github tensorboard issue smoothing hides compare runs misleading" -> titles/URLs only.
3. site-restricted (github.com, stackoverflow.com) -> error: PROXY_REJECTED, "The WebSearch proxy rejected the request (HTTP 400): The request was invalid"
4. "TensorBoard smoothing slider default value 0.6 ..." -> titles/URLs only.

## Findings
Q1 W&B: four algorithms: time weighted EMA (TWEMA, marked "(default)"), Gaussian, running average, EMA. TWEMA/EMA range 0 to 1. Numeric default parameter value NOT stated on the page. Support page says only: "The exponential moving average formula aligns with the one used in TensorBoard." (no formula or default given). Original data shown by default as a faint background line: "By default, the original unsmoothed data displays in the plot as a faint line in the background."
Q1 TensorBoard: COULD NOT READ documentation. README has no smoothing text (NOT FOUND in README). The 0.6 default and EMA/debias details are my recollection only, unverified here.
Q2: W&B page: no explicit warning about comparison/hiding/creating differences. Nearest: TWEMA "allows consistent smoothing when displaying multiple lines with different characteristics simultaneously" (a multi-line consistency claim, not a warning); Gaussian preferred over running average for uneven spacing since fixed window "can produce misleading averages". TensorBoard: could not read.
Q3: Morgan Redding, "Uniform Smoothing Is Better Than Exponential Smoothing", Substack, dated Aug 01, 2026 per page, https://morganredding.substack.com/p/uniform-smoothing-is-better-than. Concludes uniform moving average should replace EMA for visualising metrics: EMA bias is hard to intuit, esp. early in training; uniform has more localized bias and permits standard errors/confidence intervals; says comparing multiple runs makes this "especially important"; says only downside is TensorBoard doesn't support it; W&B not mentioned. Assumption: noise from finite batch size around slowly changing trend, unweighted sample mean best unbiased estimator. Suggests widening window "until the interval is narrow enough to make a sound comparison" (no formal method). Summariser-sourced; quotes unverified verbatim. Only this one practitioner piece found; not "widely cited" as far as I could establish.
Q4: NOT FOUND (noise type / optimal window from data) in W&B page, support page, Substack post, TensorBoard README. Substack: no white/1-over-f/random walk; no derived window.
Q5: All material read concerns visual inspection. No documented use of a smoothed value as the basis for a recipe decision found. Substack does link smoothed-with-interval plots to "sound comparison" between runs, but still a visual/judgement use.
