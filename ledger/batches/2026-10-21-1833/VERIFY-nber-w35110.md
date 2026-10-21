# VERIFY — NBER Working Paper w35110

## CLAIM

As the ledger entry cites it: NBER working paper w35110 shows a "3.6-fold divergence", agreement
"as low as 57%", and one county-level estimate flipping. Sub-claims assigned to this check:

(a) identity and front matter as served;
(b) name the numbers and where — the 3.6-fold divergence, the 57% agreement, the flipping
    county-level estimate, each with location, units, denominator, and what quantity it is;
(c) what is compared — which models or snapshots, and whether any is a retired snapshot with a
    vendor-designated successor; quote the comparison design;
(d) whether it prints a share of published conclusions reversing;
(e) regime — task, corpus, unit of analysis, read level achieved.

## READ LEVEL

**Full text, summariser-mediated.** Both routes worked on the first try:

- https://www.nber.org/papers/w35110 — landing page with front matter and full abstract.
- https://www.nber.org/system/files/working_papers/w35110/w35110.pdf — full PDF text readable.

Important qualification on this read level, carried through every number below: I did not put my
own eyes on the PDF bytes. The PDF was read through the WebFetch summariser, which reported
section text, table cells and figure captions back to me. Front matter, the 3.6 and 57% figures
and their locations, and the Table 2 county coefficients are therefore **as the summariser served
them**. I independently re-derived two of them arithmetically (below). The summariser stated it
read figures only by caption, so no value in this note comes from a plotted curve.

The ledger entry's own note — "Read at abstract or summariser level only" — understates what is
available: the PDF is open and readable here, and the in-text locations and table values below
come from it, not from the abstract.

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter (a)

- **Working paper:** NBER Working Paper No. 35110. DOI 10.3386/w35110.
- **Title, exact:** "How (un)Stable Are LLM Occupational Exposure Scores? Evidence from
  Multi-Model Replication"
- **Authors, in order:** Michelle Yin (Northwestern University), Hoa Vu (Northwestern
  University), Claudia Persico (American University, IZA, NBER).
- **Date:** April 2026; the landing-page metadata carries a publication date of 27 April 2026.
- **JEL codes:** C81, J23, J24, O33.

Front matter taken from the paper's own title page and the NBER landing page, not from any short
form.

### Abstract — RECONSTRUCTION from 9 consecutive fragments

The summariser caps quotation at ~125 characters. The following is a **reconstruction assembled
from 9 ordered consecutive fragments** returned in one call from the NBER landing page, each
fragment opening with the last word of the previous one so every junction is verifiable by
overlap. Nothing here is completed from inference; the overlap words are printed once. The
summariser reported the abstract at 99 words, and the reconstruction below is 99 words, which is
the second check.

> A rapidly growing literature estimates AI's labor-market effects using large language models
> (LLMs) to self-assess occupational exposure. We demonstrate these measures are highly fragile.
> Replicating the dominant rubric with three frontier models on identical tasks, we find a
> 3.6-fold divergence in mean exposure with agreement as low as 57%. This measurement instability
> alters downstream empirical conclusions: in a difference-in-differences framework,
> individual-level coefficient magnitudes vary 2.4-fold across annotators, and county level
> estimates flip from a significant negative to an insignificant positive depending on annotators.
> We formalize this non-classical measurement error, highlighting the risks of treating evolving
> LLMs as static instruments.

Junction note: fragment 7 reads "across annotators, and county level estimates flip from a
significant negative to an insignificant" and fragment 8 opens "insignificant positive depending
on annotators." The abstract writes "county level" unhyphenated.

### (b) The numbers, named, with location and denominator

**The 3.6-fold divergence — MEASURED and PRINTED, as a unitless max/min ratio of annotator mean
exposure.**

- Printed in: the abstract ("a 3.6-fold divergence in mean exposure"); the Introduction ("despite
  a 3.6-fold difference in mean exposure"); Section III.A ("The 3.6-fold range between the highest
  and lowest estimates occurs on identical tasks"); Section IV twice (composite robustness, AEI
  benchmarking); **Table 2, Panel C** as a row reading "Max/Min ratio 3.6"; **Table A6, Panel C**
  likewise; and in the Table A3 notes as "the 3.6-fold E1 ratio."
- What quantity: the ratio of the **highest to the lowest annotator mean occupational E1
  exposure**. Unitless. The underlying means are shares of tasks classified E1, so each is bounded
  in [0,1].
- Component values as served: Claude 4.5 mean E1 = **0.51**; ChatGPT-5 = **0.30**; Gemini 2.5 =
  **0.14**; original GPT-4 (Eloundou et al. 2024) = **0.14**. The ratio's numerator is Claude's
  0.51 and its denominator is the 0.14 shared by Gemini 2.5 and the original GPT-4 arm.
- **Re-derived at the authors' own threshold:** 0.51 / 0.14 = 3.64, which rounds to the printed
  3.6. The ratio is a point statistic; the paper prints no interval on it, so there is no stated
  uncertainty to carry.

**The 57% agreement — MEASURED and PRINTED, as raw pairwise percent agreement, not kappa.**

- Printed in: the abstract ("agreement as low as 57%"); the Introduction ("pairwise agreement
  falls to 56.9%, with Cohen's kappa as low as 0.36"); Section III.A, where the Gemini-Claude pair
  "achieves 56.9% (κ = 0.36, fair)"; **Table 1**, row Gemini 2.5 vs Claude 4.5, Agree % = 56.9,
  κ = 0.36.
- What quantity: the share of tasks on which two annotators assign the **identical E0/E1/E2
  label**. Not a kappa, not an F1, not a correlation.
- Which pair: **Gemini 2.5 vs Claude 4.5** — the worst of the pairs, which is what "as low as"
  marks.
- Denominator: **18,797 O*NET tasks**, per pair, per the Table 1 notes.
- Range across pairs: Section III.B and Section IV give the full spread as "57 to 73% pairwise
  agreement," i.e. 57% is the floor of a 57-73% band. The abstract's "as low as" is accurate; a
  reader who takes 57% as the typical agreement would be wrong by up to 16 points.
- Re-derived: 56.9 rounds to 57. Consistent.

**The flipping county-level estimate — MEASURED and PRINTED, in Table 2 Panel B.**

- Location: **Table 2, Panel B**, the main difference-in-differences specification on the E1
  measure, N = 4,104,098 county-year-occupation cells; discussed in Section III.B and Section V.
- Coefficients as served, by annotator:
  - original GPT-4: **−0.0011** (SE 0.0057) — not significant
  - ChatGPT-5: **−0.0028** (SE 0.0048) — not significant
  - Gemini 2.5: **+0.0032** (SE 0.0089) — not significant, positive sign
  - Claude 4.5: **−0.0077** (SE 0.0032) — significant at p < 0.05
- So the abstract's "significant negative to an insignificant positive" is the **Claude-vs-Gemini
  contrast**, the two extreme arms of four.

**Two quantities in the abstract that the ledger's short form drops**, both printed:

- "individual-level coefficient magnitudes vary 2.4-fold across annotators" — individual-level
  DiD, N = 9,596,366 person-years, CPS 2015-2024, ages 16-64.
- Robustness: the max/min mean-exposure ratio "falls from 3.6 for E1 alone to **1.9** for E1 + E2
  (Table A3, Panel C)," and in that composite specification (Table A3, Panel B) **no county
  coefficient is starred** — GPT-4 −0.0013, ChatGPT-5 +0.0009, Gemini 2.5 +0.0008, Claude 4.5
  −0.0019. The headline instability is therefore specification-dependent by the paper's own
  robustness section, and the paper says so.

### (c) What is compared, and the comparison design

- **Four annotator arms**, three of them run by the authors and one taken from the literature:
  ChatGPT-5 (OpenAI), Gemini 2.5 (Google DeepMind), Claude 4.5 (Anthropic) — described as
  "frontier models available in early 2026" — plus the **original GPT-4 scores from Eloundou et
  al. (2024)**, labelled "ChatGPT-4 (original)" in Tables 2, A3, A4 and A5.
- **Design, as served (short quotes, the segment transcription having been refused — see ROUTES):**
  the authors replicate the Eloundou et al. rubric without modification, stating they did not
  alter "the rubric text, the task descriptions, or the category definitions"; temperature was set
  to zero; the comparison "occurs on identical tasks." The Eloundou GPT-4 scores "serve as the
  baseline comparison" because they are the treatment variable actually used in the downstream
  literature. The paper gives no detailed rationale for choosing these particular three 2026
  models.
- **Retired snapshot with a vendor-designated successor: yes, one arm.** The original GPT-4 arm is
  a 2023-era published score set re-used as a comparison arm in 2026, and Section III.A calls
  ChatGPT-5 GPT-4's "direct successor within OpenAI," with the Introduction, Section I and
  Section V calling the 2026 models "successor models." **But the paper never describes GPT-4 as
  retired or deprecated**, and it never says the model behind those scores is no longer available.
  The closest it comes is noting the scores are from Eloundou et al. (2024) and that the rubric was
  designed for GPT-4.
- **This does not drive the headline number.** The 3.6 denominator is 0.14, a value shared by
  Gemini 2.5 and the GPT-4 arm, so 0.51/0.14 = 3.64 holds among the three contemporaneous 2026
  models alone. Deleting the retired arm leaves the 3.6-fold figure intact. The 57% floor is also
  a Gemini-Claude pair, both contemporaneous. The retired-arm concern bites on the county-level
  presentation (where the GPT-4 arm is the baseline against which flips are narrated), not on the
  two headline numbers.
- **No snapshot identifiers anywhere.** "ChatGPT-5", "Gemini 2.5", "Claude 4.5" are product names,
  not API snapshot IDs; the summariser reports no snapshot IDs, release dates or API identifiers
  in the paper, only that temperature was zero. For a paper whose thesis is that evolving models
  make unstable instruments, this is a granularity gap in its own method section, not an absence
  of method.
- One dataset, not model, version is pinned: the AEI usage data is the "March 27, 2025 release"
  (Tables A1, A4, A5).

### (d) Share of published conclusions reversing — ABSENT

**The paper prints no such share, percentage, count or rate.** Stated plainly, since COULD NOT
FIND and DOES NOT PRINT are different findings and this is the latter: I searched the full text
for any reversal share and the summariser reports none.

What the paper does instead, in the five verbs:

- It **MEASURES** the instability of **its own** downstream estimates: one 2.4-fold
  individual-level coefficient range, one county-level sign-and-significance contrast, one 3.6-fold
  exposure ratio, one 57-73% agreement band.
- It **SPECULATES, unquantified**, that divergent findings already in the literature
  (Brynjolfsson, Chandar and Chen 2025 vs Johnston and Makridis 2025) "may reflect sensitivity to
  the exposure measure." That is a hedged conjecture about two named papers, carrying their
  citations, with no reversal rate attached.
- It **FORMALISES** the error structure ("non-classical measurement error") — a definition, not an
  evaluation.

Any "N% of published conclusions would flip" figure attributed to w35110 is not in w35110.

### (e) Regime

- **Document type:** a **primary study** — an original multi-model replication with its own
  annotation runs and its own difference-in-differences estimates. Not a review, protocol,
  guideline, editorial or column. The one arm it does not generate itself (original GPT-4) is
  attributed to Eloundou et al. (2024) in the tables.
- **Task:** classify each O*NET task description as E0 / E1 / E2 under the Eloundou et al. rubric,
  the model acting as self-assessor; then aggregate to occupational exposure scores; then use those
  scores as the treatment variable in DiD; then benchmark against AEI usage data.
- **Corpus:** approximately **18,797 O*NET 30.0 task descriptions**, each classified by each
  annotator. Occupation coverage varies by exhibit: 95 three-digit SOC occupations (Figures 3, A3),
  705 occupations in the AEI correlations and regressions (Tables A4, A5), SOC major groups
  (Figure A4).
- **Downstream data:** CPS 2015-2024, ages 16-64. Individual-level N = 9,596,366 person-years;
  county-level N = 4,104,098 county-year-occupation cells.
- **Units of analysis, three of them:** the **task** for classification and agreement; the
  **occupation** for exposure scores and the max/min ratio; the **individual** or the
  **county-year-occupation cell** for the DiD outcomes. The 57% lives at task level over 18,797
  tasks; the 3.6 lives at occupation level; the flip lives at county-year-occupation level. They
  are not three views of one measurement.
- **Endpoint / comparator / estimand of the DiD:** a labour-market outcome regressed on exposure
  interacted with post-period, the comparator being lower-exposure occupations; the estimand
  reported is a coefficient, re-estimated once per annotator. The paper's object of interest is not
  the effect of AI but **the across-annotator spread of that coefficient**.
- **What regime the claim sits in:** a claim that a widely used LLM-self-assessment exposure
  rubric is unstable across models, on O*NET tasks, in 2026, in one DiD specification on CPS data.
  Silent outside that: it is not evidence about LLM annotation instability in general, not about
  other exposure rubrics, not about non-O*NET corpora, and not about whether published AI
  labour-market conclusions are in fact wrong.

## DEFECTS FOUND

1. **"3.6-fold divergence" and "agreement as low as 57%" are verbatim and correctly located.**
   Both are the paper's own abstract wording, both re-derivable at the authors' own threshold
   (0.51/0.14 = 3.64; 56.9 → 57), both printed in tables with denominators. No misquotation.

2. **"One county-level estimate flipping" is a lossy short form of a four-arm contrast.** The
   paper does not show an estimate flipping; it shows four separately-annotated estimates of which
   **three of four are statistically indistinguishable from zero** and exactly one (Claude 4.5,
   −0.0077, p < 0.05) is significant. The "flip from a significant negative to an insignificant
   positive" is the Claude-vs-Gemini extreme pair. Describing this as an estimate flipping invites
   the reading that a conclusion reversed, when what varies is which arm clears significance. The
   abstract's own plural ("county level estimates flip ... depending on annotators") is more
   careful than the entry's singular.

3. **The qualifier that the headline ratio nearly halves under the composite measure is dropped.**
   Table A3 Panel C puts the ratio at **1.9** for E1 + E2, and in that panel no county coefficient
   is starred. A reader given "3.6-fold divergence" with no mention of 1.9 is given the paper's
   most adverse specification as if it were its only one. This is the paper's own robustness
   section, not a critic's reanalysis.

4. **57% is the floor of a 57-73% band, and the band is not in the short form.** "As low as"
   carries this correctly in the abstract; a citation that drops "as low as" misstates the typical
   agreement by up to 16 percentage points.

5. **One comparison arm is a two-year-old published score set with a vendor successor, and the
   paper does not label it as such.** The original GPT-4 arm is carried as a peer of three 2026
   models. The paper calls ChatGPT-5 GPT-4's "direct successor within OpenAI" but never says the
   GPT-4 scores are from a superseded or unavailable model. **This does not undermine the two
   headline numbers** — both survive on contemporaneous pairs — but it does shape the county-level
   narration, where GPT-4 is the baseline.

6. **No snapshot identifiers for any model.** Product names and temperature zero only. A
   granularity gap in the method of a paper arguing that evolving models cannot be treated as
   static instruments.

7. **PUBLISHED IS NOT PERFORMED, in the direction that matters here: the reversal share is simply
   not printed.** The paper formalises non-classical measurement error and speculates that two
   named divergent papers "may reflect sensitivity to the exposure measure," with no number. Any
   "share of published conclusions reversing" is someone else's inference, not this paper's
   arithmetic.

8. **Two internal inconsistencies reported by the summariser that I flag rather than endorse**,
   because they sit at table-cell grain and my read is summariser-mediated: Section II describes
   "4,825 county-year cells" while Table 2 reports N = 4,104,098 "county-year-occupation cells";
   Table 2 Panel C is captioned "mean composite exposure" while its row is E1 exposure; and Table
   A6 Panel C lists a "28-fold" individual-level range whose shown Panel A estimates the summariser
   says do not obviously support it. If any of these bears on a ledger entry, it needs a direct
   human read of the PDF tables, not this note.

9. **Nothing in the source flags the gap the ledger entry may be reaching for.** The paper notes
   the absence of stability checks in the exposure-measure literature; it does not note the absence
   of any reversal audit of published conclusions. Silence there is silence, not a flag.

## ROUTES THAT FAILED

- **No host was blocked and no route failed.** Both routes given in the entry resolved on the
  first attempt: the NBER landing page and the NBER-hosted PDF. PMC, Europe PMC, doi.org and
  Crossref were not needed and were not called.
- **One refusal, recorded as instructed rather than worked around.** On the second PDF call I
  asked for Sections III.A, III.B and II as ordered consecutive ~100-character segments. The
  summariser **refused the segment transcription** on quotation-length grounds ("I can't provide a
  verbatim, segment-by-segment transcription of these passages") and returned short quotes and
  paraphrase instead. I did not retry, rephrase or route around it. Consequence: the Section III.A
  and III.B sentences and the comparison-design passage in this note are **short served quotes plus
  the summariser's paraphrase, not reconstructions**, and are marked as such above. The same
  segment method **did** work on the landing page for the abstract, which is why the abstract above
  is a labelled 9-fragment reconstruction and the body passages are not.
- Call budget used: 1 search, 3 fetches, against a cap of 6 and 5.

## BEARING ON THE LEDGER ENTRY

The source is real, open, correctly identified, and says what the entry says it says — the two
headline numbers are verbatim, correctly located in named tables with named denominators, and
re-derivable at the authors' own rounding. The entry's weaknesses are compression, not fabrication.

Three corrections the entry should absorb. First, "one county-level estimate flipping" should
become what Table 2 Panel B actually shows: four annotator-specific estimates, three insignificant,
one significant negative, with the "flip" being the Claude-vs-Gemini contrast — a change in which
arm clears significance, not a conclusion reversing. Second, the 3.6-fold figure must travel with
the paper's own 1.9 under the E1+E2 composite, and with the fact that no county coefficient is
starred in that panel; and 57% must travel with "as low as," the band being 57-73%. Third, if the
entry rests on, or implies, a share of published conclusions that reverse, that number is **not in
this paper** — the paper formalises the error and speculates unquantified about two named papers,
and the arithmetic belongs to whoever performed it.

One regime boundary to respect: this is a single primary replication of **one** rubric on **one**
corpus (18,797 O*NET tasks) with **one** DiD specification on CPS 2015-2024, run on three
unversioned 2026 frontier models plus a 2023 published score set. It supports a claim about the
fragility of LLM-self-assessed occupational exposure scores. It is silent on LLM annotation
stability in general, on other rubrics, and on whether any published labour-market finding is in
fact wrong.
