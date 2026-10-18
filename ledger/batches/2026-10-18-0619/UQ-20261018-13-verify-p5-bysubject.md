# UQ-20261018-13 verify p5 by-subject (2026-10-18)

READ LEVEL: mixed. Apertus 2509.14233 = PDF via summariser (partial, sections 2.4/2.5/3.3/4.1). MaP 2510.09295 = PDF via summariser. Giles Thomas post = full page via summariser. Proxy-model 2512.24503 = arxiv html via summariser (appendix not seen). Smol Training Playbook = SEARCH SNIPPETS / third-party substack summary ONLY (HF Space itself returned only metadata, no article text).

## Searches (7 of 7 used, all returned results, no errors)
1. pretraining ablation methodology compare runs smoothed training loss curve EMA window language model
2. small-scale ablation protocol language model pretraining recipe average loss last steps compare noisy training curves
3. seed variance pretraining language model ablation noise final loss differences significance
4. Smol Training Playbook ablations "training loss" not reliable ... (snippets)
5. "average training loss" over the last steps ablation ... "last 100 steps" OR "last 1000 steps" OR "exponential moving average"
6. Can Small Training Runs Reliably Guide Data Curation proxy-model practice ...
(6 run; 7th not used)

## Fetches (7 of 7 used)
1. arxiv.org/pdf/2510.09295 (MaP) - OK
2. gilesthomas.com ...32i-interventions-what-is-in-the-noise - OK
3. huggingface.co/spaces/HuggingFaceTB/smol-training-playbook - summariser reply: "The page content you provided doesn't include the article text ... only metadata" (NON-READ)
4. arxiv.org/pdf/2509.14233 (Apertus) - OK
5. arxiv.org/pdf/2509.14233 focused re-read on Sec 2.4 loss definition - OK; no definition found
6. seldondance.substack.com/p/the-smol-training-playbook - OK (third-party summary, not primary)
7. arxiv.org/html/2512.24503v1 - OK (appendix D not visible)

## Findings
(1) Stated smoothing window used when comparing/deciding runs: NOT FOUND for any loss-based ablation decision. Only windows found: Apertus Fig 3 caption (gradient norms, not loss): "For the gradient norms, curves are smoothed with a running window of 500 steps (70B) and 1000 steps (8B)." and same caption "No smoothing is applied to the loss curves." Those are for plotting, not an ablation decision. No EMA 0.9/0.99, no mean-of-last-k found anywhere opened.
(2) Mid-run windowed training loss as decision basis: NOT FOUND.
(3) Dominant practice seen: end-of-run single number.
 - Apertus Sec 2.4: 1.5B, 100B tokens (~48,000 steps), one "training loss" number per ablation (baseline ~2.037; AdEMAMix 2.002, xIELU 1.997); definition of the number (final step / average / smoothed / held-out) NOT stated in the text read; no seeds or noise mentioned; WandB links only. So here the decision is on an end-of-run training loss with unstated aggregation.
 - Proxy-model paper 2512.24503: rankings on Pile validation-split loss of pretrained models; shaded regions "standard errors calculated across 3 random seeds" (Fig 3 caption). No smoothing mentioned (appendix not read).
 - Giles Thomas (blog, 2026-04): single final test-set loss per run; seed noise from 3 runs per setup, SD ~0.009-0.015 on loss ~3.67; no smoothing.
 - Smol Training Playbook: only via third-party summary (not primary): "Looking only at training loss isn't reliable."; ablation evals should have "low noise (identical setups shouldn't produce wildly different scores)"; downstream evals preferred. NOT verified at source.
(4) Within-run temporal noise: MaP (2510.09295) Sec 2.2 treats it as "parameter instability" for BENCHMARK scores and averages the last N checkpoints (weights) for evaluation only; "Thus, checkpoint merging reduces the variance of the parameter noise by a factor of N." Appendix G.1 argues an SMA over scores lags ("SMA is merely a statistical average of historical scores."). That is checkpoint-weight averaging on eval scores, NOT smoothing of a training-loss series. Does not report seed count. Nobody found reporting temporal noise of the training-loss series itself.
(5) CLEAN NEGATIVE for (1)-(2) on the queries above: no source opened states a smoothing/averaging window for deciding an ablation from training loss. Caveats: limited to 7 searches/7 fetches; Smol playbook primary text and Apertus ablation appendix/WandB not read; absence in summariser output is not proof of absence in the documents.
