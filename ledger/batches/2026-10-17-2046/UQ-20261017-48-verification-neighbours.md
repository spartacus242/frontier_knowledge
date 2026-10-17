# UQ-20261017-48 verification of neighbours
Read level: PDF (via summariser, not verbatim reading) for all three, plus arXiv abs pages. 0 searches, 6 fetches (3 abs, 3 pdf). 3 initial calls with scheme-less URLs failed validation (not fetches).

Fetch log
1 abs 2504.20879 OK; 2 abs 2602.15327 OK; 3 abs 2607.01254 OK
4 pdf 2504.20879 OK; 5 pdf 2602.15327 OK; 6 pdf 2607.01254 OK

(1) 2504.20879 "The Leaderboard Illusion", Singh, Nan, Wang, D'Souza, Kapoor, Ustun, Koyejo, Deng, Longpre, Smith, Ermis, Fadaee, Hooker. Submitted 29 Apr 2025 (v2 12 May 2025). Chatbot Arena selective disclosure of private variants (27 Meta variants), data-access asymmetry (Google ~19.2%, OpenAI ~20.4%, 83 open-weight ~29.7%), up to 112% relative gain from extra Arena data.
 Decisive: NOT FOUND. Scores are snapshots (Fig 2, as of 23 Apr 2025). Time series exist only for battle share (Fig 3, Jan 2024-Mar 2025 quarterly; proprietary 54.3-70.1%), prompt language (Fig 11), duplication (Fig 12), variants (Fig 6), deprecation (Fig 13). No slope of capability/score; simulations (Figs 7,8,14,15) are simulated. Paper admits limited window Jan-Mar 2025.
 Time: partial time dimension for data-allocation, not for capability.
(2) 2602.15327 "Prescriptive Scaling Reveals the Evolution of Language Model Capabilities", Zhang, Jin, Syrgkanis, Kakade. 17 Feb 2026 (v2 6 Jun 2026). Quantile-regression capability boundaries vs pretraining compute, ~5k + 2k checkpoints 2022-2026, six benchmarks, Proteus-2k.
 Decisive: NOT FOUND (partial). Sec 5.1.1 size-time model, Table 3 endpoints only (MATH Lvl5 13B boundary 0.03 -> 0.94; MMLU-Pro 0.15 -> 0.52), no per-year slope, no CIs, calendar span not given. Selection discussed qualitatively (Sec 2.1, App A.2, Sec 3.3, App D.1, F) but not modelled; no missing-data/imputation model. Benchmark-suite change noted in App H.2/I only qualitatively.
 Time: yes, longitudinal.
(3) 2607.01254 "The Benchmark Ceiling: Human Judgment, Evaluation Scarcity, and the Political Economy of AI Capability Measurement", Mark Esposito, Liu Zhang. Submitted 4 Jun 2026 (v2 13 Jul 2026). Theory of benchmark validity depreciation + micro1 labour data.
 Decisive: NOT FOUND. Theory has time subscripts (B_t, c_t, J_t, eq 17), sign-only comparative statics, no estimation. Empirical part cross-sectional (wage premium ~15-25%, Gini ~0.38). Sec 8.3 lists the contamination-vs-progress question as unanswered.
 Time: theory yes, data cross-sectional.

Overall: none answers signed bias in level/slope of a fitted capability trend from non-random benchmark inclusion and selective reporting. Closest: (2) acknowledges selection direction qualitatively; (1) documents selective reporting mechanism; (3) theory of item-set change.
Caveat: PDF content came through a summariser; absence claims rest on its reading of whole PDFs, not my own verbatim reading.
