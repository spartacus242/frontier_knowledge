# VERIFY — RLHF Book, rejection-sampling chapter: global top-K over a pooled set

Checker: fresh context. Date: 2026-10-21.
Source as the ENTRY cites it: the RLHF Book, "chapter 10", found and quoted by adversary 2 as
presenting global top-K selection over a pooled set.
Recorded string: `"Alternatively, we can select the top \(K\) prompt-completion pairs from the entire set"`

## CLAIM

Five sub-claims were handed over:

(a) The quoted string exists; report the whole passage around it, the sentence before and after,
    the chapter and section, and what the chapter is about.
(b) Is the rule genuinely CROSS-PROMPT (selecting from a pool spanning different prompts by
    comparing scores), or a within-prompt selection?
(c) Does the passage state a numeric cutoff or threshold? Does it say what kind of reward model
    scores the pairs, and in particular whether it is trained by a pairwise Bradley-Terry objective?
(d) Does the passage anywhere discuss comparability of scores across prompts, or recommend
    per-prompt normalisation?
(e) What KIND of document is this; who is the author; does the chapter cite a primary source
    for the practice?

## READ LEVEL

**Full text of the relevant chapter — but READER-MEDIATED, not raw.**

The chapter was read in full at `https://rlhfbook.com/c/10-rejection-sampling.html` over five
WebFetch calls. I never obtained the raw HTML or the raw Markdown source: curl is refused for this
host at this proxy (tool-scoped, see ROUTES THAT FAILED), and the GitHub repository is outside this
session's allowed repositories. **Every quotation below therefore passed through WebFetch's
summarising reader.** I flag this because it bears on how much weight each quotation can carry:

- The **target sentence** came back WHOLE, in a single segment, on two independent fetches with
  identical wording. It is 85 characters, well inside the reader's quotation cap. I treat it as
  **verbatim-confirmed**.
- The **body of the "Top Overall Pairs" subsection** is a **RECONSTRUCTION from 14 ordered
  consecutive segments** returned by one call, junction-checked for continuity. Prose is reliable;
  displayed equations (5) and (6) were *summarised rather than reproduced* by the reader and I mark
  them as such rather than invent their LaTeX.
- The reader's **metadata reporting was inconsistent across calls** and should not be trusted: on
  the first fetch of `/c/10-rejection-sampling.html` it asserted the slug was `09-rejection-sampling`;
  on a later fetch it said no chapter number is printed on the page at all; on a third it gave
  prev/next slugs that contradicted the URL I had requested. Chapter numbering below is therefore
  established from a site-scoped search, not from the reader's metadata. Its *body* quotations, by
  contrast, were stable across repeated independent calls.

NOT a "could not read" and not a "not found": the source is real, open, and was read.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) The string, and the passage around it

**The string exists, verbatim.** As served:

> "Alternatively, we can select the top \\(K\\) prompt-completion pairs from the entire set."

**Location.** Chapter titled **"Rejection Sampling"**, author Nathan Lambert. Nesting:
`Rejection Sampling` → `Training Process, Step by Step` → `Scoring Completions` →
`#### Top Overall Pairs`. The sentence is the first line of the `Top Overall Pairs` subsection,
which is the second of two selection methods offered; the first is `Top Per Prompt`.

The chapter's own section list, as served:
Rejection Sampling → Training Process, Step by Step (Generating Completions; Scoring Completions —
containing "Top Per Prompt", "Top Overall Pairs", "Selection Example", "Implementation Example";
Fine-Tuning) → Implementation Details → Related: Best-of-N Sampling → Suggested Experiments →
Bibliography.

**Chapter number — the ENTRY is off by one.** The ENTRY says "chapter 10". Under the book's
*current* numbering it is **chapter 9**: the canonical URL is `https://rlhfbook.com/c/09-rejection-sampling`,
the chapter's own navigation runs `← Previous: Direct-Alignment Algorithms` (`/c/08-direct-alignment`)
→ `Next: The Nature of Preferences` (`/c/10-preferences`), and the companion course page is titled
"Lecture 2: IFT, Reward Models, & Rejection Sampling" at `/teach/course/lec2-chap4-5-9/` while the
preferences lecture is `/teach/course/lec8-chap10-11-preferences/`. The path
`/c/10-rejection-sampling.html` nevertheless still serves the chapter, so the ENTRY's URL is live
and its content is right; only the ordinal is stale — consistent with the chapter reordering for
the July 2026 Manning edition. The page itself prints **no chapter number** in its heading.

**What the chapter is about.** Rejection sampling as a preference-finetuning method. Opening, as
served in consecutive segments (reconstruction, 3 fragments):

> "Rejection Sampling (RS) is one of the most widely used yet least documented methods in
> preference fine-tuning." / "Rejection sampling operates by curating new candidate completions,
> filtering them based on a trained reward model," / "and then fine-tuning the original model only
> on the top completions (the same loss function as instruction tuning)."

**Sentence before — and a cut worth noting.** The ENTRY-adjacent framing sentence is:

> "There are multiple methods to select the top completions to train on."

**This sentence is NOT contiguous with the target sentence.** It sits earlier under
`Scoring Completions`, *above* the `Top Per Prompt` subsection. Between it and the target sentence
lie the whole of `Top Per Prompt` — its prose plus displayed equations (5) and (6) — and the
`#### Top Overall Pairs` heading. The text immediately preceding the target sentence is the closing
equation of `Top Per Prompt` (the construction of `Y_chosen` from the per-row argmax indices), not
prose. Anyone presenting "There are multiple methods…" as *the sentence before* is cutting across a
subsection boundary and two equations.

**Sentence after:**

> "First, let's flatten our reward matrix \\(R\\) into a single vector:"

**The `Top Overall Pairs` subsection in full** — RECONSTRUCTION assembled from 14 ordered
consecutive segments, junction-checked; bracketed items are the reader's summary of displayed
equations it did not reproduce:

> "#### Top Overall Pairs" /
> "Alternatively, we can select the top \\(K\\) prompt-completion pairs from the entire set." /
> "First, let's flatten our reward matrix \\(R\\) into a single vector:" /
> "\\[R_{flat} = [r_{1,1}, r_{1,2}, ..., r_{1,N}, r_{2,1}, r_{2,2}, ..., r_{2,N}, ..., r_{M,1}, r_{M,2}, ..." /
> "..., r_{M,N}]\\qquad{(7)}\\]" /
> "This \\(R_{flat}\\) vector has length \\(M \\times N\\), where \\(M\\) is the number of prompts" /
> "and \\(N\\) is the number of completions per prompt." /
> "Now, we can define a selection function \\(S_K\\) that selects the indices of the K highest values in \\(R_{flat}\\):" /
> "\\[S_K(R_{flat}) = \\text{argsort}(R_{flat})[-K:]\\qquad{(8)}\\]" /
> "where \\(\\text{argsort}\\) returns the indices that would sort the array in ascending order," /
> "and we take the last \\(K\\) indices to get the \\(K\\) highest values." /
> "To get our selected completions, we need to map these flattened indices back to our original completion matrix \\(Y\\)." /
> "To recover the corresponding prompt-completion pair, you can map a zero-indexed flattened index \\(k\\) to \\((i,j)\\) via" /
> "\\(i = \\lfloor k / N \\rfloor + 1\\) and \\(j = (k \\bmod N) + 1\\)."

### (b) Cross-prompt or within-prompt? — **GENUINELY CROSS-PROMPT**

The rule pools across prompts and compares raw reward scores. Three independent pieces of the
served text establish this, and the contrast with the sibling subsection makes it explicit.

1. **The pooled object is defined as spanning prompts.** `R_flat` is the flattening of the reward
   matrix `R`, and the chapter states its shape in so many words: *"This \\(R_{flat}\\) vector has
   length \\(M \\times N\\), where \\(M\\) is the number of prompts"* / *"and \\(N\\) is the number
   of completions per prompt."* The selection runs over all `M × N` pairs at once.

2. **Selection is a single global sort with no per-prompt grouping.**
   `\[S_K(R_{flat}) = \text{argsort}(R_{flat})[-K:]\qquad{(8)}\]` — one argsort over the whole
   vector, last `K` indices. Nothing partitions by `i`.

3. **The worked example shows the pool crossing prompts, and shows a prompt winning twice.** From
   `Selection Example`, as served:

   > "Now, **best overall**. Let's highlight the top five overall completion pairs." /
   > "Now, we select the indices of the five highest values: \\[S_5(R_{flat}) = [8, 5, 14, 0, 11]\\qquad{(15)}\\]" /
   > "Mapping these back to our original matrix:" /
   > "- Index 8 → prompt 3, completion 1 (reward 0.9)" /
   > "- Index 5 → prompt 2, completion 2 (reward 0.8)" /
   > "- Index 14 → prompt 4, completion 3 (reward 0.8)" /
   > "- Index 0 → prompt 1, completion 1 (reward 0.7)" /
   > "- Index 11 → prompt 3, completion 4 (reward 0.7)"

   Four distinct prompts are drawn from; **prompt 3 contributes two completions and prompt 5
   contributes none.** That is the signature of cross-prompt pooling — unequal per-prompt
   representation decided by score magnitude. The chapter does not comment on this; it follows from
   the mapping it prints.

4. **The explicit contrast.** The sibling subsection `Top Per Prompt` is the within-prompt rule, and
   is described as such (reconstruction, 4 prose fragments; equations summarised by the reader):

   > "The first potential selection function takes the max reward per prompt." /
   > [Equation (5): argmax selection of one column per row of R] /
   > "This function \\(S\\) returns a vector of indices, where each index corresponds to the column with the maximum reward" /
   > "for each row in \\(R\\)." /
   > "We can then use these indices to select our chosen completions:" /
   > [Equation (6): Y_chosen built from those indices]

   So the book itself frames the two as alternatives: per-row argmax versus global argsort. The
   recorded string's "Alternatively" refers precisely to that contrast.

### (c) Numeric cutoff; kind of reward model; Bradley-Terry

**Numeric cutoff on reward: ABSENT.** No score threshold anywhere in the passage. `K` is a free
parameter and the rule is purely rank-based (`argsort(...)[-K:]`). The only numbers in the vicinity
are illustrative or configurational, not cutoffs:

- the worked example uses `K = 5` over `5` prompts × `4` completions = `20` pairs
  (`S_5(R_{flat}) = [8, 5, 14, 0, 11]`);
- `Implementation Details` recommends sampling temperature "between 0.7 and 1.0" and reports that
  successful implementations used "10 to 30 or more" completions per prompt;
- `Suggested Experiments` names config keys `num_completions_per_prompt` and `selection.top_k` and
  gives them **no values**.

None of these is a threshold on the reward; none is a stated `K` for practice.

**Kind of reward model: "a trained reward model", unspecified.** The chapter says the pairs are
scored by a trained reward model — `Scoring Completions` opens *"Now, we pass all of these
prompt-completion pairs through a reward model, to get a matrix of rewards."* / *"We'll represent
the rewards as a matrix \\(R\\):"* — with each entry `r(i,j) = R(y(i,j) | x_i)`, and defers the
reward model itself to the reward-modelling chapter.

**Bradley-Terry: ABSENT — stated plainly.** The strings "Bradley-Terry" and "Bradley Terry" do not
appear anywhere on the page; the bare word "Bradley" does not occur. **The passage does not say the
scoring model is trained by a pairwise Bradley-Terry objective.** It specifies no objective,
architecture or training procedure for the reward model at all. If the ledger entry needs the
pairwise-BT provenance of the scores, that provenance must come from the book's reward-modelling
chapter, not from here — and attributing it to this chapter would be attributing to this source
something it is silent on.

### (d) Comparability across prompts / per-prompt normalisation — **ABSENT**

**Plainly absent.** None of "normalize", "normalization", "normalise", "comparable",
"across prompts" or "calibrat" occurs anywhere on the page. The chapter nowhere asks whether reward
scores from different prompts are on a common scale, and nowhere recommends per-prompt
normalisation, standardisation, centring or ranking before pooling.

The global top-K rule therefore **relies on cross-prompt score comparability without naming the
assumption.** That is an unstated assumption in the source, not a claim by the source either way.

**Two traps to avoid here.** First, the nearest phrase match on the page is **"across all
prompts"**, and it is about something else entirely — it indexes the completion matrix:

> "each column \\(j\\) corresponds to the \\(j\\)-th sampled completion across all prompts."

That is matrix bookkeeping, not a statement about score comparability. Second, silence is not a
prohibition: the chapter not discussing normalisation is not the chapter rejecting it, and it is
not the chapter flagging a gap.

### (e) Kind of document; author; primary source for the practice

**Kind: a free online book, now also a conventionally published textbook, with the web version
maintained as a living document.** The site's own meta description calls it *"A free online book and
course."* The front page carries a changelog and an errata section comparing the web version with
the physical book, and says a second edition is under consideration — a living reference. The print,
ePub and liveBook editions were published by **Manning, July 2026**; the front page notes the book
"is heading to print, so expect fewer content changes going forward". Last site build reported:
14 October 2026. Copyright line: "© 2024-2026 Nathan Lambert". Companion resources include a
codebase, a model-completions library, and a course. Full title as printed in the page header:
*"RLHF Book: Reinforcement Learning from Human Feedback and LLM Post-Training"*.

So: **a textbook / pedagogical exposition**, not a primary study, not a protocol, not a guideline,
not an editorial. Its unit of exposition is a method description, not a measurement.

**Author: Nathan Lambert**, printed in the page header and footer.

**Primary sources: the chapter cites them for rejection sampling IN GENERAL, but NOT for the global
top-K rule.** The chapter's inline citations and where they attach, as served:

- [1] gilks1992adaptive — attached to "The name originates from computational statistics".
- [2] nakano2021webgpt — WebGPT, in the list of works using this baseline.
- [3] bai2022training — Anthropic's Helpful and Harmless agent, same list.
- [4] lightman2023let — OpenAI's process-reward-model paper, same list.
- [5] touvron2023llama — Llama 2 Chat, same list.
- [6] dong2023raft — RAFT, "applying rejection sampling to alignment in multiple modalities".
- [7] liu2023statistical — Statistical Rejection Sampling Optimization (RSO), relating rejection
  sampling to other preference-learning objectives.

Bibliography front matter, as printed:
[1] W. R. Gilks and P. Wild, "Adaptive rejection sampling for gibbs sampling," *Journal of the Royal
Statistical Society: Series C*, 1992. [2] R. Nakano *et al.*, "Webgpt: Browser-assisted
question-answering with human feedback," *arXiv:2112.09332*, 2021. [3] Y. Bai *et al.*, "Training a
helpful and harmless assistant with reinforcement learning from human feedback," *arXiv:2204.05862*,
2022. [4] H. Lightman *et al.*, "Let's verify step by step," *ICLR*, 2024. [5] H. Touvron *et al.*,
"Llama 2: Open foundation and fine-tuned chat models," *arXiv:2307.09288*, 2023. [6] H. Dong *et
al.*, "RAFT: Reward rAnked FineTuning for generative foundation model alignment," *TMLR*, 2023.
[7] T. Liu *et al.*, "Statistical rejection sampling improves preference optimization," *ICLR*, 2024.

**No citation is attached to `Top Overall Pairs`, to the target sentence, or to equations (7) or
(8).** The global top-K formulation is presented as the author's own exposition. RAFT [6] is the
obvious candidate ("Reward rAnked FineTuning"), but the chapter does not attach it there, and I am
not going to attach it on the chapter's behalf.

### Published is not performed — what this chapter DOES with the rule

The chapter **DEFINES** the global top-K rule (equations 7 and 8) and **ILLUSTRATES** it on
fabricated numbers (equation 15, `K = 5`). It does not **MEASURE** it:

- **No experiment, no result, no comparison.** The chapter never reports a number for how global
  top-K performs, and never compares it against `Top Per Prompt`. No win rate, no reward delta, no
  downstream evaluation — nothing of the kind is printed for either rule.
- **The code does not implement it.** The `Implementation Example` block does **not** perform
  top-K-over-all selection; it demonstrates `np.argsort` and recovering the original order. The
  closest line served is `sorted_indices = np.argsort(x)`. The top-K rule exists on the page only in
  the mathematics and in the hand-worked example.
- **No recommendation.** `Suggested Experiments` hands `selection.top_k` to the reader as a knob to
  try, with no value and no stated preference.

So if the ledger entry treats this source as evidence that global top-K **is used in practice**, or
as evidence that it **works**, the source does not carry that: it presents the rule as one of
"multiple methods", defined and illustrated, neither endorsed nor evaluated.

## REGIME

**The regime this source establishes in:** a textbook exposition of a *method*, at the grain of a
selection function over a reward matrix. Population: `M` prompts × `N` sampled completions from one
model. Unit of the rule: a single prompt-completion pair. Operating condition: offline batch
curation before a supervised fine-tune (the chapter says the fine-tune uses "the same loss function
as instruction tuning"). Instrument: an unspecified trained reward model emitting a scalar
`r(i,j) = R(y(i,j) | x_i)`. Threshold: none — a rank cut at `K`, `K` unspecified. Estimand: none;
no quantity is estimated and no outcome is measured.

**Does the claim handed to me sit inside that regime?** For sub-claims (a)–(e) as literally posed,
**yes, and comfortably.** The questions are all about what this exposition says, and the exposition
says it plainly:

- (b) the cross-prompt reading is inside the regime and is **positively established** by the
  definition of `R_flat`, by equation (8), and by the worked example's unequal per-prompt draws;
- (c) and (d) are **absences inside the regime** — things this method description simply does not
  specify. That is a reportable silence, not a negative finding.

**Where a ledger entry could step outside this regime.** Three ways, flagged because the regime is
narrower than the method's apparent generality:

1. **Definition is not endorsement.** The chapter offers the rule as an *alternative*; it does not
   claim practitioners use it, nor that it outperforms per-prompt selection. An entry reading this
   as "the standard practice is global top-K" leaves the regime.
2. **Definition is not evaluation.** The chapter proves nothing and measures nothing about the
   rule. An entry treating its presence here as evidence of a *consequence* — that global top-K
   skews the training set toward easy prompts, say, or degrades coverage — is reasoning about an
   effect the source neither states nor tests. The *mechanism* for such a skew is visible in the
   worked example (prompt 3 twice, prompt 5 never), but the source does not draw that inference and
   attaches no magnitude to it.
3. **Silence on the reward model's objective.** Nothing here licenses "Bradley-Terry" as a property
   of the scores in this passage.

## DEFECTS FOUND

1. **Chapter ordinal is wrong (minor, citation hygiene).** The ENTRY says "chapter 10". The chapter
   is **9** under current numbering: canonical slug `/c/09-rejection-sampling`, sitting between
   `08-direct-alignment` and `10-preferences`, confirmed by the course page `lec2-chap4-5-9`. The
   ENTRY's path `/c/10-rejection-sampling.html` does still serve the chapter, so no one is misled
   about *which* text; the ordinal is stale, most likely predating the Manning-edition reorder.
   Front-matter rule applies: take the ordinal from the book, not from a short form.

2. **The reported "sentence before" is non-contiguous — a cut-grammar defect.**
   "There are multiple methods to select the top completions to train on." does not abut the quoted
   sentence; the whole `Top Per Prompt` subsection and equations (5)–(6) intervene, and the
   immediately preceding content is an equation, not prose. Materially this cut **does not damage**
   the claim — if anything it preserves the "one of several" framing — but it must not be presented
   as adjacency.

3. **"Alternatively" is load-bearing and must travel with the quotation.** The recorded string as
   logged begins "Alternatively", which is good; but if it is ever trimmed, the trim changes the
   claim from "the book offers this as the second of two options" to "the book prescribes this".
   The recorded string also drops the closing period, i.e. it is cut mid-sentence-boundary; harmless
   here since nothing follows the period inside the sentence.

4. **The 85-character string ALONE does not establish the ledger's point; the support lies in the
   surrounding math.** Read unprimed, "the top \\(K\\) prompt-completion pairs from the entire set"
   is ambiguous — "the entire set" could be read as the entire set of completions *for a prompt*.
   What disambiguates it is `R_flat` having length `M × N` with `M` the number of prompts, equation
   (8)'s single global argsort, and the worked example drawing twice from prompt 3 and never from
   prompt 5. An entry resting on the quoted sentence alone is **under-evidenced even though its
   conclusion is correct**; it should cite equations (7), (8) and (15) alongside.

5. **Published-is-not-performed gap.** The chapter **DEFINES and ILLUSTRATES** global top-K; it does
   not **MEASURE** it, does not compare it with per-prompt selection, and its
   `Implementation Example` code does not implement it (only `np.argsort` and order recovery). No
   number is printed for the rule's effect, with any units or denominator. Any claim about
   consequences must not be sourced here.

6. **Granularity note on (c), not an absence.** The chapter does specify *that* a trained reward
   model scores the pairs, and defines `r(i,j) = R(y(i,j) | x_i)`; it stops short of the objective
   or architecture. That is a **granularity gap** relative to the Bradley-Terry question, not a
   total silence about the scoring instrument.

7. **Phrase-match trap present on the page.** "across all prompts" occurs and is about matrix column
   indexing, not score comparability. A keyword search for cross-prompt discussion will hit it
   falsely. Likewise, the chapter's silence on normalisation is not the chapter flagging a gap.

8. **Reader-mediation caveat on quotation fidelity.** No raw HTML or Markdown was obtainable, so all
   quotations are reader-mediated; the `Top Overall Pairs` body is a 14-fragment reconstruction, and
   equations (5) and (6) were summarised by the reader, not reproduced. The target sentence itself
   returned whole and identical on two independent calls and is verbatim-confirmed. The reader's
   *metadata* answers (slug, chapter number, navigation) were mutually inconsistent across calls and
   were not relied on.

## ROUTES THAT FAILED

1. `https://raw.githubusercontent.com/natolambert/rlhf-book/main/chapters/10-rejection-sampling.md`
   → **HTTP 404**; same for `09-rejection-sampling.md`. Path guess; no directory listing was
   obtainable to correct it. (raw.githubusercontent.com is the one host where raw curl bypasses the
   summariser, so this was the preferred route for verbatim text — it is a real loss.)
2. `mcp__github__get_file_contents` on `natolambert/rlhf-book` → **Access denied**: "repository
   ... is not configured for this session. Allowed repositories: spartacus242/frontier_knowledge."
   Session-scoped; `add_repo` not invoked, as the user has not asked for that repository to be added.
3. `curl https://api.github.com/repos/natolambert/rlhf-book/contents/chapters` → **HTTP 403**,
   "GitHub access to this repository is not enabled for this session."
4. `curl -sSL https://rlhfbook.com/c/10-rejection-sampling.html` → **curl (56) CONNECT tunnel failed,
   response 403**; proxy reported `rlhfbook.com:443 — connect_rejected`. **This is tool-scoped, not
   a host block** — WebFetch served the identical URL successfully five times, exactly as the access
   routing note predicted. Recorded, not worked around; the egress proxy was not probed beyond the
   message curl itself returned. Consequence: no raw HTML, hence the reader-mediation caveat above.
5. WebFetch of `https://rlhfbook.com/` for the table of contents → **served, but no ToC is printed
   on that page**; it yielded title, author, document kind and publication facts, but chapter
   numbering had to be established from a site-scoped WebSearch instead.

Budget: 5 WebFetch calls (cap 5), 1 WebSearch (cap 6). No refused search or fetch was retried or
circumvented. No personal identifier was placed in any URL, query string, header or form; Unpaywall
was not used.

## BEARING ON THE LEDGER ENTRY

**The core factual claim holds.** The RLHF Book's rejection-sampling chapter does present a global
top-K rule over a pool spanning different prompts, selected by comparing raw reward scores. The
recorded string is verbatim, correctly located, and correctly characterised as cross-prompt. The
cross-prompt reading is not a stretch: it is forced by `R_flat`'s stated length `M × N`, by equation
(8)'s single global argsort, and by the worked example drawing two completions from prompt 3 and
none from prompt 5.

**Three corrections the entry should absorb.** (i) The chapter is **9**, not 10, under current
numbering, though the entry's URL still resolves. (ii) The quoted sentence should be cited
**together with equations (7), (8) and (15)**, because the sentence alone is ambiguous about what
"the entire set" ranges over and the entry's conclusion currently rests on the weaker of the two
available supports. (iii) The "sentence before" is not adjacent and should not be presented as such.

**Two absences the entry may use, stated as absences and nothing more.** The passage specifies **no
numeric reward threshold** and **no reward-model objective** — "Bradley-Terry" appears nowhere on
the page — and it **nowhere discusses cross-prompt score comparability or recommends per-prompt
normalisation**. So the rule as written does assume comparability across prompts without naming the
assumption. But that is the source being *silent*, not the source *denying* the need; and the
chapter's silence is not the chapter identifying a gap. The phrase "across all prompts" on the page
is about matrix indexing and must not be mistaken for a comparability discussion.

**The limit on what this source can carry.** This is a **textbook exposition**, by Nathan Lambert,
published online as a living document and in print by Manning (July 2026). It **defines and
illustrates** the rule; it **does not measure, evaluate, recommend or implement** it, and it attaches
**no primary source** to this particular rule (its seven citations support rejection sampling
generally — WebGPT, Bai et al., Lightman et al., Llama 2, RAFT, RSO, and Gilks & Wild for the name).
The entry can cite it for **what a widely-read reference text presents as an option**. It cannot
cite it for prevalence in practice, for the rule's performance, or for any consequence of pooling
across prompts — including the coverage skew that the worked example happens to exhibit but that the
chapter never names, quantifies or discusses.
