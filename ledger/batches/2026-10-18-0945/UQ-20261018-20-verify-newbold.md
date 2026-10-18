# UQ-20261018-20 — Source read: Newbold et al. (2014)

Reader: source-reader subagent. Date: 2026-10-18.
Budget used: 7 web searches, 7 fetches (exactly at budget; no overrun).

## READ LEVEL (Rule 2)

**ABSTRACT ONLY.**

What I actually saw: the publisher's article front matter (title, article-type label,
complete author line with affiliation markers, journal/volume/issue/DOI/PMID), the
**complete six-sentence abstract** (recovered in overlapping segments because the fetch
summariser truncates every quotation at ~125 characters — see Rule 5 notes below), the
Pure-style institutional record (which supplied the page range), and the full table of
contents of the issue the piece appears in.

What I did **not** see: **any of the body text.** The full-text page is paywalled. Therefore
every "NOT FOUND" below that concerns the body is **COULD NOT READ**, not a check that
passed (Rule 3). I have marked each one explicitly.

No FULL TEXT RAW route existed: all direct HTTPS egress from this container is denied at
the gateway (see failed routes), so WebFetch's summariser was the only channel, and it
truncates quotations.

## Q1 — Identity and citation

**The document exists and is pinned.** Full citation as established:

> Newbold A, Martin BP, Cullinane C, Bots M. **Measuring Apoptosis in Mammals In Vivo.**
> *Cold Spring Harbor Protocols* 2014;2014(11):pdb.top070417, pp. 1125–1127.
> doi:10.1101/pdb.top070417. PMID 25368316.

- **Title, exactly as printed on the article's own page:** "Measuring Apoptosis in Mammals In Vivo"
- **Article-type label as printed: "Topic Introduction"** — not a review, not a research paper.
- **Author line in printed order, from the publisher's own article page** (Rule 4): Andrea
  Newbold¹, Ben P. Martin¹, Carleen Cullinane²·³, and Michael Bots⁴ (Bots is the
  corresponding author). Four authors, in that order.
  - 1 — Gene Regulation Laboratory, Cancer Therapeutics Program, Peter MacCallum Cancer Centre, East Melbourne, Victoria, Australia
  - 2 — Translational Research Laboratory, Cancer Therapeutics Program, Peter MacCallum Cancer Centre, East Melbourne, Victoria, Australia
  - 3 — Sir Peter MacCallum Department of Oncology, The University of Melbourne, Parkville, Victoria, Australia
  - 4 — Laboratory for Experimental Oncology and Radiobiology (LEXOR), Center for Experimental Molecular Medicine, Academic Medical Center, Amsterdam, The Netherlands
  - The institutional record page independently prints the same four names in the same
    order, and the issue table of contents prints the same four names in the same order.
    **Crossref's ordered list could not be consulted — api.crossref.org is blocked here**
    (exact error logged below). So the order is attested by the publisher's own article
    page plus two corroborating listings, not by Crossref.
- **Page range 1125–1127** comes from the institutional record page, not from the article's
  own first page; flagged as record-sourced. The publisher page identifies the item by
  article id (pdb.top070417) rather than page numbers.

### More than one "Newbold et al. 2014" could match — this matters

**Three items in this same issue carry the identical four-author line in the identical order:**

| Type | Title | Article id |
|---|---|---|
| **Topic Introduction** | Measuring Apoptosis in Mammals In Vivo | **pdb.top070417** |
| Protocol | Detection of Apoptotic Cells Using Immunohistochemistry | pdb.prot082537 |
| Protocol | Detection of Apoptotic Cells Using Propidium Iodide Staining | pdb.prot082545 |

So a bare "Newbold et al. (2014)" is ambiguous across three documents. **I read
pdb.top070417**, because it is the only one of the three that is an *introduction* (the
brief's description — "an introduction or review of methods for studying cell death in
vivo") and because it is the one whose abstract carries both of the claims the ledger
attributes to the source. The other two are bench procedures. The Topic Introduction is a
~3-page front piece that heads those two protocols.

## Q2 — The two attributed claims, checked un-primed

### Method note (Rules 5 and 6)

I deliberately obtained the abstract **un-primed first**: I asked for a sentence-by-sentence
verbatim transcription of the abstract without ever supplying the phrases
"billions of cells per day" or "clearance efficiency". Both target sentences came back from
that neutral request, which is stronger evidence than a primed string check (Rule 6).

The summariser cut every sentence at ~125 characters. I recovered the tails by a **positional**
request (transcribe from ~character 85 of sentences 3, 4 and 5 to the closing full stop),
again without supplying any content string. The head and tail segments **overlap**, which is
how I know they belong to one sentence; I report them as labelled segments and flag the
reconstruction as mine (Rules 5 and 9).

### Q2(a) — "billions of cells per day" attributed to apoptosis: **YES, VERBATIM**

Abstract sentence 3, as the two segments came back:

- head segment (un-primed, cut by the summariser at ~125 chars):
  "Despite the loss of billions of cells per day by apoptosis in the human body, the number of apoptotic" [CUT — sentence continues]
- tail segment (positional request, begins mid-word):
  "mber of apoptotic cells found in healthy tissue is surprisingly low and reflects the efficiency of this process."
- the summariser also returned the sentence's final eight words independently:
  "low and reflects the efficiency of this process."

**My reconstruction** (labelled as mine; the junction is the overlap "the nu|mber of apoptotic"):
"Despite the loss of billions of cells per day by apoptosis in the human body, the number of
apoptotic cells found in healthy tissue is surprisingly low and reflects the efficiency of
this process."

- **The string "billions of cells per day" is VERBATIM.** The document's own construction is
  "the loss of billions of cells per day by apoptosis in the human body".
- **Figure and units:** "billions" of cells **per day**. An order of magnitude only — no
  number, no range, no uncertainty is attached to it anywhere in the abstract.
- **Population:** the **human body** — explicitly humans, whole organism.
- **Level of aggregation (Rule 8): whole organism per day.** There is no per-tissue,
  per-gram, per-cell-type or per-compartment breakdown anywhere in the abstract.
- **Measured, calculated, or cited?** **Cannot be determined.** It is given as a bare
  background premise in the abstract's third sentence, with no source, no derivation and no
  method. Abstracts in this journal carry no citations, so whether the body cites a source
  for it is **COULD NOT READ** — the body is paywalled. I cannot name a cited source, and I
  am not going to guess one.
- Note the rhetorical role: "Despite ..." — the figure is used as the *setup* for the
  observation that visible apoptotic cells are nonetheless rare, not as a result.

### Q2(b) — "counts in healthy tissue reflect clearance efficiency rather than the death rate": **PARTLY. The paraphrase overstates.**

The relevant clause is the second half of the same sentence 3 (quoted above):
"...the number of apoptotic cells found in healthy tissue is surprisingly low and reflects
the efficiency of this process."

Surrounding passage (abstract sentences 2 → 4, each as its own segment, **not stitched**):

- sentence 2 (head only; tail not recovered verbatim):
  "To prevent inflammation, cells undergoing apoptosis produce "find-me" signals that trigger the recruitment of phagocytes" [CUT — sentence continues; the record page's paraphrase indicates it goes on to say the phagocytes clear them after recognising "eat-me" signals, but I do not have that tail verbatim]
- sentence 3: as quoted above.
- sentence 4, head segment: "However, in certain conditions (e.g., in cancer cells responding to chemotherapy), the number of apoptotic cells is too" [CUT]
- sentence 4, tail segment: "the number of apoptotic cells is too high to be efficiently cleared by phagocytes, and apoptotic cells can be observed."

**Is the supplied paraphrase faithful? Two halves, two verdicts:**

1. "counts of dying cells in healthy tissue reflect clearance efficiency" — **faithful in
   substance, NOT verbatim.** The phrase **"clearance efficiency" does not appear.** The
   document writes "**the efficiency of this process**", where "this process" refers back to
   the phagocyte recruitment-and-clearance described in sentence 2. So the referent is
   clearance, but the ledger's noun phrase is the ledger's, not the document's.
2. "**rather than the death rate**" — **this clause is NOT in the abstract.** The document
   draws no explicit contrast with the death rate. The contrast is carried only by the
   concessive "**Despite** the loss of billions of cells per day ...". The ledger's "rather
   than the death rate" is an *inference* from that "Despite", and a reasonable one, but it
   is not the document's printed claim. Likewise "**conceding**" is the ledger's framing: the
   document presents this as unremarkable background and immediately pivots to using it
   (sentence 4) to explain why apoptotic cells become visible in treated tumours.
- **Level of aggregation (Rule 8):** "the number of apoptotic cells found in healthy tissue"
  is a **prevalence / count per tissue** (a histological count), not a rate. The document
  sets a whole-body per-day **rate** against a per-tissue **count** without reconciling them
  numerically.

## Q3 — Per-modality share or partition of cell death

**NOT FOUND in the abstract** (read at abstract level — this is the whole abstract, all six
sentences). The abstract names **no cell-death modality other than apoptosis**: no necrosis,
no necroptosis, no autophagy, no phagoptosis, no pyroptosis. The title and the whole framing
are apoptosis-only ("Measuring **Apoptosis** in Mammals In Vivo").

**For the body: COULD NOT READ.** The body is paywalled, so I have not established that a
partition is absent from the document as a whole — only that none appears in the abstract.
Given that this is a ~3-page topic introduction to two apoptosis-staining protocols, a
modality partition would be out of scope, but that is my inference, not a read.

## Q4 — Corpse persistence or clearance time (would allow prevalence → rate)

**NOT FOUND in the abstract.** No time constant, half-life, duration, clearance rate or any
figure with time units appears anywhere in the six sentences. The only gesture at clearance
kinetics is the **qualitative** "the efficiency of this process" and "too high to be
efficiently cleared by phagocytes" — both without units, without a number, and without a
citation.

**Consequence, labelled as my own reasoning (Rule 9):** this document as read supplies a
whole-body rate ("billions per day", order of magnitude only) and a per-tissue prevalence
("surprisingly low"), but **no persistence time**, so **the conversion between prevalence and
rate cannot be performed from this document's own numbers.** I am carrying no uncertainty
through because the document states none.

**For the body: COULD NOT READ.**

## Q5 — Does it pose, as an open question, the share of physiological death by each modality?

**NOT FOUND in the abstract.** The abstract poses no open question at all. Its forward-looking
sentences are about utility, not about an unanswered partition:

- sentence 5, tail segment: "progression as well as in predicting the responses of tumors to anticancer therapies."
- sentence 5, head segment: "In these situations, the detection of apoptosis may be helpful in monitoring disease progression as well as in predicting" [CUT]

**For the body: COULD NOT READ.**

## Q6 — Framing: intervention contrasts vs. measuring baseline rates

**Yes — the framing is intervention/treatment-response, not baseline measurement in
untreated animals.** Three things in the abstract show it, and the issue structure confirms it.

**The document's own scope statement (Rule 7)** — abstract sentence 6:
"Here we introduce various methods for monitoring apoptotic cells in vivo using a murine model of B-cell lymphoma" [CUT; the first fetch returned the quoted fragment "a murine model of B-cell lymphoma and a solid tumor xenograft", so it continues "and a solid tumor xenograft."]

So **the document's stated scope is: methods for monitoring apoptotic cells in vivo in two
mouse cancer models** — a murine B-cell lymphoma model and a solid tumour xenograft. That is
the scope the document claims for itself.

The pivot sentence is explicitly about a drug intervention — sentence 4, head segment:
"However, in certain conditions (e.g., in cancer cells responding to chemotherapy), the number of apoptotic cells is too" [CUT]

**Organisation:** it is a **"Topic Introduction"** of roughly three pages (pp. 1125–1127)
that heads **two companion bench protocols in the same issue with the identical author
line** — Detection of Apoptotic Cells Using Immunohistochemistry (pdb.prot082537) and
Detection of Apoptotic Cells Using Propidium Iodide Staining (pdb.prot082545). Its job is to
frame two histological detection assays for use in treated tumour models.
Caveat: I characterise the organisation from the article-type label, the page extent, the
abstract and the issue table of contents. **I could not read the body's section headings.**

### Scope correction the ledger should carry (Rule 7)

The brief described this source as "an introduction or review of methods for studying cell
death **in vivo**". The document is narrower on three axes, by its own text:
1. **Apoptosis only**, not cell death in general (title and every sentence).
2. **Two mouse cancer models**, not healthy tissue and not mammals broadly — despite the
   title's "Mammals In Vivo". The healthy-tissue remark is one clause of background.
3. **A ~3-page topic introduction to two staining protocols**, not a review. Treating it as
   a review of in-vivo cell-death measurement would overstate what it is.
The "billions per day" figure and the healthy-tissue/clearance remark are **background
framing in a single abstract sentence**, not findings, and the document's purpose is to
motivate detecting apoptosis in **treated tumours**.

## Failed routes, with exact error text (Rule 10)

Every direct-egress attempt from the container was denied at the gateway. None was a
permission refusal; none was reworked to get around it.

1. `curl https://api.crossref.org/works/10.1101/pdb.top070417`
   → `curl: (56) CONNECT tunnel failed, response 403`
   Proxy status log: `{"kind":"connect_rejected","detail":"gateway answered 403 to CONNECT (policy denial or upstream failure)","host":"api.crossref.org:443"}`
   **Effect: Crossref's ordered author list was unavailable** (Rule 4's preferred check).
2. `curl https://cshprotocols.cshlp.org/content/2014/11/pdb.top070417.full` → `curl: (56) CONNECT tunnel failed, response 403` (HTTP 000, size=0)
3. `curl https://cshprotocols.cshlp.org/content/2014/11/pdb.top070417.abstract` → `curl: (56) CONNECT tunnel failed, response 403` (HTTP 000, size=0)
4. `curl https://pubmed.ncbi.nlm.nih.gov/25368316/` → `curl: (56) CONNECT tunnel failed, response 403`
5. `curl https://eutils.ncbi.nlm.nih.gov/entrez/eutils/efetch.fcgi?...id=25368316...` → `curl: (56) CONNECT tunnel failed, response 403`
6. `curl https://api.openalex.org/works/doi:10.1101/pdb.top070417` → `curl: (56) CONNECT tunnel failed, response 403`
7. `curl https://api.semanticscholar.org/graph/v1/paper/DOI:10.1101/pdb.top070417?fields=...` → `curl: (56) CONNECT tunnel failed, response 403`
8. `curl https://doi.org/10.1101/pdb.top070417` → `curl: (56) CONNECT tunnel failed, response 403`
   Proxy status log also shows `doi.org:443` under `recentRelayFailures` with the same detail.
9. **WebFetch** `https://pubmed.ncbi.nlm.nih.gov/25368316/`
   → `{"error_type":"CLIENT_ERROR","source":"target","message":"There was an error while fetching."}`
   (This is why the abstract had to be recovered from the publisher's own pages.)
10. **Paywall, not an error** — WebFetch of the `.full` page returned the barrier verbatim:
    "This item requires a subscription to Cold Spring Harbor Protocols." with
    "To view this item, select one of the options below:" and Pay-per-Article / Sign In /
    Shibboleth / Subscribe options. **This is the reason the read level is ABSTRACT ONLY.**
11. **PMC and Europe PMC: not attempted**, per the brief (hard-blocked). No PMCID was listed
    on the publisher page or the institutional record; only PMID 25368316. So there was no
    PMCID to convert.
12. **No open-access or repository copy exists** as far as three searches could establish. The
    institutional record page states it has no downloadable file and offers only the DOI, with
    the rights line "All rights are reserved, including those for text and data mining, AI
    training, and similar technologies." There is **no preprint** for this item (it is a
    journal topic introduction, not a research article), so the Rule-1 preprint fallback
    did not apply.

## My own errors and limitations (Rule 12)

- **Budget: exactly at limit — 7 searches, 7 fetches. No overrun.** One of the 7 fetches
  (PubMed) returned an error and yielded nothing, so 6 fetches produced content.
- **The 125-character quotation truncation is the main limitation on this read**, and I am
  flagging it rather than completing any sentence from memory (Rule 5). Sentence tails I do
  **not** have verbatim: the end of sentence 1 (after "superfluous, damaged, or"), the end of
  sentence 2 (after "recruitment of phagocytes"), and the end of sentence 6 (after "B-cell
  lymphoma") — for the last, the first fetch separately returned the quoted fragment
  "a murine model of B-cell lymphoma and a solid tumor xenograft", which covers it.
- **Sentence 3 is a reconstruction of mine from two overlapping segments**, labelled as such
  above. Its two key elements — "billions of cells per day" and "reflects the efficiency of
  this process" — each appeared inside a returned segment, and the ending was independently
  confirmed by the "final eight words" request. I did not see sentence 3 as one unbroken string.
- **I did not run a separate single-request check for the string "billions of cells per day"**
  (Rule 5's per-string discipline), because the phrase arrived un-primed in a neutral
  sentence-by-sentence transcription before I had spent any fetch on it, which satisfies
  Rule 6's stronger test. Budget was exhausted before a redundant primed check was possible.
  Flagging the deviation.
- **The body is unread.** Q3, Q4, Q5 answers are abstract-level only, and the Q6
  characterisation rests on the article type, page extent, abstract and issue TOC rather than
  on the body's own section structure.
- I did not supply any personal identifier to any service, and skipped Unpaywall entirely
  (Rule 11). The corresponding author's published email address appeared in one fetch result;
  I have not reproduced it here and did not put it into any request.
