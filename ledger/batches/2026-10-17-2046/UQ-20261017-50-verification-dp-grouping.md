# arXiv:2212.01539 verification notes
Read level: PDF (arxiv.org/pdf/2212.01539 via summariser) plus abs page. Not stitched quotes.
Calls: fetch1 abs (ok); fetch2 pdf (ok, summary); search1 venue (ok; titles only, iclr.cc/virtual/2023/poster/11123 listed); fetch3 pdf targeted (ok). 1 search, 3 fetches.
Title: Exploring the Limits of Differentially Private Deep Learning with Group-wise Clipping
Authors: Jiyan He, Xuechen Li, Da Yu, Huishuai Zhang, Janardhan Kulkarni, Yin Tat Lee, Arturs Backurs, Nenghai Yu, Jiang Bian. arXiv v1 3 Dec 2022; ICLR 2023 poster (from search listing only, not opened).
Q2: DP-SGD; per-example gradients clipped (Sec 2) to bound influence, noise added.
Q3: Yes: flat vs fixed per-layer vs adaptive per-layer vs per-device (GPT-3). CIFAR-10 eps=8: 67.8 fixed per-layer vs 73.9 flat. Adaptive ~ matches/beats flat. Fixed per-layer C_k = C/sqrt(K) (App A.1).
Q4: No reported fraction of steps clipped. Clipped fraction is a privately estimated quantile (Sec 3.3), target quantile q in {0.5,0.75,0.85}; per-example not per-step.
Q5: No quantitative clipped-vs-unclipped comparison; only qualitative "extra source of bias" (Sec 3.2).
Q6: No systematic scale study. Threshold-to-threshold mapping across groupings only C/sqrt(K) and rescaling so global threshold stays C; GPT-3 per-device thresholds 1e-5 (App C.2) tuned per task.
Q7: Entirely DP, fine-tuning only (RoBERTa, GPT-2, GPT-3 LoRA). No non-private pretraining.
