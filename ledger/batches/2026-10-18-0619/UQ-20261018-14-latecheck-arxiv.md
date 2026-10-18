# Late check — arXiv:2511.21622 (UQ-20261018-14)

Date of check: 2026-10-18
Checker: first-hand source check, literature audit
Reader's claim under test: "by Gundlach and co-authors", "asks what is the compute-equivalent
gain of individual innovations in FLOPs?", "answered while explicitly excluding wall-clock time
and hardware".

## Read level (honest)

FULL TEXT — PARTIAL. Route used: arXiv HTML rendering of v1 (https://arxiv.org/html/2511.21622v1),
read in three windows (offset 0, 55000, 66000), plus the abstract record page.

Retrieved: the first-page byline and title, the table of contents, and the body from Section 1
through partway into Section 7.1.
NOT retrieved by any route: the remainder of Section 7 (including Section 7.1.1, titled in the ToC
"Algorithmic Versus Hardware Improvements"), the References/bibliography, and Appendices A-E
(incl. Appendix E "Reproducibility Statement").

The HTML extraction is capped: at offset 0, offset 55000 and offset 66000 the readable text ended
at the SAME point inside Section 7.1 ("improved datasets at (~3x)" / "improved datasets at ("),
which is how the cap was identified rather than inferred.

All quotes below arrived through a summariser that truncates verbatim strings near 125 characters.
Each quoted string was requested and checked ALONE. None are stitched. They are relayed fragments,
not a direct read of the PDF; treat sentence boundaries as unverified where a fragment ends without
terminal punctuation.

## Failed routes (exact error text)

1. `curl -sSL https://arxiv.org/pdf/2511.21622v1`
   -> `curl: (56) CONNECT tunnel failed, response 403`  (HTTP:000 SIZE:0)
2. Proxy status corroboration (`$HTTPS_PROXY/__agentproxy/status`), recentRelayFailures:
   `{"kind":"connect_rejected","detail":"gateway answered 403 to CONNECT (policy denial or upstream failure)","host":"arxiv.org:443"}`
3. `curl -sSL https://export.arxiv.org/abs/2511.21622`
   -> `curl: (56) CONNECT tunnel failed, response 403`
4. `curl -sSL https://export.arxiv.org/pdf/2511.21622v1`
   -> `curl: (56) CONNECT tunnel failed, response 403`
   => arxiv.org and export.arxiv.org are policy-denied to curl in this environment; pdftotext was
   available but never got a file. WebFetch was therefore the only route, and its summariser
   truncation could not be bypassed.
5. WebFetch on the abs page returned, as a limitation note (not an error):
   "I can't reproduce the full abstract verbatim. The source limits quotes to 125 characters".
6. No call was refused by the permission system. Unpaywall was NOT attempted at all, by rule
   (its courtesy-email parameter would put a personal identifier in a query string).

Budget used: 2 searches, 6 fetches (cap 5 / 6). No mcp__hearthbot__ calls.

## Q1 — Existence, title, authors, versions, venue

FOUND. The paper exists.

Title, as printed at the top of the document: "On the Origin of Algorithmic Progress in AI"

Author line, as printed in the first-page byline, in order (NOT taken from the record page;
confirmed against the document's own first page in the HTML rendering):
  Hans Gundlach(dagger,star), Alex Fogelson(dagger), Jayson Lynch(dagger), Ana Trisovic(dagger),
  Jonathan Rosenfeld(dagger), Anmol Sandhu(ddagger), Neil Thompson(dagger,star)
  dagger = MIT FutureTech, CSAIL;  ddagger = Olin College;  star = corresponding authors.
The abstract record page gave the identical list and order, so record and first page agree.
=> Reader's "by Gundlach and co-authors" is CONFIRMED (Gundlach is first of seven).

Versions and dates: v1 only, submitted 2025-11-26. First-page preprint stamp:
"arXiv:2511.21622v1 [cs.LG] 26 Nov 2025". The abs record listed no v2.
Oddity: the first page also carries a separate date line, "(July 2025)", alongside the November
stamp.
Subjects: cs.LG, cs.AI.

Venue / journal reference: NOT FOUND on the document's own first page — no conference, workshop or
journal line, and no footnote venue. The abs record showed no journal-ref, no DOI, no comments.
Secondary, SEARCH SNIPPETS ONLY and unverified: a search result lists this exact title at
https://icml.cc/virtual/2026/78574 . I could not open it (fetch budget spent) and the document
itself carries no such line, so this is NOT established.

## Q2 — What it measures (estimand, unit, denominator)

FOUND. The quantity is a compute equivalent gain (CEG): a dimensionless multiplier in TRAINING
FLOPs, formed at a fixed performance level (loss / negative log-likelihood), comparing the compute
one algorithm needs to reach that loss against the compute another needs. Unit: a bare ratio
("x"-factor) of training FLOPs; the denominator is the compute of the algorithm being credited, at
matched performance — i.e. an iso-performance compute ratio, not a time ratio.

Section 2 is titled "Expanding the Compute Equivalent Gains Framework". Definitional fragments
(Section 2, each checked alone):
  - "CEG multipliers compare models to models by fixing a performance level."
  - "CEG functions compare training algorithms to training algorithms."
Terms the paper actually uses: "compute equivalent gain" (CEG), "CEG function", "CEG multiplier".
It does NOT use "physical compute multiplier" or "efficiency factor". "Effective compute" appears
in the introduction only, attributed to Ho et al. (2024), not defined here.
Section 2 footnote 1 scopes "training algorithms" as: "includes everything except compute i.e.,
architecture, optimizers, data-parameter balancing, etc."

Headline figures: the prior estimate it contests is 22,000x ("Algorithms have been estimated to
increase AI training FLOP efficiency by a factor of 22,000"); its ablations plus literature survey
account for under 100x; its own total estimate is 6,930x.

=> It IS a compute-equivalent gain, NOT a wall-clock speedup. Reader CORRECT on the metric.
=> But the reader's gloss "the compute-equivalent gain of individual innovations" understates the
paper's actual object: the paper's central claim is that the CEG of an innovation is not a single
number but a function of compute scale, and its headline move is a DOWNWARD revision of a prior
aggregate estimate. See Q6.

## Q3 — Does it state it EXCLUDES wall-clock time / hardware / systems-level work?

FOUND for wall-clock time and systems-level work; COULD NOT READ for hardware.

Location: Section 6.5 "Beyond FLOP Efficiency", inside Section 6 "Limitations and Further Work".
It is a LIMITATIONS caveat, not a framing assumption stated up front. Fragments, each checked alone:
  - "Our focus on training FLOP efficiency necessarily omits many critical innovations."
  - "Other innovations like Flash Attention reduce wall-clock time and energy consumption"
  - "without affecting total FLOP operations."
  - "There are also technical improvements that make large-scale training feasible in the first place,"
  - "including pipeline and tensor parallelism techniques"
  - "Numerous improvements we tested (RMSNorm, learning rate schedules, etc.) showed minimal FLOP efficiency gains"
  - "but substantially improved training stability, convergence reliability, or extrapolation capabilities."
  - "Capability-enabling innovations like instruction fine-tuning"
  - "and constitutional AI fundamentally change model utility without improving pretraining efficiency."

So: wall-clock-only and systems/parallelism innovations are stated to fall OUTSIDE the FLOP-efficiency
measure. This ANSWERS the scope question rather than merely mentioning it.

Two important qualifications:
(a) When asked directly whether any visible sentence states that the measure counts only
    floating-point operations and not time or hardware, the answer was no outright statement; the
    closest is the "necessarily omits" sentence above. There is no blanket "we exclude hardware"
    sentence in the readable body.
(b) The ToC lists Section 7.1.1 "Algorithmic Versus Hardware Improvements". Its body was NOT
    retrievable by any route available here => COULD NOT READ on the hardware question specifically.

(c) Section 6.5 goes further than scoping, and partly against the reader's framing — it concedes the
    metric itself is insufficient:
  - "These observations suggest that algorithmic progress in AI may be only partially characterized"
  - "by scalar FLOP efficiency metrics alone."
  - "In analogy to transportation, AI algorithmic improvements are less well described as increases in fuel efficiency"
  - "but instead as new types of vehicles and new roads to travel on."
  - "A comprehensive understanding of algorithmic progress requires multidimensional evaluation across efficiency,"
  - "stability, capability, and deployment axes."

=> Reader's "explicitly excluding wall-clock time and hardware" is PARTLY supported: wall-clock and
systems yes (as a limitation); hardware unverified; and the paper's own posture is that the FLOP
measure is incomplete, not that exclusion is clean.

## Q4 — modded-nanogpt speedrun as a data source?

NOT FOUND. (NOT the same as "could not read" — see scope below.)

Un-primed check first: asked openly what external datasets, leaderboards, public record lists or
community benchmark competitions the paper draws numbers from. The answer named:
Epoch AI "Data on AI models" (2025) — used to define the frontier ("models scaling at the frontier
as defined by Epoch AI"); Epoch AI "Key trends and figures in machine learning" (2023) — the ~4.2x/yr
compute growth and the notable-models time-compute relation (Section 5.1); Ho et al. (2024) — the
22,000x figure, the 8-month doubling, the ~60x LSTM-to-Transformer figure; and literature estimates
(Hernandez & Brown 44x, Sanderson et al. 1.7x and a 70% rotary gain, Biderman et al. 10-30% rotary,
Whitfill on selection bias, Ali et al. 68% tokenizer cost, DataComp-LM 10x dataset claim,
Ho & Berg 10x for reasoning models, MoE papers) — Section 3.3. No speedrun appeared.

Primed check second (sections 4 through 7.1): "modded-nanogpt", "nanogpt speedrun", a GPT-2
speedrun, Keller Jordan, and the Muon optimizer were each reported ABSENT, with no bibliography
entries for them.

Scope of the NOT FOUND: Sections 1 through 7.1 of the HTML full text. NOT searched: Section 7.1.1
onward, the References list, Appendices A-E. A bibliography entry cannot be ruled out, but nothing
in the body uses such a source.

Record counts and date range: NONE STATED for any record list. The paper does not give an entry
count or a date span for the Epoch AI data it uses.
Re-run vs taken as given: it takes published figures as given — "we use the exponential relationship
between time and compute among notable models" (Section 5.1), and literature estimates are used as
reported. It does not re-run anyone's records. What it DOES run is its own ablations and scaling
studies: a 3.6M-parameter Transformer with rotary encodings and GeLU, token-to-parameter ratio 20,
default batch size 64 (Section 3.1, Figure 1); scaling runs of Transformers ~1.6M-29M parameters and
LSTMs ~1.6M-11.2M parameters, hidden dimensions 32-256 (Section 4.1.1). Hardware and total token
counts: not in the readable text (Appendix A.3 unreachable).

=> The reader's picture of this source is cross-contaminated: this paper has no speedrun input.

## Q5 — Repetition count, standard deviation, CI, or statistical test on a measured runtime?

NOT FOUND, on two levels, after reading Sections 1 through 7.1 including figure captions.

(a) No variance reporting of any kind: no seeds, no repeated-run counts, no standard deviations, no
error bars, no confidence intervals, no significance tests. Central quantities are single point
values (e.g. the 6.28x and 1.87x gains; a scaling exponent given as .094).
(b) The paper measures no runtimes at all — its metric is FLOPs, not time. The only runtime figure
in the readable text is a CITATION, not a measurement: RMSNorm "can have runtime improvements of"
7%-64% (Section 3.1, attributed to Zhang and Sennrich 2019), given without uncertainty.

Residual gap, reported as COULD NOT READ rather than folded into the NOT FOUND: Appendix E
"Reproducibility Statement" is listed in the ToC and was never retrievable, so a seed or
repeated-run disclosure there is not excluded.

## Q6 — Does it raise whether gains survive re-measurement, or transfer to larger scale?

Two distinct things; they resolve differently.

Transfer to larger scale: it ANSWERS this. It is the paper's central result, not an open question
left hanging. Section 3 is titled "Scale Invariant Algorithms" and Section 4 "Scale-Dependent
Algorithms"; Section 5 is "Algorithmic Progress Depends Strongly on Compute, Reference Points".
The settling sentence (Section 4.1.2, "Transformers are a Scale-Dependent Improvement to LSTMs"):
  - "Our scaling graphs suggest that improvements in neural network architecture are not scale invariant."
Figure 1 caption: "Hatched bar represent improvements we believe are scale-dependent."
With a stated caveat (Section 6.2, "Our Experiments are Relatively Small and Non-Exhaustive"):
  - "Our experiments are conducted at small scales compared to more recent scaling studies"
  - "However, our studies are done at slightly lower but similar scales to papers that originally explored many of these innovations"

Re-measurement of individual recorded improvements: it ANSWERS this in aggregate by doing the
re-measurement itself (its ablations recover under 100x against a prior 22,000x), and it POSES the
per-algorithm residue and leaves it OPEN:
  - Section 6.2: "we did not run scaling interventions on all the algorithms in our study individually."
  - Section 6.3 ("The Burden of Optimality"): "Another key limitation is the fickle nature of hyperparameters."
  - Section 6.3: "For instance, we found it nearly impossible to scale a transformer trained with SGD and a batch size over 128."
  - Section 6.3: "This becomes computationally infeasible with much larger models, as determining optimal scaling for transformers took many years"
  - Section 6.3 leaves open the possibility that better hyperparameters could change the scaling relationship.
  - Section 5.1 on the unexplained residual: gains "could be from data selection, tokenizer advancements, or a long tail of innovations not captured in our analysis."

=> Not a mere mention. ANSWERED for scale transfer (answer: many gains do not transfer, they are
scale-dependent); POSED-AND-OPEN for per-algorithm scaling interventions and hyperparameter
optimality.

## Q7 — Classification of innovations by type / systems-level vs algorithmic

FOUND, but the axis is NOT systems-level vs algorithmic.

Primary axis: scale-invariant vs scale-dependent. Introduced in Section 1's numbered findings and
carried by the Section 3 and Section 4 titles; marked in Figure 1 ("Hatched bar represent
improvements we believe are scale-dependent").
Second axis: ablation-tested (the authors' own runs) vs literature-estimated. Section 3.1
"Ablation Experiments" subgroups: Activation Functions, Positional Encoding, Learning Rate
Schedules, Normalization Techniques, Optimizers. Section 3.3 "Literature Estimates" subgroups:
Mixture of Experts, Tokenizers.
Third, minor: primary vs secondary literature (Section 3 intro — "from the primary literature
(i.e., from the papers that proposed the algorithmic improvement itself)").
Also definitional, not a taxonomy of innovations: CEG functions vs CEG multipliers (Section 2).
Broad framing (Section 1): "a succession of algorithmic efficiency innovations in architectures,
optimization, and other training practices."

Systems-level vs algorithmic: NOT used as a classification of the measured innovations. Systems and
engineering items (parallelism, Flash Attention) appear only in Section 6.5 as things OMITTED from
the measure. An algorithmic-vs-hardware discussion exists as Section 7.1.1 per the ToC, but its body
was COULD NOT READ, so whether it contains a taxonomy is unestablished.

Things the paper states it does not account for (Section 6, collected):
  - Section 3 intro: "We leave out tokenizers and data quality enhancements as they are difficult to evaluate using perplexity."
  - Section 6.1: "We do not do any dataset ablation experiments."
  - Section 6.2: "We also do not test innovations involved in the creation of LSTMs."
  - Section 6.2, handled only via literature: "These include mixture of experts, tokenizers, and improvements in data."
  - Section 6.4, on reasoning models: "Such improvements fall outside of our study's original 2012-2023 time period."

## Net assessment of the reader's description

- "Gundlach and co-authors": CORRECT.
- "compute-equivalent gain of individual innovations in FLOPs": CORRECT as to the metric (CEG, an
  iso-performance training-FLOP ratio), but it misdescribes the paper's thrust. The paper's answer is
  deflationary and conditional: a single per-innovation CEG is what it argues against, since CEG is a
  function of compute scale; and its aggregate figure revises 22,000x down to 6,930x.
- "answered while explicitly excluding wall-clock time and hardware": PARTLY CORRECT and
  mis-weighted. Wall-clock and systems-level work are set aside, but in Section 6.5 Limitations, and
  in the same breath the paper concedes scalar FLOP efficiency only "partially" characterizes
  algorithmic progress. The hardware half could not be verified: Section 7.1.1 bears exactly that
  title and was unreadable here.
- The modded-nanogpt speedrun attribution does not belong to this source.
