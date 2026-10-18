# UQ-20261018-15 verify cooldown mix (working notes)

READ LEVEL: OLMo = PDF (arXiv 2501.00656, via summariser) + HF dataset card + HF model cards (7B, 1B) = partial full-text via summariser.
Marin = COULD NOT READ (search snippets/links only; no Marin page fetched). OLMo YAML configs = COULD NOT READ (robots-disallowed).
All content passed through a summariser; no verbatim-quote claims below are stitched. Fetch budget (7) fully used.

## Calls
F1 WebFetch arxiv.org/abs/2501.00656 -> OK. Title "2 OLMo 2 Furious"; first author listed "Team OLMo", then Pete Walsh, Luca Soldaini, Dirk Groeneveld, Kyle Lo ... last Hannaneh Hajishirzi (abstract page order).
S1 WebSearch "OLMo 2 Dolmino Mix 1124 ..." -> links only (arxiv pdf, HF OLMo-2-1124-7B, etc.), no snippets.
F2 WebFetch arxiv.org/pdf/2501.00656 -> OK (summarised). Tables 5, 13, 14; souping; GSM* selection.
F3 WebFetch huggingface.co/datasets/allenai/dolmino-mix-1124 -> OK (summarised). Mix % table; math groups.
F4 WebFetch huggingface.co/allenai/OLMo-2-1124-7B -> OK. No checkpoint frequency; no mix-selection statement.
F5 WebFetch huggingface.co/allenai/OLMo-2-0425-1B -> OK. Only ingredient 3 kept at 1B.
F6 WebFetch github.com/allenai/OLMo/tree/main/configs/official-1124 -> FAILED: {"error_type":"ROBOTS_DISALLOWED","source":"target","message":"There was an error while fetching."}
F7 WebFetch raw.githubusercontent.com/allenai/OLMo/main/docs/Checkpoints.md -> OK; no cadence, no stage-2 terms; mentions configs/official-0425 for 1B.
S2 WebSearch "OLMo-2-1124-7B stage2-ingredient1 ... save_interval" -> links only (HF discussions/6, gitee mirrors); not opened (no fetches left).
S3 WebSearch Marin cooldown mix docs -> links only (NVIDIA model card, wandb "Tootsie 8B phoenix cooldown starling", Google OSS blog on Marin 32B, instagit history); not opened.
S4 WebSearch Marin open lab cooldown github -> links only; not opened.
Searches used 4 of 7; fetches 7 of 7.

## Findings
Q1 OLMo stage 2 = Dolmino Mix 1124 (paper Table 13 mix weights, % of mix; Table 5 gives tokens and docs per source).
 50B / 100B / 300B: Filtered DCLM 47.2/50.2/51.9; FLAN 16.6/16.7/11.3; Stack Exchange Q&A 2.45/2.47/1.68; peS2o 5.85/9.52/19.4; Wiki/Wikibooks 7.11/3.57/4.86; Dolmino Math 20.8/17.5/10.8.
 Dataset card gives the same percentages; card says "Stage 2 Math" = all sources with category Math or Synth Math. Dataset card does NOT list token counts per mix (token figures in my summariser output were derived).
 Aggregation: percent of mix by tokens (card: "roughly a 50% token yield from DCLM, and 50% ... from the remaining sources"); Table 5 separately gives tokens and docs per source. Not config weights.
 Not read: the OLMo-core/OLMo YAML configs. So "verified in the configs" is NOT verified by me.
Q2 FLAN: YES (Table 5: FLAN from Dolma 1.7, decontaminated, 17.0B tokens, 57.3M docs; 16.6-16.7% in 50B/100B mixes, 11.3% in 300B).
 GSM8K: YES, "GSM8K train split" 2.74M tokens, 17.6K docs, inside the math mix (benchmark's own train split; not a proxy). Synthetic GSM8K-style: TinyGSM-MIND 6.48B tokens; Dolmino SynthMath 28.7M tokens, 725K docs, described (per summariser, paraphrase-level) as a collection of 7,924 synthetic GSM8K examples; also TuluMath 230M tokens, Metamath 84.2M. Math mix subtotal 10.7B tokens, 21.37M docs. GSM8K train is a tiny share of the math mix (2.74M of ~10.7B tokens).
Q3 Marin: COULD NOT READ. No claim made. Leads only: wandb report "Tootsie 8B phoenix cooldown starling", Google OSS blog on Marin 32B (2025/12), NVIDIA Marin 8B model card, github marin-community/marin.
Q4 Checkpoint count: 
 - "every 1000 steps": NOT FOUND in anything read (paper summary: no step interval; 7B card: none; 1B card: none; docs/Checkpoints.md: none). Only "step1000-tokens5B" appears as an example revision name on the 7B card (pretraining-style name), not a cadence statement. Configs (where save_interval would be) unread -> unresolved, not refuted.
 - "three ingredient seeds": PARTLY. 7B: three anneals at 50B with different data orders, souped (paper + card). 13B and 32B: four ingredients (3x100B + 1x300B) per paper summary. 1B (OLMo-2-0425-1B card): only one 50B run kept (ingredient 3), not merged; ingredients 1,2 "exploratory runs". So "three seeds at 1B" is contradicted for the 0425 1B; the record's "1B/7B/13B with three seeds" is not supported as stated. 13B card not read.
 - "1B/7B/13B": 7B and 1B cards read; 13B/32B only via paper summary; 32B exists too.
Q5 Selection on downstream benchmarks: paper (summariser): mixes compared on OLMES core, OLMES generative, MMLU and a 200-question GSM8K dev subset ("GSM*"); math sources chosen through 19 microanneals (~130B tokens) evaluated mainly on MMLU and GSM*; only 200 of 1,319 GSM8K examples inspected, rest held out. Model cards (7B, 1B): no statement on benchmark-based mix selection. Verbatim wording not captured (summariser paraphrase) -> re-check Section on mix design in the PDF before quoting.
Q6 Documented-in-table/prose: Tables 5/13/14 and card percentages = published tables (not configs). Selection rationale and souping = paper prose. Configs = unread. Marin = nothing.

## Surprises
- GSM8K train split literally is in the cooldown mix and the paper uses GSM8K dev subset for mix selection: the "task-relevant data" claim is true for OLMo 2 (FLAN + GSM8K train + synthetic GSM-style), but supported by paper/dataset card, not by configs I read.
- Marin side of the claim is entirely unverified.
