# VERIFY - UQ-20261022-13: neither USGS pub 70230329 nor the SSA PAGER-accuracy item prints an own-agency initial-vs-final magnitude bias or a decision-category flip share

Checker: fresh context. Budget used: 5 WebFetch, 2 WebSearch. Date 2026-10-22.

## CLAIM

That neither USGS publication 70230329 nor the Seismological Society of America item on PAGER accuracy prints a signed own-agency initial-versus-final magnitude bias over a population, or a decision-category flip share.

Sub-claims as assigned: (a) full citation / read level / route for each; (b) signed bias between an agency's own initial and final published magnitudes over a population; (c) share of alert levels, decision categories or threshold crossings changing between vintages; (d) if either is PAGER alert-level accuracy, what it measures against what; (e) bearing on LEG A.

## READ LEVEL

**Source 1 — USGS Publications Warehouse index ID 70230329.**
Front matter, from the Publications Warehouse record and the USGS publications page (two independent renderings, which agree on the author string):

> Shelly, David R.; Mayeda, Kevin; Barno, Justin; Whidden, Katherine M.; Moschetti, Morgan P.; Llenos, Andrea L.; Rubinstein, Justin L.; Yeck, William L.; Earle, Paul S.; Gok, Rengin; Walter, William R. (2022). "A big problem for small earthquakes: Benchmarking routine magnitudes and conversion relationships with coda-envelope-derived Mw in southern Kansas and northern Oklahoma." *Bulletin of the Seismological Society of America* 112(1), 210-225. DOI 10.1785/0120210115. Online 31 August 2021; year published 2022. Index ID 70230329; record source USGS Publications Warehouse; USGS organization Geologic Hazards Science Center.

("Gok" is as the USGS record renders it; the BSSA front matter is near-certainly "Gök" — I could not reach the journal page to confirm the diacritic, so I record the USGS rendering and flag it.)

READ LEVEL: **ABSTRACT ONLY** (front matter plus the complete abstract, verbatim in consecutive segments). The body of the 16-page article — its tables, figures and event counts — is **COULD NOT READ**, not "absent". Routes: `https://pubs.usgs.gov/publication/70230329` (served front matter + abstract; its "Open Access Version: External Repository" link had no resolvable target in the served text, and no direct PDF link); `https://www.usgs.gov/publications/a-big-problem-small-earthquakes-benchmarking-routine-magnitudes-and-conversion` (same abstract, full author list, no PDF).

**Source 2 — "the SSA item on PAGER accuracy".**
This is **not** an SRL or BSSA article, and the entry's citation ("Seismological Research Letters or BSSA") is wrong on the document kind. The item located is a Seismological Society of America **Annual Meeting poster abstract**, served from SSA's own abstract gallery:

> Corrette, John (presenting author, Colorado School of Mines, Golden, Colorado, United States); Marano, Kristin (U.S. Geological Survey, Golden, Colorado); Engler, Davis (U.S. Geological Survey Contractor, Golden, Colorado); Jaiswal, Kishor (U.S. Geological Survey, Golden, Colorado; corresponding author); Wald, David J. (U.S. Geological Survey, Golden, Colorado). "Accuracy Analysis of U.S. Geological Survey PAGER Alerts." SSA Annual Meeting, session "Science Gateways and Computational Tools for Improving Earthquake Research [Poster]", Poster, 4/30/2020, 08:00 AM, Ballroom. URL `https://seismosoc.secure-platform.com/a/solicitations/9/sessiongallery/242/application/5740`.

Front-matter caution: the served page rendered the first author as "John Presenting Corrette", which is a scrape artifact of the page's "Presenting Author" label; the name is "John Corrette". No DOI, no volume, no pages — a meeting abstract has none. Whether this abstract was also printed in an SRL meeting supplement is **not established** on my reads.

READ LEVEL: **the whole item was read** (a meeting abstract is one paragraph and there is no body behind it), but **verbatim quotation of the abstract body was refused by the summariser**, which stated it would not reproduce the paragraph because a complete copy "would exceed the 125-character limit on quoted material". So: FULL ITEM, PARAPHRASE ONLY for the body; the summariser did, on request, enumerate every number printed on the page, and that enumeration is what my sub-claim (c) negative rests on. Route: the SSA gallery URL above, reached from search.

## WHAT THE SOURCE SAYS (quotations as served)

**Shelly et al. 2022 (70230329), abstract, served in consecutive segments and reassembled — labelled a RECONSTRUCTION from 21 consecutive fragments, junctions verified, nothing completed by inference:**

> "Earthquake magnitudes are widely relied upon measures of earthquake size. Although moment magnitude (Mw) has become the established standard for moderate and large earthquakes, difficulty in reliably measuring seismic moments for small (generally Mw<4) earthquakes has meant that magnitudes for these events remain plagued by a patchwork of inconsistent measurement scales. Because of this, magnitudes of small earthquakes and statistics derived from them can be biased."

> "To assess this problem, we apply coda envelope analysis to reliably determine moment magnitudes for a case study of small earthquakes from northern Oklahoma and southern Kansas. Not surprisingly, we find significant differences among ML, mbLg, and Mw for M ~2-4 earthquakes examined here."

The hedged, cited formulation of the paper's one bias number — quoted with the clause on both sides of the cut intact, because the qualifiers are where the weight is:

> "More troublingly, we find that relations designed to convert other magnitudes to Mw, which are relied upon for important applications such as seismic hazard analysis, often increase rather than decrease this bias for our dataset. **In our case study**, we find that **converted magnitudes** can result in a systematic bias **sometimes exceeding 0.5 magnitude units**, a difference that typically corresponds to a factor of ~3 in seismicity rate."

And the stated limit on its own reach:

> "Although this study focuses on a relatively small geographic area, we can expect that similar issues exist with varying severity in other regions."

(Source-text artifacts "MwMw", "MLML", "mbLgmbLg" in the served page are doubled-render noise; I have written them single and say so.)

**Corrette et al. 2020 (SSA PAGER abstract), paraphrase as served — I was unable to obtain verbatim text:** PAGER produces rapid estimates of fatalities and economic damage after earthquakes; deployed "late 2010"; estimates produced approximately 20 minutes after an event; the authors validated those estimates by residual and statistical analysis against a database of earthquake casualty and economic loss information since 2010; PAGER gave the correct alert for *most* low-fatality events and was *within an order of magnitude* for high-fatality events; alerts for highly consequential events were issued within an hour; estimates improved as refined ShakeMaps with updated shaking estimates were incorporated.

Every number printed on that page, as enumerated on request: 2010 (deployment, and the database start), 20 (minutes), one hour, one order of magnitude — plus the session date 4/30/2020 and time 08:00 AM. **No percentage, no share, no count of events.**

## REGIME

**Shelly et al. 2022, in its own words.** Population: "small earthquakes", "generally Mw<4", specifically "M ~2-4 earthquakes examined here", in a "case study" of "northern Oklahoma and southern Kansas", "a relatively small geographic area". Unit of analysis: one earthquake's magnitude *as measured on different scales*. Instrument: coda envelope analysis, used by the authors to "reliably determine moment magnitudes", i.e. a reference Mw the authors compute themselves. Comparison axis: **magnitude type and conversion relation** (ML vs mbLg vs Mw; and converted-to-Mw vs coda Mw). Threshold/category: none; the downstream quantities are seismicity rate and Gutenberg-Richter b-value.
Does the claim sit inside this regime? **No.** The candidate's object is the *same* published quantity at two *publication times* by the *same agency*, at a contractual latency, near a decision threshold. Shelly et al. has no time axis at all: no publication timestamps, no initial/final pair, no vintage, no threshold, no decision.

**Corrette et al. 2020, in its own words.** Population: earthquakes with entries in a database of casualty and economic loss information "since 2010". Unit of analysis: one earthquake's PAGER loss estimate / alert. Instrument: PAGER (fatality and economic loss estimates, ~20 min post-event, refreshed as ShakeMaps are refined). Reference truth: **observed losses** in that database. Categories: PAGER alert levels. Operating condition: rapid post-event response.
Does the claim sit inside this regime? **No.** The reference is observed loss, not a later published magnitude; the quantity graded is a loss estimate, not a magnitude; and no share of category changes between vintages is printed.

## DEFECTS FOUND

Taking the sub-claims in order.

**(a) Citations and reads.** Given above. Two front-matter corrections the entry needs, and one of them matters for how the entry reasons:

1. **70230329 is itself an SSA publication.** The entry sets up "USGS publication 70230329" and "the SSA item" as two different kinds of source. 70230329 is a Publications Warehouse *index ID* for a **Bulletin of the Seismological Society of America** article (112(1), 210-225, DOI 10.1785/0120210115). It is not a USGS numbered-series report. Any reasoning in the entry that leans on "USGS publication" implying an in-house operational report is leaning on nothing.
2. **The entry's short title is mangled.** The record carries it as "A big problem: small earthquakes — benchmarking routine magnitudes and conversion". The actual title is "A big problem for small earthquakes: Benchmarking routine magnitudes and conversion relationships **with coda-envelope-derived Mw in southern Kansas and northern Oklahoma**". The dropped tail is exactly the part that fixes the regime — the comparison is against a coda-derived reference Mw in one small region. The entry's own description of the item as "routine-magnitude benchmarking, could carry per-event magnitude differences" is a reading of the truncated title, not of the paper.
3. **The PAGER item is a conference abstract, not a journal article.** The entry asks for "Seismological Research Letters or BSSA" front matter. There is none. This changes the risk the entry assigned to it: a one-paragraph meeting abstract is not the kind of document that prints a population statistic with a table, so the entry's worry that it "could print an alert-category change count" was over-weighted from the start.

**(b) Signed own-agency initial-vs-final magnitude bias over a population: ABSENT in both, on my reads.**

Neither item prints it. The near-miss is Shelly et al.'s "systematic bias sometimes exceeding 0.5 magnitude units", and it is a different quantity. Numerator class and denominator, with the overlap checked in both directions as required:

- **Numerator class (quoting the definition with its exclusions):** the difference between a magnitude *converted* to Mw by "relations designed to convert other magnitudes to Mw" from ML or mbLg, and a coda-envelope-derived Mw that the authors compute as reference, "in our case study", "for our dataset". It excludes: any pair of values of the *same* magnitude type; any pair separated in *time*; any value as *published by an agency at a stated instant*.
- **Denominator:** the paper's case-study event set, M ~2-4, northern Oklahoma and southern Kansas. The event count is **not printed in the abstract** and I could not read the body, so the denominator is named but not numbered. Checked against near neighbours it is not: it is not the USGS national catalogue, not all events above a magnitude threshold, not events in a time window, and not events subject to analyst review.
- **What this class MISSES relative to the claim:** the entire vintage axis — no initial value, no final value, no publication timestamp, no latency, no revision, no agency bulletin, no decision threshold, no sign reported (the abstract gives a magnitude of bias, not its direction).
- **What this class INCLUDES that the claim excludes:** a third-party reference magnitude the authors computed themselves rather than an agency's own later published value; magnitude-scale conversion error as the mechanism; events at M ~2-4, two to three orders of magnitude below any parametric-trigger population; and downstream b-value and seismicity-rate effects that the claim does not concern.

So on the one number that looks like the claim's: it is a cross-*scale* bias, not a cross-*vintage* bias. It is one word away and it is a different quantity. **PUBLISHED IS NOT PERFORMED** cuts the other way here too: Shelly et al. *measures* a quantity, just not this one; the candidate's quantity it does not even define.

**(c) Share of alert levels, decision categories or threshold crossings changing between vintages: ABSENT in both, on my reads. There is no candidate second limb in either document.**

- Shelly et al.: no percentage or share of any kind in the abstract. The "~3" is a *factor in seismicity rate* implied by a 0.5-unit magnitude offset, not a share of events; the b-value result is a parameter bias, not a count of reclassified events. (Body unread — see COULD NOT READ above; I am not entitled to say the body prints none.)
- Corrette et al.: **no percentages at all on the page.** The nearest thing is the qualitative "correct alert for *most* low-fatality events" and "within an order of magnitude for high-fatality events". "Most" is not a number, and neither phrase is a between-vintage flip share: both compare PAGER to *observed loss*, not PAGER-now to PAGER-later. The one sentence that touches the vintage axis — estimates "improved as refined ShakeMaps with updated shaking estimates are incorporated" — **ANNOUNCES** an improvement with no quantity attached. It does not measure how many alerts changed level, in which direction, or over what denominator. By the ledger's own test: the abstract ASSERTS the direction and prints no number, so it is not an evaluation of the candidate quantity.

**(d) What the PAGER item measures against what.** It measures **PAGER's rapid fatality and economic-loss estimates, and the alert levels derived from them, against observed outcomes** — "a database of earthquake casualty and economic loss information since 2010" — by "residual and statistical analysis". The reference truth is realised loss. Magnitude is nowhere the graded quantity; it enters only upstream, inside ShakeMap. An alert-level accuracy study of this shape cannot be an own-agency magnitude-revision study, because:
- its *estimand* is a loss, not a magnitude;
- its *reference* is an external observation, not a later value published by the same agency;
- its *error axis* is model-versus-world, not vintage-versus-vintage; and
- it reports no publication times, so no initial/final pair exists in it to difference.
The entry was right to hold these apart.

**(e) Bearing on LEG A.** See below.

Honest limit on this check: **both reads are abstract-level.** For the PAGER item that is the complete document, so the negative on (b), (c) and the characterisation in (d) is as strong as it can get — subject to the one real weakness that the summariser would not give me verbatim text, so my (c) negative rests on its enumeration of printed numbers rather than on my own eyes over the paragraph. For Shelly et al. the negative on (b) and (c) rests on **regime**, which the abstract fixes unambiguously (magnitude type and conversion, coda-Mw reference, M ~2-4, one small region, no time axis), and **not** on having read the tables. A paper whose abstract establishes it has no vintage axis is very unlikely to print a vintage statistic in a table — but "very unlikely" is not "checked", and I say so rather than spending a defect I did not find.

## ROUTES THAT FAILED

- `https://doi.org/10.1785/0120210115` — WebFetch: "failed at its site (client_error), and nothing of the page was retrieved." Cost one fetch and returned no redirect target, so I never obtained the GeoScienceWorld article URL.
- `curl https://pubs.usgs.gov/publication/70230329` — `curl: (56) CONNECT tunnel failed, response 403`. Tool-scoped at this proxy, as the brief warned; WebFetch reached the same URL without trouble. I did not probe the proxy further.
- No open full text found for Shelly et al. 2022: the Publications Warehouse record advertises an "Open Access Version: External Repository" link whose target was not in the served text; neither USGS record page carries a PDF link; and the one search for a PDF returned only the two USGS record pages, an SSA gallery page, an academia.edu profile, a par.nsf.gov author search and unrelated items. I did not construct a GeoScienceWorld or repository URL by hand.
- Verbatim transcription of the SSA PAGER abstract body — refused by the summariser on its ~125-character quotation cap, with the full paragraph declining to come through in consecutive segments. I did not assemble a reconstruction from non-consecutive returns and did not complete any cut string by inference.
- Searches: 2 issued, both served, **neither refused by the classifier**.

## BEARING ON THE LEDGER ENTRY

**The claim HOLDS on my reads, with one read-level caveat and two citation corrections that change what the entry thought it was holding open.**

LEG A's in-field half was held open by three unopened titles. This check **discharges one of them outright and narrows a second**:

1. **The SSA PAGER-accuracy item is now closed, and it was never the threat the entry took it for.** It is a 2020 SSA Annual Meeting *poster abstract* (Corrette, Marano, Engler, Jaiswal, Wald), not an SRL or BSSA article. It prints **no percentage of any kind**, and what it grades is PAGER loss estimates against observed losses. Adversary 3's demotion trigger — "demotion follows if the PTWC or PAGER item prints a share of decisions whose category changed between initial and final magnitude" — **does not fire on the PAGER item.** Strike it from the promotion condition as discharged, and record that the entry's description of it as a possible "alert-category change count" source was inferred from a title, not from the document.

2. **70230329 narrows but does not close.** Its regime is fixed and it is not the candidate's: cross-*scale* bias against a coda-derived reference Mw, M ~2-4, Oklahoma/Kansas, no time axis, no threshold, no decision. Its one bias number — "systematic bias sometimes exceeding 0.5 magnitude units" for *converted* magnitudes, in a case study whose event count the abstract does not print — is a different quantity in both directions of overlap. The entry's own LEG 2 worry (that it "could carry per-event magnitude differences close enough to the candidate's bias limb to move novelty toward Low") is **answered at regime level**: per-event differences there are between *scales*, and the candidate's are between *vintages of one scale*. But my read is abstract-only. So this item should be **converted from an open unknown into a sharpened promotion condition**: not "open 70230329", which is now partly done, but "read the body of Shelly et al. 2022 (BSSA 112(1), 210-225) far enough to confirm its event tables carry no preliminary-versus-reviewed catalogue magnitude column". That is a smaller and much more likely-to-be-negative task than the entry currently records.

3. **The third item is untouched.** WCEE2017-193.pdf (the 16WCEE PTWC two-decades full paper) was outside my assignment and remains unopened. LEG A's in-field half still rests on it, and on LEG C it is still the single most load-bearing unopened document.

Net: **LEG A holds and narrows.** Novelty confidence Medium is still the right grade, but one of the three grounds the entry gives for not going higher is now spent, and one has shrunk from "unchecked in-field neighbour" to "regime-excluded, body unread". Nothing I read moves the verdict toward Low or toward demotion. The entry should also correct its own front matter: 70230329 is a BSSA article, its title's regime-fixing tail was dropped, and "the SSA item on PAGER accuracy" is a conference abstract with no journal citation to give.
