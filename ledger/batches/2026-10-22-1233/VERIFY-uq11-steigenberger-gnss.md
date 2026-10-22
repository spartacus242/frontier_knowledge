# VERIFY - Steigenberger et al. (GPS Solutions 26:50) does establish a broadcast ERP class, but not that it carries UT1-UTC in three of its four constellations, and prints no field range
Checker: fresh context. Budget used: 5 WebFetch (3 served, 2 rate-limited at one host), 1 WebSearch. Date 2026-10-22.

## CLAIM

As the entry carries it (attack 4, leg (c), and by extension the non-emptiness half of leg (a)):

> "Steigenberger et al. establish a genuine UT1−UTC-carrying artifact class in GNSS broadcast navigation messages (GPS CNAV, BeiDou, QZSS, IRNSS), so the UT1−UTC side of the frame is larger than adversary #1's 'small'".

Source as the entry cites it: "Steigenberger et al., on GNSS broadcast navigation message parameters / Earth orientation or UT1-UTC parameters in broadcast ephemerides"; adversary #2's S5 names it as "Steigenberger, Montenbruck, Bradke, Ramatschi, Hessels, 'Evaluation of earth rotation parameters from modernized GNSS navigation messages', GPS Solutions 26:50 (2022), DOI 10.1007/s10291-022-01232-4".

Verdict in one line: **PARTLY.** The artifact class is real and the four constellations are named in the paper's own words; but the paper identifies the carried quantity as UT1−UTC only for the **superseded** GPS definition, reports that the current GPS ICDs have replaced it with UT1−GPST, and explicitly declines to say how BDS, QZSS and IRNSS parameterise theirs. It prints no bit width, scale factor, LSB, range or maximum for any constellation, and no share or count of systems failing at any |UT1−UTC|.

## READ LEVEL

**PARTIAL** — publisher HTML at `https://link.springer.com/article/10.1007/s10291-022-01232-4`, read through the WebFetch summariser in three calls (offsets 0, 6000, 14000). Sections reached as served: Abstract; Introduction; the "ERP data in GNSS navigation messages" section (GPS, QZSS, BeiDou, IRNSS paragraphs); fragments of the comparison-with-reference-series discussion; Conclusions.

Not reached, and therefore grounding nothing in either direction:
- **Table 1 and Table 2 contents.** Requested twice; never served. The summariser reported Table 2 as "referenced only for ICD references and constellation-specific ICDs". If a per-constellation parameter table exists in this paper, I have not read it. This is COULD NOT READ on Table 2, not NOT FOUND.
- **Figures.**
- **The "Authors and Affiliations" block**, which came back as a bare heading with nothing under it, and the Received/Accepted/Published dates, which came back blank.

All quotations below are **summariser-served fragments**, each under ~120 characters, not raw page text. Where a passage needed more than one fragment I say so and label it a reconstruction. I have not completed any cut string by inference.

## WHAT THE SOURCE SAYS (quotations as served)

**(a) Front matter, as the publisher page served it.**

- Title: "Evaluation of earth rotation parameters from modernized GNSS navigation messages"
- Journal / volume / article number / year: GPS Solutions **26**, article **50** (2022)
- DOI: 10.1007/s10291-022-01232-4
- Authors, as printed in the page's own citation block: **"Steigenberger, P., Montenbruck, O., Bradke, M. et al."** — truncated at "et al." by the page as served, and the Authors-and-Affiliations section returned empty.

So positions 1–3 are confirmed from the publisher page. Positions 4–5 (the entry's "Ramatschi, Hessels") are **COULD NOT READ by me**, not contradicted: I tried Crossref (`api.crossref.org/works/10.1007/s10291-022-01232-4`) twice for the deposited author array and was rate-limited by the target both times, which exhausted the fetch budget. Adversary #2's S5 says its author names were "taken from the publisher page's front matter"; I could not reproduce that read on the same URL, which is a reproducibility note about the two summariser passes, not a finding that the names are wrong. Dates and affiliations likewise unread.

**(b) Does it establish that broadcast navigation messages carry a UT1-UTC parameter?**

Which systems carry ERPs — a **reconstruction from 2 consecutive served fragments**, junction at the comma, grammar checked on both sides:

> "ERPs are included in the GPS/QZSS CNAV and CNAV-2, BeiDou CNAV-1, CNAV-2 and CNAV-3," / "as well as IRNSS NAV messages, see Table 2."

Constellations and message types named: **GPS (CNAV, CNAV-2); QZSS (CNAV, CNAV-2); BeiDou (CNAV-1, CNAV-2, CNAV-3); IRNSS (NAV)**. Named as NOT carrying them: Galileo — "For Galileo, no ERP data are included in the current Open Service signals" — and GLONASS (summariser: broadcasts no ERPs at present; Conclusions repeat that Galileo provides none in INAV or FNAV).

That ΔUT1 is among the evaluated ERPs is carried by the Abstract: "∆UT1 differences of about 0.13 ms for GPS, QZSS, and IRNSS".

Now the part the claim rests on. The **only** place the paper equates the broadcast parameter with UT1 minus UTC is in the passage recording that GPS has stopped doing exactly that. **Reconstruction from 3 consecutive served fragments**, in order:

> "For completeness, we note that the specification of ERP data in GPS CNAV and CNAV-2 message was revised in mid 2020." / "Starting with IS-GPS-200L (2020), IS-GPS-705G (2020), and IS-GPS-800G (2020)" / "∆UT1 = UT1 − UTC has been replaced by ∆UT1GPS = UT1 − GPST."

Junction 2→3 is grammatical ("Starting with [the three ICD revisions], ∆UT1 = UT1 − UTC has been replaced by ∆UT1GPS = UT1 − GPST"). The next served fragment, quoted without completing it:

> "However, this change has not become effective yet,"

(The summariser then paraphrased — its words, not the paper's — that the transmitted data still follow the earlier specifications for the whole analysis period. I mark that as paraphrase and do not quote it.)

And the stated rationale, two consecutive fragments:

> "In contrast to UTC, GPS time (GPST) is a continuous time scale" / "and avoids potential problems in the vicinity of leap second changes."

For the other three constellations the paper's **hedged, explicit** formulation is a disclaimer, and per the quotation discipline it is the one to carry rather than any bare reading that all four fields hold UT1−UTC. Two consecutive fragments:

> "Unfortunately, no details about the origin of the ERP data and the parameterization" / "of the ERP prediction model are provided for BDS, QZSS, and IRNSS."

Asked directly whether the paper defines BDS's or IRNSS's ΔUT1 as UT1−UTC or as UT1 minus system time, the summariser answered that it does not; it adds that the user algorithms refer to "the constellation-specific system time" for both t and tERP, which is about the time arguments of the prediction model, not about the referent of ΔUT1, and I do not read it as settling the referent either way. The replacement passage is GPS-only: QZSS is not mentioned in it, despite the systems sentence pairing "GPS/QZSS".

**(c) Range, resolution or maximum, per constellation.**

**None, for any of the four.** Asked twice, in two different sections, for bit width / scale factor / LSB / valid or representable range of any broadcast ERP parameter, the answer both times was that the text contains no such statement, and Table 2's contents were never served (see READ LEVEL). Under the published-is-not-performed rule: this paper **EVALUATES the accuracy of the value encoded** and does not **BOUND the field that encodes it**.

What it does print per constellation, with units and location, is temporal metadata — not representable range:
- QZSS: "the QZSS ERPs have a fit interval of two hours and a validity interval of 12 h" (attributed to IS-QZSS-PNT-004 (2021)); "tERP refers to the next full hour, i.e., 57 min after ttm."
- GPS: "The reference epoch of the ERPs tERP varies between 16:38–17:04 and 19:50–19:57 in a regular pattern."
- BeiDou: "The immediately preceding midnight epoch is usually adopted as tERP."; "the BDS prediction model is updated irregularly at intervals of 4 – 20 days."
- IRNSS: "tERP always refers to the corresponding midnight epoch."

The numbers that **are** printed, named with units and denominator:
- Abstract: "∆UT1 differences of about 0.13 ms for GPS, QZSS, and IRNSS" — units milliseconds; denominator = the daily broadcast ΔUT1 values decoded over Jan 2020–May 2021 (GPS from 15 Jun 2020), differenced against IERS C04.
- Abstract: "Discontinuities in ∆UT1 range from 0.17 to 0.45 ms." — units milliseconds; denominator = day-boundary transitions in the same decoded series. This is a range **of observed discontinuity magnitudes**, not a range of a field.
- Abstract: BDS worse by a factor of 2–4; body text (per the summariser) a factor of three for RMS differences.

**(d) Any share or count of systems failing at a given |UT1−UTC|?**

**NO.** Asked explicitly; answer: no such statement. The percentages the page does carry, with their numerator class and denominator checked against the near neighbours they are not:
- "87%" and "84%": numerator = **BDS misclosure values falling within a stated tolerance**; denominator = BDS misclosure samples in this data set. Not systems, not formats, not artifacts.
- "11%": numerator = **the BDS data used in the analysis**; denominator = BDS data available. A data-selection share.

Overlap in both directions against the candidate's quantity (cumulative share of frame members non-conformant at a |UT1−UTC| threshold): the source's classes **miss** every non-BDS constellation, every non-broadcast artifact, and representability entirely; and they **include** accuracy-of-value and data-availability outcomes that the candidate's quantity excludes by construction. These are different quantities, not weak versions of the same one.

**(e) Regime, in the paper's own terms.**

Population = broadcast earth-rotation-parameter records decoded from raw navigation frames of GPS (CNAV/CNAV-2), QZSS (CNAV/CNAV-2), BeiDou (CNAV-1/-2/-3) and IRNSS (NAV); unit of analysis = the daily broadcast data set / ERP record, from "23 globally distributed receivers from two manufacturers" (CONGO — DLR and BKG — plus GFZ stations); operating condition = nominal signal-in-space, January 2020 to May 2021, GPS only after 15 June 2020; instrument = decoded navigation messages compared against IERS C04 (consistent with ITRF2014); endpoint = accuracy (ms for ΔUT1, mas for pole) and day-boundary discontinuity; threshold = none.

## REGIME

One line: **nominal-condition accuracy of the ERP values a handful of constellations actually broadcast, measured against IERS C04 over 17 months of frames from 23 stations — not the encoding of the fields that carry them, and not any offset magnitude outside the observed sub-millisecond regime.**

Where the claim sits: the **existence** half sits inside the regime — the paper must decode these fields to evaluate them, so a broadcast ERP/ΔUT1 artifact class in those four constellations is established. The **composition** half does not sit inside it for three of the four, because the paper says in terms that the parameterisation for BDS, QZSS and IRNSS is not documented to it. The **quantitative** half — range, maximum, share non-conformant — sits wholly outside: nothing in this regime varies |UT1−UTC| or examines a field's capacity, and the largest UT1 quantity anywhere in it is 0.45 ms.

Does it make the candidate's frame larger, smaller, or neither? **Larger in count of artifact classes, smaller in the confidence that those classes are UT1−UTC carriers — and it introduces a third offset kind the candidate's taxonomy has no slot for.** Four broadcast message formats are added to the frame as ERP carriers. But only one of them (GPS) has its ΔUT1 referent sourced here, and sourced as the *old* definition that the current IS-GPS-200L/705G/800G revisions **replace** with UT1−GPST, for the stated reason that GPST "is a continuous time scale" that "avoids potential problems in the vicinity of leap second changes". A UT1−GPST field is neither of the candidate's two kinds: it carries a UT1-referenced quantity (so leg (a)'s "no referent" objection does not apply to it) yet it is insulated from a growing UTC excursion in the same way the entry says TAI−UTC fields are.

## DEFECTS FOUND

1. **The claim's own best source is the record of GPS migrating away from UT1−UTC.** The entry's wording — "establish a genuine UT1−UTC-carrying artifact class ... (GPS CNAV, BeiDou, QZSS, IRNSS)" — reads as four confirmed UT1−UTC carriers. The paper's only UT1−UTC equation is inside "∆UT1 = UT1 − UTC **has been replaced by** ∆UT1GPS = UT1 − GPST", and it attaches to GPS CNAV/CNAV-2 only. This is the grammar-on-both-sides-of-the-cut failure in its most consequential form: the four words "UT1 − UTC" are verbatim in the paper, and the clause they sit in says the opposite of what the ledger entry uses them for.

2. **Three of the four constellations are unsourced on the referent, by the paper's own disclaimer.** "Unfortunately, no details about the origin of the ERP data and the parameterization / of the ERP prediction model are provided for BDS, QZSS, and IRNSS." The paper therefore cannot be the authority for BeiDou's, QZSS's or IRNSS's ΔUT1 being UT1−UTC rather than UT1 minus system time. Adversary #2's S5 line "It does establish that a genuine UT1−UTC-carrying artifact class exists in GNSS broadcast" overstates its own source on exactly this point, and the entry inherits the overstatement and adds the four-constellation parenthesis.

3. **No field range anywhere, and Table 2 unread.** The paper prints no bit width, scale factor, LSB or representable maximum. Adversary #2 and the entry both say so, and I confirm it for everything served to me — with the honest caveat that Table 2's contents were never served, so my "no range printed" is PARTIAL-read strength, not full-text strength. Either way the claim under check does not depend on a range, so this is a limit on my read, not a defect in the claim.

4. **Leg (c) gets less support than the entry books.** The entry treats this return as making "the UT1−UTC side of the frame ... larger than adversary #1's 'small'" and says it "CUTS IN THE CANDIDATE'S FAVOUR". On the documents, the move is: +4 broadcast ERP formats to the frame, of which 0 are sourced here as *currently* carrying UT1−UTC (GPS's current ICDs say UT1−GPST, not yet effective in the data; BDS/QZSS/IRNSS undocumented in this paper). The honest statement is that the paper enlarges the *candidate pool* and leaves the *UT1−UTC subset* unresolved pending the four ICDs.

5. **A taxonomy gap the entry does not record.** UT1−GPST is a third offset kind. The entry's leg (a) turns on a two-way split (UTC−TAI carriers vs UT1−UTC carriers) and concludes the threshold has no referent for the first kind. UT1−GPST fields are a second class to which a 3,600 s |UT1−UTC| ceiling also fails to apply directly, and this paper is the source that puts them on the table. That strengthens leg (a)'s *shape* (the frame mixes incommensurable offset kinds, now three of them) while being neutral on whether the frame is non-empty.

6. **Front-matter provenance is thinner than the entry states.** The entry carries a five-author citation; the publisher page as served to me truncates to "Steigenberger, P., Montenbruck, O., Bradke, M. et al." with an empty affiliations block. I did not verify names 4–5 and did not falsify them.

## ROUTES THAT FAILED

- `https://api.crossref.org/works/10.1007/s10291-022-01232-4` — WebFetch returned `RATE_LIMIT_EXCEEDED` (source: target) on two separate calls, the second being the retry the error message itself asked for. Intended purpose: the deposited author array, to settle the truncated author list and the blank publication dates. Budget exhausted there; I did not route around it, and I did not substitute a curl call for a spent fetch.
- `link.springer.com` table contents — Table 1 and Table 2 were requested in two of the three Springer calls and never served; the summariser returned only the fact that Table 2 is cited for ICD references. The tables are unread, not absent.
- WebSearch for the full five-name citation (one query, the title plus all five surnames plus journal) returned no repository or metadata record for this paper beyond the same Springer URL; the top hits were a different ERP paper (an NCBI/PMC URL, which is a hard-blocked route here and was not opened), mycoordinates.org analysis summaries, a typeset.io author page and insidegnss author pages. No author-list confirmation obtained. Not refused by the classifier.
- Not attempted, for budget: the DLR elib record, the Springer full-text PDF path, and the four governing ICDs (IS-GPS-200L message type 32, BDS-SIS-ICD B-CNAV, IS-QZSS-PNT-004, IRNSS SPS ICD), which are where (c)'s numbers would actually live.

## BEARING ON THE LEDGER ENTRY

**NARROW leg (c)'s supporting citation, and strike the "cuts in the candidate's favour" characterisation of this particular return.** Leg (c) of attack 4 (reach: "most of the frame") should no longer be recorded as weakened *by Steigenberger et al. establishing four UT1−UTC-carrying constellations*. What the paper supports, quotable as served, is narrower and should replace the entry's sentence:

> Steigenberger et al. (GPS Solutions 26:50, 2022) establish a broadcast **earth-rotation-parameter** class in four constellations — "ERPs are included in the GPS/QZSS CNAV and CNAV-2, BeiDou CNAV-1, CNAV-2 and CNAV-3," "as well as IRNSS NAV messages" — and evaluate its ΔUT1 to ~0.13 ms against IERS C04. It does **not** establish that those fields carry UT1−UTC: it states that for GPS "∆UT1 = UT1 − UTC has been replaced by ∆UT1GPS = UT1 − GPST" from IS-GPS-200L/705G/800G (2020), because GPST "is a continuous time scale" that "avoids potential problems in the vicinity of leap second changes", and it states that "no details about the origin of the ERP data and the parameterization of the ERP prediction model are provided for BDS, QZSS, and IRNSS". It prints no bit width, scale factor, LSB or range, and no share or count of systems failing at any |UT1−UTC|.

Three consequences for the entry as written:

1. **Leg (c) is not weakened by this source as claimed.** The entry's own Gate-4 line and its attack-4 paragraph should be edited to the narrower statement above. The frame gains four *candidate* members; the UT1−UTC subset gains none that this paper confirms.
2. **Leg (a) is untouched, and arguably reinforced in shape.** The fatal leg says the record's instances conflate UTC−TAI with UT1−UTC. This source adds a third kind (UT1 − system time) that is also outside a |UT1−UTC| ceiling's reach, so the entry's two-kind split is itself incomplete. If the entry keeps leg (a) as fatal, it should say "at least three incommensurable offset kinds", not two, and cite this paper for the third.
3. **Convert the rest to a promotion condition**, since it is cheap and decisive: open the four governing ICDs (IS-GPS-200L message type 32 / IS-GPS-800G, BDS-SIS-ICD B-CNAV-1/2/3, IS-QZSS-PNT-004, and the IRNSS SPS ICD) and record per constellation (i) whether the broadcast ΔUT1 is referenced to UTC or to the constellation's system time, and (ii) its bit count and scale factor. That is the only way the UT1−UTC subset of the frame becomes countable, and none of it is in this paper. Until that is done, "the UT1−UTC side of the frame is larger than 'small'" is an unsourced step in the entry, not an adversary's concession.

Nothing here bears on the entry's other sources, which I did not open.
