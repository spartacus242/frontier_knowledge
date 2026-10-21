# VERIFY — Chen, Zaharia & Zou, "How Is ChatGPT's Behavior Changing over Time?"

Checker run: fresh context, 2026-10-21. Query budget used: 3 searches, 5 fetches (cap 6 / 5).

## CLAIM

The ledger entry cites Chen, Zaharia & Zou, arXiv:2307.09009, published in *Harvard Data Science
Review*, and **the entire rejection of limb (a) rests on this paper**. Six sub-claims were handed to
me: (a) front matter; (b) six recorded percentages with their printed locations; (c) **the decisive
one** — a repeat-run control of 2.8% (March twice) and 7.0% (June twice) on OpinionQA, said to
defeat the candidate's claim that no source supplies a predecessor repeat-run band; (d) whether the
compared pair is a predecessor and its vendor-designated successor after retirement, or two dated
snapshots of one live model name; (e) whether the paper measures a share of published studies whose
conclusions reverse on a later snapshot; (f) regime.

## READ LEVEL

**FULL TEXT, both versions, through the WebFetch summariser**, with one stated gap:

- arXiv **v3** PDF (`https://arxiv.org/pdf/2307.09009`) — read.
- arXiv abstract/front-matter page (`https://arxiv.org/abs/2307.09009`) — read.
- **HDSR published version** (`https://hdsr.mitpress.mit.edu/pub/y95zitmz`), release of 12 Mar 2024
  — read. This is the version most of the verbatim quotation below comes from.

**Gap, stated rather than papered over:** *figure-internal numeric labels are not readable through
either route.* Values plotted inside Figures 8 and 10 do not survive PDF→markdown conversion, and
the Figure 10 caption prints no numbers. So every figure-sourced number in the ledger's list is
unverified-from-the-figure here, and I say so item by item below. This is COULD NOT READ **at the
figure-data grain only** — not NOT FOUND, and not a failure to read the paper.

Source type: **primary empirical study** — a longitudinal monitoring study the authors ran
themselves. Not a review, not a protocol, not a guideline, not a column. The HDSR version is the
peer-reviewed journal article and carries a "Media Summary" the arXiv version lacks. No finding
below is attributed by the paper to anyone else.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter, as each page serves it

**arXiv page, as served:**

- Title, in the page's own lowercase styling: *How is ChatGPT's behavior changing over time?*
- Authors in printed order: **Lingjiao Chen, Matei Zaharia, James Zou**
- Subjects: cs.CL, cs.AI, cs.LG. No Comments field.
- Submission history as served: "Submitted: 2023-07-18"; "This version: v3, 2023-10-31". The page as
  served **does not enumerate v1 and v2 and gives no file sizes**.
- **No journal reference and no DOI field is shown.** The arXiv record as served does not itself
  point at the HDSR publication.

**HDSR page, as served:**

- Title in title case with a curly apostrophe: *How Is ChatGPT's Behavior Changing Over Time?*
- Authors in printed order: **Lingjiao Chen, Matei Zaharia, James Zou**
- "Published on **Mar 12, 2024**"
- "©2024 Lingjiao Chen, Matei Zaharia, and James Zou. This article is licensed under a Creative
  Commons Attribution (CC BY 4.0) International license, except where otherwise indicated..."
- **No journal name, no volume, no issue, no article DOI, and no author affiliations are shown on
  the page.** Per rule (7) I did not import a volume/issue/DOI from a third-party short form; a
  search surfaced a DOAJ record filed under an HDSR *May 2024* issue, which **disagrees with the
  page's own "Mar 12, 2024"**, and I am not resolving that from secondary data.

**Do the two versions differ in content?** Yes, modestly, and I read both. The HDSR version's served
structure is: Abstract; **Media Summary**; 1 Introduction; 2 Overview (2.1 LLM Services, 2.2
Evaluation Tasks, 2.3 Metrics); 3 Monitoring Reveals Substantial LLM Drifts (3.1–3.9); 4 Is GPT-4's
Instruction Following Getting Worse Over Time? (4.1, 4.2); 5 Conclusions and Future Work; Disclosure
Statement; References; Appendices A–C. Figures 1–14 plus B.1 and C.1; Tables 1–4. The arXiv v3
section and figure numbering I encountered (3.2, 3.4, 3.6, 3.7; Figures 5(a), 8(a), 10(a), 11(a))
**is consistent with this**, so the two are aligned on everything load-bearing below. The visible
differences are the added Media Summary, the 2024 date, and the title's capitalisation.

### (b) The numbers — what the paper prints, and where

Taking each as handed, naming the number and saying what the paper does with it.

**1. USMLE mismatch — CONFIRMED as recorded.** Section 3.7, body text, verbatim as served:

> "the mismatch rate was 27.9% for GPT-3.5"

and from the arXiv v3 read, the GPT-4 counterpart in the same section:

> "12.2% answers in March were different from their counterparts in June for GPT-4"

So **27.9% = GPT-3.5, 12.2% = GPT-4**, exactly as the ledger recorded, on **March 2023 vs June 2023**
of the same model name. The ledger says "text and Figure 11"; the text figures are confirmed, the
Figure 11(a) rendering is not readable here.

**2. OpinionQA — CONFIRMED as recorded, including the 27 / 27.5 split.** Section 3.4 body text,
verbatim:

> "Yet, 27% of its opinions changed from March to June."

The 27.5% is a **figure label** (Figure 8(a)), reported to me by the summariser but not independently
readable. So the paper's *sentence* prints 27%; the finer 27.5% exists only as a figure value. Anyone
citing 27.5% is citing a figure, not a sentence. Both are **GPT-3.5**, March vs June.

**3. Happy numbers — as recorded, from the arXiv v3 read.** Section 3.2, body text: 67.6% of GPT-4's
final answers changed; 77.2% for GPT-3.5. March vs June. Measured as *mismatch in final answers*,
not as accuracy.

**4. LangChain HotpotQA — THIS ONE DOES NOT CHECK OUT AS RECORDED.** What the paper *prints in text*
is a **bound**, Section 3.6, verbatim as served:

> "more than 80% of final answers between March and June did not match for both models."

The strings **"85.2%" and "97.8%" are not present** in the served text of either version. Figure 10's
caption prints no numbers, and the figure's plotted values are not recoverable through either route.
The ledger's own description — "an *unlabeled* Figure 10 giving 85.2% and 97.8%" — concedes the
figure carries no model labels. So for LangChain the paper **BOUNDS** the mismatch in text (">80%,
both models") and does not print per-model values in a sentence. Reporting 85.2% and 97.8% as the
paper's per-model numbers attributes to the text a precision and an assignment the text does not
carry. See DEFECTS.

### (c) THE DECISIVE ONE — the repeat-run control

**It is there, it is a same-snapshot-queried-twice measurement, and the paper prints both numbers.**
Two independent standalone verbatim clauses, each returned whole and under the quotation cap, from
Section 3.4 ("OpinionQA Survey: Lower Response Rate"), body text, **not a footnote**, nearest figure
Figure 8:

> "running GPT-3.5 March twice yields a disagreement rate of 2.8%"

> "running GPT-3.5 June twice yields disagreement rate of 7.0%"

These are **not a reconstruction** — each came back whole from a single request, so no assembly and
no inference was involved. **Flagged, not harmonised:** the two clauses as served are grammatically
inconsistent — the March one has "a disagreement rate", the June one has "disagreement rate" with no
article. The arXiv v3 read returned *both* without "a". I cannot settle from here whether the
missing article is the paper's own or an artefact of one summariser pass, so I reproduce both as
served and leave the discrepancy visible.

The passage's immediate predecessor sentence, as served: GPT-3.5 answered almost all questions in
both March and June, "Yet, 27% of its opinions changed from March to June." The 2.8% / 7.0% figures
are placed there expressly as a randomness baseline against which to read the 27% — the authors
attribute them to "LLM's stochasticity".

**What was held fixed between the two runs:**

- **The snapshot** — March twice for 2.8%, June twice for 7.0%. Same snapshot, not two snapshots.
- **Temperature**, set globally in Section 2.1, verbatim: "We set the temperature to be 0.1 to reduce
  output randomness". So **0.1, not 0 and not the API default** — randomness deliberately suppressed.
- **System prompt** left at its default.
- The OpinionQA prompt is implied by the section but is not restated for the repeat runs.

**What the paper does NOT print alongside them:** the **number of repeat runs**, any **confidence
interval or spread**, any **sample size specific to the repeat comparison**, any repeat-run figure
for **GPT-4**, and any repeat-run figure for **any task other than OpinionQA**. Both are bare point
estimates.

### (d) THE COMPARATOR QUESTION

Unambiguous, and it is the finding that matters most. Section 2.1 (LLM Services), verbatim as served,
describing what is monitored:

> "one snapshotted in March 2023 and another in June 2023."

These are **two dated snapshots of the same model name, both reachable through the OpenAI API at the
time of querying** — GPT-3.5 March vs GPT-3.5 June, and GPT-4 March vs GPT-4 June. The paper
**never** compares GPT-3.5 against GPT-4 as predecessor against successor, and it **never** involves
a retirement: nothing had been retired, which is exactly why both snapshots could be queried. The
article prints **no API model identifier strings** — "gpt-4-0314", "gpt-3.5-turbo-0301",
"gpt-4-0613", "gpt-3.5-turbo-0613" are **not present** in the served text of either version. Anyone
who has attached those identifiers to this paper supplied them from outside it.

### (e) Does the paper measure whether a PUBLISHED STUDY'S CONCLUSION reverses?

**Plain absence, confirmed independently on both versions.** The paper nowhere measures a share of
published findings that flip when re-run on a later snapshot, and prints no such fraction and no
denominator. Its unit of analysis is the **prompt/item**, never the **published study**. The nearest
thing is background remarks that earlier work reported small shifts or did not systematically monitor
drift — remarks *about* literature, not a *test of* literature. Section 2.3 (Metrics) does define
"mismatch": how often, for the same prompt, the extracted answers from two versions of the same LLM
service do not match. That is a **definition at the item grain**; it is not an evaluation at the
conclusion grain.

### (f) REGIME, as the paper sets it

Tasks and item counts, as served — the abstract and introduction say **seven** tasks, while Section
2.2 splits math into two problem types, giving **eight** evaluation sets:

| Task | Items as served |
|---|---|
| Math I (prime vs. composite) | 1,000 questions |
| Math II (happy numbers) | 500 queries |
| Sensitive questions | 100 queries |
| OpinionQA | 1,506 questions |
| LangChain HotpotQA agent | n = 7,405 (from the Figure 2 caption) |
| Code generation | 50 LeetCode problems |
| USMLE | n = 340 (from the Figure 2 caption) |
| Visual reasoning (ARC) | 467 samples |

Caveat on this table: the HotpotQA and USMLE counts were served from a **figure caption**, not from
Section 2.2 body text, and I could not cross-check them against the body text through this route.

Dates: **March 2023 and June 2023** snapshots, queried via the OpenAI API, temperature 0.1, default
system prompt.

Scope caveat — and note its **location**. There is **no dedicated limitations section**, and
**Section 5 (Conclusions and Future Work) contains no scope-limiting sentence**. The caveat sits in
**Section 2.2 (Evaluation Tasks)**, verbatim as served:

> "the specific benchmark data sets used here do not comprehensively cover the complex behaviors of ChatGPT"

with the stated aim, from the arXiv read, being "not to provide a holistic assessment but to
demonstrate that substantial ChatGPT performance drift exists on simple tasks", plus an intention to
add benchmarks in future evaluations.

**What the paper measures — its own unit, endpoint, comparator, estimand.** Unit of analysis: the
**individual prompt/item**. Endpoint: **mismatch** — the share of items whose extracted answer
differs between the two things compared. Comparator: **two dated snapshots of one model name**.
Estimand: a **within-model-name drift rate over a three-month window on fixed benchmark items at
temperature 0.1**. Accuracy drift (e.g. GPT-4 prime-identification 84% → 51%) is reported alongside
but is a different endpoint from mismatch.

## DEFECTS FOUND

**D1 — LangChain 85.2% / 97.8%: not in the text, and the figure does not assign them.** The paper
prints a **bound** (">80% ... for both models"), not two per-model values. The two decimal figures
are absent from the served text of both versions, Figure 10's caption prints no numbers, and the
ledger's own note concedes the figure is unlabeled. This is the *published-is-not-performed* failure
in its BOUNDS-not-PRINTS form: the paper bounds the quantity in a sentence and leaves the per-model
values to an unlabeled plot. If the ledger needs per-model LangChain mismatch rates, this paper does
not print them as such. Status: **COULD NOT VERIFY**, with the text affirmatively printing something
weaker and differently shaped.

**D2 — OpinionQA 27 vs 27.5 is a sentence-versus-figure split, not two statements.** The paper's
*sentence* says 27%. The 27.5% lives only as a figure value. The ledger records both, which is
accurate, but a citation of 27.5% is a citation of a figure label and should be labelled as such.

**D3 — THE REGIME MISMATCH, and it goes to the heart of the rejection of limb (a).** The repeat-run
numbers are real and printed, so the ledger is correct that *a* repeat-run number exists. But the
regime the paper proves them in is not the regime limb (a) concerns, on four counts:

1. **Not a predecessor-after-retirement comparison at all.** The paper compares "one snapshotted in
   March 2023 and another in June 2023" of the **same model name**, both live and queryable. There is
   no predecessor, no vendor-designated successor, and no retirement anywhere in this design. On the
   question of how a **retired predecessor** behaves relative to its designated successor, this paper
   is **silent** — not supportive, not contradictory, silent.
2. **Not a band.** 2.8% and 7.0% are **two bare point estimates** with no stated number of repeats,
   no confidence interval, no spread, no repeat-specific sample size. A "repeat-run **band**" implies
   an interval with stated uncertainty. The paper prints two numbers. Per rule (8), there is no
   stated uncertainty to carry, because none is printed.
3. **One model, one task.** GPT-3.5 only; OpinionQA only. **No** repeat-run figure is printed for
   GPT-4, and **none** for the other seven evaluation sets. Carrying 2.8%/7.0% across tasks, or onto
   GPT-4, extends them past what the paper measured.
4. **A suppressed-randomness operating point, not an operating value.** "We set the temperature to be
   0.1 to reduce output randomness." The repeat-run spread is therefore measured under deliberate
   low-temperature suppression — a **floor** on run-to-run disagreement under a chosen setting, not a
   band under normal operating conditions. This is precisely the regime error the brief flags: a
   value logged under a deliberate test setting cited as an operating value.

**D4 — (e) is a clean absence and should be recorded as one.** No share of published conclusions that
reverse, no denominator, in either version. The unit of analysis is the item, never the study. A
definition of "mismatch" in Section 2.3 is a definition, not an evaluation of published findings.

**D5 — Front-matter and version hygiene.** The entry's citation fuses two front matters that neither
page fuses itself: the arXiv record as served carries **no journal-ref and no DOI** pointing at HDSR,
and the HDSR page as served carries **no volume, issue, DOI or affiliations**. Year differs by
version (arXiv v3, 31 Oct 2023; HDSR, 12 Mar 2024), as does the title's capitalisation. A secondary
record (DOAJ) files it under an HDSR **May 2024** issue, contradicting the page's own March date; I
did not adopt either from secondary data.

**D6 — Scope caveat is misplaced if cited to the conclusions.** The only scope-limiting sentence is
in **Section 2.2**, not Section 5. Section 5 contains none.

**D7 — Grammar discrepancy left visible.** "yields a disagreement rate of 2.8%" (HDSR pass) against
"yields disagreement rate of 7.0%" (HDSR pass) and both without "a" (arXiv pass). Reproduced as
served; not silently corrected.

## ROUTES THAT FAILED

1. `curl https://arxiv.org/abs/2307.09009` — **curl: (56) CONNECT tunnel failed, response 403**;
   proxy reported `arxiv.org:443 — connect_rejected`. **Tool-scoped, not a host block**: WebFetch
   read the identical URL successfully moments later. Recorded per the routing note; the proxy was
   not probed further.
2. `curl https://arxiv.org/pdf/2307.09009` — same 403, same conclusion.
3. **Summariser REFUSAL on the overlapping-fragment reconstruction.** Asked for the full 2.8%/7.0%
   passage as numbered consecutive fragments with junction overlaps, the HDSR fetch declined, stating
   that reassembling overlapping pieces would reproduce the full passage around the ~125-character
   quotation cap. Per instruction I **recorded the refusal and did not work around it**. Instead I
   requested several *distinct standalone short* quotations, each whole and inside the cap — a
   different request, not a circumvention — and that succeeded. Consequence: the two decisive clauses
   are **whole single-return verbatim quotations, not reconstructions**, but I do **not** have the
   surrounding sentence word-for-word, so I cannot report the grammar on both sides of the cut for
   the full passage. That limit is why D7 is left open rather than resolved.
4. **Figure-internal values unreadable.** Figures 8(a) and 10(a) plotted labels do not survive
   PDF→markdown through either arXiv or HDSR. This is what leaves D1 at COULD NOT VERIFY and leaves
   27.5% / 85.2% / 97.8% / Figure 11(a) uncorroborated at the figure grain.
5. Not attempted, deliberately: PMC and Europe PMC (not applicable to an arXiv/HDSR item and
   hard-blocked here); **Unpaywall, skipped entirely** rather than supply a contact address; no
   personal identifier was placed in any URL, query string, header or form.

## BEARING ON THE LEDGER ENTRY

The source is **real, open, read in full in both versions, and correctly attributed** to Chen,
Zaharia and Zou. Adversary 1's report of having read the full text is consistent with what I found;
Gate 2's failure to find it was a **retrieval failure, not an absence** — the paper is readable at
both routes the entry names, and COULD NOT READ must not be merged with NOT FOUND here, because
neither applies to the paper as a whole.

**On the decisive point, the entry is half right in a way that does not survive the regime test.**
The repeat-run control **exists and is printed**: 2.8% for GPT-3.5 March queried twice and 7.0% for
GPT-3.5 June queried twice, in Section 3.4 body text, each quotable whole. So a flat claim that *no
source anywhere supplies any repeat-run number* is defeated by this paper. But the entry rests the
**entire** rejection of limb (a) on these two figures, and they cannot bear that weight:

- they are **point estimates, not a band** (no repeats count, no interval, no uncertainty);
- they cover **one model on one task**, with nothing for GPT-4 and nothing for the other seven sets;
- they are measured at **temperature 0.1, deliberately set to suppress randomness**, so they are a
  floor under a test setting rather than an operating-condition spread;
- and decisively, they come from a design that compares **two dated snapshots of one live model
  name**, with **no predecessor, no vendor-designated successor and no retirement** anywhere in it.

If limb (a) is about a **predecessor repeat-run band after retirement**, this paper is **silent in
that regime** — a result established under one set of conditions says nothing outside them. The
entry's rejection of limb (a) should be narrowed to what the paper actually establishes: that
same-snapshot run-to-run disagreement on OpinionQA for GPT-3.5 at temperature 0.1 was measured and
printed at 2.8% (March) and 7.0% (June). Any stronger reading — a band, a cross-task figure, a GPT-4
figure, or anything about retired predecessors — is not in this source.

Secondary corrections for the entry: drop or requalify the **85.2% / 97.8%** LangChain pair, which the
text does not print (it prints ">80% for both models"); label **27.5%** as a figure value against the
sentence's **27%**; and note that the scope caveat is in **Section 2.2**, not the conclusions.
Claim (e) is a **plain absence** and should be recorded as such, not as something unverified.
