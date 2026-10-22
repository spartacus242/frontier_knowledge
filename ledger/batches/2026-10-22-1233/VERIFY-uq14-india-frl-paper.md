# VERIFY - the unread Indian reduced-level/FRL population paper is Thakur et al. 2021 (Adv. Space Res. 68:619-640); identified and cited, but readable only at abstract level, and nothing I could read prints an FRL share, a residual-stationarity test, or a datum-bridging statement

Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22.

## CLAIM

The claim under test, as the ledger carries it: that an unread paper on Indian reservoir reduced levels / full reservoir level (FRL) **may carry the candidate's quantity over a population of reservoirs**. The entry names this paper as the residual that holds attack 2 (Disguise) at Partial rather than Resolved; if the paper does the candidate's job over a population, novelty falls and the entry is rejected on a second, independent ground.

The entry does not carry a citation for this paper. It carries a description. Adversary 2's file (UQ-20261022-14-adversary-2.md, row A9) carries the only locator anywhere in the batch:

> **"Water level status of Indian reservoirs: A synoptic view from altimeter observations"** (HAL insu-03671337; IWMI/WLE record; IRD full-text PDF)

and records its own failure to open it:

> **I COULD NOT READ IT**: the IRD full-text route `horizon.documentation.ird.fr/exl-doc/pleins_textes/2022-01/010083859.pdf` returned HTTP 302 to `https://maintenance.ird.fr/` and consumed my last fetch; the HAL and IWMI routes were not tried (budget exhausted). Recorded as RETURNED, NOT OPENED

My job was to find it, cite it from front matter, and test it on four specific sub-claims. I found it and cited it. I could not open its body. The four sub-claims below are answered at the read level I actually reached, and no further.

---

## READ LEVEL

**ABSTRACT ONLY, and not even the abstract verbatim.** Stated per source and per route:

### Source S1 - the target paper

**ABSTRACT ONLY (partial quotation).** What I reached is the bibliographic record of the paper on IRD's Horizon catalogue (`www.documentation.ird.fr/hor/fdi:010082233`), which carries the full front matter and the English abstract in a metadata field. I reached that record twice. On the second pass I asked for the abstract as ordered consecutive segments, per this ledger's reconstruction protocol, and **the request was declined**: the summariser answered

> "I can't reproduce the full English abstract verbatim, since that would mostly copy the article's text."

and returned a paraphrase plus short keyword-level quotations instead. So I hold:

- the **front matter in full** (authors, title, journal, volume, issue, pages, year, ISSN, DOI) - read directly off the record;
- the **abstract in paraphrase**, with a handful of sub-125-character fragments quoted out of it;
- **none of the body**: no methods, no tables, no figures, no datum section, no validation section, no discussion.

I did not read a single table or figure of this paper. Every number the sub-claims ask me to name would have to come from the body, and I did not reach the body.

### The abstract fragments I hold, and their standing

Three fragments were served to me as quoted strings out of the abstract field:

| Fragment as served | What I will and will not do with it |
|---|---|
| "around 29 geometrically complicated inland water bodies in India" | Usable as the population figure. Reads as a complete noun phrase; the hedge "around" is inside the quotation, and I keep it. |
| "root mean square error (RMSE)" | Establishes only that the word appears. It is a term, not a value. It names no number. |
| "geoid height of each reservoir" | **A FRAGMENT, NOT A SENTENCE.** It was served as the tail of a clause reported as the bias arising from "geoid height of each reservoir". I never saw the words on either side of either cut. Per this ledger's rule on checking the grammar on both sides of the cut, I treat this as evidence that the abstract mentions geoid height in connection with a bias, and as evidence of **nothing more specific than that**. I do not know the subject of the verb, the sign, the magnitude, or whether the clause is hedged. I do not treat it as a datum statement. |

I also hold a keyword check run over the abstract field, reported to me as:

- **Found**: "geoid"; "RMSE".
- **Not found**: "Full Reservoir Level"; "FRL"; "Central Water Commission"; "CWC"; "datum"; "EGM"; "MSL".
- **Not found as written**: "validation" - the abstract uses "validated".

That check is a check of **the abstract field only**. A word absent from an abstract is not a word absent from a paper. I use it below to say what I could not confirm, never to say what the paper does not do.

### Front matter caveat on author given names

Per the rule that author names come from front matter and never from someone else's short form: the Horizon record **gives initials for every author but one**. The fetch reported this explicitly - "the page gives only initials for most authors, so I can't expand them to full names". Only Calmant is spelled out, as "Calmant Stéphane". So the given names below are initials because that is what the record prints, not because I shortened anything. Expanding them would be invention.

---

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Full citation and read level

**Citation, from the Horizon record's front matter:**

> Thakur P. K., Garg V., Kalura P., Agrawal B., Sharma V., Mohapatra M., Kalia M., Aggarwal S. P., Calmant Stéphane, Ghosh S., Dhote P. R., Sharma R., Chauhan P. (2021). Water level status of Indian reservoirs: a synoptic view from altimeter observations. *Advances in Space Research*, 68(2), 619-640. ISSN 0273-1177. DOI: 10.1016/j.asr.2020.06.015

Recorded in this ledger's required form - **DOI 10.1016/j.asr.2020.06.015; first author Thakur P. K.; year 2021; title "Water level status of Indian reservoirs: a synoptic view from altimeter observations"**. Thirteen authors. ADS bibcode `2021AdSpR..68..619T`, which independently corroborates journal, volume, first page, year and first-author initial.

**Read level: ABSTRACT ONLY (partial quotation), per the section above. I read no part of the body.**

Two things in this citation matter to the entry before any sub-claim is reached:

1. **It is a 2021 paper and it is PRE-SWOT.** The instruments are, per the abstract paraphrase, "ERS-2, ENVISAT RA-2, Saral-AltiKa, and Sentinel-3A". SWOT did not launch until December 2022. Whatever this paper does, it does not do it with the candidate's instrument.
2. **The entry's description of it is a description, not a reading.** The batch called it "a population-scale Indian-reservoir altimetry paper whose operator records carry Full Reservoir Level thresholds". That is an inference about what Indian operator records generally carry, attached to a paper nobody had opened. The words "Full Reservoir Level" and "FRL" are **not in the abstract**. The FRL threshold entered this ledger from the adversary's own domain knowledge about Indian reservoir publication practice, not from this paper. That is worth saying plainly, because the entry treats the FRL threshold as a property of the paper.

### (b) Does it compare satellite altimetry against OPERATOR-published levels, and for how many reservoirs?

**Split into the two halves, because they do not have the same answer.**

**How many: a population, and the number is ~29 water bodies of which 22 are named reservoirs.** From the abstract, quoted:

> "around 29 geometrically complicated inland water bodies in India"

with, per the fetch, 22 reservoirs then named individually and five lakes (Mansarovar, Pangong, Chilika, Bhopal, Rann of Kutch) mentioned separately. So **yes, the unit of analysis is a population of reservoirs, not a single reservoir.** This is the one half of the claim that survives my read. It is materially different from the n=1 ISPRS paper the batch opened.

**Against what: NOT ESTABLISHED, and specifically not established as operator-published.** The abstract, in paraphrase, "checks the retrievals against observed gauge data". The words **"Central Water Commission" and "CWC" are not in the abstract**, and no other data provider is named in anything I read. "Observed gauge data" is compatible with operator-published reduced levels, and it is equally compatible with a research dataset, a CWC bulletin, a state irrigation department file, or in-situ records obtained by request. **I cannot tell which, and I will not guess.** The entry's attack turns on the levels being *operator-published* - that is the whole force of attack 4's "the operator's OWN stated conversion" clause - and my read does not reach it.

**For how many reservoirs the comparison was actually run: COULD NOT CHECK.** At abstract level the count of water bodies *analysed* (~29) is not separable from the count *validated against observed levels*. Those are routinely different numbers in this genre, because in-situ records are available for a subset. Naming 29 as the validation denominator would be me supplying a denominator the source did not print. Per the denominator rule, I decline.

### (c) Does it publish a residual distribution, test its stationarity, or compute a share exceeding any operating threshold or structural margin? Name the number and where.

**I CANNOT NAME A SINGLE NUMBER, AND THE REASON IS MY READ LEVEL, NOT THE PAPER'S SILENCE.** Taking the three limbs separately, because they are three different things:

**Residual distribution.** The abstract contains the term "root mean square error (RMSE)", and the fetch reported the abstract as "reporting improving accuracy over time". So the paper near-certainly prints accuracy statistics, and a 22-page journal article over ~29 water bodies almost certainly prints them per water body in a table. **But I did not open that table, I do not know it exists, and I can name no value, no unit, and no table number.** Per this ledger's "published is not performed" rule, applied honestly to myself: I am not entitled to say this paper *publishes a residual distribution*. I am entitled to say it **announces accuracy statistics in its abstract** and that I could not verify what it prints. There is also a genre distinction that matters and that I can see even from the abstract: **an RMSE against in-situ is a cal/val accuracy figure, not a residual distribution.** An RMSE is a scalar summary that collapses the distribution; the candidate's quantity is the *distribution* of the signed residual and its behaviour. A per-reservoir RMSE table would be the former. These are one word apart and are different quantities.

**Stationarity of the residual.** **Nothing I read mentions a stationarity test, a trend test, or any test on the residual.** No such term appeared in the abstract paraphrase or in the keyword check. COULD NOT CHECK on the body. I note, without weighing it, that "improving accuracy over time" is a statement that accuracy is *non-stationary across missions* - which is a statement about instrument generations, not a stationarity test on a residual at a reservoir.

**Share exceeding an operating threshold or structural margin.** **"Full Reservoir Level" and "FRL" are not in the abstract. Neither is any share, percentage or fraction of the population that I saw.** I can name no share, no numerator class, no denominator. On the evidence I hold, **this limb of the claim has no support at all** - and because I could not read the body, it also has no refutation. Per the numerator/denominator rule: there is no candidate number here to decompose, so there is nothing to check overlap on in either direction. The rule does not apply because the quantity was never served to me.

**Summary of (c): on what I could read, the paper ANNOUNCES accuracy statistics and does not visibly MEASURE the candidate's quantity. Whether its body does so is COULD NOT CHECK.**

### (d) Does it state its vertical datum and how it bridged frames? Quote it.

**COULD NOT CHECK on the body. What I hold is one fragment, and I will not let it carry more than a fragment's weight.**

The only datum-adjacent text I was served is the fragment discussed in READ LEVEL above: the abstract attributes a bias to

> "geoid height of each reservoir"

**and I never saw the words on either side of either cut.** The words **"datum", "EGM" and "MSL" are not in the abstract.**

What this fragment does establish: the paper is **aware** that a geoid-height term sits between an altimetric height and a reservoir's reported level, and it attributes a bias to that term. That is not nothing - it is the same physical quantity limb (i) of the candidate is about, and it sits in the same place in the chain.

What it does **not** establish, and what I specifically could not check:

- which geoid model or reference frame the altimetry is on (no "EGM", no model name, no epoch);
- which frame the in-situ levels are on (no "MSL", no "reduced level" in anything I read, despite "reduced level" being the vocabulary that made the batch's A9 query return this paper in the first place);
- **whether it bridges the two frames, how, and on whose authority** - whether the conversion is taken from an operator publication, computed from a geoid model by the authors, or absorbed into a fitted bias.

That last point is the one the entry's surviving leg turns on, and it is exactly the point my read does not reach. **I have no quotation to offer for sub-claim (d). Asking for one and getting a three-word fragment is a failed check, and I record it as a failed check rather than dressing the fragment up as an answer.**

---

## REGIME

The regime of S1, in its own words so far as I hold them, and then whether the claim sits inside it:

| Dimension | S1 (Thakur et al. 2021), as stated in its front matter and abstract | Candidate's regime, per the entry |
|---|---|---|
| **Population** | "around 29 geometrically complicated inland water bodies in India" - 22 named reservoirs plus 5 lakes. National, Indian. | A population of reservoirs. **The claim sits inside this.** |
| **Unit of analysis** | The water body, over a multi-mission time series. | The water body / its residual. **Inside.** |
| **Instrument** | ERS-2, ENVISAT RA-2, SARAL-AltiKa, Sentinel-3A. Nadir radar altimetry, pre-SWOT. | SWOT wide-swath. **OUTSIDE.** The paper's regime predates the candidate's instrument by at least one mission generation, and the candidate's instrument is not a refinement of nadir altimetry over reservoirs but a different observing geometry. A result established for nadir altimetry over ~29 Indian bodies is silent about SWOT, not supportive of a SWOT claim and not fatal to one. |
| **Operating condition** | Not reachable. "Water level status" and "synoptic view" are the paper's own framing - a monitoring and accuracy study. No operating condition I can quote. | Residual audited against an operating threshold. **Not established as inside.** |
| **Comparand** | "observed gauge data" - provider **not named in anything I read**. Not established as operator-published. | Operator-published levels, with the operator's own stated conversion. **Not established as inside.** |
| **Threshold** | **None I could find.** "Full Reservoir Level" and "FRL" absent from the abstract. | FRL or structural margin. **No evidence it is inside.** |
| **Category** | Multi-mission altimetric water-level retrieval and its accuracy, framed as reservoir status monitoring. | Datum/residual audit over a population. **Different category on the evidence I hold.** |

**The genre distinction, stated plainly:** everything I could read describes a **water-level-status and retrieval-accuracy study** - build long time series from four missions, check them against observed levels, report that accuracy improves across mission generations. That is the cal/val genre the entry's own Gate-2 sweep already identified as dense and non-threatening. It is **not** self-described as a datum audit. The one element that points the other way is the geoid-height bias fragment, which is why this does not collapse to "irrelevant".

---

## DEFECTS FOUND

**1. The entry carries no citation for this paper, and the locator it does carry is wrong.** Adversary 2's route was `.../pleins_textes/2022-01/010083859.pdf`. The paper's Horizon record is **`fdi:010082233`**, and its IRD PDF is `010082233.pdf`. **010083859 is a different record.** Adversary 2's 302 to `maintenance.ird.fr` was recorded as a maintenance outage; on my read, the fdi number was also not this paper's. This does not change any grade, but it means the batch's one recorded route failure to this document was aimed at the wrong identifier, and the document has never actually been requested at its real IRD address.

**2. The FRL threshold is the batch's inference, not the paper's text.** The entry twice describes this as a paper "whose operator records carry Full Reservoir Level thresholds" and "with an FRL threshold", and attack 2's Partial grade rests on that characterisation being a live threat. **"Full Reservoir Level" and "FRL" do not appear in the abstract.** The threat was constructed from the adversary's correct general knowledge that Indian operator records publish FRL, attached to an unopened title. That is a legitimate way to flag a risk; it is not a property of the paper, and the entry should not read as though the paper's FRL comparison were a known fact.

**3. The paper is pre-SWOT and the entry never says so.** ERS-2 / ENVISAT RA-2 / SARAL-AltiKa / Sentinel-3A, published 2021. The entry weighs this paper as though it could pre-empt the candidate wholesale. On instrument it cannot: it is silent about SWOT. It can bear on limb (i) only to the extent limb (i) is instrument-agnostic, which is a question about the candidate's wording, not about this paper.

**4. An RMSE is not a residual distribution.** If the body turns out to print per-reservoir RMSE against in-situ - which the abstract's "root mean square error (RMSE)" makes likely - that is a scalar accuracy summary over a population, one word away from the candidate's quantity and not the same quantity. It collapses the signed distribution, carries no stationarity statement, and is referenced to no operating threshold. Anyone later reading this paper should not count an RMSE table as the candidate's quantity found.

**5. A defect in my own check, recorded as such:** I could not obtain the abstract verbatim. The summariser declined full reproduction on copyright grounds, so my strongest source text is a paraphrase with three short fragments quoted out of it. One of those fragments ("geoid height of each reservoir") is cut on both sides and I do not know its surrounding clause. **Sub-claim (d) asked me to quote, and I have no quotation worth the name. That is a failed check.**

---

## ROUTES THAT FAILED

Five WebFetch calls, one WebSearch. Spent as follows.

| # | Route | Outcome |
|---|---|---|
| F1 | `hal-insu.archives-ouvertes.fr/insu-03671337v1` (the route adversary 2 left untried) | **FAILED.** Anubis bot-protection interstitial, "Access Denied: error code 9e4edb5b6b850c41", `noindex,nofollow`. No article content, no metadata, no file links. |
| S1 | WebSearch: `"Water level status of Indian reservoirs" "synoptic view from altimeter observations"` | **SUCCEEDED.** Returned ADS bibcode `2021AdSpR..68..619T`, the ScienceDirect PII `S0273117720304178`, the ResearchGate record, and - decisively - the correct Horizon record `fdi:010082233`. |
| F2 | `ui.adsabs.harvard.edu/abs/2021AdSpR..68..619T/abstract` | **FAILED at the site: `robots_disallowed`.** Nothing of the page retrieved. Note for the route notes: ADS abstract pages are robots-disallowed to WebFetch here. The bibcode from the search result still corroborated journal/volume/page/year. |
| F3 | `www.documentation.ird.fr/hor/fdi:010082233` | **SUCCEEDED.** Full front matter, DOI, ISSN, and the abstract in paraphrase. This is the only route that returned anything about the paper. |
| F4 | `insu.hal.science/insu-03671337v1/document` (current HAL host, file route) | **FAILED.** Identical Anubis block, same error code. **HAL is wholly unreachable from this environment, on both the legacy and current hostnames, landing page and file route alike.** This is a new route note: HAL should not be budgeted as a full-text route here. |
| F5 | `www.documentation.ird.fr/hor/fdi:010082233`, re-requested for ordered consecutive abstract segments | **PARTIAL FAILURE.** Host reachable, content served, but verbatim reproduction **declined**: "I can't reproduce the full English abstract verbatim, since that would mostly copy the article's text." Returned a paraphrase, a keyword check, and three short fragments. |

**Routes NOT tried, for want of budget - these are untried, not failed, and the next runner should start here:**

- `www.sciencedirect.com/science/article/abs/pii/S0273117720304178` - publisher record. Abstract, highlights, possibly figure captions. Body paywalled.
- `www.researchgate.net/publication/342488979_...` - ResearchGate often carries author-deposited full text for this genre; frequently login-walled.
- `archive.iwmi.org` - the IWMI/WLE record adversary 2 named and never tried.
- `www.documentation.ird.fr/intranet/publi/2021-08/010082233.pdf` - **the real IRD full-text PDF.** The record states it is **restricted**: it requires an IRD account or an emailed access request. **I did not attempt the email route and could not have: supplying a contact address is barred by this task's rules.** Flagging it so nobody budgets a fetch for it expecting to get through.

**A note on the 125-character cap:** I invoked the ordered-consecutive-segments protocol once (F5) and it did not fail on assembly - it failed because reproduction was refused outright on copyright grounds for a journal abstract. The protocol has a second failure mode beyond fragment-junction risk, and this is it. **I assembled nothing and reconstructed nothing. There is no reconstruction in this note.**

---

## BEARING ON THE LEDGER ENTRY

### Sub-claim (e), stated plainly: this does NOT close the candidate's limb. It narrows it. Two legs of the claim move in opposite directions.

**What the paper does establish, and it is the half that matters most for novelty:** there exists a **pre-SWOT, population-scale (~29 water bodies, 22 named reservoirs), national-scale Indian** satellite-altimetry study that checks retrieved water levels against observed gauge data and **explicitly attributes a bias to geoid height at each reservoir.** Population scale is real. The geoid-height term is real. Against the batch's best comparand to date - the ISPRS paper, n=1, no stationarity limb, no threshold - **this is a closer prior, and it is closer on exactly the axis the entry's limb (i) claims as novel: the residual over a population rather than at one water body.**

**What the paper does not establish, on any read level I reached:** that the comparand is operator-published; that it prints a residual *distribution* rather than a scalar RMSE; that it tests stationarity; that it computes any share against FRL or any structural margin; or that it bridges reference frames by a conversion anyone owns. **Of those five, four are the candidate's distinguishing features, and I have evidence for none of them. I also have refutation of none of them, because I did not read the body.**

### Bearing on attack 2 (Disguise): HOLD AT PARTIAL. Do not promote, do not demote.

Adversary 2's reason for capping Disguise below Resolved was precise and correct: "A paper my own search returned and I did not open is a paper I have not checked." **That reason still stands, because I did not open it either.** I identified it, cited it from front matter, corrected its locator, established its population scale and its instrument generation, and found no trace of an FRL threshold in its abstract. **None of that is a reading of its body.** Promoting Disguise to Resolved on my work would repeat the exact error the ledger is trying to stop: grading a paper on its abstract and front matter while describing the grade as a check.

So: **Partial stands, with its residual now much more sharply defined.** The residual is no longer "an unread paper somewhere in South-Asian FRL vocabulary". It is: **the body of Thakur et al. 2021, DOI 10.1016/j.asr.2020.06.015, specifically its validation tables and its datum treatment** - reachable, on the evidence of my routes, only via ScienceDirect, ResearchGate, IWMI, or an IRD access request. That is a named, finite, bounded retrieval task. One successful fetch of the body settles Disguise in one direction or the other.

### Bearing on the second, independent ground for rejection: NOT ESTABLISHED.

The entry's framing was that if this paper does the candidate's job over a population, "novelty falls and the entry is rejected on a second, independent ground." **On my read, that second ground is not established.** The paper does not visibly do the candidate's job: no FRL share, no stationarity test, no operator-ownership of the conversion, and an accuracy-study genre rather than a datum-audit genre. **But "not established" is not "refuted."** I am not clearing this ground; I am reporting that nobody has yet put evidence under it, and that my abstract-level read found none.

**Net effect on the entry's disposition: none.** The entry's verdict already rests, by its own statement, on attack 4's "operator's OWN stated conversion" leg - "THE VERDICT STANDS ON THIS LEG ALONE." My check touches neither that leg nor attack 4. Nothing here moves the verdict.

### What my check does change, and it is one thing worth carrying forward

**It should narrow limb (i)'s novelty grade from the direction the entry did not expect.** The entry grades limb (i) Low novelty on the strength of "a Danish lake frame and one Italian reservoir" - two single-site precedents. Thakur et al. 2021 is a **thirteen-author, national, ~29-water-body** study that reports a geoid-height-driven bias between altimetric and observed reservoir levels. Even read only at abstract level, that makes limb (i)'s "over a population" phrasing harder to claim as novel than the entry's current comparands suggest - **while leaving limbs (ii) and (iii) entirely untouched**, since I found no stationarity limb and no threshold limb anywhere in what I read.

**Converted to a promotion condition, for whoever next works this entry:**

> Attack 2 may be promoted from Partial to Resolved **if and only if** the body of Thakur et al. 2021 (DOI 10.1016/j.asr.2020.06.015) is opened and shown, with table or figure numbers named, to contain **no** share-of-population statistic against FRL or any other operating threshold, **and no** stationarity or trend test on the altimetry-minus-in-situ residual. Conversely, attack 2 **fails and the entry acquires its second independent ground for rejection** if that body prints a share of the ~29-body population exceeding FRL, or tests the residual's stationarity, against operator-published reduced levels. Either way the retrieval is one fetch: try ScienceDirect PII S0273117720304178 or the ResearchGate deposit first. **Do not budget HAL - it is Anubis-blocked here on both hostnames, landing page and file route alike. Do not budget ADS abstract pages - robots-disallowed to WebFetch here.**
