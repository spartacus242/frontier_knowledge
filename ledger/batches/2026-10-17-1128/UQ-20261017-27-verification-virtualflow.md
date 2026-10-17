# Verification notes: VirtualFlow (2009.09523) and Tenplex (2312.05181)
Searches run: 0 (not needed). Fetches run: 5 (cap 6).

## Fetches
1. https://arxiv.org/abs/2009.09523 - success (abstract). Authors Or, Zhang, Freedman. Abstract claims "strong convergence guarantees across different hardware with out-of-the-box hyperparameters".
2. https://arxiv.org/pdf/2009.09523 - success (full text, via summariser). Table: ResNet-50 ImageNet, BS 8192, 90 epochs.
   VirtualFlow 1xV100 (32 VN/dev) 75.92; 2xV100 (16) 75.96; 4xV100 (8) 75.99; 8xV100 (4) 75.83; 16xV100 (2) 75.68; 2xRTX2080Ti (32 VN/dev, 64 VN total) 76.01. Literature target 76.26 [17].
   TF* baseline (batch scaled with devices, no retune): 1xV100 BS256 69.25; 2x BS512 67.30; 4x BS1024 70.68; 8x BS2048 73.04.
3. https://arxiv.org/pdf/2009.09523 (second prompt) - success. Exact string "reproduce the target accuracy for all runs (±0.5%)" FOUND in Sec 6.2.1 (target stated as 76%). Number of runs/seeds/averaging: ABSENT in Sec 6.2 incl 6.2.1, 6.2.2, captions of Tables 1-2 (read by summariser, not me directly).
4. https://arxiv.org/abs/2312.05181 - success. Tenplex: Wagenlander, Li, Zhao, Mai, Pietzuch. Abstract silent on convergence. DOI 10.1145/3694715.3695975. (Page text said "Scalai" in abstract - an earlier-version name.)
5. https://arxiv.org/html/2312.05181v1 - success (two prompts; counted as 2 fetches => total 6 fetches actually, at cap, not over). 
   NOTE: correct fetch total = 6 (fetch 5 and 6 both on html v1).

## Exact strings checked
- "the convergence of the DL job is unaffected" - FOUND, Sec 1 Introduction, item "(2) Transforming DL job state".
- "the convergence remains unaffected by the change of resources" - FOUND, Sec 6.8 (Fig 16 summary).
- "TENPLEX achieves resource independence by preserving the convergence of all dynamic parallelization configurations" - found Sec 6.8.
- "reproduce the target accuracy for all runs (±0.5%)" - FOUND, VirtualFlow 6.2.1.
- Number of runs / seeds / SD / CI in VirtualFlow Sec 6.2: not found (absence read across section by summariser).

## Conclusions
A (VirtualFlow): numbers CONFIRMED exactly. Tolerance +/-0.5% CONFIRMED, but stated around "76%"; 76.26 is listed as target in table. 16-GPU 75.68 is 0.58 below 76.26 (outside 0.5 if centred on 76.26; inside around 76). Single value per config; no variance. Treatment axis = device count/type with virtual-node count compensating at fixed batch 8192; NOT sharding style. Baseline TF* varies batch with devices.
B (Tenplex): quote CONFIRMED, from Introduction (prose claim). Evidence = Fig 16 loss curves (3 panels: DP (1,1,4)->(1,1,8); PP (1,4,1)->(1,8,1); MP (4,1,1)->(8,1,1)), BERT-large on OpenWebText, reconfig at step 100, vs no-change baseline. No table, no runs-per-arm, no seeds/error bars. Treatment axis IS parallelism config (DP/PP/MP) changed mid-run.
Caveat: all full-text content came via a page summariser, not raw text; appendices not seen in html (summariser reported none).
