# VERIFY - Limit-bearing timing documents at clause grain: three of the eight named documents now opened at primary source, and the vendor wiki is partly wrong

Checker: fresh context. Budget used: 6 WebFetch, 1 WebSearch. Date 2026-10-23.

## CLAIM

Entry UQ-20261023-14, presupposition 3, verbatim: "the named documents state enumerable numeric time-error limits — contested, ONE family verified and only from a vendor wiki, five unopened".

The leg that turns on it, verbatim from "Strongest remaining objection": "C5 and C7 (clause (a) admits holdover-state and alarm strata that carry a transition and no magnitude, and the question fixes no reference point although G.8271.2 carries four limits at four points), which is a well-posedness defect consistent with the 2/3 score".

Adversary #2's CL3, verbatim: "UNVERIFIED. Not checked by me; the record itself labels the synchrophasor half as its own unsourced background. This caps the entry; it kills nothing."

The record's self-flag on the synchrophasor limb, verbatim: "THIS IS MY OWN BACKGROUND KNOWLEDGE OF THE TVE-to-time relation, NOT A SOURCE FINDING".

**The headline result of this check: the route nobody had tried works in one fetch per document.** The record's note that "I ran out of fetch budget (5 of 5 ...) and SIMPLY STOPPED there; none of the above failed at a route" was correctly labelled as budget rather than route failure, and that labelling was load-bearing: I opened ITU-T G.8272 and ITU-T G.8271.2 at **full text** at one ITU free-download URL each, and NIST SP 1500-08 at full text at one NIST URL. Three of the eight named documents are now opened from the primary source. No route failed on any of the three.

## READ LEVEL

Name the level for each source I touched. I touched three; I did not touch the other five named documents at all, and their silence is **not** evidence in either direction.

1. **ITU-T G.8272/Y.1367 (07/2025), "Timing characteristics of primary reference time clocks"** — **FULL TEXT**, via `https://www.itu.int/rec/dologin_pub.asp?lang=e&id=T-REC-G.8272-202507-I!!PDF-E&type=items`, served through the summariser (≈125-character verbatim cap). No route error. Edition identified from the official editions page `https://www.itu.int/rec/T-REC-G.8272/en`, which lists the in-force edition as 07/25 plus a prepublished Amendment 1 (08/26) that I did **not** open.
2. **ITU-T G.8271.2/Y.1366.2 (05/2021)**, network limits for time synchronization in packet networks with partial timing support — **FULL TEXT**, via `https://www.itu.int/rec/dologin_pub.asp?lang=e&id=T-REC-G.8271.2-202105-I!!PDF-E&type=items`, same summariser. No route error. The editions page lists Erratum 1 (10/21) and Amendment 1 (11/22), **neither of which I opened** — so every value below is the 05/2021 base text and may be amended.
3. **NIST SP 1500-08, "Timing Challenges in the Smart Grid"** — **FULL TEXT**, `https://nvlpubs.nist.gov/nistpubs/SpecialPublications/NIST.SP.1500-08.pdf`, two fetches: one general read and one **dedicated term sweep** (see DEFECTS, the one-sweep rule). No route error.
4. **ITU-T G.8272.1 (ePRTC), ITU-T G.8271.1, IEEE C37.118.1 / IEC-IEEE 60255-118-1, IEC/IEEE 61850-9-3, IEEE C37.238** — **NOT OPENED, COULD NOT CHECK, BUDGET.** Not a route failure: I attempted no route on any of them, because my 6 fetches were spent on the three above. The two ITU ones are free at the route I just proved works; the three IEEE/IEC ones are paywalled and I did not test that paywall, so I record no paywall error of my own.
5. **Calnex Solutions, "ITU-T G.8271.2 (Network Limits - PTS) One-Page Summary"** — **NOT RE-OPENED by me.** I take its four served values from the entry's own text and check them against the Recommendation. That is the whole point of the check, so a re-read of the wiki would have bought nothing.

I did not open, and express no view on, sources (1) through (10), (12) and (13) of the brief. Attack 4 / clause C4 and the Arbiter Systems document are untouched by this note.

## WHAT THE SOURCE SAYS (quotations as served)

All quotations below came through a summariser with a ≈125-character verbatim cap. Where a sentence exceeds that, I say so and label the join. **I never completed a cut string by inference.**

### Sub-claim 1 — ITU-T G.8272, the PRTC limit, with its clause number

The clause is **clause 6.1, "Time error in locked mode"**. Served verbatim:

> "the time output of the PRTC-A, or the combined PRTC-A and T-GM function, should be accurate to within 100 ns or better"

and the parallel sentence:

> "the time output of the PRTC-B, or the combined PRTC-B and T-GM function, should be accurate to within 40 ns or better"

**Units: nanoseconds.** Values: **PRTC-A 100 ns, PRTC-B 40 ns, clause 6.1, no table.** No other accuracy class is defined. Tables 1 to 4 (clause 6.2) carry **MTIE and TDEV wander limits, not an absolute time error limit** — a near neighbour that is a different quantity, and I do not count it.

**Is it printed as a max|TE| in time units, as V2's rule requires? The values are in time units. The quantity name is NOT max|TE|.** Served finding, and this is the answer to the sub-claim as asked:

> "The phrases 'maximum absolute time error' and 'max|TE|' do not appear in clause 6.1. Clause 6.1 uses 'accurate to within.' The test method refers to 'the maximum time error.'"

and the only place the token does appear is **non-normative**: Appendix I.3.1, "the measured MTIE, TDEV and max|TE| could be as much as twice the PRTC MTIE, TDEV, and max|TE| requirement."

**Logical form, modality, reference.** The limit sentence is **"should"**, not "shall" — a recommendation in the ITU-T sense, not a mandate; anyone reading clause 6.1 as a hard bound is upgrading its modality. It is referenced to the **"applicable UTC time signal source"** (clause 6.1, defined in clause 5), **not** to a "primary time standard" — the entry's own shorthand for this family, "(PRTC)", is fine, but the phrase "primary time standard" is not the Recommendation's.

### Sub-claim 2 — ITU-T G.8271.2, the four wiki-served values against the Recommendation's own clauses

The Recommendation's numeric limits, with clause numbers, as served:

| Clause | Point | Printed quantity | Printed value |
|---|---|---|---|
| **7.1** | **A and L** | max|TE| ("maximum absolute time error ... under normal, locked conditions") | **≤ 100 ns** |
| **7.2** | **B** | — | **no numeric value printed**; equals the point A limit *only* for a T-GM integrated in the PRTC; external T-GM is **"for further study"** |
| **7.3.1.1** | C, Type I, **APTS** | "Peak-to-peak pktSelected2wayTE" | **< 1100 ns** |
| **7.3.2.1** | C, Type I, **PTS** | "max\|pktSelected2wayTE\|" | **< 1 100 ns** (printed with a space in the number) |
| **7.4.1** | D, **APTS** | "max\|TEL\|" | **≤ 1350 ns** |
| **7.4.2** | D, **PTS** | "max\|TEL\|" | **≤ 1350 ns** |

Type II is **"for further study"** at point C in both APTS and PTS. There are **no tables** of network limits; Tables III.1 and III.2 give **holdover phase drift**, not network limits, and the Class 4 (1.5 µs) figure "comes from Table 1 of G.8271, which is referenced but not reproduced" — so the 1.5 µs end-application number the entry's frame gravitates toward is **not printed in G.8271.2 at all**; it lives in G.8271, which **nobody has opened**, including me.

**Are there in fact four limits at four reference points, each clause-numbered?** No. There are **six clause-numbered limit statements at three valued points.** Clause numbers now exist (7.1, 7.2, 7.3.1.1, 7.3.2.1, 7.4.1, 7.4.2), so the wiki's defect that "The page names no clause numbers" is repaired — but the shape is wrong in both directions: **more statements than four, fewer valued points than four.**

**Is the quantity max|TE|, or the packet-selected variant? Four different measurands, and max|TE| applies at exactly one point.**
- **A (and L): max|TE|** — clause 7.1. This is the only plain max|TE| limit in the Recommendation.
- **C under APTS: peak-to-peak pktSelected2wayTE** — a packet-selected, two-way, peak-to-peak statistic. Different measurand.
- **C under PTS: max|pktSelected2wayTE|** — packet-selected and two-way, but a max-absolute rather than a peak-to-peak. **Different from the APTS quantity at the same point**, which the wiki's phrasing does flag.
- **D: max|TEL|** — and the subscript is load-bearing: clauses 7.4.1/7.4.2 apply **"a first-order low-pass filter with a 0.1 Hz bandwidth ... before evaluating max|TE|"**. A 0.1 Hz-filtered max|TE| is **not** an unfiltered max|TE|.

**Corrections to the four wiki-served values, item by item:**
1. Wiki: reference points **A and B** "Max|TE| < 100ns". Recommendation: clause 7.1 is **"Reference points A and L"**, and **clause 7.2 (point B) prints no numeric value**, the external-T-GM case being "for further study". **The wiki has conflated B with L.** The 100 ns figure itself is right; the set of points it attaches to is wrong.
2. Wiki: "**<** 100ns". Recommendation: **"max|TE| ≤ 100 ns"**. Inequality direction checked per the standing rule: the wiki is strict where the Recommendation is non-strict.
3. Wiki: point C APTS "Peak-to-peak pktSelected2WayTE < 1100 ns (200 s window, fastest 0.25%)". Recommendation: value and quantity confirmed; the window parameters are **"Selection window of 200 s, selection percentage of 0.25%, window step size of 20 s"**, method **"percentile average packet selection"**, and — a sweep result, not an inference — **"The document does not use the word 'fastest.'"** The wiki also omits the **20 s step size** and the clause's **"minimum Sync and Delay_req rate of 2 packets/s"**.
4. Wiki: point D "Max|TE| < 1350 ns". Recommendation: **"max|TEL| ≤ 1350 ns"**, *conditioned* — APTS "when the T-TSC-A is not locked to the local time reference and the end-application limit is 1500 ns"; PTS "when holdover is provided by the network and the end-application limit is 1500 ns". **The wiki drops the conditions, the filter, the subscript, and the strictness.** Those conditions are exactly the holdover-state stratum C5 is about.

### Sub-claim 3 — one synchrophasor instance: NIST SP 1500-08, the premise the record labels its own unsourced background

Front matter, taken from the document and not from anyone's short form: **"Timing Challenges in the Smart Grid", NIST Special Publication 1500-08, January 2017, DOI 10.6028/NIST.SP.1500-08**; authors **Jason Allnutt, Dhananjay Anand, Douglas Arnold, Allen Goldstein, Ya-Shian Li-Baboud, Aaron Martin, Cuong Nguyen, Robert Noseworthy, Ravi Subramaniam, Marc Weiss.**

The document **does print a numeric time limit**, in two places:

**Table 1**, caption verbatim: **"Table 1 Wide area precision time requirements in current power systems"**; columns **"Application"** and **"Time Accuracy Requirement"** (two columns, no third). The row **"Synchrometrology (synchrophasors)"**, whose sub-applications are Wide Area Protection, Frequency Event Detection, Anti-Islanding, Droop Control and Wide Area Power Oscillation Damping (WAPOD), carries **"Better than 1 µs."** The summariser twice flagged the extracted row boundaries as **"jumbled"** / **"ambiguous"**, so I label the row-to-cell binding **PARTIAL: the value "Better than 1 µs" is printed in Table 1 and the synchrometrology row is printed in Table 1; I did not see them aligned in a clean extraction.**

**Section II, "Application Requirements," page 7.** This is the sentence the sub-claim asks for, and it is a **RECONSTRUCTION FROM 2 CONSECUTIVE SERVED FRAGMENTS** under the 125-character cap, labelled as such:

> "However, the requirements are on the order of 1 µs and better to meet and exceed the IEEE C37.118-2011" + "requirement for ensuring that the Total Vector Error (TVE) remains under 1 percent" [+ the served tail "for synchrophasor applications"]

**Scope-setting opener, as the standing rule requires.** The sentence opens **"However,"**. That word scopes the clause as a **contrast with, or a move away from, an immediately preceding statement that I did not read.** The clause my words sit in **ASSERTS** the 1 µs figure — it is not a denial and not a move away from the number — but I cannot say what the "However," is conceding, and a reader who needs the antecedent should spend a fetch on page 7.

**Does it print only a TVE limit needing conversion at a stated frequency? No — and the dichotomy in the sub-claim is false on this instance.** Dedicated term sweep results, each a sweep I ran and not an impression:
- **"26" adjacent to µs / us: NO MATCHES.** The 26 µs figure that the TVE-to-time relation at 60 Hz would produce **is not in this document.**
- **"convert" / "conversion": NO MATCHES.**
- **"Total Vector Error" / "TVE": exactly ONE occurrence**, the Section II sentence above.
- **"60 Hz" / "50 Hz" / "nominal frequency" near TVE: NO MATCHES.** "60 Hz" occurs in Section IV and "60 times per second" in Section II, neither adjacent to the TVE sentence.
- Served conclusion: **"The document does not state a conversion. It places a '1 µs' accuracy figure beside a '1 percent' TVE limit but never shows a calculation or names a frequency."**

**Numerator class and denominator, both directions, per the standing rule.** The printed quantity is a **requirement**, not a measurement: "Time Accuracy Requirement" is the column heading. Its class is *the time accuracy a wide-area power application needs*; it **includes** application needs with no instrument, no network reference point, no measurement window and no percentile, and it **misses** everything V2's rule is about — it is not a limit on a delivered time error at a named point, it has no denominator, and it names no measurand definition. PUBLISHED IS NOT PERFORMED: NIST SP 1500-08 **ANNOUNCES AND BOUNDS** a requirement; it measures nothing.

**Attribution, which matters here.** Served: **"The document does not attribute the 1 µs figure to IEEE C37.118 as a printed limit. It presents 1 µs as its own requirement estimate. The standard is cited only for the TVE criterion."** So the 1 µs is **NIST's own estimate of what is needed to "meet and exceed"** the standard's 1 % TVE criterion — the IEEE standard is cited for the **TVE** clause, not for the microsecond. Anyone quoting "1 µs" as IEEE C37.118's printed time limit is reattributing it. **Modality: "on the order of 1 µs and better" is hedged**, and per the standing rule to prefer the hedged formulation, that is the one I carry, not Table 1's bare "Better than 1 µs".

**IEEE C37.118.1 / IEC-IEEE 60255-118-1 itself: NOT OPENED, COULD NOT CHECK, BUDGET.** I did not attempt it, so I record **no paywall error** — only a spent budget. Whether *that* standard prints a time limit or only a TVE limit **remains unchecked by anybody**, and the record's self-flag on the TVE-to-time relation still stands unsourced **as to the standard**. What has changed is that it is no longer the only route to a printed power-system time figure.

### Sub-claim 5 — both directions on the reference point

**Direction 1, limit attaches to a NETWORK REFERENCE POINT.** Yes, in G.8271.2. The normative locating sentence, clause 7 ("Packet network limits"), served verbatim: **"reference points A, B and C and D in Figures 1 and 2."** And clause 7.3: the limits **"shall be met for all operating conditions,"** regardless of the equipment preceding the interface; the limits are also **"compatible with the minimum tolerance"** that equipment input ports must provide. So **a G.8271.2 limit cannot be scored per unit without naming a point** — the same 1100 ns at point C means a different measurand under APTS than under PTS, and 1350 ns at point D is a filtered quantity under stated holdover conditions.

**But the clause that "fixes" the points is weaker than C7 assumes, and this is a NEW sourced finding.** Normative clause 7 fixes A/B/C/D only by **pointing at Figures 1 and 2**; the only *textual* definitions the read surfaced sit in **Appendix I, which is non-normative** — point A "output from the PRTC", point C "input to the telecom time slave clock (T-TSC) or the PTP slave port of an IWF", point D "output from the T-TSC", point B the output from the T-GM or the PTP master port of an IWF. So the Recommendation's own reference-point definitions are **figure-borne and appendix-borne**, not normative prose.

**Direction 2, a limit in the rule that attaches to a UNIT.** **Yes — G.8272.** Clause 6.1 attaches 100 ns / 40 ns to **"the time output of the PRTC-A ... or the combined PRTC-A and T-GM function"** — a clock's own output. And clause 9, served verbatim: **"the performance of the PRTC is not specified at these internal reference points, but rather at the external interfaces of the equipment."** Served further: the document **"does not use the term 'network reference point.'"** So within V2's own rule there is a document whose limit is a **unit accuracy spec**, scoreable per unit with no network point named.

## REGIME

Each source's own words for its population, unit of analysis and operating condition, then whether the claim sits inside it.

- **G.8272 (07/2025).** Population: primary reference time clocks, classes **PRTC-A and PRTC-B** only. Unit of analysis: **the equipment's external interface** — clause 9, performance "not specified at these internal reference points, but rather at the external interfaces of the equipment." Operating condition: **"Time error in locked mode"** (clause 6.1 heading). **The claim sits only partly inside this.** A limit stated for *locked mode* is **silent on holdover**, which is precisely the stratum C5 is about; G.8272 clause 6.1 does not bound a GNSS-disciplined clock after loss of lock, and nothing in what I read says it does. **ePRTC is not in this document** — it is G.8272.1, unopened — so the wiki's noted gap, "gives no PRTC/ePRTC accuracy figure", is now repaired for PRTC and **still open for ePRTC.**
- **G.8271.2 (05/2021).** Population: packet networks with **partial** timing support from the network, in two deployment types, **APTS and PTS**, Type I only (Type II "for further study"). Unit of analysis: **network reference points A, L, C, D.** Operating conditions: point A "normal, locked conditions"; point D conditioned on the T-TSC-A not being locked to the local time reference (APTS) or holdover being provided by the network (PTS), each **with a stated 1500 ns end-application limit**. Instrument: percentile average packet selection, 200 s window, 0.25 %, 20 s step, ≥ 2 packets/s. **The claim sits inside this only if the application is APTS/PTS Type I**; full timing support (G.8271.1) is a different Recommendation and is unopened.
- **NIST SP 1500-08 (January 2017).** Population: **"current power systems"** (Table 1 caption), wide-area applications. Unit of analysis: **the application**, not a clock and not a network point. Category: **"Time Accuracy Requirement."** Threshold: "Better than 1 µs" / "on the order of 1 µs and better". **The claim sits inside this only as an application requirement.** This document grades nothing, measures nothing, and specifies no reference point; **a requirement citation is not a limit clause**, in the same way a definition citation is not an evaluation.

## DEFECTS FOUND

Numbered, with my own reasoning marked as mine wherever it is reasoning rather than a read.

1. **The vendor wiki is wrong about the set of points, not merely unsourced.** "Reference points A and B Max|TE| < 100ns" conflates **point B with point L**; clause 7.2 prints **no numeric value for B**, and the external-T-GM case is "for further study". The entry carried the wiki's values as the one verified family. They are **substantively corrected, not merely upgraded**, by the Recommendation.
2. **Four measurands have been read as one.** max|TE| (A/L), peak-to-peak pktSelected2wayTE (C/APTS), max|pktSelected2wayTE| (C/PTS), max|TEL| after a 0.1 Hz first-order low-pass (D). **A number one word away from the claim's is a different quantity**, and three of the four are a word or more away from max|TE|.
3. **G.8272's normative clause does not use the quantity name V2's rule requires.** Clause 6.1 says **"accurate to within"**; max|TE| appears only in **non-normative Appendix I.3.1**. MY OWN READING, not a source finding: a rule that demands "a max|TE| in time units" is satisfied by G.8272's *value* and not by its *vocabulary*, and whether that counts is a question about V2's rule, not about the Recommendation. A sweep that would have settled it is a sweep of V2's own text for how it names the quantity, which I was not given.
4. **A modality upgrade is available and should be resisted.** G.8272 clause 6.1 is **"should"**. Nothing I read makes the 100 ns a shall.
5. **The 1.5 µs end-application figure is not printed in G.8271.2.** Clauses 7.4.1/7.4.2 *condition on* a 1500 ns end-application limit; the limit itself "comes from Table 1 of G.8271, which is referenced but not reproduced." **G.8271 is not even on V2's list of six families**, and nobody has opened it. MY OWN OBSERVATION: if the frame's operative number is 1.5 µs, the governing document is an **unlisted** one.
6. **The 26 µs TVE-to-time figure is in no document anybody has opened.** My dedicated sweep of NIST SP 1500-08 returned **no match for "26" adjacent to µs, no match for "convert"/"conversion", and no frequency near the single TVE occurrence.** Per the one-sweep rule: this is **two sweeps of one document**, a general read and a dedicated term sweep, and the dedicated one is the one I rely on. It is an absence **in this document only** — it says nothing about C37.118.1, which nobody has opened.
7. **The entry's own count does not reconcile.** V2's rule is described as **"six ... limit-bearing document families"** but **eight documents are named** (G.8272, G.8272.1, G.8271.1, G.8271.2, C37.118.1 / 60255-118-1, SP 1500-08, 61850-9-3, C37.238). A grouping that yields six is constructible — MY OWN ARITHMETIC: pair G.8272 with G.8272.1, and C37.118.1 with SP 1500-08, and 61850-9-3 with C37.238, leaving G.8271.1 and G.8271.2 singleton — but **the entry states no grouping rule**, so the set V2 pre-declares is **named but not enumerated by a stated rule at family grain.** Per the standing rule on pre-declared sets: the entry enumerates **documents**, not **families**, and the "five of six unopened" tally is therefore computed over a partition nobody has written down.
8. **"Five unopened" is now stale in the entry's favour and against it at once.** Three named documents are opened at primary source. Under the entry's own six-family count, **at most three families remain unopened** (ePRTC/G.8272.1 if PRTC is now opened as its own family, G.8271.1, and the 61850-9-3 / C37.238 pair), and the synchrophasor family has one instance opened. The Well-posedness 2/3 score's stated second ground — "five of the six limit-bearing document families are unopened" — **no longer describes the record.**
9. **No edition was pinned anywhere.** The entry cites bare "ITU-T G.8272" and "ITU-T G.8271.2". G.8272 is in force at **07/2025** with a prepublished **Amendment 1 (08/2026)** I did not open; G.8271.2 is in force at **05/2021** with **Erratum 1 (10/2021)** and **Amendment 1 (11/2022)** I did not open. The Calnex wiki names no edition either, so the wiki's values **cannot be pinned to an edition** — and the 2017 base edition of G.8271.2 was superseded in 2021, which is a live possibility for why a vendor summary says "A and B".
10. **Two identifiers, one document — not in this limb.** I checked for the inflated-prior defect and found none here: G.8272 and G.8272/Y.1367 are **one Recommendation under a dual ITU-T G/Y number**, as are G.8271.2 and G.8271.2/Y.1366.2. "C37.118.1 / IEC-IEEE 60255-118-1" is likewise **one standard under two numbers** (the IEC-IEEE dual-logo reissue), which the entry already writes as a slash pair. So the eight-name list is **eight documents, not fewer** — but it should be read as **naming six or seven distinct standardisation efforts**, and NIST SP 1500-08 is **not a standard at all**, which is defect 11.
11. **One of V2's six "limit-bearing document families" is not a limit-bearing document.** NIST SP 1500-08 is a **requirements survey** whose column heading is "Time Accuracy Requirement" and whose figures are hedged and self-attributed. It **ANNOUNCES AND BOUNDS**; it specifies nothing, and it governs no application in the sense clause (c) needs. MY OWN READING: V2's rule treats it as interchangeable with a Recommendation, and it is not.
12. **A kind-lead I can now justify by kind, and one I cannot.** The kind of document that settles sub-claims 1, 2 and 5 is **a normative clause of a standard that prints a numeric limit with its measurand and its point of application**; G.8272 and G.8271.2 are that kind, and they settled them. The kind that settles sub-claim 3 **for the standard** is **IEC-IEEE 60255-118-1 or IEEE C37.118.1 itself**, and that is the right kind — paywalled, untried, one fetch's worth of work for the next reader, and the single highest-value unopened document in this limb. **NIST SP 1500-08 was not that kind** and I say so even though it is the instance I opened: it answered the limb about *printed power-system time figures* and did not answer the limb about *what the synchrophasor standard prints*.

## ROUTES THAT FAILED

**None.** No fetch in this check returned an error, a paywall, a garble or a redirect I had to follow. Specifically:

- `https://www.itu.int/rec/T-REC-G.8272/en` — 200, editions listed, **no download hrefs on the page** (not an error; the page links to per-edition detail pages).
- `https://www.itu.int/rec/T-REC-G.8271.2/en` — same, **no download hrefs on the page**.
- `https://www.itu.int/rec/dologin_pub.asp?lang=e&id=T-REC-G.8272-202507-I!!PDF-E&type=items` — **200, full text.** THIS ROUTE WORKS and the next reader should use it: substitute any edition id from the `/rec/T-REC-<n>/en` page.
- `https://www.itu.int/rec/dologin_pub.asp?lang=e&id=T-REC-G.8271.2-202105-I!!PDF-E&type=items` — **200, full text.**
- `https://nvlpubs.nist.gov/nistpubs/SpecialPublications/NIST.SP.1500-08.pdf` — **200, full text, twice.**
- One WebSearch for the two ITU Recommendations returned **only vendor-wiki and standards-reseller pages, no ITU text** — recorded as a low-yield search, **not** a refusal and **not** a route failure. No search in this check was refused by the classifier.

**Not attempted, BUDGET, not route failure:** G.8272.1 (ePRTC) and G.8271.1 at the dologin_pub route that I just proved works; G.8271 (the source of the 1.5 µs end-application limit, and not on V2's list); IEEE C37.118.1 / IEC-IEEE 60255-118-1; IEC/IEEE 61850-9-3; IEEE C37.238; the G.8271.2 Erratum 1 and Amendment 1; the G.8272 Amendment 1. **I record no paywall for the IEEE/IEC documents because I did not test one.**

## BEARING ON THE LEDGER ENTRY

**Sub-claim 4, the classification, in the required words.** Over the instances I actually opened — **ITU-T G.8272/Y.1367 (07/2025), ITU-T G.8271.2/Y.1366.2 (05/2021), NIST SP 1500-08 (2017)** — the premise is **TRUE OVER THE INSTANCES OPENED in its weak form and FALSE in its strong form**, and **UNENUMERATED as a universal**:

- **TRUE over the three opened**: each prints enumerable numeric time-error values at a locatable clause or table — 100 ns / 40 ns at G.8272 clause 6.1; 100 ns, 1100 ns, 1100 ns, 1350 ns, 1350 ns at G.8271.2 clauses 7.1, 7.3.1.1, 7.3.2.1, 7.4.1, 7.4.2; "Better than 1 µs" at NIST SP 1500-08 Table 1.
- **FALSE as "each prints an enumerable numeric max|TE| limit"**, with the counter-instances quoted: G.8272 clause 6.1 says **"accurate to within"** and max|TE| appears only in non-normative Appendix I.3.1; G.8271.2 point C prints **pktSelected2wayTE** and point D prints **max|TEL|** after a 0.1 Hz filter; NIST SP 1500-08 prints a **"Time Accuracy Requirement"** and no error quantity at all.
- **UNENUMERATED over the named set**: I opened none of **G.8272.1, G.8271.1, IEEE C37.118.1 / IEC-IEEE 60255-118-1, IEC/IEEE 61850-9-3, IEEE C37.238.** I write no universal in either direction over them.

**Sub-claim 6, the conjunction.** Clause **(c)** — an application governed by one of these documents — is now **satisfied by documents actually opened, from primary sources, for the first time**: G.8272 governs PRTC-A/PRTC-B equipment at its external interfaces; G.8271.2 governs APTS and PTS Type I packet networks at points A, L, C, D; NIST SP 1500-08 names wide-area applications (Wide Area Protection, Frequency Event Detection, Anti-Islanding, Droop Control, WAPOD), though as defect 11 says it **governs** nothing. **The CONJUNCTION of (a) and (b) and (c) I COULD NOT CHECK**: the brief gives me clause (c) and a gloss of clause (a), but **not the verbatim text of (a) and (b)**, and I will not score a conjunction against a paraphrase. That is a missing input, **not a negative finding**, and it does not license the entry to keep A1's "UNVERIFIED by me" and A2's "satisfied by nothing I opened" as findings about the documents — both were, correctly, **facts about their read levels**, and those read levels have now changed.

**What this does to the ledger entry.** It **narrows C7 and strikes the second ground of the Well-posedness 2/3 score**; it **converts the synchrophasor background claim into a sourced finding that points the other way**; and it **leaves Attack 4 / C4 untouched.**

- **STRIKE** the presupposition's evidence-state clause "ONE family verified and only from a vendor wiki, five unopened". Both halves are now false: G.8271.2 is verified **from the Recommendation**, the wiki is **partly wrong** where it was being relied on (point B for point L, max|TE| for max|TEL|, "fastest" for "selection percentage", "<" for "≤"), and three named documents are open at full text. The Well-posedness score's stated second ground, "five of the six limit-bearing document families are unopened", **should be rewritten or dropped.**
- **NARROW** C7's parenthetical "G.8271.2 carries four limits at four points" to **six clause-numbered limit statements at three valued points in four measurands, with point B carrying no printed value and Type II for further study.** The brief anticipated that "if a Recommendation prints one max|TE| per application rather than four limits at four reference points, C7 weakens". What is printed is **neither**: more statements, fewer points, and **more measurands** than four. On the measurand count, the well-posedness defect gets **worse**, not better — "maximum |time error| delivered to the dependent application" is ambiguous across four distinct quantities, one of them filtered at 0.1 Hz.
- **NARROW, and partly reverse,** C7's "the question fixes no reference point". There is now a **sourced counter in the rule's own document set**: G.8272 clause 6.1 attaches its limit to **a unit's time output**, clause 9 says performance is specified "at the external interfaces of the equipment", and the Recommendation **does not use the term "network reference point"** at all. So for a PRTC application **V2 can be scored per unit without naming a point**, which is the weakening the brief named. The defect survives **only for G.8271.2-governed applications**, where clause 7 and clause 7.3 do fix the limits at points — and there the defect acquires a **new sourced ground** it did not have: the points are fixed by **Figures 1 and 2** and defined textually only in **non-normative Appendix I.**
- **STRIKE the synchrophasor limb as the record framed it, and replace it.** The record's self-flagged background — "THIS IS MY OWN BACKGROUND KNOWLEDGE OF THE TVE-to-time relation, NOT A SOURCE FINDING" — predicted that the power-system half would turn on a TVE figure needing conversion. **In the one synchrophasor-family instance now opened, there is no conversion to make**: NIST SP 1500-08 prints **"Better than 1 µs"** (Table 1, "Time Accuracy Requirement") and **"on the order of 1 µs and better"** (Section II, p. 7), the single TVE occurrence names **no frequency**, and **"convert"/"conversion" and "26 µs" do not occur.** So **limb 2 IS a printed quantity in time units for the power-system half of the frame** — which is the direction the brief said would make the fallback verdict *less* defective, not more. The replacement finding, weaker but sourced: the 1 µs is **NIST's own hedged requirement estimate, not attributed to IEEE C37.118 as that standard's printed limit**, and the standard itself is **still unopened by anybody.** A1's and A2's read levels agreed here only because neither had opened a limit-bearing document — **two readers agreeing from no read is zero supports.**
- **CONVERT to a promotion condition**, and this is the one work item I would carry forward: **open IEC-IEEE 60255-118-1 (or IEEE C37.118.1) and record whether it prints a time limit or only the 1 % TVE criterion.** It is the right **kind** — a normative clause of a synchrophasor standard — it is the last limb where the record's unsourced background is still doing work, and the paywall has never actually been tested. Secondary, and cheap now that the route is proved: **G.8272.1 for the ePRTC figure the wiki could not give**, and **G.8271.1**, each one fetch at `dologin_pub.asp`.
- **UNCHANGED.** Nothing here touches Attack 4, clause C4, the Arbiter Systems document PD0057900A, or the V2 measurand-exemption argument. Those still rest on **one document read by one adversary through a summariser, with two of four load-bearing quotations labelled reconstructions and one trailing clause not served.**
