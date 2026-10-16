# UQ-20261016-52 verification notes
Searches run: 0 (WebSearch not used). Fetches: 4 of 5.
Fetch 1: arxiv.org/abs/2503.20783 -> opened. "Understanding R1-Zero-Like Training: A Critical Perspective", Liu, Chen, Li, Qi, Pang, Du, Lee, Lin; submitted 2025-03-26 (v2 2025-10-06).
Fetch 2: arxiv.org/abs/2506.20512 -> opened. Resolves: "OctoThinker: Mid-training Incentivizes Reinforcement Learning Scaling", Wang, Zhou, Li, Liu; 2025-06-25. Asks how mid-training data/strategy affects RL-scalability of base models (Qwen, Llama) on math reasoning.
Fetch 3: arxiv.org/html/2503.20783 -> opened (summariser).
Fetch 4: same URL, exact-string check (cached/new summariser pass).
Strings checked (all found): "nearly pure base model"; "concatenated question-answer texts"; "percentage of responses that tend to answer the question".
Not opened: none failed.
Findings: 1 yes (6 base models, 3 families, 500 MATH-train questions, answering rate under R1/Qwen/no template; only Table 1 on 2 Qwen-Math models). 2 hypothesis only (Qwen2.5-Math, unconfirmed). 3 no as re-estimate of post-training gain: DeepSeek-V3-Base used as nearly pure base to test Aha moment/template effects. 4 no explicit claim; argues RL signatures (length increase, Aha) partly reflect base model/GRPO bias. Endpoints capability-side only (math answering/accuracy); no safety endpoints seen.
Caveat: findings come via page summariser, not direct reading of full text.
