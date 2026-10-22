# VERIFY - UQ-20261022-16: GlitchCleaner and Sampling Adapters, the two unopened returns, now opened
Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That two further items on the entry's returned-but-unopened list were opened by nobody, so
nothing they contain has been checked: GlitchCleaner, an AAAI paper, and Sampling Adapters.

The claim has two limbs that must be graded apart.

- **Limb A, a fact about the batch's read history** - that nobody opened them. I was not shown
  the reviewer's reasoning or the batch's read log, so I **CANNOT CHECK** limb A. Nothing below
  bears on it.
- **Limb B, a fact about the documents** - that nothing they contain has been checked, i.e. the
  entry is booking a novelty grade over two documents whose contents are unknown. Limb B was
  true when the entry was written and is **no longer true**: I have now opened both. What
  follows is the check.

What turns on it, restated so it is not defended: the entry books novelty partly on the absence
of a published value, the candidate's limb (i) being truncated-away probability mass. Each
unopened return is a place that absence could fail.

## READ LEVEL

**(1) GlitchCleaner - PARTIAL.** Sections read: front matter, abstract, Background and the
detection setup, Tables 2-6 with values, and the Figure 1 mention. Not read end to end: the
method sections' body prose and the Related Work beyond the two sentences quoted below.
Route used: the OJS PDF galley `https://ojs.aaai.org/index.php/AAAI/article/download/40321/44282`
through the WebFetch summariser, so verbatim quotation is capped at roughly 125 characters and
the abstract came back as **paraphrase, not verbatim**. I therefore quote the abstract nowhere
and do not rely on its wording.

**(2) Sampling Adapters - PARTIAL, structurally near-complete.** Read: all section headings,
all ten figure and table captions, the evaluated quantities by equation number, Table 1 example
values, footnote 11, footnote 16, and a full inventory of sentences containing "mass",
"truncat", "tail" and "zero probability". Not read end to end: the body prose of Sections 4 and
5, and the Appendix A results beyond their captions. Route used:
`https://arxiv.org/html/2307.03749v2`. The abstract again came back as paraphrase; I quote only
the one short exact excerpt the summariser served.

Neither source is COULD NOT READ. Nothing below rests on an unread document's silence.

### (a) Full citations from the front matter

**(1)** Fan, Yibo; Li, Jingru; Li, Huan (corresponding author). 2026. "GlitchCleaner:
Lightweight Glitch Tokens Repairing by Lossless Gated LoRA in Large Language Models."
*Proceedings of the AAAI Conference on Artificial Intelligence* 40(36): 30656-30664.
DOI 10.1609/aaai.v40i36.40321. AAAI Technical Track on Natural Language Processing I. Published
2026-03-14. All three authors: College of Artificial Intelligence, Nankai University. (The PDF's
extracted text drops "fi" ligatures - "Artifcial" - which is an extraction artefact, not the
printed affiliation.)

**(2)** Meister, Clara; Pimentel, Tiago; Malagutti, Luca; Wilcox, Ethan G.; Cotterell, Ryan.
"On the Efficacy of Sampling Adapters." arXiv:2307.03749. Submitted 2023-07-07; v2 dated
2024-01-05. Primary class cs.CL. The arXiv record prints **no journal or venue note and no DOI**.
I did **not** verify a peer-reviewed venue and do not assert one; if the entry wants to cite a
conference version, that is a separate lookup.

### Front-matter corrections to the entry's citations

- **GlitchCleaner.** The entry carries only "GlitchCleaner, AAAI, at .../view/40321". Missing:
  all three authors, the year (2026), the volume/issue (40(36)), the pages (30656-30664), the
  DOI (10.1609/aaai.v40i36.40321) and the full title. Add them. The bare landing-page URL is not
  an identifier the ledger can be audited on.
- **Sampling Adapters.** The entry carries only "Sampling Adapters, arXiv:2307.03749". Missing:
  the five authors, the year, and the full title "On the Efficacy of Sampling Adapters". Add
  them. The arXiv id is correct and both named routes resolve; `/html/2307.03749v2` is the one
  that serves body text.

## WHAT THE SOURCE SAYS (quotations as served)

### (b) GlitchCleaner: what it detects or repairs, and what it prints

**What it does.** It repairs, it does not newly detect. Detection is a repeat task with a fixed
prompt and, in the paper's words, "we set the temperature parameter to 0", which "produces
identical outputs for the same input"; then "if the model produces unexpected outputs, we
classify the corresponding token as a glitch token". The repair is auxiliary gated LoRA branches
on the MLP of selected later layers.

*Opener scoping, since it matters here:* the temperature sentence opens on the detection
procedure ("we set..."), so the clause **RECORDS A METHOD SETTING**. It does not ASSERT a
measured decoding quantity. A reader skimming for "temperature" would misread this as
sampling-side analysis. It is not.

**Quantities printed.**

- **Table 2, repair rate.** Numerator: tokens repaired. Denominator: that model's own glitch-token
  count. Llama-2-7b-chat, 4,743 glitch tokens: 4,210 repaired = **88.76%** (GlitchProber 2,968 =
  62.58%). Gemma-2b-it, 29,831 glitch tokens: 69.38%. Mistral-7B-Instruct-v0.1, 2,539: 94.80%.
  Qwen-7B-Chat, 27,686: 88.79%. Yi-6B-Chat, 5,985: 92.68%. **Average 86.88%** against
  GlitchProber's 50.08% - and the 86.88% is the mean of the five per-model rates, not a
  token-weighted rate over the pooled 70,784 glitch tokens. The abstract's "over 30%" improvement
  is 86.88 - 50.08 = 36.80 **percentage points**, not a 30% relative gain.
- **Table 3**, repair rate by glitch type, Llama-2: Spelling 94.43%, Length 92.45%. Denominator
  not stated explicitly.
- **Table 4**, GSM8K and MMLU before/after, printed without units: Llama-2-7b-chat GSM8K 23.05 ->
  23.88; MMLU 46.38 -> 46.23.
- **Table 5**, repair rate plus six benchmarks: 95.09% Llama-3.1-8B-Instruct, 98.44% Qwen3-8B,
  93.73% Mistral-7B-Instruct-v0.3; e.g. Llama-3.1 GSM8K 75.58 -> 77.33. Denominator not stated.
- **Table 6**, inference speed, tokens/sec on an H200: original 66.30, GlitchCleaner 62.83,
  GlitchProber 11.82.
- **Figure 1**, Wasserstein distance between glitch-token and normal-token **activations**.
- Non-table: parameter overhead "less than 0.1% additional parameters to the original model".

**Does it report any emission- or sampling-side measurement? ABSENT as a measurement.** Two
near-misses, both of which must be labelled:

1. In Related Work, glitch tokens "generate abnormal activation values and prediction
   probabilities during model inference", and glitch inputs lead to "increased uncertainty in
   model output predictions" (the latter describing GlitchMiner). *Opener scoping:* both sit in
   a related-work clause attributing a finding to **prior work**. The clause **RECORDS A CITED
   CHARACTERISATION**, not a quantity this paper measures. No number, no table, no units.
2. The temperature-0 setting, dealt with above.

Softmax or output probability mass, sampling, top-p, top-k, nucleus, truncation and tail mass:
**ABSENT** - the words do not appear as measured quantities anywhere I read. GlitchCleaner's one
distributional instrument is a Wasserstein distance over **activations**, which is an internal
representation, not an emission distribution.

### (c) Sampling Adapters: does it quantify the mass a truncation sampler removes?

**No. It does not.** This is the sub-claim that matters and the answer is unambiguous: the paper
**DEFINES** truncation as the elimination and reallocation of probability mass and **ASSUMES** a
tail mass in one illustrative footnote, but it **never measures or prints** the mass any adapter
actually removes, at any granularity.

The definitional sentences, which is where a careless reader stops:

- Opener "Truncation sampling methods aim...": "Truncation sampling methods aim to eliminate
  probability mass placed on tokens deemed likely" / "to lead to undesirable text, reallocating
  their probability mass to the remaining options." *The opener scopes this as a statement of
  what the method class AIMS to do.* The clause **DEFINES** the operation. It asserts no measured
  value.
- Opener "One popular way of formulating sampling adapters...": "...via truncation functions,
  i.e.," / "functions where vocabulary units that do not meet a certain criterion are re-assigned
  zero probability." Again a **DEFINITION**, in a formalism clause.
- Example 3.4, opener "i.e., a function that returns the smallest subset...": "...of (sub)words
  that collectively have probability mass > pi." This is top-pi's **defining threshold**, a
  hyperparameter the experimenter sets, not an outcome the paper measures. A reader could mistake
  "probability mass > pi" for a reported figure; it is the sampler's own definition.

**What the paper actually evaluates** (Section 5, all of it distributional comparison, none of it
removed mass): forward cross-entropy (epsilon-smoothed) and reverse cross-entropy, Eq. 9; forward
and reverse KL, Eq. 10a; total variation distance, Eq. 11; Jensen-Shannon divergence, Eq. 12;
entropy of the adapted distribution; token coverage; MAUVE; and Spearman correlations of the
probabilistic measures with MAUVE. **The only printed numbers in the paper are Table 1's
correlations** - e.g. TVD against MAUVE for GPT-J/GPT-2 is -0.73*, reverse KL -0.77*, with * for
p < 0.001. Everything else is read off Figures 1-10. None of those numbers is a removed-mass
value.

**The nearest miss, and why it is a different quantity.** Figure 7, caption as served in four
consecutive fragments (a **reconstruction from 4 fragments**, junction verified at "percentage of
tokens / to which" and "distribution, / which"):

> "Figure 7: Average model token coverage per sequence y (i.e., percentage of tokens to which the
> adapter assigns non-zero probability) of the WebText test set after different sampling adapter
> methods have been applied to the output distribution. Dashed lines correspond to unmodified
> distribution, which always assigns probability mass to each token."

Numerator class, quoting its own definition with its exclusion: the **count** of vocabulary items
"to which the adapter assigns non-zero probability" - excluding, by construction, every item the
adapter zeroed. Denominator: the vocabulary, per sequence position, then averaged per sequence
over the WebText test set. **Not** the model's total probability mass of 1.0.

Overlap in both directions, which is the whole of it:

- **What Figure 7's class MISSES.** All of the mass. A sampler can zero 99% of the vocabulary
  while removing 0.1% of the mass, and Figure 7 cannot tell that apart from zeroing 99% of the
  vocabulary carrying half the mass. Token coverage is therefore **silent** on limb (i), not
  weak evidence for it.
- **What it INCLUDES that the claim excludes.** Items zeroed that carried negligible or
  effectively nil mass under the unadapted model still count fully against coverage; and the
  denominator is the whole vocabulary, including the well-trained and reachable items that the
  candidate's partition would set aside. So Figure 7's figure moves for reasons limb (i) does not
  care about.

One word away - "percentage of tokens" versus percentage of mass - and a different quantity.

**The other near-miss: footnote 11.** Served in six consecutive fragments; I quote the first two,
which carry the weight:

> Opener "To see why, consider a simple example:" - "A model that assigns a very small collective
> probability mass of 0.001 to all" / "(sub)words in the tail (low-probability region) of the
> distribution at any given generation step."

*The opening words scope the entire footnote as a stipulated illustration.* The clause
**ASSERTS NO MEASURED QUANTITY**; it **RECORDS A MOVE AWAY** from measurement into a worked
hypothetical. The 0.001 is an assumption the authors hand themselves to motivate truncation. It
is **not** a measured tail mass for any model, any adapter or any corpus, and it must never be
lifted out of the footnote as a published value. The footnote then computes
1-(1-0.001)^200 ~= 20% for a 200-token sequence. **MY OWN ARITHMETIC:** 1-(0.999)^200 = 0.1814,
i.e. 18.1%, so the paper's "~= 20%" rounds up; the paper states no uncertainty on it because
there is none to state - the input was stipulated.

**Per-step reporting: no.** Section 5.1 states the probabilistic measures are mean-aggregated
across all positions t and all test strings y; token coverage is averaged per sequence. So even
the adjacent quantities are aggregates, and no removed-mass quantity exists to report per step.

**One cross-reference oddity, flagged not relied on.** The caption list has Figure 6 as average
entropy and Figure 7 as token coverage, but a body sentence (opener "This is perhaps expected
given...") cites Fig. 7 for entropy, while footnote 16 (opener "Importantly, if not for use of
the epsilon-smoothed versions...") cites Fig. 6 for coverage. One of the two body references is
probably a cross-referencing slip, or the summariser crossed them. It does not change the answer:
whichever number is which, one figure prints entropy and the other prints a percentage of tokens,
and **neither prints removed mass**.

### (d) Does either paper partition the vocabulary by under-training or by reachability?

Answered separately per source, because the two differ and this is where the entry is loosest.

**GlitchCleaner - reachability is PRESENT, as a filter, not a partition.** The paper defines
unreachable tokens as "tokens whose decoded string, when re-encoded, yields a different token ID
than the original", and for Llama-2-7B removes 229 of 32,000 vocabulary items - 3 special, 2
undecodable, 224 unreachable - leaving the 31,771 it traverses, of which 4,743 come back glitch.
That is a printed reachability-based **exclusion count** with a named denominator (32,000). It is
a pre-processing filter: no probability mass is attached to the excluded set, and the remaining
vocabulary is not split by reachability for analysis. **Under-training as a partition: ABSENT.**
The paper only describes glitch tokens as "incompletely trained to some extent" and "essentially
untrained tokens", citing prior work. *Opener scoping:* these sit in a clause attributing the
characterisation to prior work, so they **RECORD A CITED DESCRIPTION** and do not assert a
training-status split this paper performs.

**Sampling Adapters - neither.** No partition by under-training, none by reachability. Figure 7's
token coverage is the nearest concept to reachability, but it is per-sequence coverage of the
adapted distribution's support, not a partition of the vocabulary, and the paper draws no
training-status distinction among vocabulary items anywhere I read.

## REGIME

Stated in each source's own words, then placed.

**GlitchCleaner.** Population: the vocabularies of five then three instruction-tuned open models -
Llama-2-7b-chat, Gemma-2b-it, Mistral-7B-Instruct-v0.1, Qwen-7B-Chat, Yi-6B-Chat, then
Llama-3.1-8B-Instruct, Qwen3-8B, Mistral-7B-Instruct-v0.3. Unit of analysis: the single
vocabulary token, classified glitch or not. Operating condition: a fixed repeat-the-string prompt
at **temperature 0**, deliberately deterministic greedy decoding. Instrument: string equality of
the model's echo against the token, plus Wasserstein distance over activations. Threshold: binary
"unexpected output". Hardware: H200 for the speed table.

Does the claim sit inside it? **No.** The candidate's limb (i) is a quantity over the emission
distribution under a truncation sampler. GlitchCleaner's regime has **switched sampling off by
construction** - temperature 0 is the opposite operating condition - and its one distributional
instrument looks at activations, not emissions. A result obtained at temperature 0 over token
identity is silent about truncated-away mass, not supportive of its absence and not against it.

**Sampling Adapters.** Population: WebText test set, with WikiText as a robustness check.
Unit of analysis: the (sub)word-level conditional distribution at position t, mean-aggregated over
all t and all strings y. Operating condition: GPT-J's output distribution with sampling adapters
applied - nucleus/top-pi, top-k, eta, epsilon, locally typical - swept over hyperparameters.
Instruments: forward and reverse cross-entropy, KL, TVD, JS, entropy, token coverage, MAUVE.
Thresholds: epsilon-smoothing at 1e-6, with 1e-8 in Figure 8; significance at p < 0.001 in
Table 1. A stated reason the paper needs epsilon-smoothing at all, opener "Any generator that
assigns zero probability...": "...to a valid string - as is the case when top-pi or top-k sampling
are applied - will have both infinite cross-entropy and perplexity with respect to the natural
language distribution."

Does the claim sit inside it? **The regime is the right one - this is the truncation step itself -
and the quantity is still not there.** That makes this the strongest possible form of the
entry's negative: the paper that most plausibly would have printed limb (i), working at the exact
operating condition, chose instead to measure divergences, entropy and a token count. Its
epsilon-smoothing footnotes show the authors were squarely thinking about the zeroed support -
and they handled it by smoothing it away rather than by quantifying it.

## DEFECTS FOUND

1. **Limb A is unverifiable from here and should not be graded as checked.** Whether anybody
   opened these two is a fact about the batch's read log, which I was not shown. The entry should
   not carry "opened by nobody" as a verified finding on my say-so.
2. **Limb B is now stale in the entry's favour but must be rewritten.** "Nothing they contain has
   been checked" was accurate and is now false. Replace it with the finding, because an entry
   that keeps saying "unchecked" invites the same re-check next batch.
3. **The entry's citations are too thin to audit.** Neither carries authors, year or DOI. See the
   corrections above. "GlitchCleaner, AAAI" and "Sampling Adapters" are the short forms the
   discipline warns about; the AAAI item is in particular a **2026** paper, which an entry graded
   in October 2026 should state.
4. **A live trap the entry does not currently name.** Sampling Adapters' Figure 7 and footnote 11
   are both one word from limb (i). Figure 7 is a percentage **of tokens**; footnote 11's 0.001 is
   **stipulated**, inside a clause opening "To see why, consider a simple example:". If the entry
   does not name these two and say why they are not limb (i), a future reviewer will either cite
   footnote 11 as a published tail mass or cite Figure 7 as published removed mass. Both would be
   wrong. This is the single most useful thing to add.
5. **A real narrowing on the reachability limb.** GlitchCleaner **does** print a
   reachability-based exclusion - 224 unreachable of 32,000 for Llama-2-7B, by the re-encode test.
   If the candidate claims novelty for partitioning the vocabulary by reachability, that limb is
   narrowed and must be stated against GlitchCleaner rather than in ignorance of it. The
   difference the entry can stand on: GlitchCleaner uses reachability to **discard** tokens before
   measuring, attaches no probability mass to the discarded set, and does not partition the
   remainder; the candidate attaches mass. That is a defensible distinction, but it has to be
   written down.
6. **An arithmetic overstatement in the source, recorded for accuracy.** Footnote 11's
   "~= 20%" is 18.1% by **MY OWN ARITHMETIC** on its own stipulated inputs. Irrelevant to limb (i),
   but do not quote the 20% as though it were tight.

## ROUTES THAT FAILED

- `https://ojs.aaai.org/index.php/AAAI/article/view/40321` - resolves and serves correct front
  matter, but the **abstract is truncated on the page itself**, cutting at "without disrupti". Not
  a block; just insufficient. The galley
  `https://ojs.aaai.org/index.php/AAAI/article/download/40321/44282` serves the body and is the
  route to use. A poster galley also exists at `.../view/40321/47752`.
- `https://arxiv.org/abs/2307.03749` - resolves, serves front matter and abstract only, no body.
  `https://arxiv.org/html/2307.03749v2` serves the body and is the route to use.
- The arXiv **PDF** route named in the entry (`https://arxiv.org/pdf/2307.03749`) was **not
  attempted** - I went straight to `/abs` and then `/html`. It is not a failed route and should
  not be recorded as one.
- Hard constraint honoured: the abstract of neither paper came back verbatim through the
  summariser, and the ~125-character verbatim cap forced the one reconstruction I have labelled
  as such. No Unpaywall, no PMC, no Europe PMC, no contact-email parameter anywhere.
- No WebSearch was spent. Both documents resolved from their citations.

## BEARING ON THE LEDGER ENTRY

**Per source, separately.**

**GlitchCleaner (Fan, Li & Li 2026, AAAI 40(36):30656-30664, DOI 10.1609/aaai.v40i36.40321) -
HOLD on limb (i), NARROW the reachability limb.** The paper prints a repair rate over glitch
tokens, benchmark deltas, tokens/sec and a Wasserstein distance over **activations**. It prints
**no** emission-side, sampling-side or mass quantity; the two near-misses are a related-work
restatement of prior work's findings and a temperature-0 detection setting, neither of which is a
measurement by this paper. Its regime is deliberately non-sampling, so it is **silent** on limb
(i) rather than supporting the absence. Separately, it does print a reachability exclusion
(224/32,000), which narrows any reachability limb and must be cited in the entry.

**Sampling Adapters (Meister, Pimentel, Malagutti, Wilcox & Cotterell, arXiv:2307.03749v2) -
HOLD, and strengthen the entry's reasoning.** This was the one that mattered and it does **not**
quantify truncated-away mass. It **DEFINES** truncation as eliminating and reallocating mass,
**ASSUMES** a 0.001 tail mass inside an illustrative footnote, and **MEASURES** cross-entropy, KL,
TVD, JS, entropy, token coverage and MAUVE instead - with Table 1's correlations the only printed
numbers in the paper. It works at the exact operating condition limb (i) concerns, which makes its
silence the most informative silence available, and its epsilon-smoothing discussion shows the
authors met the zeroed support and smoothed past it rather than measuring it.

**Net bearing on the entry.** The novelty grade **HOLDS**; neither return supplies the absent
published value. Two edits are not optional. **(1)** Rewrite limb B: these are now opened, and the
entry should say what was found rather than that they are unchecked - with Figure 7 and footnote
11 named explicitly as the two near-misses and the one-direction-each-way reason they are
different quantities. **(2)** Add a **promotion condition** on the reachability limb: the entry
may not claim novelty for a reachability partition of the vocabulary until it states that claim
against GlitchCleaner's printed re-encode filter and says why a mass-weighted partition differs
from a pre-measurement discard. Limb (i) itself needs no promotion condition from these two
sources.

**Still open, and not closed by me.** Whether Sampling Adapters has a peer-reviewed venue version
whose camera-ready differs - the arXiv record prints no venue note and I did not look. If the
entry wants a document that **would** settle limb (i), the kind required is an empirical decoding
study that reports, per step or aggregated with a stated denominator of 1.0, the probability mass
a named truncation sampler zeroes on a named corpus. Sampling Adapters is that **kind** of
document and still does not print it, which is informative. GlitchCleaner is **not** that kind of
document - it is a repair-method paper operating at temperature 0 - so it was never a candidate to
settle limb (i), and naming it as one would have been a guess.
