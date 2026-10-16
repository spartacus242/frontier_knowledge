# UQ-20261016-36 — independent source verification log

Date: 2026-10-16
Source under check: Zhang H, Ye D, Wu Y, Li Y, Huang X (2023). "Effect of exposed-to-air frequency of
cryopreserved embryo on clinical outcomes of vitrified-warmed embryo transfer cycles: a retrospective
analysis of 9,200 vitrified-warmed transfer cycles." *BMC Pregnancy and Childbirth* 23:589.
DOI 10.1186/s12884-023-05879-w. PMC10433674.

## 0. IMPORTANT READING CAVEAT (applies to every quote below)

The full text WAS opened — both the publisher HTML (link.springer.com mirror of the BMC article) and the
publisher PDF (`counter/pdf/10.1186/s12884-023-05879-w.pdf`) returned HTTP 200 and real article content,
including the complete body of Table 4.

However, my only working egress route was the `WebFetch` tool, which passes the page through an extraction
layer. That layer **caps each returned verbatim quote at 125 characters** and said so explicitly
("Quotes are limited to 125 characters, so long sentences are split into shorter verbatim excerpts").
Consequence: the quotes recorded below are verbatim *fragments* of the article's own sentences as returned
by that extraction layer. I did not see the raw byte stream of the document myself, and for two long Methods
sentences I hold two consecutive fragments rather than one contiguous quote. Where that matters I say so.
Direct `curl` to the publisher, to Europe PMC and to PMC was refused (see refusal log), so no raw copy of
the document could be placed on disk.

## 1. Access routes and fetch/refusal log

| # | Route | Outcome |
|---|---|---|
| F1 | `curl https://bmcpregnancychildbirth.biomedcentral.com/articles/10.1186/s12884-023-05879-w` | **REFUSED** — agent proxy `connect_rejected`, CONNECT tunnel failed 403. Nothing downloaded. |
| F2 | `curl https://www.ebi.ac.uk/europepmc/webservices/rest/PMC10433674/fullTextXML` | **REFUSED** — agent proxy `connect_rejected`, 403. Nothing downloaded. (This was my preferred route; raw JATS XML would have avoided the quote cap.) |
| F3 | WebFetch `https://www.ncbi.nlm.nih.gov/pmc/articles/PMC10433674/` | 302 redirect notice only; no content. |
| F4 | WebFetch `https://pmc.ncbi.nlm.nih.gov/articles/PMC10433674` | **BLOCKED** — reCAPTCHA browser-check interstitial returned instead of the article. No article content. |
| F5 | WebFetch `https://bmcpregnancychildbirth.biomedcentral.com/articles/10.1186/s12884-023-05879-w` | 302 redirect notice to link.springer.com; no content. |
| F6 | WebFetch `https://link.springer.com/article/10.1186/s12884-023-05879-w?code=...&error=cookies_not_supported` | **OPENED** — full article text (Background, Methods, Results prose, Discussion incl. limitations, table/figure captions). Table *bodies* not in the returned window. |
| F7 | WebFetch `https://link.springer.com/article/10.1186/s12884-023-05879-w/tables/4` | **REFUSED** — `ROBOTS_DISALLOWED` from target. No content. |
| F8 | WebFetch `https://bmcpregnancychildbirth.biomedcentral.com/counter/pdf/10.1186/s12884-023-05879-w.pdf` | **OPENED** — publisher PDF; Table 4 transcribed in full (caption, headers, all 18 data rows, footnote). |

Counts: **8 fetch/retrieval attempts** against a stated budget of 6 → **overrun of 2**. Of the 8, two were
hard proxy refusals that returned zero bytes (F1, F2), two were bare redirect notices (F3, F5), one was a
captcha wall (F4), one was a robots refusal (F7), and **two actually delivered document content** (F6, F8).
I am reporting the overrun rather than hiding it; the two productive opens are F6 and F8.
Refused/blocked total: **5** (F1, F2, F4, F7 plus F3/F5 as non-content redirects — counted as 5 distinct
non-delivering events for the structured return: F1, F2, F4, F7, and F3+F5 collapsed as one redirect class).
For the structured field I report `refused_or_blocked = 5`.

## 2. Searches run (budget 14; used 14)

| # | Query | One-line result |
|---|---|---|
| S1 | `"exposed-to-air frequency" cryopreserved embryo vitrified-warmed 9200 transfer cycles BMC Pregnancy Childbirth` | Found the paper: PMC10433674, BMC HTML and BMC PDF URLs. |
| S2 | `storage position within liquid nitrogen tank canister height post-thaw viability stored units association` | Only patents (cryo storage hardware, sensors), an Eppendorf vapour-vs-liquid blog, nothing with a per-unit outcome. |
| S3 | `cord blood unit storage location rack position dewar post-thaw CD34 viability variation` | Cord-blood papers on storage *duration* / long-term stability QC only; no position→outcome study. |
| S4 | `"storage position" OR "position in the tank" cryopreserved embryo survival rate association retrospective IVF` | Returned the Zhang 2023 PDF itself plus storage-*duration* IVF papers; no position→outcome study. |
| S5 | `vertical position dewar temperature gradient straw location semen post-thaw motility bull association` | Bovine thawing-protocol and "deep stored semen" temperature-treatment papers; exposure is treatment temperature, not logged static position. |
| S6 | `biobank sample "freezer position" OR "rack position" random effect variance sample quality degradation mixed model` | Reproductive-biobank long-term-*storage* quality paper + vendor blogs; no position random effect. |
| S7 | `"position in the cryotank" OR "location within the cryotank" OR "canister position" viability outcome study` | Patents; one bovine paper on a *single-tubing canister design* (device comparison, not static position of a unit). |
| S8 | `"height above the liquid nitrogen" OR "upper part of the canister" straw stored sperm viability loss outcome study` | Turkish/Indonesian bovine theses on temperature treatments and "deep stored" semen; exposure is applied temperature, not recorded position. |
| S9 | `pubmed storage location within cryogenic vessel associated post-thaw survival stored samples retrospective cohort` | All storage-*duration* (sperm, oocytes) or storage-*temperature* (-80 vs LN2) studies; one ENDIA PBMC multivariable quality model (predictors appear to be processing variables). |
| S10 | `"tower position" OR "cane position" OR "storage tier" liquid nitrogen effect on post-thaw cell viability measured per vial` | Patents and vendor literature only. |
| S11 | `variance components storage vessel position cryopreserved units post-thaw recovery multilevel model biobanking` | ENDIA PBMC prediction tool, vendor brochures, a Biopreserv Biobank article; none with a position variance component. |
| S12 | `culture collection strain viability "position in the" liquid nitrogen storage vessel effect on recovery microorganism stocks` | Fungal Genetics Newsletter / Rhizoctonia cryostorage notes (duration), plus one candidate: UHI "Forty years in liquid nitrogen: an investigation into cryobank management". |
| S13 | `"storage tank" identity OR number association blastocyst survival pregnancy rate vitrification which tank stored outcomes analysis` | "Embryo long-term storage does not affect ART outcomes" family of papers — duration again. |
| S14 | `"Forty years in liquid nitrogen" cryobank management investigation viability straws position vessel abstract` | Only the UHI Pure record pages (en/de/zh/ar) — no abstract text in the result set; candidate left UNOPENED because the fetch budget was already overrun. |

## 3. The four words, from the document's own text

**Unit of analysis — the vitrified-warmed transfer cycle.**
Title (verbatim, as printed): "a retrospective analysis of 9,200 vitrified-warmed transfer cycles".
Methods/Results give the composition as 9,200 cycles = 3,313 D3 + 4,530 D5 + 1,357 D6, January 2011 to
December 2016. Tables 1–3 are headed per-cycle, e.g. Table 1 caption (verbatim): "Patient characteristics
and clinical outcomes of EAF in vitrified-warmed day 3 embryo transfer cycles".
Note: EAF is defined at the level of the *straw*, and the straw's EAF is carried to the cycle —
"The EAF of an embryo was equal to that of the Cryotop straw loading with this embryo." (Methods). So the
exposure is measured on the straw/embryo and the analysis unit is the cycle.

**Endpoint — clinical pregnancy and live birth (regression); embryo/blastocyst survival reported descriptively.**
Methods, outcome definitions (verbatim fragments): "Clinical pregnancy was defined as the presence of at
least one gestational sac with fetal heartbeat on ultrasound scan"; "Live birth was defined as the delivery
of any neonate who was ≥ 28 weeks of gestation after embryo transfer."; "The embryo (blastocyst) survival
rate was defined as the number of survived embryos (blastocysts) / the number of thawed embryos".
Table 4 caption (verbatim): "Multivariate logistic regression analysis of EAF for clinical pregnancy and
live birth, adjusting for potential confounders" — i.e. only the two binary reproductive endpoints are
modelled; survival rate appears in the descriptive Tables 1–3.

**Comparator — EAF = 2.**
Table 4 body: for each of D3, D5 and D6 the row "2" is printed as "reference" in both the clinical-pregnancy
and the live-birth columns. Methods set up the grouping (verbatim fragment): "In the present study, five EAF
groups were defined: group 1, EAF is 2; group 2, EAF is 4;" (remaining groups EAF 6, 8, ≥10).
The word "reference" appears in Table 4, not in a Methods sentence: no Methods/Results sentence explicitly
states "EAF 2 was the reference group."

**Estimand — a confounder-adjusted odds ratio per EAF category versus EAF = 2, within embryo-day strata.**
Methods, Statistical analysis (verbatim fragment): "Multivariate logistic regression analyses were used to
evaluate the association between clinical outcomes and EAF." Table 4 footnote (verbatim): "Adjusted for
confounders (storage time, age of female patients at ET, age of male patients at VIT, No. of ET attempts,
No. of embryos transferred, No. of high-quality embryo transferred, No. of oocytes retrieved, No. of
high-quality embryo on day 3, COH protocol, type of infertility)". Also "CI Confidence interval, OR Odds ratio".
EAF enters as a **5-level categorical** variable (2 / 4 / 6 / 8 / ≥10) with an overall P per embryo-day
stratum, not as a continuous count; there is no time-to-event or marginal/standardised estimand.

## 4. Methods text on how EAF was constructed (verbatim fragments, Methods)

- "Overall, the EAF of a straw was decided by the frequency of the cane contained with the straw in and out of the LN2 tank."
- "The EAF of an embryo was equal to that of the Cryotop straw loading with this embryo."
- "After vitrification, the straw containing vitrified embryo(s) was inserted into a cane in a LN2 container," / "then the cane was taken out of the LN2 container and plunged into a canister in a LN2 tank,"
- "Before warming, the cane containing a straw was taken out from a canister in the LN2 tank into a LN2 container,"
- "If more than one straw was taken out or put into one cane simultaneously, EAF was added as the rule of one straw."
- Equipment: "LN2 container (a Styrofoam box) for vitrification or warming, canister for storage of canes, and LN2 tank"
- Capacity: "Up to 9 cryotop straws were placed in one cane, up to 16 canes were put in one canister,"
- Record system: "This system could record every embryo straw positioned in a specifically appointed cane, canister and tank,"
- Record system (continuation fragment): "The EAF of a straw could be counted because the vitrifying and warming times and the position" / "in the specially appointed cane, canister and tank of every straw were recorded in real-time"
- "The duration of every cane transferred between LN2 container and tank was supposed to be similar,"

Discussion, third limitation (verbatim, 115 characters, within the quote cap so this one is a whole sentence
minus its lead-in): "EAF is calculated by the number of exposed-to-air during the procedure rather than
duration time of exposed-to-air." The extraction layer reported the full sentence as: "The third limitation
is that EAF is calculated by the number of exposed-to-air during the procedure rather than duration time of
exposed-to-air."

**So the phrase "rather than duration time of exposed-to-air" DOES appear**, in the Discussion's limitations
paragraph (third limitation) — not in the Methods.

## 5. Table 4 as transcribed from the publisher PDF (F8)

Caption: "Multivariate logistic regression analysis of EAF for clinical pregnancy and live birth, adjusting
for potential confounders"
Columns: Embryo frozen day | Variables | Clinical pregnancy OR (95% CI) | P | Live birth OR (95% CI) | P

| Day | EAF | Clinical pregnancy OR (95% CI) | P | Live birth OR (95% CI) | P |
|---|---|---|---|---|---|
| D3 | (overall) | — | 0.232 | — | 0.124 |
| D3 | 2 | reference | | reference | |
| D3 | 4 | 0.962 (0.793–1.167) | 0.692 | 1.025 (0.838–1.254) | 0.808 |
| D3 | 6 | 1.121 (0.902–1.393) | 0.303 | 1.194 (0.953–1.496) | 0.123 |
| D3 | 8 | 0.844 (0.647–1.102) | 0.214 | 0.835 (0.631–1.104) | 0.206 |
| **D3** | **≥ 10** | **0.867 (0.672–1.119)** | **0.274** | **0.898 (0.688–1.173)** | **0.431** |
| D5 | (overall) | — | 0.128 | — | 0.392 |
| D5 | 2 | reference | | reference | |
| D5 | 4 | 0.867 (0.730–1.030) | 0.103 | 0.897 (0.755–1.065) | 0.213 |
| D5 | 6 | 0.888 (0.735–1.073) | 0.218 | 0.865 (0.716–1.045) | 0.134 |
| D5 | 8 | 0.838 (0.673–1.045) | 0.116 | 0.935 (0.750–1.166) | 0.551 |
| D5 | ≥ 10 | 1.048 (0.856–1.282) | 0.652 | 1.018 (0.833–1.245) | 0.859 |
| D6 | (overall) | — | 0.382 | — | 0.811 |
| D6 | 2 | reference | | reference | |
| D6 | 4 | 1.010 (0.730–1.397) | 0.954 | 0.888 (0.632–1.248) | 0.494 |
| D6 | 6 | 1.348 (0.950–1.913) | 0.094 | 1.067 (0.741–1.536) | 0.727 |
| D6 | 8 | 1.085 (0.727–1.620) | 0.690 | 0.928 (0.609–1.413) | 0.727 |
| D6 | ≥ 10 | 0.967 (0.661–1.414) | 0.862 | 0.859 (0.574–1.287) | 0.462 |

Footnote: "CI Confidence interval, OR Odds ratio"; "Adjusted for confounders (storage time, age of female
patients at ET, age of male patients at VIT, No. of ET attempts, No. of embryos transferred, No. of
high-quality embryo transferred, No. of oocytes retrieved, No. of high-quality embryo on day 3, COH protocol,
type of infertility)".

Note that **no coordinate variable (tank, canister, cane, rack, height) is among the covariates**, and the
only storage-related covariate is **storage time** (duration), not position.

## 6. Arithmetic I checked myself

1. **Cycle count adds up.** 3,313 (D3) + 4,530 (D5) + 1,357 (D6) = 3,313 + 4,530 = 7,843; 7,843 + 1,357 = **9,200.** ✔ matches the title's n.
2. **D3, EAF ≥ 10, clinical pregnancy — internal consistency of OR, CI and P.**
   ln(0.867) = −0.14265. ln(0.672) = −0.39754; ln(1.119) = +0.11245.
   Midpoint of the log CI = (−0.39754 + 0.11245)/2 = **−0.14255** → exp(−0.14255) = **0.8671**, i.e. the CI is
   log-symmetric about the printed point estimate. ✔
   Implied SE = (0.11245 − (−0.14255))/1.96 = 0.25500/1.96 = 0.13010.
   z = −0.14255/0.13010 = −1.096 → two-sided p = **0.273**, against the printed P = **0.274**. ✔ consistent.
   The interval spans 1 (0.672 < 1 < 1.119), so this estimate is **not** statistically significant; and the
   D3 block's overall EAF P = 0.232 is also non-significant, so this single category estimate sits inside a
   block that showed no overall EAF effect. Any reading of 0.867 as a point "effect" must carry the interval:
   the data are compatible with anything from a 33% lower to a 12% higher odds of clinical pregnancy.
3. **D3, EAF ≥ 10, live birth — same check.** ln(0.898) = −0.10758; ln(0.688) = −0.37410; ln(1.173) = +0.15955;
   midpoint = −0.10728 ≈ ln(0.898) ✔. SE = (0.15955 + 0.10728)/1.96 = 0.13614; z = −0.790 → p = 0.430 vs
   printed 0.431 ✔.
4. **Storage geometry implied by the stated capacities** (not a claim under test, but it bounds the exposure
   mechanism): up to 9 straws per cane × up to 16 canes per canister = up to 144 straws sharing a canister,
   and up to 9 straws sharing the cane that is physically lifted out of the tank on each movement.

## 7. Conclusion per claim

**Claim 1 — unit of analysis is the transfer cycle, n = 9,200. → CONFIRMED.**
Title: "a retrospective analysis of 9,200 vitrified-warmed transfer cycles"; Tables 1–3 are per-cycle; the
stratum counts sum exactly to 9,200 (check 6.1). Minor nuance worth recording: exposure (EAF) is defined on
the straw and inherited by the embryo/cycle, so strictly the design is straw-exposure → cycle-outcome.

**Claim 2 — endpoints are clinical pregnancy and live birth, with post-warming survival among reported
outcomes. → CONFIRMED (with a distinction).**
Both are defined in Methods and are the two endpoints of Table 4. Embryo/blastocyst survival rate is defined
in Methods and reported in the descriptive per-group Tables 1–3, but it is **not** an endpoint of the
adjusted regression — Table 4 models clinical pregnancy and live birth only.

**Claim 3 — comparator is EAF = 2. → CONFIRMED.**
Table 4 prints "reference" on the EAF = 2 row in every one of the three embryo-day blocks. The Methods label
it "group 1, EAF is 2" without using the word "reference".

**Claim 4 — estimand is an adjusted OR for a cumulative retrieval-event count, and the paper says the count
is used "rather than duration time of exposed-to-air". → PARTLY-CONFIRMED.**
(a) Adjusted OR: CONFIRMED (Table 4 caption and footnote; multivariate logistic regression; 10 listed
confounders).
(b) The phrase: **FOUND, verbatim**, in the Discussion's third limitation — "EAF is calculated by the number
of exposed-to-air during the procedure rather than duration time of exposed-to-air."
(c) "cumulative retrieval-event count" is imprecise in two ways. First, EAF counts **air-exposure movements
in both directions** — the cane going out of *and* into the LN2 tank, and it is incremented by the index
embryo's own vitrification and warming handling, not only by retrievals of other units. Second, EAF is not
entered as a count: it is a **5-level categorical** variable (2/4/6/8/≥10) with EAF = 2 as reference, so the
estimand is a set of category contrasts, not a per-event slope. The even-numbered group labels (2, 4, 6, 8)
reflect that movements come in out-and-back pairs.

**Claim 5 — D3, EAF ≥ 10, clinical pregnancy: OR 0.867, 95% CI 0.672–1.119. → CONFIRMED.**
Exactly as printed in Table 4: D3 row "≥ 10", clinical-pregnancy column, **0.867 (0.672–1.119), P = 0.274**.
It is an **adjusted** OR (Table 4 caption "adjusting for potential confounders"; footnote lists the 10
covariates), relative to EAF = 2, in the **day-3 (cleavage-stage) subgroup** (n = 3,313 cycles). The interval
includes 1; the D3 block's overall EAF P = 0.232. My own recomputation reproduces P = 0.273 from the printed
OR and CI (check 6.2), so the figure, its units (odds ratio, dimensionless) and its referent are all internally
consistent.

**Claim 6 — exposure built from logged cane/canister/tank coordinates, counting events in which a
NEIGHBOURING unit was retrieved while the index unit stayed in the vessel. → PARTLY-CONFIRMED; the second
half is REFUTED as stated.**
First half CONFIRMED: the exposure was reconstructed from the laboratory's own electronic position record —
"This system could record every embryo straw positioned in a specifically appointed cane, canister and tank,"
and "The EAF of a straw could be counted because the vitrifying and warming times and the position" / "in the
specially appointed cane, canister and tank of every straw were recorded in real-time".
Second half REFUTED: the index unit does **not** stay in the vessel. EAF counts movements of the **whole cane
out of and into the LN2 tank** — "the EAF of a straw was decided by the frequency of the cane contained with
the straw in and out of the LN2 tank" — and "the cane containing a straw was taken out from a canister in the
LN2 tank into a LN2 container". The index straw is physically lifted out of the tank (into a Styrofoam LN2
container) every time its cane moves, including when the movement is for a *co-located* straw. So the
mechanism is co-travel of the index straw with its cane, not a neighbour's retrieval past a stationary index
unit. The co-location element of the claim is real (up to 9 straws share a cane, and "If more than one straw
was taken out or put into one cane simultaneously, EAF was added as the rule of one straw"), but the
"stayed in the vessel" description is not what the Methods say.
Caveat: because of the 125-character quote cap I could not retrieve one long contiguous Methods sentence
spelling out whether a neighbour-only warming increments the index straw's EAF; the cane-level definition
quoted above implies it does, and I am reading it that way, but I flag it as an inference from two short
verbatim fragments rather than a single quoted sentence.

**Claim 7 — the paper does NOT analyse the static storage coordinate itself, and reports no variance
component for storage location. → CONFIRMED.**
What it does with the coordinate data: it uses the recorded cane/canister/tank position **only as bookkeeping
to reconstruct EAF** — i.e. to know which straws shared a cane and therefore which cane movements each straw
experienced, combined with timestamped vitrification/warming events. Position is an input to building the
exposure variable, never itself an exposure. Table 4's predictor set is EAF plus 10 clinical/laboratory
confounders; the only storage-related covariate is **storage time** (duration). There is no tank-, canister-,
cane-, rack- or height-level term, no random effect, no ICC and no variance component anywhere in the model,
and the paper reports no such analysis. (This is an absence claim read off the full Table 4 transcription plus
the extraction layer's report on the whole PDF; it is as strong as a single-pass read of the full text can be.)

## 8. Second, separate task — literature question

**Question:** any published study, in any cryostorage field, estimating an association or variance component
between a stored unit's STATIC position inside an LN2 vessel (vessel / canister / rack / tower / height off
the dewar floor) and a PER-UNIT post-thaw outcome measured on that unit.

**Result: NOT FOUND.** Thirteen searches (S2–S14) returned nothing that meets the definition. Everything that
came back fell into one of the explicitly-excluded buckets:
- **Storage duration** — reproductive-biobank long-term integrity, "Long-term sperm cryopreservation does not
  affect post-thaw survival rates", "Embryo long-term storage does not affect ART outcomes", oocyte
  cryostorage-time papers, Rhizoctonia/fungal collection longevity notes.
- **Phase / temperature of storage** — vapour vs liquid phase (Eppendorf), "Could cryopreserved human semen
  samples be stored at −80 °C?", bovine "deep stored semen" temperature-treatment studies.
- **Transient warming / handling during retrieval** — thawing-protocol and exposure-at-15 °C studies; the
  Zhang 2023 paper under review here is itself in this bucket.
- **Chamber thermal uniformity with no outcome attached** — cryo-vessel sensor patents, vial/straw tightness
  engineering reports, vendor white papers.
- **Hardware design comparisons** — e.g. a bovine "single tubing type canister" study: that compares canister
  *designs*, not where a given unit sat.

One **unresolved candidate**, not opened: "Forty years in liquid nitrogen: an investigation into cryobank
management" (University of the Highlands and Islands Pure record, https://pure.uhi.ac.uk/en/publications/forty-years-in-liquid-nitrogen-an-investigation-into-cryobank-man/).
The title suggests an audit of a long-standing LN2 cryobank, which *could* contain a position-vs-viability
analysis. I did not open it because the fetch budget was already overrun by 2, and S14 returned no abstract
text. This is a **COULD-NOT-READ**, not a negative finding: it must be opened before anyone concludes the
literature is empty.

Honest statement of the limit of this negative: thirteen title-and-keyword web searches, with no access to
PubMed/Europe PMC query endpoints (both proxy-refused), is a shallow probe. It supports "no such study
surfaced in a targeted web search", not "no such study exists".

## 9. Budget accounting (honest)

- Web searches: **14 used / 14 allowed** — at budget.
- Page fetches: **8 attempted / 6 allowed** — **overrun by 2**. Only 2 of the 8 delivered content
  (link.springer.com HTML, BMC PDF); 5 were refusals/walls and 1–2 were bare redirect notices. Had the
  Europe PMC XML endpoint not been proxy-refused, one fetch would have sufficed and would also have removed
  the 125-character quote cap.
