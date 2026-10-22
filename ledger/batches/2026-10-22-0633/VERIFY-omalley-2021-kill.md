# VERIFY — O'Malley 2021 (Control-IQ pump parameter adjustment) — kill check

## CLAIM

The ledger rejection rests on numbers attributed to O'Malley G, Messer L, Levy C, Pinsker J,
Forlenza G, Isganaitis E, Kudva Y, Ekhlaspour L, Raghinaru D, Lum J, et al., for the iDCL Trial
Research Group, "Clinical Management and Pump Parameter Adjustment of the Control-IQ Closed-Loop
Control System: Results from a 6-Month, Multicenter, Randomized Clinical Trial", *Diabetes
Technology & Therapeutics* 2021;23(4):245-252, DOI 10.1089/dia.2020.0472.

Sub-claims handed to me: (a) front matter/author order as printed; (b) 607 parameter-change
encounters in 168 users; (c) time-in-range 70-180 mg/dL 71.2% -> 71.3%, and whether that is a
before/after comparison around parameter changes; (d) whether the finding is stated as a null and
how hedged; (e) per-settings-class breakdown (basal, correction factor, carbohydrate ratio,
target); (f) DECISIVE — whether the paper nets out the closed-loop controller's own concurrent
adaptation from the effect of a human settings edit; (g) regime; (h) which of (b)-(f) is
abstract-establishable versus full-text-only.

## READ LEVEL

**COULD NOT READ.** Not "not found" — the record demonstrably exists and its identifier triple was
confirmed first-hand. I reached **no** article text at any level in this context: not full text,
and not even abstract level. Zero of sub-claims (a) through (g) is established by me from the
source.

What I did establish first-hand, and the only thing I established:

- NCBI PMC ID converter (`pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/`, reached via a 302
  from the legacy `www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/` path) served, as JSON:

  `{"pmcid":"PMC8114941","pmid":33155824,"doi":"10.1089/dia.2020.0472"}`

  So PMC8114941 == PMID 33155824 == DOI 10.1089/dia.2020.0472. The converter is a route that
  **does** open, in contrast to PMC article pages. It returns three identifier fields and nothing
  else: it confirms the DOI the ledger cites, and it carries **no** front matter — no title, no
  author list, no volume, no pages. Sub-claim (a) is therefore **unestablished**; the author order
  above is copied from the task text (a short form someone else wrote), which is exactly the kind
  of second-hand front matter rule (7) forbids relying on.

## WHAT THE SOURCE SAYS (quotations as served)

**Nothing.** No sentence of this paper was served to me, so there is no quotation to report, no
reconstruction to assemble, and no segment-stitching to attempt — the ~125-character cap never
became the binding constraint, because no body text was ever returned at all.

Specifically, and so the record is unambiguous:

- (b) 607 encounters / 168 users — **not seen**. I cannot say the paper prints either number, nor
  what it defines an "encounter" to be.
- (c) 71.2% -> 71.3% time in range 70-180 mg/dL — **not seen**. I cannot say whether such a pair is
  printed, nor whether it is a before-versus-after comparison bracketing parameter changes or
  something else (e.g. an arm-level or whole-period figure that someone else recast as a
  before/after pair).
- (d) a null statement and its hedging — **not seen**.
- (e) per-settings-class breakdown — **not seen**; I cannot say which classes it breaks out or
  whether any class carries its own outcome number (the granularity question is wide open).
- (f) netting out the controller's own concurrent adaptation — **not seen**, and this is the one
  that decides the rejection.
- (g) regime — **not established from the source**. The title alone (as it appears in search result
  listings and in the task text) says "6-Month, Multicenter, Randomized Clinical Trial" and
  "Control-IQ"; I have not read a Methods section, so population, age range, trial identity, period
  and whether this is a secondary analysis of a randomised trial are all unverified by me.

## REGIME

Cannot be stated from the source. I will not infer a regime from a title: the whole reason this
check exists is that regime detail (unit of analysis — encounter vs participant vs day; endpoint;
comparator; estimand) lives in Methods, and Methods is precisely what did not open. Writing a
confident one-line regime here from the title would reproduce the batch defect I was sent to catch.

## DEFECTS FOUND

1. **The kill has no first-hand full-text basis anywhere in the batch, and now not from me either.**
   Every prior agent read abstract level only; I reached less than that. The rejection's load-bearing
   quantities (607/168, 71.2% -> 71.3%) are, as of this check, **attributed but unverified** — nobody
   in the chain has reported them as served from the paper's Results.
2. **The decisive clause is structurally not abstract-establishable.** Sub-claim (f) asks whether the
   paper separates a human settings edit from the controller's own concurrent adaptation over the
   same period. That is a confounding-control / estimand statement; it lives in Methods and
   Limitations, never in a 250-word structured abstract of a clinical-management paper. So even a
   clean abstract read — the level the rest of the batch has — is **silent** on (f) by construction.
   An abstract that reports "parameter changes were not associated with improved time in range"
   cannot tell you whether the comparison was adjusted for, or merely coincident with, Control-IQ's
   own automatic basal adaptation. A rejection that needs (f) cannot be carried by an abstract.
3. **Published-is-not-performed risk is unresolved.** I was asked to answer whether the paper prints
   a quantity by naming the number and its location (table, figure or sentence) with units and
   denominator. I can name no location for any of (b)-(e). I also cannot say whether the paper
   DEFINES, BOUNDS, PREDICTS, ANNOUNCES or MEASURES the before/after TIR contrast — all five remain
   live possibilities.
4. **A pair of figures 0.1 percentage points apart is a trap for second-hand transcription.** 71.2%
   vs 71.3% is the kind of contrast whose meaning depends entirely on the denominator (encounters?
   participants? participant-weeks?), the window (how many days before, how many after?) and the
   stated uncertainty (CI or p-value). None of that travelled with the number into the ledger, and I
   could not go and get it. Carried uncertainty is absent, so rule (8) cannot be satisfied.
5. **A route the batch recorded as usable no longer opens at the path I tried.** The HAL deposit
   `hal-03654244` — named in the batch as an abstract-level route — returned a bot-protection denial
   at its `/document` path (see below). Whatever earlier agents read at HAL, the full-text PDF path
   is not reproducible from here now.
6. **One documented routing claim reconfirmed, one refined.** A `curl` CONNECT failure at this proxy
   is tool-scoped, not a host block: `www.ebi.ac.uk` refused CONNECT to curl with 403 and then
   answered WebFetch from the same host — WebFetch got a real, target-sourced response (a rate
   limit) rather than a tunnel error. And liebertpub.com fails for this DOI at the publisher page, as
   previously recorded; it is not a stale note.

## ROUTES THAT FAILED

In order attempted, with the exact failure as served:

1. `https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=PMC8114941&format=json` — HTTP 302 to the
   modern converter path. Not a failure; followed. **The converter then SUCCEEDED** (the only success
   of this check).
2. `https://www.liebertpub.com/doi/10.1089/dia.2020.0472` — "failed at its site (client_error), and
   nothing of the page was retrieved." Publisher route dead for a second time, independently of the
   earlier agents' attempt.
3. `https://www.ebi.ac.uk/europepmc/webservices/rest/PMC8114941/fullTextXML` via **curl** —
   `curl: (56) CONNECT tunnel failed, response 403`. Tool-scoped proxy refusal; per routing
   guidance this says nothing about the host, so I retried the same URL through WebFetch.
4. Same URL via **WebFetch**, attempt 1 — `RATE_LIMIT_EXCEEDED`, `"source":"target"`. The error text
   invited exactly one retry.
5. Same URL via **WebFetch**, attempt 2 (the invited single retry, issued alone, not alongside any
   other call) — `RATE_LIMIT_EXCEEDED`, `"source":"target"` again. This is the documented Europe PMC
   429 behaviour arriving through the `ebi.ac.uk` REST host rather than `europepmc.org`. Treated as
   final; **not** worked around.
6. `https://hal.science/hal-03654244/document` — served an Anubis bot-protection interstitial:
   heading "Oh noes!", body "Access Denied: error code 9e4edb5b6b850c41", and a "Go home" link. No
   article text.

Not attempted, deliberately: PMC article pages (PMC8114941 is an identifier to convert, not a route —
and the conversion is the one thing that worked); doi.org resolution (documented 429 with a
do-not-retry instruction); Unpaywall (would require putting a contact address in a query string —
skipped entirely rather than supply one); nature.com-style publisher scraping; and any inspection of
the egress proxy. One search was spent; the search tool here returns titles and URLs without text
snippets, so remaining searches could not substitute for a read.

Fetch budget (5) is exhausted. Per instruction, I stopped rather than improvising further routes.

## BEARING ON THE LEDGER ENTRY

**This check does not clear the rejection, and it does not refute it either. It converts the kill
into an unverified kill.**

Three things follow, and I want them separable so the ledger can act on whichever it accepts:

1. **The rejection cannot stand as a verdict on this evidence.** The batch's own standard — "a kill
   resting on an abstract belongs in a promotion condition, not a verdict" — applies at full force
   here, and more sharply than when the instruction was written: this kill rests on an abstract that
   nobody has re-read against the numbers, plus two figures (607/168 and 71.2% -> 71.3%) that no
   agent in the chain has reported as served from the paper's Results. The correct disposition is to
   **demote the rejection to a promotion condition** pending a full-text read.
2. **The condition should be written against (f), not against (b)-(c).** Even if a later reader
   confirms 607 encounters in 168 users and a 71.2% -> 71.3% TIR contrast exactly as printed, that
   confirmation does **not** by itself sustain the kill. The candidate's estimand is the effect of a
   human settings edit **net of the controller's own concurrent adaptation**. A before/after TIR
   contrast computed across Control-IQ users measures the edit **plus** whatever the algorithm did to
   itself over the same window — the two are confounded by design unless the paper says it separated
   them. So the kill needs an affirmative finding at (f): a sentence in which the authors state that
   they isolated, adjusted for, or otherwise accounted for automatic adaptation. If the paper does
   not contain such a sentence, then it measures a quantity **without the clause that distinguishes
   the candidate**, and the candidate survives regardless of how clean the 607/168 and 71.2/71.3
   numbers are. Absence of such a sentence is the likely case — a clinical-management paper reporting
   what clinicians changed and what happened next is not usually built as a causal-identification
   paper — but likely is not established, and I am not recording a guess as a finding.
3. **Re-check instructions for whoever gets full text.** Routes worth trying that I could not:
   liebertpub at the `epub`/`full` path rather than `/doi/`; the Jaeb Center (iDCL trial
   coordinating centre) publications page; the Barbara Davis Center / Stanford / Mount Sinai
   institutional repositories whose metadata records already surfaced in search; and a later retry of
   `ebi.ac.uk` europepmc `fullTextXML` once its rate limit has cleared, which is the cheapest path to
   complete text if PMC8114941 is in the author-manuscript subset. Whoever reads it should answer (f)
   **first**, quote the sentence, and only then transcribe (b), (c) and (e) with their printed
   locations, units, denominators and stated uncertainty.

Finally, one guard on my own note: nothing above should be read as evidence that the paper lacks a
netting-out clause, that its numbers differ from those quoted, or that the ledger's reading was
wrong. Silence here is my silence, not the source's. I could not open it.
