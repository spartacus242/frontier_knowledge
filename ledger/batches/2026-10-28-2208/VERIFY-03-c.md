# VERIFY-03-c — fresh-context check on UQ-20261028-03, adversary 2's attack 1 (triviality / forced sign)

**Checker.** Fresh context. I did not write the entry and did not read adversary 1's log (I read the entry and adversary-2's log only, as instructed). I am establishing facts, not grading the entry's author.

**Budget.** Cap: 1 web search, 4 fetches. **Spent: 0 searches, 4 fetches.** The one search was left deliberately unspent, not forgotten: with all four fetches spent on Bosma I would have had no way to open anything a search returned, and a title return opens nothing. That is a decision, not an absence finding.

**What I was asked to test.** The entry (line 31) says three legs would survive if adversary 1's leg fell, the first being "(i) adversary 2's attack 1, whose sign conclusion needs no document beyond Bosma Sec. 5.3 p. 13 and the sign of beta." I tested that leg documentarily (open Bosma, read §5.3 at first hand) and computationally (generate aliquot orbits myself and measure the survivor-conditioned drift).

---

## 1. Documentary leg — what Bosma §5.3 actually prints

**Document identified from the entry's own citations** (entry line 12, "Frame source: W. Bosma, arXiv:1604.03004v1 — full text, Gate 2 and adversary 2").

### Routes and read levels

| # | Route | Result | READ LEVEL |
|---|---|---|---|
| 1 | `https://arxiv.org/abs/1604.03004` | Served. Title/author/abstract confirmed: **Wieb Bosma, "Aliquot sequences with small starting values"**. The summariser declined to transcribe the abstract verbatim at length (its 125-character quotation ceiling) and paraphrased it; the paraphrase matches the frame the entry declares (all starting values below one million, iterated until termination at 1 or in a cycle, or until an entry of 100 decimal digits). | metadata + abstract (paraphrased) |
| 2 | `https://arxiv.org/pdf/1604.03004` | Served. §5.3 identified: **title "Big opens and mergers"**, and — my own correction to the entry — **§5.3 begins on page 12, not page 13**; p. 13 starts partway through the section. The segmented full-section transcription I asked for was declined; I got the section's content as a summary plus one verbatim sentence fragment. | section read (one verbatim quote + summariser's account of the rest) |
| 3 | `https://ar5iv.labs.arxiv.org/html/1604.03004` | Served. The target string **LOCATED** verbatim with its section. Also answered the growth-rate question directly. | section read, verbatim for the target sentence |
| 4 | `https://arxiv.org/pdf/1604.03004v1` | Served. Second verbatim transcription of the target sentence (identical across two independent routes) plus the second step-count sentence I needed. Printed page numbers were **not** served by this route ("The text doesn't show printed page numbers"), so I cannot confirm "p. 13" to the digit from this route either. | section read, verbatim for two sentences |

Nothing was blocked, nothing was refused by the proxy or the classifier. No COULD NOT READ in this check.

### Quotations, with location

Both strings sit in **§5.3 "Big opens and mergers"** (inside §5 "Open"), between the paragraph on sequences that near 100 digits before merging and the plot "Distribution of lengths of main open sequences", immediately before §6 "Cycles". Transcribed identically by two independent routes (ar5iv and the v1 PDF):

> "The fastest growing open sequence is 993834, reaching 100 digits after only 245 steps; it has no mergers."

> "The longest of these, the 461214 and 580110 sequences, reach 100 digits (with 4788) after 8599 steps."

Supporting verbatim fragments from the same section: "It does happen that an aliquot sequence reaches almost 100 digits, then decreases before merging" and "There are 15 starting values (the least being 472836) that lead to a common 99 digit maximum".

Asked directly whether the paper anywhere prints a per-step growth factor, mean, average or geometric mean of s(n)/n for its computed sequences: **ABSENT.** The route reports s(n)/n appears only for perfect numbers and drivers, plus one *imported* theoretical claim, "the growth factor in an aliquot sequence with even starting value will be less than 1". This independently reproduces adversary 2's ABSENT finding on the same paper, at first hand.

### Source findings (documentary)

- **F1 (SOURCE FINDING, verbatim, located).** Adversary 2's quotation of §5.3 is **accurate**. The sentence exists, in §5.3, worded as quoted; the only thing dropped is the trailing clause "; it has no mergers", which does not bear on the argument. The quotation-locatability test **passes**.
- **F2 (SOURCE FINDING, my own correction).** The entry's and the log's citation **"Bosma Sec. 5.3, p. 13" is off by one at the section level**: §5.3 begins on p. 12. The sentence quoted may well sit on p. 13 (it is in the latter part of the section, just before the section's closing figure), but no route I tried served printed page numbers, so I record the location as **§5.3, between the merger paragraph and the length-distribution figure** and mark the page number **not confirmed**. This is a citation-precision defect, not a substantive one.
- **F3 (SOURCE FINDING).** §5.3 does **not** support the *magnitude* half of the conclusion the adversary drew from it, and the entry reproduces the error. The adversary writes "≥ 216.4/245 = +0.88 per step", i.e. ~26× |β|, and the entry copies "that is >= +0.88 per step against -0.03" (line 22). **The inequality runs the wrong way.** For a survivor that takes K steps to climb from a 6-digit seed to 100 digits, the row-mean of log(s(N)/N) is (by the telescoping identity) 93–94·ln10 / K, which *decreases* as K grows. 245 steps is the **fewest** steps any open sequence in Bosma's window takes — the sentence says so in its own words, "the fastest growing open sequence" — so +0.88 is an **upper** bound on the per-step survivor mean in that frame, not a lower bound. The same section prints the other end: 8599 steps for the 461214 and 580110 sequences. **My own arithmetic over those printed numbers: 93·ln10 / 8599 = 214.14/8599 = +0.0249, and 94·ln10 / 8599 = +0.0252.** So the slowest climbers in Bosma's own §5.3 have a survivor row-mean of about **+0.025 — positive, but *smaller in magnitude* than |β| ≈ 0.03**. The conclusion "necessarily positive" survives §5.3; the conclusion "necessarily ~26× |λ| in magnitude" does not, and is in fact refuted by the neighbouring sentence of the same section.
- **F4 (SOURCE FINDING).** Bosma prints **no** growth rate of his own, confirming at first hand that the sign conclusion cannot be read off a printed statistic — it has to come from the identity plus the design of the window, exactly as the adversary says it does.

### My own check of the algebra the leg rests on (labelled as mine)

The telescoping identity is mine to check, not a source's. For a trajectory N_0 → N_1 → … → N_K, Σ_{i=0}^{K-1} log(N_{i+1}/N_i) = log(N_K/N_0), so the row-mean of log(s(N)/N) over that trajectory's K rows is exactly log(N_K/N_0)/K. **This is an identity in the reals; I verified it numerically to machine zero on real orbits (§2 below).** The premises I checked, as the brief requires:
- **Quantifier:** the identity forces positivity for the *whole-trajectory* row-mean of a trajectory that ends higher than it started. It does **not** by itself force positivity of E[log(s(N)/N) | survived, k] at a *fixed* k, because that is an average across trajectories at one step, not along one trajectory. Whether it is positive at fixed k depends on which of two readings of "survived" the entry means — and the two readings give **opposite signs at small k** (my measurement, §2).
- **Aggregation level:** the entry's canonical wording asks about the mean over "iterates N of sequences that have already survived k steps". Read as *survived so far* (not yet absorbed at step k), the identity does not apply and the sign is **not** forced. Read as *survivor in Bosma's sense* (the sequence is open — it reaches the 100-digit censoring boundary), the identity does apply and the sign **is** forced. Adversary 2's attack states the frame as "a *surviving* sequence is by definition one whose last computed iterate has 100 digits", i.e. the second reading, which is the reading the repaired frame's "survived/absorbed" row label most naturally carries. On that reading the leg's algebra is sound.

---

## 2. Computational leg — my own measurements

**All numbers in this section are MY OWN MEASUREMENTS**, not source findings. Code (written by me, no external number-theory library available — my own Miller–Rabin and Brent–Pollard rho):
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/aliquot.py` (σ via a divisor-sum sieve to 2·10^6, factorisation above that)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/run_orbits.py` (orbit generation; status ∈ terminate / cycle / censored)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/analyse.py` (the k- and d-conditional means)
- `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/code/baseline.py` (random-even-integer baseline)

**Correctness checks before measuring:** σ(12)=28, s(12)=16, s(6)=6, s(220)=284, s(284)=220, σ(2^60)=2^61−1, σ(pq)=(1+p)(1+q) for 13- and 17-digit primes and for a 31-digit semiprime; the orbit of 276 reproduces the published 276, 396, 696, 1104, 1872, 3770, 3790, 3050.

**Frame (mine, and smaller than Bosma's — stated plainly):** even seeds below the bound, each iterated to termination at 1/0, to a cycle, or to a first iterate exceeding the digit cap. I could not reach 100 digits because factoring hard 40+-digit iterates in pure Python is out of reach here; I censored at 24 digits (main run) and 22 digits (replication). So my frame is *Bosma's design at smaller scale*, and I say so rather than claiming his window.

**Main run:** all 49 999 even seeds below 100 000, cap 24 digits. **35 632 terminate, 12 780 censored/open, 1 587 cycle; 4 503 522 rows; longest orbit 944 terms; 254 s on 4 cores.** (For comparison, Bosma's even seeds below 10^6 to 100 digits split 317 467 / 12 984 / 169 548, i.e. 63.5% / 2.6% / 33.9%; mine split 71.3% / 3.2% / 25.6%, which is what a lower censoring boundary and smaller seeds should do.)
**Replication run:** all 9 999 even seeds below 20 000, cap 22 digits. 7 806 / 1 842 / 351; 601 881 rows. Every qualitative finding below holds in both runs; I give the main run's numbers and the replication's in brackets where they differ.

### 2a. Two readings of "survived", measured side by side (main run)

DEF A = "alive at step k" (the orbit had not been absorbed by step k, so it still has a row there). DEF B = "the orbit is open" (it reaches the censoring boundary — Bosma's sense of a surviving sequence, and the sense adversary 2 states).

| k | DEF A: n_rows · mean | DEF B: n_rows · mean |
|---|---|---|
| 0 | 49 995 · **−0.03330** | 12 780 · **+0.18240** |
| 1 | 49 971 · −0.07540 | 12 780 · +0.18663 |
| 2 | 49 866 · −0.04397 | 12 780 · +0.25011 |
| 5 | 49 209 · −0.04850 | 12 780 · +0.31330 |
| 9 | 47 454 · −0.05248 | 12 780 · **+0.34569** (max) |
| 10 | 46 848 · −0.05641 | 12 780 · +0.34511 |
| 15 | 43 009 · −0.08556 | 12 780 · +0.33852 |
| 19 | 38 767 · **−0.08912** (most negative) | 12 780 · +0.32284 |
| 25 | 32 032 · −0.05837 | 12 780 · +0.33509 |
| 28 | 29 070 · −0.01957 | 12 780 · +0.32663 |
| 29 | 28 195 · **+0.01070** (sign change) | 12 780 · +0.32573 |
| 30 | 27 490 · +0.02313 | 12 780 · +0.32411 |
| 40 | 23 188 · +0.09498 | 12 780 · +0.29844 |
| 60 | 20 053 · +0.12418 | 12 584 · +0.27602 |
| 80 | 17 516 · **+0.15141** (max) | 12 005 · +0.26241 |
| 100 | 15 591 · +0.11033 | 10 830 · +0.21711 |
| 150 | 10 673 · +0.04341 | 6 953 · +0.18655 |
| 200 | 6 122 · −0.00935 | 4 179 · +0.12411 |
| 300 | 2 890 · −0.01456 | 2 184 · +0.03695 |
| 400 | 1 545 · +0.12608 | 1 190 · +0.22431 |
| 500 | 471 · +0.06710 | 433 · +0.08669 |
| 600 | 304 · +0.22867 | 292 · +0.24031 |
| 800 | 22 · −0.01112 | 22 · **−0.01112** |

Pooled over all rows of all orbits: **+0.04361** (n = 4 503 522) [replication +0.01247]. Pooled over rows of open orbits only: **+0.22324** (n = 2 568 441) [+0.25045]. Unconditional one-step mean over all even seeds (k = 0, the λ/β analogue): **−0.03330** (n = 49 995) [−0.03342] — which lands on β ≈ −0.03 and within 0.00004 of the log μ = −0.0332594808 the entry attributes to Chum et al. That agreement is a sanity check on my pipeline, not a finding about their paper.

Replication run, same shape at the other cap: DEF A −0.03342 at k = 0, most negative **−0.20950 at k = 15**, sign change at **k = 27** (+0.00238), +0.18728 at k = 80; DEF B +0.25489 at k = 0, ~+0.37 through k = 5–30, +0.08746 at k = 200, **−0.05155 at k = 500** (n = 21).

### 2b. Telescoping identity, verified numerically (my own)

| seed | K | row-mean | log(N_K/N_0)/K | diff | digits |
|---|---|---|---|---|---|
| 276 | 133 | 0.373474 | 0.373474 | 0.00e+00 | 3 → 25 |
| 306 | 133 | 0.372699 | 0.372699 | 0.00e+00 | 3 → 25 |
| 396 | 132 | 0.373569 | 0.373569 | 0.00e+00 | 3 → 25 |
| 552 | 124 | 0.399188 | 0.399188 | 0.00e+00 | 3 → 25 |
| 564 | 192 | 0.255962 | 0.255962 | 0.00e+00 | 3 → 25 |

### 2c. The forced-positivity claim, measured directly (my own)

Per-trajectory row-mean over the 12 780 open (censored) orbits: **min +0.0470, median +0.2771, max +0.9314; number with a negative row-mean: 0 of 12 780** [replication: min +0.0707, median +0.3064, max +0.8604, 0 of 1 842]. Fastest climber: seed 68208, K = 48, row-mean **+0.9314**. Slowest: seed 86652, K = 943, row-mean **+0.0470**. Terminating orbits, by contrast: per-trajectory row-mean, n = 35 632, mean **−0.4588**, median **−0.3955**.

So the adversary's forced-positivity conclusion is **reproduced exactly at the trajectory level** under reading B: not one survivor in 12 780 has a negative whole-trajectory drift, and the spread runs from the slow end to the fast end exactly as (span)·ln10/K predicts. Note what the spread confirms about F3: the *fastest* trajectory sits at the top of the range (+0.93), the *slowest* at the bottom (+0.047) — the fastest-growing sequence gives the maximum, never a lower bound.

### 2d. Drift by digit class d of the iterate (main run, my own)

| d | n (all rows) | mean (all) | n (open only) | mean (open) |
|---|---|---|---|---|
| 1 | 7 290 | −0.9724 | 0 | — |
| 2 | 67 755 | −1.4641 | 0 | — |
| 3 | 176 607 | −0.5356 | 20 | +0.4996 |
| 4 | 335 491 | −0.2910 | 9 068 | +0.1846 |
| 5 | 425 842 | −0.1129 | 84 668 | +0.1717 |
| 6 | 318 949 | +0.0725 | 130 887 | +0.2266 |
| 8 | 260 759 | +0.1144 | 151 311 | +0.1921 |
| 10 | 217 059 | +0.1370 | 146 504 | +0.2027 |
| 12 | 216 132 | +0.1328 | 161 666 | +0.1855 |
| 14 | 189 702 | +0.1541 | 153 802 | +0.1926 |
| 16 | 181 663 | +0.1586 | 159 288 | +0.1834 |
| 18 | 148 575 | +0.1930 | 131 443 | +0.2194 |
| 20 | 116 404 | +0.2482 | 104 224 | +0.2807 |
| 22 | 90 364 | +0.3197 | 87 969 | +0.3284 |
| 23 | 86 726 | +0.3327 | 81 677 | +0.3548 |
| 24 | 67 424 | +0.4287 | 67 157 | +0.4306 |

**Caveat I am imposing on my own table:** the rise in the top two or three digit classes is partly **censoring bias**, not signal. A row at d = 24 is in many cases the step that *crossed* the boundary, so it is conditioned on being a large upward jump. The flat band d = 6…18 (+0.17 to +0.22 for open rows) is the part of this table I would stand on; the d ≥ 20 numbers are contaminated by the cap, and the same mechanism will contaminate the d ≈ 99 bin of the entry's declared frame. That is a defect of the *declared frame*, not of the adversary's argument, and it is additional to the "9 327 distinct tails" problem adversary 2 raised.

### 2e. Random-even-integer baseline at the same sizes (my own, 400 samples per class to d = 14, 150 above)

d = 5: +0.0106 · d = 6: −0.0053 · d = 8: −0.0232 · d = 10: −0.0527 · d = 12: −0.0029 · d = 14: −0.0260 · d = 16: −0.0359 · d = 18: −0.0095 · d = 20: −0.0296. Mean behaviour ≈ −0.02 to −0.03, i.e. β, against +0.17 to +0.28 for open-sequence iterates of the same digit length (table 2d). **Survivor iterates are not typical integers of their size, by roughly 0.2 nat per step in my frame** — and this comparison needs no telescoping identity and no censoring boundary, so it is an independent route to the same sign conclusion. (Sample sizes here are small, 400 and 150 per class; the gap is an order of magnitude larger than the scatter, so I report it as a sign finding and not as a precise magnitude.)

### What my measurements establish, in plain terms

- **M1.** The drift **does** move with k, so the entry's second limb ("does the mean change with k") comes out **yes** in my frame on both readings — but the movement is not monotone and its *sign at small k depends entirely on the reading*. Under DEF A it starts at β (−0.0333), goes **further negative** to −0.0891 at k = 19, crosses zero at **k = 29**, peaks near +0.151 at k = 80, then sags back toward zero. Under DEF B it is positive from k = 0 (+0.182), peaks at +0.346 at k = 9, and decays slowly through the long tail.
- **M2.** Under DEF B — survivor = open sequence, which is the reading adversary 2 states and the reading the repaired frame's "survived/absorbed" row label most naturally carries — the adversary's **sign conclusion is confirmed by measurement**: positive at k = 0 through k = 600, 0 of 12 780 negative trajectory means, pooled +0.223, against a negative unconditional β I also measured (−0.0333). This is corroboration from an actual computation, which the entry's own "Vulnerability" paragraph says leg (i) lacked ("leg (i) rests on something nobody has measured" — that is no longer true; I measured it, and it came out the adversary's way).
- **M3.** Under DEF A the **sign is not forced and the naive expectation is wrong**: for the first 28 steps the survivors-so-far drift *more negative* than β, not more positive, because trajectories on the way to termination (whole-trajectory mean −0.459) still count as alive at small k. So "the sign is settled by inspection" is true of the open-sequence reading and **false** of the survived-so-far reading. Whoever grades this leg has to say which reading is in force; the entry does not.
- **M4.** The magnitude claim in the entry's attack-1 row is wrong as written (F3), and my own numbers show the correct shape: the survivor row-mean is **bounded above** by (digits spanned)·ln10 / K_min and runs down to (digits spanned)·ln10 / K_max. In my frame that is +0.93 (K = 48) down to +0.047 (K = 943); in **Bosma's** frame, using the two step counts §5.3 itself prints, it is about **+0.88 (K = 245) down to +0.025 (K = 8599)**, and the bottom of that range is *below* |β| in magnitude.
- **M5 (a limit on the forced-sign argument that neither reader states).** The identity forces the sign of a survivor's **whole-trajectory** mean, and hence of the pooled survivor mean. It does **not** force the sign of every **fixed-k slice**, which is what the entry's estimand E[log(s(N)/N) | survived, k] actually is. I measured a slice where it fails: in the main run, DEF B at **k = 800 is −0.01112** (n = 22), and in the replication DEF B at **k = 500 is −0.05155** (n = 21). Both are thin tails of very long trajectories, but they are counterexamples to "positive at every k by inspection": a survivor's individual rows are often negative (down-driver stretches), and far out in k the surviving population is dominated by slow climbers whose local rows can average below zero. So the leg forces the sign of the *pooled* survivor drift and of each *trajectory* mean, not of the k-indexed function the question asks about.

---

## 3. What this means for the entry's verdict

**The leg STANDS on its sign conclusion, with two corrections that the entry should carry.**

1. **Sign: STANDS, and is now measured, not merely argued.** On the open-sequence reading of "survived", the survivor-conditioned drift is positive while β is negative. The identity is exact (verified to machine zero), the quotation from §5.3 is real and correctly transcribed, and my independent orbit computation reproduces the conclusion with no exceptions in 12 780 open sequences over 2.57 million survivor rows, plus a second, identity-free route (the random-even baseline, §2e) that gives the same answer. The entry's "Vulnerability of this rejection" sentence — "leg (i) rests on something nobody has measured" — should be **struck**: it has now been measured in a frame built the same way, and it came out the adversary's way.
2. **Correction 1 (magnitude).** "that is >= +0.88 per step against -0.03" should read **≤ about +0.88**, with the floor being ~**+0.025** from the 8599-step sentence in the same section — positive, but *smaller in magnitude* than |β|. So the leg supports "opposite sign to β", **not** "~26× |λ|". If any part of the entry's reasoning needs the survivor drift to be *large*, that part is unsupported.
3. **Correction 2 (citation).** §5.3 is titled "Big opens and mergers" and **begins on p. 12**; the page number "p. 13" is unconfirmed by any route I tried (no route served printed page numbers), so the locator should be the section, not the page.
4. **The reading matters, and the entry does not disambiguate it.** My DEF A / DEF B tables show the two readings of the entry's own canonical wording ("iterates N of sequences that have already survived k steps") give **opposite signs for every k ≤ 28**. The leg kills the question only under the open-sequence reading. Under the survived-so-far reading the sign is *not* trivial — it is negative early (down to −0.089 at k = 19), turns positive at **k = 29**, peaks near +0.15 at k = 80 and sags again; the crossing point is a genuine measurement nobody in this record has reported. That is a point **in the candidate's favour** on triviality, and it is new: attack 1 as argued does not reach the k-indexed form of the question under reading A, only the open-sequence form.
   **And even under reading B it does not reach every k (M5):** DEF B at k = 800 is **−0.011** (n = 22) in the main run and at k = 500 is **−0.052** (n = 21) in the replication. The identity forces the sign of the pooled survivor mean and of each trajectory's own mean; it does not force the sign of the fixed-k conditional mean, which is the entry's actual estimand. So the honest statement of this leg is: *the pooled survivor drift and every survivor trajectory's drift are forced positive by design, hence the headline "is it equal to λ?" is settled negatively without computation; the k-profile is not settled by inspection and does contain sign changes.*
5. **Independence of the two fatal legs.** On the specific thing I was asked, yes: this leg's sign half needs no document beyond Bosma §5.3 and the sign of β, both of which I verified at first hand, so it does not borrow from adversary 1's Chum et al. read. It is genuinely a second leg. But it is a **narrower** leg than the entry says: it settles the sign on one reading of the frame, not the magnitude profile, not the d-dependence beyond sign, and not the driver attribution — all of which the entry correctly assigns to adversary 1's leg instead.

**Other grounds in the entry are untouched by my check** and I did not test them: the Gate 2 Low on Pomerance's Theorems 1.1/2.4, Well-posedness 2/3 with Unresolved attack 5, and adversary 1's Chum et al. read. My findings do not disturb the Rejected verdict; they tighten the basis of one of its legs and remove the entry's own stated vulnerability for that leg, while deflating its magnitude claim.

**No NOT FOUND and no COULD NOT READ arose in this check.** Every route I tried served content; the only refusals were the summariser declining long verbatim transcription, which I worked around by asking two further routes for the specific sentences, and which is a fact about my request, not about the paper.
