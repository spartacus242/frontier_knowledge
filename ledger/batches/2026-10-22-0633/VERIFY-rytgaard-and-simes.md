# VERIFY — Rytgaard et al. (arXiv:2605.05859) and Simes et al. (PLoS ONE 2010;5(1):e8580)

Checker: fresh context. Date: 2026-10-22. Budget used: 2 searches, 5 fetch calls (2 of them refused by target).

## CLAIM

Two sources are cited as the **method-owning neighbours** of a Provisional candidate. The candidate concerns
**control-arm access to the STUDY drug class**.

Sub-claims handed to me:

- **(a)** Source 1 prints verbatim that of 5,171 not on insulin at baseline, "30% initiated insulin ... in the
  GLP1 arm whereas 47% initiated insulin in the placebo arm".
- **(b)** Source 1's concomitant exposure is ascertained by ASSAY, or by trial-recorded initiation/discontinuation dates.
- **(c)** Whether Source 1's concomitant class is the SAME class as the randomised drug. *(stated hinge)*
- **(d)** An internal inconsistency: section 2 defines the endpoint as cardiovascular death alone, while elsewhere it is
  a three-component MACE at visit 8, "42 months after randomization".
- **(e)** Whether Source 1 anywhere treats the possibility that control-arm participants obtain the STUDY drug class
  off protocol.
- **(f)** Source 2 contains verbatim "Cardiovascular medications were recorded at each follow-up visit".
- **(g)** Whether Source 2 uses any biochemical assay to ascertain non-study-drug use, or only clinic records.
- **(h)** Whether Source 2 adjusts the treatment effect for other-class drop-in, and what it prints for that adjustment.

## READ LEVEL

**Source 1 — Rytgaard et al., arXiv:2605.05859: FULL TEXT.**
Route that worked: `https://arxiv.org/html/2605.05859v1` via WebFetch (three passes). The paper opens. It is a
**methodological / statistical paper** (new class of causal estimands + TMLE estimator), with a simulation study and
one applied data analysis. It is not a trial report, review, protocol, guideline or editorial.

Front matter as served:
- Title, served in two segments owing to the summariser cap: "Estimation of treatment effects in presence of
  differential use of post-randomization concomitant medication" + "with time-to-event outcomes"
- Authors in printed order: **Helene C. W. Rytgaard, Edwin Fong, Jens M. Tarp, Thomas A. Gerds, Mark J. van der Laan,
  Henrik Ravn**
- Date line: **May 8, 2026**. No version line printed on the page (the HTML route is v1).
- Author list, title and date **match** the citation as handed to me. No front-matter defect.

**Source 2 — Simes et al., PLoS ONE 2010;5(1):e8580: COULD NOT READ.**
This is **COULD NOT READ, not NOT FOUND.** The record demonstrably exists and is open access (PMID 20072614;
PMC2798963; indexed in DOAJ and in several university repositories). The publisher page would not serve to me:
two WebFetch calls to `journals.plos.org` both returned `RATE_LIMIT_EXCEEDED` with `"source":"target"`. The tool's
own error text instructs, on a second failure, to go on without the page and name it. My brief instructs me to
record a refusal and stop rather than work around it. I therefore did **not** attempt PMC or Europe PMC (hard-blocked
per routing; a PMCID is an identifier to convert, never a route) and did not attempt any mirror or repository PDF.

**Sub-claims (f), (g) and (h) are therefore UNVERIFIED.** They are not refuted. Nothing below should be read as a
finding about Source 2's text.

## WHAT THE SOURCE SAYS (quotations as served)

### Source 1 — Rytgaard et al.

**What it measures (in its own words).** Randomised treatment: **liraglutide** — "liraglutide (a once-daily injected
glucagon-like peptide-1" (Section 1) — versus placebo. Trial: **LEADER** (Marso et al. 2016, cited in Sections 1 and 6).
Concomitant medication under study: **additional glucose-lowering medications, insulin specifically** — Section 6:
"additional glucose-lowering medications such as insulin were allowed to be added the treatment regimen"
*(reproduced as served; the sentence is missing a word, "added **to** the treatment regimen")*.
Estimand: a class of causal estimands under time-dependent interventions, using stochastic interventions to balance
concomitant use across arms, estimated by TMLE. Unit of analysis: the randomised participant, on a six-monthly
trial-visit grid.

**(a) The 5,171 / 30% / 47% sentence — PRESENT, in Section 6 "Data analysis", as a SENTENCE (not a table or figure).**
Served in two consecutive segments, assembled from 2 fragments with the junction verified at the word "arm":

> "Of the remaining 5,171 participants, 30% initiated insulin at some point during follow-up in the GLP1 arm"
> "whereas 47% initiated insulin in the placebo arm."

*Reconstruction note: the above is a 2-fragment reconstruction of one sentence; both fragments were returned whole
and consecutively, and the junction is the clause boundary "...in the GLP1 arm | whereas 47%...".*

The adjacent sentence, served verbatim:

> "This divergence in concomitant usage is illustrated in Figure 5a, which matches quite closely to Scenario 1"

The sentence establishing the denominator came back only as **paraphrase**, not verbatim, within my budget: that of
9,340 participants, 4,169 were already taking insulin at baseline, leaving the 5,171 who were not. I flag that as
**not verbatim-confirmed** (see DEFECTS, D1).

**(b) Ascertainment — the paper states NEITHER an assay nor a recorded-dates mechanism.** What it prints is a
**definition of the exposure variable**, in Section 6:

> "we define $Z_k = 1$ if the patient initiates or continues to use insulin at any time between visits k - 1 and k."

And, for the time-varying covariate:

> "we define the time-varying covariate $L_k$ according to the covariate measurement at the previous trial visit k - 1"

There is **no ascertainment sentence** anywhere in the paper: nothing on case report forms, start/stop dates, dispensing
records, assay, plasma, serum or drug level. The exposure is **defined on the visit grid and its data source is never
stated**. The visit-interval construction and the $L_k$ sentence make trial-visit records the obvious reading, but the
paper does not say so, and an inference is not a quotation.

**(c) THE HINGE — DIFFERENT CLASS.** The randomised drug is a **GLP-1 receptor agonist** (liraglutide). The concomitant
medication is **insulin**, a different class. The paper's entire applied demonstration is of a **different-class**
concomitant. It is not a demonstration on the study class.

**(d) The internal inconsistency — CONFIRMED. Both locations, as served:**

*Section 2, "Setting and notation"* — endpoint is **cardiovascular death alone**. Assembled from 2 consecutive
fragments, junction at "primary endpoint | (cardiovascular death)":

> "Finally, $Y_k \in \{0,1\}$ , $D_k \in \{0,1\}$ and $C_k \in \{0,1\}$ indicate the primary endpoint"
> "(cardiovascular death), death (of other causes) and censoring status, respectively, at visit k."

*Section 6, "Data analysis"* — endpoint is a **three-component composite**:

> "time to first event of cardiovascular death, non-fatal myocardial infarctions, or non-fatal stroke"

*Section 6.1, "Results"* — the evaluation time:

> "at the eight visit, which corresponds to 42 months after randomization"

*(reproduced as served: the paper writes "the **eight** visit", not "the eighth visit".)*

So the two definitions genuinely conflict, and the earlier agent's report is confirmed **in substance**. Two
corrections to the earlier agent's wording, which matter if the ledger quotes it:

- The literal strings **"MACE"** and **"visit 8"** are **NOT PRESENT** in the paper. "MACE" is the ledger's label;
  the paper writes out the three components. "Visit 8" is the ledger's rendering of "the eight visit".
- The "42 months after randomization" fragment is genuine and is in **Section 6.1**, attached to the eighth visit —
  not to the endpoint definition.

Separately, and **not** an inconsistency: Section 6 describes follow-up visits every six months up to 10 visits, while
6.1 evaluates at the eighth. That is a choice of evaluation horizon, not a contradiction.

Section 6 also prints the event counts, served as paraphrase and so **not verbatim-confirmed**: 1,302 randomised
events, 270 non-cardiovascular deaths, 7,768 event-free at end of follow-up or lost to follow-up.

**(e) Control-arm receipt of the STUDY class — the paper does not merely stay silent; it ASSUMES IT AWAY, and the
assumption is load-bearing.** This is the most consequential finding in this note.

*Section 3.1, on the placebo arm:*

> "For the placebo group we note that the active treatment is not available, so that the degenerate $g_{A_k}^*$ with
> all mass in 0..."

*Section 7, Discussion:*

> "the absence of switches from placebo to active treatment arm"

— asserted as an **advantage** of the trial, with no examination of outside access.

- Any statement that concomitant GLP-1 use was **prohibited by the LEADER protocol**: **NOT PRESENT.**
- The paper never raises off-protocol, off-label, open-label, commercial or otherwise external acquisition of a GLP-1
  agonist by a placebo-arm participant.
- The nearest neighbour is a **reference**, Bethel et al. 2020 (an EXSCEL analysis): "Exploring the possible impact of
  unbalanced open-label drop-in of glucose-lowering medications on exscel outcomes" — cited for drop-in of
  glucose-lowering medications in general, **not** for placebo-arm receipt of the study class. Every other use of
  "drop-in" in the paper (Section 5, Figures 3 and 5) refers to the concomitant medication, not the study drug.

### Source 2 — Simes et al.

**Nothing of the text was read.** What I can state, and where it comes from:

The record exists, is open access, and has the title *"A Novel Method to Adjust Efficacy Estimates for Uptake of Other
Active Treatments in Long-Term Clinical Trials"*. **This title is taken from indexing records and search listings, NOT
from the article's front matter** — I never reached the front matter, so authors, printed author order, article type
and page/article-number detail are **unconfirmed by me**, and per the front-matter rule this title should not be
treated as a front-matter read.

One further record-level fact, also from indexing and not from the article: a **published Correction exists**
("Correction: A Novel Method to Adjust Efficacy Estimates for Uptake of Other Active Treatments in Long-Term Clinical
Trials", PMC2811202). I could read neither the article nor the correction. **Any number the ledger quotes from e8580
must be checked against that correction before it is relied on.**

## REGIME

**Source 1 establishes its results in this regime, and the candidate's question sits OUTSIDE it.**

| | Source 1's regime |
|---|---|
| Population | LEADER: type-2 diabetes, high cardiovascular risk; the applied analysis restricted to the 5,171 **not on insulin at baseline** |
| Unit of analysis | randomised participant, on a six-monthly trial-visit grid (up to 10 visits, plus a 3-month visit) |
| Randomised contrast | liraglutide (GLP-1 agonist) vs **placebo** |
| Concomitant exposure | **insulin** — a glucose-lowering drug of a **different class** from the randomised drug |
| Endpoint | conflicting: CV death alone (Section 2) vs CV death + non-fatal MI + non-fatal stroke (Section 6) |
| Evaluation horizon | the eighth visit, "42 months after randomization" |
| Key structural assumption | **the active treatment is not available in the placebo arm** (Section 3.1); "the absence of switches from placebo to active treatment arm" (Section 7) |

The candidate is about **control-arm access to the STUDY class**. Source 1's method is proved and demonstrated for a
**different-class** concomitant, **under an assumption that study-class exposure in the control arm is identically
zero**. A result proved under that assumption is **silent** outside it — and here it is worse than silent, because the
assumption is the negation of the candidate's premise. Source 1 is a methodological neighbour for *differential
concomitant use of another class*; it is **not** a method-owning neighbour for *control-arm access to the study class*,
and it does not foreclose that question.

Source 2's regime: unassessed, because unread.

## DEFECTS FOUND

**D1 — (a): the quotation is sound, but two things around it are not verbatim-confirmed.**
The quoted string itself is accurate, and the ellipsis in the ledger's rendering correctly stands in for "at some point
during follow-up". But (i) the "5,171 not on insulin at baseline" gloss rests on the 9,340-minus-4,169 sentence, which
I obtained only as **paraphrase**, and (ii) the 30% and 47% are **per-arm** proportions whose arm-level denominators
the source does not print at that sentence; 5,171 is the pooled at-risk set, not the denominator of either percentage.
If the ledger converts 30% or 47% into a count, that is **the ledger's arithmetic**, not the source's — the source
prints percentages only.

**D2 — (b): the sub-claim's disjunction is false as posed, and the ledger should not attribute an ascertainment
sentence to this paper, because there is none.** The paper **DEFINES** the exposure ($Z_k$ on the visit interval); it
never states how insulin use was **ascertained**. This is a definition-not-measurement gap. Reporting "trial-recorded
initiation and discontinuation dates" as the paper's ascertainment would be an inference presented as a reading.

**D3 — (c), the hinge: a class mismatch that puts the source outside the candidate's regime.** Insulin is not the
study class. Citing this paper as the method owner for control-arm study-class access is a regime error of exactly the
kind that moved verdicts previously.

**D4 — (d): confirmed in substance, wrong in wording.** "MACE" and "visit 8" are the ledger's words, not the paper's.
If the ledger quotes them as the paper's, that is a misquotation, even though the inconsistency it reports is real.

**D5 — (e): an assumption has been mistaken for, or risks being mistaken for, treatment of the question.** Section 7's
"the absence of switches from placebo to active treatment arm" is the paper **asserting** that the thing did not
happen, as a point in the trial's favour. Per the silence rule, that is not the paper flagging the gap, and it is not
the paper analysing it. Section 3.1 builds the placebo-arm estimand **on** the unavailability of active treatment.
Note also that the paper nowhere says the LEADER protocol **prohibited** concomitant GLP-1 use — so the assumption is
stated, not sourced.

**D6 — the paper also carries two as-served textual faults**, reproduced above and not silently corrected: a missing
"to" in "allowed to be added the treatment regimen" (Section 6), and "the eight visit" for "the eighth visit"
(Section 6.1).

**D7 — Source 2 is unread, and (f), (g) and (h) must not be recorded as checked.** One flag, explicitly labelled as
**unverified hypothesis, not a finding**: the string in (f), "Cardiovascular medications were recorded at each
follow-up visit", reads like a sentence from a FIELD **trial** report or design paper, whereas e8580 appears from its
title to be a **statistical-methods** article. If the quotation was lifted from a different FIELD publication and
attributed to e8580, that is a misattribution — but I could not open e8580, so this is a thing to check, not a defect
I found.

**D8 — Source 2 has a published Correction that neither I nor, on this record, the ledger has read.**

**D9 — a "published is not performed" caution on (h), stated as a limit on what I may say.** The paper's *title*
indicates it adjusts for uptake of other active treatments. That is **not** the same as the paper printing an adjusted
estimate. I cannot **NAME THE NUMBER** — no adjusted hazard ratio, no confidence interval, no per-arm statin
commencement percentage, no assumed efficacy for the other treatment, and no table or figure reference. Until someone
opens the article, (h) is answerable only at the level of what the title announces, and an announcement is not a
printed result.

## ROUTES THAT FAILED

1. `curl https://arxiv.org/html/2605.05859v1` — `curl: (56) CONNECT tunnel failed, response 403`. **Tool-scoped at this
   proxy, not a host block**: the same page served fine through WebFetch immediately afterwards. Recorded so the next
   checker does not misread it as a host block.
2. `WebFetch https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0008580` — **attempt 1**:
   `RATE_LIMIT_EXCEEDED`, `"source":"target"`.
3. Same URL — **attempt 2**, as the tool's error text instructed: `RATE_LIMIT_EXCEEDED`, `"source":"target"` again.
   Fetch budget exhausted; refusal recorded and not worked around.
4. **Not attempted, by routing rule:** PMC2798963 / PMC2811202 and Europe PMC (hard-blocked — reCAPTCHA interstitial
   and HTTP 429 do-not-retry respectively; a PMCID is an identifier to convert, not a route). doi.org not used as a
   route. No repository mirror or alternate PDF attempted. Unpaywall not used (it would require supplying a contact
   address). The egress proxy was not probed.

## BEARING ON THE LEDGER ENTRY

**Source 1 is a real, open, fully readable paper, and it is a genuine methodological neighbour — for a different
question than the candidate's.** Its contribution is an estimand-and-TMLE apparatus for *differential post-randomization
use of a concomitant medication of another class* (insulin alongside a GLP-1 agonist). On the candidate's actual
subject — **control-arm access to the study class** — the paper is not merely silent: it **assumes the exposure to be
zero** in the control arm (Section 3.1) and cites that absence as a virtue of the trial it analyses (Section 7). It
therefore **cannot be the method owner that forecloses the candidate**, and the strongest honest statement in the
other direction is that the candidate's premise is precisely the assumption this paper leaves unexamined and
unsourced. If the entry currently rests on Source 1 to dispose of the candidate, that rest is misplaced, and the
reason is a regime mismatch (D3) plus an assumption-for-analysis substitution (D5).

The quotation in (a) survives checking, with the denominator and arithmetic cautions in D1. The endpoint inconsistency
in (d) is **real and reproducible at both locations** — this is a substantive defect in the paper itself, worth
recording, with the wording corrected per D4.

**Source 2 contributes nothing to this entry yet, and the entry must say COULD NOT READ rather than anything stronger
or weaker.** The article exists and is open; it would not serve through the one permitted route inside budget. Its
title indicates it is squarely about adjusting for other-treatment uptake, which makes it a plausible method owner for
the *drop-in adjustment* aspect — but no number of its is in hand, so (h) cannot be answered at the grain the brief
demands, and (f) and (g) are open. A re-check should go to `journals.plos.org` alone, on a fresh budget, one page at a
time, and must also read the published Correction (D8) before any figure from e8580 is quoted. Until then the entry
should carry Source 2 as **unverified**, and should not treat the (f) quotation as confirmed — see the misattribution
flag in D7.
