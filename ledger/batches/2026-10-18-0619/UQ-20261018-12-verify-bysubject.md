# UQ-20261018-12 by-subject verification notes

Read level: mixed. PDF (via summariser) for 2010.06192, 2405.03637, 2502.20566, 2602.03839; PDF EMPTY for 2607.10611; a docshare JSON excerpt only (second-hand) for 2607.09800. Appendix D.3 of 2010.06192 NOT read first-hand (ar5iv truncated twice).

## Searches (7 of 7)
1. stochastic rounding BF16 training weight updates lost smaller than ulp fraction unchanged -> 2010.06192, 2502.20566
2. pure BF16 training without FP32 master weights update no-op fraction LR decay layernorm embedding -> 2510.04212, 2602.03839
3. Kahan summation BF16 optimizer weight update stagnation LM training -> Collage 2405.03637, ELMO 2510.11168, optimi
4. fraction of weight updates that round to zero in bfloat16, imprecision metric, per-type breakdown -> 2408.15793, 2511.08567
5. 8-bit optimizer state quantization update lost small updates embedding rare tokens -> 2110.02861 (bitsandbytes), not opened
6. weight update underflow BF16 no-op layernorm gain ... swamping -> 2607.10611 (M+Adam), docshare "Silent Freeze" (2607.09800)
7. weight update sparsity bf16 99% unchanged per step RL -> 2602.03839, 2605.07330, 2507.17107

## Fetches (8 made; BUDGET OF 7 EXCEEDED BY ONE, the 8th was 2602.03839)
1. arxiv.org/pdf/2010.06192v2 OK (Zamirai et al., Revisiting BFloat16 Training)
2. arxiv.org/pdf/2405.03637 OK (Collage)
3. ar5iv.labs.arxiv.org/html/2010.06192 -> "The provided content doesn't include Appendix D.3 ... The excerpt stops partway through Algorithm 1 in Section 3.2"
4. arxiv.org/pdf/2502.20566.pdf OK (Ozkara, Yu, Park)
5. ar5iv ... offset 60000 -> "This part of the page does not contain the appendix section you're looking for."
6. arxiv.org/pdf/2607.10611 -> "[This PDF is empty or contains no machine-readable text]"
7. docshare.wps.com ... _payload.json OK but excerpt only (Silent Freeze 2607.09800, Zekai Shang, UIUC, header 14 Jul 2026)
8. arxiv.org/pdf/2602.03839 OK (Miahi, Belilovsky)

## Findings
See structured output. Key: only 2602.03839 measures bitwise-unchanged fraction at (param,step) level (BF16-cast, ~99%, RL, Adam lr 3e-6); 2010.06192 reports % non-zero updates cancelled by nearest rounding per iteration (DLRM embedding + MLP layer, >80% late; Terabyte uses decaying LR) -- appendix D.3 not read first-hand. No work found stratifying by rare-token rows / norm gains / small weights. No matched-arm held-out consequence found for the unchanged fraction itself.
