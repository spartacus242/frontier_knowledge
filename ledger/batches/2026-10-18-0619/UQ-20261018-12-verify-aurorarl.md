# UQ-20261018-12 verify AuroraRL

Read level: FULL TEXT via summariser (arxiv.org/pdf/2602.11456, arxiv.org/html/2602.11456v2) plus arXiv abs page. All via WebFetch summariser, so quotes are short fragments only; each checked separately.

## Calls
Searches (2 of 7):
1. "AuroraRL reinforcement learning LLM per-step parameter update sparsity bf16 ulp" -> hit arxiv.org/pdf/2602.11456 (AuroraRL title) and arxiv 2602.03839 (separate paper).
2. "\"AuroraRL\"" -> only League of Legends/Rocket League noise. No useful result.
Fetches (3 of 7):
1. arxiv.org/pdf/2602.11456 -> OK.
2. arxiv.org/abs/2602.11456 -> OK (authors, dates, abstract).
3. arxiv.org/html/2602.11456v2 -> OK (string checks).
No failed routes, no errors.

## Findings
- Exists: "AuroraRL: Fast, Fault-Tolerant, and Cost-Efficient Reinforcement Learning over Decentralized Network", arXiv:2602.11456, cs.DC. v1 12 Feb 2026, v2 4 Aug 2026 (abs page). No venue stated.
- Authors (abs page and PDF first page agree): Chaoyi Ruan, Geng Luo, Xinyi Wan, Long Zhao, Qinghe Wang, Jiaan Zhu, Duling Xu, Guanbin Xu, Dehui Wei, Xiang Liu, Cheng Li, Haifeng Sun, Liang Luo, Congcong Miao, Jialin Li.
- rho = share of parameter elements whose one-step difference is nonzero (Eq.1), pooled element-wise over whole model. It is the share that CHANGES, not the unchanged share. Abstract: "only around 1% of parameter elements changing"; intro "1-3%".
- Fig 3 (PDF read): Qwen3-4B 1.12, Qwen3-8B 0.96, Qwen3-14B 1.06, Qwen3-32B 1.12, Qwen2.5-72B 1.85, Llama3-8B 2.56, GLM4-9B 1.99 (7 models, 4B-72B). HTML read only surfaced four of these in Sec 3 text (4B 1.12, Llama3-8B 2.56, GLM4-9B 1.99, 72B 1.85); Qwen3-8B/14B/32B figure values rest on the PDF read alone.
- Table 4 (Qwen3-8B by algorithm): GRPO 0.96, RLOO 0.93, OPO 1.06.
- "0.93-2.56%" is NOT stated as a range anywhere (HTML check). 0.93 is Table 4 RLOO on Qwen3-8B (an algorithm variant, not a different model); min across the 7 models in Fig 3 is 0.96. 2.56 is Llama3-8B. So the range stitches a Table 4 cell to a Fig 3 cell.
- Setting: RL fine-tuning (GRPO, RLOO, OPO). No SFT/pretraining measurements.
- Appendix A (titled "Quanization Numeric Analysis" in PDF read): ULP_bf16(W) ~ |W|*2^-7 (Eq.4), ratio r_i of FP32 update to local BF16 spacing. Short fragments confirmed separately: "This ratio measures update magnitude relative to the local BF16 resolution."; "smaller than one local BF16 spacing"; "the update is far below the local BF16 resolution". A longer key sentence not obtained verbatim.
- Does NOT cite 2602.03839 (neither id nor title found in HTML or PDF reads). Cites Mukherjee et al. "Reinforcement learning finetunes small subnetworks in LLMs" [42]; also differential checkpointing / sparse communication refs [13],[15],[34],[60],[67].
- Note: 2602.03839 = "Understanding and Exploiting Weight Update Sparsity for Communication-Efficient Distributed RL" (seen in search results only, not opened).
- Dates: summariser said PDF stamp "4 Aug 2026" (v2); HTML first page showed no date. Dated from abs-page submission history.
