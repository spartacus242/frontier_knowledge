# UQ-20261018-20 — Source read: Sender & Milo (2021), whole-body cell turnover

Reader: source-reader subagent. Date: 2026-10-18.
Brief: establish what this ONE document says, at first hand. Not judging a candidate question.

## READ LEVEL (Rule 2)

**FULL TEXT (via summariser).** Seven WebFetch calls against the complete published
article PDF, including abstract, main text, Figure 1/Figure 2 captions and labels,
the full Methods (all nine named subsections), references, and Extended Data Fig. 1–4
captions. **NOT** FULL TEXT RAW: direct `curl` egress was policy-denied (see Failed
routes), so every word below reached me through the WebFetch summarising model. No
section was left unread, but nothing was read unmediated.

**Version read:** the PUBLISHED Nature Medicine version, not a preprint. The file
carries the journal running header "NaTuRe MediciNe | VOL 27 | JANUARY 2021 | 45-48 |
www.nature.com/naturemedicine", the "BRIEF COMMUNICATION" category label, and the DOI.
It was served from a third-party mirror (gwern.net/doc/biology/2021-sender.pdf), not
from the publisher's own host; citation details were independently corroborated against
nature.com's own article URL.

## Q1 — Citation

**EXISTS.** Confirmed at first hand from the document's own first page.

- **Title (as printed on first page):** "The distribution of cellular turnover in the human body"
- **Author line (printed order, Rule 4):** **"Ron Sender and Ron Milo"** — exactly two
  authors, Sender printed first, Milo second and marked as corresponding author.
  Single shared affiliation: "Department of Plant and Environmental Sciences, Weizmann
  Institute of Science, Rehovot, Israel."
- **Journal:** Nature Medicine. **Category:** Brief Communication.
- **Year / volume / pages:** January 2021, **vol. 27, pp. 45-48**.
- **DOI: `10.1038/s41591-020-01182-9`**

**DOI CORRECTION — FLAG THIS.** The DOI ends **-9, not -8**. I came in expecting
`...01182-8` (the form that circulates, and my own prior); the document's own first page
prints `https://doi.org/10.1038/s41591-020-01182-9`, and the publisher's article URL is
`https://www.nature.com/articles/s41591-020-01182-9`. Two independent confirmations of
-9. Any ledger citation carrying -8 is wrong in its last digit.

**Author-line caveat:** Crossref was unreachable (policy denial, logged below), so the
ordered author list could not be cross-checked there. Rule 4's primary route — the
document's own first page — was used instead. With only two authors, both named in the
ledger's own shorthand, the risk class Rule 4 guards against does not arise here.

## Q2 — The two quantities, CHECKED SEPARATELY (Rule 5), one request each, un-primed (Rule 6)

Each was found by asking the document open-endedly for "every place where the total is
stated" and for the surrounding sentence — not by handing the summariser the string.

### (a) 0.33 +/- 0.02 x 10^12 cells per day — **VERBATIM**

Four printed appearances, in three different notations:

1. Abstract — complete sentence:
   > "In terms of cell numbers, close to 90% of the (0.33 ± 0.02) × 10^12 cells per day turnover was blood cells."
2. Main text (Results, first paragraph) — **TRUNCATED at ~125 chars by the summariser**:
   > "We found that the total turnover rate of the human body is 0.33 ± 0.02 × 10^12 (330 ± 20 billion) cells d−1"
   The summariser reported that the sentence continues "(equal to about 4 million cells
   s−1)" but did so as its own report, not inside a quotation I saw whole. Treat the
   continuation as summariser-reported, not verified verbatim.
3. Figure 1b label — complete: > "Turnover of 3.3 ± 0.2 × 10^11 cells per day"
4. Methods, uncertainty subsection — **TRUNCATED** (closing parenthesis omitted):
   > "the overall uncertainty is small ≈10% (33 ± 2 × 10^10 cells d−1"

**Notation consistency (MY OWN ARITHMETIC, Rule 9):** 0.33 × 10^12 = 3.3 × 10^11 =
33 × 10^10 = 3.3e11 cells/day. All three forms are the same number. But 0.02/0.33 ≈ 6%,
whereas the Methods call the overall uncertainty "≈10%" — the paper rounds its
uncertainties *up* on purpose, stating in Methods that it "round[s] the cellular mass
turnover uncertainty up to 20 g d−1". So the printed ± is a rounded-up bound, not a
propagated s.e. Carry that forward rather than treating ±0.02 as a 6% CI.

**Internal variance to note:** the abstract says blood is "close to 90%" of the cell-number
turnover; the summariser reported the main text as giving roughly 86% (and "about 96%"
for erythrocytes + neutrophils + intestinal/stomach epithelia combined). The 90% is
verbatim from the abstract; the 86% is summariser-reported.

### (b) 80 +/- 20 grams per day — **VERBATIM**

1. Abstract — complete sentence:
   > "We found a total cellular mass turnover of 80 ± 20 grams per day, dominated by blood cells and gut epithelial cells."
2. Results — complete sentence: > "The total turnover rate of human cellular mass is 80 ± 20 g d−1"
3. Figure 2 label: > "Total mass turnover rate of 80 ± 20 g d–1"
4. Methods (power subsection), fragment: > "a cellular mass turnover rate of 80 g d−1"
   — followed in the text by "(wet weight)".
5. Methods (development comparison), fragment: > "about 80 g d−1 or about 0.1% of the total"

**Mass basis: WET WEIGHT**, stated explicitly in Methods. Not dry mass, not intracellular
mass (intracellular mass was derived from potassium content only as a cross-check).

### Population and condition for BOTH figures

- **Species:** human. **Reference individual:** the "standard reference person" — male,
  **20-30 years of age, 70 kg, 170 cm**, with the qualification "healthy" added by the
  authors. Adult. Not women, not children: the paper says sex and age shift the balance
  (mainly via blood cells) and that for women total cellular **mass** turnover changes by
  **less than 5%**, but it computes no separate total for them.
- **Scope — THIS IS A SCOPE CLAIM (Rule 7).** "Whole body" is the paper's framing but not
  literally every cell type. The totals are a **sum over an inclusion-criteria-defined set
  of cell types**: those making up **at least 0.1% of the ~30 trillion body cells**, plus
  short-lived types with **lifespan τ < 10 d**. Explicitly excluded as negligible: sperm,
  kidney cells, osteocytes. Also excluded: gut bacteria (treated separately), intracellular
  turnover, and growth of existing cells. For the types left out for want of human lifespan
  data, the paper states a **separate upper bound of 0.02 × 10^12 cells d−1 and 17 g d−1**
  (mostly lung cells and hepatocytes) which is *not* inside the 80 g / 0.33e12 totals.
  So: whole-body-aimed, tissue-census-bounded, with a stated residual.
- **Bacteria are quantified separately and are not human-cell turnover:** "the production
  of 0.5–4 × 10^14 bacterial cells, equal to 250–2,000 g d−1" (no ±; from doubling times
  of 2.5-20 h), and "an extreme lower bound of total daily turnover of at least 60 g
  (1 × 10^13 cells)". Do not blend these into the 80 g figure.

### LEVEL OF AGGREGATION (Rule 8)

Both headline figures are **whole-body, per-day totals** (cells/day and grams/day) for one
70 kg reference adult male — not per cell, per kg, per tissue or per gene. The paper's
own sub-totals are **per cell type per day**: erythrocytes 20 ± 1 g d−1; gastrointestinal
epithelium 34 ± 10 g d−1 (small intestine 19 ± 8, colon 14 ± 6, stomach 1.1 ± 0.7);
neutrophils 18 ± 4 g d−1; epidermis 3.1 ± 0.8 g d−1; B lymphocytes 0.9 and T lymphocytes
0.4 g d−1 (no ± given for the lymphocytes).

## Q3 — THE DECISIVE QUESTION: is any turnover assigned to a cell-death MODALITY?

**Answer: PARTLY YES — and a flat "no" would be wrong at the sentence level, while a
claim that the paper's *accounting* is modality-blind holds.** Both halves matter.

### What the paper's accounting splits the total by

Asked open-endedly to list every partition dimension, the document's breakdowns are by:
**cell type** (the main one: Fig. 1b by number, Fig. 2b by mass, Extended Data Figs. 1-2
at finer resolution); **broad lineage** (blood vs gut epithelium vs other — abstract and
main text); **metric** (count/day vs mass/day); **tissue/organ grouping**; **subpopulation
or differentiation stage** (T/B/NK and progenitors; neutrophil mitotic, post-mitotic,
circulating and marginal pools; stomach/small intestine/colon; circulating erythrocytes vs
marrow progenitors; nucleated keratinocytes vs corneocytes); **mean lifespan**
(Figs. 1a, 2a, high- vs low-turnover regions); **inclusion tier** (main analysis vs the
upper-bound add-on); **sex**; **age**; and **energy cost by tissue** (marrow vs GI).
**None of these is a death-modality axis.** Figures 1b and 2b — the two panels that
*are* the turnover accounting — are split by cell type and tissue, full stop.

### But one Methods sentence does assign turnover to a modality, and splits it ~50/50

The only named-mechanism attribution in the paper, returned by an **un-primed** request
(I asked for "every term the document uses to name the biological process by which these
cells die, are lost, or are removed" — I supplied no mechanism names), is:

> "About half of cells replaced daily go through apoptosis and phagocytosis by tissue macrophages"

with the remainder characterised as:

> "the other half are those of the gastrointestinal tract and skin, which are shed"

and, on the fate of the engulfed material:

> "As cells undergo phagocytosis, their content is degraded in the lysosomes of engulfing cells."

and:

> "This estimate does not include the energetic costs of organized death and removal of cells"

So **if the paper splits the total by modality at all, it splits it by DISPOSAL ROUTE**:
~half apoptosis-plus-macrophage-phagocytosis, ~half shed from the GI and skin surfaces.
Roughly half and half, with no finer pathway resolution.

### WHERE this split lives — and its status

**Methods only**, in the subsection **"Estimate of the power consumption involved in
homeostatic cellular turnover"** — the last of the nine Methods subsections. It is
**not** in the abstract, **not** in the main text, and **not** in any figure, caption or
Extended Data panel. Per the summariser, it appears in the discussion of costs **left
out of** the energy estimate, is framed as an assumption underwriting that calculation
rather than as a finding about the turnover total, and **carries no citation** for the
"about half". The authors immediately add that they assume these processes "do not have a
dramatic effect on the overall calculation".

**Confidence split:** HIGH that the sentences exist with this wording (two independent
un-primed fetches returned the same wording, and the second was asked a differently
framed question). MEDIUM on the characterisation "assumption rather than finding" —
that rests on the summariser's reading of the paragraph's rhetorical structure, because
my request for a verbatim transcription of the subsection was **refused** (logged below).
Nobody has read that paragraph's raw text in this check.

### Modalities NOT named

Asked un-primed for every mechanism term, the document yielded **apoptosis** and
**phagocytosis** only, plus generic or non-pathway language: "organized death and
removal", "shedding", and a developmental "selection process" ("many cells die rapidly by
a selection process", Methods, lymphocytes). **Necroptosis, ferroptosis, pyroptosis and
phagoptosis: NOT FOUND** — a genuine not-found at full-text-via-summariser level
(Rule 3), not an unread absence. "Programmed cell death", "Cell suicide for beginners"
and "Cell death in health and disease" appear **only as reference titles** (refs. 17, 32,
30), not as body text. The ubiquitin-proteasome system is mentioned only for protein
degradation, not as a killing mechanism.

## Q4 — Does it note the ABSENCE of a modality breakdown, or call for one?

**NOT FOUND**, after reading the full text including all nine Methods subsections and the
Extended Data captions.

The nearest sentence is about a different absence — the absence of an **energetics**
analysis, not of a modality breakdown:

> "Although these processes demand energy as well, a quantitative analysis of them is still missing and we assume that they do not have a dramatic effect on the overall calculation."

What is "still missing" there is a quantitative analysis of the **energetic cost** of
organized cell death and removal. That is not a statement that the turnover total lacks a
modality breakdown, and not a call for one. Do not let this sentence be read as the paper
flagging the gap.

The paper does call for future work on other axes: other population groups ("remains to be
conducted in future work that can follow the methodology presented here"); bacterial
turnover ("Future efforts to calibrate metagenomic measurements and new quantitative
approaches are needed"); "The effects of ethnicity, obesity and health status require
dedicated measurement for further characterization"; and "A future thorough census of
cellular mass of different tissues in the human body". **None of these is about death
modality.**

## Q5 — Corpse clearance or persistence times

**Clearance ROUTE: present (barely). Clearance or persistence TIME: NOT FOUND.**

The paper gives **no timescale whatever** for how long a dead or dying cell remains in a
tissue before removal, and no detectability window. Every duration in the paper is a
**lifespan of a living cell** before it dies — and the paper is explicit that its time
constant is keyed to death, not to clearance or differentiation:

> "The cellular turnover time is defined based on cell death and not on cell differentiation."

All it says about post-mortem fate is the Q3 material: the ~half apoptosis-plus-macrophage-
phagocytosis / ~half shed sentence, and "As cells undergo phagocytosis, their content is
degraded in the lysosomes of engulfing cells." On exit routes it names only shedding from
the GI tract and skin; it does not follow human cells into the lumen or stool (its stool
discussion is about bacteria, "half of which is bacteria"). The epidermis is described as
having "the outer layer, which contains only dead cells", without saying how those cells
leave or how long they stay. On recycling, only the lysosomal step — "The degradation of
a protein in the lysosome is associated with a need to transport its amino acids back out
to the cytosol" — and the paper is careful that "continuous recycling of intracellular
components" happens in living cells and "does not lead to cell death".

This is a read not-found, not a could-not-read.

## Q6 — Physiological vs pathological cell loss

**It does not partition its estimate into physiological vs pathological, but it does draw
the distinction in words, and uses it to scope the estimate to health.**

The scoping sentence (summariser flagged this quotation as **cut after the first clause**):

> "As the cell turnover rate may change due to different illnesses, we added the qualification 'healthy' to the standard reference."

Other sentences holding the distinction:

> "medical conditions could also affect the turnover"
> "neutrophil lifespan is extended in cases of injury and inflammation"
> "anemia leads to shortening of the lifespan of erythrocytes"
> "psoriasis leads to a substantial reduction in epidermal cell lifespan"
> "cell turnover is directly linked to cancer"
> "The effects of ethnicity, obesity and health status require dedicated measurement for further characterization."

The estimate is framed throughout for a healthy "characteristic" adult, and the Methods
subsection on the half/half disposal split is headed "homeostatic cellular turnover". But
the paper **never states outright that disease states are excluded** — it adds "healthy"
as a qualification on the reference person and treats illness as a modifier of the rates,
rather than defining a physiological/pathological boundary in its accounting.
"pathological", "pathology" and "clinical" do **not** appear in body text or Methods
("clinical data" appears only as an unchecked box in the Reporting Summary).

Forward-looking clinical framing exists: "To better understand the function of the human
body in health and disease, it is of major interest…"; "…organism renewal in health and
disease that can be informed by our analysis."; "can rationalize benchmark values for
monitoring tissue-specific biomarkers in the blood"; "Deviations from these could signify
specific tissue damage" (continuing, per the summariser, "as demonstrated, for example,
for cancerous conditions"); and the posed future question "How does the turnover of tumor
cells compare to the total cellular turnover of the patient's body?"

## FAILED ROUTES, with exact error text (Rule 10)

1. `curl -sS -L -o sender2021.pdf "https://gwern.net/doc/biology/2021-sender.pdf"` →
   `curl: (56) CONNECT tunnel failed, response 403`, `HTTP:000 SIZE:0`.
   The proxy status endpoint classes this as
   `"kind": "connect_rejected", "detail": "gateway answered 403 to CONNECT (policy denial or upstream failure)"`.
   /root/.ccr/README.md: "do not retry or route around it — report the blocked host."
   **Not retried.** CONSEQUENCE: no FULL TEXT RAW read was possible; read level capped at
   FULL TEXT (via summariser).
2. `curl -sS "https://api.crossref.org/works/10.1038/s41591-020-01182-8"` →
   `curl: (56) CONNECT tunnel failed, response 403`, and the parser then failed on empty
   input with `json.decoder.JSONDecodeError: Expecting value: line 1 column 1 (char 0)`.
   Same policy denial; `api.crossref.org:443` already appears twice in the proxy's own
   `recentRelayFailures` from earlier agents this batch. **Not retried.**
   CONSEQUENCE: Crossref's ordered author list was unavailable; Q1's author check rests
   on the document's own first page (Rule 4's primary route) plus the publisher URL.
3. WebFetch request for a verbatim transcription of the Methods subsection "Estimate of
   the power consumption involved in homeostatic cellular turnover" → **REFUSED** by the
   summariser: "I can't transcribe the subsection verbatim. Reproducing it word for word
   would exceed the 125-character limit on quoted material and would reproduce source text
   outside quotation marks." **Recorded and stopped; the call was not reworked to get
   around the refusal.** CONSEQUENCE: the status of the ~50/50 modality split (assumption
   vs finding) is summariser-characterised, not read raw. This is the single weakest link
   in the decisive finding.
4. PubMed Central / Europe PMC: **not attempted**, per the brief's hard-block note.

## BUDGET AND SELF-REPORTED ERRORS (Rule 12)

- **Searches: 3 of 7** used.
- **Fetches: 7 of 7** used — fetch budget **fully exhausted**, no overrun. One of the
  seven returned a refusal rather than content, so six produced usable reading.
- Error of my own: I carried in the DOI `...01182-8` and used it in the (blocked) Crossref
  call. The document shows the correct suffix is `-9`. No finding rests on the wrong form,
  but the call I attempted was built on it.
- Rule 11 observed: no email, name or personal identifier was placed in any URL, query
  string, header or form. Unpaywall was not used. The corresponding-author email printed
  on the paper's first page was not transmitted anywhere.
- Residual uncertainty worth a second reader: (i) the raw text of the Methods power
  subsection, to settle whether the ~50/50 apoptosis/shedding split is an assumption or a
  claim; (ii) whether the main text's blood-cell share is 86% or "close to 90%", since
  only the abstract's figure is verbatim here; (iii) the "~70 cell types analysed" count,
  which was summariser-inferred and which I did not verify against Supplementary Table 2.
