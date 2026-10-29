# VERIFY-03-e — independent check of the novelty grade (UQ-20261028-03)

Checker: fresh context. Did not write the entry. Read the entry in full; did NOT read either
adversary log (the claims I was asked to test — the tables, the numbers, the printed status of the
survival-conditional drift — all live in the entry itself, which carries the citations).

Budget: 3 searches and 3 fetches, ALL THREE OF EACH SPENT. Nothing below is an absence recorded
against an unspent route; where a route was left unspent I say so explicitly.

## 0. Retrieval environment (relevant, because earlier readers logged blocks)

`curl` is unusable from this session for scholarly hosts: both
`https://ar5iv.labs.arxiv.org/html/2110.14136` and `https://arxiv.org/pdf/2110.14136v1` returned
`curl: (56) CONNECT tunnel failed, response 403` (tool-scoped proxy refusal, 0 bytes). This is a
fact about the fetcher, not the documents — WebFetch reached both of them below. Earlier readers'
"blocked UBC handle" / "curl proxy 403" notes are consistent with this and should NOT be read as
evidence about any document's availability.

## 1. What I opened

| # | Document | Route | Result | READ LEVEL |
|---|---|---|---|---|
| F1 | Chum, Guy, Jacobson, Mosunov, "Numerical and Statistical Analysis of Aliquot Sequences", arXiv:2110.14136 | WebFetch `https://ar5iv.labs.arxiv.org/html/2110.14136` (ar5iv route, first try) | OPENED | full text available; **section read** — Secs. 1, 2, 6.1, 6.3, 6.4 + Tables 1, 9, 10, 11 transcribed cell by cell on request |
| F2 | same document, second targeted pass (definitions and averaging populations) | same URL, different prompt | OPENED | **section read** — Sec. 2 definition display, Sec. 6.1/6.4 prose, conclusion sentences |
| F3 | Bosma, "Aliquot sequences with small starting values", `https://www.math.ru.nl/~bosma/pubs/aliquot100.pdf` — the entry's own nominated unopened lead ("the single unopened source most likely to settle whether the d-binned survivor drift has ever been measured") | WebFetch, first try | OPENED | **section read** — title/abstract, Sec. 1 table, Sec. 2, Sec. 5, Sec. 5.3 |
| S1 | aliquot's own words, no date filter: growth rate / geometric mean s(n)/n / driver / guide / amplification | WebSearch extended | ran | returned only the known cluster |
| S2 | survival/branching words: quasi-stationary distribution OR Yaglom limit OR conditioned on non-extinction + aliquot / sum-of-divisors iteration | WebSearch extended | ran | **zero** arithmetic-dynamics or aliquot items; 9/9 returns pure probability theory |
| S3 | the selection-on-survival framing in aliquot words, no date filter, + Devitt 1976 | WebSearch extended | ran | known cluster + two NEW open routes (below) |

Unspent routes, budget-exhausted, NOT absences:
- **Devitt 1976 M.Sc. thesis "Aliquot sequences"** — S3 surfaced what looks like a live institutional
  repository landing page, `https://ucalgary.scholaris.ca/items/529d188f-1ec6-4e8c-ac9e-c6a29caf4072`.
  The entry records "four URLs, one document, opened by none"; this is a fifth and it is the
  canonical repository. COULD NOT READ — **ran out of fetch budget**, no error encountered.
- `https://www.rechenkraft.net/aliquot/intro-analysis.html` ("Intro to Aliquot Sequences Analysis",
  the amateur project's own analysis page) — unopened, budget. Likely to discuss term growth in the
  project's own vocabulary.
- Guy & Selfridge 1975 full text — not attempted; outside this check's leg.

## 2. The decisive finding: the survival-conditional drift is in print, and more squarely than the entry says

### 2.1 Table 1 is literally a survival-conditional per-step drift, and the paper says why it rises

F2, Sec. 2 of arXiv:2110.14136, definition display transcribed verbatim:

> λ_k(X) = (1/#B_k(X)) · Σ_{n ∈ B_k(X)} log(s_k(n)/s_{k-1}(n))

with, same section,

> B_k(X) = {n ∈ ℕ : n ≤ X, n is even and s_k(n) > 0}

**My own reading, labelled as mine:** `s_k(n) > 0` is survival to step k (not yet absorbed at a
prime / at 1). So λ_k(X) is exactly `E[log(s(N)/N) | survived k steps]` — the entry's canonical
estimand in its k-indexed form, averaged over the survivor set and nothing else. This is not a
near-neighbour; it is the estimand.

And the paper states the candidate's *conceptual* point — that conditioning on survival is what
moves the drift — in its own prose. F2, Sec. 2, verbatim:

> "As the function λ_k pre-selects those n that have not yet reached a prime, it is not surprising
> that as k increases, so does λ_k(X)."

That sentence is the candidate's headline insight in print, with the mechanism named
("pre-selects"), attached to a table of numbers. The entry cites Table 1 but does **not** quote
this sentence; it is a first-hand strengthening of the Low grade, not a weakening.

### 2.2 The entry's transcriptions of the four tables are accurate

I had the tables transcribed cell by cell (F1) without showing the fetcher the entry's numbers.
Every figure the entry prints is confirmed verbatim and in the right table:

- **Table 1, column X = 2^37, k = 1..10:** −0.03326, −0.03706, −0.01849, −0.01205, −0.00411,
  +0.00145, +0.00779, +0.01297, +0.01854, +0.02339. **Exact match** to the entry, all ten values.
  (Table 1 sits in Sec. 2, not Sec. 6; the entry does not misplace it.)
- **Table 11 ("Average Amplification log(s(n)/n) Statistics", Sec. 6.4), `average` row:** 0.135,
  0.127, 0.117, 0.111, 0.102, 0.086, 0.073, 0.048, overall 0.101. **Exact match.**
  New at first hand: there is a second row, `expected` (the Markov-chain expectation the entry
  calls "a random-integer expectation column"): 0.127, 0.139, 0.136, 0.135, 0.132, 0.121, 0.116,
  0.103, overall 0.125. So the comparison alternative formulation 1 asks for is printed as a
  paired row, not merely available.
- **Table 9 ("Active guides for non-terminating sequences", Sec. 6.3):** 2·3 → 1124; 2^2·7 → 1620;
  2^3·3·5 → 773; 2^4·31 → 531; 2^5·3·7 → 278; 2^6·127 → 143; 2^1 (down-driver) → 0.
  **Exact match**, including the zero on the down-driver. (Also 2^0 → 0 and 2^9·3·11·31 → 0.)
- **Table 10 ("Data on occurrences, runs, and amplification for each guide", Sec. 6.4),
  `Average Amplification` column:** 2 → −0.470; 2·3 → +0.226; 2^2·7 → +0.333; 2^3·3·5 → +0.802;
  2^5·3·7 → +0.813. **Exact match.** Table 10 additionally prints `Times Seen`, `Expected Number`,
  `Runs` and `Average Length` per guide, i.e. the occupancy-vs-expectation contrast as well.
- **log μ:** Sec. 2, verbatim: "log μ = −0.0332594808010…", and Sec. 1: "λ = log μ =
  −0.0332594808010…", attributed to Pomerance 2017. **Exact match** to the entry's figure.

No quoted string in the entry's novelty section failed to locate. Nothing is STRING NOT LOCATED.

### 2.3 The paper draws the comparison the candidate proposes

F2, verbatim, on the sign question:

> "In all cases, both the observed average per term and the expected average are greater than zero,
> giving empirical evidence that terms in aliquot sequences grow on average."

> "Overall, our results indicate that the geometric mean of s(n)/n is approximately e^0.125 ≈ 1.133,
> lending support to the Guy–Selfridge conjecture."

> "The fact that the majority of sequence terms come from open sequences that are increasing
> certainly contributes to these statistics being greater than zero."

> "Since Pomerance's result shows that the geometric mean of log(s(n)/n) for n divisible by 4 is
> greater than zero, this is in fact further evidence in support of Guy–Selfridge."

One honest qualification I can supply that the entry does not: F2 reports **"The paper does not
directly compare Table 11's values to log μ ≈ −0.033."** The two numbers are printed in the same
paper and the Guy–Selfridge inference is drawn from the positive sign, but the explicit
survivor-drift-versus-λ juxtaposition is left to the reader. That is a presentational gap, not an
unmeasured quantity.

### 2.4 One real correction to the entry's ground (does not rescue the entry)

The entry says, in "how this differs from each", that Chum et al.'s unit "is a term (iterate) of a
running sequence, **binned by size stage from 2^16 to 2^288**". F2 contradicts the binning, verbatim:

> Sec. 6.1: "eight sets of 1000 sequences, with each sequence starting at" 2^(16+32n)+2k, 0 ≤ n ≤ 7
> (Table 7 lists the starting powers 2^16, 2^48, …, 2^240), each followed "until a term became
> greater than 2^288"

> Sec. 6.4: "we computed the average amplification per term and the expected amplification via
> Markov chain analysis, individually for experiments at each of the eight stages and for all
> sequences collectively."

> F2 on the population: "The text does not say whether Table 11 is restricted to non-terminating
> sequences. It indicates the terms come from all sequences."

**My own inference, labelled as mine:** Table 11's "st 0 … st 7" are **starting-magnitude** stages,
not bins on the size of the iterate, and every stage's terms run up to the same 2^288 ceiling, so
the stages are overlapping-support experiment groups rather than digit bins. And Table 11 is over
terms of *all* sequences in each stage, not the survivor subset. Consequences:

- The entry's **d-indexed limb** — `E[log(s(N)/N) | survived, d]`, drift by digits of the iterate —
  is **NOT** what Table 11 measures. The entry overstates that one limb.
- The entry's **k-indexed limb** is nonetheless answered exactly and strictly survivor-conditioned
  (§2.1, Table 1 on B_k).
- The entry's **driver limb** is answered on an explicitly non-terminating population (Table 9's
  caption is "Active guides for **non-terminating** sequences") with the guide-conditional drift
  beside it (Table 10).

So the correction shifts which limb carries the kill; it does not create an unanswered headline.

### 2.5 The nominated lead of kind K, opened — and it is a duplicate

The entry nominates `aliquot100.pdf` as "the single unopened source most likely to settle whether
the d-binned survivor drift has ever been measured in the candidate's own declared frame", and says
it was "returned to all three readers and opened by none". I spent a fetch on it (F3).

It is **the same document as the entry's own frame source**, Bosma arXiv:1604.03004 — not a further
paper. Proof from F3's own quotations against the entry's citations of Bosma 2016:
- F3, Sec. 5.3: "The fastest growing open sequence is 993834, reaching 100 digits after only 245
  steps" — the entry cites exactly "Bosma Sec. 5.3 p. 13 ('reaching 100 digits after only 245
  steps')".
- F3, Sec. 5: "At 100 digits, there are still 9327 different open main sequences" and a Sec. 5
  total column running "from 247191 at 10 digits to 169548 at 100 digits" — the entry cites exactly
  "Bosma Sec. 5, p. 10" for 9327 and 169548.
- F3, Sec. 2: "The even perfect numbers are drivers, and so are only five other integers" — the
  entry's presupposition-3 quotation, attributed to "Bosma 2016 Sec. 2, p. 4".

So the entry's "vulnerability" section nominates, as its best unopened hope, a document it had
already read under another URL. That nomination should be struck.

On the substance, F3 is **ABSENT** on the thing it was nominated to settle, in its own words as
served: "no average or geometric mean of s(n)/n, log(s(n)/n), or per-step drift broken down by digit
count or iterate size", and "no average steps-per-digit or average steps to reach a given digit
count". Its only drift statement is a reference to Bosma–Kane: Sec. 2, "the growth factor in an
aliquot sequence with even starting value will be less than 1." Guides: ABSENT. Downdriver: ABSENT.
λ as a defined quantity: ABSENT (bibliography only).

**So the d-binned survivor residue is real and Bosma does not close it — but it is a residue, not
the entry's headline, and the entry already lists it as residue.**

## 3. Numbers I computed myself

Code run (`python3 -I`), output printed:

```
9327 + 160221 = 169548                     # adversary 2's arithmetic over Bosma's printed numbers
169548 / 9327 = 18.18                       # replication factor (my computation)
169548 + 793  = 170341                      # == Bosma Sec. 1 open-at-100-digits count, F3 row "100 811555 18103 170341"
93 * ln(10) / 245 = 0.8740                  # telescoping per-step floor, 10^6 -> 10^99 in 245 steps
Table 11 overall 0.101 vs log mu -0.0332594808010 ; separation = 0.1343
lambda_k(2^37) first positive at k = 6 ; lambda_10 - lambda_1 = 0.05665
exp(0.125) = 1.1331                         # matches the paper's printed "e^0.125 ~ 1.133"
```

Three of these are independent corroborations of the record rather than restatements:
- **169548 + 793 = 170341 exactly** reproduces Bosma's Sec. 1 open-sequence count at 100 digits
  from his Sec. 5 even-only total plus the 793 odd starters. Two separately printed tables in the
  same paper close on each other, so presupposition 5's refutation rests on arithmetic I have now
  verified against both tables, not one. The ~18-fold replication is my own division.
- **exp(0.125) = 1.1331** reproduces the paper's own printed "e^0.125 ≈ 1.133", confirming F2's
  transcription of the `expected` row's overall value is internally consistent.
- **λ_k(2^37) crosses zero at k = 6** and climbs 0.0567 over k = 1..10 — i.e. the survival-conditional
  drift not only differs from λ in magnitude, it **changes sign** inside the published table. The
  candidate's question "does it change with k" is answered in print with a sign change.

I did not re-derive adversary 2's telescoping identity as a novelty matter (it is leg (i), another
checker's business), but the one number it turns on reproduces: 0.874 per step against λ = −0.0333.

## 4. On the brief's framing

My brief asked me to look for the question "in vocabularies the earlier readings are least likely to
have used", with the implication that an earlier sweep might have missed something. It did not, in
the direction that would help the entry. S1 and S3 (both effectively unfiltered by date, in the
aliquot literature's own words — amplification, guide, driver, geometric mean, Devitt, Markov chain)
returned the same four-item cluster the entry already names, plus Devitt's repository page and the
Rechenkraft project page. S2, in the probability vocabulary, returned **zero** arithmetic-dynamics
items across nine returns — a **third independent** confirmation of the one absence the entry claims
as its best-evidenced part (two prior sweeps + mine).

And F2 supplies the mechanism for that absence from the paper itself: the field does this modelling
under the name *Markov chain*. Verbatim, F2:
> Abstract: "using a Markov chain model based on data extracted from thousands of sequences."
> Sec. 6.1: "Devitt's method was to construct a Markov chain with states corresponding to the
> smallest 24 guides."
> Sec. 6.1: "we again followed Devitt and modeled the sequences using Markov chains"
> Sec. 6.4: "via Markov chain analysis"

So the entry's "reason for silence" correction (line 19) is right at first hand: the vocabulary
absence is a naming fact, and Devitt 1976 is named in print as the originator of the survivor-
population Markov model over guide classes. The entry's attack-2 and attack-3 framings are
supported by the paper's own attribution sentences, which I have now read.

## 5. What this means for the entry's verdict

**The novelty grade Low STANDS, and on firmer ground than the entry claimed.**

- The headline estimand in its k-form is not merely answered in print, it is the *definition* of a
  published table's quantity (λ_k on B_k = the survivor set), and the paper states the
  selection-on-survival mechanism in prose ("pre-selects those n that have not yet reached a
  prime").
- The driver/guide decomposition conditional on non-termination is printed with occupancy counts
  (Table 9, caption explicitly "non-terminating"), guide-conditional drift and an expectation
  baseline (Table 10).
- Every number and every quotation the entry attributes to arXiv:2110.14136 located exactly where
  the entry said, at a full-text route that opened on the first try. The entry's own second-order
  worry — that these numbers were "summariser-served from one targeted pass and never
  re-transcribed" — is now **discharged**: this is the independent second pass, by a reader who
  did not see the first, and it agrees on all 10 + 9 + 7 + 5 figures plus log μ.
- One correction against the entry, in the entry's own disfavour as a citation but not as a verdict:
  Table 11's bins are starting-magnitude stages over all sequences, not size bins over survivors,
  so the strictly d-binned survivor drift is **not** in Chum et al., and F3 shows it is **not** in
  Bosma either. That limb is genuinely unmeasured. It is residue the entry already lists, and it
  cannot carry a Low→higher regrade on its own while the k-limb and the driver limb are printed.
- The entry's nominated best-hope document (`aliquot100.pdf`) is its own frame source under a second
  URL. That line of the entry is wrong and should be struck; the real unopened leads are Devitt 1976
  at the Calgary repository and the Rechenkraft analysis page.
