# VERIFY — PolyPythias (arXiv:2503.09543)

## CLAIM

As the ENTRY cites it: van der Wal et al., "PolyPythias: Stability and Outliers across Fifty
Language Model Pre-Training Runs", ICLR 2025, arXiv:2503.09543; recorded OPENED at Gate 2.

Sub-claims handed to me:
(a) front matter as served; (b) suite design — seed count, sizes, and what varies between seeds,
with the entry's presupposition P4 (data order held fixed while initialisation varies) said to FAIL
because the suite varies "parameter initialisation and batch composition" jointly; (c) what
"Outliers" means; (d) the load-bearing absence — whether the paper contains ANY per-dimension /
per-channel activation analysis; (e) what it measures instead; (f) regime — scales covered and
largest multi-seed size.

## READ LEVEL

**Full text.** arXiv abstract page, arXiv PDF (v2), and the arXiv HTML rendering (v2, including
appendices and Table 5) all read successfully. Venue confirmed independently against the ICLR 2025
virtual poster page. Nothing was refused; no route failed. Quotations below are reproduced as the
reader served them, in consecutive short segments where the summariser's ~125-character cap applied
(each such string is labelled a reconstruction with its fragment count).

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter

Title, as served on arXiv and on the ICLR 2025 page, identically:
"PolyPythias: Stability and Outliers across Fifty Language Model Pre-Training Runs"

Authors in order. arXiv: Oskar van der Wal, Pietro Lesci, Max Muller-Eberstein, Naomi Saphra,
Hailey Schoelkopf, Willem Zuidema, Stella Biderman. ICLR 2025 page, same order with diacritics and
middle initial: Oskar van der Wal, Pietro Lesci, Max Müller-Eberstein, Naomi Saphra, Hailey
Schoelkopf, Willem Zuidema, Stella R Biderman. Seven authors; "van der Wal et al." is correct.

Venue/year. The arXiv abs page carries **no** comments, journal-ref or venue line — arXiv alone
does not establish ICLR 2025. iclr.cc/virtual/2025/poster/29092 lists it as "2025 Poster", i.e.
ICLR 2025 poster. The PDF itself names no venue in header or footer ("ICLR" appears in the PDF only
inside reference entries for other papers). arXiv: 2503.09543v2, cs.CL / cs.LG, submitted
2025-03-12, v2 dated 2025-05-17.

### (b) Suite design and what varies between seeds

The queried string occurs in §2. The whole sentence, reconstruction from 2 consecutive segments:
"Each training run uses the same hyperparameters, codebase, and data as Biderman et al. (2023b)" +
" but varies the seeds for parameter initialisation and batch composition."

So the ENTRY's quoted fragment is verbatim-in-substance but the paper's own wording is "the seeds
for parameter initialisation and batch composition" — the varied object is the *seeds*, and
"jointly" is the entry's word, not the paper's; the paper's wording is nonetheless unambiguous that
both are varied together in the main suite.

The abstract states the same thing in a second, differently-worded formulation:
"different initial conditions determined by the seed—i.e., parameters initialisation and data order"
and §3 a third time: "controlling both batch composition and parameters' initialisation". Note that
the abstract uses "data order" where §2 and §3 use "batch composition"; footnote 3 reconciles them.

Footnote 3, reconstruction from 3 consecutive segments:
"We will use the term "batch composition" instead of "data order" because the GPT-NeoX codebase" +
"(Andonian et al., 2023), used to train the (Poly)Pythias, shuffles documents before packing them
into sequences." + "This results in sequences that are not simply reshuffled across seeds; they are
unique due to the different packing."

Scale of the suite, from the abstract: "9 new seeds across 5 model sizes, from 14M to 410M
parameters, resulting in about 7k new checkpoints that we release." With the original Pythia seed 0
this gives "10 seeds per model" at each of 14M, 31M, 70M, 160M, 410M — 45 new runs, 50 in total
(hence "Fifty" in the title).

**Does the paper offer any run set where data order is held fixed? YES — but only as a release, not
as an analysis.** Table 5 (Appendix E, "Links to the individual checkpoints in the PolyPythias
release.") has, in the 160M block only, six extra rows beyond seeds 0–9, labelled as served:
"1 (only data)", "2 (only data)", "3 (only data)" → pythia-160m-data-seed1/2/3, and
"1 (only parameters)", "2 (only parameters)", "3 (only parameters)" → pythia-160m-weight-seed...
(the weight-seed link text is truncated in the extraction, with no trailing number recoverable).

The "only parameters" rows are exactly the single-factor condition P4 presupposes: initialisation
varies, batch composition/data order held fixed. Three such runs exist, at 160M only. Searches for
"only data", "only parameters", "data-seed", "weight-seed" return matches **only** inside Table 5;
"data seed", "disentangle" and "ablat" return no matches anywhere. No sentence in the main text or
appendices analyses these single-factor runs, and none explains why they are excluded.

### (c) What "Outliers" means

Outlier **runs** (model-seed combinations), not outlier dimensions or channels. The §3 definition,
reconstruction from 5 consecutive segments:
"First, we consider the accuracy of the last checkpoints on the ARC (Easy), LAMBADA, Piqa, and SciQ
tasks," + "for which all models perform better than random." + "Second, for each task and model
size, we standardise accuracy to have mean zero and a standard deviation of one" + "by standardising
across seeds." + "Finally, we define a region of 2 standard deviations from the mean of a model on
that task and consider "outliers" those model-seed combinations that fall outside this region."

The unit is therefore the (model size, seed) pair, the statistic is last-checkpoint accuracy
standardised across seeds within task and size, and the threshold is ±2 SD. On that criterion the
paper identifies 410M seeds 3 and 4 as the only outliers; Appendix A shows their training-loss
spikes (Fig. 5), and §5 identifies outlier runs additionally as "forks" in the training maps.

### (d) THE LOAD-BEARING ABSENCE — per-dimension / per-channel activation analysis

**None appears.** Scanned over the full HTML text (main text plus appendices): the strings
"activation", "massive activation", "outlier dimension", "channel", "neuron", "per-dimension" and
"hidden state" do not occur anywhere in the document. "norm of" does not occur. "heads" occurs only
inside circuit names imported from other work ("induction heads", citing Olsson et al. and Tigges
et al.), where the authors defer circuit-level connections to future work.

The paper's only per-unit numerical analysis is over **parameters**, not activations: the
training-map HMM is fit to "a vector of statistics derived from the model parameters" (§5, Table 4),
named as L1, L2, L1/L2, μ_w (weight mean), median_w, σ_w (weight variance), μ_b (bias mean),
median_b, σ_b (bias variance), trace, λ_max, trace/λ_max, μ_λ (mean singular value), σ_λ (singular
value variance). These are weight/bias and spectral summaries, aggregated — no activation is
measured, and no per-index or per-channel quantity is printed anywhere.

Representation-level analysis exists but is probing-based and aggregate: "We study representational
(in)stability by applying the information-theoretic probing approach". It reports macro-F1,
codelength ratio and principal subspace angles — subspace-level, not index-level.

So on the (d) question the correct verb is that the paper **does not measure** per-dimension or
per-channel activation quantities at all: it neither defines, bounds, predicts nor announces them.
This is a genuine absence of the measurement, not a granularity gap in an existing classification.

### (e) What it does measure instead — endpoints as stated

- §3 downstream performance: accuracy on ARC (Easy and Challenge), LAMBADA, Logiqa, Piqa, SciQ,
  WinoGrande, WSC; last-checkpoint accuracy standardised across seeds for the outlier test.
- §3 agreement: inter-seed agreement and self-consistency, both measured with Cohen's κ.
- §3 gender bias: BLiMP (Gender Agreement), CrowS-Pairs (Gender), Simple Co-occurrence Bias.
- §4 probing: MDL / information-theoretic probing on seven token-level tasks (Coref, Dep, NER, PoS,
  SemTag, Senti, Topic), reporting macro-F1, codelength ratio, and principal subspace angles (SSAs)
  between consecutive checkpoints.
- §5 training phases: an HMM with 5 states over the parameter statistics of Table 4, plus a
  bag-of-states regression predicting final z-scores (Tables 2–3).
- Appendix A: training loss curves, with loss spikes for 410M seeds 3 and 4 (Fig. 5).

The entry's four named endpoints (benchmark stability, inter-seed kappa, MDL probing, subspace
angles) all check out against the paper's own statements; the entry omits the gender-bias metrics
and the HMM training-map/regression endpoint.

### (f) REGIME — see below.

## REGIME

Population: GPT-NeoX-trained decoder-only Pythia models on the (deduplicated-era) Pythia data and
hyperparameters of Biderman et al. (2023b); only the seeds differ.

Scales covered: 14M, 31M, 70M, 160M, 410M. Ten seeds at each of those five sizes. **The largest
size with multiple seeds is 410M** — which is also the largest size in this suite at all. The
original Pythia suite's 1B–12B models are outside PolyPythias; no multi-seed evidence above 410M.

Unit of analysis: the training run (model size × seed), and within a run the checkpoint. Not the
layer, not the dimension, not the channel.

Estimand/comparator: across-seed variation at fixed size and fixed data/hyperparameters —
"stability" is spread across seeds, and an "outlier" is a run beyond ±2 SD of the across-seed mean
of last-checkpoint accuracy on four tasks (ARC-Easy, LAMBADA, Piqa, SciQ).

Factor structure: in the 45 analysed runs, parameter-initialisation seed and batch-composition seed
move together; the single-factor runs (3 data-only, 3 parameters-only, 160M only) are released but
never analysed. So the suite's *analysed* regime cannot separate the two factors; its *released*
artifacts can, at one size, with n=3.

Anything that needs per-dimension activation statistics, massive activations, outlier channels, or
index-level comparisons across seeds sits entirely outside the regime this paper establishes
anything in. The paper is silent there, not supportive and not contradictory.

## DEFECTS FOUND

1. **P4's failure is overstated as unqualified.** The entry says P4 fails because the suite varies
   initialisation and batch composition jointly. True of the 45 analysed runs and of every number
   the paper prints. But the paper *releases* three 160M "only parameters" runs — data order held
   fixed, initialisation varied — which is P4's condition. The accurate statement is that no
   *analysis* in the paper holds data order fixed, while the *release* does provide such
   checkpoints at 160M (n=3). An entry that says the suite does not offer the condition at all is
   wrong on the release; an entry that says the paper does not analyse it is right.
2. **Wording attributed to the paper.** The quoted string "parameter initialisation and batch
   composition" is verbatim, but the paper's clause is "varies the seeds for parameter initialisation
   and batch composition" — the seeds vary, and "jointly" is the entry's gloss. The cut is harmless
   to the meaning here (both sides of the cut agree) but the entry should not present "jointly" as
   quoted.
3. **Two formulations, one hedged by a footnote.** The abstract says "parameters initialisation and
   data order"; §2/§3 say "batch composition". Footnote 3 states these are *not* interchangeable —
   GPT-NeoX shuffles before packing, so "sequences ... are unique due to the different packing", not
   merely reordered. Any ledger wording that leans on "data order" should carry the footnote: what
   varies is more than order.
4. **Venue not evidenced by the cited route.** The arXiv abs page gives no venue line and the PDF
   names none. "ICLR 2025" is correct but rests on the ICLR virtual catalogue, not on the arXiv
   record the entry cites. Author spelling in the entry's route (arXiv) drops the diacritic in
   Müller-Eberstein and the middle initial in Stella R Biderman.
5. **No defect in the (d) absence claim.** The absence is real and total: zero occurrences of
   activation / channel / neuron / dimension-level vocabulary. Nothing here is a case of the source
   noting the absence of a *different* thing; the paper simply never enters that territory. Note for
   precision that it *does* print per-parameter-tensor statistics (Table 4), which a careless reader
   could mistake for outlier-dimension analysis — they are weight and singular-value summaries, with
   no activation measured.
6. **Scale ceiling worth recording.** 410M is the ceiling for multi-seed evidence. Any ledger use of
   PolyPythias to speak about seed stability at the scales where massive activations are usually
   reported (1B+) is outside the regime.

## ROUTES THAT FAILED

None. arxiv.org/abs/2503.09543, arxiv.org/pdf/2503.09543v2, arxiv.org/html/2503.09543v2 and
iclr.cc/virtual/2025/poster/29092 all returned usable content. No search or fetch was refused. Five
WebFetch calls and one WebSearch used, inside the cap. Unpaywall was not contacted.

## BEARING ON THE LEDGER ENTRY

The entry's core use of this source stands: PolyPythias is a real, open, ICLR 2025 paper about
run-to-run stability across 50 pre-training runs, "Outliers" in its title means outlier *runs*
defined by a ±2 SD across-seed accuracy criterion, and it contains **no** per-dimension or
per-channel activation analysis of any kind. The load-bearing absence (d) is confirmed as plainly as
a full-text scan can confirm one.

Two corrections are needed. First, P4 should be restated: the paper's *analysed* suite varies the
initialisation seed and the batch-composition seed together, so no printed result isolates
initialisation — but Table 5 releases three 160M "only parameters" checkpoints that do hold data
fixed, and three "only data" counterparts, unanalysed and unexplained. That makes the gap an
analysis gap plus an available-but-unused artifact, which is a stronger and more actionable entry
than a flat "the condition does not exist". Second, "data order" should carry footnote 3: batch
composition is not a reordering, because documents are shuffled before packing, so sequences differ
across seeds.

Also worth carrying into the entry: the regime ceiling (410M is the largest multi-seed size), and a
caution that Table 4's parameter statistics are weight/bias and spectral summaries, not activation
measurements, so they must not be read as partial coverage of the activation question.
