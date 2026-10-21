# VERIFY — fouling-distribution (independent sweep)

**Task.** Establish whether anyone has PUBLISHED (a) an empirical distribution — bias and spread,
percentiles, or a fitted distribution — of realized/observed fouling resistance against the
TABULATED design fouling resistance (TEMA, HTRI, ESDU) over a declared frame of IN-SERVICE heat
exchangers, in any service class, country or language; and (b) the share of installed
heat-transfer area that is excess area never called into use by realized fouling.

No source was handed to me. This is a sweep, not a check of someone's citation.

**Budget consumed: 6/6 searches, 5/5 fetches.** Both caps are hard-reached. Nothing below is
limited by a refusal or a host block — see "Routes" — so the sweep is incomplete *by budget*,
not by blockage. The one genuinely open question (Chenoweth F-2 / the ~700-exchanger survey)
is COULD NOT READ and is named as such.

---

## Routes

No search or fetch was refused. No proxy 403, no reCAPTCHA, no 429. All five fetches returned
readable text. I did not touch PMC, Europe PMC, doi.org, nature.com or Unpaywall, and put no
personal identifier into any URL, header or query string.

Read levels, per document:

| Document | Read level |
|---|---|
| HTRI report F-2 (Chenoweth) | **catalogue/landing page only** — description of the report, not the report |
| Zubair, Sheikh, Younas & Budair, *Energy* 25 (2000) | **full text** (author-hosted PDF) |
| Akınç, Becer, Bakır, Özçelik & Balkan, HEFC 2013 | **full text** (publisher PDF; OCR damaged in places) |
| Awad, *Fouling of Heat Transfer Surfaces* (IntechOpen chapter) | **full text, truncated** — served text runs p. 506 to p. 536 and then cuts; end page unknown |
| Bories & Patureaux, HEFC 2003 | **full text** |

The HTRI F-2 line is the load-bearing one: I read **what HTRI says the report is**, never the
report. HTRI technical reports are member-restricted; I did not attempt a paywall bypass.

---

## A. HTRI Report F-2 — Chenoweth. The single most on-point document, and I COULD NOT READ IT.

Citation **as HTRI's own catalogue page serves it**:

> F-2 Final Report of the HTRI/TEMA Joint Committee to Review the Fouling Section of the TEMA Standards

Author: J. M. Chenoweth. Year as served on that page: **1988**. No report number beyond "F-2"
appears on the page. URL: https://www.htri.net/f-2

*Front-matter caution (defect-rule 7).* The widely circulated journal form of this work is
"Heat Transfer Engineering 11(1), 73–107, 1990". I did **not** read that journal front matter,
and the HTRI page says 1988, not 1990. The two may be report-vs-journal versions with different
years, or the short form may be wrong. **Do not propagate either citation as verified.**

What the catalogue description does say, verbatim as served:

> "This report presents the results of seven meetings that have occurred over the past three years."

> "the Joint Committee recommends that the current use of fouling resistances be retained"

> "A revised set of \"typical values\" for fouling resistances should be made a part of this new Recommended Good Practices Section on Fouling."

Bearing: the description presents F-2 as a **committee review producing recommendations and
revised "typical values"** for the TEMA standard. It is therefore closest to a **standards /
committee report**, not a primary study. The description **does not state** that the report
contains measured fouling resistances from in-service exchangers, a survey of design practice,
a statistical distribution, or any comparison of measured against TEMA-tabulated values. It also
**does not say how the revised "typical values" were derived or what data they rest on.**

**This is COULD NOT READ, not NOT FOUND.** Whether F-2 carries a spread — and not merely
category averages — is the open question this sweep did not settle. See §D for why that matters.

F-12 was named in the task as a second HTRI candidate. I spent no call on it; its content is
**unexamined**, neither found nor absent.

## B. ESDU fouling data items — NOT EXAMINED

No call reached an ESDU data item. ESDU items are subscription-gated. I make **no claim** about
their contents. Unexamined, not absent.

## C. Zubair, Sheikh, Younas & Budair (2000) — a fitted distribution, but not of this quantity

Front matter as the PDF serves it: **Syed M. Zubair, Anwar K. Sheikh, Muhammad Younas,
M. O. Budair**, "A risk based heat exchanger analysis subject to fouling. Part I: Performance
evaluation", *Energy*, **vol. 25** (2000), **pp. 427–443**. Issue number not given in the served
text. URL: https://faculty.kfupm.edu.sa/me/mobudair/papers/A-risk-based-heat-exchanger-analysis.pdf
Read level: **full text**.

Type: **primary modelling/analysis paper** (a risk-based analysis framework), not a field survey.

This is the nearest thing in the open literature to a *distributional* treatment of fouling
resistance, and it is the one most at risk of being miscited for this ledger entry. What it
actually does:

> "the time to reach this critical value will be distributed as an alpha distribution for a linear fouling growth model."

**What it measures / its estimand.** The random variable given a distribution is the **time to
reach a critical fouling resistance**, not the fouling resistance itself, and not the ratio of
realized to design fouling resistance. The distribution family is **assigned by the growth model**,
not fitted to a fleet. The scatter parameter (√a = 0.30) is an **assumed input**, not estimated
from field data. The risk levels (p = 0.01, 0.10) are likewise model inputs.

**Its data regime.** Laboratory and literature datasets, named in the paper as the work of
Hasson et al., Andritsos et al., Zubair et al. (laboratory CaCO₃), and the "replicate corrosion
fouling data of Somerscales and Kassemi". **Not a fleet of in-service exchangers.**

- Distribution over a declared frame of in-service exchangers? **No.**
- Comparison against TEMA/tabulated design values? **No.** TEMA appears only in the reference
  list. The single fouling resistance in the analysis is a *critical acceptable* threshold,
  Rf,c = 2.55×10⁻³ m²·K/W (Table 1), which is an assumed design limit, not an observation.
- Percentiles/bias/spread over in-service exchangers? **No.**
- Excess or unused area quantified? **No.** Area appears as A = 1070 m² in Table 1, with no
  margin or utilisation figure.

**Regime verdict: silent, not supportive.** A fitted time-to-threshold distribution for a single
modelled exchanger under an assumed scatter parameter says nothing about the dispersion of
realized Rf against tabulated Rf across installed plant. Citing it for the latter would be the
exact defect pattern flagged in the task brief.

## D. Awad, *Fouling of Heat Transfer Surfaces* — the review that points at the answer and shows it is an AVERAGE, not a distribution

Front matter as served: **Mostafa M. Awad** (Mansoura University, Faculty of Engineering, Mech.
Power Eng. Dept., Egypt), chapter "Fouling of Heat Transfer Surfaces", in *Heat Transfer —
Theoretical Analysis, Experimental Investigations and Industrial Systems*. Publisher not named in
the served text (page footers link to intechopen.com); **year not stated in the served text**;
served text begins at **p. 506** and runs to p. 536 before cutting, so the end page is unknown.
URL: https://cdn.intechopen.com/pdfs/13202/InTech-Fouling_of_heat_transfer_surfaces.pdf
Read level: **full text, truncated**.

Type: **review chapter**. Everything below is this review reporting other people's work, and I
flag attribution accordingly.

### D1. The most important single finding of this sweep

The review attributes to Chenoweth a survey whose scale is exactly the frame the ledger question
asks for, and reports its treatment as **averaging**:

> "collected data from over 700 shell and-tube heat exchangers"

> "The arithmetic average of total Rf of each two-fluid combination value has been taken and analyzed."

(The first string is reproduced as served, including the broken hyphenation "shell and-tube".)

**Read the grammar on both sides of that cut.** "The arithmetic average ... has been taken and
analyzed" is a statement that the 700-exchanger data were **collapsed to one number per
two-fluid combination**. A category mean is a **point estimate**, not a distribution: no spread,
no percentiles, no fitted form. So the largest known body of in-service fouling data is reported
by this review as having been published **as averages**.

Two cautions, both load-bearing:

1. **This is secondhand.** The "over 700" figure and the averaging statement are Awad's words
   about Chenoweth, not Chenoweth's front matter. Per defect-rule 7 I do not treat them as
   Chenoweth's own description. Whether the underlying report *also* published a spread that the
   review simply did not carry forward is **unresolved** — that is the §A COULD NOT READ.
2. **Averages per fluid combination are not a bias against the tabulated value** unless someone
   differenced them against the TEMA table. The review does not report that difference.

### D2. On the basis of the TEMA values

> "Empirical data for fouling resistances have been obtained over many decades by industry"

> "TEMA fouling resistances [12] are supposed to be representative values, asymptotic values"

and the review characterises them as overall values for "a very limited number of environments".
Note the hedge: *"are supposed to be"*. The review does **not** describe the measurements behind
the tabulated numbers.

### D3. Measured versus tabulated — NOT DONE here

The review does **not** compare measured in-service values against tabulated design values. Its
comparison in Table 3 is **between two sets of typical values** (plate heat exchanger vs TEMA):

> "Typical fouling resistances are roughly 10 times lower in plate heat exchangers (PHEs)"

> "actual values of fouling resistances in any application can be either higher or lower than the resistances calculated."

That last sentence is the review stating the *direction of error is unknown* — which is an
acknowledgement that the bias is unquantified, **not** a measurement of it.

### D4. Excess area — point ranges, uncited, and in the WRONG REGIME for part (b)

Every excess-area number the review carries, verbatim:

> "the tubular exchangers are generally designed with 20-50% excess surface"

> "the compact heat exchangers are designed with 15-25% excess surface"

> "the excess surface area (10-50%)"  *(in a cost list)*

> "brings about 50% increase in the surface area over that required if there is no fouling"

> "then the excess surface area will be 40%"  *(author's own worked example, Eq. 24, Rf ≈ 4×10⁻⁴ m²·K/W, Uc ≈ 1000 W/m²·K)*

> "the excess ratio will be reduced to only 20%"  *(same example, Uc ≈ 500 W/m²·K)*

**None of these carries a citation.** The only nearby citation, [4] (Pritchard), attaches to a
GNP cost figure, not to the area percentages. The 40%/20% pair is the author's own arithmetic
from an assumed Rf and Uc, i.e. **a design calculation, not a field observation** — and note it
swings by a factor of two on the choice of Uc alone, which is itself a warning that these are
sensitivity figures, not measurements.

**The regime mismatch, which is decisive for part (b) of the task.** All of these quantify
**area added at design time by the fouling allowance** — an as-designed margin, computed from a
tabulated Rf. Part (b) asks for the **share of installed area never called into use by *realized*
fouling**, which requires knowing realized Rf and differencing it against the design allowance
over installed plant. A design-side margin is **silent** on realized utilisation: an exchanger
designed with 40% excess surface may have had all, some or none of that margin consumed. Citing
"20–50% excess surface" as the unused share would be precisely the design-value-read-as-realized-value
defect the brief warns about.

## E. Bories & Patureaux (2003) — realized fouling across a train, and still no distribution and no comparison

Front matter as served: **M. Bories and T. Patureaux** (TOTAL CERT, Refining Research Centre,
PO Box 27, 76700 Harfleur, France), "Preheat Train Crude Distillation Fouling Propensity
Evaluation by the Ebert and Panchal Model", in *Heat Exchanger Fouling and Cleaning:
Fundamentals and Applications* (Engineering Conferences International), **2003**, Art. 27,
pp. 1–11 as printed in the served copy.
URL: https://dc.engconfintl.org/cgi/viewcontent.cgi?httpsredir=1&article=1026&context=heatexchanger
Read level: **full text**. Type: **primary plant-data study** applying a published model.

This is the closest thing the sweep found to realized values over a *named set* of exchangers.

**Frame.** The preheat train of one TOTAL refinery crude distillation unit (revamped to
22,000 T/day). The Ebert–Panchal ranking covers **eight** exchangers (E58, E6AB, E7, E83, E5ACBD,
E8182, E5EGFH, E8ACBD); fouling-rate figures cover about twelve. Monitoring runs roughly
**October 2000 to March 2003** per the figure axes. The paper does not itself use the phrase
"in service" for them.

**What it measures.** Its unit of analysis is the **individual exchanger**, and its endpoint is
an **observed fouling *rate***, not a fouling resistance level. Table 2, "Observed fouling rate
(10⁴ m²°C/kcal)": E58 0.04, E6AB 0.47, E7 0.34, E83 0.27, E5ACBD 0.94, E8182 0.5, E5EGFH 1.91,
E8ACBD 0.86. The text gives the range verbatim:

> "observed highest and lowest fouling rates of 0.04.10-4 and 1.91.10-4 (m2.°C/kcal)"

That is a **range across eight units, not a distribution**: no histogram, no percentiles, no mean
with standard deviation of fouling resistance. The only aggregate statistic in the paper is of
regression quality, not of fouling:

> "The linear regression coefficient goes from 0.447 (E2AB) to 0.924 (E6AB) with an average value of 0.76."

**On TEMA.** The paper raises the tabulated values only to question them, in the introduction,
and never differences its own observations against them. It describes the design fouling
resistance as

> "extracted from TEMA tables dating back a long time ago"

and says

> "the accuracy of these TEMA values has been reconsidered."

**Note what this is and is not.** It is a source *noting the questionable provenance of the
tabulated values* — it is **not** a measurement of the gap. Per defect-rule 9, this remark is not
a flag of the gap I was sent to check, and the paper's silence on the comparison is not evidence
either way about the comparison's result.

**Excess area.** Not quantified. Over-design appears only qualitatively, and with the opposite
sign to the usual assumption:

> "as an over design might in fact increase the fouling rate."

Area appears only as a symbol in Equation 1, with no values.

---

## Candidate ledger: distribution / point estimate / neither

| Candidate | Read level | Carries a distribution over a frame? |
|---|---|---|
| HTRI F-2, Chenoweth (1988 per HTRI page) | landing page only — **COULD NOT READ** | **Unresolved.** Description implies revised "typical values" (point estimates). Awad reports its 700-exchanger data as per-combination arithmetic averages. |
| HTRI F-12 | **not examined** | unknown |
| ESDU fouling data items | **not examined** | unknown |
| Zubair et al., *Energy* 25 (2000) 427–443 | full text | **Neither, for this quantity.** Fitted alpha distribution of *time-to-threshold* for one modelled exchanger, assumed scatter, lab/literature data. |
| Awad, IntechOpen chapter | full text, truncated | **Point estimates only.** Uncited 20–50% / 15–25% / 10–50% design excess-surface ranges plus a worked 40%/20% example. Reports Chenoweth as averages. |
| Bories & Patureaux, HEFC 2003 | full text | **Point estimates per exchanger.** Observed fouling *rates* for 8 named units; a min–max range; no distribution; no TEMA comparison. |
| Akınç/Becer et al., HEFC 2013, pp. 18–21 | full text (OCR damaged) | **Neither.** No exchanger count, no numeric Rf, no TEMA comparison, no statistics. Only operational-vs-simulated outlet temperatures per unit. |

### Standing answer

For **(a)** — a published empirical distribution (bias and spread, percentiles, or fitted form) of
realized fouling resistance **against the tabulated design value**, over a declared frame of
in-service exchangers: **NOT FOUND in this sweep, with one COULD NOT READ that must be closed
before anyone calls it absent.** Every readable candidate stopped at either per-exchanger point
values, a min–max range, category averages, or a model with assumed scatter. Two readable sources
(Awad D3, Bories & Patureaux E) explicitly note that the tabulated values' accuracy is open —
which locates the gap but does not fill it. The unclosed route is **HTRI F-2** (plus unexamined
F-12 and ESDU), where the ~700-exchanger dataset lives and where the review says the treatment
was averaging.

For **(b)** — the share of installed area that is excess never called into use by realized fouling:
**NOT FOUND, and the figures that look like an answer are in a different regime.** The 20–50%
class of numbers is **as-designed margin computed from tabulated Rf**, uncited in the one source
that carries them, and partly the author's own worked example. No source read here measured
realized consumption of that margin.

**NOT FOUND ≠ NOT PUBLISHED.** Six searches and five fetches, with the two gated publishers
(HTRI, ESDU) unread and non-English literature reached by a single multilingual query that
returned nothing on point, is far too thin a sweep to support a claim of absence.

---

## Defects

1. **Chenoweth's front matter is unverified and internally inconsistent across sources.** HTRI's
   page says 1988; the common short form says *Heat Transfer Engineering* 11(1), 73–107, 1990.
   I read neither front matter. Propagating either as verified would breach defect-rule 7.
2. **The "over 700 shell and-tube heat exchangers" figure is secondhand**, taken from Awad's
   review of Chenoweth, not from Chenoweth. Likewise "arithmetic average of total Rf of each
   two-fluid combination". Both need first-hand confirmation.
3. **COULD NOT READ is doing real work here and must not be collapsed into NOT FOUND.** The one
   document whose title names exactly the subject (review of the TEMA fouling section) was read
   only as a catalogue entry. F-12 and ESDU were not examined at all — that is weaker still than
   COULD NOT READ.
4. **Design margin read as realized unused area** is the live trap for part (b). Awad's
   "20-50% excess surface" and the 40%/20% worked example are as-designed allowances derived from
   a tabulated Rf; they are silent on how much margin realized fouling actually consumed. The
   worked example moves 40% → 20% on the choice of Uc alone.
5. **Awad's excess-area numbers are uncited.** The only adjacent citation, [4] (Pritchard),
   attaches to a GNP cost figure, not to the area percentages. Several of the ranges (20–50%,
   10–50%, "about 50%") overlap inconsistently without a stated basis or uncertainty.
6. **Fouling rate is not fouling resistance.** Bories & Patureaux's unit is an observed *rate*
   (10⁴ m²°C/kcal), not a resistance level, and its estimand is fouling *propensity ranking*.
   It cannot be differenced against a TEMA resistance without a time base. Also note its units
   are kcal-based, not SI.
7. **Zubair et al.'s distribution is of the wrong variable, in the wrong regime.** Alpha
   distribution of time-to-critical-Rf, single modelled exchanger, assumed scatter √a = 0.30,
   laboratory/literature calibration. Outside its assumptions it is silent, not supportive.
8. **A source questioning the TEMA tables is not a measurement of their bias** (defect-rule 9).
   "the accuracy of these TEMA values has been reconsidered" and "actual values ... can be either
   higher or lower" both state that the direction and size of the error are *open*.
9. **Awad's served text is truncated** (ends mid-content around p. 536) and its publisher and
   year are not in the served text; the Akınç/Becer PDF is **OCR-damaged** at the one place a
   fouling-resistance statement appears, so its "Rf is around zero" wording is a reconstruction
   and is flagged rather than silently repaired.
10. **Hedging differs across formulations and should be carried.** "TEMA fouling resistances
    *are supposed to be* representative values" is hedged; "tubular exchangers *are generally
    designed with* 20-50% excess surface" is stated flatly and uncited. The hedged claim is the
    better-supported one.
11. **Language coverage is near-nil.** One combined Chinese/German query, no Russian-specific
    query, no thesis-repository query, no Japanese. The non-English and grey literature is
    effectively unswept.
