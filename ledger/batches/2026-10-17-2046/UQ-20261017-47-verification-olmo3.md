# Verification: arXiv 2605.01158
Read level: PDF + HTML (both via summariser; no raw text). 0 searches, 4 fetches.
Fetches: (1) arxiv.org/abs/2605.01158 OK; (2) arxiv.org/pdf/2605.01158 OK; (3) arxiv.org/html/2605.01158 OK; (4) pdf again, targeted quote prompt OK.
Key finding: NOT the Olmo 3 report. It is "The Hidden Cost of Thinking: Energy Use and Environmental Impact of LMs Beyond Pretraining", Morrison, Smith, Strubell, submitted 1 May 2026 (v1). It measures Olmo 3 (7B, 32B; Instruct and Think).
Table 5 (GPU-hours; total/final/dev/dev%): Pretraining 4,074,452/1,284,762/2,789,689/68.5; Mid-train & data mix 2,481,054/62,183/2,418,870/97.5; SFT 299,635/21,293/278,342/92.9; DPO 67,269/1,947/65,322/97.1; RL (trainer) 503,049/35,605/467,444/92.9; RL (generator) 909,581/79,537/830,044/91.3; Total 8,335,040/1,485,329/6,849,711/82.2.
82.2% sentence (Sec 4.3): "Development accounts for 82.2% of total GPU hours (6.85M of 8.34M)". Family-wide, data generation excluded (4,866,064 MI250X GPU-h, Table 3, separate).
No FLOP. No gradient/non-gradient ratio. Reporting recommendations Sec 5.1, 5.2, 5.4. Wording of one recommendation differed between two summariser passes ("encourage" vs "strongly recommend"); both reported as seen.
