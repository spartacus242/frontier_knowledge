# Verification notes: Hilgers, Wortmann, Blugel, arXiv:2311.15430v1
Read level: FULL TEXT via arxiv.org/html/2311.15430v1 (through a summariser; 3 fetches on html, 1 on abs). Quotes are short fragments, not stitched. Figures (Fig. 5, 6, 8) not seen as images.
1. 6660 = film structures (up to three 3d TM layers on 5-layer FCC noble-metal substrate); FLAPW, FLEUR via AiiDA-FLEUR; z-only structural relaxations, each step a full SCF. Sec 1, 2.1.
2. 64.8% = 4316/6660 converged in batch 0 (initial guesses). 94.3% = 6282/6660 after DFT IntML batches (ML-predicted magnetic moments, then also interlayer distances). 17% = SCF iterations (Sec 3.3 text); abstract says "computational time for each successful relaxation". Also 27% force iterations, 29% relaxation steps (conclusion); unreconciled.
3. NOT FOUND: no property comparison failed vs converged. Only convergence fractions per element/site (Fig 6) and a magnetic-state split among converged systems (~10% FM in batch 5).
4. NOT FOUND as taxonomy. Only two failure patterns (MT spheres overlap / drift into vacuum) and "complex energy landscape and a difficult initial setup". No numerical-vs-physical adjudication.
5. NOT FOUND.
6. No ladder. Limits fixed (100 relaxation steps, 100 SCF iters, 9 SCF restarts); authors assume parameters unchanged between batches except predicted inputs. Intervention = better starting guesses (ML), not escalated settings.
