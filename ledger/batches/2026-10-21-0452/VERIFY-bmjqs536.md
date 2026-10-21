# VERIFY — BMJ Quality & Safety 2020;29(7):536

## Citation, as the source itself serves it

**Not obtainable at this access level.** `qualitysafety.bmj.com/content/29/7/536` renders to the
reader as `Article Text` → `Statistics from Altmetric.com` → body → `References` →
`Supplementary materials` → `Footnotes`. The masthead (title, byline, affiliations, article-type
label, volume/issue/page citation, DOI) is **not in the text served to me**, on two separate reads
with two different prompts. The same is true of `/content/29/7/595`.

What the 536 page itself does serve about its own status, verbatim from its Footnotes:

- "Not commissioned; externally peer reviewed."
- "Competing interests None declared."

Everything else below that looks like front matter comes from third-party records and is labelled
as such. Per rule (7) I am **not** asserting it as front matter.

## Read level and failed routes

| Item | Read level |
|---|---|
| 29(7):536 body | **full text** (publisher host, via summariser) |
| 29(7):536 front matter | **COULD NOT READ** |
| 29(7):595 (Koyama) | **abstract + at least part of the Discussion** served by the publisher page; not verified as full text |
| 29(7):595 front matter | **COULD NOT READ** |

Routes that failed:

1. `curl https://qualitysafety.bmj.com/content/29/7/536` and `/595` → `curl: (56) CONNECT tunnel
   failed, response 403`. Tool-scoped, as expected; not a host block (WebFetch reads the same host).
2. `boris-portal.unibe.ch/entities/publication/f9ff686a-.../full` → page served **empty** (separator
   lines only). No bibliographic record obtained.
3. ResearchGate full-text PDF of the Koyama review → `PROXY_REJECTED (HTTP 403): url exceeds the
   maximum fetchable length`.
4. Domain-restricted search (`qualitysafety.bmj.com`, `pubmed.ncbi.nlm.nih.gov`) for the editorial's
   byline → **no links found**.
5. Query budget (6 searches / 5 fetches) exhausted before front matter could be reached by another
   route and before the two quotations' full sentences could be reconstructed by consecutive
   segments. Stopped rather than working around it.

## (a) What sits at 29(7):536

**Established first-hand (body text):** the item at 29(7):536 is a short discursive piece that
(i) comments on "Koyama *et al* (reference 9)" as a review of empirical research on double checking,
(ii) states that review found only three good-quality studies among 13 included, (iii) faults it for
not distinguishing between double-checking methods, and (iv) **proposes its own framework** for what
double checking is and how independence and priming work. It is externally peer reviewed and not
commissioned. That profile is an **editorial / commentary accompanying the Koyama review**, not a
systematic review and not original research — but no article-type label was served to me.

**From third-party records only (not front matter, per rule 7):** the title is given as
"What are we doing when we double check?" by the University of Bern repository record
(`boris.unibe.ch/140823/`, titled "What are we doing when we double check? [editorial]"), by AHRQ
PSNet, by ProQuest, and by the journal's own page title in search results. The Bern record is also
the only source of the "[editorial]" type label. **Authors, affiliations, page range and DOI were
not obtained from any source I read.** The Bern record is indexed under ORCID
0000-0001-6226-5037, which the repository associates with that record; I did not read a byline.

## (b) The two quotations

Both strings are **in the item at 29(7):536** — i.e. in the editorial/commentary, **not** in the
Koyama systematic review at 29(7):595.

**String 1 — "both people may be affected by the same disturbances in the environment"**
Present, verbatim. **The whole sentence was not obtained.** The summariser's own account of its
surroundings (paraphrase, not quotation): when two people perform a check, the detection rate is
limited because "both people may be affected by the same disturbances in the environment," such as
noise or confusing drug labels. I did not have budget left to reconstruct the sentence by ordered
consecutive segments, and I am not completing it by inference.

**String 2 — "full independence cannot be achieved for checks"**
Present, verbatim, inside this longer served fragment (reconstruction from **one** return, cut at
the right by the summariser, cut marked by the ellipsis as served):

> "Therefore, full independence cannot be achieved for checks and optimising independence works
> differently:…"

**Grammar on both sides of the cut matters here.** The string is preceded by "Therefore," — it is a
*conclusion from* the preceding argument (the source's reasoning, per the summariser: reading
information before comparing it is itself a form of priming) — and it is followed by "and optimising
independence works differently:", which *continues* into the source's redefinition of what to
optimise (reducing confirmation bias). So the string is a **premise the editorial uses to redefine
independence**, not a standalone verdict that double checks cannot be independent in any useful
sense. Quoting it bare, cut after "checks", drops the clause that governs it.

## (c) The Koyama systematic review — same item or different?

**Different item, same journal and same issue.** The systematic review of double checking sits at
**29(7):595**, not 536. `qualitysafety.bmj.com/content/29/7/595` served a structured abstract
labelled Background / Methods / Results / Conclusion, on double checking medication administration
and its effect on medication administration errors (MAEs) — i.e. the review the 536 item cites as
its reference 9.

- **Start page:** 595 (first-hand, from the URL the publisher serves and the abstract on it).
- **End page: not established.** No citation line was served; I am not supplying one from memory.
- **Title, authors, DOI: COULD NOT READ.** Third-party records (AHRQ PSNet, ResearchGate, Macquarie
  University research portal) give the title as "Effectiveness of double checking to reduce
  medication administration errors: a systematic review"; the task text supplies "Koyama AK and
  colleagues". **I did not read a byline, so the author list, initials, year-as-printed and DOI are
  unverified.**
- **Article type:** a systematic review by its own abstract's structure and methods (five databases
  searched, inclusion criteria, 13 included studies, quality appraisal). Label not served.

So: **(a) and (c) are two different articles**, 536 and 595, in BMJ Quality & Safety volume 29 issue
7. The two quotations in (b) belong to 536, the commentary — the earlier reader had the commentary's
text and attributed, or risked attributing, its sentences to the review.

## (e) Does the Koyama review report dependence between the two checks?

**No conditional probability and no dependence measure appears on the page I read.** Nothing about
the probability that the second checker misses an error *given* that the first missed it; no
correlation, no interaction, no joint-failure estimate. What the page does carry, verbatim, is one
qualitative Discussion sentence:

> "any level of priming between the two checks can substantially decrease the probability of the
> checker detecting an error"

— with no numbers attached. The nearest thing in the Results is a count, not an estimand: only three
of the 13 included studies distinguished independent from primed checking (paraphrase as served).
The review's own unit of analysis, as its abstract frames it, is **the study** (13 included), and its
endpoints are **medication administration errors** and **adherence to the double-checking procedure**
(reported as a range across studies, 52%–97%), with **single checking** as the comparator for the MAE
question; **harm** was examined by no included study. That is per-procedure and per-study
accounting, not a model of dependence between two checkers.

Caveat on read level: I saw the abstract plus at least one Discussion sentence, so I cannot certify
that no dependence measure appears anywhere in the full text — only that none appears in what the
publisher page served, and that the abstract's stated outcomes do not include one.

## Defects

1. **Front matter unread for both articles.** Authors, full title as printed, article-type label,
   page range and DOI were COULD NOT READ for 29(7):536 and for 29(7):595. The BMJ pages serve body
   text without a masthead through this reader, the Bern repository page served empty, the
   ResearchGate PDF was rejected for length, and the budget ran out. COULD NOT READ, not NOT FOUND:
   both articles plainly exist and both bodies were served.
2. **The title and the "editorial" label rest on third-party records** (Bern repository, PSNet,
   ProQuest, search result titles), which rule (7) forbids treating as front matter. Treat both as
   provisional until a byline is read.
3. **Neither quotation's full sentence was obtained.** String 2 is a one-fragment reconstruction cut
   at the right by the summariser; string 1 has no served context at all beyond the summariser's
   paraphrase. Anyone quoting these should re-read the sentences before publishing them.
4. **String 2 is quotable into a misquotation.** Cut after "checks" it reads as a verdict; in place
   it is a "Therefore…" premise feeding "and optimising independence works differently:".
5. **Mis-attribution risk is real and specific:** the strings are the commentary's words about the
   review, so attributing them to Koyama et al would put the commentary's framework-building claims
   into the mouth of the systematic review that it criticises for not distinguishing methods.
6. **Rule (9) note:** the Koyama review's silence on conditional/dependent error probabilities is
   silence, not a denial that such dependence exists; and the 536 commentary's remarks on priming
   and non-independence are its own argument, not a measurement.
