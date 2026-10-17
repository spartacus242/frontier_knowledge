# UQ-20261017-41 verification: arXiv 2603.25835 (Starlink Constellation: Deployment, Configuration, and Dynamics)
Read level: FULL TEXT via arxiv.org/html/2603.25835v1 (through a summariser, 2 fetches) + abs page (abstract). Paper exists; Ali, Upadhyay, McCormick, Hill, Zhang; 26 Mar 2026, cs.NI.
Caveat: all quotes are summariser-relayed fragments (<100 chars), not stitched.

1. Survival/KM: FOUND, Sec 3.3.2, Kaplan-Meier on decayed satellites, S(t) and F(t). Lifetime = "duration between its first and last appearance in the TLE dataset".
2. 0.0128%: FOUND (abstract, intro, 3.3.2). Fragment: "yielding a mean daily failure probability of 0.0128%". Window: first 1,000 days ("we focus on the first 1,000 days"). Population: satellites in dataset. n NOT STATED in Sec 3.3 (no N, no decayed/censored count). Averaging method not stated.
3. Unexpected vs planned: FOUND as a distinction with no per-satellite method. "true in-orbit failures — satellites that deorbit unexpectedly —"; planned EOL "begin to dominate only after day 1,395". Separation is a time cutoff, not classification of individual deorbits.
4. Stratification by launch/group/batch/shell/generation: NOT FOUND. Frailty/random effect/mixed/variance component: NOT FOUND. (Terms stratif, frailty, random effect, mixed, launch group absent from 3.3.)
5. "likely reflecting different satellite batches or generations with different planned lifetimes." FOUND in Sec 3.3.1, attached to operational-phase duration spread (median 864 d, mean 901.4 d). Conjecture; not tested.
6. Space weather / geomagnetic: NOT FOUND in 3.3 (no solar, Kp, Dst, geomagnetic). "Solar storms" appear only in Sec 2.2 as general deployment factor.
Extra: abstract says lifespan 4-6 years; 3.3 numbers (1,000-day baseline, S~0.83 at day 1,395) do not obviously support that; not linked in text.
