# VERIFY-03-a — second verbatim transcription of Chum, Guy, Jacobson & Mosunov, arXiv:2110.14136

Checker: fresh context. Entry under check: `UQ-20261028-03-entry.md`. Claim tested lives at entry
lines 13 and 31 and in `UQ-20261028-03-adversary-1.md` lines 49, 58-63, 71, 107.

## 1. What I opened, by what route, at what read level

| Route | Result |
|---|---|
| `curl https://arxiv.org/e-print/2110.14136` (LaTeX source — would have given raw table cells) | **FAILED.** `curl: (56) CONNECT tunnel failed, response 403`. `$HTTPS_PROXY/__agentproxy/status` logs `connect_rejected ... gateway answered 403 to CONNECT` for `arxiv.org:443` (and `www.ams.org:443`, `msp.org:443`). This is a **proxy policy denial on the fetcher**, not a fact about the document; README says report, do not route around. |
| `https://ar5iv.labs.arxiv.org/html/2110.14136` via WebFetch, **5 fetches** | **OPENED. READ LEVEL: full text**, summariser-mediated, transcribed in short consecutive verbatim segments as the rules direct. Every number below is my own second transcription with the table number and column heading beside it. |

Budget: **0 of 1 searches used** (the document was already named, so no search was needed), **5 of 6 fetches
used**. 1 fetch and 1 search unspent. Nothing in this check was cut short by budget.

Front matter confirmed: K. Chum, R. K. Guy, M. J. Jacobson Jr., A. S. Mosunov, "Numerical and Statistical
Analysis of Aliquot Sequences". I did **not** open a publisher page, so the Exp. Math. 29(4) / DOI
10.1080/10586458.2018.1477077 identification remains unverified exactly as the entry says (line 12).

## 2. Cell-by-cell re-transcription

### Table 11 — numbers AS QUOTED; denominator NOT as the entry says
Caption, verbatim: **"Table 11. Average Amplification log(s(n)/n) Statistics."**
Column headings, verbatim: **`Amplification | st 0 | st 1 | st 2 | st 3 | st 4 | st 5 | st 6 | st 7 | Overall`**

| row | st 0 | st 1 | st 2 | st 3 | st 4 | st 5 | st 6 | st 7 | Overall |
|---|---|---|---|---|---|---|---|---|---|
| average | 0.135 | 0.127 | 0.117 | 0.111 | 0.102 | 0.086 | 0.073 | 0.048 | **0.101** |
| expected | 0.127 | 0.139 | 0.136 | 0.135 | 0.132 | 0.121 | 0.116 | 0.103 | 0.125 |

**Every cell matches the entry's quotation exactly.** No transcription error.

**But `st n` is not a size bin of terms.** Section 6.1, verbatim: *"We collected data from 8000 aliquot
sequences: eight sets of 1000 sequences, with each sequence starting at"* / *"2^{16+32n}+2k, where 0<=n<=7
and 0<=k<1000."* / *"Our goal in separating the sequences into these eight stages was to study termination
behavior as sequence terms get larger."* / *"Each sequence was followed until a term became greater than
2^{288}."* Table 7's `start` row, verbatim: `start | 2^16 | 2^48 | 2^80 | 2^112 | 2^144 | 2^176 | 2^208 | 2^240`.
Section 6.4 on Table 11, verbatim: *"we computed the average amplification per term and the expected
amplification via Markov chain analysis, individually for experiments at each of the eight stages and for
all sequences collectively."*

So a stage is a **cohort of 1000 sequences grouped by STARTING value**, and `st n`'s average runs over all
non-initial terms of that cohort — terms of every size the cohort traverses on its way to the common
ceiling 2^288. I asked explicitly whether **any** table or figure groups terms by the size of the term
itself: the answer across the full table list (Figures 1-2, Tables 1-12) is **no**. Table 12's caption is
*"Average Amplification log(s(n)/n) Statistics for Varying Initial Terms"* — the whole Section 6
amplification analysis is indexed by properties of the **initial term**, never by the size of the iterate.

Nor is Table 11 survivor-restricted. The paper's only stated exclusion is Section 6.4, verbatim: *"The
initial term of each of the 8000 sequences is excluded in these counts, as amplification is not defined for
the initial terms that do not have a predecessor."* Section 6.1, verbatim: *"From all 8000 sequences, we
observed that 1544 reached a prime, 6392 passed our limit, and 64 entered a cycle."*

### log mu — AS QUOTED, located
Section 1, verbatim: *"computed to 13 decimal digits lambda = log mu = -0.0332594808010..."*; Section 2
repeats *"log mu = -0.0332594808010..."* and *"To 13 decimal places, we get lambda_1(2^40) =
-0.0332594808048..., matching Pomerance's computed value to the first 11 digits."* Section 5: *"not nearly
as close to zero as the value of log mu ~ -0.033."* The entry's `-0.0333` is a correct rounding. **STANDS.**

### Table 1 — numbers AS QUOTED, denominator AS STATED, and it IS the candidate's k-limb estimand
Caption, verbatim: **"Table 1. Values of lambda_k(X)."** Headings: **`X | 2^15 | 2^20 | 2^25 | 2^30 | 2^35 | 2^37`**.
Table 1 is a **grid**, not a single column; the entry quotes the **2^37 column**, which transcribes as:

| k | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |
|---|---|---|---|---|---|---|---|---|---|---|
| lambda_k(2^37) | -0.03326 | -0.03706 | -0.01849 | -0.01205 | -0.00411 | +0.00145 | +0.00779 | +0.01297 | +0.01854 | +0.02339 |

**All ten match the entry exactly.** Definition, verbatim (Section 2): *"B_k(X) = {n in N : n <= X, n is even
and s_k(n) > 0}"*, with lambda_k(X) the mean of log(s_k(n)/s_{k-1}(n)) over B_k(X). Denominator is
`#B_k(X)` — even seeds not yet terminated after k steps — exactly as the entry states. One iterate per
surviving seed, so seed-at-step-k and iterate-at-step-k coincide; this **is** the candidate's k-limb
estimand, differing only in the conditioning event (s_k(n) > 0 does not exclude cycles) and in k <= 10.

**A detail the entry missed that STRENGTHENS this leg:** Table 1 also prints the **2^20 column** —
`-0.03326, -0.05338, -0.01980, -0.01333, -0.00830, -0.00536, -0.00053, +0.00033, +0.00316, +0.00708` —
and 2^20 brackets the candidate's own declared seed window (even n < 10^6). The same sign reversal appears
there (negative through k = 7, positive from k = 8). The k-limb is printed at a bound closer to the
candidate's frame than the entry noticed.

### Table 9 — numbers AS QUOTED, denominator AS STATED and arithmetically confirmed
Caption, verbatim: **"Table 9. Active guides for non-terminating sequences."** Headings: **`Guide | # Active | Driver Type`**.
Full transcription: `2^0 | 0 | down-driver`; `2^1 | 0 | down-driver`; `2*3 | 1124 | up-driver`; `2^2 | 374 |`;
`2^2*7 | 1620 | up-driver`; `2^3 | 8 |`; `2^3*3 | 584 |`; `2^3*5 | 75 |`; `2^3*3*5 | 773 | up-driver`;
`2^4 | 386 |`; `2^4*31 | 531 | up-driver`; `2^5 | 12 |`; `2^5*3 | 158 |`; `2^5*7 | 52 |`;
`2^5*3*7 | 278 | up-driver`; `2^6 | 126 |`; `2^6*127 | 143 | up-driver`; `2^7 | 2 |`; `2^7*3 | 49 |`;
`2^7*5 | 15 |`; `2^7*3*5 | 24 |`; `2^8 | 33 |`; `2^9 | 12 |`; `2^9*3*11*31 | 0 | up-driver`; `2^10 | 13 |`.

Every value the entry quotes matches, including `down-driver 2: 0`. **My arithmetic:** the `# Active`
column sums to **6392 exactly** (code below), confirming the denominator is one count per non-terminating
sequence. Grain caveat (my own reading): the count is the guide active **at the single term that breached
2^288**, one snapshot per sequence — not occupancy over terms, and not resolved by digit class.

### Table 10 — numbers AS QUOTED; the "expectation column" is NOT what the entry says it is
Caption, verbatim: **"Table 10. Data on occurrences, runs, and amplification for each guide."**
Headings: **`Guide | Times Seen | Expected Number | Runs | Average Length | Average Amplification`**.
Average Amplification column, transcribed: `2^0 -0.777; 2^1 -0.470; 2*3 0.226; 2^2 0.069; 2^2*7 0.333;
2^3 -0.032; 2^3*3 0.536; 2^3*5 0.322; 2^3*3*5 0.802; 2^4 0.303; 2^4*31 0.362; 2^5 0.107; 2^5*3 0.640;
2^5*7 0.345; 2^5*3*7 0.813; 2^6 0.357; 2^6*127 0.348; 2^7 0.096; 2^7*3 0.631; 2^7*5 0.431; 2^7*3*5 0.909;
2^8 0.386; 2^9 0.399; 2^(>=10) 0.391.` **Every value the entry quotes matches.**

Denominator: occurrences over the non-initial terms of **all 8000** sequences — terminating, cycling and
open pooled — not size-resolved, not survivor-restricted. `Times Seen` totals **5,636,436** (my sum),
i.e. 704.6 terms per sequence over 8000.

**STRING LOCATION CORRECTION.** Adversary 1 line 60 attributes to *"Table 10's caption"* the string
*"divisibility properties of the sequence terms are the same as for random integers."* **That string is not
in Table 10's caption.** It sits in **Section 6.4, in the paragraph introducing Table 10**, in the sentence
*"For the even guides, we also recorded the expected number of occurrences of each guide, assuming that
divisibility properties of the sequence terms are the same as for random integers."* The string is
locatable in the document; only its attributed location is wrong.

Consequence for the entry: entry line 13 calls this *"a random-integer expectation column that is exactly
the comparison alternative formulation 1 asks for."* It is not. `Expected Number` is an expected **count of
guide occurrences**. Alternative formulation 1 asks whether surviving iterates drift upward more than a
random even integer **of the same size** — a growth-rate comparison, which this column does not print.

### Table 12 (not in my brief, transcribed since the log cites it)
Caption: *"Table 12. Average Amplification log(s(n)/n) Statistics for Varying Initial Terms."*
Headings: `Amplification | all | 0 mod 4 | abundant | 2 mod 4 | deficient | 2 or 2^3`.
average: `0.101 | 0.106 | 0.122 | 0.097 | 0.084 | 0.080`; expected: `0.125 | 0.127 | 0.131 | 0.124 | 0.121 | 0.119`.
Adversary 1's values are right; the sixth class (`2 or 2^3`, 0.080) was omitted, and the classes are
properties of the **initial term**, not of the iterate.

## 3. My own mathematics (labelled as mine, not from any source)

**(a) The telescoping identity, applied to Table 11.** For a sequence with terms N_0 .. N_K, the mean of
log(s(N)/N) over its K non-initial terms is exactly `log(N_K/N_0)/K`. Since every stage runs to the **same**
ceiling 2^288 from a **stage-specific** floor 2^(16+32n), the climb a cohort must make falls by a factor of
5.66 from st 0 to st 7:

```
stage  start   ceiling-climb (ln)   Table 11 avg   implied mean steps/seq
  0    2^16          188.5            0.135            1397
  7    2^240          33.3            0.048             693
```

So the decline 0.135 -> 0.048 across the stages is **net log displacement divided by step count, with the
numerator fixed by the censoring geometry** — not a measurement of drift as a function of iterate size. This
is my derivation; the paper states no interpretation of this trend at all (I asked for one directly: Section
6.4 says only *"both the observed average per term and the expected average are greater than zero"*, and the
"strikingly increase with stage" sentence is about termination proportions, not amplification).

**(b) Terminating sequences are inside Table 11's averages.** Modelling the 6392 breachers as climbing from
their stage floor to 2^288 and the 1544+64 terminating/cycling sequences as falling to ~1, with outcomes
spread evenly over stages, total net log displacement = 566,229; divided by the 5,636,436 terms gives
**0.1005 against the printed 0.101 — 0.54% error**. A breachers-only model needs 7,018,767 terms (1098 per
surviving sequence) against the paper's own 704.6 per sequence. So Table 11 is **not** a survivor-restricted
statistic, which my transcription of the paper's only stated exclusion already indicated.

Code that produced these numbers (run with `python3 -I`):
```python
import math
L2 = math.log(2)
t9 = [0,0,1124,374,1620,8,584,75,773,386,531,12,158,52,278,126,143,2,49,15,24,33,12,0,13]
assert sum(t9) == 6392                       # Table 9 denominator
t10 = [4320,1288576,746474,858815,937561,269723,213178,124637,139573,316435,257444,83619,
       60418,40648,54003,87858,57622,20953,14195,6941,4511,23925,12880,12127]
terms = sum(t10)                             # 5,636,436 non-initial terms
starts = [16+32*n for n in range(8)]
breach = sum((288-s)*L2 for s in starts)/8*6392
drop   = -sum(s*L2 for s in starts)/8*(1544+64)
print(sum(t10), (breach+drop)/terms, breach/0.101/6392)   # 5636436  0.10046  1098
```
Other checks: 1544+6392+64 = 8000; up-driver subtotal 1124+1620+773+531+278+143 = 4469 = 69.9% of 6392;
e^0.125 = 1.1331; e^(-0.0332594808) = 0.967288 (matches the paper's mu = 0.967...); 2^16 = 4.8 digits,
2^240 = 72.2 digits, 2^288 = 86.7 digits.

## 4. What this means for the entry's verdict

**Transcription: clean.** Not one of the ~40 numbers the entry quotes from this paper is wrong. The second
verbatim pass the entry asked for (line 33) finds no numeric error. The entry's second stated vulnerability
(line 32, "summariser-served, never re-transcribed") is **discharged on the numbers**.

**Grain: one of the three limbs fails.**

- **k-limb (Table 1): STANDS, strengthened.** The candidate's estimand at the candidate's grain, with the
  stated survivor denominator, and also printed at 2^20 ~ 10^6.
- **driver limb (Tables 9, 10): STANDS, with a grain caveat.** Occupancy among non-terminating sequences
  (denominator confirmed = 6392) and driver-conditional drift are both in print. Caveats: Table 9 is a
  one-snapshot-per-sequence count at the breaching term; Table 10 pools terminators and is not
  size-resolved; and the entry's claim that Table 10's expectation column answers alternative formulation 1
  is wrong — it is an expected occurrence count, not a growth-rate comparison against a random integer.
- **d/size limb (Table 11): FALLS.** Table 11 does not print the candidate's size-conditional survivor
  drift. It prints a **seed-cohort trajectory average over terms of all sizes, survivors and terminators
  pooled**, with the across-stage gradient set by a fixed ceiling and a moving floor. No table in the paper
  bins terms by the size of the term. Only st 7 (seeds 2^240, ceiling 2^288, so terms confined to 72-87
  digits) is even approximately size-localised, and it still pools terminators.

**Net effect on the entry.** The entry nominates Table 11 as the leg the verdict stands on (line 31;
adversary 1 line 107 "Key kill ... Table 11"), and reads it as "the candidate's d-binned survivor drift
versus lambda with its sign, magnitude and size-dependence" (line 13: "it falls with size stage (Table 11,
0.135 at ~5 digits to 0.048 at ~72-87 digits)"). **That reading is wrong and the designated key kill falls.**
The residue the entry concedes for Table 11 — "a guide-by-digit-class cross-tabulation" — understates it:
the size-conditional survivor drift itself is unprinted, not merely its driver cross-tab.

**The Gate 2 Low grade nonetheless survives**, on grounds the entry itself lists at line 31: Table 1 plus
Tables 9/10 (the k-limb and driver limb, both re-transcribed and both holding), and leg (ii), Pomerance's
Theorems 1.1 and 2.4. Leg (i) (adversary 2's forced sign) is untouched by this check and I did not test it.
The entry's own line-19/23 "disguised known" finding is not overturned; what is overturned is the specific
claim that the **size/digit-conditional** survivor drift is answered in print.
