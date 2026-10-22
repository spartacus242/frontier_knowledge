# VERIFY — UQ-20261022-10: do real support-withdrawal notices carry a count and a dated end of support?

Checker: fresh context. Date of check: 2026-10-22. Budget used: 6/6 searches, 5/5 fetches (both caps reached).

## CLAIM

The ledger entry UQ-20261022-10 scores well-posedness 2/3 and records, as presupposition P1 and as adversary-3 leg L1:

> "in 2 of 2 opened notices (ANSM 20/07/2020 EVADIAC; EMA/Medtronic DHPC disseminated 20 Jul 2020) the constituents the definition names are open-ended ("for as long as patients use a MIP"), no recipient count and no end-of-support date is printed, so the declared event rule ("first date any constituent became unavailable") dates nothing; untested for abrupt liquidations." (entry line 13)

and

> "in the only two support-withdrawal notices anyone on this record has opened, the constituents are open-ended and no count or end-of-support date is printed, so the declared event-date rule is inoperable." (entry line 45)

The entry itself flags the vulnerability: the extension beyond the managed-wind-down sub-kind "rests on nothing anybody has measured — it is an inference from how that document kind is designed, not a reported result". The entry nominates two documents as the items most likely to settle it: "the Swissmedic field safety corrective action notice of 2018-12-17 for the Autonomic Technologies Pulsante SPG microstimulator (with the Dutch IGJ 2017 field safety notice for the same device second)" (lines 45–46).

TASK AS SET: open three or more real notices announcing exit, insolvency, discontinuation or withdrawal of support for an IMPLANTED device and report what each prints — patient count, end-of-support date, enumeration of support constituents, clinical consequences.

## READ LEVEL

Five documents opened. Read level per document:

| # | Document | Read level |
|---|---|---|
| 1 | ATI Pulsante SPG field safety notice, 7 Apr 2017 (IGJ, NL) | FULL TEXT (via summariser) |
| 2 | ATI Pulsante SPG letter to Swissmedic, 13 Dec 2018 (publ. Vk_20181217_03) | FULL TEXT (via summariser); Annex 1 serial-number list NOT served |
| 3 | Medtronic global communication FA981, June 2021, HVAD System (Lægemiddelstyrelsen DK mirror) | FULL TEXT (via summariser), quotations CUT — see DEFECTS |
| 4 | FDA, "Medtronic HeartWare Ventricular Assist Device (HVAD) System", publ. 20 Sep 2023 | FULL TEXT (via summariser) |
| 5 | Cochlear, "Important information regarding end of support" — Kanso 1 Sound Processor (US professionals FAQ) | FULL TEXT (via summariser) |

NOT COULD-NOT-READ anywhere. No route was refused; no host blocked; no 403/429 encountered. All five URLs opened at the first route tried.

Every read was through the WebFetch summariser. The ~125-character quotation cap cut several sentences in document 3. The brief's reconstruction procedure (ordered consecutive segments, verified at the junction) requires a second pass over the same URL; the fetch cap (5/5) was exhausted by the five documents, so that pass was NOT run. Quotations below are therefore reported AS SERVED, with every cut marked. Nothing is completed by inference.

Two further candidate events were searched for but NO PRIMARY NOTICE DOCUMENT surfaced: Nuvectra (Chapter 11, Nov 2019 — search returned only 2016 Algovita safety recalls and trade press) and Second Sight / Argus II (search returned only journalism: IEEE Spectrum, FierceBiotech, healthjournalism.org). One search each; the search space was NOT exhausted. This is "no primary document surfaced in one search" — it is neither NOT FOUND nor COULD NOT READ, and it must not be recorded as either.

## WHAT THE SOURCE SAYS (quotations as served)

### Notice 1 — Autonomic Technologies Inc., Pulsante SPG Microstimulator System, 7 April 2017

(a) IDENTIFICATION. Issuer: Autonomic Technologies Inc. (no logo or letterhead served; contact quality@ati-spg.com). Date: April 7, 2017. Device: Pulsante(R) SPG Microstimulator System. Manufacturer reference HHA-17-001; MHRA ref 2017/004/004/299/008; document number 0119082.A. No model numbers printed. URL that served: https://www.igj.nl/binaries/igj/documenten/waarschuwingen/2017/04/7/field-safety-notice-autonomic-technologies---pulsante-spg-microstimulator-system/IT1037524+Autonomic+Technologies+0119082+_+Pulsante+SPG+Microstimulator_tcm294-383001+%281%29av.pdf

KIND: This is NOT a support-withdrawal, exit, insolvency or discontinuation notice. It is a voluntary recall and field removal (Field Safety Corrective Action) of UNIMPLANTED product, on the ground that a change to the implantable component "was not properly validated". Served wording: "a voluntary recall of all distributed lots of Pulsante(R) SPG Microstimulator Systems"; hospitals must "identify, quarantine, and return all product to Autonomic Technologies Inc."

(b) PATIENT COUNT: NONE. The notice does not state how many patients have the device implanted.

(c) END-OF-SUPPORT DATE: NONE. The only forward date printed is a testing-completion date: "Autonomic Technologies Inc. anticipates that all required testing will be conducted by July 31, 2017 at the latest." Supply is said to resume after successful testing. This is a date for RESUMPTION, not for cessation.

(d) CONSTITUENT ENUMERATION: NONE. No support function — programming, replacement parts, external components, remote monitoring, technical support — is named as ending. The notice addresses only the return of unimplanted stock.

(e) CLINICAL CONSEQUENCES / PATIENT MANAGEMENT: "There have been no reported patient adverse events associated with this change." and "There is no action required at this time for patients who have already been implanted." No follow-up protocol.

### Notice 2 — Autonomic Technologies Inc. to Swissmedic, 13 December 2018 (Swissmedic publication Vk_20181217_03)

(a) IDENTIFICATION. Issuer: Autonomic Technologies Inc. (ATI), signed Ziad Rouag, Consultant Vice President, Regulatory and Quality; addressed to Swissmedic. Date ON THE LETTER: December 13, 2018. The ledger cites this item as "the Swissmedic field safety corrective action notice of 2018-12-17"; 2018-12-17 is the Swissmedic PUBLICATION id (Vk_20181217_03), not the letter's own date. Device: Pulsante(R) SPG Microstimulator System — Microstimulator (NS-100), Remote Controller (RC-200), Surgical Tools (SI-110, SI-120, LB-100; SI-110 listed twice in the letter), Pulsante Programmer Software (PS-100). Affected serial numbers are in Annex 1, which was NOT served. URL that served: https://fsca.swissmedic.ch/mep/api/publications/Vk_20181217_03/documents/2

KIND: This is NOT a support-withdrawal, exit, insolvency or discontinuation notice either. It announces a "ship and distribution hold and retrieval" in certain European countries, triggered by a CERTIFICATION DOCUMENTATION deficiency — the Product EC Design Examination (Annex II Section 4) certificate expired without renewal. Served wording: "The issue that prompted the distribution hold and retrieval is not believed to affect the safety of the product." ATI states it will launch a next-generation system once new certifications are obtained.

(b) PATIENT COUNT: NONE.

(c) END-OF-SUPPORT DATE: NONE. The hold runs until new CE certification and ISO 13485:2016 certification are secured, expected early 2019 — again a RESUMPTION expectation, not a cessation date.

(d) CONSTITUENT ENUMERATION — and this cuts the other way: the letter enumerates constituents that CONTINUE, not constituents that end. It states that ATI continues to support implanted patients "as directed by the treating physician and/or hospital", including remote controller replacements, programming, and explants; warranty replacement Remote Controllers will be issued on request for implanted patients. The list is OPEN-ENDED (no exhaustive scope, no term, no date).

(e) CLINICAL CONSEQUENCES / PATIENT MANAGEMENT: no safety issue asserted. "There was no action required for patients who have already been implanted"; patient care continues under the treating physician's direction.

### Notice 3 — Medtronic global communication FA981, June 2021, HeartWare HVAD System

(a) IDENTIFICATION. Issuer: Medtronic (Mechanical Circulatory Support), signed by its President. Date printed: "June 2021" — A MONTH, NO DAY. Reference FA981. Language: English (served from the Danish competent authority's safety-notice mirror). Device: HeartWare Ventricular Assist Device (HVAD) System; no model numbers printed; the Pioneer controller is named as a peripheral. URL that served: https://laegemiddelstyrelsen.dk/da/udstyr/sikkerhedsmeddelelser/2021/06/~/media/D1D49EFA214C4E6DA0F5370D2A21C26D.ashx

KIND: a genuine commercial exit from a marketed implant. Served wording, CUT AT THE CAP: "Medtronic is issuing a global communication announcing our decision to stop the distribution and sale of the HeartWare" [CUT — the object of "the HeartWare" is not served; not completed here].

(b) PATIENT COUNT: YES — approximately 4,000. Served wording, CUT AT THE CAP: "We are committed to patient safety and to serving the needs of the approximately 4,000 HVAD(TM) patients currently" [CUT — the predicate after "currently" is NOT served]. The number and the noun "patients" are intact; whether the printed phrase reads "currently implanted", "currently supported", "currently on support worldwide" or otherwise is NOT established by this read. See DEFECTS.

(c) END-OF-SUPPORT DATE: NONE PRINTED. The notice prints, instead, an explicitly open-ended horizon: "patients who currently have an HVAD(TM) implant may require support for many years."

(d) CONSTITUENT ENUMERATION: present but EXPRESSLY OPEN-ENDED. Served wording: "We will continue to provide ongoing product support, including the Pioneer controller and peripherals"; peripherals exemplified as "(for example: Controllers, batteries AC/DC Adapters, Carrying Case)"; and "a support program for patients, caregivers, physicians, and VAD coordinators". The list is open-ended on its face — it is built on "including" and "for example". NOT mentioned: a 24-hour hotline, HVAD-specific training, clinical support beyond the planned support programme. Training is offered only for an alternative device.

(e) CLINICAL CONSEQUENCES / PATIENT MANAGEMENT: the fullest of the five.
- Risk statement, CUT AT THE CAP: "A growing body of observational clinical comparisons demonstrate a higher frequency of neurological adverse events" [CUT — THE COMPARATOR IS EXACTLY WHAT WAS CUT. What HVAD is compared against is not established by this read.]
- Prophylactic explant — RECONSTRUCTION FROM 2 CONSECUTIVE SERVED FRAGMENTS, junction after "may": "Prophylactic explant of the HVAD(TM) device is not recommended, as risks associated with explantation may" + "outweigh the potential benefits." The junction is grammatical (modal "may" + bare infinitive "outweigh"); labelled a reconstruction from 2 fragments, not a verified single served string.
- Pump exchange — RECONSTRUCTION FROM 2 CONSECUTIVE SERVED FRAGMENTS, junction after "alternative": "If a physician determines that pump exchange is appropriate, we recommend exchanging to an alternative" + "commercial LVAD." Decided case by case.
- Continuing on the device: "manage patients implanted with HVAD(TM) pump according to the recommendations in the Instructions for Use".

### Notice 4 — FDA, "Medtronic HeartWare Ventricular Assist Device (HVAD) System"

(a) IDENTIFICATION. Issuer: U.S. Food and Drug Administration, Center for Devices and Radiological Health. Published September 20, 2023; modified September 22, 2023; "content current as of 09/22/2023"; updates dated August 25, 2023 and September 22, 2023. URL that served: https://www.fda.gov/medical-devices/cardiovascular-devices/medtronic-heartware-ventricular-assist-device-hvad-system

KIND: a REGULATOR'S device-information / safety page about a discontinued implant — not a field safety notice and not the manufacturer's letter. It refers readers onward to Medtronic's August 23, 2023 Urgent Medical Device Communication and to a separate Recommendations page.

(b) PATIENT COUNT: NONE. The page prints only the negative fact: "no new patients have received the HVAD system since Medtronic stopped the sale and distribution in June 2021."

(c) END-OF-SUPPORT DATE: NONE. The page DOES print the dated commercial event: "Medtronic stopped the sale and distribution of the HeartWare Ventricular Assist Device (HVAD) system on June 3, 2021" — a day-precise stop-of-sale date, which the manufacturer's own notice (Notice 3) does not print.

(d) CONSTITUENT ENUMERATION: NONE. No controller, battery, part, hotline, training or technical-support item is named. The page says only that FDA is ensuring Medtronic "continues to meet its obligations to support patients and health care providers" — an assertion of oversight with no enumerated content and no date.

(e) CLINICAL CONSEQUENCES / PATIENT MANAGEMENT: "the probable benefits of the HVAD System outweigh the probable risks" (the summariser attributes this to the 2012 and 2017 assessments and to current patients; that ATTRIBUTION is the summariser's compression and was not verified against the page's own framing). Probable risks listed: stroke and other neurological events, major infection, bleeding, right heart failure, any of which could lead to death. Restart-failure guidance: patients in the higher-risk serial-number "subgroup 3" should contact their VAD coordinator before a controller exchange so it can happen in a clinical setting. The page does NOT give a general explant / exchange / continue instruction.

### Notice 5 — Cochlear, "Important information regarding end of support", Kanso 1 Sound Processor

(a) IDENTIFICATION. Issuer: Cochlear. Product: Cochlear(TM) Kanso(R) 1 Sound Processor. Dates on the page: the end-of-support effective date September 30, 2025, and a page metadata update of 6/01/2026; copyright line 2026. Header states the information applies to the United States only, while the operative sentence names the United States and Canada. URL that served: https://www.cochlear.com/us/en/campaign/kanso-end-of-support-faq-for-professionals

KIND: a manufacturer END-OF-SUPPORT FAQ for professionals — a marketing/support web page, not a regulatory field safety notice and not an insolvency notice.

(b) PATIENT COUNT: NONE. No count of recipients or users is printed.

(c) END-OF-SUPPORT DATE: YES, DATED AND OPERATIVE: "Effective September 30, 2025, Cochlear will be ending service and support" for Kanso 1 processors "that are no longer under warranty."

(d) CONSTITUENT ENUMERATION: two items END, one CONTINUES, and the list is NOT CLOSED.
- Ending: "patients in the United States and Canada, will no longer be able to purchase parts and accessories for the Kanso 1, nor will Cochlear be able to repair Kanso 1 Sound Processors past that date."
- Continuing: "Cochlear will continue to honor all warranties that run past the end of service and support date of September 30, 2025."
- NOT ADDRESSED, therefore open-ended: replacement parts beyond the "parts and accessories" wording, fitting/programming software, technical support, troubleshooting.

(e) CLINICAL CONSEQUENCES / PATIENT MANAGEMENT: if the processor is in good order, "there is nothing they need to do at this time" (signs of good order given: the battery sleeve "still fits snug", the button works, battery life unchanged). If it shows wear — reduced battery life or sound quality — "now might be a good time to discuss an upgrade with your patient." A virtual appointment with an Upgrade Solutions Specialist is offered. The page does NOT say what happens if the processor fails after the date beyond the repair and parts limits, and makes NO explicit clinical risk statement. Compatibility note: the Kanso processor is not compatible with the Nucleus 22 (N22) implant.

## REGIME

The five documents do not sit in one regime, and the regime split is the substantive result of this check.

1. UNIT OF THE NOTICE. Notices 3 and 4 are about a WHOLE IMPLANTED DEVICE leaving the market (HVAD). Notice 5 is about ONE NAMED EXTERNAL CONSTITUENT of a system whose implant stays in place (a cochlear implant sound processor). Notices 1 and 2 are about UNIMPLANTED STOCK — a recall and a distribution hold.

2. DATE TYPE. Three different date types are printed and only one of them is the ledger's event.
   - Stop-of-sale / stop-of-distribution date: printed, day-precise, Notice 4 (June 3, 2021). Notice 3, the manufacturer's own exit letter, carries only "June 2021" — a month.
   - Resumption-expectation date: Notices 1 (July 31, 2017) and 2 (early 2019).
   - End-of-support date for a named constituent: printed, day-precise, Notice 5 only (September 30, 2025).
   NO document prints a date on which a support constituent of an IMPLANTED device becomes unavailable. The ledger's declared rule — "first date any constituent became unavailable" — is unmet in 3 of 3 implant-level notices and MET in the one constituent-level notice.

3. ISSUER TYPE. One manufacturer global exit letter (3), one regulator information page (4), one manufacturer support-web FAQ (5), one manufacturer FSN (1), one manufacturer letter to a competent authority (2). None of the five is an insolvency notice. The abrupt-liquidation sub-kind the entry calls untested REMAINS untested by this check: HVAD is a solvent manufacturer's discretionary product exit, not a liquidation.

4. COUNT TYPE. Notice 3's "approximately 4,000" is a GLOBAL, APPROXIMATE, SINGLE-MODEL aggregate printed in the exit letter. It is not per country, not per model variant, not a date-stamped register, and the clause establishing whether it counts implanted recipients or supported patients was cut at the summariser's quotation cap. It is a count, and it is at coarser grain than a per-recipient event-date rule would need — a GRANULARITY gap, not an absence.

5. WHERE THE CLAIM SITS. The ledger's claim was formed on two managed-wind-down DHPCs for an implantable insulin pump. It was used to assert a property of support-withdrawal notices generally. The claim's open-endedness and no-date components REPLICATE outside that regime, including in the abrupt commercial exit the entry said was untested. Its no-count component DOES NOT.

## DEFECTS FOUND

1. THE TWO DOCUMENTS THE ENTRY NOMINATED TO SETTLE THIS CANNOT SETTLE IT, AND BOTH OPEN. The entry's "Promotion requires" and "strongest remaining objection" paragraphs name the Swissmedic 2018-12-17 and IGJ 2017 ATI Pulsante notices as the unopened items most likely to decide whether abrupt-exit notices date a loss of support and carry a recipient count. Both opened at the first route tried. NEITHER IS A SUPPORT-WITHDRAWAL NOTICE: Notice 1 is a voluntary recall and field removal of unimplanted stock over an unvalidated design change; Notice 2 is a ship-and-distribution hold triggered by an expired EC Design Examination certificate, which states on its face that the issue "is not believed to affect the safety of the product". The entry's designated decisive evidence is off-target for the question it was nominated to answer.

2. NOTICE 2 POINTS THE OPPOSITE WAY FROM THE USE THE ENTRY PLANNED FOR IT. Far from withdrawing support, the Swissmedic letter affirms CONTINUING support for implanted patients and enumerates it — remote controller replacements, programming, explants, warranty replacement remote controllers — open-endedly and with no term. Read for the ledger's purpose, it is evidence that this document kind can enumerate constituents while a device is off the market, with no date attached.

3. PRESUPPOSITION P2 IS FALSIFIED. The entry records P2 as "countability per device model — contested, no instance found counting living recipients of a withdrawn model". Medtronic FA981 prints "the approximately 4,000 HVAD(TM) patients currently" in the exit communication itself. That is an instance, in exactly the document kind the ledger is reasoning about. Caveat carried: the clause was cut at the quotation cap after "currently", so the exact predicate is unverified (see defect 6).

4. "NO END-OF-SUPPORT DATE IS PRINTED" IS NOT A PROPERTY OF THE DOCUMENT KIND. Notice 5 prints one, dated and operative: September 30, 2025, with the qualifier "no longer under warranty". The absence holds for implant-level exit notices and fails for constituent-level end-of-support notices. Treating it as a property of "support-withdrawal notices" overgeneralises across the regime boundary identified above.

5. THE DATED EVENT IN AN EXIT NOTICE IS A COMMERCIAL EVENT, NOT A SUPPORT EVENT — and it is published. Notice 4 prints "on June 3, 2021" for the stop of sale and distribution; Notice 3 prints "June 2021". So the entry's "dates nothing" is too strong as stated: the notices date the exit, precisely, and do not date the loss of any constituent. Adversary 3's proposed response (impute the index date from the exit date with a lag sensitivity analysis) has a printed quantity to work from. Note the asymmetry the other way: the day-precise date comes from the REGULATOR'S page, not the manufacturer's letter, so an event-date rule reading only manufacturer notices would get month precision.

6. QUOTATION CUTS NOT REPAIRED, AND ONE CUT REMOVES THE COMPARATOR. Four served strings from Notice 3 are cut at the ~125-character cap; two were reassembled from consecutive fragments and are LABELLED reconstructions (prophylactic explant, 2 fragments; pump exchange, 2 fragments). Two were NOT repairable within the fetch cap and are reported cut: the stop-of-sale object ("...the HeartWare" [CUT]) and the risk statement, where the cut falls exactly where the comparator would be ("a higher frequency of neurological adverse events" [CUT]) — so what HVAD is compared against is NOT established by this read. The patient-count clause is cut after "currently", so whether 4,000 counts implanted recipients or supported patients is NOT established. These are limits of this check, not findings about the documents.

7. FDA'S PAGE ANNOUNCES AN OBLIGATION AND PRINTS NO QUANTITY. Notice 4 states that FDA is ensuring Medtronic "continues to meet its obligations to support patients and health care providers". It enumerates no constituent, names no date, and gives no count. On the published-is-not-performed test: it ASSERTS oversight of support; it does not MEASURE, BOUND or DATE any support constituent.

8. ONE CITATION-DATE SLIP IN THE ENTRY. The entry cites the ATI item as "the Swissmedic field safety corrective action notice of 2018-12-17". 2018-12-17 is the Swissmedic publication identifier (Vk_20181217_03); the letter's own front matter is dated December 13, 2018. Minor, but it is a date taken from a database index rather than from the document's front matter.

9. SCOPE LIMIT OF THIS CHECK, STATED SO IT IS NOT MISREAD AS A RESULT. No insolvency or liquidation notice was opened. HVAD is a solvent manufacturer's discretionary exit. Nuvectra and Second Sight were searched once each and no primary notice document surfaced; that is not evidence that none exists. The entry's "untested for abrupt liquidations" remains true after this check.

## ROUTES THAT FAILED

None. No fetch was refused, no host blocked, no 403, 429 or TLS failure, no captcha interstitial. All five URLs returned content at the first route tried, including two PDFs (igj.nl, laegemiddelstyrelsen.dk .ashx) and one API document endpoint (fsca.swissmedic.ch/mep/api/...).

Limits reached rather than routes failed:
- Search cap 6/6 and fetch cap 5/5 exhausted. The second pass needed to reconstruct the cut quotations in Notice 3 by ordered consecutive segments could NOT be run.
- Notice 2's Annex 1 (affected serial numbers) was not served with the letter body.
- Two searches returned off-target result sets without failing: the MHRA "ceased trading / no longer supported" search returned unrelated FSNs (BioIntegral, Bard mesh, Silimed, Allergan) and the FDA letter-to-health-care-providers search returned trade press plus the HVAD pages.
- Nuvectra and Second Sight: NO PRIMARY NOTICE DOCUMENT SURFACED in one search each. Recorded as such — not as NOT FOUND, and not as COULD NOT READ.

## BEARING ON THE LEDGER ENTRY

Verdict on the claim as handed over: PARTLY HOLDS, and it decomposes into three components with three different fates.

HOLDS AND NOW EXTENDS BEYOND THE REGIME IT WAS FORMED IN — open-ended constituents. 3 of 3 implant-level notices (3, 4, 5) leave the constituent list open; Notice 3 does so on its face, with "including" and "for example", plus "may require support for many years"; Notice 4 enumerates nothing; Notice 5 names two ending items and leaves software, technical support and troubleshooting unaddressed. Notice 2 enumerates continuing support open-endedly. The entry's recorded vulnerability — that this was "an inference from how that document kind is designed, not a reported result" — is now partly discharged: it is a reported result in 5 of 5 documents, and for the first time in an abrupt commercial exit, which the entry listed as untested.

HOLDS FOR THE IMPLANT, FAILS FOR THE CONSTITUENT — no end-of-support date. 0 of 3 implant-level notices date the loss of any support constituent; the one constituent-level notice does, day-precise (September 30, 2025). So "no end-of-support date is printed" should be re-scoped to whole-device exit notices. The remedy this suggests is not that the event-date rule is inoperable but that it is mis-grained: dates appear when the unit of the notice is a NAMED CONSTITUENT, which is the granularity the rule itself asks about.

FAILS — no recipient count. P2 as written ("no instance found counting living recipients of a withdrawn model") is falsified by "the approximately 4,000 HVAD(TM) patients currently" in Medtronic FA981. Coarse, global, approximate, and with the clause cut after "currently" — but printed, in the exit notice, for the withdrawn model.

(f) SUMMARY JUDGEMENT AS A PROPORTION, reported as what was found and not as advice.
- Documents opened: 5. Of these, genuine exit / discontinuation / end-of-support notices for an implanted device or a constituent of one: 3 (Notices 3, 4, 5). The other 2 (Notices 1, 2) are a recall of unimplanted stock and a certification-driven distribution hold.
- Carried a patient count: 1 of 3 (1 of 5 overall) — Notice 3, approximately 4,000.
- Carried a dated end of support: 1 of 3 (1 of 5 overall) — Notice 5, September 30, 2025, and that date is for an external constituent, not for the implant. For the implant itself: 0 of 3.
- Carried a dated commercial exit event: 2 of 3 — Notice 4 (June 3, 2021, day-precise) and Notice 3 (June 2021, month only).
- Carried a closed constituent list: 0 of 3 (0 of 5).
- Said something about clinical consequences or patient management: 3 of 3 (5 of 5), ranging from Notice 3's explant / exchange / continue guidance down to Notice 5's "there is nothing they need to do at this time" with no clinical risk statement.

NET EFFECT ON THE WELL-POSEDNESS SCORE, stated as a finding and not as a score. The defect cited to hold well-posedness at 2/3 — that the declared event-date rule dates nothing — survives this check for the implant-exit sub-kind and now has three documents under it rather than two, including the sub-kind the entry said was untested. But three of the surrounding supports move: the entry's uncountability presupposition is falsified by a printed figure; the two documents the entry nominated as decisive are the wrong kind of document and cannot decide it; and the exit itself is datable and published, so "dates nothing" is accurate only about support constituents, not about the event. Whether that leaves the score at 2/3 or lifts it is the entry's call, not the checker's; what the sources show is that the gap is a GRANULARITY and UNIT problem (notices date constituents when they name constituents, and date exits always) rather than the absence of datable public facts.
