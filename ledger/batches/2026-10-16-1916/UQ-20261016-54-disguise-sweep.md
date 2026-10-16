# UQ-20261016-54 — prior-art sweep ("disguise" vocabularies)

Date: 2026-10-16
Mode: neutral literature/methods check. Budget: <=12 searches, <=5 fetches (shared pool).

## Question under check

For a given open-weight model release, how far does the DOWNLOAD-WEIGHTED AVERAGE behaviour
(capability scores and refusal / jailbreak resistance) of its publicly available third-party
derivatives (requantizations, fine-tunes, merges, uncensored variants) differ from the
reference weights that are the ones actually evaluated and reported on?

Decomposition for matching candidates:
- UNIT of analysis: a release's full population of public derivatives (one row per derivative repo)
- WEIGHT: download counts (unequal-probability / usage weighting)
- ENDPOINT: capability benchmark scores AND refusal / jailbreak-resistance scores
- COMPARATOR: the reference (reported) weights of that release
- ESTIMAND: weighted mean over derivatives of (derivative score - reference score), i.e. the
  gap between "what was evaluated" and "what is, on average, actually downloaded"

## Search log (query -> one-line result)

S1. `Hugging Face fine-tuned quantized derivative models safety evaluation ecosystem study downloads "base model" variants`
    -> hits: arXiv 2409.10472 (Semantic versioning of open PTLM releases on HF); 2511.00382 (PEFT safety/fairness);
       2512.03073 (Economies of Open Intelligence: model ecosystem); 2409.19476 (Overriding safety protections of
       open-source models); Manifund project "evaluating the safety ethics and values of quantized and finetuned open
       models" (closest-sounding); youngju.dev blog "Half of Trending Page One Isn't New Models" (HF trending derivatives).
S2. `effect of quantization on LLM safety alignment refusal rate benchmark study`
    -> hits: QuantiBias 2607.21063 (quantization-induced bias); 2502.15799v2 (quantization vs safety/reliability);
       ICML 2026 "Channel Geometry of Refusal ... KV quantization"; 2606.29581 (quantization x sampling temperature);
       AAAI paper 42317. All are per-model quantization-method studies, not derivative-population studies.
S3. `model merging safety alignment degradation empirical study merged LLMs`
    -> hits: Hammoud et al. "Model merging and safety alignment: one bad model spoils the bunch" (2024); SafeMERGE 2503.17239;
       2604.00627 (When safe models merge into danger); 2608.26506 (Basin-aware jailbreaks for merged model families);
       merging survey 2603.09938. Per-merge safety studies; no population/download weighting.
S4. `"model family tree" OR "model genealogy" Hugging Face derivatives empirical study fine-tunes quantizations`
    -> hits: arXiv 2508.06811 "Anatomy of a Machine Learning Ecosystem: 2 Million Models on Hugging Face" (NeurIPS 2025);
       ICIS 2025 impl_adopt/13 (unknown). Family-tree measurement - need to check whether behaviour is measured.
S5. `"supply chain" open-weight model derivatives provenance downloads Hugging Face measurement fine-tuned quantized variants inherit`
    -> hits: arXiv 2604.07190 "The ATOM Report: Measuring the Open Language Model Ecosystem"; 2602.00772 (provable model
       provenance set); 2502.15987 (forecasting open-weight growth on HF); ICSE 2026 "A First Look at Model Supply Chain From
       the Risk Perspective"; 2502.04484 (unknown); vendor blogs (Cisco provenance explorer). Supply-chain papers are about
       provenance/risk propagation, not behavioural gap vs reference.
S6. `"download-weighted" OR "usage-weighted" OR "deployment-weighted" evaluation language models benchmark Hugging Face`
    -> hits: ATOM Report 2604.07190 again (only paper hit); rest are lm-eval-harness docs / SEO pages. No paper titled with
       a download-weighted evaluation.
S7. `share of Hugging Face downloads quantized GGUF variants versus original Llama repository "downloads" bartowski TheBloke analysis`
    -> hits: youngju.dev blog "Half of Trending Page One Isn't New Models" (2026-08-02; HF trending-page composition);
       SEO stats pages (voxbooster); tooling docs. Nothing peer-reviewed; no download-share-of-derivatives number surfaced.
S8. `gap between evaluated model and deployed model variants "in-service" conformity AI model cards reported benchmarks do not reflect deployed quantized versions`
    -> hits: arXiv 2608.23663 "Confidently Wrong, Silently So: Auditing ... a Deployed On-Device Language Model" (single
       deployed model audit); ML-EXray 2111.04779 (edge deployment visibility); blogs: tianpan.co "model cards production gap
       benchmarks" and "silent quantization" (API-provider framing). Adjacent: evaluated-vs-deployed gap for ONE model/provider,
       not a population of public derivatives.

## Fetch log

F1. OPENED https://manifund.org/projects/evaluating-the-safety-ethics-and-values-of-quantized-and-finetuned-open-models
    - "Evaluating the safety, ethics, and values of quantized and finetuned open models", Anthony Ozerov (UC Berkeley
      statistics PhD student). Page created Aug 10, 2026. Status: PROPOSAL, "Not funded", $0 of $5,000.
    - Derivative types: quantized + fine-tuned incl. guardrail-removed ("abliterated") variants; merges not mentioned.
    - Endpoints: safety/refusal, ethics, values (political values, moral decision-making). Capability benchmarks NOT a target.
    - Weighting: none described; HF popularity cited only as motivation. Comparator to base weights implied, not designed.
    - Links a preliminary analysis: safetyevidence.org/research/abliteration-ugi-values/ (values shift when refusals removed).
    - Verdict: ADJACENT. Same derivative population in spirit, overlapping refusal/values endpoint, but no download weighting,
      no capability endpoint, no population estimand, and no results (proposal only).
F2. OPENED https://arxiv.org/abs/2508.06811
    - "Anatomy of a Machine Learning Ecosystem: 2 Million Models on Hugging Face", Laufer, Oderinwale, Kleinberg; submitted
      2025-08-09; NeurIPS 2025. 1.86M models organised into family trees (fine-tune parent links).
    - Traits measured from METADATA and model cards only: licenses, language compatibility, card length/templating.
      "use model metadata and model cards to measure the genetic similarity and mutation of traits".
    - No benchmark/safety/refusal behaviour; download counts not mentioned in abstract.
    - Verdict: ADJACENT. Right UNIT (population of derivatives per base), wrong ENDPOINT (metadata, not behaviour).
S9. `community quantized checkpoints Hugging Face quality variance across uploaders GGUF imatrix evaluation study perplexity KL divergence many quants`
    -> hits: localbench.substack.com "Gemma 4 31B GGUF Quality Benchmark: unsloth, bartowski, lmstudio-community, ggml-org
       compared" and "GGUF Quantization Quality Benchmark: Methodology" (blog; KL-divergence vs reference across uploaders of
       the SAME release); unsloth docs GGUF benchmarks (vendor). Incidental, non-peer-reviewed; capability proxy only
       (KL/perplexity), one release at a time, unweighted by downloads.
S10. `large-scale safety evaluation hundreds of fine-tuned models Hugging Face "in the wild" refusal benchmark empirical study derivatives of Llama`
    -> hits: arXiv 2605.05427 "The Refusal--Compliance Tradeoff: A Large-Scale Safety Behavior Audit of Large Language Models"
       (candidate - need to check model population); 2406.14598v2, 2405.20947, 2406.11717 (refusal-direction / safety
       fine-tuning papers, per-model); 2510.08158 (over-refusal); 2604.00228 (unknown).
S11. `evaluation of "uncensored" fine-tuned LLM variants capability benchmarks versus original model empirical comparison paper`
    -> hits: promptfoo how-to guides (tooling); vendor pages (multiverse, featherless, ollama); HF model cards; blog
       "abliterlitics benchmarks 8 uncensored qwen 27b variants across 167 gpu hours" (0dev.duckdns.org; one release, 8
       refusal-removed variants, benchmarks; non-academic, unweighted). No paper found doing this across a release's population.

F3. OPENED https://arxiv.org/abs/2604.07190 (abstract only)
    - "The ATOM Report: Measuring the Open Language Model Ecosystem" (arXiv 2604.07190v2). ~1.5K "mainline open models";
      data are "a mix of Hugging Face downloads and model derivatives, inference market share, performance metrics and more";
      headline is country/developer share ("Chinese models overtook their counterparts built in the U.S. in the summer of 2025").
    - Derivatives and downloads used as ADOPTION metrics of mainline models; no statement of derivative BEHAVIOUR vs original,
      and no download-share-of-derivatives figure visible at abstract level. Body NOT READ (fetch budget). Verdict: ADJACENT
      (same raw ingredients - downloads + derivative counts - but estimand is ecosystem share, not behavioural gap).
F4. OPENED https://conf.researchr.org/details/icse-2026/icse-2026-research-track/129/...
    - "A First Look at Model Supply Chain: From the Risk Perspective", Chen et al. (Fudan; Song at CMU), ICSE 2026 research
      track. Supply chain of 1.82M HF models, 0.54M dependency relations (fine-tuning, quantization, merging) as of
      2025-06-25; studies "usage, evolution, quality, and risk". No preprint/DOI on the page; body NOT READ.
    - Verdict: ADJACENT / UNVERIFIED. Right UNIT (derivative dependency graph incl. quantize/merge edges); whether "quality"
      or "risk" includes behavioural (benchmark/refusal) comparison to base, or download weighting, could not be established.
S12. `"Open LLM Leaderboard" analysis community fine-tunes merges versus base models downloads study paper thousands of submissions`
    -> hits: arXiv 2511.21437 "A Systematic Study of In-the-Wild Model Merging for Large Language Models" (NOT OPENED -
       budget exhausted; title suggests a population study of real-world merges, possibly the nearest for the merges slice on
       capability); 2409.03257 (longitudinal Open Ko-LLM Leaderboard study); 2509.18136 (data-driven LLM structure study);
       2606.15999 (China open-AI ecosystem); ONEBench 2412.06745 (sample-level benchmarking). No paper found that weights
       leaderboard entries by downloads or compares a release's derivatives in aggregate to the reference.

F5. OPENED https://arxiv.org/abs/2605.05427 (abstract only)
    - "The Refusal--Compliance Tradeoff: A Large-Scale Safety Behavior Audit of Large Language Models", Alif Al Hasan, Sumon
      Biswas; submitted 2026-05-06, v2 2026-05-30. Audits "21 open-weight LLMs" on OR-Bench, XSTest, ToxiGen, BOLD.
    - UNIT = distinct developer releases ("model families across generations and scales"); community derivatives not
      mentioned; no capability benchmarks; no download weighting; comparator is cross-model, not derivative-vs-reference.
    - Verdict: ADJACENT (refusal endpoint over a population of RELEASES, not of DERIVATIVES of one release).

Budget: 12/12 searches used, 5/5 fetches used. No search or fetch was refused. Not opened (budget): arXiv 2511.21437;
safetyevidence.org/research/abliteration-ugi-values/; ATOM full text (arxiv.org/html/2604.07190); ICSE 2026 paper body
(no preprint link found on the program page); arXiv 2512.03073; arXiv 2502.15799.

## Conclusion

ON POINT: NO. Nothing found asks or answers the question as posed (download-weighted average behaviour of a release's
public third-party derivatives, on capability AND refusal/jailbreak resistance, relative to the evaluated reference weights).

Nearest items, each with the respect in which it is only adjacent:
1. Ozerov, Manifund proposal "Evaluating the safety, ethics, and values of quantized and finetuned open models" (Aug 2026,
   unfunded). Closest in INTENT: same derivative population (quantized, fine-tuned, refusal-removed) and overlapping
   refusal/values endpoint; implied base comparator. MISSING: download weighting, capability endpoint, any population
   estimand, and any results (proposal only). Merges not mentioned.
2. Laufer, Oderinwale & Kleinberg, "Anatomy of a Machine Learning Ecosystem: 2 Million Models on Hugging Face" (NeurIPS 2025,
   arXiv 2508.06811). Right UNIT (full family trees of derivatives per base). WRONG ENDPOINT: metadata traits (license,
   language, model-card form), no behaviour; no download weighting visible at abstract level.
3. Chen et al., "A First Look at Model Supply Chain: From the Risk Perspective" (ICSE 2026). Right UNIT (1.82M models,
   0.54M fine-tune/quantize/merge dependency edges), studies "usage, evolution, quality, and risk". COULD NOT READ body;
   whether quality/risk is behavioural vs base, or download-weighted, is unestablished - its silence is not evidence.
4. ATOM Report (arXiv 2604.07190). Uses HF downloads and derivative COUNTS, but as adoption metrics for ~1.5K mainline
   models; ESTIMAND is ecosystem share by developer/country, not a behavioural gap. Body not read.
5. "A Systematic Study of In-the-Wild Model Merging for LLMs" (arXiv 2511.21437). Title-only; NOT OPENED. Potentially the
   nearest for the MERGES slice on capability (real-world merges vs parents); weighting and refusal endpoint unknown.
6. Per-mechanism controlled studies - quantization->safety (arXiv 2502.15799; QuantiBias 2607.21063; KV-quant refusal
   collapse, ICML 2026), merging->safety (Hammoud et al. 2024 "one bad model spoils the bunch"; 2604.00627; 2608.26506),
   fine-tuning->safety (2409.19476 and the Qi et al. 2023 line). UNIT = one model under a researcher-chosen transformation;
   COMPARATOR = its base; ENDPOINT = safety or capability for that transformation. Not the publicly circulating third-party
   variants, not a population, not download-weighted. They establish that EACH mechanism can move behaviour, which is the
   premise of the question, not its answer.
7. Hasan & Biswas, "Refusal--Compliance Tradeoff" (arXiv 2605.05427): 21 distinct releases; refusal endpoint only; unit is
   the release, not derivatives of one release.
8. Non-academic incidental partial answers (not citable as prior art): localbench.substack.com GGUF quality benchmarks
   (KL divergence of several uploaders' quantizations of ONE release vs the reference - requantization slice, capability
   proxy, unweighted); "abliterlitics" blog (8 refusal-removed Qwen-27B variants benchmarked - uncensored slice, capability,
   unweighted); youngju.dev (share of HF trending page that is derivatives - attention share, not download share, no
   behaviour); tianpan.co "model cards production gap" / "silent quantization" (API-provider framing, single vendor).

Specific gaps that no found work fills: (a) download counts used as WEIGHTS for a behavioural average (ATOM uses downloads
as an outcome); (b) behaviour measured over the actual public derivative population rather than researcher-made variants
(Anatomy and ICSE have the population but, as far as read, measure metadata / unread "quality"); (c) capability and
refusal/jailbreak resistance measured JOINTLY on the same derivatives; (d) the explicit "evaluated reference vs
download-weighted field population" gap framing (the in-service-conformity analogue), which appears only in blogs.

Recommended follow-up (not done here): open arXiv 2511.21437, the ICSE 2026 paper body (search for a preprint), the ATOM
full text for any derivative download-share figure, and safetyevidence.org/research/abliteration-ugi-values/.
