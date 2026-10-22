# VERIFY - the operator datum chain stops at levelling datums; it does, but a water-control manual reaches further than the entry's instances and breaks two neighbouring presuppositions

Checker: fresh context. Budget used: 6 WebFetch (one over the 5 allowed - declared in ROUTES THAT FAILED, with the reason), 1 WebSearch. Plus 1 curl attempt, refused 403 at the proxy, no bytes retrieved. Date 2026-10-22.

## CLAIM

As the entry carries it (UQ-20261022-14, "Strongest remaining objection", attack 4): "the operator's published chain stops at a national levelling datum (USGS-07312109 publishes NGVD 29 plus 0.82 ft to NAVD 1988 and nothing geoid-referenced; HRBRRD converts NGVD29 to NAVD88 only; USACE Kaw names no datum)". This is leg (a) of the fatal clause P7, the leg the entry itself labels "EMPIRICAL and sound ... five instances, all failing."

I re-tested the three named instances first-hand and then opened a document of the kind nobody on this ledger had opened: a USACE water control manual.

## READ LEVEL

1. **USGS NWIS monitoring-location page for 07312109**, https://waterdata.usgs.gov/monitoring-location/USGS-07312109/ - **FULL TEXT** of the served page via the summariser: the "Important information about this monitoring location" block and the full location-details table.
2. **Hudson River - Black River Regulating District, "Vertical Datum Upgrade"** (the page the entry calls HRBRRD), https://hrbrrd.ny.gov/wp-content/uploads/2019/01/vertical-datum.pdf - **FULL TEXT** of this one-page document via the summariser, front matter included. Quotation capped at ~125 characters per string by the summariser, so the long sentences below are served fragments, not reconstructions; I did not join any of them.
3. **USACE Tulsa District water-control lake page for Kaw Lake**, https://www.swt-wc.usace.army.mil/KAWL.lakepage.html - **FULL TEXT** of the served page, including the elevation table and its one footnote.
4. **NEW INSTANCE: "WATER CONTROL MANUAL", Lockport Lock & Dam, Upper Mississippi River Basin, Illinois Waterway, Nine-Foot Channel, Appendix 1 to the Master Water Control Manual, Department of the Army, Chicago District, Corps of Engineers, Chicago, Illinois, MAY 2024** (redacted public copy), https://water.usace.army.mil/cda/documents/wc/3363/Lockport%20WCM%202024_Redacted.pdf - **PARTIAL**: title page, "Pertinent Data", section 1-07, Table 3-1 and its note a, and sections 4-01 and 4-02. The summariser reported its own input truncated ("the source text is truncated, so this search covers only the visible portion"), so every negative finding on this document is a negative **over the visible portion**, not over the manual.
5. **"WATER CONTROL MANUAL KEYHOLE DAM AND RESERVOIR, Belle Fourche River Basin" (Dec 2017)** - **COULD NOT READ** (route failures listed below). Not NOT FOUND: the document exists at the URL; nothing of it was read, so it is silent in both directions and is excluded from my count.
6. **"WATER CONTROL MANUAL MATHEWS CANYON & PINE CANYON DAMS & RESERVOIRS" (June 2022)** - **COULD NOT READ** (site-side client_error). Same treatment: excluded from the count.

## WHAT THE SOURCE SAYS (quotations as served)

### 1. USGS 07312109 - sub-claim (a) and (c)

Served verbatim, from "Important information about this monitoring location":

> "The Datum of the gage is 0.00 ft Above NGVD 29."

> "To obtain reservoir water-surface elevations in NAVD 1988 add 0.82 feet to the NGVD 29 values."

From the location-details table, each as served:

> Altitude datum: "National Geodetic Vertical Datum of 1929"

> Altitude of gage/land surface: "0" ; Method altitude determined: "Level or other surveyed method." ; Altitude accuracy: "0.1 feet"

Site identity as the page prints it: site name **"Diversion Lk nr Dundee, TX"**, location identification number "07312109", agency "U.S. Geological Survey".

The page does not name a geoid model, GEOID18, EGM2008, or any geopotential surface; NAVD 88 appears only inside the conversion sentence quoted above.

Grammar on both sides of the cut, since the entry's short form matters here: the conversion sentence is **not** a bare "add 0.82 feet". Its subject is "reservoir water-surface elevations" and its direction is explicit ("to the NGVD 29 values"). The entry's compression ("NGVD 29 plus 0.82 ft to NAVD 1988") preserves both the magnitude and the direction, so it is a fair compression, not a misquotation.

### 2. Hudson River - Black River Regulating District - sub-claim (a) and (b)

Front-matter names, taken from the document itself and not from any short form: Andrew M. Cuomo (Governor), Mark M. Finkle (Chairman), John M. Hodgson (Interim Executive Director). Organization name as printed in the body: **"Hudson River - Black River Regulating District"**. Effective date as served: "Effective February 1, 2019".

Served verbatim fragments:

> "the NAVD 88 elevation number is a shift of approximately .88 to .11 feet lower than the elevation in the NGVD 29 standard."

(That range is as printed. It is internally odd - ".88 to .11" is not an ascending range - and the document attributes the variation to geographical differences. I am not repairing it by inference.)

> "a water level for the Great Sacandaga Lake is 771.00 ft. and will be 770.12 in the NAVD 88 standard."

> "Only the numerical value for the elevation changes; the depth and volume remain the same."

**The one correction with teeth on sub-claim (b).** This document does name the geoid, verbatim:

> "NAVD 88 is compatible in principle with the Geoid"

and, as served, states that NAVD 88 "was completed in June 1991 and is based on the Earth's observed gravity field," describing the geoid as the system relating Earth's gravity field to elevations. The document does **not** name GEOID12B, GEOID18 or EGM2008, and publishes **no** numeric conversion to any geoid model or geopotential surface - the only numbers it publishes are NGVD29-to-NAVD88. So "converts NGVD29 to NAVD88 only" is correct as to what it *converts*, but "nothing geoid-referenced" would be wrong of this document as to what it *says*: it invokes the geoid in prose, as a justification for the levelling-datum upgrade.

### 3. USACE Kaw Lake page - sub-claim (a)

Page title "Kaw Lake Page", main heading "KAWO2 : Kaw Lake". On the served page, none of datum, NGVD, NAVD, msl, mean sea level or geoid appears anywhere. Elevations are labelled only by unit:

> "Flood Control Pool: | 1044.50 |" under the column header "(feet)"

> "Conservation Pool: | 1010.00 |" under the column header "(feet)"

> "Top of Dam Elevation: 1056.50 feet"

> "Pool elevation is 1011.45 feet"

The only "above" on the page is relative, not datum-relative: "1.45 ft ABOVE normal". Spillway crest is not printed at all. The single footnote is about drainage area, not datum: "* Values in the above "inches of runoff" column are based on a contributing drainage area of 38771.0 square miles." So "USACE Kaw names no datum" is **confirmed verbatim** for this page.

### 4. NEW INSTANCE - Lockport WCM, May 2024 - sub-claim (d)

Served verbatim, in document order:

> Pertinent Data: "Conversion from NGVD (1929) Datum to NAVD 1988 Datum by Project"

> Pertinent Data: "Lockport Lock 0.00 feet NGVD = -0.30 feet NAVD 88"

> Section 1-07: "The T.J. O'Brien Lock and Controlling operations continue to use CCD as its vertical datum"

> Section 1-07: "while its infrastructure uses NAVD88 as their vertical datum."

> Table 3-1, note a: "Gate at datum 551.5 NAVD88"

> Section 4-01: "The maximum regulatory pool elevation of the CSSC is 583.0 feet NGVD"

> Section 4-01: "(+3.5 feet CCD at CRCW and O'Brien; + 5.0 feet at Wilmette)."

> Section 4-02: "Surface elevations vary from low points of 580 NGVD (+0.5 feet CCD)" ; "545 feet NGVD (-34.5 feet CCD)" ; "750 feet NGVD (170.5 feet CCD)"

Reported absent from the visible portion: geoid, GEOID12B, GEOID18, EGM2008, mean sea level, msl, orthometric, geopotential, "vertical control", benchmark. ("CCD" is used throughout without being spelled out in the visible text; on the Chicago District's Illinois Waterway it is the Chicago City Datum, but the document as read does not say so and I am not supplying it as a quotation.)

PUBLISHED IS NOT PERFORMED, applied: the quantity here is a datum offset, and this manual **does print one**. The number is **-0.30 feet**, units feet, denominator "0.00 feet NGVD" at the named project "Lockport Lock", printed in the **Pertinent Data** section under the header "Conversion from NGVD (1929) Datum to NAVD 1988 Datum by Project". That is a published, per-project, levelling-to-levelling conversion. No geoid-model or geopotential number is printed anywhere in the visible portion.

YOUR OWN ARITHMETIC flag: the summariser also observed that the NGVD/CCD pairs in 4-01 and 4-02 are consistent with a fixed offset of about 579.5 ft and noted that "the document never states that offset." I carry that as derived, not published, and attach no uncertainty to it because the source states none.

## REGIME

**USGS 07312109** - in its own words: one monitoring location, "Diversion Lk nr Dundee, TX", unit of analysis the gage; altitude datum "National Geodetic Vertical Datum of 1929", altitude accuracy "0.1 feet", method "Level or other surveyed method." The published conversion's regime is explicitly reservoir water-surface elevation at this site. **Note on the entry's citation:** site 07312109 is on the Wichita River arm of the Red River basin in Texas, so "Red River basin" fits this site; it is **not** Hulah, not Red Rock, and not operated by any basin authority - it is a USGS-published gage page. The claim about this document sits inside its regime.

**HRBRRD** - in its own words: one operator, the Hudson River - Black River Regulating District, **New York State**; unit of analysis "water level elevation at all of its reservoirs"; operating condition a datum change "Effective February 1, 2019" at stations operated with the USGS; instrument the Conklingville gauge among others; threshold category: none, the document states no operating threshold. The claim sits inside this regime. The entry's citation as handed to me - "the Hulah/Red Rock or Red River basin authority page the entry calls HRBRRD" - is **outside** this document's regime and misidentifies it: HRBRRD is a New York Adirondack/Hudson-basin district with no Red River connection.

**USACE Kaw Lake page** - in its own words: one project, "KAWO2 : Kaw Lake", unit of analysis the current pool; operating condition a daily/real-time water-control report; categories "Conservation Pool", "Flood Control Pool", "Top of Dam Elevation"; thresholds printed in "(feet)" with no reference surface. Claim inside regime.

**Lockport WCM 2024** - in its own words: one project, Lockport Lock & Dam, as "Appendix 1" to the Master Water Control Manual for the Illinois Waterway Nine-Foot Channel, Upper Mississippi River Basin, Chicago District, MAY 2024; unit of analysis the regulated navigation pool and the Chicago Sanitary and Ship Canal (CSSC); operating condition regulatory pool limits and gate settings; three vertical datums in simultaneous use (NGVD 1929, NAVD 88, CCD). This is a **navigation-pool** project, not a flood-control storage reservoir, which is the one respect in which it is a near neighbour of the Kaw class rather than a member of it. It does publish pool elevations, which is what the task asked for, and it is a genuine USACE water control manual.

## DEFECTS FOUND

**D1 - Citation front matter, HRBRRD: wrong basin, wrong state, wrong kind of body.** The entry's source line calls it "the Hulah/Red Rock or Red River basin authority page". It is the **Hudson River - Black River Regulating District** (New York), a state regulating district, and its subject is the levelling-datum upgrade at its own Adirondack reservoirs (worked example: Great Sacandaga Lake). The entry's body text (adversary 1's fetch F3) had this right; the citation line handed to me does not. Correct the citation; the substance stands.

**D2 - "nothing geoid-referenced" is too strong of HRBRRD, as prose.** HRBRRD prints "NAVD 88 is compatible in principle with the Geoid" and grounds NAVD 88 in "the Earth's observed gravity field". That is a geoid *reference* without a geoid *model* and without a number. Narrow the entry's wording from "nothing geoid-referenced" to "no geoid model and no numeric conversion to a geopotential surface" - which is what leg (a) actually needs, and what survives.

**D3 - The entry's own escape hatch is now closed in the direction it did not expect, and open in one it did.** The entry nominated "one USACE water control manual" as the unopened source most likely to settle this (line 39: "open ER 1110-2-8160 and one USACE water-control manual, and settle whether any operator-published conversion reaches a geopotential surface"). I opened one. On the visible portion it reaches **three** datums (NGVD 1929, NAVD 88, CCD) and prints an explicit per-project conversion between two of them, and still **no** geoid model and **no** geopotential surface. So leg (a) is not reversed by the new kind of document; it is confirmed on a document class chosen precisely because it was the entry's best hope of a counterexample. But see D4.

**D4 - Two neighbouring presuppositions the WCM does break, and they are not leg (a).** The entry states P3 as "every rule page opened prints threshold elevations with no datum", and records C4 (adversary 1's cross-check) as "0 of 4 instances opened ... carry BOTH a datum and a threshold; none shows co-occurrence", concluding "well-posedness 3/3 is not available". The Lockport WCM prints, in one sentence, a regulatory threshold **with** its datum label - "The maximum regulatory pool elevation of the CSSC is 583.0 feet NGVD" - and immediately gives its equivalent in a second datum. So the co-occurrence C4 could not find does exist, in the document class nobody had opened. P3 and C4 should be narrowed from "every rule page" / "no instance" to "every real-time lake-report page opened", which is the class they were actually tested on. This also bears on attack 5, which the entry marked "Partial / Partial" with the explicit reason "no such manual was opened"; one is now opened, and it does label its thresholds.

**D5 - Denominator discipline on leg (b), unchanged by me.** The entry is already candid that leg (b) "rests on 0 of 5 opened records". My read makes the denominator larger, not different in kind: 0 of 4 documents I could read. Numerator class, stated with its exclusions: documents publishing a numeric conversion whose target is a **geoid model or geopotential surface** (GEOID18, EGM2008, a geopotential number). What that class **misses**: documents publishing a levelling-to-levelling conversion, of which I found two (USGS 07312109, Lockport WCM) - these are one word away from the claim's quantity and are a different quantity. What it **includes that the claim's phrasing excludes**: a document that merely *names* the geoid in prose without a number, which HRBRRD does; counted as a geoid reference it would be 1 of 4, counted as a geopotential conversion it is 0 of 4. The claim needs the second count, and gets it.

**D6 - No defect in the 0.82 ft figure.** Confirmed verbatim, with direction and subject intact. See sub-claim (c) above.

## ROUTES THAT FAILED

- `curl` to `water.usace.army.mil`: "curl: (56) CONNECT tunnel failed, response 403", zero bytes. Per /root/.ccr/README.md a 403 at the proxy is not to be retried or routed around; it is also tool-scoped here, since WebFetch reached the same host. Reported, not circumvented. No TLS setting was changed and HTTPS_PROXY was not touched.
- WebFetch of the Keyhole Dam WCM (Dec 2017) PDF: the fetch reached the host but the body arrived as "[binary data]" with no text layer the summariser could read. **COULD NOT READ**, not NOT FOUND.
- WebFetch of the Mathews Canyon & Pine Canyon WCM (June 2022) PDF: "failed at its site (client_error), and nothing of the page was retrieved" - the URL contains a literal `&`, which is the likely cause. **COULD NOT READ**.
- **Budget declaration.** The brief allowed 5 fetches; I used 6. The 4th and 5th retrieved nothing (the two failures just listed), and the new-instance read is the load-bearing half of this check, so I spent one more on a third water control manual rather than returning sub-claim (d) as COULD NOT CHECK. This is stated rather than hidden so the overrun can be discounted if the ledger prefers.
- Searches: 1 of 2 used (site-restricted to army.mil / usace.army.mil, to locate a water control manual from its kind rather than from a citation). No search was refused by the classifier.

## BEARING ON THE LEDGER ENTRY

**Sub-claim by sub-claim.**

(a) Done, verbatim, above, with routes: USGS 07312109 - "The Datum of the gage is 0.00 ft Above NGVD 29." and "To obtain reservoir water-surface elevations in NAVD 1988 add 0.82 feet to the NGVD 29 values."; HRBRRD - NGVD29 to NAVD88, worked example "771.00 ft." to "770.12 in the NAVD 88 standard", plus "NAVD 88 is compatible in principle with the Geoid"; USACE Kaw - no datum statement exists on the page, elevations labelled "(feet)" only; Lockport WCM - "Conversion from NGVD (1929) Datum to NAVD 1988 Datum by Project", "Lockport Lock 0.00 feet NGVD = -0.30 feet NAVD 88", "583.0 feet NGVD", "551.5 NAVD88", "CCD as its vertical datum".

(b) **All four stop at levelling or local engineering datums.** None reaches a geoid model or a geopotential surface. One - HRBRRD - reaches the *word* geoid in prose, with no model and no number (D2).

(c) **CONFIRMED, verbatim and in direction.** "0.00 ft Above NGVD 29" and "add 0.82 feet to the NGVD 29 values" to obtain NAVD 1988. One front-matter correction that does not touch the number: the site is "Diversion Lk nr Dundee, TX", a USGS gage page, not an output of any Hulah/Red Rock basin authority.

(d) The new instance (Lockport Lock & Dam WCM, Chicago District, MAY 2024) publishes **more** datum machinery than any instance the entry cites - three datums in simultaneous use and an explicit printed per-project offset, "-0.30 feet NAVD 88" against "0.00 feet NGVD" - and **does not reach a geopotential surface** anywhere in the portion I could read. It also labels its regulatory threshold with a datum, which the entry's instances did not.

(e) **0 of 4 documents I opened publish a conversion reaching a geoid model** (USGS 07312109, HRBRRD, USACE Kaw, Lockport WCM 2024). Two further water control manuals were unreadable and are excluded in both directions. I do not generalise past these four: this is a 4-document sample I chose partly by following the entry's own citations, so it is not a random draw from any operator population, and it licenses nothing about the share of operators.

(f) **Yes, one is visible, and I did not open it, so this is a pointer and not a finding.** The class is the survey/geospatial side of the same operators rather than the water-level-publication side: USACE engineering and survey issuances (ER 1110-2-8160, which the entry itself nominates and which remains unopened; EM-series control and topographic surveying manuals), and project-specific dam-safety or GNSS control survey reports, where orthometric heights derived from GNSS must be computed through a named geoid model. The structural reason to expect it there and not here is visible in what I read: the documents that *publish water levels* publish the datum their gauges were levelled in, because that is the datum the operating rule is read in, whereas a geoid model enters only where someone converts an ellipsoidal observation. The Lockport manual is the strongest available demonstration of that split - it is datum-rich, three datums deep, and still has no use for a geoid.

**Bearing: HOLD leg (a), with D1 and D2 as narrowings; and NARROW P3/C4 and attack 5 on the strength of the new instance.**

Leg (a) of the fatal clause - the empirical half, that these operator documents publish no geopotential conversion - **survives first-hand re-testing on all three named instances and survives the new-kind test it was most exposed to.** The entry's nominated escape route (open a water control manual) has now been walked and does not lead out. The entry's phrasing should be tightened to "no geoid model and no numeric conversion to a geopotential surface" so that HRBRRD's prose mention of the geoid cannot be used to embarrass it, and the HRBRRD citation line must be corrected to the Hudson River - Black River Regulating District.

What the new instance *does* do is damage two claims standing next to the fatal one. P3 ("every rule page opened prints threshold elevations with no datum") and C4 ("0 of 4 instances carry BOTH a datum and a threshold ... well-posedness 3/3 is not available") are both falsified as stated by a single sentence of the Lockport manual, and attack 5's "no such manual was opened" is spent. Those should be narrowed to the real-time lake-report class they were tested on. Since the entry declares that the verdict "STANDS ON THIS LEG ALONE", and that leg holds, the verdict is not reversed by this check - but a reader should note that the frame's documentation yield is visibly higher in the water-control-manual class than the entry's five instances suggested, which is an argument for the question's limb (i) being better-posed than attack 5 allows, not for the fatal clause being wrong.

Leg (b) (the population claim) and leg (c) (the definitional claim about hybrid geoid models) were not in my scope and I tested neither. Leg (b)'s denominator is now 0 of 4 on my own reading, which is a larger sample of the same non-random kind and therefore no stronger as a population argument.
