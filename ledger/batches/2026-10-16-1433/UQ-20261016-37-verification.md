# UQ-20261016-37 — Independent literature-and-methods verification

Date: 2026-10-16
Primary source: von Woedtke T, Kramer A. "The limits of sterility assurance." GMS Krankenhaushyg Interdiszip / GMS Hygiene and Infection Control 2008;3(1):Doc19.
URL: https://journals.publisso.de/en/journals/hic/volume3/dgkh000117
Second topic: NFPA/CMI Container Integrity Task Force canned-food arithmetic; Odlaug & Pflug.
Third topic: ISO 11137 / ISO 13004 dose-audit practice.

## 0. MATERIAL ACCESS LIMITATION — read this before any quote below

I could not obtain a raw copy of the paper. Every quote in this log was relayed
through the `WebFetch` tool, whose summarizing model enforces a **125-character
cap per quoted string** and refused three separate requests to reproduce longer
sentences, including a request to return one sentence split into short
consecutive fragments.

Consequence:
- Quotes at or under ~125 characters are reported as verbatim.
- **No sentence longer than ~125 characters in this paper was obtainable in
  full.** Where a sentence matters and is longer than the cap, this log marks
  the verbatim head of the sentence and labels the remainder as *reader
  paraphrase*, not as a quote.
- This bears directly on Claim 6, whose decisive sentence is longer than the
  cap. I mitigated it by reading the sentence through **two different URLs**
  (two independent runs of the summarizer over two different renderings of the
  article) and comparing their reports. They agreed. That is corroboration, not
  a verbatim reading, and the claim's verdict is stated with that caveat.
- Superscripts render as en-dashes in the retrieved text ("10–6" for 10^-6).

## 1. Access routes attempted

### Raw transport (curl) — all refused by the agent egress proxy
| URL | Outcome |
|---|---|
| https://www.egms.de/static/pdf/journals/dgkh/2008-3/dgkh000117.pdf | FAILED — curl(56) "CONNECT tunnel failed, response 403" (policy denial) |
| https://www.egms.de/static/en/journals/dgkh/2008-3/dgkh000117.shtml | FAILED — same 403 CONNECT denial |
| https://journals.publisso.de/en/journals/hic/volume3/dgkh000117 | FAILED — same 403 CONNECT denial |
| https://books.publisso.de/en/publisso_gold/export/journal/17/article/2907 | FAILED — same 403 CONNECT denial |
| https://www.egms.de/dynamic/de/journals/dgkh/volume3.htm | FAILED — same 403 CONNECT denial |

`curl -sS "$HTTPS_PROXY/__agentproxy/status"` confirmed the proxy is enabled and
records `connect_rejected` / "gateway answered 403 to CONNECT (policy denial)".
Per /root/.ccr/README.md these are policy denials, not to be retried or routed
around. Reported, not circumvented. TLS verification was never disabled.

Also checked: the two pre-existing directories in this scratchpad
(`docs/`, `adv1_dl/`) were both **empty**, so no local copy of the paper existed.
Sibling `.md` files from other runs in this scratchpad were deliberately NOT
opened, to keep this check independent of anyone else's conclusions.

### WebFetch (budget 6, used 6)
| # | URL | Opened? | Notes |
|---|---|---|---|
| F1 | journals.publisso.de/.../dgkh000117 | OPENED | Summarizer **REFUSED** verbatim full text ("long copyrighted work"); returned summary only. Confirmed page carries full text. |
| F2 | journals.publisso.de/.../dgkh000117 | OPENED | Targeted per-claim sentence request. Succeeded for short sentences; longer ones truncated at 125 chars. |
| F3 | journals.publisso.de/.../dgkh000117 | OPENED | **REFUSED** the fragment-splitting request for long sentences; gave paraphrase + short quotes. |
| F4 | books.publisso.de/en/publisso_gold/export/journal/17/article/2907 | OPENED | **REFUSED** full single sentence. Independent second read of the [85] sentence; agreed with F2/F3. Reference list in this rendering truncated at ref 82, so ref 85 entry unverifiable here. |
| F5 | www.foodprotection.org/files/food-protection-trends/Mar-10-Podolak.pdf | OPENED | Podolak, *Food Protection Trends* Mar 2010. Carried the canned-food figures. |
| F6 | www.steris-ast.com/resources/techtips/method-1-quarterly-dose-audits-interpretation-of-results | OPENED | Content largely ABSENT on the points at issue (no SAL mentioned at all). |

Budget: **6 of 6 fetches used. No overrun.** ISO 11137 and ISO 13004 were
therefore never opened — and in any case are paywalled (only ISO/BSI/SIS/
GlobalSpec sales pages were reachable).

### WebSearch (budget 14, used 10)
| # | Query | One-line result |
|---|---|---|
| S1 | von Woedtke Kramer "limits of sterility assurance" 2008 dgkh000117 pdf | Found publisso en/de pages + books.publisso XML export; no direct PDF reachable. |
| S2 | NFPA / CMI Container Integrity Task Force botulism container leakage cans 1940-1982 | Surfaced Podolak (foodprotection.org), GAO HRD-84-77, FSIS manuals. |
| S3 | Odlaug Pflug botulism canned food spoilage probability 10-7 10-10 | Surfaced Podolak again + Pflug's academia.edu profile. |
| S4 | "practically impossible to find a difference in the rate of infection" sterility assurance 10-6 10-3 | Exact phrase returns the publisso article itself — phrase confirmed to exist in the paper. No snippet with the full sentence. |
| S5 | "Container Integrity Task Force" NFPA botulism cans leakage Odlaug Pflug 10-12 | Podolak top hit; no primary J. Food Prot. full text reachable. |
| S6 | ISO 13004 substantiation sterilization dose SAL 10-1 10-2 VDmax ISO 11137 dose audit | Only standards-store listings (SIS, CSA, ISO, GlobalSpec) — all paywalled. |
| S7 | ISO 11137-2 dose audit verification dose SAL 10-1 ten items one positive quarterly | STERIS TechTips (Method 1, VDmax25) + AAMI TIR27 PDF; no standard text. |
| S8 | "Container Integrity Task Force" "Botulism Risk Assessment" NFPA CMI 1984 | Podolak, GAO, FDA, FSIS; primary task-force report not reachable. |
| S9 | ISO 11137-2 Method 1 verification dose "SAL of 10-2" 100 samples two positives VDmax25 | STERIS TechTips + NEN/SFS/SCC listings; no standard text. |
| S10 | ISO 13004 2022 "VDmaxSD" scope which SALs | Standards-store listings only (bsmd.moic.gov.bh, SIS, iso.org, govt.nz). All paywalled. |

Note: in this environment WebSearch returns titles + URLs only, with no text
snippets, so searching cannot substitute for a fetch when document text is needed.

Budget: **10 of 14 searches used. No overrun.**

## 2. The paper's four descriptors (from the document's own text)

- **Unit of analysis** — the individual sterilized item/product unit. SAL is
  defined on the page as a probability of "not more than one viable
  microorganism in one million sterilized items of the final product". In the
  experimental passages the unit is the test object: "test organisms per test
  object".
- **Endpoint** — probability of non-sterility of an item (presence of a viable
  microorganism), i.e. the SAL itself; secondarily, "the rate of infection
  resulting from the application of products".
- **Comparator** — an SAL of 10^-6 against lower required levels (10^-4, 10^-3)
  and against the ~10^-3 mean contamination probability attributed to aseptic
  processing.
- **Estimand** — **none.** The paper estimates no quantity. It is a
  position/review paper whose output is a normative proposal (tiered SALs).
  See Claim 7.

## 3. Claim-by-claim

### Claim 1 — the paper POSES the question whether 10^-6 is experimentally provable
**Verdict: PARTLY-CONFIRMED.**
A direct request for a sentence *asking* whether 10^-6 can be proven, verified or
ascertained returned **"NOT PRESENT ON PAGE"** (F2, item a). The only
interrogative framing located is a section heading, and it asks about adequacy,
not provability:

> "Do the current theoretical sterility assurance requirements reflect the actual safety requirements?"
> — section heading

The provability question *is* squarely addressed in the paper's own text, but
**declaratively, as a finding, not as a posed question** (see Claim 2). So the
substance of Claim 1 holds; its stated form ("POSES ... the question") does not,
and the "not merely whether it is conservative or appropriate" contrast is
backwards for the one interrogative the paper does use — that interrogative is
precisely about appropriateness.

### Claim 2 — the paper answers that 10^-6 is not evidence-based and not experimentally ascertainable
**Verdict: CONFIRMED.** Two answering sentences, both within the quote cap and
therefore verbatim:

> "Such an SAL, however, is neither evidence based nor can it be accurately ascertained in experiments, or attained practically."
> — section "Do the current theoretical sterility assurance requirements reflect the actual safety requirements?"

> "However, a practical proof of the required level of sterility assurance of 10–6 is not possible."
> — Abstract

and in the body of the same section:

> "It was ascertained that the practical proof of the required level of sterility assurance of 10–6 is not possible."

This is the single best-supported claim in the list. Note the paper's wording is
three-part — not evidence based, not accurately ascertainable in experiments,
*and* not practically attainable — the third limb being stronger than the claim
as written.

### Claim 3 — unprovability attributed specifically to non-exponential / tailing kinetics
**Verdict: PARTLY-CONFIRMED.**
The kinetics argument is present:

> "Thus, it is clear that the general assumption of first-order exponential inactivation kinetics ... cannot be applied without restrictions to non-thermal processes."
> — section "Concept for proving sterilization assurance for heat-sensitive medical devices"
> *(reader-inserted ellipsis; sentence exceeded the quote cap, so this is NOT a clean verbatim string)*

> "inactivation kinetics within the experimentally accessible range ... never exhibited a linear course."
> — same section *(same caveat)*

F1 additionally reported concave "tailing" survivor curves from the authors'
non-thermal work making extrapolation to 10^-6 unreliable.

Why only partly: the paper grounds the unprovability on **two** distinct things,
and the claim names only the second as "specifically" responsible.
1. A generic **measurement-range** limit that holds whatever the kinetics:
   detectability runs from ~10^6 down to only ~10^-2 per object, so the stretch
   to 10^-6 is unmeasurable in principle (Claim 4).
2. **Non-linear / tailing kinetics**, which defeats *extrapolation* across that
   unmeasurable stretch — and this limb is advanced specifically for
   **non-thermal / low-temperature** processes, not universally. F1 reported the
   authors conclude only steam and dry heat qualify as sterilization in the
   traditional sense, which implies the kinetics objection is not their
   across-the-board ground.

### Claim 4 — highest experimentally accessible level is of the order 10^-2
**Verdict: CONFIRMED (with its unit).**

> "The range between experimentally detectable contamination rates up to ca. 10–2 test organisms per test object"
> — section "Concept for proving sterilization assurance for heat-sensitive medical devices" (verbatim, within cap, sentence continues beyond)

F1 independently: "Measurable reductions reach roughly 10^6 down to about 10^-2
organisms per object." The figure is 10^-2 **test organisms per test object** —
an expected-count/contamination-rate limit of detection, which is the right
quantity for the claim.

### Claim 5 — normative tiering 10^-6 / 10^-4 / 10^-3 by product category, and a 10^-6 vs 10^-3 infection-rate comparison
**Verdict: CONFIRMED (tiering has a fourth category).**
Tiers as reported by F1 from the proposal:
- 10^-6 — heat-resistant parenteral preparations ("Pharmaceutical sterilization")
- 10^-4 — heat-resistant medical devices ("High-level sterilization")
- 10^-3 — heat-sensitive reusable devices with cleaning efficacy >4 lg ("Low-level sterilization")
- **plus a fourth, non-numeric tier**: "microbiologically safe for the designated use" for other products.

The 10^-6 vs 10^-3 infection-rate comparison is present and is the sentence
discussed under Claim 6.

### Claim 6 — "pre-emptively dismisses, as impracticable, comparison of the claimed SAL against the observed field record of sterile products in use, citing Winckels & Dorpema 1994"
**Verdict: REFUTED as stated.** (Flagged by the task as the most important item.)

What exists. There *is* a sentence in the section "Do the current theoretical
sterility assurance requirements reflect the actual safety requirements?" that
(i) calls something practically impossible and (ii) carries reference **[85]**,
which is Winckels & Dorpema. Verbatim head of that sentence, within the cap:

> "it is practically impossible to find a difference in the rate of infection resulting from the application of products"

Reader-reported continuation (**paraphrase, not quote** — the sentence exceeds
the 125-char cap and all three attempts to obtain it in full were refused): the
sentence continues to contrast products sterilized to a theoretical SAL of
**10^-6** with products from a procedure that ensures only a **10^-3**
contamination likelihood, and the sentence also states that the practical
relevance of an SAL of 10^-6 is not conclusively proven.

Reference entry (from F2's read of the en-page reference list):
> "Winckels HW, Dorpema JW. Risk Assessment as a Basis for the Definition of Sterility. Med Dev Technol. 1994;5:38-43."  — ref [85]
Winckels/Dorpema are cited **by bracketed number only**; their names do not
appear in the body text (F2). In the books.publisso rendering (F4) the reference
list was truncated at ref 82, so ref [85] could not be re-verified there.

**What the sentence actually says is impracticable:** detecting a **difference in
infection rate between two sterility assurance tiers** (10^-6 product vs 10^-3
product). That is a *between-tier discrimination* argument, deployed to support
*relaxing* the required SAL.

**What the claim says it says:** that comparing the *claimed* SAL against the
*observed field record of sterile products in use* is impracticable — i.e. a
pre-emptive block on validating 10^-6 against reality.

These are not the same proposition, and the difference is directional: the
paper's sentence argues *downward from* 10^-6 (the stricter level buys no
detectable benefit), whereas the claim describes a defensive move to immunize
10^-6 against empirical check.

Corroboration that no sentence of the claimed kind exists:
- F2 item (g): asked directly for a sentence saying that comparing the SAL with
  practical experience / field observation / the record of sterile products in
  use is impracticable. It returned only "The practical relevance of an SAL of
  10–6 is not conclusively proven" plus the same infection-rate sentence.
- F3 TARGET 4: asked across the whole article for "impracticable / not
  practicable / impossible / not feasible / cannot be compared" in connection
  with comparing the SAL against practical experience, observed infections, or
  the record of marketed sterile products. It returned the same infection-rate
  sentence and nothing else.
- F4 (different URL, independent run) items 2 and 3: the sentence "does not
  mention recalls, field failures, or post-market surveillance"; and "No
  sentence in the article dismisses comparing the claimed sterility assurance
  level against the observed performance of sterile products in actual use."

Two independent reads over two different renderings agree. **Plainly: no sentence
dismissing comparison against the field record of marketed sterile products was
found.** The Winckels & Dorpema citation is real and is attached to a
"practically impossible" sentence — which is the likely origin of the error — but
the object of the impossibility is different from what the claim asserts.

Residual uncertainty, stated honestly: because the full sentence was never
obtainable verbatim, the final clause rests on reader report. The verbatim head I
do hold ("...a difference in the rate of infection resulting from the application
of products") already fixes the object as an infection-rate difference *between
products*, which is consistent with the 10^-6 / 10^-3 comparison and not with an
audit of 10^-6 against field performance. A partial overlap should be conceded:
the sentence does imply field infection data lack the resolution to separate
SALs. It does not dismiss the field-record comparison as the claim describes.

### Claim 7 — no estimand of its own; argumentative/normative; no field data, no realized failure rate
**Verdict: CONFIRMED.**
F3 TARGET 5: "No. The article reports no field or surveillance data, no counts of
infections from sterile products, and no calculation of an observed failure
rate. Its numbers are theoretical or drawn from cited literature ... Its own
contribution is the proposal of tiered SAL values, which is a reasoned
recommendation rather than an observed result."

One nuance to carry: the paper is not data-free in the laboratory sense — F1
reported the authors' own non-thermal inactivation experiments yielding concave
tailing survivor curves. That is bench kinetics, not field data, and no realized
failure rate is computed from it. The claim as written (no field data, no
realized failure rate, no estimand) stands.

### Claim 8 — canned-food realized-failure arithmetic
**Verdict: CONFIRMED, with four corrections.**
Source actually opened: **Podolak, *Food Protection Trends*, March 2010, p. 161
(Introduction)** — a **secondary** source. The **primary** task-force paper was
NOT opened (not reachable; fetch budget exhausted).

Verbatim from F5, Introduction, p. 161:
> "between 1940 and 1982, 1.3 × 10^12 cans of low-acid foods were consumed"
> "five botulinal incidents in which container leakage was observed as the source of contamination"
> "the Task Force estimated the probability of botulism from container leakage as 3.8 × 10^-12, or one chance in every 260 billion cans of foods consumed"
> "the likelihood of post-processing contamination from C. botulinum in canned foods is between 10-7 and 10-10"
> "the probability of human botulism from leakage decreases to approximately 10-9 to 10-12"

Attribution, p. 161:
> "The former National Food Processors Association (currently the Grocery Manufacturers Association) and the Can Manufacturers Institute (NFPA/CMI) Container Integrity Task Force (17)"

Primary reference, Podolak ref 17, p. 167:
> "NFPA/CMI Container Integrity Task Force. 1983. Botulism risk from post-processing contamination of commercially canned foods in metal containers. J. Food Prot. 47:801–816."

Odlaug & Pflug, Podolak ref 19, p. 167:
> "Odlaug, T., and I. Pflug. 1978. Microbiological and sanitizer analysis of water used for cooling containers of food in commercial canning factories in Minnesota and Wisconsin. J. Food Sci. 43:954–963."

**Arithmetic, checked here (python3):**
```
5 / 1.3e12            = 3.846153846153846e-12   -> 3.8e-12 to 2 s.f.   CONFIRMED
1 / 3.846153846e-12   = 2.60e11                 = 260 billion         CONFIRMED
                        (matches "one chance in every 260 billion cans" exactly)
5 / 3.8e-12           = 1.3158e12               (consistent with 1.3e12)
3.8e-12 within 1e-9..1e-12 ?  TRUE
3.8e-12 within 1e-7..1e-10 ?  FALSE  (it is ~0.038 x 1e-10, i.e. ~26x below 1e-10)
```

**What the rate is a rate OF:** a probability of **botulism per can of low-acid
canned food consumed**, over 1940–1982 — Podolak's own gloss "one chance in every
260 billion cans of foods consumed". Not per can produced, not per incident, not
per year.

Corrections:
1. **"produced" is wrong** — the document says 1.3 × 10^12 cans **consumed**. It
   also does not restrict the figure to the United States.
2. The task force presents 3.8 × 10^-12 as an **estimated probability of
   botulism**, not self-described as a "realized rate". It is numerically the
   observed incidents-per-can ratio, so calling it realized is defensible, but
   the source's own framing is a risk estimate.
3. The Odlaug & Pflug **10^-7 to 10^-10 is the likelihood of post-processing
   contamination with C. botulinum**, not a spoilage/survival probability. The
   figure actually comparable to 3.8 × 10^-12 is the onward **10^-9 to 10^-12**
   estimate for human botulism from leakage. 3.8 × 10^-12 sits inside
   10^-9..10^-12 but **outside** 10^-7..10^-10, so setting it beside the
   10^-7..10^-10 range as if commensurable is a units/endpoint mismatch.
4. **Podolak does not itself make the side-by-side comparison** (F5 item 6): the
   two sets of figures appear in sequence in the same Introduction paragraph,
   and the document never states that they agree, differ or reconcile.
5. Internal inconsistency in the cited reference: Podolak's ref 17 gives year
   **1983** but *J. Food Prot.* volume **47** is 1984. Flagged, not resolved.
6. F5 flagged that ref 19's title (a cooling-water survey) does not obviously
   match the modelling claim attributed to it, and that the text cites (19) for
   the modelling and (18) for other Odlaug & Pflug work — so the Odlaug & Pflug
   attribution for 10^-7..10^-10 is **ambiguous in Podolak itself**.

### Claim 9 — ISO 11137 / ISO 13004 dose audits include a realized positive-fraction check at SAL 10^-2
**Verdict: COULD-NOT-READ.**
Neither ISO 11137 (any part) nor ISO 13004 was opened. Both are paywalled; every
reachable URL was a sales listing (ISO store, BSI, SIS, CSA, GlobalSpec,
standards.govt.nz, NEN, SFS). The fetch budget was exhausted by then.
This is a read failure, **not** a check that passed and **not** a "not found".

The single secondary page I did open (F6, STERIS TechTip on Method 1 quarterly
dose audits) is largely silent on exactly the points at issue:
- SAL: **"The page never mentions a sterility assurance level, including 10^-2."**
- Number of items tested: **ABSENT.**
- 10^-6: never mentioned; the page does not say the audit tests at a lower
  measurable SAL.
- What it does give: an acceptance threshold of **two or fewer positives**, after
  which "the sterilization dose selected in the initial validation is still
  acceptable"; audits confirm that "the sterilization dose determined for your
  product is still the appropriate one"; frequency quarterly, "Repeat audits as
  required."

So: the *shape* of the claim — that dose audits are a realized positive-fraction
check (count positives, accept on ≤2) rather than a demonstration of 10^-6 — is
**consistent with** the one source I read, which documents a ≤2-positive
acceptance rule and describes the audit as confirming continued dose validity,
never as demonstrating 10^-6. But the specific attachment of that check to a
**sterility assurance level of 10^-2** is **unverified from any document I
actually read**, and I decline to supply it from recollection. What the standards
*require* of a dose audit was not established from primary text and is not
reported here.

## 4. Counts

- Web searches: **10** (budget 14) — no overrun.
- Page fetches: **6** (budget 6) — at budget, no overrun.
- Refusals / blocks: **8** — five curl CONNECT 403 policy denials (egms.de ×3,
  journals.publisso.de ×1 for raw transport, books.publisso.de ×1) and three
  WebFetch summarizer refusals to reproduce text verbatim (F1 full text, F3
  fragment-split, F4 single full sentence).

## 5. Conclusions in one line each

1. PARTLY-CONFIRMED — provability is addressed, but asserted, not posed; the only question the paper poses is about adequacy.
2. CONFIRMED — "neither evidence based nor can it be accurately ascertained in experiments, or attained practically."
3. PARTLY-CONFIRMED — tailing kinetics is one of two grounds and is argued for non-thermal processes; the generic limit-of-detection ground is independent of kinetics.
4. CONFIRMED — "up to ca. 10–2 test organisms per test object".
5. CONFIRMED — tiers 10^-6 / 10^-4 / 10^-3 exist (plus a fourth non-numeric tier) and the 10^-6 vs 10^-3 infection-rate comparison is made.
6. **REFUTED as stated** — the [85]/Winckels-&-Dorpema sentence calls it practically impossible to detect an infection-rate difference *between 10^-6 and 10^-3 products*; no sentence dismissing comparison against the observed field record of marketed sterile products was found, on two independent reads.
7. CONFIRMED — no field data, no realized failure rate, no estimand; normative proposal only.
8. CONFIRMED with corrections — 5/1.3e12 = 3.846e-12 → 3.8e-12 and 1/that = 260 billion exactly; but the cans were *consumed* not produced, the rate is per can consumed, and the commensurable Odlaug & Pflug figure is 10^-9..10^-12, not 10^-7..10^-10.
9. COULD-NOT-READ — ISO 11137 and ISO 13004 are paywalled and were never opened; the 10^-2 attachment is unverified.
