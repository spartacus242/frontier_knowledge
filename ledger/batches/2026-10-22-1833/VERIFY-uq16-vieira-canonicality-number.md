# VERIFY - Vieira et al. print no numeric log-canonicality rate as such, but the per-model scalar is one subtraction away from Figure 3
Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it: that Vieira et al., arXiv:2506.07956, ICML 2025 runs the nearest
thing anyone has run to the candidate's limb (i) and DOES NOT PRINT IT - specifically that

  (i)   its log-canonicality rate appears only as a plotted curve in Figure 4, with no
        numeric value in the text;
  (ii)  it is estimated from 2,000 samples of the locally canonicalized model, at the
        sequence level, with no sampler applied;
  (iii) the single printed instance anywhere in the paper is one WikiText string at 2.7%
        in Appendix A.

Verdict in one line: **MOSTLY HOLDS, with one substantive narrowing.** Limbs (ii) and (iii)
are confirmed as to fact. Limb (i) is correct that no number is *labelled* as the
log-canonicality rate anywhere I could read - but it understates the paper: a per-model
scalar log(Z-hat) is recoverable by subtracting Figure 3's **Baseline** column from its
**Global** column, the paper itself says in words that this difference is dataset-independent
*because* log(Z-hat) is, and the arithmetic bears that out across all twelve cells. And limb
(iii) mislabels the 2.7%: it is a different quantity from the canonicality rate, not an
instance of it.

## READ LEVEL

**Vieira et al. 2025 - FULL TEXT of body, PARTIAL of appendices.**

- FULL TEXT: abstract, Sections 1-5 (including all of 5.1 and 5.2), all five figure
  captions, the Figure 3 table cells, footnotes 7 and 16, and Appendix A
  ("Limitations and Future Work") in full prose.
- PARTIAL / COULD NOT READ: the arXiv HTML v1 rendering is **itself truncated**. Its text is
  83,327 characters and it ends mid-proof in **Appendix B.2**, with the final served words
  "Then, $(a_{t+1}, b_{t+1}, c_{t+1}, d_{t+1}, e_{t+1}) = (a_t," . Footnotes in the served
  text refer to **Appendices B.3, B.4, D and E**, and no heading C, D or E appears anywhere
  in the served page. Those appendices are COULD NOT READ at this route, not NOT FOUND. I
  spent my last two fetches establishing that the page genuinely ends there rather than that
  the summariser had cut it.
- NOT READ, and this matters: **the plotted values of Figure 4 itself.** Figure 4 is a vector
  plot; neither the HTML text extraction nor the PDF extraction yields its y-values. I can
  report its caption and the prose that discusses it. I cannot report what log(Z-hat) equals
  at any length *from the figure*. So my finding "no numeric value is printed" is a finding
  about caption and body text, and is silent about what a human eye could read off the axis.

Routes used: arXiv abs page (front matter), arXiv HTML v1 (four reads, two with offsets),
arXiv PDF (Appendix A prose). The PDF route **works** here and is the route that would settle
the unread appendices; see ROUTES THAT FAILED for the nomination.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter

- **Title:** "Language Models over Canonical Byte-Pair Encodings". The entry carries no title,
  only the gloss "on canonicality / tokenization ambiguity in language models"; that gloss is
  loose but not wrong.
- **Authors, from the front matter in printed order:** Tim Vieira, Tianyu Liu, Clemente Pasti,
  Yahya Emara, Brian DuSell, Benjamin LeBrun, Mario Giulianelli, Juan Luis Gastaldi,
  Timothy J. O'Donnell, Ryan Cotterell. (Ten authors. Taken from the arXiv abs page front
  matter, not from any short form.)
- **Venue, year:** ICML 2025 - confirmed independently as *Proceedings of the 42nd
  International Conference on Machine Learning*, PMLR volume 267, paper id `vieira25b`
  (https://proceedings.mlr.press/v267/vieira25b.html). The arXiv abs page shows **no** venue,
  comments or journal-ref field, so "ICML 2025" is not readable from arXiv alone; the entry's
  venue attribution is nonetheless correct.
- **DOI:** none. PMLR does not mint DOIs for proceedings papers. The entry is right not to
  carry one.
- arXiv id 2506.07956, v1 submitted 2025-06-09. Subjects cs.CL, cs.FL, cs.LG.

### (b) Is a numeric log-canonicality rate printed? - ABSENT as a labelled quantity

The quantity is **defined** in Section 3 and **estimated** in Section 5, but never printed as
a number under its own name. Definition, as served (Def. 1, Eq. 6e), in two consecutive
segments:

> "where Z is the canonicality rate:"
> "$Z \stackrel{\text{def}}{=} \Pr_{Y \in p_{\Delta}} [Y \in \mathcal{D}]$"

Sections I read to establish absence: the abstract; Section 1; Section 2; Sections 3, 4, 5.1
and 5.2; every figure caption (Figures 1-5); every cell of the Figure 3 table; footnotes 7
and 16; and Appendix A entire. **No row, column, caption or sentence in any of those is
labelled log Z, log Z-hat, canonicality rate, or any percentage of noncanonical token
sequences.** Figures 3 and 5 are tables typeset as figures; both report "log-loss
(bits/string)", not a rate.

Two near misses that must not be mistaken for it:

1. **"only 2.7%"**, Appendix A. A different quantity - see (e) below.
2. **"0.0011"**, a probability label on one noncanonical encoding in the Appendix A
   enumeration. Not a rate.

The abstract and introduction give the *cardinality* of the noncanonical set but no share of
mass. Abstract, as served: the model "assigns nonzero probability mass to an exponential
number of noncanonical token encodings". Section 1: the model "will still place nonzero
probability mass on them due to model architecture and training limitations." Both say the
mass is nonzero and numerous; **neither gives a magnitude.**

Footnote 7 is the hedged formulation of the trend, and it is about *counts of strings*, not
probability mass. Served in segments (the formula is dropped by the extractor):

> "More precisely, as a function of a length limit N, the fraction of canonical strings in the
> universal of token strings"
> "[formula omitted] decreases exponentially quickly."
> "This is evident as each character string has one canonical encoding, and exponentially many
> noncanonical encodings"
> "as a function of its length."

**What the sentence's opening words scope:** "More precisely, as a function of a length limit
N, ..." - the opener scopes the claim to a *combinatorial count over a length-bounded string
universe*. The clause **asserts** an exponential decay of a *counting* fraction. It does
**not** assert anything about Z, which is a probability under p_Delta. Reading footnote 7 as a
statement about the canonicality rate is exactly the scope error this ledger has been
bitten by.

### (c) Figure 4 and its caption

Figure 4 is the paper's only presentation of the canonicality rate. Its caption, verbatim and
complete (98 characters, served in one segment):

> "Log-canonicality rate vs. (tokenized) length, including 95% confidence intervals, for each
> model."

The caption carries **no number**. The body prose around it, as served in consecutive
segments:

> "Fig. 4 shows the effect of length on the log-canonicality rate estimate $\log \widehat{Z}$ ,"
> "using 2000 samples taken from $\ell$ ."

and the qualitative read-off, which is the closest the text comes to a value:

> "We see that for the Llama methods, the log-canonicality rate stabilizes after 256 tokens,"
> "but for the GPT-2 models, it continues decreasing."

"stabilizes after 256 tokens" and "continues decreasing" are the only magnitudes the text
gives. They are shape, not value.

### (d) 2,000 samples / locally canonicalized model / sequence level / no sampler

**2000 samples - CONFIRMED, twice.** Section 5.2:

> "where $\widehat{Z}$ is computed by Eq. (13) using 2000 samples from $\ell$ ."

and again for Figure 4 specifically:

> "using 2000 samples taken from $\ell$ ."

(Note: the number is printed as "2000", unseparated, not "2,000". Immaterial.)

**Locally canonicalized model - CONFIRMED.** ℓ is defined in Section 3.2.2, Def. 2:

> "The locally canonicalized model $\ell$ is a language model over $\Delta^*$ ,"
> "which assigns probability zero to noncanonical strings."

The three methods compared are: baseline = p_Delta, the original unconstrained model
("as well as $p_{\Delta}$ , which serves as our baseline."); local = ℓ; global = g.

**Sequence level - CONFIRMED IN SUBSTANCE, with a correction of wording.** The definition
Z = Pr_{Y in p_Delta}[Y in D] makes the unit of analysis the whole token string Y, and the
event membership in the canonical set D - so yes, the estimand is sequence-level, not
per-token. But the paper **never uses the phrase "sequence level"** and never contrasts it
with a token-level alternative. And Figure 4 does not report a single sequence-level scalar:
it reports log(Z-hat) **stratified by "(tokenized) length"**. Anyone quoting the entry should
say "sequence-level estimand, reported length-stratified," not "at the sequence level" flat.

**No sampler - CONFIRMED, and I swept for it.** The strings "top-k", "top-p", "min-p",
"nucleus", "temperature", "generation_config" and "greedy decoding" **do not appear anywhere
in the served text.** "truncat" appears three times, and none of the three is a truncation
sampler:

- Section 5.2: "...we investigated the tradeoffs in the log-canonicality rate for truncating
  the lengths of the strings generated by each model." - *string length*, not the next-token
  distribution.
- Appendix B, Def. 7: "We define the truncated canonicalization function $\varphi_T$ as
  follows:" - iterations of the canonicalization fixpoint.
- Appendix B, Remark 1: "...where we have added the option of truncating the number of
  iterations performed in $\tau$'s fixpoint iteration loop."

The one and only restriction on generation is a **length cap**, footnote 16, verbatim in two
segments:

> "In the case of the GPT-2 models, we restricted strings to have length ≤ 1024, as these
> models tend to ramble."
> " We analyze this choice further in Fig. 4."

And the authors say in so many words what that cap does to the number. The paragraph opener
and the caveat sentence, verbatim in consecutive segments:

> "We found that the GPT-2 models generate very long strings, so we investigated the tradeoffs
> in the"
> "log-canonicality rate for truncating the lengths of the strings generated by each model."

> "Thus, for practical reasons, our experiments with GPT-2 will be based on a limit length of
> 1024, but bear"
> " in mind that this means that the actual log-canonicality rate is likely to be much
> smaller, meaning"
> " the reduction in log-loss for GPT-2 is larger than Fig. 3 indicates."

**What the sentence's opening words scope.** "Thus, for practical reasons, our experiments
with GPT-2 will be based on a limit length of 1024, but bear in mind that..." - the opener
scopes the clause to **GPT-2 only** and to a **methodological concession**, and the clause
**records a move away from** the true quantity: it says the reported figure is *not* the
actual rate and is biased toward 1. It neither asserts nor denies a value. Cut the opener off
and "the actual log-canonicality rate is likely to be much smaller" reads as a finding about
canonicality; with the opener it is a disclaimer about a length cap. This is the single most
quotable sentence in the paper on this topic and the single easiest one to misquote.

### (e) The 2.7% WikiText instance - REAL, and a different quantity

Appendix A, under the paragraph head "Models overregularize", verbatim in ordered consecutive
segments from the PDF route:

> "Models overregularize. Language models often place a higher probability on a noncanonical
> encoding"
> "of the string than the canonical one. Here is an interesting example from WikiText corpus
> (Merity et al., 2017):"
> "In the case of GPT-2, the conditional probability of the canonical tokenization is only
> 2.7%, and it is ranked 4th"
> "in the (partially enumerated) set of encodings of this string:"

**Numerator class, quoting the definition with its exclusions:** the probability of **the
canonical tokenization** - exactly one encoding - of **one** WikiText character string, under
**GPT-2** (the Appendix A code block begins "\n\n = Robert Boulter = \n\n\n\n\n Robert Boulter
is an English film"). Not a population; the authors introduce it as "an interesting example",
i.e. selected to illustrate, not sampled.

**Denominator, checked against the near neighbours it is not:** the paper calls it a
"conditional probability" and does not spell out the conditioning event. The following clause
settles it as far as it can be settled: "it is ranked 4th in the **(partially enumerated)**
set of encodings of this string". So the denominator is the probability mass over the
encodings of *that one character string* - and the parenthetical concedes the enumeration is
**partial**. It is therefore not (a) a corpus-level rate, not (b) the unconditional probability
of the canonical string, and not (c) a normalization over the *complete* encoding set. The
enumerated labels visible in the Appendix A figure sum to roughly 0.9999 (that sum is MY OWN
ARITHMETIC over OCR'd labels, and the extractor flagged that figure's text as unreliable, so
treat it as suggestive only, not as establishing the denominator).

**Overlap with Z, in both directions:**

- What the 2.7% **misses**: any population at all. It is one hand-picked string. Z is a
  probability over the model's whole token-string distribution. A per-string illustration
  cannot bound a distributional rate in either direction.
- What the 2.7% **includes that Z excludes**: conditioning on a fixed character string and
  renormalizing over that string's encodings. Z does no conditioning on any character string;
  it asks whether an *unconditional* sample from p_Delta happens to be canonical. These are
  different estimands with different sample spaces. Also, 2.7% is the canonical encoding's
  *share*, whereas the quantity named "log-canonicality rate" is logarithmic - the entry's
  phrase "the single printed instance" invites reading 2.7% as a value of the same variable
  plotted in Figure 4. It is not.

### (f) Truncation samplers and generation_config - ABSENT in everything I read

See (d). No top-k, top-p, min-p, nucleus, temperature or generation_config anywhere in the
served text, including both offset reads of the tail. The paper reads **no model's
generation_config** and applies **no truncation sampler**. Caveat of read level: Appendices
B.3, B.4, D and E were not served, and an experimental-details appendix is exactly where
sampler settings would live if they existed. Their silence is unread, not evidence.

## REGIME

Vieira et al. 2025, in the paper's own words:

- **Population.** Held-out **WikiText** (cited as Merity et al., 2017) and **PTB**, for the
  log-loss results. For Z, the population is *the model's own output distribution* - Z is
  "$\Pr_{Y \in p_{\Delta}} [Y \in \mathcal{D}]$", a property of p_Delta, not of any corpus.
  Hence: "For the global method, the change in the log-loss is *independent* of the dataset
  because $\log \widehat{Z}$ is *independent* of the dataset."
- **Unit of analysis.** The **token string**. Log-loss is reported in "bits/string". Figure 4
  resolves log(Z-hat) against "(tokenized) length".
- **Instrument.** Monte Carlo: "$\widehat{Z}$ is computed by Eq. (13) using 2000 samples from
  $\ell$", with "95% confidence intervals" shown in Figure 4.
- **Operating condition.** The raw model distribution. No truncation sampler, no temperature,
  no generation_config. One restriction only: GPT-2 strings "restricted to have length ≤ 1024,
  as these models tend to ramble", which the authors say biases log(Z-hat) upward.
- **Models.** GPT-2 small / medium / large; Llama 1B / 3B / 8B. Six models, two corpora.
- **Threshold / category.** Canonical = member of D, the image of the deterministic BPE
  tokenizer. ℓ "assigns probability zero to noncanonical strings."
- **Does the claim sit inside this regime?** Limbs (ii) and (iii) sit squarely inside it.
  Limb (i) sits inside it as to *printing*. Any limb of the candidate that concerns behaviour
  **under a deployed truncation sampler, or as configured by a model's generation_config,
  sits outside this regime entirely** - the paper is silent there, and silence outside the
  regime is not support in either direction.

## DEFECTS FOUND

**1. The entry's "DOES NOT PRINT IT" is right as to labelling and understated as to
recoverability.** This is the one finding that should change the entry's wording.

The paper says in prose that the global method's log-loss differs from the baseline's by a
dataset-independent amount, *and gives the reason*: "because $\log \widehat{Z}$ is
*independent* of the dataset." Figure 3 prints both the Baseline and the Global columns. So
log(Z-hat) is **Global minus Baseline**, one subtraction from printed cells.

**MY OWN ARITHMETIC**, from the Figure 3 cells as served (Baseline minus Global, bits/string,
PTB then WikiText):

| Model | PTB | WikiText |
|---|---|---|
| GPT-2 small | 201.0 - 199.1 = **1.9** | 369.2 - 367.3 = **1.9** |
| GPT-2 medium | 195.1 - 193.1 = **2.0** | 334.1 - 332.2 = **1.9** |
| GPT-2 large | 189.4 - 188.2 = **1.2** | 320.8 - 319.6 = **1.2** |
| Llama 1B | 171.2 - 169.7 = **1.5** | 286.7 - 285.2 = **1.5** |
| Llama 3B | 165.0 - 164.2 = **0.8** | 264.6 - 263.7 = **0.9** |
| Llama 8B | 161.5 - 160.1 = **1.4** | 248.2 - 246.8 = **1.4** |

The differences agree across the two corpora to within 0.1 bits in all six rows, which is
exactly the dataset-independence the text asserts, and is internal corroboration that I read
the cells correctly. Reading these as -log2(Z-hat) gives Z-hat of roughly 2^-1.9 ~ 0.27 for
GPT-2 small up to 2^-0.85 ~ 0.55 for Llama 3B.

**Carry the uncertainty.** (i) The Figure 3 cells reached me through a summariser that warned
it had garbled some GPT-2 row labels, so the cells are a **reconstruction**, and my
subtraction inherits that risk. (ii) I did not see the formula for the global method's
log-loss, so "the difference *is* log2(Z-hat)" is my reading of the quoted prose, not a
transcribed equation. (iii) The authors themselves disclaim the implied value: "the actual
log-canonicality rate is likely to be much smaller" than the 1024-capped estimate behind
Figure 3, for GPT-2. So the recoverable number is a **bound in a stated direction**, not the
quantity.

Even with all three caveats, the entry should not say the number exists *only* as a curve. It
should say: **the paper prints no number labelled as the canonicality rate; a per-model
scalar log2(Z-hat) of roughly 0.8-2.0 bits/string is recoverable by differencing Figure 3's
Baseline and Global columns, and the authors state that for GPT-2 this recoverable value
overstates Z-hat.**

**2. The entry mislabels the 2.7% as "the single printed instance" of the rate.** It is a
different estimand - per-string, conditional on one WikiText character string, over a
*partially enumerated* encoding set, and it is a canonical-encoding *share* rather than a
log-rate. Calling it an instance of the log-canonicality rate is a one-word-away conflation
of the kind this ledger has been warned about. Correct wording: "the only percentage printed
anywhere in the paper is a per-string illustration - 2.7% for one WikiText string under GPT-2
in Appendix A - which is not an estimate of the canonicality rate."

**3. "At the sequence level" is the entry's phrase, not the paper's,** and the paper does not
report a single sequence-level scalar: Figure 4 is length-stratified. Narrow to
"sequence-level estimand, reported stratified by tokenized length."

**4. A read-level defect in the entry, if it claims full text.** The entry records "read it at
full text" via the arXiv HTML v1 route. That rendering is **truncated mid-proof in Appendix
B.2**; Appendices B.3, B.4, D and E are referenced by footnotes but not served. Whoever read
it at that route did not read the whole paper, whatever they concluded. The PDF route does
serve deeper content and should be used to close sub-claims (b) and (f) over the late
appendices.

**5. No citation front-matter error found** beyond the absence of a title. Authors, venue and
year check out; there is no DOI to supply.

## ROUTES THAT FAILED

- **No route failed outright.** All three I used returned content: arXiv abs page, arXiv HTML
  v1, arXiv PDF.
- **Partial failure worth recording:** `https://arxiv.org/html/2506.07956v1` is an **incomplete
  LaTeXML conversion**. Total page text is 83,327 characters and it terminates mid-proof of
  Lemma 1 in Appendix B.2. An `offset=90000` read returned "Nothing left to read from offset
  90000", confirming the page itself ends there rather than the summariser cutting it. Anyone
  relying on that URL for a whole-paper sweep will get a false negative on the late
  appendices.
- **Figure 4's plotted values are unreachable by text extraction** on either route. This is a
  limitation of my instrument, not a property of the paper.
- **Nomination, justified by kind.** What kind of document could close sub-claims (b) and (f)
  over Appendices B.3, B.4, D and E? *The paper's own complete text* - and the camera-ready
  PDF is that kind of document, since it contains the same appendices the footnotes reference.
  Two candidates: `https://arxiv.org/pdf/2506.07956` read at depth (this route already returned
  Appendix A prose successfully, so it is known to reach past where the HTML stops), and the
  PMLR camera-ready at `https://proceedings.mlr.press/v267/vieira25b.html`. Both are the right
  kind. I ran out of fetch budget before opening either at depth; I did not reach those
  appendices, and that is an unreached check, **not** a negative finding.
- One WebSearch ran, none refused. One search budget remains unspent; a search cannot open an
  appendix, so spending it would not have helped.

## BEARING ON THE LEDGER ENTRY

**(g) Bearing on limb (i) of the candidate: PARTLY OCCUPIED, and which part depends on what
limb (i) asks.**

- If limb (i) asks for *a measured rate at which a language model emits non-canonical token
  sequences*, under the model's own distribution, at the sequence level, with no sampler:
  **partly occupied.** Vieira et al. measure exactly that quantity, with a named estimator,
  2000 samples, 95% CIs, six models and a length-stratified plot. They do not print it as a
  number under its own name, but a per-model scalar is one subtraction from Figure 3 and the
  method is fully specified. A reader who wants the number can get it; a reader who wants to
  cite a printed figure cannot.
- If limb (i) asks for that rate **under a deployed truncation sampler** - top-k, top-p, min-p,
  or as set by a model's `generation_config`: **unoccupied.** None of those terms appears
  anywhere in the paper's served text. The paper's only sample-space restriction is a length
  cap of 1024 for GPT-2, and the authors flag that it biases the estimate toward canonicality.
  A result obtained under the raw distribution is silent about the sampler-truncated one, not
  supportive of it.

**What this does to the entry: NARROW, do not strike, and do not reverse.** The
published-is-not-performed finding survives in its core - no numeric canonicality rate is
printed in the body text, in any table, or in any figure caption of this paper. But two legs
of the entry's wording need correction before it is quoted again:

1. Replace "appears only as a plotted curve in Figure 4 with no numeric value in the text"
   with "is printed nowhere under its own name; a per-model scalar log2(Z-hat) of roughly
   0.8-2.0 bits/string is recoverable by differencing Figure 3's Baseline and Global columns,
   which the paper's own prose licenses, and which the authors say overstates Z-hat for GPT-2."
2. Strike "the single printed instance anywhere in the paper is one WikiText string at 2.7%"
   and replace with the per-string illustration wording in DEFECTS FOUND item 2. The 2.7% is a
   different estimand and must not be carried as an instance of the rate.

**Convert to a promotion condition.** Because the recoverable scalar exists, the entry's
novelty grade should no longer rest on "the number is unprinted". It should rest on the regime
gap, which is the durable one: **no sampler, no generation_config.** Promotion condition: if a
source is found that measures a non-canonical-sequence rate **under a truncation sampler read
from a model's generation_config**, limb (i) becomes occupied and novelty drops. Vieira et al.
is not that source and does not claim to be. Until then limb (i)'s sampler leg stands
unoccupied on the evidence I could read.

**Unreached:** whether Appendices B.3, B.4, D or E print a numeric Z-hat or any sampler
setting. Marked COULD NOT CHECK. Closing it costs one PDF fetch at depth.
