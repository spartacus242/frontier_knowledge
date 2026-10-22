# VERIFY - UQ-20261022-19: the posing sentences are verbatim in Section 4.2, the experiment is unperformed, and the author is Han-yu Wang (sole author)

Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

That arXiv:2606.26502 (2026), "Humans Disengage, Reasoning Models Persist: Separating
Difficulty Registration from Deliberation Allocation", **proposes in print** the candidate's
central design - quoted in the entry as "we propose a randomized reasoning-budget experiment"
and "We would randomly assign runs of the same model-item pairs to different token budgets",
with Section 5 saying "would measure" - and that it cites Hu (2026, PNAS) as recommending
trace-length manipulation while monitoring accuracy.

The gap the entry flags: the first author was never retrieved by either of the entry's two
reads (both PDF full-text, no front matter), so the paper was identified only by arXiv ID,
title and year; "Hu (2026)" in the record is a **cited** work, not the author; and a routing
row nonetheless names "Wang 2026".

**Verdict in one line: the claim HOLDS, and the routing row's "Wang 2026" is CORRECT** - the
paper has a single author, Han-yu Wang. Both posing quotations are verbatim. The experiment is
unperformed. One scope correction and three regime corrections are recorded below.

## READ LEVEL

**arXiv:2606.26502v5, Wang (2026), "Humans Disengage, Reasoning Models Persist: Separating
Difficulty Registration from Deliberation Allocation" - FULL TEXT plus FRONT MATTER.**

- Front matter (author line): read at **https://arxiv.org/abs/2606.26502** - the arXiv abstract
  page. This is the route the entry left UNTRIED, and it worked on the first call.
- Body (Sections 2, 3, 4.1-4.3, 5) and reference list: read at
  **https://arxiv.org/html/2606.26502v5** (the HTML rendering - also untried by the entry).
  Four separate fetches, each targeted at a different section.
- No DOI is printed; the identifier is the arXiv ID. Version read: **v5, dated 2026-09-13**;
  original submission 2026-06-25. The entry does not say which version its two PDF reads
  captured, so a version mismatch cannot be excluded from this side - but every sentence the
  entry quotes is present in v5 verbatim.

No route failed. I did not need a web search; both documents were reachable from the citation.

Nothing here is COULD NOT READ.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) THE AUTHOR LINE - answered first, and not inferred from any citation

Read at **https://arxiv.org/abs/2606.26502**, the arXiv abstract page's author block.

> **Han-yu Wang**

**That is the complete author list: one author.** The abstract page lists **no co-authors and
no affiliation**. The paper is single-authored, which the body corroborates in its own voice -
the abstract and Methods use the first person singular, and Section 2 says "No new
human-subjects data were collected."

**Is "Wang" the first author? YES - and also the last and only one.** The routing row's
"Wang 2026" is right. Two refinements for the row, because this ledger treats an author line
like a number:

1. The full printed form is **Wang, Han-yu** - record the given name, not the bare surname, so
   the row cannot later be confused with any other Wang.
2. **No affiliation is printed** on the arXiv abstract page. If the row wants one, it is not
   available from this route and must be marked absent rather than guessed.

And the entry's diagnosis of the confusion is **correct**: "Hu (2026)" is a work this paper
**cites**, not its author. The two names are unrelated.

### (b) READ LEVEL AND FAILED ROUTES

See READ LEVEL above. FULL TEXT plus front matter, zero failed routes, zero searches.

### (c) SECTION 4.2's PROPOSAL SENTENCES, WHOLE, WITH THEIR OPENING WORDS

**Section 4.2 is titled "The value of continued work".** Its parent is **Section 4 Discussion**.
The full heading list, read from the HTML, is:

> 1 Introduction / 2 Methods / 3 Results / 3.1 The allocation gap on H-ARC / 3.2 Allocation
> across reasoning tasks / 3.3 Human engagement and the form of failed model traces /
> 4 Discussion / 4.1 From difficulty registration to control / **4.2 The value of continued
> work** / 4.3 Limitations / 5 Conclusion

This matters for sub-claim (c): **4.2 is a Discussion subsection, and Limitations is a
*different* subsection (4.3).** So the experiment is posed as **forward-looking Discussion /
future work**, not as a limitation and not as something performed. (4.3 does refer back to it -
see (d).)

The proposal passage, RECONSTRUCTED from ordered consecutive segments served under the
summariser's ~125-character cap. **Labelled a reconstruction. Twelve consecutive segments;
junctions verified by consecutive return; nothing completed by inference.** Sentence boundaries
as served:

> (1) "Whether the additional generation improves the chance of success can be tested by varying
> the available computation."
>
> (2+3) "Varying the available next steps across otherwise comparable problems would help test
> whether continuation follows the prospect of further progress."
>
> (4) **"To estimate the return to further model computation, we propose a randomized
> reasoning-budget experiment."**
>
> (5+6+7) **"We would randomly assign runs of the same model-item pairs to different token
> budgets, draw repeated responses under fixed sampling settings, and use a common procedure for
> eliciting a final answer when reasoning ends or the budget is reached."**
>
> (8) "With B denoting the assigned token budget, the target is" [a displayed expression follows]
>
> (9+10) "Holding model and item fixed, this intervention would measure how the chance of
> success changes with the opportunity for further computation."
>
> (11) "Measuring hedging and repetition at each budget would help describe how the extra
> generation is used."
>
> (12) "The experiment would thus connect the allocation pattern to its consequences for
> performance."

**Both of the entry's quoted strings are VERBATIM and correctly attributed.**

- "we propose a randomized reasoning-budget experiment" - present, mid-sentence, lowercase "we",
  exactly as the entry carries it.
- "We would randomly assign runs of the same model-item pairs to different token budgets" -
  present, sentence-initial, exactly as the entry carries it.

**WHAT THE OPENING WORDS SCOPE** - the discipline that cost the last batch three misquotations:

- Segment 4's opener is **"To estimate the return to further model computation,"**. That is a
  **purpose clause**: it scopes the proposal to the quantity the author wants and does not have.
  The main clause **ASSERTS A PROPOSAL** ("we propose ... experiment") - it does not assert a
  result and does not record a move away from the design. **The entry's cut at "we propose"
  drops the purpose clause but does not change the claim**: with or without the opener, the verb
  is "propose", not "ran" or "report". This is a safe cut. For the ledger's own quotation, I
  recommend carrying the opener anyway, because it names the estimand the design is for.
- Segment 5's sentence opens with **"We would randomly assign"**. The modal "would" is the scope
  marker, and it governs all three coordinated verbs in the sentence ("would randomly assign ...
  draw ... and use"). The grammar on both sides of the entry's cut is clean: the entry cuts
  after "token budgets", which ends the first coordinate, and the dropped remainder ("draw
  repeated responses under fixed sampling settings, and use a common procedure for eliciting a
  final answer when reasoning ends or the budget is reached") only **adds** design detail -
  it neither qualifies nor retracts the randomisation. Safe cut.
- Every verb in the passage that describes the experiment is **conditional or future**: "can be
  tested", "would help test", "we propose", "We would randomly assign", "would measure", "would
  help describe", "would thus connect". **Not one is in the past or the present perfect.** There
  is no "we ran", "we find", "Table N reports".

So: **the design is POSED in print, as future work, in the Discussion.**

### (d) DOES THE PAPER PERFORM ANY FORCED OR CAPPED BUDGET MANIPULATION ITSELF? - NO

The entry's characterisation - nominally greedy decoding with no experimenter-set token
budget - is **right in substance**, with one honest refinement about what is actually *printed*.

**The sentence that settles the decoding regime** (Section 2, Methods):

> "These quantities are treated as behavioural measures of generated duration under nominally
> greedy decoding."

Note the paper's own hedge, **"nominally"** - this is the HEDGED formulation and the one to
carry. The paper prints **no temperature, no max-tokens value and no cap** for the analysed
runs. I checked specifically for "temperature", "max tokens" and "token budget": **"token
budget" occurs in this paper only inside the Section 4.2 proposal.**

**The sentences that settle that nothing was manipulated** (Section 2):

> "This study reanalyses publicly released, de-identified human and LRM data from the de Varda
> et al. (2025) release and the underlying behavioural corpora (LeGris et al., 2025, Prunty
> et al., 2025, Cortés et al., 2021)."
>
> "No new human-subjects data were collected."
>
> "Repeated stochastic samples from one model are unavailable."

That third sentence is the sharpest: **the author cannot even resample the same model-item
pair**, let alone assign it to budget arms. A randomized budget experiment is physically out of
reach of this data.

**And Section 4.3 Limitations, in the author's own voice:**

> "The item-controlled coefficients therefore describe population-level associations between
> duration and outcome."
>
> "The proposed budget experiment addresses the effect of additional available computation."

Read the second with its opening words: **"The proposed budget experiment"**. The noun phrase
itself carries the scope - in the Limitations section, where the author is saying what this
paper's estimates cannot deliver, the budget experiment is referred to as **proposed**, in
contrast to the associations the paper does report. The clause **RECORDS A GAP** the design
would fill; it does not assert a result from it.

**PUBLISHED IS NOT PERFORMED, and here the paper says so itself. The paper DEFINES and
ANNOUNCES the randomized budget intervention - it specifies the estimand ("With B denoting the
assigned token budget, the target is ...") - and MEASURES nothing under it.** There is no table,
figure or sentence reporting an accuracy-versus-budget curve, a truncation condition, or a
success rate at any assigned B. No such number exists to name.

**One precision the ledger should not overstate:** there is no printed sentence saying "we set
no token budget" or "we imposed no cap". The finding rests on (i) the printed "nominally greedy
decoding" sentence, (ii) the printed reanalysis-of-released-data sentences, and (iii) the
printed absence of any budget condition anywhere outside the 4.2 proposal. That is a sound
negative on a full-text read, but it is an **absence plus three positive sentences**, not a
single declarative denial. Record it that way.

### (e) WHAT SECTION 5 SAYS IT "WOULD MEASURE"

Section 5 is the **Conclusion**. One sentence qualifies, reconstructed from two consecutive
segments (junction verified):

> "The proposed budget experiment would measure when further model computation still improves
> the chance of success, connecting the observed persistence to its consequences for
> performance."

Opening words: **"The proposed budget experiment"** - again the scope marker is in the subject
noun phrase. The clause **ASSERTS A FUTURE MEASUREMENT** and, by calling the experiment
"proposed" in the paper's final section, **confirms it was never run**. The entry's "Section 5
saying 'would measure'" is accurate.

One addition the entry should carry: **"would measure" also appears in Section 4.2 itself** -
"Holding model and item fixed, this intervention would measure how the chance of success changes
with the opportunity for further computation." If the ledger quotes "would measure", it should
say which of the two it means; the 4.2 instance is the one with the estimand attached.

### (f) HU (2026, PNAS) - CONFIRMED, WITH THE CHARACTERISING SENTENCE

**Confirmed.** Hu is cited three times in the body:

> "Intermediate tokens may serve as performative scaffolding and need not directly record
> cognitive cost (Hu, 2026)."
>
> "A learned generation policy can be shaped by rewards attached to the output trajectory as
> well as the final answer, a possibility discussed by Hu (2026)."
>
> **"Hu (2026) recommends manipulating trace length while monitoring accuracy."**

The third is **the sentence that characterises Hu's recommendation**, and the entry's
paraphrase - "recommending trace-length manipulation while monitoring accuracy" - is a faithful
rendering of it, near-verbatim. Opening words: **"Hu (2026) recommends"** - the sentence
ASSERTS the recommendation and attributes it, with no hedge and no scope-limiting opener.

**Hu's full citation as this paper prints it in its reference list** (reconstructed from two
consecutive segments):

> Hu, Y. (2026). "Thinking traces" in large reasoning models: Cognitive cost or performative
> scaffolding? *Proceedings of the National Academy of Sciences*, 123(17):e2604554123.

Front-matter note: **first author Hu, Y.** - initial only, as printed. The entry's short label
"Hu (2026, PNAS)" is correct but incomplete; the row should carry volume 123, issue 17, article
e2604554123. **I did not open Hu (2026) itself** - that was not this check's task, and I
therefore make no claim about what Hu actually recommends, only about what this paper says Hu
recommends.

## REGIME

**arXiv:2606.26502v5, Wang (2026) - the regime in the paper's own words.**

- **Population.** Humans and language models on **item-matched** reasoning tasks. Three human
  behavioural corpora: **H-ARC (LeGris et al., 2025)**, **INTUIT (Prunty et al., 2025)** and
  **Cortes (Cortés et al., 2021)** - visual abstraction, intuitive reasoning and relational
  reasoning respectively. All of it reached **secondhand**: "This study reanalyses publicly
  released, de-identified human and LRM data from the **de Varda et al. (2025) release** and the
  underlying behavioural corpora". An **Arithmetic** task is present in the source release and
  **excluded because all thinking LRMs are at ceiling** on it.
- **Models.** **Six open-weight thinking LRMs** - DeepSeek-R1, Qwen-QwQ-32B,
  Qwen3-235B-Thinking, GLM-4.5-Air-FP8, gpt-oss-20b, gpt-oss-120b - plus **one non-thinking
  baseline, DeepSeek-V3**.
- **Unit of analysis.** The **individual attempt (trial)**, with outcome-conditioned duration
  comparisons. For LRMs the released data hold **one retained attempt per (item x model) pair**;
  cross-item duration correlations are computed **at the item level**.
- **Instrument.** Duration, with **three different operationalisations**: **reaction time in
  seconds** for humans, **reasoning_token_length** for the thinking LRMs, and
  **total_output_tokens** for DeepSeek-V3. Regressions use **the log** of duration.
- **Operating condition.** "**nominally greedy decoding**"; no temperature, cap or budget
  printed; "Repeated stochastic samples from one model are unavailable."
- **Estimator.** Item fixed effects, human-only and LRM-only models, single-LRM versions of the
  combined regression, the same specifications on INTUIT and Cortes, and "**a within-between
  re-parameterisation (Mundlak, 1978) using item-level mean correctness in place of item
  dummies**."
- **Does the candidate's design sit inside this regime?** **No - and that is the point.** The
  randomized budget experiment requires assigning the same model-item pair to different budgets
  and drawing repeated responses. This regime has one attempt per pair, no resampling, and no
  experimenter control of decoding. The paper names the design precisely because its own regime
  cannot deliver it.

## DEFECTS FOUND

**Against the claim: none material. The two posing quotations are verbatim; the experiment is
unperformed; the Hu attribution is correct. The entry's rejection as an asked-but-still-open
kill is sourced.**

**Against the entry's bookkeeping, five corrections:**

1. **The "CRITICAL GAP" is now CLOSED, not outstanding.** The first author is **Han-yu Wang**,
   **sole author**, read from the arXiv abstract page the entry listed as UNTRIED. The routing
   row's "Wang 2026" is **vindicated, not misattributed** - but it was, as the entry says, a row
   written on an author nobody had read. Record the row as **Wang, Han-yu (2026)**, sole author,
   **no affiliation printed**, so the next reader does not re-open this.
2. **Section 4.2 is Discussion, not Limitations.** The entry's framing question ("future work, a
   limitation, or something performed") resolves as **future work in Discussion**; Limitations is
   the separate Section 4.3. The distinction is worth keeping because 4.3 *also* mentions the
   proposal, and a careless citation to "the limitations section" would be wrong.
3. **"Would measure" occurs twice**, in Section 4.2 and in Section 5. The entry attributes it
   only to Section 5. Say which instance is being quoted.
4. **The instrument line needs a qualifier.** "Observed naturally emitted reasoning token
   length" is right for the **six thinking models**. It is **wrong for the non-thinking
   baseline** (total_output_tokens) and **wrong for the humans** (reaction time in seconds).
   Three instruments, one construct.
5. **Two provenance facts the entry's regime line omits**, both of which strengthen the kill:
   the data are a **reanalysis of the de Varda et al. (2025) release**, not the author's own
   runs, and **"Repeated stochastic samples from one model are unavailable."** Together these
   make the unperformedness structural rather than incidental.

**A caveat I will not dress up as a finding:** the entry read the **PDF**; I read **v5 of the
HTML**. Every quoted sentence matches, so I have no evidence of drift, but I cannot certify
which version the entry's two reads saw.

## ROUTES THAT FAILED

**None.** Both untried routes the entry named worked on the first attempt:

- https://arxiv.org/abs/2606.26502 - author block, title, dates, abstract. **One call.**
- https://arxiv.org/html/2606.26502v5 - full text, heading list, reference list. **Four calls**,
  each targeted at a different section to stay under the summariser's quotation cap.

I used **no WebSearch** - both documents were locatable directly from the citation, so no search
was warranted. Semantic Scholar and DBLP were **not needed**: the arXiv abstract page is the
paper's own front matter and is the right **kind** of document for an author line, whereas
Semantic Scholar and DBLP are **third-party indexes** - a short form someone else wrote. Having
the front matter, nominating an index would have been a guess dressed as corroboration.

Note for the ledger's route list: **arXiv front matter is a one-call fix.** Two full-text PDF
reads missed it because a PDF fetch through the summariser returns body prose and drops the
title block. **On arXiv, read /abs for front matter and /html or /pdf for body - they are two
reads, not one.**

## BEARING ON THE LEDGER ENTRY

**HOLD the rejection, and CORRECT the record's provenance rather than narrow its substance.**

- **The posing-source attack SURVIVES verification.** Both sentences the entry quotes as the
  posing sentences - "we propose a randomized reasoning-budget experiment" and "We would
  randomly assign runs of the same model-item pairs to different token budgets" - are
  **verbatim in Section 4.2 of the paper itself**, not from an adversary's summary. Given that
  this ledger has once quoted a posing sentence absent from its source, that is the result that
  matters: **this time the quotations are real, the grammar survives the cuts on both sides, and
  the scope-setting openers do not reverse them.**
- **The candidate's design is POSED IN PRINT AND UNPERFORMED.** Posed: Section 4.2, in the
  Discussion, with the estimand written out ("With B denoting the assigned token budget, the
  target is ..."). Unperformed: the paper reports **no** budget condition, cap or truncation
  anywhere, under a regime of nominally greedy decoding on **reanalysed released data** where
  **"Repeated stochastic samples from one model are unavailable."** The kill stands as an
  asked-but-still-open one: **asked** by Wang in print, **still open** because nobody ran it.
- **The routing-row attack COLLAPSES - in the row's favour.** The author objection was sound as
  an objection (the name was unread) but is **factually resolved**: **"Wang 2026" names the
  paper's sole author, Han-yu Wang.** Promote the row, with the citation upgraded to **Wang,
  Han-yu (2026), arXiv:2606.26502, "Humans Disengage, Reasoning Models Persist: Separating
  Difficulty Registration from Deliberation Allocation"** - sole author, no printed affiliation,
  v5 dated 2026-09-13 - and drop the "author not retrieved" flag.
- **Hu stays a cited work, never the author.** Carry it as **Hu, Y. (2026), PNAS
  123(17):e2604554123**, with the characterising sentence "Hu (2026) recommends manipulating
  trace length while monitoring accuracy." If Hu's own recommendation is ever load-bearing,
  **Hu must be opened** - I did not open it, and this paper's one-sentence gloss is a
  second-hand characterisation, not a read.
- **Convert nothing to a promotion condition on author grounds.** The one condition still worth
  attaching to the row is substantive, not bibliographic: **anyone claiming the budget
  experiment has been run must cite a source that prints an accuracy-versus-assigned-budget
  quantity with its denominator.** Wang (2026) prints none.
