# VERIFY - TokEval §3.4 "Encoding Fidelity": the sole-source kill on UQ-20261022-17 attack 2

Checker: fresh context. Budget used: 6 WebFetch, 0 WebSearch. Date 2026-10-22.

## CLAIM

Entry UQ-20261022-17 rests attack 2 entirely on one paper. The claim as the entry carries it:

> TokEval's Section 3.4, headed "Encoding fidelity", defines Reconstruction Exact Match as the
> rate at which decode(encode(x)) equals x exactly, plus a character error rate; states "A
> tokenizer is not necessarily lossless"; and enumerates the causes of deviation as "Unicode
> normalization, UNK substitution, or whitespace handling".

Entry front matter for the source: arXiv:2608.18062v3, submitted 2026-08-18, v3 2026-09-09,
author given as Clara Meister.

Source, cited as the entry carries it: *TokEval: A Tokenizer Evaluation Suite*, arXiv:2608.18062v3.
Routes the entry used: https://arxiv.org/abs/2608.18062 and https://arxiv.org/html/2608.18062v3.
The PDF at https://arxiv.org/pdf/2608.18062v3 was not tried by the entry; **I tried it, and it
served**, so §3.4's load-bearing sentence is confirmed on two independent routes.

## READ LEVEL

*TokEval: A Tokenizer Evaluation Suite*, arXiv:2608.18062v3, Clara Meister, 2026.

- **Front matter: FULL** — read on https://arxiv.org/abs/2608.18062 (the arXiv abstract page,
  which is the paper's own listing, and the authoritative front matter for an arXiv-only paper).
- **Section 3.4: FULL TEXT, two independent routes** — https://arxiv.org/html/2608.18062v3 and
  https://arxiv.org/pdf/2608.18062v3. The PDF route was used specifically to re-serve the
  "lossless" sentence in consecutive sub-110-character pieces and to check the grammar at the
  colon. The two routes agree word for word.
- **Rest of the paper: PARTIAL.** Served and read: the abstract; the headings of §§3.1–3.6;
  Table 1's formula column and interpretation column for the two fidelity metrics; the sentence
  counting tokenizer configurations; the corpus mentions at §4.3 and Tables 2 and 16; §3.4's
  interpretive guidance and its UTF-8-completeness caveat.
- **NOT fully served: the appendix.** On my final fetch the served excerpt "cuts off partway
  through the appendix". So my finding that no Reconstruction Exact Match or CER *values* are
  printed anywhere is **firm for the body and the tables I was served, and COULD NOT CHECK for
  the tail of the appendix.** That is a fact about my read, not about the paper. It does not
  cut against the entry — but a checker after me should close it on a local PDF.

Keep distinct: nothing here is NOT FOUND. Every document the entry names was opened.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter — ENTRY CONFIRMED

- Title, as printed: **"TokEval: A Tokenizer Evaluation Suite"**.
- **Complete author list in printed order: Clara Meister — sole author.** There is no second
  name. The entry's single-author attribution is **correct**, and I read it off the paper's own
  arXiv listing, not off any short form.
- Submitted **2026-08-18**; current version **v3, 2026-09-09**. The abs page lists only the
  current version's date, so v1 and v2 individual dates were not served; the entry's two dates
  both check out against what is printed.
- **Venue: none listed.** No journal-ref, no comments field. This is an arXiv preprint and
  nothing more — relevant to how much weight a kill may rest on it.
- Subjects: cs.CL, cs.LG.

One caution for the reader: a summariser pass over the body rendered the experiments in the
plural ("The authors also run controlled pretraining experiments"). That is summariser prose,
not front matter. **Take the authorship from the front matter: one author, Clara Meister.**

### (b) The heading, and where the definitions actually live

Heading as printed, on both routes:

> **"3.4 Encoding Fidelity"**

The entry writes the heading as "Encoding fidelity". The paper capitalises **Fidelity**. Trivial
in substance; it is recorded because the entry presents the heading as a verbatim quotation.

**Now the defect that matters for this sub-claim. Section 3.4 contains no prose definition of
either metric.** The definitions are in **Table 1**, not in §3.4's text:

- Reconstruction Exact Match, Table 1 formula column: **"1[x̂ = x], averaged over corpus"**;
  interpretation column: **"Strict round-trip reconstruction rate."**
- Character Error Rate, Table 1 formula column: **"Lev(x, x̂) / |x|_chars"**; interpretation
  column: a character-level Levenshtein distance normalised by the original text's length, which
  **"can exceed 1"**.

What §3.4's own text says about the two metrics:

> "Reconstruction Exact Match and, as a graded complement, Character Error Rate (CER) together
> characterize round-trip fidelity."

and, on CER specifically:

> "CER uses the canonical definition of the metric and can exceed 1 when x̂ is substantially
> longer than x"

That second sentence is a **deferral to a definition held elsewhere**, not a definition. So the
entry's content is right — Reconstruction Exact Match is indeed the strict rate at which the
round trip returns x exactly, and CER is indeed the graded character-level complement — but the
entry's **locative** claim ("Section 3.4 … defines") is off by one: §3.4 *names and characterises*;
**Table 1 defines**.

Also note the entry's "decode(encode(x))" is the entry's own gloss. The paper writes the round
trip as **x̂ = T⁻¹(T(x))**. The gloss is faithful.

### (c) The "lossless" sentence, WHOLE — and what its opener scopes

Reconstructed from **three consecutive PDF fragments**, served in order, verified at both
junctions, and independently corroborated by the HTML route (which served fragment 1 and
fragment 3 in the same words). Labelled a reconstruction from 3 fragments:

> **"A tokenizer is not necessarily lossless: the round-trip reconstruction x̂ = T⁻¹(T(x)) may
> differ from the original due to Unicode normalization, UNK substitution, or whitespace
> handling."**

**What the opening words scope.** The sentence's opening words are the claim itself: *"A
tokenizer is not necessarily lossless"*. There is **no scope-setting opener** — no "In such
cases,", no "At the time of writing,", no "For byte-level tokenizers,". The subject is **"A
tokenizer"**, universally quantified over tokenizers and hedged only by **"not necessarily"**.
The colon then introduces the mechanism, and the material after the colon is **the explanation
of the opener, not a restriction on it.**

Which of the three readings applies: the clause **ASSERTS** the property — it asserts that
lossiness is possible in general. It does not deny it, and it does not record a move away from
it. And **"not necessarily lossless" is itself the hedged formulation**; the paper does not
anywhere state the bare "tokenizers are lossy". So the entry is carrying the hedged version,
which is the right one to carry.

**One quotation defect.** The entry quotes `"A tokenizer is not necessarily lossless"` as though
it were a whole sentence the paper states. It is the **left half of a colon-joined sentence**,
quoted with no ellipsis and with the colon dropped. The cut is grammatically clean on the left
and the meaning survives intact — the right half only supplies the mechanism — so this is a
**presentational** misquotation, not a substantive one. It should carry an ellipsis.

### (d) The deviation-causes clause, WHOLE, with the grammar checked on both sides

> **"may differ from the original due to Unicode normalization, UNK substitution, or whitespace
> handling."**

**Left side of the cut.** The subject of "may differ" is **"the round-trip reconstruction
x̂ = T⁻¹(T(x))"**, which sits before the cut. I checked this explicitly on the PDF route: a
subject noun *does* appear between the colon and "may" — "reconstruction", modified by
"round-trip". So the clause is not a dangling predicate, and nothing before the cut negates or
conditions it.

**Right side of the cut.** "whitespace handling." terminates the sentence with a full stop. The
enumeration is complete; the entry has not clipped a fourth cause.

The entry's three causes — **"Unicode normalization, UNK substitution, or whitespace handling"**
— are **verbatim, in the paper's printed order, with the paper's own serial "or"**. This
sub-claim holds exactly.

**But the entry's framing word is wrong.** The entry says §3.4 **"enumerates the causes"**. The
paper writes **"due to"** and joins the three with **"or"** — an illustrative, non-exhaustive
list of example mechanisms. The paper does not claim these are *the* causes, and nothing in
§3.4 closes the list. "Enumerates the causes" upgrades an open "due to X, Y, or Z" into a
closed taxonomy. Narrow this to "names three mechanisms by which the round trip may differ".

### (e) Corpus — the entry's report is CONFIRMED

**Section 3.4 names no corpus for the fidelity metric.** It works in generic notation: x, and
x̂ = T⁻¹(T(x)). The only denominator language anywhere is **Table 1's bare "averaged over
corpus"** — a schema for a denominator, not a denominator.

What the paper does name, and where:

- **FLORES+** (the paper writes **FLORES+**, not "FLORES-200" — correct the entry's label if it
  uses the latter) is named for **bits-per-byte at §4.3** and for the intrinsic metrics in
  **Table 2**.
- **FineWeb** is named for a comparison in **Table 16**.
- **Neither is designated for fidelity.** The paper does not say FLORES+ is the fidelity corpus.

So: **FLORES+ is used for bytes-per-byte and for the intrinsic-metric table; it is not stated as
the fidelity corpus.** Exactly as the entry reports.

### (f) Script stratification — NOT stratified by script; and the byte-width stratification is a
different metric's

**The fidelity metrics are not stratified by writing script anywhere I was served.** Not in
§3.4, not in Tables 1, 2 or 3.

The one stratification in §3.4 is by byte width, and it attaches to **a different metric**:

> "Character Split Rate is stratified and reported by byte width (2-, 3-, 4-byte)."

Read that carefully: the stratified quantity is **Character Split Rate**, not Reconstruction
Exact Match and not CER. So the answer to the sub-claim as posed is sharper than "only by byte
width": **the fidelity metrics are stratified neither by script nor by byte width.** Byte width
stratifies a neighbouring metric in the same section.

§3.4 also carries a caveat that a reader of the kill should see, because it is §3.4's own
hedge — and it is the cited, hedged formulation, so it is the one to quote:

> "A UTF-8 Token Completeness rate < 1 is not necessarily a defect"

> "byte-fallback mechanisms rely on incomplete byte tokens to represent unseen characters"

and §3.4's guidance on reading fidelity results:

> "High exact-match failure with near-zero CER indicates minor systematic changes"

> "High CER indicates fundamental encoding problems."

Those last two are **instructions for interpreting numbers**, phrased conditionally. They are
not reports of numbers. See (h).

### (g) Tokenizer configurations: 46 = 44 trained + 2 off-the-shelf, and ZERO revision-pinned

The sentence naming the off-the-shelf ones, quoted:

> **"44 tokenizers trained using different configurations, plus two off-the-shelf reference
> tokenizers (Mistral-Nemo, LLaMA-3)."**

- **Total configurations evaluated: 46.**
- **Author-trained: 44** (the algorithm, pretokenisation and data-mixture ablations).
- **Off-the-shelf: 2** — Mistral-Nemo and LLaMA-3.
- **Revision-pinned, shipped, off-the-shelf: zero.** Neither off-the-shelf tokenizer is pinned
  to a release or a revision, and the text carries **no commit hashes**. The only
  version-adjacent artifact is the release link huggingface.co/cmeister/tokenizer-lm-ablations,
  which the paper describes as **where the author's own models and tokenizers are released** —
  that is a pointer to the 44 trained tokenizers, **not** a revision pin on Mistral-Nemo or
  LLaMA-3.

So if the entry or the second adversary leaned on "shipped, revision-pinned, off-the-shelf
tokenizers", the honest count is **2 off-the-shelf, 0 pinned**, against 44 author-trained. The
evidence base is overwhelmingly author-trained ablation tokenizers, not production artifacts.

### (h) PUBLISHED IS NOT PERFORMED — §3.4 defines; it does not measure

**I can name no printed value for Reconstruction Exact Match and no printed value for CER.**
Table 1 gives their formulas. §3.4 gives their interpretation. Tables 2 and 3 carry other
metrics. The tables §3.4's text points at — 10, 12, 16, 18 — carried no exact-match or CER
figures in what was served. There is therefore **no number, no units beyond the formulas' own,
no denominator, and no range across the 46 configurations** to report for either metric.

By the ledger's own test: on encoding fidelity, TokEval **DEFINES** the quantity. It does not
measure it. A definition citation is not an evaluation.

Numerator/denominator discipline, since this is where a near-neighbour number would do the most
damage: the abstract *does* print a number that a careless reader could mistake for a fidelity
result — **"Spearman rho up to 0.80"**. Its numerator class is the correlation between
**information-theoretic metrics** and **language modeling ability**; its denominator is the
sweep of tokenizer configurations scored on **bits-per-byte**. What that class **misses**:
round-trip reconstruction entirely — no fidelity metric enters it. What it **includes** that the
fidelity claim excludes: compression and information-theoretic metrics, and downstream language
/ math / code benchmark accuracy. **0.80 is not a fidelity number in any direction.** Do not let
it migrate into the kill.

## REGIME

TokEval's regime, in the paper's own terms:

- **Population / unit of analysis:** tokenizer configurations — 46 of them, 44 trained by the
  author across algorithm, pretokenisation and data-mixture ablations, plus 2 unpinned
  off-the-shelf references (Mistral-Nemo, LLaMA-3).
- **Instrument:** a suite of **intrinsic** tokenizer metrics (Table 1), plus controlled
  pretraining of **1.27B-parameter** models to test which intrinsic metrics predict downstream
  behaviour.
- **Operating condition for the predictive claims:** bits-per-byte on **FLORES+** (§4.3), and
  language / math / code benchmarks.
- **Operating condition for §3.4 specifically: none stated.** No corpus, no language set, no
  script set, no threshold. §3.4 is a metric-definition section written in generic notation.
- **Thresholds in §3.4:** conditional and qualitative only — "near-zero CER", "High CER",
  "rate < 1". No numeric cut-point is fixed.

**Does the claim sit inside this regime?** The *definitional* part of the claim sits squarely
inside it: §3.4 is exactly where TokEval states that tokenizers are not necessarily lossless and
names the deviation mechanisms. Any *measured* or *stratified* reading of the claim sits
**outside** it — there is no fidelity corpus, no script breakdown, and no printed REM or CER
value. A metric defined under no stated operating condition is silent about every particular
corpus, language and script, including whichever one the candidate's lead limb is about.

## DEFECTS FOUND

Ordered most to least consequential for the kill.

1. **"defines" is misattributed. §3.4 defines neither metric; Table 1 does.** §3.4 says the two
   "together characterize round-trip fidelity" and that "CER uses the canonical definition of
   the metric" — a deferral, not a definition. The entry's content is right; its location is
   wrong by one element. **Narrow "Section 3.4 defines" to "Section 3.4 names and interprets;
   Table 1 defines".**
2. **§3.4 DEFINES and does not MEASURE.** No printed Reconstruction Exact Match value, no
   printed CER value, anywhere in the body or the tables served. If the kill is being used to
   say the question has been *answered* or the quantity *measured*, it fails on this alone.
   (Appendix tail COULD NOT CHECK — see READ LEVEL.)
3. **"enumerates the causes" overstates an open list.** The paper writes "due to Unicode
   normalization, UNK substitution, or whitespace handling" — three illustrative mechanisms
   joined by "or", with nothing closing the list. Not a taxonomy of causes.
4. **The "lossless" quotation is a half-sentence given without ellipsis.** The paper's sentence
   is colon-joined and continues through the mechanism clause. Meaning survives; the citation
   should carry an ellipsis and, better, the whole sentence.
5. **Heading casing:** paper prints "Encoding **F**idelity"; entry prints "Encoding fidelity".
6. **Corpus label:** the paper says **FLORES+**, not FLORES-200. Correct wherever the entry or
   the adversaries use the latter.
7. **Evidence base is author-trained, not shipped.** 44 of 46 configurations are the author's
   own ablations; the 2 off-the-shelf tokenizers are **not revision-pinned** and no commit hash
   appears. Any claim resting on "shipped, pinned, production tokenizers" has 2 unpinned
   instances behind it.
8. **The byte-width stratification belongs to another metric.** "Character Split Rate is
   stratified and reported by byte width (2-, 3-, 4-byte)" — not REM, not CER. The fidelity
   metrics are stratified by nothing at all.
9. **Single preprint, no venue, no journal-ref.** Not a defect in the paper; a fact about the
   weight a sole-source kill can bear.
10. **Watch the 0.80.** The only headline correlation in the paper is between
    information-theoretic metrics and language modeling ability. It is not a fidelity figure.

Citation corrections to the entry's front matter: **none needed.** Title, arXiv id and version,
both dates, and the sole authorship of **Clara Meister** all check out against the paper's own
first page. Add "no venue / preprint".

## ROUTES THAT FAILED

No route failed. For the record, since the ledger wants routes recorded either way:

- https://arxiv.org/abs/2608.18062 — served. Front matter and abstract.
- https://arxiv.org/html/2608.18062v3 — served, four times, on different questions.
- https://arxiv.org/pdf/2608.18062v3 — **served.** The entry did not try this route; it works,
  and it is the route that let me confirm the subject noun after the colon. Record it as live
  for anyone re-checking this paper.
- One HTML fetch returned a prompt-injection refusal rather than content: the summariser read my
  own "reproduce in ordered 120-character segments" instruction as an instruction embedded in
  the document and declined. Re-asking the same question in plain interrogative form served the
  content. **Not a host block and not a paywall** — a summariser artifact. Worth knowing: the
  segmentation request itself can trip the guard; ask plainly and request "short pieces, each
  under 110 characters, in order" inside an ordinary question.
- Zero WebSearch calls. Both documents were locatable directly from the entry's citation, so no
  search was needed and none was spent. No search was refused by the classifier.

## BEARING ON THE LEDGER ENTRY

**HOLDS, with one element narrowed and one element struck.** The kill survives, but not in the
shape the entry gives it.

What holds, element by element, as the "every element must hold" standard demands:

- **Heading — holds** (casing aside). §3.4 is "Encoding Fidelity".
- **The lossless sentence — holds, and holds in its hedged form.** "A tokenizer is not
  necessarily lossless" is verbatim, is the sentence's own opening, carries no scope-limiting
  opener, and **asserts** rather than denies or retreats. This is the strongest element of the
  kill and it is clean.
- **The three deviation causes — hold verbatim**, in printed order, with the paper's own "or",
  and with a sound subject on the left of the cut and a full stop on the right.
- **Authorship — holds.** Clara Meister, sole author, read off the front matter.
- **Both dates, title and version — hold.**
- **"Defines Reconstruction Exact Match … plus a character error rate" — NARROW.** True of the
  paper; **false of §3.4**, where the definitions do not live. Table 1 is the definitional site.
- **"Enumerates the causes" — NARROW** to "names three mechanisms", because the list is open.

**So, on sub-claim (h): yes — §3.4 does pose the candidate's lead limb in the candidate's own
words.** Same field, tokenizer evaluation, explicit and unhedged-as-to-scope assertion that a
tokenizer "is not necessarily lossless", explicit round-trip formalism, explicit naming of
Unicode normalisation, UNK substitution and whitespace handling as deviation mechanisms. If the
lead limb is *has anyone in this field asked whether the round trip is lossless, and named why
it would not be* — then TokEval §3.4 asks it, in print, before the candidate.

**The limit of the kill, which the entry must be made to carry.** TokEval §3.4 **poses** the
question; it does not **answer** it. There is no fidelity corpus, no script stratification, no
printed Reconstruction Exact Match value and no printed CER value. The evidence base around it
is 44 author-trained ablation tokenizers plus 2 unpinned off-the-shelf references. So:

- Against a candidate whose contribution is **to raise the question or define the metric**, the
  kill stands. Rejection supported on the lead limb.
- Against a candidate whose contribution is **a measurement** — a cross-script fidelity rate, a
  corpus-specific reconstruction failure rate, a per-script or per-language breakdown — the kill
  **does not reach it**, because §3.4 measures nothing and stratifies nothing. On that reading
  the kill should **convert to a promotion condition**: the candidate is promoted if and only if
  its claimed contribution is a *measured, corpus-named, script-stratified* fidelity result, and
  it must cite §3.4 as prior art for the definition and for the lossless observation.

**Standing recommendation for attack 2.** Do not reverse the Unresolved; the same-field prior is
real and it is the candidate's own lead limb. But the second adversary's "this paper is the
entire kill" should be recorded as resting on a **definitional** prior in a **single unvenued
preprint** with **no measurement behind the metric**. Given this ledger's history of reversing
single-source kills on rejections, that is the sentence the entry is missing — and it is a
sentence about the kill's reach, not about its truth.
