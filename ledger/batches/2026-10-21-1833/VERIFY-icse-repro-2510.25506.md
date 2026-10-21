# VERIFY — arXiv:2510.25506 (ICSE '26 reproducibility reflection)

Checker: fresh context. Date: 2026-10-21.
Budget used: 3 WebFetch, 0 WebSearch (cap 5 / 6). One curl attempt (tool-scoped 403, see ROUTES).

## CLAIM

Source as the ENTRY cites it: "Reflections on the Reproducibility of Commercial LLM Performance in
Empirical Software Engineering Studies", arXiv:2510.25506, read in full at Gate 2 through the summariser.

Sub-claims handed to me:
- (a) identity / front matter / authors in order / venue;
- (b) the recorded numbers and their printed locations: 35/85 no code or data and 15 incomplete (§4.2);
  18 of 69 apparently executable (§3.1); 5 executable (§4.1); Pan et al. 79.9 vs reproduction interval
  45.6–55.3 (Table 1); Zhou et al. precision 50% to 82.35%; up to 30% metric differences (§6);
- (c) the string "an issue exclusive to commercial models" (recorded from §5.1), checked alone;
- (d) ROUTING TEST part one — is the candidate's question POSED in print: a question or call for work
  about what SHARE of published findings would change when migrating to a successor model, or about
  whether a VENDOR-DESIGNATED SUCCESSOR preserves a published result;
- (e) ROUTING TEST part two — is it UNANSWERED there;
- (f) regime.

## READ LEVEL

**FULL TEXT**, via WebFetch of the arXiv HTML rendering `https://arxiv.org/html/2510.25506v3`
(v3, dated 2025-11-17; first submitted 2025-10-29). The summariser read the body end-to-end;
it reported the page stopping mid-References at "Anandayuvaraj et al. (2024)…", i.e. the body,
all tables and the conclusion were in view and only part of the bibliography was cut. Two
caveats on fidelity, both reported by the reader rather than inferred by me:

- Figure 1 and Figure 2 text is **garbled** in the HTML extraction, so bar counts in
  "Top 10 LLMs Employed in the Analyzed 85 Articles" could not be mapped to labels reliably.
- Table 1's colour coding (bold = percentile nearest the original value; red = original outside
  the reproduced 95% interval) does not survive as text, so the *marks* are not readable even
  though the *numbers* are.

Quotation handling: the ~125-character cap bit here. The reader **refused the ordered-consecutive-
segment protocol** on one call ("Splitting passages this way would reconstruct longer quotations"),
so **no quotation below is a reconstruction** — every string marked "exact" came back whole inside
the cap, in a single return. Where a sentence exceeded the cap I report the within-cap portion and
say so, rather than completing it. Nothing here is stitched, and nothing is completed by inference.

## WHAT THE SOURCE SAYS (quotations as served)

### Genre

A **reproducibility / meta-research study** — a primary empirical study whose objects are other
people's papers, with a sampling frame, three research questions, five executed reproduction
attempts, and a meta-analysis of reporting practice. It is **not** a review, protocol, guideline
or editorial. The title's word "Reflections" understates it: §5 is discussion, but §3–§4 are a
designed study with its own data collection. Note for attribution hygiene: the five reproduced
results belong to Pan et al., Ahmed et al., Siddiq et al., Zhou et al. and Xiao et al. (all 2024);
findings *about* those results are this paper's, findings *of* those results are theirs.

### (a) Identity and front matter, as served

- Title: **Reflections on the Reproducibility of Commercial LLM Performance in Empirical Software
  Engineering Studies**
- Authors, in the order served: **Florian Angermeir; Maximilian Amougou; Mark Kreitz; Andreas Bauer;
  Matthias Linhuber; Davide Fucci; Fabiola Moyón C.; Daniel Mendez; Tony Gorschek** (nine authors).
- Affiliations in order: fortiss + Blekinge Institute of Technology; fortiss; University of the
  Bundeswehr Munich; Blekinge Institute of Technology; Technical University of Munich; Blekinge
  Institute of Technology; Siemens AG; Blekinge Institute of Technology + fortiss; Blekinge
  Institute of Technology + fortiss.
- Venue line, from the front matter block (not from a short form): **"2026 IEEE/ACM 48th
  International Conference on Software Engineering (ICSE '26), April 12–18, 2026, Rio de Janeiro,
  Brazil"**. ACM DOI **10.1145/3744916.3773207**; ISBN **979-8-4007-2025-3/2026/04**.
- arXiv identifier 2510.25506v3. The /abs page itself carries **no** "accepted at" comment — the
  venue is established by the front-matter conference line and the ACM DOI inside the paper, not
  by the arXiv comments field.

**Watch the two years.** The paper is **ICSE 2026**; the papers it studies are **ICSE 2024 and
ASE 2024**. An entry that calls this "an ICSE 2024 paper" or dates it 2024 has conflated the
object year with the publication year.

### Research questions, exact

- RQ1: **"To what extend are LLM-centric SE studies reproducible?"** (served with "extend" for
  "extent" — reproduced as served, not corrected)
- RQ2: **"Which factors impede the reproduction of LLM-centric empirical SE studies?"**
- RQ3: **"How well do the ACM artefact badges reflect the state of reproducibility of LLM-centric
  SE studies?"**

None of the three is a question about successor models or about a share of findings. This matters
for (d) and I return to it.

### (b) The numbers, each as printed and where

| Recorded in entry | Verdict | As printed, and where |
|---|---|---|
| 35 of 85 with no code or data | **confirmed, verbatim** | §4.2, exact: **"Of the 85 articles, 35 did not provide their code or data."** |
| 15 incomplete | **confirmed, verbatim** | §4.2, exact: **"For another 15 articles, those research artefacts were incomplete to the point of no recovery."** Note the qualifier *to the point of no recovery* — "incomplete" alone is weaker than what the paper says. |
| 18 of 69 apparently executable (§3.1) | **confirmed, verbatim** | §3.1, exact: **"From those 69 articles, 18 seemed to provide complete and executable research artefacts and data at first inspection."** Frame: §3.1/§4 **"resulting in a total of 85 articles, of which 69 used OpenAI models."** |
| 5 executable (§4.1) | **confirmed**, with a location nuance | §4.1, exact: **"Out of 69 studies using OpenAI services, only five studies were fit for reproduction."** The *arithmetic* step from 18 to 5 is printed in **§3.2**, not §4.1: **"this rendered 13 articles ill-suited for reproduction"**. So the number 5 is §4.1; the 18−13 derivation is §3.2. |
| Pan et al. 79.9 vs interval 45.6–55.3 "(Table 1)" | **numbers confirmed, LOCATION PARTLY WRONG** | Both figures are printed in **§4.1 running text**: **"Pan et al. reported an average successful translation ratio of 79.9%."** and **"we calculated a 95% interval range from 45.6% to 55.3%."** Table 1 prints **79.9** in its "Original Value" column, but prints the interval bounds **unrounded as 45.585 (2.5th) and 55.272 (97.5th)** — the rounded pair "45.6% to 55.3%" appears **only in the §4.1 text**. Citing the rounded interval to Table 1 attributes someone's rounding to the table. |
| Zhou et al. precision 50% to 82.35% | **confirmed verbatim, but it is NOT the interval and NOT Table 1** | §4.1, exact: **"the metric precision for the configuration P+A4 K=1 had a minimum observed value of 50% and a maximum value of 82.35%."** These are **min and max observed over the repetitions**, i.e. the full range, not a 95% interval. Table 1's own row for the same cell is **original 75.2, 2.5th 53.10, 97.5th 81.49**. Companion sentence, exact: **"the metric accuracy for the same configuration had a minimum value of 50% and a maximum value of 54.15%."** |
| up to 30% metric differences (§6) | **confirmed, verbatim** | §6 (Reliability), exact: **"reproductions could result in high variability between different repetitions with up to 30% differences in metrics."** The served sentence opens with a clause citing Table 1 that ran past the cap; I did not complete it. |

**Table 1 as served.** Headed "Example Metrics from the Five Reproduced Studies"; columns
*Study | Configuration/Metric | Original Value | 2.5th | 10th | 25th | 50th | 75th | 90th | 97.5th*.
There are **no 5th or 95th columns**, so any "95% interval" read off this table is the 2.5th–97.5th
pair. Rows served: Pan — Successful Transl. from Python 79.9 / 45.585–55.272, from Go 85.5 /
50.118–54.520. Ahmed — Java ASAP 16.96 / 18.954–19.627, Python ASAP 16.38 / 14.505–15.487, PHP ASAP
19.99 / 16.615–17.012. Siddiq — vul@1_Rescue 0.28 / 0.250–0.428, vul@10_Rescue 1.84 / 1.334–2.272,
DFA-EQ@1 Original 11.8 / 7.524–9.164, vul@3_ReDoSHunter Original 6.20 / 5.117–6.090. Zhou — P+A4 K=1
Precision 75.2 / 53.10–81.49, P+A4 K=1 Accuracy 51.8 / 50.3–53.82, P+A5 K=5 Recall 47.2 /
46.73–56.50. Xiao — Proxifier GA 1.000 / 1.0–1.0, Hadoop ED 0.953 / 0.952–0.953, OpenStack GA
0.968 / 0.971–0.99, Mac ED 0.881 / 0.896–0.902.

Two things follow that an entry can get wrong. First, **"Pan et al. 79.9" is one of two Pan rows**;
the Go configuration (85.5 vs 50.118–54.520) is an equally printed result and the single-row framing
drops it. Second, Table 1 is explicitly captioned **"Example"** metrics — it is a selected illustration,
not the full result set, so counts derived from its rows are counts of examples.

### Other figures in the same sections, for context and for collision risk

§3.1: **"we searched through the 425 ICSE articles directly via the proceedings PDFs"**;
**"The automatic search resulted in 109 articles."**; 31 of the 109 excluded as out of scope;
**"This process resulted in seven relevant ASE articles."**; **"over 70% of the articles utilised
LLMs provided by OpenAI"**. §4: **"For ICSE 2024, the search yielded 109 articles. Of those 109
articles, 78 performed experiments with LLMs."**; **"At ASE 2024, 108 articles performed experiments
with LLMs."**; **"Of those, seven articles were awarded an ACM artefact badge."**; **"Of those 85
articles, 69 employed OpenAI services as their base model or for comparison."**; **"In total, 43 of
85 articles compared multiple LLMs."** §4.2 reporting practice: model unnamed in 8 of 85;
temperature in 29 of 85; top-p/top-k in 14; context window in 22 of 85; prompts in 50 of 85; and
within the 18: ten did not define the minor version, three did not configure temperature, ten
configured top-p/top-k, context window handled in 5 of 18. §4.3: **"In total, of the analysed 85
articles, 18 were assigned an ACM badge."**

**Collision warning on "18".** The 18 of §3.1 (apparently complete artefacts, drawn from the 69
OpenAI users) and the 18 of §4.3 (ACM-badged articles, drawn from all 85) are the **same number for
different sets**. An entry that cites "18" without its denominator and its predicate invites exactly
this swap.

**Collision warning on "30".** "up to 30" appears four times with two different meanings: the
**repetition count** (§3.2 **"Each study was conducted up to 30 times or until we reached a cost of
$500."**; §7 "we reproduced each of those five studies with up to 30 repetitions") and the
**percentage spread** (§6, above; plus §4.1 on Zhou, "others were found in a 10-30% range"). The
entry's "up to 30% metric differences (Section 6)" lands on the right one.

**Two internal inconsistencies the reader flagged in the paper itself**, recorded because they are
the source's, not the entry's: §3.1 says **"Over two-thirds of the articles either lacked a reference
to a research artefact at all or were incomplete"** while 50/85 ≈ 59%; and §4.3 says **"Of the 16
papers that were assigned the Artifacts Evaluated - Reusable v1.1 badge"** while its own ICSE (11)
and ASE (4) reusable counts sum to 15. Re-derived at the authors' own stated thresholds, those two
sentences do not reconcile with their own numbers. Do not launder either into the ledger.

### (c) The string "an issue exclusive to commercial models", checked alone and unprimed

It is present, in **§5.1** (the subsection answering "Which factors influence reproducibility of
LLM-centric studies?"). The host sentence, exact and whole inside the cap:

> **"The only factor directly linked to LLMs was the usage of deprecated models, an issue exclusive
> to commercial models."**

Grammar on both sides of the cut. **Before:** the preceding sentence says (paraphrase, served as
paraphrase) that most factors reducing reproducibility are *not* LLM-specific but general
reproducibility problems already discussed in the literature — incomplete artefacts, poor
documentation. **After**, exact: **"We acknowledge that authors have little control over the
deprecation of models."**

So the string's own clause is a **statement about the taxonomy of causes that impeded this team's
reproductions** — of all the impediments they met, only one was LLM-specific, and that one cannot
arise with self-hosted open models. It is immediately followed by a concession exculpating authors.
Lifted out of that frame, the phrase can read as a claim about commercial models *invalidating
findings*; in place it is a claim about *which impediment is proprietary to the commercial setting*.
The entry's recording of location (§5.1) and wording is accurate.

### (d) ROUTING TEST, part one — IS THE QUESTION POSED? **No.**

The paper **names deprecation as a cause of reproduction failure, repeatedly, and never poses the
share question.** That is exactly the distinction the task said is the whole point of this check,
and it falls on the "names it only" side.

Every formulation I found, with its hedging and attribution:

1. §4.2, exact, **unhedged, no citation**: **"Also, a major cause for reproduction failure was the
   deprecation of LLMs."** And: **"In at least four studies, we faced the issue of deprecated
   models."** (the "at least" is the authors' own hedge).
2. **Table 2**, row "Deprecated Models", lists five articles: Huang, Tanzil, Geng, Siddiq, Ahmed.
   Note the arithmetic: the table's row names **five** while §4.2 prose says **"at least four"**.
3. §4.2 RQ2 summary: deprecated models named as the **only** commercial-LLM-specific factor
   (the same proposition as the §5.1 string in (c)).
4. §5.1, exact: **"the risk of model deprecation has to be a consideration during the study design
   phase."** This is a **recommendation to authors**, not a research question.
5. §7 Conclusion: "deprecated model access" listed among the main challenges.
6. §2.2 background, exact: LLMs **"evolve rapidly over time through regular updates, leading to
   different model versions."** This is background, carrying citations to others.

Now the three passages that come closest to the candidate's question, and why each falls short.

**Closest passage, and it is a different regime.** §5.1, exact: **"It would have been an interesting
analysis, whether this promise holds true."** The promise is named in the sentence before it, exact:
**"In the background, we mentioned the promise of commercial model providers, such as OpenAI, to keep
models of a fixed version stable."** — and §2.2 quotes OpenAI exactly: a **"pinned model is stable,
meaning that we won't make changes that impact the outputs."** The sentence after it, exact:
**"However, we can not make any claims given the few approaches that actually set the minor version
for the used models (see Table 3)."**

Read that triple carefully. The analysis the authors wish they could have run is **whether a PINNED
model snapshot drifts** — same model identifier, same version string, different point in time. The
candidate's question is about **succession** — model A retired, vendor designates model B, does the
published result survive the move. These are opposite regimes: pinned-version stability is precisely
the case where **no migration occurs**. And the authors do not merely leave their version
un-answered: they say in the next sentence that **they cannot make any claims**, and they state the
reason (too few papers pinned a minor version). That is an abandoned analysis of a neighbouring
question, not a posing of this one.

**Second closest, and it has no proportion and no successor.** §5.1, exact: **"If the results of
studies that are just one year old no longer hold true, we must question the sustainability of such
research."** Before it, exact: **"Despite the progress in the research field of AI focusing on LLMs,
the general insights should remain the same."** After it, exact as far as served: **"This is even
more critical when considering that studies presented at conferences are typically part of larger
research programmes…"** (truncated at the cap; not completed). This is a **conditional about
sustainability**, with no share, no count, no successor model named, and no call for anyone to
measure it.

**Third, an explicit deferral — of a different question.** §5.1, exact: **"analysing whether this
comparison actually improves replicability is out of scope of this article."** The "comparison" is
the authors' suggestion that studies also run open-source models as a hedge against commercial
deprecation. So the one thing §5.1 explicitly defers to future work is **whether adding an
open-model arm improves replicability** — not what share of findings a successor would overturn.

Direct term search by the reader over the full text found **no** hits for "how many studies",
"what share", "proportion of findings", "would still hold", "successor", "replacement model",
"migrate" or "migration". The word *successor* does not occur in the paper.

### (e) ROUTING TEST, part two — IS IT UNANSWERED THERE? **Yes, plainly unanswered. Named, not measured.**

Taking the three things the task told me to look for:

**A share of conclusions reversing — ABSENT.** No percentage, fraction or count of published
findings that change under a newer model is printed anywhere. What the paper prints instead is a
**per-study reproducibility verdict for five studies**, and the nearest thing to a share is the
abstract's count, exact: **"Two studies seemed to be partially reproducible, and three studies did
not seem to be reproducible."** with, exact: **"For none of the five studies, we were able to fully
reproduce the results."** That 2/5–3/5 split is a share of **reproduction attempts under a
substituted model plus rerun variance plus artefact gaps**, confounded across all those causes; it
is not attributed to succession, and the paper never decomposes it that way. On the task's
DEFINES / BOUNDS / PREDICTS / ANNOUNCES / MEASURES scale: the paper **MEASURES** per-study
reproduction intervals, **NAMES** deprecation as a cause, and does **not measure** any
successor-attributable share.

**An older-versus-newer same-item comparison — ABSENT, and structurally impossible here.** The
reproductions that met a deprecated model did a **one-armed substitution**, not a paired comparison:
§4.1 on Siddiq, exact: **"Text-DaVinci-003 was already deprecated when we started our experiment."**
then **"Hence, we used the current model gpt-3.5-turbo-0125."**; §4.1 on Ahmed, exact: **"Most of the
study was performed on the deprecated code-davinci-002 model."** and **"only gpt-3.5-turbo is still
available."** Because the old model was already withdrawn, **no measurement on the old model was
taken by this team** — the comparator on the "old" side is the *number printed in the original
paper*, produced at another time by another team on another harness. So even for Ahmed and Siddiq
there is no old-vs-new arm on the same items under one protocol. For Zhou the substitution was not
even deprecation-driven: no version was specified in the original, so gpt-3.5-turbo-0125 was chosen
for want of one.

**A retired-and-designated-successor pairing — ABSENT as such.** The pairs
code-davinci-002 → gpt-3.5-turbo-0125 and text-davinci-003 → gpt-3.5-turbo-0125 are the closest
objects in print, and they are the authors' **own pragmatic choice of a currently available model**
("the current model", "only gpt-3.5-turbo is still available"). The paper **nowhere states that the
replacement is a vendor-designated successor**, and does not cite a vendor migration mapping. An
entry that reads these substitutions as vendor-designated successor pairings would be supplying a
designation the source does not make. The paper also records a candid caveat on Ahmed, exact as far
as served: the **"possibly newer version"** may need different prompting — i.e. the authors treat the
substitution as a confound, not as a successor-preservation test.

**Bearing of this on the strict routing test.** The test is: someone POSED the candidate's question
in print, verbatim, and the source shows it still unanswered. Here part two is satisfied
emphatically — nothing in this paper answers it — but **part one is not satisfied**: this paper does
not pose it. It poses pinned-version stability (and abandons it), it recommends design-time
consideration of deprecation risk, and it defers the open-model-arm question. On the evidence of
this source alone, the row does **not** qualify, because an unanswered question that nobody asked in
print is not what this test licenses.

### (f) REGIME

**Sampling frame.** Two venues, one year each: **ICSE 2024** (tracks research, companion, NIER, SEIS,
SEIP; 425 articles searched through the proceedings PDFs → 109 automatic hits → 31 excluded as out of
scope → 78 with LLM experiments) and **ASE 2024** (108 articles performing LLM experiments, of which
seven carried an ACM artefact badge and became the relevant ASE set). Total frame **85 articles**.
Note the asymmetry: ICSE entered by **full search**, ASE entered **through the badge filter** — the
two venues are not sampled the same way, so "85 articles from ICSE and ASE 2024" is a union of two
different selection rules, not one population.

**Narrowing.** 85 → **69** that employed OpenAI services as base model or for comparison → **18**
that at first inspection seemed to have complete and executable artefacts → 13 excluded → **5** fit
for reproduction. Every reproduction number in this paper therefore has a denominator of **5**, drawn
from a funnel whose widest honest denominator is 69 OpenAI-using articles.

**Vendor and models.** Commercial, **OpenAI only**, on the reproduction side: **gpt-4-0613** (Pan)
and **gpt-3.5-turbo-0125** (Ahmed, Siddiq, Zhou). Models named across the 85 (Figure 2, "Top 10 LLMs
Employed in the Analyzed 85 Articles") include gpt-4, gpt-3.5-turbo, gpt-3.5, text-davinci-003,
chatgpt, starcoder, codegen, code-davinci-002, gpt-2, gpt-4-0613 — **counts garbled in extraction,
so no ranking is reportable**. Claude, Mistral, Gemini and LLaMA appear only as **search keywords**
in §3.1; Anthropic, Google and Meta are named in §6 as other providers. **No Anthropic, Google or
Meta model was reproduced.** A ledger row generalising this to "commercial LLMs" is generalising from
an OpenAI-only reproduction set.

**Unit of analysis and estimand.** The unit is a **published metric value within a study**
(configuration × metric: "Successful Transl. from Python", "Java ASAP", "vul@1_Rescue", "P+A4 K=1
Precision", "Proxifier GA" …), and the unit of verdict is the **study**. The endpoint is whether the
**originally reported value falls inside the reproduction's repetition-distribution interval**
(2.5th–97.5th percentiles of repeated runs). The comparator is therefore **the number printed in the
original paper**, not a re-execution of the original model. The estimand is **run-to-run dispersion
of the reproduction plus any offset from the original's printed value**, with deprecation, harness
differences, unpinned versions and prompting all folded in and **not separated**.

**Operating condition.** §3.2, exact: **"Each study was conducted up to 30 times or until we reached
a cost of $500."** The cap bound one study: **Pan ran 15 repetitions**, the other four ran 30. So
"up to 30 repetitions" is a ceiling, not the realised n for Pan, and Pan's interval — the very one
the entry cites (45.6–55.3) — rests on **15** runs, not 30. Carry that when carrying the interval.

**What the five attempts actually did.**
- **Pan et al.** — Python and Go translation to other languages on a CodeNet subset, scope limited by
  the cost cap; **15** repetitions; **gpt-4-0613** ("We used gpt-4-0613."); verdict **not reproducible**.
- **Ahmed et al.** — ASAP vs BM25 code summarisation, Java/Python/PHP; **30** repetitions;
  **gpt-3.5-turbo-0125** substituted for deprecated code-davinci-002; verdict **not reproducible**.
- **Siddiq et al.** — regex generation; exact match, DFA-equivalence, pass@k, vulnerability metrics;
  **30** repetitions; **gpt-3.5-turbo-0125** substituted for deprecated text-davinci-003; verdict
  **not reproducible** (Table 3: "No").
- **Zhou et al.** — C/C++ vulnerability detection across eight GPT-3.5 prompt configurations;
  **30** repetitions each; **gpt-3.5-turbo-0125** (chosen because no version was specified);
  **three configurations excluded** for context-length and error-handling problems, and **GPT-4
  omitted** because the original applied it to only half the test set; verdict **partially
  reproducible**, with the authors cautioning that the spread across runs was large.
- **Xiao et al.** — LLM-based log parsing, LogHub-2k, GA and ED metrics; **30** repetitions;
  model not named in the extracted text; verdict **partially reproducible**.

**Does the entry's claim sit inside this regime?** For (a), (b), (c) — yes, with the location
corrections noted. For (d)/(e) — the paper's regime is **reproduction of a printed value under a
substituted available model, n=5, OpenAI only, ICSE/ASE 2024**. The candidate's question lives in a
regime of **succession across a vendor-designated retirement, measured as a share over a body of
published findings**. The paper is **silent** in that regime, and silence is not support.

## DEFECTS FOUND

1. **Location error on the Pan interval.** The entry attributes "45.6–55.3" to **Table 1**. Table 1
   prints **45.585 and 55.272**; the rounded pair appears only in the **§4.1 running text**
   ("we calculated a 95% interval range from 45.6% to 55.3%"). Minor, but it is someone's rounding
   credited to a table — cite §4.1 for the rounded interval, Table 1 for the percentiles.
2. **Mis-typing of the Zhou figures.** "precision 50% to 82.35%" is correct **verbatim** and is in
   **§4.1**, but these are **minimum and maximum observed values over the repetitions** for one
   configuration (P+A4 K=1), **not** a 95% interval and **not** Table 1 — whose same cell reads
   original **75.2**, 2.5th **53.10**, 97.5th **81.49**. If the ledger entry presents 50–82.35 as the
   reproduction interval, or next to the Pan interval as though the two were the same kind of
   quantity, that is a units/estimand mismatch: one is a full range, the other a central 95%.
3. **Pan's n is 15, not 30.** The entry carries "up to 30" from §6 and the Pan interval from §4.1
   without noting that the **$500 cost cap cut Pan to 15 repetitions**. The cited interval's stated
   uncertainty rests on 15 runs.
4. **"Pan et al. 79.9" drops the Go row.** Table 1 prints two Pan configurations (79.9 Python,
   85.5 Go). Single-row framing is a selection the entry should declare.
5. **Table 1 is captioned "Example Metrics".** Any count or share derived from its rows is a count of
   illustrative examples, not of all measured metrics.
6. **"18" is ambiguous without a denominator** — §3.1's 18-of-69 (apparent artefacts) and §4.3's
   18-of-85 (ACM badges) are different sets with the same cardinality. Keep the predicate attached.
7. **ROUTING TEST part one fails: the question is NAMED-as-cause, not POSED-as-question.** This is
   the material defect. The paper calls deprecation "a major cause for reproduction failure" and
   recommends design-time consideration of deprecation risk; it never asks what share of findings
   would change under a successor, and the word "successor" does not appear. The nearest wish —
   "It would have been an interesting analysis, whether this promise holds true." — is about
   **pinned-version stability**, the no-migration case, and is withdrawn in the next sentence
   ("we can not make any claims"). Treating the deprecation discussion as a posing of the share
   question is a regime substitution, and on the strict test it does not qualify the row.
8. **Published is not performed, in the direction that matters here.** The paper **runs** five
   reproductions and **prints** per-study intervals; it **does not print** any successor-attributable
   share, any old-vs-new paired measurement, or any vendor-designated successor pairing. The 2/5 and
   3/5 counts in the abstract are a share of **reproduction outcomes**, confounded across artefact
   gaps, rerun variance, prompting and model substitution — not a share of conclusions reversed by
   succession. Converting 2/5 or 3/5 into a statement about successor models would be the ledger's
   arithmetic, not the source's.
9. **Two arithmetic inconsistencies in the source itself** (the paper's, flagged so neither is
   laundered): "over two-thirds" vs 50/85 ≈ 59% (§3.1); "16 papers … Reusable" vs 11 + 4 = 15 (§4.3).
   Also Table 2's "Deprecated Models" row names **five** articles while §4.2 prose says **"at least
   four"**.
10. **Year conflation risk.** Paper = ICSE **2026**; objects = ICSE/ASE **2024**. Front matter, not a
    short form, is the authority: "(ICSE '26), April 12–18, 2026, Rio de Janeiro, Brazil".
11. **Generalisation risk on "commercial".** Title and framing say "Commercial LLM"; every reproduced
    model is **OpenAI**. Anthropic/Google/Meta appear only as keywords or as named providers in
    discussion.
12. **Figure 2 counts unreadable.** The HTML extraction garbles Figure 1 and Figure 2, so no
    "most-used model" ranking can be carried from this read. That is a read limitation, not an
    absence in the paper.

## ROUTES THAT FAILED

- `curl -sSL https://arxiv.org/pdf/2510.25506` → **curl: (56) CONNECT tunnel failed, response 403**.
  Per the routing brief this is **tool-scoped at the proxy, not a host block**: arxiv.org answered
  the same reader through WebFetch immediately afterwards. Recorded, not worked around; the proxy was
  not probed or inspected.
- The **ordered-consecutive-segment protocol for beating the 125-character cap was REFUSED** by the
  summariser on the second call, explicitly as quote-cap circumvention. Consequence, stated plainly:
  a handful of sentences are reported only as far as they fit the cap (the §6 opening clause citing
  Table 1; the §5.1 "larger research programmes" sentence; the §5.1 sentence preceding the "exclusive
  to commercial models" line, which came back as paraphrase). **No quotation in this note is a
  reconstruction** and none was completed by inference. This is a partial-quotation limit, **not** a
  COULD-NOT-READ: the full text was read and all the checked strings were returned whole.
- PubMed Central / Europe PMC / doi.org / Unpaywall: **not attempted**. Not applicable (arXiv +
  ACM DOI), and no contact address was supplied anywhere.
- WebSearch: **not used** (0 of 6). The primary source answered every sub-claim directly, so no
  secondary route was needed.

## BEARING ON THE LEDGER ENTRY

**On identity and numbers: the entry is sound.** The front matter is as cited, the authors and venue
check out from the front-matter block, and **every one of the six recorded quantities is really in the
paper, verbatim**. Fix the Pan interval's location (§4.1 text, not Table 1), re-label the Zhou
50%–82.35% as an observed min–max rather than an interval, and attach Pan's n=15. None of these
disturbs the entry's factual spine.

**On the routing row: this source does not qualify it, and the reason is the exact distinction the
check was built to make.** The row needs someone to have **posed** the candidate's question in print.
This paper poses RQ1–RQ3 (reproducibility, impeding factors, badge validity); it names deprecation as
a leading **cause** of its reproduction failures, lists five affected articles in Table 2, and tells
authors to weigh deprecation risk at design time. It does **not** ask what share of published findings
would change under a successor model, it does **not** ask whether a vendor-designated successor
preserves a published result, and the word "successor" is absent. Its one expressed wish —
"It would have been an interesting analysis, whether this promise holds true." — is about whether a
**pinned** OpenAI snapshot stays stable, i.e. the case where nothing migrates, and the authors
withdraw it in the following sentence for want of papers that pinned a version. Its one explicit
future-work deferral is whether adding an **open-source model arm** improves replicability.

**Part two of the test is satisfied, which is precisely why the row is tempting and still fails.**
Nothing here answers the candidate's question: no share of conclusions reversing, no old-vs-new
same-item comparison (the deprecated models were already withdrawn, so no old-model arm exists — the
"old" side is the original paper's printed number), and no pairing the paper itself calls a
vendor-designated succession. The substitutions code-davinci-002 → gpt-3.5-turbo-0125 and
text-davinci-003 → gpt-3.5-turbo-0125 are the authors' choice of **a currently available** model, and
they treat the "possibly newer version" as a confound needing different prompting.

**Recommended disposition.** Keep this source in the entry as **strong evidence that the gap is
real and consequential** — deprecation demonstrably broke reproductions in a 2024 ICSE/ASE sample, and
the authors say so without hedging. Do **not** cite it as the **place the question was asked**. If the
row is to stand, the posing must be found elsewhere; on this source the honest finding is
**NAMED AS A CAUSE, NEVER POSED AS A QUESTION — and unanswered here**. And hold the regime line: five
reproductions, OpenAI only, ICSE/ASE 2024, endpoint = original printed value inside a repetition
interval. A share over a body of published findings under vendor succession is outside that regime,
and the paper is silent there rather than supportive.
