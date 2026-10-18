# UQ-20261018-20 — Source read: Bandyadka et al., Frontiers in Cell Death (2025)

**DOI:** 10.3389/fceld.2025.1677498
**Read date:** 2026-10-18
**READ LEVEL: FULL TEXT (via summariser).** All body text reached through WebFetch's
markdown+summariser pipeline on the publisher's own `/full` page. I never saw unmediated
raw text: every route that would have given it (curl to frontiersin.org, to the Frontiers
public-files host, and to api.crossref.org) was policy-denied by the egress proxy. The
summariser caps quotations near 125 characters, so every quote below is a short fragment
and I note where a sentence was shortened. No quotation came back mid-word truncated.

**Budget:** 1 web search, 7 web fetches (at budget, not exceeded). 3 additional curl
attempts were policy refusals, logged below and not retried.

---

## HEADLINE CORRECTION BEFORE ANY QUESTION

**This is a REVIEW article, not original research.** The Frontiers article-type label at
the top of the page reads "REVIEW article". The ledger's framing — "finding that 20-30%
of mitotic spermatogonial cysts die spontaneously" — attributes a *finding* to a review.
The 20%–30% figure carries **no literature citation**: the only parenthetical after it is
"(Figure 3B)", a pointer to the review's own figure. And it is hedged: the sentence opens
"Imaging of fixed testis samples suggests that". Treat it as a lab-internal observation
asserted in a review, not as a published primary measurement with a traceable n.

---

## Q1 — Existence, title, author line, journal, year, article number, DOI

**Exists. Confirmed.**

- **Title (from the article's own header):** "Sacrificing cells of the cyst: non-apoptotic
  cell death in germline cysts via acidification"
- **Author line, printed order:** Shruthi Bandyadka(1,2); Logan Tohline(1);
  Georgette-Vanelle Wandji(1); Hila Toledano(3,4); Kimberly McCall(1,*)
- **Journal:** Frontiers in Cell Death — **confirmed**
- **Volume:** 4 · **Year:** 2025 — **confirmed** · **Published:** 29 October 2025
- **Article number:** 1677498 · **DOI:** 10.3389/fceld.2025.1677498
- **Reference count (Crossref):** 98
- **Article type:** REVIEW

**Author line checked twice, per rule 4:** against the article's own first-page header,
and against Crossref's ordered `author` array. The two agree exactly, including order:
Bandyadka (sequence: first), then Tohline, Wandji, Toledano, McCall. McCall is the
corresponding author (asterisk) and is **last**, not first — the usual failure mode here
would be to promote her. Toledano is the second-to-last author, affiliations 3,4.

Frontiers does not print a separate "article number" field on the page; 1677498 is the
manuscript ID carried in the DOI and confirmed as Crossref's `article-number`.

---

## Q2 — ORGANISM AND UNIT (the point of this check)

**Organism of the quantitative claim: *Drosophila* (fruit fly), testis. Not a mammal.**

**Unit of the 20%–30% claim: the CYST, not the cell.** Body text, verbatim fragment:

> "20%–30% of mitotic spermatogonial cysts undergo spontaneous germ cell death under
> homeostatic conditions"

(~104 chars, under the limit. The full sentence begins "Imaging of fixed testis samples
suggests that," — I shortened the quote at the front to stay under the summariser cap.)

Setting the unit's meaning, verbatim fragment:

> "forming spermatogonial clusters of 2, 4, 8, and 16 germ cells within individual cysts"

(citation attached: Gönczy et al., 1997)

**LEVEL OF AGGREGATION: per cyst** — i.e. per clonal cluster of 2/4/8/16 interconnected
spermatogonia descended from one gonialblast, counted as a single unit because the cyst
dies and is engulfed as a unit. The review states cyst cells engulf the whole cyst as one
unit. So a "death event" here is **one cyst**, representing 2–16 cells, **not one cell**.

**!! INTERNAL INCONSISTENCY IN THE PAPER'S OWN AGGREGATION.** Figure 3A's caption reports
the same phenomenon **per cell**, at a different number:

> "Approximately one-quarter of spermatogonia undergo GCD (red)."

(60 chars, complete, not truncated.)

So the body text says 20%–30% **of cysts** and the figure caption says ~25% **of
spermatogonia** (cells). These are not interchangeable: 25% of cysts dying and 25% of
individual spermatogonia dying are only the same number if death is perfectly cyst-wide
and cyst size is uniform across the dying and surviving populations. The review does not
reconcile them. Anyone quoting "20-30%" must say which denominator they mean. The ledger's
reported unit ("cysts") matches the **body text**, and is the defensible choice.

**Is any part of the paper about a MAMMAL? YES.** The review is comparative and contains a
dedicated mammalian section:

- **Section 6: "Germline death in mouse oogenesis is non-apoptotic"** — mouse ovary,
  primordial germ cell cysts. The one mouse number I saw, verbatim fragment:
  > "clusters of up to 32 synchronously developing, interconnected nurse cells"
  (citations attached: Pepling et al., 1999; Spradling et al., 2022). **Aggregation: cells
  per cyst**, mouse ovary. This is a structural count, not a death rate.
- Human appears only in passing (human osteoclasts, as a syncytium/phagocyte example).
  *C. elegans*, "mammals/mammalian", "rodents" and "insects" appear as generic comparators.

**One unresolved attribution, flagged rather than asserted.** The article contains a
sentence "the number of dying germ cells was reduced by approximately 33%" in a p53
context. My first un-primed read placed it in *Drosophila* testis (p53 mutant flies),
while the same read's organism list separately noted "p53−/− mice". I exhausted my fetch
budget before I could isolate that sentence's organism in its own request, so **I do not
know which organism the ~33% belongs to** and I am not going to guess. If the ledger needs
that number, it needs one more targeted read. Confidence: low. This is the only point in
this read where I could not settle an organism/unit question.

**Bottom line for the ledger's own risk (a real paper aimed at an adjacent object):** the
quantitative 20-30% claim is squarely *Drosophila* testis, per cyst. The mammalian content
is real but separate, qualitative/structural in what I saw, and carries no competing
percentage. The claim has **not** been mis-transplanted from a mouse result.

---

## Q3 — The 20-30% figure, checked separately

- **Paper's own figure:** "20%–30%" (body text, per cyst) / "approximately one-quarter"
  (Figure 3A caption, per spermatogonium). An en-dash range, written "20%–30%".
- **Denominator:** "mitotic spermatogonial cysts" — i.e. cysts still in the mitotic
  amplification phase (the 2/4/8/16-cell stages), **not** all germline cysts and not
  post-mitotic/meiotic cysts.
- **Numerator:** cysts undergoing "spontaneous germ cell death". **Dying cysts**, in the
  body-text version. (The figure-caption version makes the numerator dying spermatogonia.)
- **Stated uncertainty: NONE.** No n, no number of testes or cysts scored, no SD/SEM, no CI,
  no statistical test. The 20%–30% range is presented bare. The only hedge is linguistic:
  "Imaging of fixed testis samples **suggests** that".
- **Citation: NONE.** Followed only by "(Figure 3B)". Figure 3B is described as wild-type
  testes immunostained for TUNEL, Fas3 and Vasa — an illustrative micrograph, not a
  quantification panel. So the number is not sourced to a prior paper and, as far as the
  page shows, not backed by a plotted distribution either.
- **Is "spontaneous" the paper's own word? YES**, verbatim, as the adjective directly before
  "germ cell death". The paper also calls the setting "stress-free spermatogenesis" and
  "homeostatic conditions".
- **Contrasted with:** **starvation-induced** germ cell death. The review describes
  "starvation conditions where apoptosis of cyst cells triggers germ cell death", and
  elsewhere contrasts with irradiation/DNA-damage-induced death. So "spontaneous" means
  *not provoked by an experimental stress* — developmental/physiological death under
  normal husbandry.

**PREVALENCE, NOT INCIDENCE — important for this ledger.** The figure comes from "imaging
of **fixed** testis samples", i.e. a static snapshot. 20–30% of cysts are *in a dying
state at the moment of fixation*. That is a point-prevalence, not a per-cyst lifetime risk
and not a rate. Any ledger statement of the form "20-30% of cysts die" is an
interpretation that additionally requires the dying-state residence time and the
mitotic-phase residence time (see Q5).

---

## Q4 — Predominantly non-apoptotic? Evidence?

**YES, the paper asserts non-apoptotic death**, and it is the review's central thesis (the
title itself: "non-apoptotic cell death in germline cysts via acidification").

Evidence is **genetic (loss-of-function) plus marker/organelle**, as relayed in a review:

**(a) Effector caspases dispensable** — verbatim fragment:
> "loss of function of *Drice* and *Dcp-1* failed to reduce levels of cell death"
(~76 chars, complete.)

**(b) Lysosomal/acidification genes required** — verbatim fragment of the gene list:
> "*CathD* (*cathepsin D*), *dor* (*deep-orange*), *car* (*carnation*), and *DNaseII*"
(~75 chars, complete.) The review states a screen of these mutants "yielded a significant
decrease in the number of dying cysts". **Aggregation: number of dying cysts** — per cyst
again, consistent with the body-text denominator.

**(c) IMPORTANT QUALIFIER — it is not caspase-free.** The review states germ cell death
"requires an atypical function of Caspase-9/Dronc acting independently of its catalytic
activity". So the initiator caspase Dronc **is** required, in a non-catalytic role. A
ledger sentence saying this death is "caspase-independent" would be wrong; "independent of
effector caspases Drice/Dcp-1, and of Dronc's catalytic activity" is right.

**(d) Modalities named:** **phagoptosis** (killing-by-engulfment — cyst cells engulf the
live cyst as a unit) and **acidification-dependent non-apoptotic death** (lysosomal
degradation, Rab5/Rab7 phagosomes, Lamp1). Engulfment machinery named: Draper (Drpr),
Ced-12, integrins; Crq affects acidification; Drpr and Ced-12 needed for engulfment.
Phosphatidylserine exposure is placed **after** phagosome formation, and the review notes
no "eat-me" signal on live germ cells has been identified. V-ATPases in spermatogonial
death are flagged as untested.

**(e) PER-MODALITY SHARES: NOT FOUND.** Read at FULL TEXT (via summariser) level and asked
for explicitly in its own request. The paper gives the single aggregate 20%–30% and **no**
breakdown — no apoptotic-vs-non-apoptotic split, and no phagoptosis-vs-acidification split.
So the word "predominantly" in the ledger's reported claim is **not** backed by a
quantified share anywhere in this paper. It is a qualitative claim resting on the
loss-of-function genetics (effector-caspase mutants don't reduce death; lysosomal mutants
do). That distinction matters if the ledger's question is about *shares*.

---

## Q5 — Corpse persistence time / prevalence-to-incidence conversion

**Partially present, but NOT a corpse persistence time.** The one duration in the paper,
verbatim fragment:
> "this germ cell death process is prolonged, taking more than 24 h from initiation to
> completion"
(citation attached: **Chiang et al., 2017**.) This is *Drosophila* testis, spontaneous
germ cell death. **Aggregation: per death event / per cyst**, as a process duration.

**What is NOT there:** no corpse persistence time, no engulfment duration, no clearance or
degradation rate, no time-to-disappearance of a TUNEL-positive cyst. Nurse cell death in
the ovary is given only as a developmental-stage window ("progressing asynchronously from
stages 12–14"), which is a staging interval, not a duration. **NOT FOUND** for corpse
persistence proper.

**Can prevalence be converted to incidence from this paper alone? NO.** *My own arithmetic
and reasoning, flagged per rule 9:* the conversion needs prevalence (have it: 20–30% of
mitotic cysts, no uncertainty stated) divided by the dying-state residence time (have a
lower bound only: ">24 h", one-sided, no upper bound, no distribution) and multiplied by
the total time a cyst spends in the mitotic amplification phase (**the paper does not state
this**). With a one-sided bound on one term and the third term missing, no incidence
follows — only the qualitative statement that because the dying state lasts >24 h, a
snapshot **overstates** the per-unit-time death rate relative to a short-lived marker. I
have deliberately not produced a number. Carrying the paper's stated uncertainties through
is impossible because the paper states none on the 20%–30%.

---

## Q6 — Does it pose, as open, the per-modality shares of physiological cell death?

**NOT FOUND.** Read at FULL TEXT (via summariser) level; the "Open questions and future
directions" section was requested in its own dedicated fetch and enumerated in full. Its
eight open questions are:

1. Whether all phagoptotic deaths use the same molecular mechanisms.
2. How the nurse cell plasma membrane is removed (possibly trogocytosis before acidification).
3. Whether vesicles near stretch follicle cells engulf nurse cell material or release contents into it.
4. Whether other follicle cell types (e.g. border cells) can also kill and clear nurse cells.
5. Whether testis and ovary death share a mechanism, given differences in how many cells engulf each target.
6. Whether Toll pathway components act in an immune or morphogenic role, or both.
7. What gene expression changes occur in phagoptotic cells (single-cell methods may reveal).
8. How germline death mechanisms have evolved across organisms.

Every one is **mechanistic or evolutionary**. None asks what *fraction* or *share* of
physiological cell death in a tissue runs through each modality. Q1 ("whether all
phagoptotic deaths use the same molecular mechanisms") is the nearest neighbour and is
still a mechanism question, not a share question.

This is a genuine NOT FOUND in a section I read, **not** a could-not-read. Caveat on
strength: the reading was summariser-mediated, so I cannot exclude a clause phrased in
unexpected terms that the summariser folded into one of the eight paraphrases above.
Confidence: medium-high for the Open Questions section; medium for the article as a whole.

---

## FAILED ROUTES (exact error text, rule 10)

1. **WebFetch `https://doi.org/10.3389/fceld.2025.1677498`** — REFUSED, not retried:
   `{"error_type":"PROXY_REJECTED","source":"proxy","message":"The WebFetch proxy rejected
   the request (HTTP 429; rate limited — the server requests waiting ~60s before retrying):
   Do not fetch this page again, even after waiting; other pages may be refused too.
   Before doing anything else, tell the user which page you could not read and why, then go
   on without it."}`
   Per instruction, recorded and abandoned; **not** counted as a check that ran. Routed to
   frontiersin.org directly instead (allowed publisher under rule 1).
2. **curl `https://public-pages-files-2025.frontiersin.org/.../text`** —
   `curl: (56) CONNECT tunnel failed, response 403`; proxy log:
   `connect_rejected (the egress proxy refused the connection or could not reach the host)`.
   This was the one route that would have given FULL TEXT RAW. Host not allowed.
3. **curl `https://www.frontiersin.org/journals/cell-death/articles/10.3389/fceld.2025.1677498/full`** —
   `curl: (56) CONNECT tunnel failed, response 403`; same `connect_rejected`.
4. **curl `https://api.crossref.org/works/10.3389/fceld.2025.1677498`** —
   `curl: (56) CONNECT tunnel failed, response 403`; proxy status recorded
   `gateway answered 403 to CONNECT (policy denial or upstream failure)` for
   `api.crossref.org:443`. Succeeded via WebFetch instead.

Proxy README is explicit that 403/407 are policy denials and must not be retried or routed
around, so **no raw-text read was achievable in this session**. Consequence: read level is
capped at FULL TEXT (via summariser) and every quotation is capped near 125 characters.
PMC/Europe PMC were never attempted (hard-blocked per rule 1); no PMCID route was needed
since the publisher page is open access.

## MY OWN ERRORS / NOTES (rule 12)

- **Fetch budget fully consumed (7/7)**, one of them on the refused doi.org call. That cost
  me the one extra read I needed to settle the organism of the "~33%" p53 sentence (Q2).
  Reported as unresolved, low confidence, rather than guessed.
- I spent 3 Bash/curl attempts on raw-text routes that were all policy-denied. These are
  not WebFetch-budget items but they were wasted effort; the proxy status endpoint should
  have been my first stop.
- Only 1 of 7 searches used. The single search was what surfaced the "REVIEW article" label
  and the publisher URL, so it earned its place.
- Rule 6 compliance: the 20%–30% string was first produced by an **un-primed** request (I
  asked for *every* number in the article without naming any figure), and only then
  re-checked. Rule 5 compliance: the caspase and lysosomal-gene strings were requested as
  separate quotes, not stitched. I have not merged any fragments into a single quotation;
  every quote above is one contiguous fragment from one request.

## VERDICT

Source is real, correctly identified, and open access. Organism (*Drosophila*), unit
(mitotic spermatogonial cysts), the 20%–30% figure, the word "spontaneous", and the
non-apoptotic direction all **check out against the document's own text**. Three
corrections the ledger must carry:

1. **It is a Review, not a research report.** The 20%–30% has no literature citation (only
   "(Figure 3B)"), is hedged with "suggests", and is stated with no n and no uncertainty.
2. **"Predominantly" is unquantified.** No per-modality share appears anywhere in the paper.
   The non-apoptotic claim rests on loss-of-function genetics, and Dronc/Caspase-9 *is*
   required non-catalytically — so "caspase-independent" would be a misstatement.
3. **The figure is a fixed-sample prevalence, not an incidence**, and the paper's own
   Figure 3A caption re-states it per *spermatogonium* ("approximately one-quarter"),
   not per cyst — two denominators for one phenomenon, unreconciled.
