# VERIFY-uq09-pmc10698772

Checker: fresh-context. Date: 2026-10-22. Budget used: 1 search of 6, 5 WebFetch of 5 (cap reached), plus 3 non-WebFetch curl attempts.

## CLAIM

The ledger entry for UQ-20261022-09 records as "the chief unrun check in this entry" a source
returned by five of its thirteen Gate 2 queries and again by both adversaries, **never identified
by title and never opened by anyone**. All that was recorded of it is the string `PMC10698772`.

The sub-claims I was sent to settle:

- (a) full front matter;
- (b) my read level, with failed routes;
- (c) what the paper is actually about;
- (d) whether it measures the effect of a **human settings change** on glycaemic outcomes in users
  of an automated insulin delivery (AID) system — and if so, its unit, endpoint, comparator,
  estimand and printed numbers;
- (e) **decisive**: whether it separates a human settings edit from the controller's **own
  concurrent adaptation**, answered yes/no with a quotation;
- (f) whether it prints any quantity for how much the controller adapted on its own over a period
  (a ledger entry claims no opened source logs such a quantity).

## READ LEVEL

**ABSTRACT ONLY — and at second hand, not verbatim.**

This needs stating precisely, because the gap between what I have and a verbatim abstract is
load-bearing for sub-claims (d), (e) and (f):

1. **Front matter: obtained, complete, from the Crossref deposit** (`api.crossref.org/works/
   10.1089/dia.2023.0308`, read through WebFetch). This is publisher-deposited metadata, **not the
   article's own printed front page**. Rule (7) of my instructions says to take front matter from
   the front matter and never from a short form someone else wrote; a Crossref deposit is the
   publisher's own structured record, which is the closest available substitute, but it is not the
   printed page and I did not see the printed page. Flagged as a deviation, not hidden.
2. **Abstract: obtained only as a SUMMARY.** The Crossref record carries a full abstract, but the
   WebFetch summariser returned it **paraphrased**, explicitly declining to reproduce it because of
   the quotation cap, and surfaced exactly **one partial quotation**. I did not get ordered
   consecutive segments of it, and at the cap I cannot go back for them. So I hold the abstract's
   *content* but can quote almost none of it.
3. **Body: NOT READ AT ALL.** No table, figure, sentence, method section or result from the body of
   this paper has passed in front of me.

**COULD NOT READ, not NOT FOUND, and not paywalled-and-unavailable.** The paper certainly exists,
is correctly identified, and — because it carries a PMCID — **has a free full text deposited in
PubMed Central**, i.e. it is open at a route that is hard-blocked in this environment. The failure
is environmental, not a property of the source.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Front matter, as served by the Crossref deposit

| Field | As served |
|---|---|
| Title | **Therapy Settings Associated with Optimal Outcomes for t:slim X2 with Control-IQ Technology in Real-World Clinical Care** |
| Authors, in order | 1. **Laurel H. Messer** (given: `Laurel H.`, family: `Messer`); 2. **Marc D. Breton** (given: `Marc D.`, family: `Breton`) |
| Journal (container-title) | **Diabetes Technology & Therapeutics** |
| Volume | **25** |
| Issue | **12** |
| Pages | **877–882** |
| Published, print | **December 2023** |
| Published, online | **23 November 2023** |
| Publisher, as served | **"SAGE Publications"** |
| Type | `journal-article` |
| ISSN | 1520-9156 (print); 1557-8593 (electronic) |
| DOI | **10.1089/dia.2023.0308** |
| PMID | **37751154** |
| PMCID | **PMC10698772** |

Two front-matter caveats I am not silently correcting:

- **Two authors only.** This is a two-author paper. That is unusually short an author list for a
  20,764-person device-registry analysis and is worth noting if the ledger ever attributes it to a
  consortium or trial group.
- **The served publisher field is anachronistic.** Crossref returns `SAGE Publications`, but the
  DOI prefix `10.1089` is Mary Ann Liebert's, and the article is a December 2023 issue. The
  publisher field reflects the *current* depositor after the Liebert titles moved, not the
  publisher of record at publication. I report the field as served and flag the mismatch rather
  than overwriting it.

### The one quotation I actually hold

From the abstract's conclusion, surfaced by the summariser and **explicitly labelled by it as a
partial quote**:

> "The correction Factor setting may be the most impactful "lever to pull" for clinicians and CIQ users"

Handling notes on this string, because it is the only quotation in this note and it is damaged:

- It is **partial** — the summariser said so. I do not know what precedes or follows it, so per
  rule (3) I **cannot certify the grammar on either side of the cut**. It may be the whole
  sentence; it may be the back half of a hedged construction.
- Its capitalisation is internally inconsistent (`correction Factor`, lower-case `c`, where the
  same term is `Correction Factor` elsewhere). That is either an artefact of the relay or an
  oddity in the deposit. **Reproduced as served; not corrected.**
- The inner quotation marks around `"lever to pull"` are the **authors' own scare quotes**, which
  matters: the authors are themselves signalling that "lever to pull" is a figure of speech.
- The modal is **"may be"**, and the superlative is **"the most impactful"** relative to the other
  settings they examined — not an absolute claim.

**This is a reconstruction of nothing.** I assembled no multi-fragment string, because I never got
consecutive segments. Everything below that is not inside the quotation above is the summariser's
paraphrase of the deposited abstract, and I mark it as such throughout.

### (c) What the paper is about — from the summarised abstract

As paraphrased by the summariser from the Crossref abstract (**not quotations**):

- **Objective:** to identify insulin dosing parameters linked to optimal outcomes for people using
  t:slim X2 with Control-IQ.
- **Methods:** a **retrospective analysis of deidentified user data**, examining **Correction
  Factor**, **carbohydrate-to-insulin ratio**, and **basal rate** settings, **using regression to
  assess their relative importance**.
- **Results:** data from **20,764 individuals**. More aggressive Correction Factor settings
  predicted **higher time in range** and **lower coefficient of variation**, with **negligible
  impact on time below range**. Higher basal rates and lower carb ratios predicted **more time in
  range but also more hypoglycaemia**. The **strongest predictor across outcomes was the average
  number of user-given boluses per day**.
- **Conclusion:** the Correction Factor is described as possibly the most impactful setting for
  optimising time in range without increasing hypoglycaemia (the quoted sentence above).

**Source type.** This is a **primary retrospective observational analysis** of a device
manufacturer's real-world user dataset. It is **not** a review, protocol, guideline, editorial or
column. At 877–882 it is a **six-page short-form article** — in *Diabetes Technology &
Therapeutics* that page length is consistent with an Original Article of the brief kind, but I did
not see the printed article-type label and do not assert it. No finding in what I read is
attributed by the authors to someone else.

### (d) Does it measure the effect of a HUMAN SETTINGS CHANGE on glycaemic outcomes in AID users?

**On the evidence I hold: no — it measures something adjacent and importantly different.** The
distinction is the whole of this check, so I set it out as the four things I was asked to name,
flagging which are established and which are not:

- **Population / setting:** users of **t:slim X2 with Control-IQ** — a specific commercial
  hybrid closed-loop system — in **real-world clinical care**, not a trial. So: yes, these are
  users of an AID system. That part of the regime matches.
- **Unit of analysis:** the **individual user**. n = **20,764 individuals**. This is the one
  quantity I can name with confidence, and it is printed **in the abstract** (as deposited);
  I cannot say which table or sentence of the body restates it.
- **Endpoints:** **time in range**, **coefficient of variation**, **time below range**. (Units,
  windows and the CGM-derived denominators are not available to me: I do not know the observation
  period over which TIR was computed, and the abstract as served does not state it.)
- **Comparator:** **none stated, and structurally there may be none.** What is described is a
  regression across users relating *settings values* to *outcome values*. There is no described
  before/after contrast, no control arm, no interrupted time series.
- **Estimand:** as described, an **association / predictive importance** — "predicted", "relative
  importance", "strongest predictor" — **not the effect of an intervention**. The abstract's own
  title word is **"Associated with"**, not "effect of".

**The decisive regime point.** A settings *value* is a state; a settings *change* is an event. This
paper, as described, relates **levels** of Correction Factor, carb ratio and basal rate **across
20,764 different people** to those people's outcomes. It does not, on anything I can see, follow
one person across an edit. A claim about **what happens when a clinician or user changes a
setting** is a claim about a within-person event, and it sits **outside** the regime of a
between-person cross-sectional regression. The authors themselves make exactly this leap in their
conclusion — "the most impactful 'lever to pull'" is advice about *pulling* a lever, derived from
observing where levers *sit*. That the authors made the leap does not make it the paper's
measurement.

**Numbers: I can name only one.** Asked to answer a quantity question by naming the number and
where it is printed, I must answer honestly: the **only** figure I hold is **n = 20,764
individuals**, from the abstract. I hold **no** regression coefficient, **no** percentage-point TIR
difference, **no** confidence interval, **no** p-value, **no** R² or relative-importance weight,
and **no** observation window. What the paper *does* with its numbers, in the vocabulary I was
given: the abstract **ANNOUNCES directions** (more aggressive CF → higher TIR, lower CV,
negligible TBR change) and **ANNOUNCES a ranking** (boluses/day strongest). Whether the body
**MEASURES** those with printed effect sizes is exactly what I could not open. I will not guess
that a regression paper prints coefficients, however likely that is — that inference is not a read.

**Also worth flagging for the ledger:** the reported **strongest predictor is not a setting at
all**. "Average number of user-given boluses per day" is a **user behaviour** — how often the
person bolused — competing in the same model as the three settings. Anyone citing this paper for
"settings drive outcomes" is citing a paper whose own headline finding is that **behaviour beat
settings**.

### (e) THE DECISIVE ONE — does it separate a human settings edit from the controller's own concurrent adaptation?

**I cannot answer this yes or no with a quotation, and I will not manufacture one.**

What I can state at each level of confidence:

- **Quotation available: NONE.** I did not read the body. There is no sentence I can put in front
  of the ledger on this point, in either direction. Any yes/no I wrote here would be the exact
  fabrication this ledger exists to catch.
- **Design-level reading (an inference from a summarised abstract, not a read):** the question as
  posed may not arise in this paper at all. Separating a human edit from concurrent controller
  adaptation is a problem that only exists if you are studying **edits over time**. If the design
  is a **between-person regression on settings values**, there is no edit and no "concurrent"
  window to disentangle — the confound in play is instead the ordinary cross-sectional one (people
  with aggressive Correction Factors may differ systematically from people without them, in
  engagement, duration of use, diabetes self-management and clinician contact), which is a
  different confound entirely and one the abstract as served says nothing about.
- **Therefore:** on the evidence I hold, the paper **does not separate** a human settings edit from
  controller self-adaptation — **but not because it tried and failed, and not because it
  acknowledged the problem**. It appears not to be studying edits. That is a **scope** answer, not
  a **finding** answer, and the difference must survive into the ledger.

**Unresolved and material:** Control-IQ's own behaviour between a user's programmed settings and
delivered insulin is the mechanism the question turns on. Whether Messer & Breton discuss it, and
in what terms, is in the body I could not open. **Silence in a summarised abstract is not silence
in the paper** (rule 9).

### (f) Does it print any quantity for how much the controller adapted on its own over a period?

**COULD NOT ESTABLISH.** Nothing in the abstract as served mentions controller self-adaptation,
automated-delivery drift, or any adaptation magnitude over a period. But an abstract is six
sentences of a six-page paper, and **the absence of a thing from an abstract is not its absence
from the paper**. I am explicitly refusing to convert my non-read into the finding "this paper
prints no such quantity", because that is the shape of error the ledger keeps repeating.

What I can say about the ledger's claim that **"no opened export logs any such quantity"**: this
paper **remains unopened**, so it can neither confirm nor refute that claim. It stays an open hole,
now with a name and a DOI attached to it.

## REGIME

Stated as precisely as my read level permits:

- **Population:** real-world users of **one** commercial AID system, **t:slim X2 with Control-IQ**,
  in routine clinical care; deidentified manufacturer-held user data. Not a trial cohort, not
  multi-device, not multi-manufacturer. Nothing I read establishes the age range, diabetes type
  (presumably type 1, not stated in what I hold), country mix, or duration of system use.
- **Unit of analysis:** the individual user; **n = 20,764**.
- **Exposure / instrument:** the **programmed therapy settings** themselves — Correction Factor,
  carbohydrate-to-insulin ratio, basal rate — as **levels**, plus the behavioural covariate
  **average user-given boluses per day**. Not settings *deltas*. Not clinician actions. Not
  protocolised titration.
- **Endpoints:** CGM-derived **time in range**, **coefficient of variation**, **time below range**.
  Thresholds for "in range" and "below range" are **not available to me**, so I cannot re-derive
  anything at the authors' own stated threshold as rule (8) requires — I do not know what their
  threshold was. Any ledger figure from this paper that carries a threshold should be treated as
  unverified until the body is opened.
- **Estimand:** regression **association** and **relative predictive importance** across users.
- **Direction of claim the paper supports:** "users whose settings look like X tend to have
  outcomes like Y."
- **Direction of claim it does NOT support, on this evidence:** "changing a user's setting from X
  to X′ produces outcome change Y" — and, a fortiori, "the glycaemic change following a human
  settings edit is attributable to that edit rather than to the controller's concurrent
  adaptation." **The claim handed to me sits outside the regime of what this paper measures.**

## DEFECTS FOUND

Defects in the ledger's handling of this source, and in my own read, listed so neither gets lost:

1. **The ledger recorded the one identifier that cannot be used here.** `PMC10698772` is, in this
   environment, a dead string: PMC is hard-blocked. The DOI (`10.1089/dia.2023.0308`) and PMID
   (`37751154`) were **one conversion call away** the whole time. Recording the PMCID alone and
   nothing else is plausibly *why* five Gate 2 hits and two adversaries went by without anyone
   opening it. **Fix the record to carry DOI + PMID + title, not a PMCID.**
2. **The entry's own characterisation of the gap is now partly contradicted.** The ledger says the
   source was "never identified by title". It is now identified: Messer & Breton, *Therapy Settings
   Associated with Optimal Outcomes for t:slim X2 with Control-IQ Technology in Real-World Clinical
   Care*, Diabetes Technol Ther 2023;25(12):877–882. The "never opened" half of the ledger's
   statement **still stands**, including after my attempt.
3. **A paper whose title contains "Therapy Settings" and "Outcomes" is not thereby a paper about
   changing settings.** The title says **"Associated with"**. If any Gate 2 query matched this
   source because it looked like a settings-change study, that match was on the topic, not the
   measurement. This is the regime error the instructions warn is the one that moves verdicts.
4. **The paper's headline predictor is a behaviour, not a setting** (boluses per day beat all three
   settings). Any ledger use of this source as evidence that *settings* dominate outcomes
   misreports its own result ordering.
5. **The one quotation I hold is damaged and partial**, with inconsistent capitalisation
   (`correction Factor`) and an uncertifiable cut on both sides. Reproduced as served and flagged.
   It should not be re-quoted onward as if it were a verified full sentence.
6. **My own read is thinner than it looks.** I have front matter from a deposit rather than a
   printed page, an abstract in paraphrase rather than verbatim, and **no body at all**. Anyone
   reading this note should not treat (c) as a quotation-backed description.
7. **Crossref's publisher field is anachronistic** (`SAGE Publications` for a Liebert-prefix 2023
   article). Reported as served; flagged, not corrected.
8. **No quantity from this paper is safe to carry into the ledger except n = 20,764.** Not a
   coefficient, not a TIR difference, not a threshold, not an observation window.

## ROUTES THAT FAILED

Recorded in the order attempted, with the exact failure mode, so the next checker spends nothing
rediscovering them:

| # | Route | Tool | Result |
|---|---|---|---|
| 1 | `www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=PMC10698772&format=json` | WebFetch | **HTTP 302** to the new PMC-hosted idconv path; nothing retrieved. Not a failure of the service — the v1.0 path has moved. |
| 2 | `pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/?format=json&ids=PMC10698772` | WebFetch | **SUCCESS.** Returned DOI + PMID. **Note: the idconv endpoint works even though PMC article pages are blocked** — worth recording as a standing route. |
| 3 | `api.crossref.org/works/10.1089/dia.2023.0308` | WebFetch | **SUCCESS** for structured front matter; abstract returned **paraphrased, not verbatim**, the summariser citing the quotation cap. |
| 4 | `www.liebertpub.com/doi/10.1089/dia.2023.0308` | WebFetch | **FAILED — `client_error` at the site; nothing of the page retrieved.** |
| 5 | `www.liebertpub.com/doi/10.1089/dia.2023.0308` | curl | **FAILED — `curl: (56) CONNECT tunnel failed, response 403`.** Tool-scoped, per standing routing guidance; not evidence the host is blocked. |
| 6 | `www.liebertpub.com/doi/full/10.1089/dia.2023.0308` | curl | **FAILED — CONNECT tunnel 403.** |
| 7 | `journals.sagepub.com/doi/10.1089/dia.2023.0308` | curl | **FAILED — CONNECT tunnel 403.** Tried because Crossref names SAGE as depositor. Untested through WebFetch — **the most promising unspent route for the next checker.** |
| 8 | `pubmed.ncbi.nlm.nih.gov/37751154/` | WebFetch | **FAILED — served an empty shell.** Page title `pubmed.ncbi.nlm.nih.gov`, one viewport meta tag, a single "HHS Vulnerability Disclosure" link, **no article content whatsoever**. Consistent with the NCBI bot interstitial. **PubMed abstract pages should be treated as blocked here, alongside PMC and Europe PMC.** |
| — | `pmc.ncbi.nlm.nih.gov/articles/PMC10698772` | **NOT ATTEMPTED** | Hard-blocked by standing guidance (reCAPTCHA interstitial). Returned as the #1 and #2 web-search hits; deliberately not spent on. |

**Budget exhausted at route 8: 5 of 5 WebFetch used.** Per instruction, I stopped rather than
working around the cap. One web search of six used; further searches would return links I have no
fetches left to open.

**Named for the next checker, in priority order:** (i) `journals.sagepub.com/doi/
10.1089/dia.2023.0308` **through WebFetch** (never tried through that tool); (ii) the Crossref
abstract again, demanding **ordered consecutive ≤110-character segments** explicitly rather than a
description, which would at least convert the abstract from paraphrase to verbatim; (iii) a
`doi.org/10.1089/dia.2023.0308` resolution to see where it now lands.

## BEARING ON THE LEDGER ENTRY

**The ledger's self-accusation is upheld, and only half-cured.**

1. **Upheld.** A source that five of thirteen Gate 2 queries and both adversaries returned went
   unopened and unnamed. It took **one** conversion call and **one** metadata call to put a title,
   two authors, a journal, a volume, a page range and a DOI on it. The entry's description of this
   as the chief unrun check is accurate, and the cost of running it was two calls.
2. **Half-cured.** The paper is now **identified**. It is **still not opened** — by the ledger, and
   not by me. **COULD NOT READ, not NOT FOUND.** And because it carries a PMCID, a free full text
   exists; the obstruction is this environment, not the literature. **Do not close this check.**
3. **The entry should not treat this source as supporting a human-settings-change claim.** On
   abstract-level evidence, Messer & Breton is a **between-person cross-sectional regression
   relating settings *levels* to CGM outcomes across 20,764 Control-IQ users** — "Associated with",
   in its own title. A claim about the glycaemic effect of a **settings edit** is a within-person
   event claim and **sits outside that regime**. The authors' own "lever to pull" conclusion makes
   precisely that leap, which means a reader who takes the conclusion at face value inherits the
   leap. If the entry leaned on this source for edit effects, that lean is **unsupported at my read
   level** and should be marked so rather than resolved either way.
4. **Sub-claim (e) remains genuinely open.** I found **no quotation** bearing on whether a human
   settings edit is separated from the controller's concurrent adaptation. My design-level reading
   says the question probably does not arise in this paper — but that is an inference from a
   paraphrase, and the ledger should record it as **unresolved**, not as a negative finding. The
   honest entry is: *identified, unopened, decisive question unanswered.*
5. **Sub-claim (f) likewise.** The ledger's claim that no opened source logs a controller
   self-adaptation quantity is **neither confirmed nor refuted** here, because this source is still
   not among the opened. Its abstract does not mention such a quantity; its body is unexamined.
6. **A process fix worth more than this one check.** Record sources by **DOI + first author + year
   + title**, never by PMCID alone. The identifier the ledger chose is the one identifier this
   environment cannot open, and that choice is a sufficient explanation for seven retrievals
   without a single read.
