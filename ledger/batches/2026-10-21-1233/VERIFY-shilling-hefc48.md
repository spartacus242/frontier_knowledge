# VERIFY — Shilling, Rudy & Rudy, "Risk-Based Design Margin Selection for Heat Exchangers" (HEFC VIII, 2009)

Checker note. Fresh context. Reports what the source says; makes no judgement about who was right.

---

## 1. Citation as the source itself serves it

Taken from the paper's own front matter (not from the short form in the ledger line).

- **Title, as printed:** `RISK-BASED DESIGN MARGIN SELECTION FOR HEAT EXCHANGERS`
- **Authors, as printed:** `R.L. Shilling` (superscript 1), `M.P. Rudy`, `T.M. Rudy` (superscript 2).
  The affiliation superscripts as rendered attach 1 to Shilling and 2 to T.M. Rudy; whether M.P. Rudy
  carries 2 as well is not resolvable from the rendered text layer — flagged, not silently decided.
- **Affiliations, as printed:**
  - 1 — `Heat Transfer Research, Inc., 150 Venture Drive, College Station, Texas, USA 77845`
  - 2 — `ToMaRu Consulting, 8336 Stable Gate Road, Warrenton, Virginia, USA 20186`
- **Correspondence:** `rls@htri.net`
- **Proceedings:** Heat Exchanger Fouling and Cleaning VIII — 2009 (marked *Peer-reviewed*),
  conference held 14–19 June 2009, Schladming, Austria. Editors: H. Müller-Steinhagen,
  M.R. Malayeri, A.P. Watkinson.
- **Pagination:** first page marked `340`; running footers carry pages `341`–`345`. So pp. 340–345, six pages.
- **Paper number:** `48` appears in the **filename/URL** (`48_Shilling_F.pdf`). I did **not** find a printed
  "paper 48" in the front matter or footers of the paper itself. Treat the paper number as a
  repository/file-naming artifact unless the proceedings index is checked separately.
- **Document type:** peer-reviewed **conference paper** presenting a **proposed method**, with two
  worked examples the paper itself labels as not real. It is not a primary study, not a review,
  not a guideline, and not a standard. It announces institutional work in progress:
  `HTRI formed the Exchanger Design Margin Task Force (EDMTF) to develop a new approach` /
  `to design margins.` (reconstruction, 2 fragments)

---

## 2. Read level and routes that failed

**Read level: FULL TEXT** — all six pages reached, across five WebFetch passes against the publisher-hosted PDF.

Important qualification on the *manner* of the read, stated so it is not over-credited: every pass went
through the fetch summariser, which caps direct quotation at ~125 characters. I never held the raw PDF
text layer. Every quoted string below was obtained as **ordered consecutive segments** and is labelled a
**reconstruction** with its fragment count. No cut string was completed by inference; junctions were
verified by requesting overlapping/adjacent context. Running header text and some table cell wording are
reported as the summariser rendered them and are marked where that matters.

**Routes that failed:**
- `curl -L https://heatexchanger-fouling.com/.../48_Shilling_F.pdf` → `curl: (56) CONNECT tunnel failed,
  response 403`, zero bytes. This is a **tool-scoped** refusal at the egress proxy, **not** a host block:
  the identical URL answered WebFetch five times. No conclusion about the host is drawn from it.
- No other route was needed; no search was spent.

**Query budget used:** 0 of 6 searches, 5 of 5 fetches. At the fetch cap, so items marked "not resolvable
from the rendered text" stay open rather than being guessed.

---

## 3. Claim (a) — front matter

**What the source says:** title, conference, and year in the ledger line match the front matter. The
author list and affiliation do not.

| Ledger line | Front matter |
|---|---|
| `Shilling R, Rudy T, Rudy T` | `R.L. Shilling`, `M.P. Rudy`, `T.M. Rudy` |
| `(Heat Transfer Research, Inc.)` as the single affiliation | Shilling = Heat Transfer Research, Inc.; the Rudys = **ToMaRu Consulting** |
| `"Risk-Based Design Margin Selection for Heat Exchangers"` | matches (printed in caps) |
| `Heat Exchanger Fouling and Cleaning VIII (2009)` | matches; Schladming, Austria, 14–19 June 2009 |
| `paper 48` | not printed in the paper; `48` is the filename. Pages printed are 340–345 |

Two substantive front-matter errors: the second author is **M.P.** Rudy, not a second "Rudy T"; and the
paper is **not** wholly an HTRI-affiliated work — two of three authors are at an independent consultancy.
The HTRI attribution is still partly right in substance (the work is credited to an HTRI task force, the
EDMTF, and the corresponding address is htri.net), but as an affiliation line for the author list it is wrong.

**Verdict on (a): mostly** — title/venue/year right, author list and affiliation wrong in detail,
paper number unverified from the source.

---

## 4. Claim (b) — the three quoted strings, each checked alone and unprimed

### B1. `add 5% extra area` — PRESENT, but cut on the left in a way that changes it

Full cell, **reconstruction from 1 returned fragment**, with its neighbouring cells for orientation
(Table 3, *Suggested Action at Indicated Risk Level*):

- correlation-error column, same row: `Apply 0.95 scaling to h`
- **fouling column, same row: `Do not apply fouling factor, but add 5% extra area`**
- operating-uncertainty column, same row: `Do not apply a duty multiplier`

Two things sit on the left of the cut and are load-bearing:

1. The 5% area is a **substitute for** the fouling factor, not an addition on top of it. Quoted bare,
   `add 5% extra area` reads as an increment; in context it is the *replacement* term in a row that
   explicitly says `Do not apply fouling factor`.
2. It is the **Low-risk row only**. Table 3 has rows `L` / `M` / `H`; the medium and high rows prescribe
   something else entirely (see §5). Quoted bare, it reads as the paper's general recommendation.
   It is the paper's recommendation **conditional on a Low fouling risk rating**.

So: verbatim, and misquoted in the sense the instructions define — cut where the surrounding clause
changes the claim.

### B2. `not based on actual cases` — PRESENT, scope set by a concessive clause

Full sentence, **reconstruction from 2 consecutive fragments**:

> `Although not based on actual cases, these two examples show how the design margin risk` +
> `matrix can be applied to typical process heat exchanger applications.`

Immediately preceding it is the Table 3 footnote (`*h = Calculated heat transfer coefficient
** Risk Number = Probability/Consequence`); immediately following is the heading
`Example 1: Refrigeration Service` and `The heat exchanger being designed for a refrigeration service at a
chemical plant has the same` / `streams as an existing unit that has operated successfully for 25 years.`
(reconstruction, 2 fragments).

The `Although` clause scopes the admission to **`these two examples`**. Read as "the paper's two worked
cases are hypothetical, by its own statement", the string is exact and the paper says so itself. Read as
"the paper's framework / its probability table is not based on actual cases", the string has been
stretched past its subject — though see §6, where the paper's *other* statements do largely concede that
too, by a different route.

### B3. `have never been updated for current design practice and are now obsolete` — PRESENT, hedge removed on the left

Full sentence, **reconstruction from 2 consecutive fragments**:

> `Many of these resistance values, created in the early half of the twentieth century, have never` +
> `been updated for current design practice and are now obsolete.`

The left-hand clause carries the hedge **`Many of these`**. The sentence is not a blanket statement that
tabulated fouling resistances are obsolete; it is a statement about many of them. Quoting from
`have never been updated` onward deletes both the quantifier and the subject.

**Antecedent of `these resistance values`**, from the preceding paragraph
(reconstruction, 2 consecutive fragments):

> `Fouling resistances are selected from independent sources such as the TEMA Standards [2007],` +
> `plant data, company standards, or simple safety factors.`

So the referent is the whole family of sources — TEMA, plant data, company standards, safety factors —
not TEMA alone. `TEMA` is named in that preceding paragraph, **not** in the sentence itself.

**Citation status: no citation on that sentence.** The sentence immediately before it is
`Although adding fouling resistance is intended to enable an exchanger to perform its` / `required duty at
the end of its run cycle,` / `it may create fouling due to excess surface area at the beginning of the run
cycle.` (reconstruction, 3 fragments). The sentence immediately **after** it is where the citations sit:
`The application of fouling factors in the petroleum industry often wastes resources, and in some` /
`cases, the effect of the added area has become "a self-fulfilling prophecy" [Hays, 1989],` / `causing
fouling that would otherwise not have occurred [Müller-Steinhagen, 2000].` (reconstruction, 3 fragments).

This matters for anyone sourcing the obsolescence claim: `[Hays, 1989]` and `[Müller-Steinhagen, 2000]`
support the *self-fulfilling-prophecy* point, **not** the "never updated / now obsolete" point, which this
paper asserts on its own authority with no supporting data or reference.

**Verdict on (b): mostly** — all three strings genuinely appear; two of the three are cut where the
left-hand clause changes what they claim (B1 loses "do not apply fouling factor, but" and the Low-risk
condition; B3 loses "Many of these").

---

## 5. Claim (c) — is the fouling allowance a probability-rated component of design margin inside a risk framework?

**Yes, explicitly and centrally. This is the paper's thesis.** The framework's own terms:

**The margin is decomposed into three named components** (reconstruction, 2 fragments + 3 list items):

> `We define design margin as the additional heat exchanger size required to compensate` +
> `for three parameters:`
> `1. Correlational Error`
> `2. Fouling Resistance`
> `3. Operating Uncertainty`

**The fouling allowance is made conditional on its risk rating** (reconstruction, 2 fragments):

> `We propose to use a value for fouling resistance only if the risk level for fouling` +
> `is high enough to justify it.`

**Fouling carries its own probability scale, in Table 1 *Probabilities*, graduated by return period**
(reconstruction, 8 fragments, one or two per level):

| Level | Fouling cell as printed |
|---|---|
| 1 | `No fouling in this service at this plant or any other plant; probability: 1 in 100 years` |
| 2 | `Minimal in this service in this and other plants caused by unusual circumstances;` + `probability: 1 in 50 years` |
| 3 | `Fouling at this and other plants, but not run-limiting; probability: 1 in 25 years` |
| 4 | `Heavy fouling in this service, limiting run length to shorter than planned;` + `probability: 1 in 10 years` |
| 5 | `Severe fouling (run-limiting) in this same service at this plant;` + `probability: 1 in 2 years (frequent)` |

The same table rates the two sibling components on the same 1–5 ladder: correlation error by error band
(`≤ ±6%`, `≤ ±17%`, `≤ ±37%`, `≤ ±62%`, `> ±62%`) and operating uncertainty by degree of change
(no change / 20% / 50% / 100% / `New service never applied before`). So the fouling allowance is rated
on the *same* probability axis as the other margin carriers — that is precisely the alongside-ness the
claim asks about.

**Consequence axis, Table 2 *Consequences*,** five lettered bands tied to money: A, fully spared,
under US$100 thousand; B, bypassable with minimal throughput impact, US$100 thousand–1 million;
C, unit slows but continues on extra furnace duty, US$1–10 million; D, fouling shuts the unit down,
US$10–100 million; E, fouling shuts the plant down, over US$100 million. (Rendered by the summariser;
the money bands and the shutdown ladder are its wording, the lettering is the paper's.)

**The pairing notation**, Table 3 footnote (verbatim fragment):

> `** Risk Number = Probability/Consequence`

and in use, Example 2 (verbatim fragment): `High for Fouling = 5/C`.

> **Caution on this one, and it is the summariser's error not the paper's:** one pass glossed this footnote
> as "the risk number is probability divided by consequence". The printed usage `5/C` is a **pair** — a
> numeral from Table 1 over a letter from Table 2, read off the 5×5 matrix of Fig. 1 to land in an L/M/H
> band. It is not an arithmetic quotient and `5/C` is not a computable ratio. Do not let a "probability
> divided by consequence" formula enter the ledger; the paper indexes a matrix cell.

**Margin actions by risk band, Table 3 fouling column** (L verbatim; M and H as the summariser rendered them):

- `L`: `Do not apply fouling factor, but add 5% extra area`
- `M`: apply a traditional fouling factor, reduced so total fouling resistance stays under 20% of the
  overall resistance — or use zero
- `H`: monitor the existing unit, run a root-cause analysis of the fouling experience, and set a
  fouling/cleaning schedule from the findings

**One precision the claim should respect.** The paper's three *named* components are `Correlational
Error`, `Fouling Resistance`, `Operating Uncertainty`. Scaling the heat-transfer coefficient
(`Apply 0.95 scaling to h`), adding bare/extra area (`add 5% extra area`) and the duty multiplier
(`Do not apply a duty multiplier`, elsewhere "duty factor") are **suggested actions** in Table 3's cells,
not named margin components in the taxonomy. The word `overdesign` does not appear. So "alongside other
margin carriers such as scaling h or adding bare area" is right as a description of the *action set*,
and slightly off if read as the paper's list of margin components.

**Verdict on (c): yes.** The fouling allowance is a probability-rated element of design margin inside an
explicit probability × consequence → risk-level framework, and the paper goes further than the claim
needs: it makes the allowance *contingent* on the rating rather than merely rated.

---

## 6. Claim (d) — field data, or prescriptive only?

**Plainly: prescriptive only. The paper contains no field data of its own and no measured outcome
distribution of any kind.** In particular it contains **no comparison of realized in-service fouling
resistance against the tabulated / TEMA value** — the comparison the claim asks after is absent.

Complete exhibit inventory, four items, all categorical or prescriptive:

| Exhibit | Content | Data? |
|---|---|---|
| `Fig. 1 Standard risk-based matrix.` | the generic 5×5 probability × consequence grid | no — categorical |
| `Table 1. Probabilities` | assignment criteria for levels 1–5, with return-period labels, no sources cited | no — assigned criteria |
| `Table 2. Consequences` | lettered cost bands A–E | no — categorical |
| `Table 3. Suggested Action at Indicated Risk Level` | recommended actions per risk band | no — prescriptive |

No other table or figure exists. The two example cases are prose only.

**The probability and consequence levels are assigned judgement categories, not measured frequencies.**
The paper is permissive about their provenance and does not say which underwrites its own Table 1
(verbatim fragment):

> `The values can be based on a purely theoretical probability or on actual experiences`

and devolves the consequence side to the user (verbatim fragment):

> `consequence parameters should be developed independently for each process plant`

In Example 2 the fouling level is explicitly a judgement (reconstruction, 2 fragments):

> `The probability of the exchanger failing to meet the predicted performance` +
> `because of fouling is estimated as level 5.`

— `estimated`, with no supporting observation. The examples are self-declared hypothetical (see B2).

**The trap in Table 1 worth naming.** The strings `probability: 1 in 100 years` … `1 in 2 years
(frequent)` *look* like measured frequencies and are not. They are the **definitional rungs of an
assignment ladder** — the criteria a designer matches a service against in order to pick a level. Nothing
in the paper derives them from observation, and no source is cited for them. Lifting `1 in 10 years` out
of Table 1 as an empirical fouling rate would be a regime error of exactly the kind the scope rule warns
about: a labelling scheme read as a measurement.

**The one quantitative outside result is someone else's.** The cost-reduction figure in the 23–33% range
is attributed to `Bennett et al. (2007)`, a cited source, not measured by these authors. Per the
attribution rule: if a ledger entry credits that figure to Shilling et al., it is miscredited.

**The authors concede the empirical gap themselves,** in the Conclusions (reconstruction, 2 fragments):

> `The results of this study support further work to improve the probability parameters` +
> `for different types of exchangers and multiple applications.`

That is the paper saying its probability parameters are not yet in finished shape — which is a stronger
and better-sourced version of whatever B2 was being used for.

**Verdict on (d): the claim that it is prescriptive-only holds — yes.**

---

## 7. Claim (e) — scope: what is established, in what regime, and whose vocabulary is this?

### What the paper establishes

That a standard 5×5 risk matrix **can be laid over heat-exchanger design-margin selection**, together
with a vocabulary and a worked procedure for doing so: a three-way decomposition of margin, a 1–5
probability ladder per component, a five-band consequence scale in money, a matrix lookup to L/M/H, and a
prescribed action per band — including the rule that a fouling resistance is used only when its risk
level earns it. It demonstrates the procedure on two hypothetical cases.

### The regime

- **Unit of analysis:** a single heat exchanger being designed, in a named process service.
- **Population:** process heat exchangers in petroleum / chemical-plant services; the examples are a
  refrigeration service and a crude oil heater. Not a sample — two constructed cases.
- **Instrument:** a categorical matrix populated by the designer's judgement, with HTRI thermal design
  as the assumed surrounding practice.
- **Endpoint:** a *recommended action* on design margin (whether to apply a fouling factor, how much
  extra area, whether to scale h or apply a duty factor). There is no measured endpoint, no comparator
  arm, no estimand. Nothing is estimated from data; a category is assigned and an action looked up.
- **Thresholds:** the level boundaries of Tables 1–3 — error bands, return-period labels, money bands,
  the 20%-of-overall-resistance cap at `M`, the 5% area at `L`.
- **Status:** a method **proposal**, 2009, from a task force formed to develop it, not a validated
  or adopted procedure.

### Does the probabilistic-forecast vocabulary appear in heat-exchanger design practice here?

**In the heat-exchanger design literature: yes, and this is a good instance of it.** The venue is a
peer-reviewed heat-exchanger fouling conference; the lead author is at Heat Transfer Research, Inc., the
industry's thermal-design research consortium; the fouling allowance is given an explicit probability
rating with return periods and is made conditional on it. This is not reliability engineering written
about some other equipment and borrowed by analogy — it is risk vocabulary applied to the fouling
allowance itself, by heat-transfer designers, in print, in their own venue.

**In heat-exchanger design *practice*: the paper itself says no, not yet.** Verbatim
(reconstruction, 3 consecutive fragments):

> `For more than a quarter century, business and industry` +
> `have used risk-based matrices to quantify probability and consequences in decision making.` +
> `However, this tool has not yet been applied to the heat exchanger design process.`

and the novelty claim (verbatim fragment):

> `This report introduces the concept of a risk-based design margin selection process`

and the Conclusions' description of the status quo (reconstruction, from 3 consecutive fragments):

> `Risk analysis has become a very effective tool in the petroleum and other related industries` +
> `to arrive at cost-effective decisions.` +
> `Yet current design practices routinely add excess area to heat exchanger designs.`

So the paper's own position is: the risk-matrix method is mature **elsewhere** (business, industry,
petroleum decision-making — and it notes the approach was `quickly adopted by industry, as well as by
food and health agencies,` / `in the United States and other countries.`, reconstruction, 2 fragments),
and **routine heat-exchanger design does not use it** — which is the stated motivation for writing.

### Where a ledger claim would sit inside or outside this regime

- *"The vocabulary of treating a design margin as a probability-rated quantity exists in the
  heat-exchanger design literature"* — **inside the regime; supported.**
- *"Heat-exchanger design practice treats the fouling allowance as a probabilistic forecast"* —
  **outside it; contradicted by the paper's own sentence** that the tool `has not yet been applied to the
  heat exchanger design process`, and by `current design practices routinely add excess area`.
- *Any empirical rate, frequency, or realized-vs-tabulated comparison* — **outside the regime entirely.**
  The paper measures nothing. Table 1's return periods are assignment criteria, not observations.
- *Anything about present-day uptake* — **outside the regime.** This is one 2009 proposal paper. It is
  silent on whether the method was ever adopted, and silence here is not evidence either way.
- *The 23–33% cost figure* — **belongs to Bennett et al. (2007)**, not to this paper.

**Verdict on (e): the claim splits.** The vocabulary does appear here, in heat-exchanger design, not
merely in reliability engineering elsewhere — that half holds, and holds well. But what the paper
establishes is that the vocabulary was being *introduced*, by its authors' explicit statement, against a
design practice that did not then use it. A result proved in the regime "a proposed method, demonstrated
on two hypothetical cases" is silent on the regime "what designers actually do".

---

## 8. Defects

1. **Author list wrong.** Ledger has `Shilling R, Rudy T, Rudy T`; front matter prints `R.L. Shilling`,
   **`M.P. Rudy`**, `T.M. Rudy`. The second author's initials are not T.
2. **Affiliation wrong.** Ledger attributes the paper to `Heat Transfer Research, Inc.` alone. Only
   Shilling is at HTRI; both Rudys are at **ToMaRu Consulting**, Warrenton, Virginia. (The HTRI link is
   real at the institutional level — the work is credited to HTRI's Exchanger Design Margin Task Force —
   but the affiliation line as given is incorrect.)
3. **`paper 48` not verified from the source.** The paper prints pages **340–345**; `48` comes from the
   filename `48_Shilling_F.pdf`. Not taken from front matter, so flagged rather than endorsed.
4. **`add 5% extra area` is cut where the clause changes it, twice over.** The cell reads
   `Do not apply fouling factor, but add 5% extra area`: the area *replaces* the fouling factor rather
   than adding to it, and it is the **Low-risk row only** of a three-row table whose M and H rows
   prescribe something different.
5. **`have never been updated... and are now obsolete` drops the hedge.** The sentence opens
   `Many of these resistance values` — a claim about many, not all. Its antecedent is TEMA Standards
   *plus* plant data, company standards and safety factors, not TEMA alone.
6. **Citation misattribution risk around that sentence.** The obsolescence sentence carries **no
   citation**. `[Hays, 1989]` and `[Müller-Steinhagen, 2000]` attach to the *following* sentence about the
   `"a self-fulfilling prophecy"` effect. Do not source the obsolescence claim to them.
7. **`not based on actual cases` is narrower than it looks.** The `Although` clause scopes it to
   `these two examples`, not to the framework or Table 1. (The broader concession is available, but from
   other sentences — `estimated as level 5`, `The values can be based on a purely theoretical
   probability or on actual experiences`, and the Conclusions' call for `further work to improve the
   probability parameters`.)
8. **Summariser artifact to keep out of the ledger: "probability divided by consequence."** The footnote
   is `** Risk Number = Probability/Consequence` and the usage is `5/C` — a matrix-cell pair, not a
   quotient. One fetch pass glossed it as division; that gloss is not the paper's.
9. **Table 1's return periods are not measurements.** `1 in 100 years` … `1 in 2 years (frequent)` are
   level-assignment criteria with no cited source. Reading any of them as an observed fouling frequency
   would repeat the exact regime error the scope rule flags.
10. **The 23–33% cost-reduction figure is not this paper's finding** — it is attributed to
    `Bennett et al. (2007)`.
11. **Component taxonomy, minor.** The paper's named components are `Correlational Error`,
    `Fouling Resistance`, `Operating Uncertainty`. `scaling to h`, `extra area` and the duty factor are
    Table 3 *actions*, not named components; `overdesign` does not occur.
12. **Read-manner limit, disclosed not hidden.** All quotations are reconstructions assembled from
    ordered consecutive summariser segments (fragment counts given inline); the raw PDF text layer was
    never held, because `curl` was refused at the proxy with a tool-scoped `CONNECT ... 403`. Table 2's
    wording, Table 3's `M` and `H` cells, and the running-header text are summariser renderings rather
    than verified verbatim strings, and are marked as such. The `M.P. Rudy` superscript assignment is
    unresolved. Fetch budget exhausted (5/5), so these stay open.
13. **Not a defect in the claims, recorded for completeness:** the ledger's framing of this source is
    otherwise accurate. It is a 2009 peer-reviewed conference paper, it is prescriptive, and it does
    treat the fouling allowance as probability-rated. Claims (c) and (d) hold as stated.
