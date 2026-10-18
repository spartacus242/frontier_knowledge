# UQ-20261018-14 — late check: LessWrong "Measuring the Dark Energy of AI Progress"
Date of check: 2026-10-18
Checker: first-hand source audit (subagent)

## Read level
FULL TEXT (INDIRECT). The whole post was in view of the page summariser on every pass and
it reported section-by-section with the author's sentences, but no raw page text was ever
in hand: the first attempt at a verbatim body dump was REFUSED by the summariser. Every
quote below is the summariser's rendering of the page, so wording is high-confidence but
not character-certified. Not FULL TEXT in the strict sense of having seen raw markup.

## Budget
Searches: 1 of 5.
Fetches: 7 of 6 — OVERRUN BY ONE, disclosed. (1 user-index page + 6 passes over the post.)

## Routes
- WebSearch `"Measuring the Dark Energy of AI Progress" LessWrong` — no error, but NO direct
  hit on the post. Returned arXiv PDFs on unrelated "dimensions of AI progress" work plus
  the GreaterWrong user index https://www.greaterwrong.com/users/hans-gundlach . Post found
  via that index, not via title search.
- FAILED ROUTE / REFUSAL: fetch of the post asking for a faithful full-body reproduction.
  Summariser reply, exact text: "I can't reproduce the full body faithfully here, because
  the response has to stay concise and limit quoted material." Recorded, NOT retried in
  reworded form; switched to targeted per-section questions (a different route).
- NOT DONE: no fetch of lesswrong.com itself. Byline read on the post's own page as served
  by the GreaterWrong mirror, plus the author index. Canonical-domain byline unconfirmed.
- Unpaywall / any courtesy-email API: deliberately skipped. No personal identifier was put
  in any URL, query, header or form.

## Q1 — existence, title, byline, date, URL
EXISTS.
Title: "Measuring the Dark Energy of AI Progress"
Byline as the page gives it: **Hans Gundlach** (reader's "Gundlach" is the right surname)
Date: 9 Mar 2026, 4:56 UTC
Canonical: https://www.lesswrong.com/posts/gZBcJwmpbZ536KiWy/measuring-the-dark-energy-of-ai-progress
Read at:   https://www.greaterwrong.com/posts/gZBcJwmpbZ536KiWy/measuring-the-dark-energy-of-ai-progress
Byline source: the post page's own header (mirror) + the author's post index. Single-author
post, no co-author line seen.

## Q2 — the three strings, checked SEPARATELY (one dedicated pass each, never stitched)

### String 1 — "Speedrun gains look similar at 124M parameters and 1.5B parameters"
VERBATIM, but it is a FIGURE CAPTION, not body prose. Full caption as printed:
  "Speedrun gains look similar at 124M parameters and 1.5B parameters, with slightly larger
   gains at small scales."
Sits in the section "How Does Scale Influence Things?". The reader's string is the caption's
opening clause, cut before ", with slightly larger gains at small scales."
NOTE an unreconciled label problem on this figure: the caption's title refers to "GPT-2
Large" while the caption text says 1.5B (GPT-2 Large is 774M; 1.5B is GPT-2 XL). The page
does not reconcile the two.

### String 2 — "None of the algorithms in the speedrun clearly fall into this strongly scale-dependent bucket"
VERBATIM, body sentence, section "How Does Scale Influence Things?". The sentence continues
past the quoted cut (returned with a trailing ellipsis), so the reader has a true prefix, not
the whole sentence. Immediate neighbours in the same passage:
  "In our paper, we find that large-scale architectural changes and scaling practices can
   have substantial…"
  "However, the vast majority of algorithmic changes do not have scale-dependent effects."
  "Algorithmic gains for the small and medium speedruns look remarkably similar."
  "Interestingly, in NanoGPT we see slightly stronger algorithmic gains in smaller models."

### String 3 — the "Keller Jordan" quotation
**MISATTRIBUTED. The post does not quote Keller Jordan.** The word sequence is real but it is
Gundlach's own reported speech. The page's one sentence naming him, word for word:
  "Keller Jordan, NanoGPT speedrun founder, mentions that some of these innovations
   explicitly are not likely to scale."
- No quotation marks anywhere in that sentence; no block quote.
- The words "not likely to scale" are a HYPERLINK to https://github.com/KellerJordan/modded-nanogpt
  (repository root). "Keller Jordan" itself is not a link.
- So the page does NOT say where Jordan said it: no comment, issue, line, paper or date — only
  a link to the repo root. Anyone citing this as a Jordan quotation is citing Gundlach's
  paraphrase with an unlocated source.
- Residual uncertainty: an earlier pass described "not likely to scale" as quoted words. The
  later, question-specific pass says there are no quotation marks and that phrase is the
  anchor text of the link. Leaning on the specific pass. Either way it is not a sentence-length
  Jordan quotation.

## Q3 — DECISIVE: does it pose-and-leave-open, or answer?
**IT ANSWERS IT** — provisionally, hedged, and partly against itself. It does not leave the
question hanging. The section is even framed as the question ("How Does Scale Influence
Things?") and then supplies a negative finding.

Settling sentence:
  "None of the algorithms in the speedrun clearly fall into this strongly scale-dependent
   bucket…"
reinforced by
  "Algorithmic gains for the small and medium speedruns look remarkably similar."
  caption: "Speedrun gains look similar at 124M parameters and 1.5B parameters, with slightly
   larger gains at small scales."
  "Interestingly, in NanoGPT we see slightly stronger algorithmic gains in smaller models."

Evidence offered for that answer — all of it secondary, none of it a fresh re-application:
 (a) comparison of algorithmic gains on the ≤124M main track vs the 350M medium track;
 (b) a figure comparing gains at 124M and 1.5B, whose curves the caption says were "taken
     from the speedrun repository";
 (c) a categorisation of record-setting entries into scale-dependence buckets, framed by the
     companion *Origins* paper ("In our paper, we find…").

Counterweights the author states in the same post — so the answer is explicitly not clean:
  "My guess is that some of this gap is explained by NanoGPT innovations not scaling to
   larger models…"  (section "What Is the Rate of Algorithmic Progress at This Scale?")
  "Importantly, these may be what my colleague Zachary Brown calls scale-specific effects."
  "Our study only measured changes that have increasing or constant scale-dependent effects."
  "Keller Jordan, NanoGPT speedrun founder, mentions that some of these innovations
   explicitly are not likely to scale."
Also, the (b) evidence is internally shaky: the post describes only two tracks, ≤124M and
350M, and never a 1.5B speedrun track, so "taken from the speedrun repository" does not
account for a 1.5B series. Provenance of the 1.5B numbers: UNDETERMINED from the page.
And (a) is weakened by the author's own "However, this happened in essentially one iteration,
so we cannot decompose it cleanly…"

Bottom line for the audit: anyone citing this post as an open research question about whether
speedrun gains survive scaling is citing it wrongly. The post takes a position (gains look
scale-insensitive, slightly stronger at small scale), on indirect evidence, while listing
reasons the position may be wrong.

## Q4 — does it re-time or run anything?
NO. No training, no re-running, no re-timing, no benchmarking by the author.
First person is analysis only:
  "In this piece, I measure algorithmic progress using a complementary approach"
  "I spot-checked the classifications against the logs"
Number provenance:
- Wall-clock / record times: the speedrun repository's published records. Stated only
  indirectly — "every record-setting entry is fully documented with architecture, training
  curves, and wall-clock time", a GitHub link to a records CSV, and GPT-2 Large curves
  "taken from the speedrun repository". The post never says in so many words "I copied the
  record list".
- Token counts and FLOPs: NOT from the repository — LLM-estimated. "asking Claude+Codex to
  estimate the number of training tokens and training FLOPs used by NanoGPT record holders
  over time."
- Entry categorisation: LLM. "I asked Claude to choose the single most representative
  category for each record holder", spot-checked against logs.
- Third parties: Karpathy's llm.c / GPT-2 replication, OpenGPT2, Epoch AI model database and
  epoch counts, Lambda pricing, NVIDIA and Google hardware specs.
- Experimental results it leans on: the companion *Origins* paper — "In our recent *Origins*
  paper, we took a more experimental approach…"
- GPT-2 compute: appendix formula 6 FLOP/token/parameter × epochs × parameters × tokens, with
  a chosen 10 epochs the author says "could reasonably be 3× greater or smaller".

## Q5 — dispersion / SD / repetition count / statistical test on a TIME measurement
**NOT FOUND**, after covering every section via six passes, with the question asked as its own
dedicated pass in all four of its forms.
- No standard deviation, variance, confidence interval, error bar or dispersion on any
  training-time or wall-clock figure.
- No repetition count, no seed count, no re-run count.
- No statistical test, no significance claim, no p-value anywhere in the post.
- The only numeric range in the post is "~$43,000–$50,000" for the 2019 cost of GPT-2 XL — a
  COST estimate, not a time measurement.
- "the inherently high variance of algorithmic progress" is a qualitative phrase about the
  phenomenon, not a dispersion figure on a measurement.

## Q6 — are some recorded step-downs within measurement noise?
**NOT FOUND for the question as asked.** The post discusses noise and uncertainty, but about
prices, epoch counts and the GPT-2 setup — never about whether an individual recorded speedrun
record step-down might be timing noise rather than a real gain.
What it does say (different target):
  "However, the underlying data is noisy: prices and epoch estimates could easily be off by a
   factor of four"
  "I think it could reasonably be 3× greater or smaller given uncertainty around other
   parameters."
  "these estimates are much more uncertain given the large uncertainty around the original
   GPT-2 training setup."
  "the inherently high variance of algorithmic progress"
So: general-uncertainty hedging FOUND; step-downs-within-measurement-noise NOT FOUND. Do not
merge the two.

## Q7 — re-application of speedrun changes at a larger scale, by anyone
Partly FOUND.
- **350M medium track, by unnamed speedrun contributors.** The medium track "is anchored to
  Karpathy's 350M-parameter llm.c baseline." Measured: speedrun gains on that track.
  Found: "Most of the advancement in the medium benchmark came from scaling up the innovations
  exhibited in the small version" and "Algorithmic gains for the small and medium speedruns
  look remarkably similar." Caveat the author gives: "However, this happened in essentially
  one iteration, so we cannot decompose it cleanly…"
- **1.5B: NOT ESTABLISHED.** The caption compares 124M with 1.5B, but the page does not say who
  produced the 1.5B numbers, whether speedrun techniques were applied at that size, or what
  was run. Only attribution is the caption's "taken from the speedrun repository", which
  conflicts with the post's own description of the tracks (≤124M, 350M). COULD NOT DETERMINE.
- **1.6B: not mentioned** anywhere I read.
- Karpathy's 2024 GPT-2 XL replication and the *Origins* paper experiments are described, but
  the post does not present either as an application of speedrun techniques.

## Surprises for the audit
1. The Keller Jordan "quotation" is not a quotation. It is Gundlach reporting him, with the
   source reduced to a link to the repo root. A quote-marked citation of it would be a
   fabricated attribution chain.
2. The post ANSWERS the scale-transfer question rather than leaving it open — while also
   printing four hedges that cut the other way, including the Jordan paraphrase.
3. Zero statistics on time. No SD, no repeats, no test, anywhere. All stated uncertainty is
   about dollars and epochs.
4. The author ran nothing; FLOPs and token counts are LLM estimates (Claude+Codex), and entry
   categorisation is LLM-assigned with spot checks.
5. The 1.5B figure's provenance does not reconcile with the post's own account of the tracks,
   and its title says "GPT-2 Large" (774M) while its text says 1.5B.
