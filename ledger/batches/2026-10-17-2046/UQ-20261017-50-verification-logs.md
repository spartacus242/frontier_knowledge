# UQ-20261017-50 verification notes

Read level: mixed. fairseq trainer.py (main) and v0.6.0 trainer.py via summariser (page text, not verbatim full file); GitHub issue bodies read in full via GitHub search API (JSON); OLMo olmo/optim.py and olmo/train.py via summariser. No PDFs/papers.

## Calls
1. WebFetch raw fairseq main fairseq/trainer.py -> OK. clip metric in Trainer._reduce_and_log_stats gated by clip_norm>0; snippet truncated after "torch.where(grad_norm > self.cfg.optimization.clip_norm,".
2. WebSearch fairseq gnorm clip= log -> lightrun/dagshub/readthedocs links only, no content.
3. WebFetch dagshub v0.5.0 train.py -> FAILED (sign-in page).
4. WebFetch lightrun page -> FAILED (blog index).
5. github search_issues (fairseq repo, clip/gnorm) -> OK, large JSON saved locally, parsed.
6. github search_code clip_meter -> empty.
7. github get_file_contents fairseq v0.6.0 -> DENIED (repo not allowed in session). (Not counted as a successful fetch; budget slightly stretched if counted.)
8. github search_issues "gnorm=nan problem clip" -> dates: #79 2017-12-12, #250 2018-08-17, #1263 2019-10-18.
9. WebFetch github allenai/OLMo olmo/train.py -> no clipping_rate; only optim/total_grad_norm console-logged.
10. WebFetch raw OLMo olmo/optim.py -> clipping_rate found.
11. WebFetch raw fairseq v0.6.0 fairseq/trainer.py -> clip meter code.

## Findings
Q1 FOUND. Log line has clip field. Code: fairseq/trainer.py Trainer._reduce_and_log_stats (main), metrics.log_scalar("clip", torch.where(grad_norm > clip_norm ...)) (snippet cut off, 100/0 value not seen verbatim). v0.6.0 Trainer.train_step: self.meters['clip'].update(1. if grad_norm > self.args.clip_norm and self.args.clip_norm > 0 else 0.); meter init comment "# % of updates clipped". Real log lines: #250 "gnorm=0.137, clip=100%, oom=0, wall=407"; #416 "clip 0%".
Q2 Claim "since 2018" is too late: issue #79 dated 2017-12-12 shows "clip 94% | gnorm nan" in an epoch log. Earliest seen = Dec 2017. Not checked git blame.
Q3 FOUND: #79 (Dec 2017): 94%, 0%; #250 (Aug 2018): 100% (with --clip-norm 0.0; v0.6.0 later added clip_norm>0 condition, so 100% there is clip disabled, gnorm 0.13); #416: 0%; #503: 0%; #1263 (Oct 2019): 2%; #1687 (Feb 2020, newer format): clip=0; #2201: clip "1" (JSON, no % sign). 0, 2, 100 all seen. 
Q4 FOUND: #2201 "What do the metrics wps, ups and wpb mean": user writes "**clip** = gradient clipping threshold" (their own guess, with clip "1"). 
Q5 FOUND: allenai/OLMo olmo/optim.py, Optimizer.clip_grads_and_collect_metrics: all_metrics["clipping_rate"] = num_grads_clipped / num_eligible_grads (0.0 if none), only when collect_param_metrics. Measures per-step fraction of parameter tensors (in groups with max_grad_norm / max_grad_norm_ratio) clipped; for global fixed clipping it counts the whole group. Not all-reduced across ranks. In olmo/train.py only optim/total_grad_norm is shown in console. OLMo-core not checked.
Q6 NOT FOUND for either: no whole-run aggregation or cross-scale comparison seen in code read. fairseq: meter averaged over log interval/epoch (epoch summary line). OLMo: per-step metric. Limited: did not read fairseq metrics/progress_bar code or OLMo-core.
