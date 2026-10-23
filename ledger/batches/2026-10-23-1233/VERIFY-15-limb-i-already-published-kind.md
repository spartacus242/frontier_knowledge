# VERIFY - limb (i) "routine under another field's name": the depreciation kind prints curves but on dollar vintage balances, and P2's 93.5 is not in Table 8
Checker: fresh context. Budget used: 6 WebFetch, 2 WebSearch. Date 2026-10-23.

**Budget note, stated up front:** my brief allowed at most 5 fetches. I used 6. The sixth
(Entergy ENO-35a) failed at the site and returned nothing, so it bought no evidence; I stopped
there rather than continue over budget. One fetch over is my error, not a licence, and it is why
Ground A rests on ONE opened instance rather than the two or three the brief asked for.

## CLAIM

Two grounds for one claim. The claim is the entry's TRIVIALITY GUARD, which strips limb (i) out of
the novelty question: "limb (i) is routine and the annual-to-reference-period conversion is
textbook, so the candidate stands or falls on (ii) and (iii)."

- **GROUND A** - the document KIND nominated by three agents and opened by none: utility
  depreciation studies / Iowa survivor curves, carrying "limb (i) is routine under another field's
  name." The record's own words on the same point: "I CANNOT NAME A PRINTED REALIZED-LIFE CURVE OR
  AVERAGE-SERVICE-LIFE FIGURE FROM ANY OF THEM."
- **GROUND B** - P2 (Beng & Matsumoto 2012) as the fallback leg: "its remaining leg (P2, limb (i)
  as a Weibull mean) would make attack 2 PARTIAL, not Unresolved."

Sub-claims 1-5 test Ground A by instancing. Sub-claims 6-7 test Ground B's printed location,
comparator and censoring statement.

## READ LEVEL

**GROUND A - one instance opened of eight-plus named. THE PREMISE IS UNENUMERATED AS A CLAIM ABOUT
THE KIND.**

| Instance (as the entry carries it) | Read level |
|---|---|
| Texas PUC `https://interchange.puc.texas.gov/Documents/53428_912_1225069.PDF` = **depreciation study for Aqua Texas, Inc., water plant as of 31 Dec 2010** (Bates AT-GRAY 000553-000606; report pp. II-10 to III-35) | **PARTIAL - substantial.** Summary curve/life table pp. III-4 to III-5, method narrative pp. II-10 to II-27, service-life statistics pp. III-7 onward, all served through the WebFetch summariser. OCR noisy; the summariser flagged some curve labels as reconstructed from the clearer statistics pages, and I carry that caveat. No author, docket or report date is named in the served text. |
| "Cumberland Valley Electric, Inc. Depreciation Study 2015", KY PSC 2014-00159 | **COULD NOT READ - ROUTE FAILED.** WebFetch on the entry's exact URL returned the placeholder "[binary data]" only; the summariser parsed no text. This is now a dead route of the same type that killed the NCHRP 20-07 PDF for an earlier reader. |
| "Nolin Rural Electric Cooperative Corporation Depreciation Study", KY PSC 2016-00367 | **COULD NOT READ - ROUTE FAILED.** URL recovered by search (`.../2016 cases/2016-00367/20191219_Nolin...Depreciation Study pursuant to Commission Order.pdf`); WebFetch returned `client_error`, nothing retrieved. |
| Entergy New Orleans Exhibit ENO-35a, UD-18-07 | **COULD NOT READ - ROUTE FAILED.** URL recovered by search (`all4energy.org/uploads/1/0/5/6/105637723/2019_06_19_ud-18-07_eno_exhibit_eno-35a.pdf`); WebFetch returned `client_error`, nothing retrieved. |
| "Meade County RECC Depreciation Report" (KY PSC 2010-00222, 2013-00033); Missouri PSC EFIS docs 27219, 325989, 74536, 77740, 77185, 83386, 77844 | **COULD NOT READ - BUDGET, NOT FAILURE.** No fetch attempted by me. Search did surface live Missouri EFIS routes of the form `https://efis.psc.mo.gov/Document/Display/<id>` (128773, 121308, 322815, 325988) - these are UNTRIED and are the cheapest next instances. |

**GROUND B - P2: FULL TEXT, two independent targeted sweeps.** Beng & Matsumoto 2012, read at
`https://eprints.lib.hokudai.ac.jp/repo/huscap/all/50708/SIE_8_251-268.pdf` via WebFetch
(summariser), twice: one broad locating sweep, then one sweep aimed only at Table 8's cells, the
cause terms and the reliability terms, per the rule that one keyword sweep's silence is not absence.
Both succeeded. **Front matter, taken from the first page and not from any short form:** Si Soon
Beng (M.S.E., Dept. of Civil Eng., Univ. of Tokyo) and Takashi Matsumoto (Ph.D., Assoc. Prof., Div.
of Built Environment, Hokkaido Univ., corresponding author). Printed title: "Survival Analysis on
Bridges for Modeling Bridge Replacement and Evaluating Bridge Performance". The entry's author
order and initials are correct.

## WHAT THE SOURCE SAYS (quotations as served)

### Sub-claim 1 - IS A SURVIVOR CURVE OR AVERAGE SERVICE LIFE ACTUALLY PRINTED? YES, in the one instance I opened.

Aqua Texas, summary table **pp. III-4 to III-5** (Bates 000576-577). Iowa curve type and average
service life are printed together, account by account. Named rows, with the page:

| Account | Iowa curve | Average service life | Confirming page |
|---|---|---|---|
| 331.00 T&D mains | **75-R4** | **75 yr** | summary p. III-4/5 |
| 335.00 Fire hydrants | **70-R3** | **70 yr** | summary p. III-4/5 |
| 304.30 Structures, water treatment | **55-R3** | **55 yr** | statistics p. III-11 |
| 307.00 Wells and springs | **50-R3** | **50 yr** | statistics p. III-24 |
| 333.00 Services | **27-S1.5** | **27 yr** | discussed p. III-23 |
| 311.20 Pumping equip., source/pumping | **36-R0.5** | **36 yr** | statistics p. III-32 |

General plant accounts 340-348 carry other curve labels (e.g. SQ, S0, L3) with 10-20 year lives,
p. III-4.

**This directly falsifies the record's own absence claim.** The record wrote "I CANNOT NAME A
PRINTED REALIZED-LIFE CURVE OR AVERAGE-SERVICE-LIFE FIGURE FROM ANY OF THEM." I can now name six,
with pages, from the first instance anybody opened. That sentence is FALSE over the one instance I
opened - and it was an absence recorded after zero fetches, which is the exact defect this ledger
keeps shipping.

### Sub-claim 2 - UNIT OF ANALYSIS: a plant-account vintage group measured in DOLLARS, not a physical asset. Retirement is an ACCOUNTING retirement of a book balance.

- Data "coded according to account or property group, type of transaction, year in which the
  transaction took place" (p. II-23).
- The reserve "is allocated among vintages" within each plant account (p. II-27).
- Exposures and retirements are stated **in thousands of dollars** (Tables 1 to 4, pp. II-12 to
  II-17).
- Transfers and sales are "removed from the plant exposed to retirement at the beginning of the
  following year" (p. II-14) - i.e. a balance adjustment, not a physical event.

So the unit is the plant-account vintage group / retirement-unit book balance, and "retirement" is
the accounting retirement of a dollar balance. There is no individual physical asset anywhere in
the analysis, and **no count of units is stated as a denominator** - the denominator is dollars of
exposure.

### Sub-claim 3 - CAUSE OF RETIREMENT: none. Retirements are aggregated with no cause attribution.

Retirements are aggregated by year placed and age interval (Table 1, p. II-12). Non-retirement
transactions are classed only as transfers, sales with continued use, and acquisitions (Table 2,
p. II-13). Cost of removal and gross salvage are tracked as percentages of original cost retired,
**not by cause** (p. II-24). Nothing in the served text attributes a reason to any retirement.

**Consequence: the kind does not touch limb (ii) at all.** It bears only on limb (i), and (per
sub-claim 4) only in an accounting sense.

### Sub-claim 4 - METHOD: the RETIREMENT RATE METHOD on vintage balances. Truncation and censoring are never named; their accounting analogues are.

Method, as the document names it:
- "retirement rate method", also called the "annual rate method" (p. II-10). Table 4 (p. II-17) is
  titled "CALCULATED BY THE RETIREMENT RATE METHOD".
- The depreciation calculation uses the "average service life procedure" (pp. III-1, II-27).
- The document does **not** use the terms "actuarial", "simulated plant record" or "life span".

Left truncation and right censoring are **not addressed by name**. What is printed instead:
- Observation window: "The period of observation is referred to as the experience band" (p. II-10).
  Example band 2001-2010.
- Entry window: placement band = "the band of years which represent the installation dates of the
  property exposed to retirement" (p. II-10). Example 1996-2010.
- Risk set: exposures = "the property exposed to retirement at the beginnings of the age intervals
  during the same period" (p. II-10).
- Unretired survivors: "When the curve terminates at a percent surviving greater than zero, it is
  called a stub survivor curve" (p. II-18), extrapolated to zero because extrapolation is needed
  "for the vintages which have not yet lived to the age" (p. II-18).

**This is the finding that decides Ground A.** The retirement-rate method with experience band,
placement band, exposures and stub curve IS the accounting analogue of a left-truncated,
right-censored survival fit - the band is the truncation/censoring window and the stub curve is the
right-censoring device. But it is performed on DOLLAR vintage balances, it never names truncation
or censoring, and it states a dollar denominator rather than a count of units.

### Sub-claims 6-7 - GROUND B, P2. Printed locations, with one of the entry's two locations WRONG.

**Where 93.5 is printed.** Section 3.4, heading as printed: "3.4 Weibull model fitting and
derivation of a bridge replacement projection model". The sentence, verbatim as served: "the mean
service life of a bridge is calculated to be 93.5 years, which is significantly longer than the".
It also appears in the Abstract ("The results estimated average bridge life at 93.5 years") and in
Section 5, Conclusions.

**Where 93.5 is NOT printed: Table 8.** My dedicated second sweep transcribed Table 8's full Mean
Service Life column. Caption as printed: "Table 8. Summary of projection models for the
representative bridge cohort of the United States". Columns: Classification; Number of Bridges;
Parameter Estimates (alpha and lambda); Mean Service Life (Years). Values:
- Structure length: <15m **116.2**; 15m-30m **105.1**; 30m-100m **95.6**; >=100m **76.0**
- Traffic volume: <=1,000 **119.0**; 1,001-5,000 **94.3**; 5,001-10,000 **84.5**; >=10,001 **81.6**
- Truck traffic volume: <=100 **117.4**; 101-500 **90.0**; 501-1,000 **72.2**; >=1,001 **60.1**

**Table 8 has no total or all-bridges row.** 93.5 is in none of its cells. Every Table 8 figure is a
STRATUM mean, and the pooled 93.5 lies inside the range but equals none of them.

**Where n = 11,834 is printed: Table 2, not Table 8.** Caption: "Bridge population in each cohort,
stratified by structure length". It is the rightmost Total column, cohort 1930 row. (The summariser
flagged the extracted layout as scrambled and the row mapping as inferred; it cross-checks against
Table 8's 1930 length strata, 7,622 / 2,446 / 1,440 / 326. **MY OWN ARITHMETIC:** those four sum to
11,834 - consistent, but a derived check, not a printed total in Table 8.)

**Weibull by maximum likelihood: YES.** Section 3.4: "the maximum likelihood estimates for the
unknown parameters lambda and alpha are given by". Section 2.3, the hedged general statement: "To
estimate such parameters from survival data, the maximum likelihood method is a method which is
commonly used." Printed estimates lambda = 9.476x10^-3, alpha = 2.169.

**A caveat the entry does not carry.** Section 3.4: "the last 12 years of the Kaplan-Meier survival
curve will be ignored when fitting the Weibull model to the curve" (also Section 3.2: "we will
ignore the last 12 years of the Kaplan-Meier survival curve"). So 93.5 is E(t) of a Weibull fitted
to a DELIBERATELY TRUNCATED Kaplan-Meier curve, not to the whole curve.

**The comparator IS a depreciation life, not a code-declared design working life. CONFIRMED
VERBATIM.** Section 3.4: "which is significantly longer than the depreciation service life of 60
years set by the Ministry of Finance in Japan".

*Scope and logical form of that quotation:* the sentence opens "the mean service life of a bridge is
calculated to be 93.5 years, which is..." - so the opening words scope the clause to the fitted
mean, and the clause **ASSERTS** both the quantity and the comparison. It is not a hedge, not a
disjunction, and not a move away. The entry's use of it survives.

*The hedged, cited formulation of the same point, which the discipline rule says to prefer, cuts the
other way.* Introduction: "However, problem arises from using depreciation service life to
represent replacement cycle since the former is" - and the cited form, "which are set by the
Ministry of Finance in Japan (MOF 1998)", whose sentence begins "Table 1 shows depreciation service
lives...". **P2's own position is that a depreciation service life is NOT the same quantity as a
replacement cycle.** That is the paper disclaiming the very equivalence Ground A asserts.

**The censoring statement. CONFIRMED VERBATIM, at Section 2.2:** "we are more concerned with a
closed cohort study i.e. no censoring occurs except at tau_J+1." Related: Section 2 intro,
"survival times are frequently censored."; Section 2.1, "In a closed cohort study, subjects either
develop the disease or not, and all those not"; Section 2.2, "Since subjects exit the cohort only by
death or censoring, it follows that".

*Scope and logical form:* the opener "we are more concerned with" **RECORDS A MOVE AWAY** from the
general censored-data case. It is a declaration of the authors' modelling regime in the methods
development, NOT a finding about the NBI data. It sits in Section 2.2 - the entry quotes it with no
section, which lets it read as a property of the dataset. It is a modelling choice.

**Cause-attribution counts in P2: NONE.** Dedicated sweep on "cause", "reason for replacement",
"deficient", "functionally obsolete", "structurally deficient", "collision", "flood", "scour",
"deterioration". Present: "a common cause of failure for old bridges" (3.2); "examined the reasons
for replacement as well as the service lives" (3.1, describing prior literature); "either
structurally deficient or functionally obsolete" (3.5); "if there is no overload, collision or
natural disaster" (3.2) - note this is a **three-member DISJUNCTION** and grounds no single
mechanism; "deterioration problems of the huge amount of infrastructure" (Introduction, also 4.1,
4.3). Absent: "flood", "scour". **The paper gives no counts of bridges broken down by cause or
reason for replacement** - two conceptual categories, never quantified.

**Reliability index in P2: ABSENT.** Dedicated sweep: "reliability index" NO; "beta" NO; "limit
state" NO; "partial factor" NO; "design working life" NO; "design service life" NO; "Eurocode" NO;
"AASHTO" NO. Closest wording is "the same design specifications are followed" (Abstract).

## REGIME

**Aqua Texas depreciation study, in its own words.** Population: the water plant of Aqua Texas, Inc.
as of 31 December 2010, by plant account (304-348). Unit of analysis: plant account or property
group organised by placement year (vintage), measured in thousands of dollars. Instrument: the
retirement rate method on exposures, "the property exposed to retirement at the beginnings of the
age intervals" (p. II-10), over an experience band (e.g. 2001-2010) and a placement band (e.g.
1996-2010). Threshold/category: Iowa curve type plus average service life plus net salvage per
account. Event: accounting retirement of a book balance, with transfers and sales handled as
balance adjustments (p. II-14). No cause of retirement.

**Does limb (i) sit inside that regime?** Limb (i), as my brief specifies it, is per-unit survival
with truncation and censoring handled and a denominator stated. **It does NOT sit inside this
regime.** The regime shares the vocabulary (survivor curve, average service life, exposure,
surviving fraction) and the structural problem (entry window, unretired survivors), but the unit is
a dollar balance and not a unit, the denominator is dollars of exposure and not n, and no cause is
attributed. A result proved on dollar vintage balances is silent about per-unit survival, not
supportive of it. **Also note the sector:** the one instance I opened is a WATER utility, not an
electric one. It is within the nominated kind, but no electric-utility instance has been opened by
anybody.

**P2's regime, in its own words.** Population: the U.S. National Bridge Inventory (FHWA 2003),
representative cohort 1930, n = 11,834 bridges (Table 2 Total column). Unit of analysis: the
individual bridge - a physical unit, so P2 IS inside limb (i)'s sense in a way the depreciation kind
is not. Instrument: Kaplan-Meier survival curve, with "the last 12 years" ignored, then a Weibull
fitted by maximum likelihood (lambda = 9.476x10^-3, alpha = 2.169), 93.5 years being E(t) of that
fit. Censoring regime: declared, not measured - "no censoring occurs except at tau_J+1" (2.2).
Comparator: the Japanese Ministry of Finance 60-year depreciation service life (MOF 1998).

**Numerator and denominator of 93.5, both directions.** Numerator class: the fitted Weibull mean of
time-to-replacement for bridges in the single 1930 placement cohort of the NBI, with the final 12
years of the empirical curve excluded from the fit. Denominator: 11,834 bridges of that cohort -
checked against the near neighbours it is NOT, namely Table 8's stratum counts (7,622 / 2,446 /
1,440 / 326), which carry their own stratum means (116.2 / 105.1 / 95.6 / 76.0), and NOT the whole
NBI. What the class MISSES: every other placement cohort; the last 12 years of observed survival;
any cause of replacement. What it INCLUDES that limb (i)'s claim may exclude: a US accounting-free
replacement event benchmarked against a JAPANESE accounting parameter - the measured quantity and
the comparator are from different jurisdictions and different kinds of instrument.

## DEFECTS FOUND

1. **The record's absence claim is FALSE over the first instance opened.** "I CANNOT NAME A PRINTED
   REALIZED-LIFE CURVE OR AVERAGE-SERVICE-LIFE FIGURE FROM ANY OF THEM" was written after zero
   fetches. One fetch produces six, with pages (Account 331.00 T&D mains, 75-R4, 75 years,
   pp. III-4/5). A spent-or-never-spent budget was recorded as a property of the document kind.

2. **But Ground A is FALSE AS WRITTEN in the sense limb (i) specifies.** "Routine under another
   field's name" is true in an ACCOUNTING sense only. Over the one instance opened: unit = dollar
   vintage balance, retirement = accounting retirement, denominator = dollars of exposure with no
   unit count, truncation and censoring never named, no cause attributed. The brief's hypothesis -
   "accounting curve fits on plant-account vintage groups with no per-unit survival and no cause of
   retirement" - is CONFIRMED on the instance opened, with the one refinement that right censoring
   IS handled, under the name "stub survivor curve" (p. II-18), and an observation window IS
   handled, under the name "experience band" (p. II-10).

3. **Ground A remains UNENUMERATED as a claim about the KIND.** I opened 1 of 8+ named instances;
   3 routes failed (Cumberland Valley "[binary data]", Nolin `client_error`, ENO-35a
   `client_error`); the Meade County and Missouri EFIS instances remain untried. Per the
   unenumerated-universal rule, I name what I opened and what I did not, and classify: **TRUE over
   the one instance I opened on the "a curve and an ASL are printed" clause; FALSE over that same
   instance on the "per-unit survival with truncation and censoring handled and a denominator
   stated" clause; UNENUMERATED as a statement about the document kind.** It is not established in
   either direction for the kind.

4. **P2's own Introduction disclaims the equivalence Ground A asserts.** "However, problem arises
   from using depreciation service life to represent replacement cycle since the former is". The
   entry's Ground B source says in its own words that a depreciation life is a different quantity
   from a replacement cycle - which is an argument against Ground A, from inside the entry's own
   citation set.

5. **The entry's printed location for 93.5 is WRONG IN ONE OF ITS TWO PARTS.** The entry says
   "Section 3.4 and Table 8, with n = 11,834". Section 3.4: correct. **Table 8: wrong** - 93.5 is in
   no cell of Table 8, and Table 8 has no total row; its means are 116.2 / 105.1 / 95.6 / 76.0 /
   119.0 / 94.3 / 84.5 / 81.6 / 117.4 / 90.0 / 72.2 / 60.1. **n = 11,834 is printed in Table 2**
   ("Bridge population in each cohort, stratified by structure length"), Total column, cohort 1930 -
   not in Table 8. 93.5 is additionally printed in the Abstract and in Section 5. This is a
   citation-location defect, not a substance defect: the number is real and the n is real, but an
   entry that sends a reader to Table 8 for 93.5 sends them to a table that contradicts it with
   twelve different numbers.

6. **The entry omits a material caveat on 93.5.** The Weibull is fitted to a Kaplan-Meier curve
   whose "last 12 years ... will be ignored" (Section 3.4). The entry carries 93.5 with n and an ML
   Weibull but not this exclusion.

7. **The entry's censoring quotation is verbatim but unlocated, and its logical form is a
   declaration, not a measurement.** "we are more concerned with a closed cohort study i.e. no
   censoring occurs except at tau_J+1" is exact, and sits in **Section 2.2**, the methods
   development. The opener "we are more concerned with" RECORDS A MOVE AWAY from the general
   censored case. Quoted without its section, it can be read as a property of the NBI data; it is a
   modelling-regime choice. The paper elsewhere states "survival times are frequently censored."

8. **P2 prints no cause-attribution counts and no reliability index.** Both confirmed by a dedicated
   second sweep, not a broad one. So P2 cannot support limb (ii) or limb (iii) at all - it supports
   limb (i) only. Note also that "if there is no overload, collision or natural disaster" (3.2) is a
   three-member disjunction and would be misused if cited for any one member.

9. **Two of the three KY/LA instance routes failed in ways that are now documented**, so a later
   reader should not re-spend on them. The Cumberland Valley failure is the "[binary data]"
   summariser-parse failure, the same mode that killed NCHRP 20-07(397)_FR.pdf - a *parse* failure,
   so a transcription-style re-ask will not help; a different mirror is needed.

## ROUTES THAT FAILED

- `https://psc.ky.gov/PSCSCF/Post%20Case%20Referenced%20Correspondence/2014%20cases/2014-00159/20151210_Cumberland%20Valley%20Electric,%20Inc.%20Depreciation%20Study%202015.pdf`
  -> WebFetch returned the placeholder "[binary data]" only; summariser parsed no text. **ROUTE
  FAILED** (parse, not refusal).
- `https://psc.ky.gov/PSCSCF/Post%20Case%20Referenced%20Correspondence/2016%20cases/2016-00367/20191219_Nolin%20Rural%20Electric%20Cooperative%20Corporation%20Depreciation%20Study%20pursuant%20to%20Commission%20Order.pdf`
  -> WebFetch `client_error`, nothing retrieved. **ROUTE FAILED.**
- `https://www.all4energy.org/uploads/1/0/5/6/105637723/2019_06_19_ud-18-07_eno_exhibit_eno-35a.pdf`
  -> WebFetch `client_error`, nothing retrieved. **ROUTE FAILED.**
- SUCCEEDED: `https://interchange.puc.texas.gov/Documents/53428_912_1225069.PDF` (Aqua Texas);
  `https://eprints.lib.hokudai.ac.jp/repo/huscap/all/50708/SIE_8_251-268.pdf` (P2, twice).
- **NOT TRIED - BUDGET, NOT FAILURE** (cheapest next steps, in order): Missouri PSC EFIS, which
  search showed is live at `https://efis.psc.mo.gov/Document/Display/<id>` - ids 128773, 121308,
  322815, 325988 surfaced, and the entry's own ids are 27219, 325989, 74536, 77740, 77185, 83386,
  77844. Also untried: Meade County RECC (KY PSC 2010-00222, 2013-00033); the KY PSC case-filings
  index `https://psc.ky.gov/Case/ViewCaseFilings/2016-00367/Public` as an alternate route to Nolin;
  and two electric-utility studies that search surfaced incidentally,
  `https://www.puc.pa.gov/pcdocs/1353477.pdf` and
  `https://www.montana-dakota.com/wp-content/uploads/PDFs/Rates-Tariffs/Wyoming/Electric/Exhibit-Depreciation-Study.pdf`.
  An ELECTRIC instance matters, because the one instance opened is a water utility.
- No search was refused by the classifier. Both searches ran and returned.

## BEARING ON THE LEDGER ENTRY

**Ground A: NARROW, and strike the record's absence claim with it. The triviality guard loses the
reading of ground A that was doing the work.**

The guard needs limb (i) to be "routine under another field's name" in limb (i)'s own sense -
per-unit survival with truncation and censoring handled and a denominator stated - because that is
what justifies stripping limb (i) out of the novelty question. Over the one instance anybody has
opened, the depreciation kind does NOT do that. It prints Iowa curves and average service lives
(so the record's "I CANNOT NAME A PRINTED REALIZED-LIFE CURVE OR AVERAGE-SERVICE-LIFE FIGURE FROM
ANY OF THEM" must be STRUCK - it is false on the first document opened), but it prints them for
dollar vintage balances, with an accounting retirement as the event, dollars of exposure as the
denominator, no unit count, no cause of retirement, and truncation and censoring never named. Ground
A should be rewritten to exactly that, and the guard's limb-(i) clause narrowed to "routine in an
ACCOUNTING sense on vintage dollar balances" - which does not strip a per-unit survival limb out of
a novelty question. P2's own Introduction says as much from inside the entry's citation set:
"problem arises from using depreciation service life to represent replacement cycle".

Neither direction is established for the KIND: 1 opened, 3 routes failed, 4+ untried. **UNENUMERATED
over the kind**, TRUE over my one instance on the printing clause, FALSE over it on the per-unit
clause. This should become a PROMOTION CONDITION, not a standing ground: open one ELECTRIC-utility
instance (Missouri EFIS is live and cheapest) and one more, and if they repeat the Aqua Texas
pattern, ground A is settled as accounting-only over three instances.

**Ground B: HOLDS on substance. CORRECT ITS CITATION AND ADD ONE CAVEAT. The fallback leg survives,
so the counterfactual verdict does not move.**

The entry says that if P1's table fell, P2 alone would hold attack 2 at **PARTIAL rather than
Unresolved**. P2 does print what that leg needs, at full text, read twice: 93.5 years as the Weibull
mean for the US NBI 1930 cohort at **Section 3.4** (and the Abstract and Section 5), n = 11,834 at
**Table 2**, a Weibull fitted by maximum likelihood with lambda = 9.476x10^-3 and alpha = 2.169, a
per-unit (per-bridge) unit of analysis, the comparator confirmed verbatim as a DEPRECIATION life -
"significantly longer than the depreciation service life of 60 years set by the Ministry of Finance
in Japan" - and the censoring statement confirmed verbatim. **So the fallback is
Provisional-with-a-leg, not no leg at all.**

Three corrections to carry: (a) delete "Table 8" as a location for 93.5 and put n = 11,834 at Table
2 - Table 8 contains twelve stratum means and no total, and citing it for 93.5 points a reader at
numbers that contradict the claim; (b) add that the Weibull is fitted with "the last 12 years of the
Kaplan-Meier survival curve ... ignored"; (c) cite the censoring sentence with its section (2.2) and
its modality - it is a declared modelling regime, not a measured property of the NBI.

One further limit on how far Ground B can be pushed: P2 prints **no cause-attribution counts and no
reliability index** (dedicated sweeps; "reliability index", "limit state", "design working life",
"design service life", "Eurocode", "AASHTO" all absent). P2 therefore bears on limb (i) ONLY. It
cannot be borrowed to shore up limb (ii) - which still rests, as the entry says, on 表-2.2 of NILIM
No. 444 read only through the summariser plus adversary 1's uncorroborated crosswalk - and it
cannot touch limb (iii). And note the cross-jurisdiction comparator: a US-measured mean set against
a Japanese accounting parameter.

**Net:** attack 2's standing is unchanged by my check, but the triviality guard that routes the
entry to limbs (ii) and (iii) now stands on ONE narrowed accounting ground plus P2, rather than on
"limb (i) is routine" simply. A kill on limb (ii) alone can still carry a Rejection only if the
guard is restated in the narrowed form; as written, one of its two grounds is false in the sense it
was being used, and the record's supporting absence claim is false outright.
