# VERIFY — datasheet concentration form (hinge of the UQ-20261022-05 rejection)

Checker: fresh context. Date: 2026-10-22. Budget used: 3 WebSearch of 6, 5 WebFetch of 5 (exhausted).
No mcp__hearthbot__ tool was called. No personal identifier was placed in any URL, query or header. Unpaywall not used.

## CLAIM

The entry UQ-20261022-05 is **Rejected** at Gate 4 attack 4 Leg A on an **algebraic identity**: R1 pins one dated
datasheet of record per catalogue number and defines the computed dose as *that datasheet's stated stock
concentration x the quoted dilution*, therefore two papers quoting the same dilution of the same product yield the
identical number and limb (ii)'s "spread in computed concentration" is zero by construction.

The entry records its own vulnerability in the same breath: "The identity holds only if a dated datasheet yields a
unique scalar stock concentration, and that is precisely what is unmeasured". No agent in the batch opened a
datasheet. The claim handed to me is therefore the **premise**, not the algebra:

> a dated datasheet yields ONE scalar stock concentration per catalogue number,

together with two quotations the entry leans on:

- (a) Rockland (read by adversary 2, quoted in the entry's P9 and in the Gate-4 vulnerability paragraph) states that
  manufacturers "often give dilution ranges".
- (b) A Cell Signaling Technology post titled "Comparing Antibody Concentrations & Performance" states that CST holds
  the recommended **dilution** constant as a product-sizing convention and **adjusts the vial concentration instead**,
  and that it prints no concentration.

And (c) a tally: of the datasheets sampled, how many print a unique scalar concentration.

I report what the sources say. I do not grade the question and I do not re-run Gate 4.

## READ LEVEL

Five documents opened, all **full text**, all summariser-mediated (WebFetch), quotations returned in segments under
the ~125-character cap. Nothing below is reconstructed across non-consecutive fragments; where a served segment is
itself cut I say so and do **not** complete it.

1. `https://rockland.com/resources/tips-for-diluting-antibodies` — full text, quotations as served. One load-bearing
   sentence came back **cut at the cap** and the tail was not recoverable (see ROUTES THAT FAILED).
2. `https://blog.cellsignal.com/concentration-versus-antibody-performance` — full text, numbered consecutive segments.
3. `https://media.cellsignal.com/coa/5125/8/5125-lot-8-coa.pdf` — full text (certificate of analysis, PDF).
4. `https://www.merckmillipore.com/BY/en/product/sigma/a2228` — full text (Sigma-Aldrich product page / datasheet view).
5. `https://sysy.com/product/266011` — full text (Synaptic Systems product page / datasheet view).

Document classes, named per instruction (5): items 1 and 2 are **vendor guidance / vendor marketing prose**, not
datasheets and not measurements. Item 3 is a **per-lot certificate of analysis**. Items 4 and 5 are **catalogue-level
product datasheets**. None of the five is a primary study, a review, a protocol or a guideline.

## WHAT THE SOURCE SAYS (quotations as served)

### 1. Rockland, "Tips for Diluting Antibodies" — sub-claim (a)

The string **"often give dilution ranges" does not appear on the page.** What the page serves, as the opening of the
sentence about manufacturer ranges, is:

> "Often the manufacturer recommends dilution ranges compatible with other variables such as method," [SERVED SEGMENT,
> CUT AT THE SUMMARISER'S CAP — the sentence continues and I could not retrieve the tail; I have not guessed it]

The same page states the range point a second and third time, in a different and stronger form (instruction (4):
report every formulation):

> "Thus the titers may vary between polyclonal antisera, monoclonal antibodies in culture supernatants,"
> "In practical terms, for polyclonal antisera, the titers may vary from 1:100-1:2000;"
> "for monoclonal antibodies in ascites fluid, the titers may vary from 1:1000-1:100,000."

and refers to a datasheet dilution only as a worked arithmetic example:

> "if a product datasheet suggests using a 1:1000 dilution for Western blotting,"

Explicitly **absent** from the page as served: the words "often give"; "stock concentration"; any "mg/ml" or "ug/mL"
figure. The page does use "stock solution", and defines dilution as a ratio. **No byline, no publication date, no
revision date**; the only date string is the footer "(c)2026 Rockland Immunochemicals, Inc.".

So: the *substance* attributed to Rockland (manufacturers often recommend dilution **ranges**) is on the page; the
*quoted words* are not. And the page carries no citation for the range claim and no measurement behind it.

### 2. CST blog, "Comparing Antibody Concentrations & Performance" — sub-claim (b)

Title as served: "Comparing Antibody Concentrations & Performance"; on-page heading "Comparing Antibody
Concentrations & Performance; CST Antibody Details You May Not Know". Byline **Josh Nathan, Senior Strategic
Marketing Manager for Corporate Brand, Cell Signaling Technology**.

**Dated: no.** No publication, "posted on" or updated date appears for this article. The only dates on the page are
other posts' dates in a "Recent Posts" rail ("Sep 23, 2026", "Sep 22, 2026", "Sep 2, 2026") and the footer
"(c) 2026 Cell Signaling Technology, Inc.". The entry's description of it as **undated is correct.**

Consecutive served segments, reading order, on why a dilution rather than a concentration:

> (4) "Some customers also ask, why does CST recommend a dilution factor range and not a specific concentration?"
> (5) "Many researchers believe that by using a specific concentration of antibody, you will receive the same results"
> (6) "and performance each time, no matter what clone or lot you purchase."
> (7) "However, since different antibodies have different levels of activity and sensitivity, and even purity,"
> (8) "one cannot depend on using a specific antibody concentration alone."
> (9) "It is important to avoid treating every antibody, and antibody lot, the same way,"
> (10) "as the concentrations and purity of an antibody can vary depending on the vendor."

and, on the recommendation's provenance:

> (1) "This dilution factor range is based on real data generated in-house using our recommended protocols,"
> (2) "reagents, and buffers to ensure optimal performance of the antibody,"
> (3) "based on the activity within the respective application or assay."

and, on product sizing — the segments that bear directly on sub-claim (b):

> "Because CST recommends a specific dilution or dilution range,"
> "our antibodies are provided for a specific number of assays."
> "This means that no matter the concentration, you will be able to perform the same number of experiments"
> "and observe consistent results from lot to lot."
> "For example, most of our western blot-approved antibodies are recommended at a 1:1000 dilution,"
> "giving you 10 assays per 100ul."

**Does the post print a stock concentration?** No. No mg/mL or ug/mL value appears anywhere on it. The only
quantities printed are "1:1000", "10 assays" and "100ul".

**Does it say CST adjusts the vial concentration instead?** *It does not say that.* It says the number of assays is
held constant and that concentration may vary ("no matter the concentration"), and it attributes concentration
variation to **the antibodies themselves and to vendors** — "different levels of activity and sensitivity, and even
purity", "can vary depending on the vendor" — not to a fill decision CST makes to hit a target dilution. The sizing
arithmetic the post actually prints runs off **volume** (100 ul at 1:1000 -> 10 assays), not off concentration.

### 3. CST certificate of analysis, product 5125, lot 8 — the document that breaks the premise

Transcribed fields as served:

> "beta-Actin (13E5) Rabbit Monoclonal Antibody (HRP Conjugate)"
> "Product Number: 5125"
> "Lot Number: 8"
> "Concentration: 36 ug/ml"
> "Western Blotting"  [approved applications]
> "Date: 22-April-2024"  [production sign-off]
> "version 2025-04-11"  [document version, at the top]

Formulation/storage buffer: **not printed.** Recommended dilution: **not printed.** So CST does publish a
concentration — **36 ug/ml**, an exact scalar — but it lives on a **lot-scoped, twice-dated** document that prints no
dilution, while the dilution lives on the catalogue-level datasheet that prints no concentration. Format sampled here:
**conjugated (HRP)**.

### 4. Sigma-Aldrich A2228 — purified liquid immunoglobulin

> "Monoclonal Anti-beta-Actin antibody produced in mouse, clone AC-74, purified immunoglobulin, buffered aqueous solution"
> Concentration field: "~2 mg/mL"
> "western blot: 0.5-1 ug/mL using total cell extracts of human or chicken fibroblasts"
> "immunocytochemistry: 10-40 ug/mL using human or chicken fibroblasts"
> "If you require a particular version, you can look up a specific certificate by the Lot or Batch number."
> "Working dilution samples should be discarded if not used within 12 hours."

The stock figure is served with a **tilde** — "~2 mg/mL" — i.e. an approximate scalar, not an exact one, and the page
itself routes the user to a **lot- or batch-specific certificate** for the particular version. The recommended usage
is given **not as a dilution at all** but as **working-concentration ranges** (0.5-1 ug/mL; 10-40 ug/mL), a two-fold
and a four-fold range respectively. No reconstitution step: supplied as a solution.

### 5. Synaptic Systems 266 011 — lyophilised purified IgG

> "100 ug purified IgG, lyophilized."
> "For reconstitution add 100 ul H2O to get a 1mg/ml solution in PBS."
> "Antibodies should be stored at +4C when still lyophilized. Do not freeze!"
> Working dilutions: ICC "1 : 500"; IHC "1 : 500"; IHC-P (FFPE) "1 : 1000 up to 1 : 5000"

What is printed as a datasheet fact is a **mass (100 ug)** plus a **suggested** volume; the 1 mg/ml is the
*consequence* of the laboratory adding the suggested 100 ul, not a property of the vial as shipped. No lot-specific or
certificate-based concentration. And the recommended dilution for one named application is itself **a five-fold range**
("1 : 1000 up to 1 : 5000"), not a scalar.

### (c) THE TALLY — MY OWN, OVER MY OWN SAMPLE OF THREE PRODUCT DOCUMENTS

Sample size: **n = 3 product documents, from 3 vendors**, chosen by what search surfaced inside a 5-fetch cap. Not a
random sample, no sampling frame, no vendor weighting. A tally over three products is a tally over three products.

| # | Vendor / catalogue no. | Format | Stock concentration: PRINTED? IN WHAT FORM | Recommended dilution form |
|---|---|---|---|---|
| 1 | Cell Signaling Technology 5125, lot 8 (CoA) | conjugated, HRP | **exact scalar, "36 ug/ml" — but LOT-SCOPED**, on a CoA versioned 2025-04-11 and signed 22-April-2024; the catalogue-level post for this vendor prints none | **absent** on this document |
| 2 | Sigma-Aldrich A2228 (clone AC-74) | purified liquid immunoglobulin | **approximate scalar, "~2 mg/mL"**, with the page pointing to a lot/batch-specific certificate for the particular version | **no dilution at all** — working *concentration* ranges "0.5-1 ug/mL" (WB), "10-40 ug/mL" (ICC) |
| 3 | Synaptic Systems 266 011 (NeuN) | lyophilised purified IgG | **a MASS, "100 ug purified IgG, lyophilized"**, plus a suggested reconstitution: "add 100 ul H2O to get a 1mg/ml solution" | scalars "1 : 500", "1 : 500", and a **range** "1 : 1000 up to 1 : 5000" |

**Count, my own tally over n = 3: ZERO of 3 printed an unconditional exact scalar stock concentration attached to the
catalogue number.** One printed an exact scalar attached to a **lot** (CST 5125/8). One printed an **approximate**
scalar with a lot-certificate pointer (Sigma A2228). One printed a **mass** whose concentration depends on a
reconstitution volume the laboratory supplies (SySy 266 011). Separately, **2 of 3** gave the recommended usage as a
**range** for at least one application, and **1 of 3** gave no dilution at all, only ug/mL windows.

Formats I sampled: conjugated, purified liquid, lyophilised. Formats I did **NOT** sample, and therefore say nothing
about: **ascites, carrier-free, BSA-free**, and the Abcam-style "refer to the lot-specific datasheet/COA" catalogue
page that the task's form list anticipates. That is **NOT CHECKED** — not "could not read", and not "absent".
(Rockland's guidance page mentions ascites titres of "1:1000-1:100,000", but that is one vendor's bench prose, not an
ascites datasheet.)

## REGIME

- **Rockland tips page**: population = one vendor's user-facing how-to text; unit of analysis = guidance prose;
  instrument = none; endpoint = none; it **measures nothing** and cites nothing for the range claim. Operating
  condition = bench instruction to a user about to dilute. The candidate's claim is about **datasheets across
  vendors**; this page sits outside that regime and is silent on it except as hearsay about "the manufacturer".
- **CST blog**: population = Cell Signaling Technology's own primary antibodies, chiefly western-blot-approved; unit =
  product/lot; condition = CST's own recommended protocols, reagents and buffers; instrument = none, no data shown;
  category = **vendor marketing/policy statement by a Strategic Marketing Manager**. It establishes CST's **stated
  convention for its own catalogue** and nothing about any other vendor, and nothing measured even about its own.
- **CST CoA 5125/8**: unit = **one lot of one catalogue number**; it is a release document, not a datasheet. Its
  concentration is a measured release value for that lot only.
- **Sigma A2228 page**: unit = one catalogue number; "~2 mg/mL" is a nominal specification, and the page itself
  defers the version-specific number to a lot/batch certificate.
- **SySy 266 011 page**: unit = one catalogue number; the printed quantity is a **mass per vial**, and the
  concentration is a derived value conditional on a user action.
- **My sample**: 3 catalogue numbers, 3 vendors, convenience-selected under a fetch cap. In-regime for the question
  "what forms do datasheets print?" only as **existence proofs of forms**; out of regime for any frequency statement.

**Does the claim handed to me sit inside the regime of its sources?** Partly, and this is where the entry overreaches:
the premise is about **datasheets in general**, while both sources the entry cites are **vendor prose** — one vendor's
how-to and one vendor's marketing post — and neither is a datasheet. The entry's own vulnerability paragraph is right
that no datasheet had been opened.

## DEFECTS FOUND

1. **MISQUOTATION (sub-claim (a), and it recurs three times in the entry).** The entry's P9 and its Gate-4
   vulnerability paragraph both render Rockland as manufacturers "**often give dilution ranges**", inside quotation
   marks. The page as served says "**Often the manufacturer recommends dilution ranges compatible with other variables
   such as method,**". The verb is "recommends", not "give"; the subject is singular "the manufacturer"; and the
   clause carries a qualifier ("compatible with other variables such as method, ...") that the entry's version strips.
   The **substance survives** — Rockland does say manufacturers often recommend ranges — so this is a false quotation
   around a true paraphrase, not a fabricated fact. Source: adversary-2's note, which introduced the string with the
   same quotation marks; the entry inherited it unchecked.
2. **GRAMMAR ON THE RIGHT SIDE OF THE CUT IS UNVERIFIED.** The served Rockland segment ends mid-clause at "such as
   method,". The tail could narrow the claim (ranges as a function of method/detection/sample) rather than assert that
   datasheet figures are themselves ranges. I did not obtain it and did not infer it. The entry uses the fragment as
   though the sentence asserted the latter.
3. **UNSOURCED CLAUSE IN SUB-CLAIM (b).** "CST ... **adjusts the vial concentration instead**" is nowhere on the post.
   The post says the **assay count** is held constant and that concentration varies — and attributes that variance to
   antibody activity, sensitivity, purity and **vendor**, not to a CST fill decision. The entry's Leg B reads a
   deliberate inverse-tuning mechanism into a post that only says "no matter the concentration". The two halves of
   sub-claim (b) that **are** supported verbatim: "Because CST recommends a specific dilution or dilution range, our
   antibodies are provided for a specific number of assays", and the post prints no mg/mL or ug/mL anywhere.
4. **"CST PRINTS NO CONCENTRATION" IS TRUE OF THE POST AND FALSE OF THE COMPANY.** CST's per-lot certificate of
   analysis for product 5125 lot 8 prints "Concentration: 36 ug/ml". So the concentration is published — just on a
   **different, lot-scoped, separately versioned document that prints no dilution**. An entry that treats "CST prints
   no concentration" as a structural impossibility ("CST's convention structurally cannot supply a concentration",
   attack 6) is contradicted by CST's own release document. What is true is a **document-join** problem, not an
   absence.
5. **PUBLISHED IS NOT PERFORMED, on both vendor sources.** Neither page MEASURES anything. Rockland **asserts** that
   ranges are common and **illustrates** dilution arithmetic; CST **announces** a convention and **asserts** that its
   range is "based on real data generated in-house" while printing **none of that data** — no titration curve, no KD,
   no concentration distribution, no n. The only numbers CST prints are 1:1000, 100 ul and 10 assays. Both are
   DEFINE/ANNOUNCE, not MEASURE.
6. **A DERIVED SCALAR PRESENTED AS A PRINTED ONE.** For SySy 266 011 the printed datum is a mass; "1mg/ml" is the
   vendor's arithmetic conditional on the user adding 100 ul. Anyone recording "1 mg/ml" for this catalogue number as a
   *printed stock concentration* would be recording **someone else's conversion under an assumed volume**, which is
   exactly the arithmetic-attribution trap. The datasheet prints the conditional, not the scalar.
7. **THE PREMISE OF LEG A IS NOT SUPPORTED IN THIS SAMPLE.** 0 of 3 documents yields one unconditional scalar per
   catalogue number. One yields a scalar per **lot**; one a tilde-qualified nominal with a lot-certificate pointer; one
   a mass. A "dated datasheet of record" does not pin the number even when a number exists, because for CST the number
   is pinned by **lot and document version** (lot 8; "version 2025-04-11"; sign-off "22-April-2024"), not by the
   datasheet's date.
8. **NOT a defect, recorded so it is not mistaken for one:** the entry's "undated" label on the CST post is
   **correct** as served, and adversary 2's Rockland quotations "In practical terms, for polyclonal antisera, the
   titers may vary from 1:100-1:2000" and the ascites figures are **verbatim**. Adversary 2 quoted only the polyclonal
   half; the page's ascites clause ("1:1000-1:100,000", two orders of magnitude) is the stronger of the two and was
   left out.
9. **Silence noted, per instruction (9):** none of the five pages says anything about *computing a dose from a paper*,
   and none notes the absence of concentration reporting in the literature. Their silence is not evidence either way on
   the candidate's limb (ii).

## ROUTES THAT FAILED

- `curl` to `https://www.scbt.com/p/beta-actin-antibody-c4` and to
  `https://www.cellsignal.com/products/primary-antibodies/b-actin-8h10d10-mouse-mab/3700`:
  **"curl: (56) CONNECT tunnel failed, response 403"**, HTTP 000, zero bytes, both. Per the established routing fact
  this is **tool-scoped, not a host block** — WebFetch reached `blog.cellsignal.com` and `media.cellsignal.com`
  immediately afterwards. I did not probe the proxy. Consequence: raw HTML sampling of datasheets was unavailable, so
  every datasheet observation above is summariser-mediated and the sample is capped by the 5-fetch budget rather than
  by access.
- WebSearch on the exact served phrase `"Often the manufacturer recommends dilution ranges compatible with other
  variables"` returned **only unrelated janitorial/automotive dilution-chart pages** (Diversey, Meguiar's, a 1993
  Texas transport PDF). The sentence is not retrievable by phrase search, so the tail of the Rockland sentence remains
  **unobtained**. This is COULD NOT RETRIEVE, within budget — not "the page does not say it".
- Not attempted for want of budget, and therefore **NOT CHECKED rather than NOT FOUND or COULD NOT READ**: an
  ascites datasheet; a carrier-free / BSA-free datasheet; an Abcam-style catalogue page whose Concentration field
  defers to the lot-specific COA; `https://pdf.antibodies-online.com/productsheets/ABIN2854710.pdf` (a reseller
  product sheet surfaced by search); `https://images.bio-rad-antibodies.com/datasheets/datasheet-PAP001.pdf`.
- Not attempted here, and still open from the entry's own list: Weller M, "Quality Issues of Research Antibodies",
  *Analytical Chemistry Insights* 2016, via the SAGE route rather than `opus4.kobv.de`. The entry names it as the
  single unopened source most likely to settle the documentation question; this check did not reach it.

## BEARING ON THE LEDGER ENTRY

1. **The hinge premise is unsupported in the only sample anybody has taken, which is mine, and it is three documents
   deep.** Leg A needs "one dated datasheet -> one scalar stock concentration per catalogue number". Of three product
   documents from three vendors: one gives an exact scalar **per lot** on a **separately versioned CoA that prints no
   dilution**; one gives "**~2 mg/mL**" and points to a lot/batch certificate; one gives a **mass** reconstituted at a
   volume the laboratory supplies. On this sample the computed dose for a fixed quoted dilution is **not** a unique
   number, which is what the entry itself identified as the condition for its own identity. **I do not generalise:
   n = 3, convenience-selected, three formats, no frequency claim.**
2. **The entry's self-recorded vulnerability was well placed and is now partly evidenced.** The entry wrote that the
   identity "holds only if a dated datasheet yields a unique scalar stock concentration, and that is precisely what is
   unmeasured", and it listed exactly the forms I found (range, bound, lot-dependent, lyophilised mass). Three of its
   five anticipated forms turned up in three pulls. It should be read as a rejection resting on an **unmeasured**
   premise that now has **adverse** first evidence against it, not as one resting on an established identity.
3. **Leg B needs rewording in two places.** "CST ... adjusts the vial concentration instead" is not in the source and
   should be struck or re-attributed as the entry's inference. "CST prints no stock concentration" should be narrowed
   to "**the post prints none, and CST's catalogue-level product documentation does not carry one**" — because CST's
   own per-lot CoA prints "Concentration: 36 ug/ml". Attack 6's stronger phrasing, that CST's convention
   "structurally cannot supply a concentration", is **contradicted** and should go.
4. **Sub-claim (a) should keep its substance and lose its quotation marks.** Replace manufacturers "often give
   dilution ranges" with the served text, flagged as cut: "Often the manufacturer recommends dilution ranges
   compatible with other variables such as method, [...]". If the entry wants a verbatim range claim from Rockland, the
   titre sentences are the ones to quote, and the ascites clause ("1:1000-1:100,000") is the stronger half that the
   batch left on the floor.
5. **A third form appeared that nobody in the batch named, and it bears on limb (i) directly.** Sigma A2228 gives **no
   recommended dilution at all** — the recommendation is a **working concentration range** in ug/mL (0.5-1 ug/mL for
   WB). That is neither of the two categories limb (i) contests. Any re-specification needs it as a named stratum, and
   it also means the response variable "recommended dilution" is **undefined** for some products, independently of the
   range problem adversary 2 filed.
6. **What a real settling study would have to do, as this check learned it.** The identity fails or holds on a
   **document join**, not on a datasheet alone: catalogue page (dilution, no concentration) x lot CoA (concentration,
   no dilution) x lot number, with the lot number present in only ~1% of papers by the entry's own prior A. That makes
   limb (ii)'s computability fraction look **more** interesting, not less, and it makes the within-product spread a
   function of **lot-CoA dispersion**, which is measurable from published CoAs like the one I opened — not a construct
   requiring data "the frame excludes", as the Leg-A rebuttal assumed.
7. **Not a novelty finding.** Nothing I opened performs either limb of the candidate's measurement. The entry's "CHECK
   ON THE KILL" stands: no source here prints a dose-computability fraction or a distribution of computed antibody
   concentrations.
