# UQ-20261018-15 — LATE Gate 4, adversary 1 (cold re-run)

Date: 2026-10-18. Prior Gate 4 verdict STRUCK; not read. Files read in this directory: ONLY
`UQ-20261018-15-record.md`. No -entry/-adversary-N/-verify- file opened.

Budget used: 8 searches (cap 8), 6 fetches (cap 6). No call was refused.

## Read levels
- Gate 0-3 record (local) — FULL TEXT.
- arXiv:2609.02015 abs page — ABSTRACT ONLY. Author line taken from the abs page's ordered list.
- arXiv:2510.06826v1 (HTML, full paper) — FULL TEXT, truncated before Sec. VI (Evaluation) and
  Sec. VII (Future Work); those two sections COULD NOT READ.
- arXiv:2407.15018v2 abs page — ABSTRACT ONLY (summariser paraphrased; no verbatim).
- arXiv:2504.13837 abs page — ABSTRACT ONLY (summariser paraphrased; no verbatim).
- W&B "Different Data Ablations on Cooldown Annealing" — COULD NOT READ (both routes, see below).
- arXiv:2406.11813 "How Do LLMs Acquire Factual Knowledge During Pretraining?" — SEARCH SNIPPETS
  ONLY. Budget gone; NOT opened; its four attributes are uncertified and ground no grade here.
- All WebSearch output — SEARCH SNIPPETS ONLY (tool returns titles + URLs only).

## Failed routes (exact error text)
1. WebFetch https://wandb.ai/marin-community/marin/reports/Different-Data-Ablations-on-Cooldown-Annealing---VmlldzoxMjAxMDUyMQ
   -> "REDIRECT DETECTED: The URL redirects to a location that was not fetched automatically."
   Status: "302 Found". Redirect target (server-supplied, unverified):
   https://forge.coreweave.com/wandb/marin-community/marin/reports/Different-Data-Ablations-on-Cooldown-Annealing---VmlldzoxMjAxMDUyMQ
2. WebFetch of that redirect target -> "The page can't answer any of your four questions. The
   content provided contains only navigation, login/sign-up links, and the page title. The report
   body did not render."
   => The Marin leg of the record's P6/audience claim remains COULD NOT READ after this pass too.
3. Summariser quote cap: for 2609.02015 / 2407.15018 / 2504.13837 the abstracts were paraphrased,
   e.g. "I can't reproduce the full abstract verbatim because it exceeds the 125-character limit".
   Not a failed route; logged so no paraphrase is mistaken for a quotation. No fragments stitched.

## My own disguise sweep (8 queries, vocabularies the record did not try)
1. "training on the test task" mid-training annealing cooldown stage benchmark gain decomposition
   -> two mid-training surveys + OLMo 2. NO work applying the training-on-the-test-task frame to a
   within-run cooldown. Surfaced arXiv:2510.06826, a SECOND mid-training survey the record lacked.
2. FLAN instruction data in annealing mix improves multiple-choice format compliance not knowledge
   ablation -> FLAN originals (2109.01652, 2301.13688) + two Marin cooldown-ablation reports. No
   format-vs-knowledge audit of an anneal.
3. when during pretraining do LMs learn the multiple-choice answer format checkpoint surface form
   competition -> 2407.15018 (opened), 2305.14596, 2023.emnlp-main.522. Format-mechanism cluster,
   no phase decomposition.
4. item response theory latent ability versus response format effect LM evaluation training
   checkpoints -> IRT-for-benchmarking only (safety-benchmark IRT, latency-response theory). Unit =
   items/benchmarks, never a training phase. METHOD-FIELD NEGATIVE in a method vocabulary the
   record did not try (record tried test-wiseness/response-format meta-analyses, not IRT).
5. mediation analysis indirect effect training stage downstream benchmark improvement LM mediator
   -> education/HCI/SLA mediation only. Notably did NOT surface 2407.07890: the mediation
   vocabulary does not reach the cooldown question.
6. OLMo 2 Dolmino anneal intermediate checkpoints released every steps HF revisions Marin cooldown
   checkpoints -> OLMo 2 model cards, a HF discussion thread, third-party "MixtureVitaev2-100BT-
   cooldown-*" variants. Nothing establishing within-cooldown checkpoint DENSITY.
7. annealing gain driven by benchmark-adjacent task data in the cooldown mix rather than general
   knowledge attribution -> the two Marin reports (incl. a second one, "#934 Phoenix Cooldown Mix
   Ablation", not in the record) + unrelated hits. No attribution study.
8. how do LLMs acquire factual knowledge during pretraining intermediate checkpoints probing
   acquisition forgetting dynamics -> 2406.11813 (NeurIPS 2024) and kin. Knowledge-limb vocabulary;
   NOT opened, see read levels.

## What I certified at first hand (beyond the ESTABLISHED FACTS)
- arXiv:2609.02015 "How Output Format Confounds Data Quality and Capability in Instruction Tuning",
  authors in printed order Chengguang Gan, Hanjun Wei, Yunhao Liang, Qinghao Zhang, Shiwen Ni,
  Zhixi Cai. The record called this "the single most dangerous unread source". OPENED. What it
  MEASURES: gradient signatures / spectral statistics (effective rank) and update direction across
  12 tasks, 4 equivalent output formats, 3 model families, at the SFT / instruction-tuning stage.
  NOT pretraining, NOT mid-training, NOT annealing. NO share or fraction of a gain. It does NOT
  re-rank data ablations. No fixed-weight output transform; its only inference-side adjustment is a
  generation-budget correction. Two effect sizes reported: a format change raising accuracy by >40
  points, and a generation-budget correction flipping the GSM8K fine-tuning effect from gain to
  loss. => The record's stated kill condition ("if Gate 4 opens 2609.02015 and finds the
  ablation-ranking consequence already demonstrated") is NOT met. Novelty does not fall on this.
- arXiv:2510.06826 "Mid-Training of Large Language Models: A Survey" (Mo, Shi, Weng, Zhou, Liu,
  Zhang, Zeng) — a SECOND, independent mid-training survey. It explains the decay-stage gain in
  optimization/data terms only: "lowering the learning rate mitigates gradient variance and
  stabilizes convergence near favorable minima"; "These methods improve sample efficiency by
  enabling finer assimilation of high-quality tokens."; frames the stage as shifting models "from
  memorization toward abstraction". It cites NO work decomposing the gain into format/calibration/
  sharpening vs knowledge. It says "Yet scheduler design remains largely empirical", and that the
  role of instruction-style data "remains uncertain" with its optimal placement "remains
  unresolved" — a near-miss: a recipe question (where to put format data), not a question about
  what the gain is made of. Its Future Work and Evaluation sections COULD NOT READ, so I CANNOT
  say this survey fails to list the candidate as open; that leg rests on the record's 2510.23081.
- arXiv:2407.15018v2 "Answer, Assemble, Ace: Understanding How LMs Answer Multiple Choice
  Questions", printed order Sarah Wiegreffe, Oyvind Tafjord, Yonatan Belinkov, Hannaneh Hajishirzi,
  Ashish Sabharwal. Same group as the format prior in FACT D (Wiegreffe). Unit = model internals
  (hidden states, middle layers, attention heads). It reports that answer-token logit differences
  continue to grow over the course of training; the abs page does NOT name the model or the number
  of checkpoints, so within-run checkpoint analysis is NOT confirmed from what I read. No cooldown.
  No numeric decomposition of a score change. Not a disguise; a mechanism neighbour that supports
  the premise that format ability is still developing late in training.
- arXiv:2504.13837 "Does Reinforcement Learning Really Incentivize Reasoning Capacity in LLMs
  Beyond the Base Model?" (abs page printed order: Yang Yue, Zhiqi Chen, Rui Lu, Andrew Zhao,
  Zhaokai Wang, Yang Yue, Shiji Song, Gao Huang — "Yang Yue" appears twice on the abs page;
  reported as printed, not normalised). The record's "most likely Disguise". Unit = RLVR-trained
  model vs its base model across families/algorithms. Endpoint = pass@k at large k, plus coverage
  and perplexity. Comparator = the base model as upper bound. Estimand = whether RLVR expands the
  reasoning capability boundary. NO share or fraction. NO pretraining, cooldown or annealing. NO
  fixed-weight output transform. NO multiple-choice format analysis. => Same SHAPE of question one
  phase later; not the candidate's question, and it reports no decomposition to be disguised.

## Ledger classification
NOT a disguised known (nothing found poses the candidate's question). NOT asked-but-open (no source
poses it and leaves it unanswered; the record's survey does not list it, and the second survey's
future-work list is COULD NOT READ). It sits closest to the third category and clears it only on the
estimand: effect decomposition is a mature method, format-corrected MCQ scoring is a 2025 instrument,
and within-run cooldown checkpoints are the never-used unit — but the question the priors POSED is
different in each case (N1/FACT D: a checkpoint's format-corrected LEVEL; 2407.07890: a cross-release
gain mediated by training on the test task; 2504.13837: an RL phase's capability boundary in pass@k;
2609.02015: an SFT data-quality confound). None poses the composition of a within-run cooldown
benchmark CHANGE. So: a genuinely un-asked question, one step from a method transfer, clearing the
"method never applied to a unit" bar on the estimand and on that alone.

## Grades
1 Triviality — RESOLVED. 2 Disguise — RESOLVED. 3 Combinatorial novelty — RESOLVED.
4 Presupposition failure — PARTIAL. 5 Vagueness — PARTIAL. 6 Significance inflation — RESOLVED.
7 Reason for silence — RESOLVED. 8 Dissolution — PARTIAL.
Reasons as filed in the structured return. No Unresolved; no Unverified (all eight checks ran).
