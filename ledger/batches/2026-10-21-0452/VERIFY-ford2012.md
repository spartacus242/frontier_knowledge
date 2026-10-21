# VERIFY — Ford et al. 2012, "Quality Control Quantification (QCQ)"

Checker note. Fresh context. Reports what the source says, not whether anyone was right.
Date of check: 2026-10-21. Call cap: 6 searches / 5 fetches — 4 searches and 5 fetches spent.

---

## 1. Citation, as close to the source's own front matter as I could get

I never reached the publisher's own served page (see read level below). The front matter
below is taken from the **Crossref registry record for the DOI** (publisher-deposited
metadata, which is front matter at one remove) and corroborated by the **Washington
University Pure record** (profiles.wustl.edu), an institutional-repository entry.

- **Authors, in order, as deposited:** Eric C. Ford; Stephanie Terezakis; Annette Souranis;
  Kendra Harris; Hiram Gay; Sasa Mutic
- **Title, with the publisher's own capitalization:**
  "Quality Control Quantification (QCQ): A Tool to Measure the Value of Quality Control
  Checks in Radiation Oncology"
- **Journal, as the registry prints it:** `International Journal of Radiation
  Oncology*Biology*Physics` (asterisks are part of the deposited container title)
- **Volume:** 84 — **Issue:** 3 — **Pages:** e263-e269
- **Issued (print):** 2012, month 11 (November 2012 issue)
- **DOI:** 10.1016/j.ijrobp.2012.04.036
- **Elsevier PII (Crossref `alternative-id`):** S0360301612006049
- **Type:** journal-article
- **Article-type label** ("Physics Contribution" / "Clinical Investigation" / etc.):
  **not confirmed** — this appears on the journal's own article page, which I could not read.

---

## 2. Read level, and the routes that failed

**READ LEVEL: ABSTRACT ONLY — and at one remove.** This is weaker than a publisher-served
abstract and must not be recorded as a publisher read. What I actually hold:

- Crossref registry metadata (front matter only; `abstract` field absent).
- The abstract **as reproduced on a third-party institutional-repository page**
  (profiles.wustl.edu Pure record), and of that, mostly **summariser paraphrase**, with only
  **two** strings returned to me verbatim. I had no fetch budget left to re-read it with the
  ordered-consecutive-segment technique, so most of the abstract is paraphrase in my hands,
  not quotation.
- **No Methods, no Results, no tables, no figures.** Nothing from the article body.

**Routes attempted and refused (all recorded, none worked around):**

1. `https://doi.org/10.1016/j.ijrobp.2012.04.036` — WebFetch **PROXY_REJECTED, HTTP 429**,
   rate-limited with an explicit do-not-retry instruction. Treated as final.
2. `https://www.sciencedirect.com/science/article/pii/S0360301612006049` — WebFetch
   **ROBOTS_DISALLOWED (source: target)**. This is the publisher host the routing brief
   designated for this journal; it refused. Note for the ledger's routing notes: for this
   article ScienceDirect was robots-blocked, not paywall-limited.
3. `https://www.redjournal.org/article/S0360-3016(12)00604-9/abstract` (the exact URL a
   search returned, not a hand-edited path) — WebFetch **CLIENT_ERROR (source: target)**.
4. Three searches for an openly hosted full text or PDF of this paper returned nothing for
   it; the engine repeatedly drifted to Ford Motor Company quality control.
5. PubMed Central / Europe PMC — **not attempted**, hard-blocked per the routing brief.
6. Unpaywall — **not attempted by policy**: it requires a contact address, and no personal
   identifier goes into a URL or query string.

**COULD NOT READ, not NOT FOUND.** The article is real, registered, and indexed; its full
text exists and is paywalled/blocked to me. Every "could not check" below is a limit of my
access, never a statement that the paper is silent.

---

## 3. Claim (a) — front matter

**Holds.** Authors, title, journal, volume 84, issue 3, pages e263-e269, year 2012 and the
DOI all match the deposited front matter. Two form notes, neither substantive:

- The ledger's source line renders the title in **sentence case** ("Quality control
  quantification (QCQ): a tool to measure..."). The publisher's own capitalization is
  **title case** ("Quality Control Quantification (QCQ): A Tool to Measure..."). Per the
  rule that front matter governs, the title-case form is the source's.
- The ledger writes the journal as "International Journal of Radiation Oncology Biology
  Physics"; the deposited container title carries asterisks,
  `International Journal of Radiation Oncology*Biology*Physics`.

Author forms: the ledger's short form gives "Ford EC, Terezakis S, Souranis A, Harris K,
Gay H, Mutic S" — this matches the deposited given/family names exactly, six authors in
that order. No ghost author, no dropped author, no order change.

---

## 4. Claim (b) — "effectiveness of 97%" / "7 checks used in combination" /
##    "was not further improved with more checks"

### What I found verbatim

One sentence came back to me as a verbatim quotation from the abstract:

> "An effectiveness of 97% was achieved with 7 checks used in combination"

(Also returned verbatim, from the same abstract, and relevant to (d):)

> "A small percentage of errors cannot be detected by any of the standard formal QC checks"

### Grammar on both sides of the cut — the finding here

**The ledger's first two recorded strings are two cuts of a single clause, not two
statements.** "effectiveness of 97%" and "7 checks used in combination" are the left and
right halves of one sentence: *"An effectiveness of 97% was achieved with 7 checks used in
combination."* Reported as two separate "strings recorded from it", they can read as two
independent findings; they are one.

Grammar at the cuts:

- **"effectiveness of 97%"** — cut on the left drops the article "**An**"; cut on the right
  drops "**was achieved with 7 checks used in combination**". The right-hand cut is the one
  that matters: standing alone, "effectiveness of 97%" carries no attachment, and in a
  context that also lists per-check sensitivities it can be misread as a check's
  effectiveness. In the source the 97% exists **only** as the value of a seven-check
  combination. The fragment is verbatim; the cut changes what the number is about.
- **"7 checks used in combination"** — verbatim, and its grammar is intact as a noun phrase,
  but it is the object of "was achieved with" in the same sentence as the 97%. Quoting it
  separately hides that it is the 97%'s own qualifier.

### "was not further improved with more checks"

**NOT VERIFIED VERBATIM at my read level.** I did not obtain this string. What I have is the
summariser's rendering of the abstract's sense: "adding more checks gave no further gain",
and "Combining checks raised effectiveness to 97%, reached with seven checks, and adding
more checks gave no further gain." So the *proposition* (saturation at seven checks) is
present in the abstract; the *exact wording* "was not further improved with more checks" is
unconfirmed, and I cannot report the sentence it sits in or the grammar on either side of
its cut. A later pass with fetch budget should re-read the abstract in ordered consecutive
segments and settle this string.

**Verdict (b): partly.** One fragment pair confirmed verbatim but mis-split; third string
unconfirmed; the "quote the whole sentence each sits in" instruction only satisfiable for
the first sentence.

---

## 5. Claim (c) — the figures

### "physicist plan review at 63%"

**Supported, at paraphrase level.** The abstract as rendered to me: "Individual checks were
rarely effective, with pretreatment plan review by a physicist the best at 63%." So the
check is specifically **pretreatment plan review by a physicist**, and 63% is reported as
**the best of the individual checks**. I do not hold this sentence verbatim.

### "every individual check below 50% sensitivity except physicist plan review at 63%"

**COULD NOT CHECK — and flagged as an inference risk.** Nothing I read states a 50%
threshold or a ceiling on the other checks. The abstract says individual checks were
"rarely effective" and names 63% as the **best**. "Best = 63%" does **not** entail
"second-best < 50%"; the second-best could sit anywhere below 63%. Per-check sensitivities
live in the paper's Results table, which I could not read. This figure must stay unchecked,
not be treated as implied by the "best at 63%" sentence.

### "incidents detectable by 4.0 +/- 2.3 checks versus 2.6 +/- 1.4" — and what the two groups are

**COULD NOT CHECK.** The strings "4.0" and "2.6" do **not** appear anywhere in the text I
was able to read; neither do the stated uncertainties. These are Results-section figures.

**I decline to name the two groups.** The only two incident groups visible at abstract level
are the ones in the design: **292 high-potential-severity incidents** and **30 randomly
selected low-severity incidents**. That is a *candidate* comparator for a "4.0 vs 2.6 checks"
contrast and nothing more — I did not read the sentence that carries those numbers, and
asserting the grouping from the design alone would be exactly the inference this check is
meant to catch. Also unverified: whether "4.0 +/- 2.3" is a mean +/- SD, the unit (number of
checks per incident), and which group is which.

**Verdict (c): partly.** 63% supported (paraphrase); the 50% universal and the 4.0/2.6
comparison both unreachable.

---

## 6. Claim (d) — what the source MEASURES

Source type: a **primary study** — an original retrospective analysis of a voluntary
incident-reporting database at two academic radiation oncology clinics. **Not** a review,
protocol, guideline, editorial or column. (The journal's own article-type label is
unconfirmed; see section 1.) Nothing in the abstract attributes its central finding to
another work — the effectiveness figures are this paper's own.

At abstract level, as rendered to me:

- **Unit of analysis:** the **reported incident**, not the patient, not the treatment
  fraction, not the plan. 4,407 voluntarily reported incidents, 2007-2010, two academic
  clinics. The **assessed** set is 292 high-potential-severity incidents plus 30 randomly
  selected low-severity incidents (322 assessed).
- **Endpoint:** whether a given quality control check **"could have caught"** the incident —
  rendered to me as the investigators "determined which of 15 common quality control checks
  could have caught each one."
- **OBSERVED or JUDGED: JUDGED.** This is the load-bearing point of (d) and it is confirmed
  at abstract level. The modal is counterfactual — the checks did not run and get scored;
  investigators assessed retrospectively whether each check *could have* detected each
  already-reported incident. No check was prospectively exercised against an unknown. The
  exact verbatim form ("could have detected" vs "could have caught") is **unconfirmed** —
  I hold the paraphrase, so the ledger should not quote either wording as verbatim yet.
- **Comparator:** checks against one another (per-check effectiveness), and single checks
  against combinations of checks. There is **no** untreated arm and no empirical no-QC
  baseline — the counterfactual is the comparator.
- **Estimand:** a **proportion** — the fraction of *assessed reported incidents* that a given
  check, or a given set of checks, could have detected. Note the denominator carefully:
  "sensitivity"/"effectiveness" here is conditional on an incident having been **reported**.
  It is not sensitivity against all errors that occurred.
- **VOLUNTARILY REPORTED: YES, confirmed.** The abstract states the incidents were
  voluntarily reported, and that **none harmed patients**. The abstract itself carries the
  matching limitations: verbatim, "A small percentage of errors cannot be detected by any of
  the standard formal QC checks", and (paraphrase) that the findings need confirmation in a
  larger incident database. It also notes (paraphrase) that some common checks, such as
  pretreatment IMRT QA, contributed little.

**Verdict (d): mostly.** The two things the claim specifically asks after — detection
**judged** rather than observed, and incidents **voluntarily reported** — are both borne out
at abstract level. The verbatim wording of the "could have" phrase is unconfirmed.

---

## 7. Claim (e) — union, product of independent miss probabilities, or measured dependence

### THIS IS THE POINT OF THE CHECK AND I COULD NOT CHECK IT.

The combination method is a Methods-section matter. I read no Methods. **COULD NOT READ.**

What this means for the ledger, stated exactly:

- I **cannot** report the paper's own method in its own words. I have no Methods sentence,
  no equation, no statement of how multiple checks were combined.
- I **cannot** say whether the paper anywhere estimates a coupling or common-cause parameter
  between two checks. **Silence in what I read is not silence in the paper** — I read an
  abstract, where no such method would be expected to appear even if present. Recording
  "the paper does not estimate a coupling parameter" on the strength of this check would be
  an unsupported negative and must not be done.

### One inference, labelled as mine and not the paper's

The abstract's shape — 97% reached **at** seven checks, with no further gain from additional
checks — is *consistent with* a realised union computed over the observed incident set, and
sits awkwardly with a product of independent per-check miss probabilities: independent misses
multiplied would keep driving the detected fraction toward 100% with each check added, not
plateau at 97% and flatten. A hard plateau with a residual that **no** combination reaches
("A small percentage of errors cannot be detected by any of the standard formal QC checks")
is the signature of a fixed observed set containing incidents no listed check covers.

**This is my reasoning from the abstract's shape, not the paper's words, and it does not
settle (e).** It is a hypothesis for the next pass to confirm or kill against the Methods.

### What the next pass needs

Methods and Results of the article body, and Table(s) giving per-check sensitivities and the
combination calculation. Routes to try that I did not or could not: a library/institutional
copy; `redjournal.org` retried later (my failure there was a transient-looking CLIENT_ERROR
on a URL that search did return, so it is worth one retry); an author manuscript outside
PMC. ScienceDirect is robots-blocked for this PII and doi.org 429'd with do-not-retry —
neither is worth re-spending budget on.

---

## 8. Defects

1. **(e), the point of the check, is UNRESOLVED — could not read, not "paper is silent".**
   All three publisher routes refused. Any ledger entry asserting union-vs-product, or
   asserting the absence of a coupling/common-cause parameter, is currently unsupported.
2. **Read level is abstract only, and at one remove.** The abstract reached me through a
   third-party institutional-repository page, mostly as paraphrase; only two strings came
   back verbatim. The ledger should not record any of this as a publisher-served read.
3. **(b): two recorded strings are one sentence cut in two.** "effectiveness of 97%" and
   "7 checks used in combination" are halves of "An effectiveness of 97% was achieved with
   7 checks used in combination." Listed separately they read as two findings.
4. **(b): "effectiveness of 97%" is cut away from its qualifier.** Verbatim, but the 97%
   exists in the source only as a seven-check combination value; detached, it can be taken
   for a single check's effectiveness.
5. **(b): "was not further improved with more checks" not confirmed verbatim.** The
   proposition is in the abstract; the wording is unverified and its surrounding sentence
   unread.
6. **(c): "every individual check below 50%" is an inference from a "best at 63%" sentence,
   and does not follow.** Best = 63% says nothing about where the second-best sits. No 50%
   threshold appeared in anything I read. Unchecked.
7. **(c): the 4.0 +/- 2.3 vs 2.6 +/- 1.4 comparison is entirely unchecked** — the strings do
   not occur in the text available to me — **and the two groups must not be named** from the
   design's 292-high-severity / 30-low-severity split without reading the sentence itself.
8. **Unit-of-analysis and denominator caveat worth carrying forward:** "sensitivity" here is
   over *voluntarily reported, non-harming* incidents and is *judged counterfactually*, so it
   is not a check's sensitivity against errors in general. Any downstream use of 97%, 63% or
   the 50% figure that drops this conditioning overstates it.
9. **Minor front-matter form drift in the ledger's own source line:** title given in sentence
   case where the publisher uses title case; journal name given without the asterisks the
   deposited container title carries. Substance unaffected.
