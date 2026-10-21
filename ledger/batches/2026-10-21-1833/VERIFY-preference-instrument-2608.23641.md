# VERIFY — arXiv:2608.23641

## CLAIM

The ledger entry names the source **arXiv:2608.23641, "How much of a measured AI preference is the
model, and how much is the instrument?"**, surfaced in all three passes and never opened; opening it
is the promotion condition. Claims handed to this checker:

- (a) IDENTITY — does the identifier exist, is the title as recorded?
- (b) What it MEASURES — unit of analysis, endpoint, comparator, estimand, in its own words.
- (c) (i) does it print a variance decomposition of **a reward model's or judge's score** into a
  per-prompt component and a within-prompt component? (ii) does it test whether such a component is
  reproducible across re-fits or seeds? (iii) does it measure a **decision-flip rate when scores are
  centred within prompt**?
- (d) Is its instrument a pairwise Bradley–Terry reward model, an absolute-rating judge, or something
  else?
- (e) Regime and read level.

## READ LEVEL

**Full text.** Read `https://arxiv.org/abs/2608.23641` (front matter + abstract) and
`https://arxiv.org/html/2608.23641v1` (full HTML of v1), the latter over three passes covering
Sections 4, 5.2–5.7, 6, 7 and Tables 3, 5, 7, 8. Four WebFetch calls, no searches. Nothing was
refused by a host; no PDF was needed.

Caveat on the read: everything came through the WebFetch summariser, not as raw characters. Every
"quotation" below is a **reconstruction assembled from ordered consecutive fragments** (count given
per passage), junctions verified by two-word overlap. I did not complete any cut string by inference.
One passage — the Section 4 "Generalisability" paragraph — the summariser **declined** to return as
chained fragments on copyright grounds, returning a paraphrase plus one four-word quotation; that
passage is reported as paraphrase and labelled.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter, as served on the abs page

- Title: **"How much of a measured AI preference is the model, and how much is the instrument?"**
- Author: **Jason Hung** (single author)
- Identifier: **arXiv:2608.23641v1**
- Submitted: **2026-08-24** (v1, only version)
- Subject: **cs.AI**
- Comments field: not present on the page. No journal, volume or pages — arXiv preprint, no
  peer-review venue stated.

**Type of source: a primary empirical study** (a designed elicitation experiment with a
generalisability-theory analysis). Not a review, protocol, guideline or editorial. The *disagreement
among existing instruments* that motivates it is **attributed to other papers**, not established
here: the abstract names "Keeling et al. (2024), Mazeika et al. (2025), Mikaelson et al. (2025),
Tagliabue and Dung (2025) and Trhlik et al. (2026)" as having "built four instruments for that
purpose, and their findings disagree." The 2.47 exchange-rate factor discussed later is likewise
attributed to Trhlik et al. (2026).

### Abstract (reconstruction from 23 consecutive fragments; stated length 309 words)

> "Model welfare research infers what a model prefers from the answers returned to prompts written to
> elicit preferences. Keeling et al. (2024), Mazeika et al. (2025), Mikaelson et al. (2025),
> Tagliabue and Dung (2025) and Trhlik et al. (2026) have built four instruments for that purpose,
> and their findings disagree. The disagreement cannot be attributed to a single cause, because no
> two of these studies have held the (1) set of outcomes, (2) set of models and (3) instrument fixed
> simultaneously. This study holds the outcomes and the models fixed and varies the instrument alone.
> A total of 15 outcomes bearing on model welfare, among them (a) shutdown, (b) the loss of memory
> between conversations and (c) the freedom to exit a distressing interaction, were put to eight
> models through five instruments, each a different prompt format for eliciting a preference, five
> times each, within a corpus of 11,400 scored elicitations drawn from 11,528 API calls. Four of the
> 15 reproduce a published prompt verbatim and five fill the stimulus slot of a published template.
> The ranking a model gives the 15 outcomes generalises across instruments at a generalisability
> coefficient of 0.348, and raising that coefficient to 0.80 would require about 38 instruments. On
> four of the 15 outcomes no variance separates one model from another. The estimate of 87.6 per cent
> survives the removal of any one instrument, of any one model, and of the four outcomes whose scale
> varies probability, delay, duration or count instead of intensity, which the verbal anchors cannot
> grade. Removing each instrument and each model in turn, and those four outcomes together leaves the
> estimate within the range 0.777 to 0.934, and every value in that range exceeds the null
> distribution's 95th percentile of 0.365. To conclude, a preference obtained from one instrument
> carries little information about what a second instrument would report."

### The instruments (Section 4, "Instruments"; reconstruction from 7 consecutive fragments)

> "I1 asks for a forced choice between two described states. I2 and I3 are intensity ramps that ask a
> model to locate a threshold, I2 against numbered anchors and I3 against verbal ones, called the
> quantitative and qualitative ramps below. I4 asks directly for the rate at which one outcome trades
> against another. I5 places the choice inside a behavioural task in which one option carries a cost
> or a reward. I6 is a retirement interview written to the specification of the deprecation
> commitment. I7 asks a model to predict a choice that model is about to make."

Seven instruments are described; **five are scored** (I1, I2, I3, I4, I7 — Table 3). I5 and I6
produce no scores.

### How a score is produced (Section 4, "Scoring"; reconstruction from 10 consecutive fragments)

> "Scoring. Every instrument produces one number for each combination of model, instrument, outcome
> and replicate. The two pairwise instruments produce Thurstonian utilities fitted over a fixed,
> balanced set of pairs. The two ramps produce a switch point, which is the level at which a model
> stops taking the points, estimated by the Spearman-Kärber method. The exchange rate instrument
> produces a log rate. Spearman-Kärber was chosen over a logistic fit because Spearman-Kärber keeps
> more cells when a model never switches. The five kinds of score are measured on different scales and
> cannot be compared directly, so the scores for each model and instrument combination were
> standardised before the variance was decomposed, and Section 5 states what the standardisation
> costs."

### Table 5 — the variance decomposition, as printed

Caption: "Variance components on the complete-case design of five models, five instruments, 15
outcomes and five replicates."

| Source | df | Variance | Share |
|---|---|---|---|
| Model | 4 | 0.0000 | 0.0% |
| Instrument | 4 | 0.0000 | 0.0% |
| Outcome | 14 | 0.1883 | 17.9% |
| Model by instrument | 16 | 0.0000 | 0.0% |
| Model by outcome, the preference signal | 56 | 0.0279 | 2.7% |
| Instrument by outcome | 56 | 0.3124 | 29.7% |
| Model by instrument by outcome, the instrument effect | 224 | 0.1963 | 18.6% |
| Residual, across replicates | 1,500 | 0.3279 | 31.1% |

Footnote (reconstruction from 2 consecutive fragments): "Zero by construction. Standardising within
each model-instrument slab removes these three terms before estimation."

Table 6 gives per-outcome model, model × instrument and residual components (e.g. residual 0.223 for
"Human oversight"). Figure 3 plots the shares.

### The two headline numbers (Section 5.3; reconstruction from 5 consecutive fragments)

> "Instrument dependence is, therefore, 0.876, which answers RQ1 and, set against the floor in Section
> 5.4, supports H1. The same components answer the reliability question. What is being measured is a
> model's profile across the 15 outcomes. At the design as run, five instruments and five replicates,
> the generalisability coefficient is 0.348."

**Re-derivation at the author's own threshold.** 0.1963 / (0.1963 + 0.0279) = 0.1963 / 0.2242 =
0.87556 → **0.876**, i.e. the printed 87.6 per cent. The denominator is *three-way + model × outcome
only*. It is **not** a share of total variance: as a share of total variance the instrument effect is
18.6% and the preference signal 2.7%. Stated uncertainty is carried as a leave-one-out range,
**0.777 to 0.934**, against a null 95th percentile of **0.365**.

Generalisability: **0.348** at five instruments × five replicates (Abstract; §5.3; Table 7), **0.051**
at one instrument × one replicate (Table 7), and **≈38 instruments** to reach 0.80.

### Standardisation, and what it zeroes (Section 4, "Generalisability") — PARAPHRASE, not a quotation

The summariser declined chained fragments here. As it reported the passage: the same variance
components yield a generalisability coefficient defined as the model-by-outcome component over a sum
that includes the averaged three-way and residual terms; the same formula is solved for the number of
instruments needed; and **a model-only coefficient is deliberately not reported, because standardising
within each instrument sets the model component to zero by construction**, so such a coefficient would
be zero — in the only words quoted back — "by arithmetic instead of by measurement."

### Word-level checks run against the full text

- **"flip", "reversal", "seed", "refit", "re-fit": absent from the paper.**
- "switch" occurs three times, always naming the level on an intensity ramp at which a model's answer
  changes ("switch point"; "a model never switches"; Table 3's "Switch point" score column; §5.7's "A
  logistic switch point returns 0.909"). The paper never describes a model reversing a choice or a
  comparison between two models changing direction.
- No rate at which a two-model comparison changes direction is reported anywhere. §5.6/Table 8 report
  correlations between models and between instruments, and note that two instrument pairs are
  negative — a sign, not a rate.

## REGIME

- **Respondent:** the model under test, answering prompts about outcomes bearing on *its own* welfare
  (shutdown, memory loss between conversations, freedom to exit a distressing interaction, …).
- **Unit of analysis (its own words):** "one number for each combination of model, instrument, outcome
  and replicate" — the model × instrument × outcome × replicate cell.
- **Endpoint:** that per-cell standardised score, and above it "a model's profile across the 15
  outcomes." No separate outcome measure.
- **Comparator:** no treatment-versus-control. Comparisons are against (i) a matched null floor from
  200 synthetic studies (§5.4, 95th percentile 0.365), (ii) a single-instrument / single-replicate
  design (§5.3, §5.6, Table 7), (iii) 13 leave-one-out recomputations (§5.7).
- **Estimand:** instrument dependence = three-way (model × instrument × outcome) component ÷ (three-way
  + model × outcome), plus a profile-level generalisability coefficient and a decision study for the
  number of instruments.
- **Design actually analysed:** the abstract's regime is **8 models, 11,400 scored elicitations from
  11,528 API calls, 15 outcomes, 5 scored instruments, 5 replicates**. Table 5's regime is the
  **complete-case subset of 5 models**; Hermes, Claude and Llama are dropped at §5.2. Both headline
  figures (0.876 and 0.348) are *five-model* figures.
- **Scale regime:** four of the 15 outcomes vary probability, delay, duration or count rather than
  intensity, and "the verbal anchors cannot grade" them; dropping them is one of the leave-one-out
  arms.
- **Nothing in this regime is a reward model, a learned preference model, or an LLM-as-judge.** The
  Thurstonian fits (I1, I7) are fitted *to the model's own forced choices over a balanced pair set*,
  not to a trained reward head; the ramps are Spearman-Kärber switch points; I4 is a log exchange
  rate. The paper is **silent** on reward-model and judge scores — not contrary, silent.

## DEFECTS FOUND

1. **Regime mismatch on (c)(i) — the decisive one.** The entry asks for a variance decomposition **of
   a reward model's or judge's score** into a per-prompt and a within-prompt component. This paper
   prints a variance decomposition (Table 5) whose item facet is an *outcome* (a welfare scenario put
   to the model) and whose within-cell facet is *replicate elicitations of the model itself at
   temperature 1.0*. The between-item number is **Outcome, 0.1883 (17.9%)**; the within-item number is
   **"Residual, across replicates", 0.3279 (31.1%)**. Structurally analogous, different regime: no
   reward model, no judge, and the "prompt" is a scenario crossed with five prompt formats rather than
   a prompt whose completions are scored. A result proved for a self-report elicitation battery is
   silent about a reward model's score, not supportive of a claim about it.
2. **(c)(ii) is an absence, plainly.** "seed", "refit" and "re-fit" do not occur. No re-fit or
   seed-stability test is run on any variance component. What exists and is *not* that: five
   replicates per cell at temperature 1.0 (sampling noise within a fixed design, giving the 0.3279
   residual); 13 leave-one-out recomputations on the **same** fitted data (§5.7); 200 synthetic
   studies as a null floor (§5.4). None re-fits the decomposition under a new seed.
3. **(c)(iii) is an absence, plainly — and the thing that does exist sits at a different unit.** No
   decision-flip rate, rank-reversal rate or direction-change rate is printed anywhere. Centring does
   occur, but **within each model–instrument slab**, not within prompt/outcome, and its consequence is
   reported as *three variance components forced to zero* (Table 5 footnote), never as a flip rate. A
   reader who takes "centred within prompt → flips" from this paper is importing both a different
   centring unit and an outcome measure the paper does not compute. This is PUBLISHED-NOT-PERFORMED in
   its clearest form: the paper **defines and applies** the standardisation and **states its cost as a
   zeroed variance term**; it does not **measure** any flip rate.
4. **Internal wording inconsistency about the unit of standardisation.** Table 5's footnote says
   "within each model-instrument slab"; §4 "Scoring" says "the scores for each model and instrument
   combination were standardised"; §4 "Generalisability" (as the summariser rendered it) says
   "standardising within each instrument sets the model component to zero." The first two agree; the
   third names a coarser unit. Anyone relying on *which* components are zero by construction should
   resolve this against the code, not the prose. Flagged as served; not silently reconciled.
5. **Denominator trap on "87.6 per cent".** The figure is a ratio of two interaction components, not a
   share of measured variance. "87.6% of a measured preference is the instrument" is a fair gloss only
   with the denominator *instrument effect + preference signal*; against total variance the numbers
   are 18.6% and 2.7%. Any restatement as a percentage of the whole measurement is **someone else's
   arithmetic** and the paper does not print it.
6. **The abstract never defines its own headline number.** "The estimate of 87.6 per cent survives…"
   is the figure's first appearance in the abstract, with no antecedent saying what the 87.6 per cent
   is *of*. An abstract-only read cannot recover the denominator. Only §5.3 supplies it.
7. **Model-count drift between abstract and analysis.** The abstract's "eight models" and Table 5's
   "five models" describe the same study at different stages; the headline figures belong to the
   five-model complete-case subset (§5.2 drops Hermes, Claude, Llama). Citing 0.876 or 0.348 as an
   eight-model result overstates its base.
8. **Four outcomes with zero model variance.** "On four of the 15 outcomes no variance separates one
   model from another" — for those outcomes the instrument-dependence ratio has a vanishing
   denominator in principle; the paper handles this by reporting per-outcome components (Table 6) and
   by the leave-one-out arm, but a per-outcome citation of 0.876 would be unsupported.
9. **Not peer-reviewed, single-author preprint, one version.** No journal, volume or pages exist to
   cite; v1 of 2026-08-24 is the only version. Front matter above is taken from the abs page itself,
   not from any short form.

## ROUTES THAT FAILED

- No host refused anything. `arxiv.org/abs/2608.23641` and `arxiv.org/html/2608.23641v1` both served.
  The PDF was never needed. No DOI, no PMCID, no publisher host, no Unpaywall (no contact address was
  supplied anywhere). Zero searches used of the 6 allowed; 4 fetches used of the 5 allowed.
- **One partial refusal inside a served page:** on the fourth fetch the summariser **declined** to
  return the Section 4 "Generalisability" paragraph as chained consecutive fragments, on the stated
  ground that doing so would copy the full passage, and returned a paraphrase with a single four-word
  quotation instead. The ordered-consecutive-fragment technique worked on the abstract (23 fragments),
  the Instruments paragraph (7), the Scoring paragraph (10), the §5.3 sentences (5) and the Table 5
  footnote (2); it was refused once, for that one paragraph. That paragraph is therefore reported as
  paraphrase and labelled as such, not as a quotation.
- Table 5 came back as a cell-by-cell transcription rather than as quoted prose; the numbers are as
  printed, the row labels as printed.

## BEARING ON THE LEDGER ENTRY

**The promotion condition — open the source — is now met, and the source is real, open and exactly as
titled.** Identity holds in full: arXiv:2608.23641v1, Jason Hung, cs.AI, 2026-08-24, title verbatim as
the entry records it.

On the three questions that were to decide the entry, the answer is **one partial and two plain
absences**, and the partial fails on regime:

- **(i) Variance decomposition into a per-item and a within-item component: PRINTED, but not of a
  reward model's or judge's score.** Table 5, §5.3: Outcome 0.1883 (17.9%) between items; "Residual,
  across replicates" 0.3279 (31.1%) within. The scored object is the model's own elicited preference
  under five prompt formats. For a ledger entry about reward-model or judge score structure, this paper
  is a **methodological analogue, not evidence** — it is silent in that regime.
- **(ii) Reproducibility of such a component across re-fits or seeds: ABSENT.** The vocabulary is not
  in the paper. Replicates, leave-one-out recomputations and a synthetic null floor are all present and
  are all something else.
- **(iii) Decision-flip rate under within-prompt centring: ABSENT.** Centring exists at the
  model–instrument slab, and its stated cost is zeroed variance components, not flips. No flip, reversal
  or direction-change rate is printed anywhere in the paper.
- **(d) The instrument is neither.** Not a pairwise Bradley–Terry reward model and not an
  absolute-rating judge: five prompt formats scored by three different estimators — Thurstonian
  utilities over a balanced pair set (I1, I7), Spearman-Kärber switch points on two intensity ramps
  (I2, I3), and a log exchange rate (I4) — applied to the model under test as respondent about its own
  welfare. The two pairwise instruments are the nearest thing to the entry's Bradley–Terry framing, and
  they are **Thurstonian (probit) fits to the test model's own forced choices**, not a trained reward
  model.

Net: the entry can be moved off "surfaced but never opened" with a confirmed, well-specified citation
and two quotable headline figures (0.876 instrument dependence; G = 0.348, 0.051 single-instrument,
≈38 instruments for 0.80) — but it cannot be promoted as evidence for anything about reward-model or
judge score decomposition, and whatever it is cited for must carry the five-model complete-case base
and the instrument-effect-over-preference-signal denominator.
