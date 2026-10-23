# VERIFY - Ogasawara 2024 Sci Rep 14:7778 asserts 22 C / 50% RH with no environmental log; the tau the entry prints is the LM arm's illuminance period, and PMC10987682 is the same document
Checker: fresh context. Budget used: 4 WebFetch, 0 WebSearch. Date 2026-10-22.

(Also 2 `curl` attempts, both refused by the proxy with `CONNECT tunnel failed, response 403` — tool-scoped, no bytes transferred. Recorded under ROUTES THAT FAILED.)

## CLAIM

UQ-20261023-02 holds that the top journal hit on the mandatory own-field title query is a deliberate-light manipulation and not an instrumented environment, and specifically that the paper:

1. asserts `The environment inside the soundproof box was kept constant at a temperature of 22 C and a humidity of 50%.` WITHOUT REPORTING ANY LOG;
2. prints tau = 24.5 +/- 0.4 h;
3. uses LD/LF/LL/DD arms;
4. is ONE DOCUMENT with its unconverted PMCID PMC10987682.

Source as the entry carries it: Ogasawara M., Matsumoto N., Takeuchi H. et al. (2024), 'Lengthened circadian rhythms in mice with self-controlled ambient light intensity', Scientific Reports 14:7778, DOI 10.1038/s41598-024-58415-x.

Verdict in one line: **the quotation is verbatim and the no-log finding holds over everything I opened; the one-document point holds and is confirmed by conversion; but the entry's tau is mis-located — it is the ABSTRACT's figure for the ILLUMINANCE rhythm of the LM arm, an arm the entry's own arm list omits, and the Results print +/- 0.5 for it — and the entry's author front matter is wrong in two places.**

## READ LEVEL

**Ogasawara et al. 2024, Sci Rep 14:7778, DOI 10.1038/s41598-024-58415-x — PARTIAL.**

Read via WebFetch of the nature.com article page (reached through the doi.org 302 redirect URL). Sections returned and relied on: the Authors block, Abstract, Results (period paragraphs, chamber/room description, Csnk1e and random-hole control paragraphs), Methods (apparatus, nose-poke light control, environment sentence, LD/LF group definitions), figure captions, the Supplementary Information file list, and Data Availability.

What this read is NOT:
- It is **not raw HTML or PDF**. Everything below passed through the fetch summariser, which caps verbatim quotation at roughly 125 characters. Quotations assembled from more than one returned fragment are labelled as reconstructions below.
- I did **not** open the **Supplementary Information PDF** or the **supplementary video**. The fetch reported that the Supplementary list contains only those two items, but their contents are COULD NOT READ, not read-and-empty. This matters for sub-claim (c) and is carried through to DEFECTS.
- I did not open the published PDF, so I cannot adjudicate the abstract-vs-Results numeric discrepancy reported below against typeset copy.

**PMC10987682 — conversion only (not a read).** NCBI id converter returned the record; I did not and could not read PMC (hard-blocked here).

## WHAT THE SOURCE SAYS (quotations as served)

### Front matter (sub-claim: author names)

Author list as printed in the Authors section, in order:

> Jun Ogasawara, Nobuyoshi Matsumoto, Yuki Takeuchi, Kotaro Yamashiro, Masato Yasui, Yuji Ikegaya

The fetch noted that the top author bar on the page is truncated with an ellipsis, so this list is taken from the full Authors section — i.e. from front matter, not from a third party's short form.

### (b) The constancy sentence

Returned verbatim, attributed by the fetch to **Methods**:

> "The environment inside the soundproof box was kept constant at a temperature of 22 °C and a humidity of 50%."

This matches the entry's quotation **exactly**, character for character, with the single trivial difference that the entry writes `22 C` where the paper prints `22 °C`. The quotation is sound: it is a complete sentence, and the grammar on both sides of the cut is intact — nothing is clipped at either end, because the cut is at the full stops.

**What the opening words scope.** The sentence opens `The environment inside the soundproof box` — so the scope is the interior of the **soundproof box**, which is the enclosure *around* each behavioural chamber, not the room and not the chamber interior as such. The governing clause is `was kept constant at` — simple past, active-voice-of-maintenance. This clause **ASSERTS** the quantity. It does not deny it and does not record a move away from it. It asserts two set values (22 °C, 50% RH) and the property of constancy, and it reports no instrument, no sampling interval, no tolerance, no excursion, and no source of the figures.

**Honest limit on the neighbours requested.** I asked for the constancy sentence's immediate neighbours and the fetch instead gave me the neighbours of a *different* soundproof-box sentence, in Results. **I therefore do not have the sentences adjacent to the constancy sentence in Methods, and my budget is spent.** The neighbours I do have belong to the Results passage, and I report them as such rather than passing them off as the Methods context:

Results passage (reconstruction, assembled from 2 consecutive returned fragments; junction verified at `soundproof box` / `in a quiet`):

> "A total of 12 chambers were prepared, and each chamber was placed in a single soundproof box in a quiet (< 40 dB) underground room without exterior windows."

Sentence before it, in Results:

> "This apparatus had four illuminance levels: 0.21 lx (level 1), 2.1 lx (level 2), 21 lx (level 3), and 210 lx (level 4)."

Sentence after it (reconstruction, 3 consecutive fragments; junctions verified at `10 days (d),` / `during which time` and `approach the room,` / `and the behaviors`):

> "Unless otherwise specified, a mouse was kept in a single chamber for 10 days (d), during which time the experimenters did not approach the room, and the behaviors of the animals were remotely monitored via an overhead camera."

### (c) Measured environmental data over time

The fetch was asked, variable by variable, to search Methods, Results, figure captions, tables, the Supplementary list and Data Availability. Results:

| Variable | Reported as measured over time? | What the paper has instead |
| --- | --- | --- |
| Temperature | **No** | the set value `22 °C` in the constancy sentence above |
| Humidity | **No** | the set value `50%` in the same sentence |
| Sound level | **No** | a one-off bound: `in a quiet (< 40 dB) underground room without exterior windows.` |
| Vibration | **No** | not mentioned at all |
| CO2 | **No** | not mentioned at all |
| Personnel access | **No** | a protocol condition: `the experimenters did not approach the room,` |

Applying PUBLISHED IS NOT PERFORMED to each:
- Temperature and humidity: the paper **ASSERTS** these as maintained conditions. No number is printed as a measurement — there is no table cell, no figure trace, no mean-with-dispersion, no sampling rate, no denominator. The paper therefore **ANNOUNCES** the environmental condition; it does not measure it.
- Sound: `< 40 dB` **BOUNDS** the quantity. It is a specification of the room, with no time axis, no instrument named and no denominator. A bound is not a log.
- Vibration, CO2: absent entirely. Nothing to classify.
- Personnel access: `the experimenters did not approach the room` is a **protocol stipulation**, not a record. The overhead camera is real instrumentation, but it is pointed at the animal, not at the door.

The fetch also reported that Data Availability refers to data available on request, and that the Supplementary list contains only a PDF and a video.

### The one environmental variable that IS instrumented continuously

This cuts against the entry's phrase *not an instrumented environment* and must be stated plainly: the paper **does** log an environmental variable continuously and **does** report a periodic component in it. That variable is **illuminance inside the chamber**, sampled over the 10-day runs and subjected to periodogram analysis, from which the paper's headline period is derived. See the LM figures below.

The distinction the entry needs, and does not draw, is this: illuminance is the paper's **manipulated / self-selected variable** — the thing the experiment is about. It is instrumented *because* it is the signal. The nuisance variables that constancy claims are supposed to cover (temperature, humidity, sound, vibration, CO2, access) are the ones with no log. The entry's observation survives on the nuisance variables; the bare phrase *not an instrumented environment* does not, because the box's light is instrumented at high resolution.

### (d) Period values

Every period figure the fetch returned, with arm and denominator:

| Arm / group | Signal | Period | n |
| --- | --- | --- | --- |
| **LM** (self-controlled light) | illuminance | **24.5 +/- 0.5 h** (Results) / **24.5 +/- 0.4 h** (Abstract) | 76 mice |
| **LM** | locomotion | 24.4 +/- 0.5 h | 76 mice |
| LD | locomotion | 24.1 +/- 0.2 h | 27 mice |
| LL | locomotion | 24.6 +/- 0.5 h | 24 mice |
| DD | locomotion | 23.8 +/- 0.4 h | 24 mice |
| LF | locomotion | **no numeric period given** | — |
| Csnk1e tau/+ | illuminance / locomotion | 22.0 +/- 0.8 h / 22.1 +/- 0.5 h | 12 mice |
| Csnk1e tau/tau | illuminance / locomotion | 21.4 h / 21.2 h (no uncertainty) | 1 mouse |
| random-hole control | illuminance / locomotion | 24.5 +/- 0.5 (printed `d`) / 24.4 +/- 0.4 | n not stated |

Sentences as served:

> "Based on the periodogram analysis of a total of 76 mice, we detected circadian periods of 24.5 ± 0.5 h"

> "The periods of the locomotor activity rhythms were 24.1 ± 0.2 h in the LD group (n = 27 mice),"

> "24.6 ± 0.5 h in the LL group (n = 24 mice), and 23.8 ± 0.4 h in the DD group (n = 24 mice)."

> "The period of the locomotor activity rhythm did not significantly differ between the LM and LF groups"

> "Even in this random configuration, the mice exhibited circadian rhythms of illuminance (24.5 ± 0.5 d)"

Per the discipline rule on hedged-vs-bare formulations, the formulation to carry is the **Results** one — `Based on the periodogram analysis of a total of 76 mice, we detected circadian periods of 24.5 ± 0.5 h` — because it is the one that states its method (periodogram), its denominator (76 mice) and its dispersion. The abstract's `24.5 ± 0.4 h` is the bare restatement.

**Numerator class and denominator for the entry's number.** The entry prints `tau = 24.5 +/- 0.4 h`. The quantity that carries exactly those digits is: *the dominant periodogram period of the **self-selected illuminance** time series of mice in the **LM** (light-modulating, self-controlled) arm*, denominator **n = 76 mice**, as printed **in the Abstract**.

Near neighbours it is NOT, checked one by one:
- `24.4 +/- 0.5 h` — same arm, same 76 mice, but the **locomotor** rhythm. One word away.
- `24.5 +/- 0.5 h` — same arm, same signal, same 76 mice, but as printed in **Results**. Same digits before the `+/-`, different dispersion.
- `24.6 +/- 0.5 h` — **LL** arm, n = 24, locomotion. Different arm and different denominator.
- `24.5 +/- 0.5` (printed `d`) — the **random-hole control**, illuminance, n not stated. Numerically near-identical to the entry's figure and belongs to a different group entirely.

**Overlap in both directions.** What the paper's 24.5 +/- 0.4 h class **misses**: the locomotor-activity period, which is what an unqualified `tau` for a circadian paper would normally denote — that figure is 24.4 +/- 0.5 h, and the entry's number does not cover it. What the paper's class **includes that an unqualified tau excludes**: the period of an animal's *nose-poke-driven light selection*, i.e. a behavioural choice variable rather than a locomotor output; a reader who takes `tau = 24.5 +/- 0.4 h` as the free-running locomotor period of these mice has the wrong quantity.

So: **tau = 24.5 +/- 0.4 h is printed in this paper, in the Abstract, for the LM arm's illuminance rhythm, n = 76 mice.** It is not printed in Results in that form, it is not a locomotor period, and it does not belong to any of the four arms the entry lists.

### (e) Identifier identity

NCBI id converter, one call, `ncbi.nlm.nih.gov/pmc/utils/idconv` (followed its 302 to the current PMC endpoint), raw response:

> `{"status":"ok", ... "records":[{"doi":"10.1038/s41598-024-58415-x","pmcid":"PMC10987682","pmid":38565587,"requested-id":"PMC10987682"}]}`

**PMC10987682 = DOI 10.1038/s41598-024-58415-x = PMID 38565587.** The entry's PMCID and the entry's journal hit are **ONE DOCUMENT**. The entry is right to say so, and right that the PMCID was an identifier awaiting conversion rather than a second source.

(The converter warned that the `email` and `tool` query parameters were missing. That is expected: supplying a contact address is forbidden here, and the call succeeded without it.)

### (f) One sentence

**Asserted constant** — for temperature, humidity, sound, vibration, CO2 and personnel access, the paper states set values, a bound and a protocol and prints no measurement of any of them over time; it is **instrumented** only for illuminance, the variable it is manipulating.

## REGIME

The paper's regime in its own words, and whether the entry's claim sits inside it:

- **Population / unit of analysis.** Individual mice, one per chamber, analysed as `a total of 76 mice` in the LM arm, with LD n = 27, LL n = 24, DD n = 24, Csnk1e tau/+ n = 12, Csnk1e tau/tau n = 1. Unit = one mouse-run.
- **Operating condition.** `a mouse was kept in a single chamber for 10 days (d), during which time the experimenters did not approach the room` — a 10-day undisturbed run, extended to 30 days for 9 mice. `A total of 12 chambers were prepared, and each chamber was placed in a single soundproof box in a quiet (< 40 dB) underground room without exterior windows.`
- **Instrument.** Nose-poke operant apparatus with `four illuminance levels: 0.21 lx (level 1), 2.1 lx (level 2), 21 lx (level 3), and 210 lx (level 4)`, logarithmic stepping — `When the mice poked their noses into the Up hole, the illuminance was increased by one level in a logarithmic series` and `When the mice poked their noses into the Down hole, the illuminance decreased by one level.` Behaviour read out by overhead camera; periodicity by periodogram.
- **Arms.** LM (self-controlled), LF (light-forced, yoked: `The LF mice were housed in the same type of chamber but had no control over the illuminance,`), LD (`the illuminance automatically set to switch between dark (level 1) and light (level 4) conditions every 12 h`), LL (210 lx constant), DD (0.21 lx constant), plus Csnk1e tau mutants and a random-hole control. Per the fetch, LL and DD are described in Results only, not in Methods.
- **Threshold / category.** Period extracted as the dominant periodogram peak; the `< 40 dB` room figure is a categorical specification, not a per-run measurement.

**Does the entry's claim sit inside this regime?** The constancy claim and the no-log claim do: both are about what this paper's Methods report, and I checked the sections where such a report would live. The tau claim sits **partly outside**: it is inside the paper, but outside the arms the entry names, and outside the signal (locomotion) that an unqualified `tau` implies. The entry's framing *deliberate-light manipulation* is squarely inside the regime — self-controlled or forced illuminance is exactly the manipulation. The framing *not an instrumented environment* sits inside the regime only once narrowed to the nuisance variables.

## DEFECTS FOUND

1. **Author front matter wrong in two places.** The entry cites `Ogasawara M., Matsumoto N., Takeuchi H. et al.` The front matter reads **Jun Ogasawara** (initial **J**, not M), Nobuyoshi Matsumoto (N — correct), **Yuki Takeuchi** (initial **Y**, not H). Two of the three named initials are wrong. Taken from front matter, not from a short form.

2. **The tau is attributed to no arm, and the arms the entry lists do not include the one it came from.** The entry prints `tau = 24.5 +/- 0.4 h` and separately says the paper `uses LD/LF/LL/DD arms`. A reader joins those and lands in the wrong place. The figure belongs to **LM**, which the entry never names; LD prints 24.1 +/- 0.2 h, LL 24.6 +/- 0.5 h, DD 23.8 +/- 0.4 h, and **LF prints no numeric period at all** (`The period of the locomotor activity rhythm did not significantly differ between the LM and LF groups`). The entry's arm list is true as far as it goes — all four exist — but it omits LM, LF is a null-result arm with no number, and the omission is exactly the arm that carries the quoted value.

3. **Signal mis-specification.** `24.5 +/- 0.4 h` is the **illuminance** period, not the locomotor period. The locomotor period for the same 76 mice is 24.4 +/- 0.5 h. The entry's bare `tau` invites the locomotor reading.

4. **Dispersion taken from the bare restatement.** The entry's `+/- 0.4` is the **Abstract's** figure. The Results print `24.5 ± 0.5 h` for the same group and signal, with the method and denominator attached. The fetch flagged this as an internal conflict in the paper. Per the hedged-cited rule the Results form is the one to carry, so the entry is quoting the paper's own weaker statement of the number. **This discrepancy is reported at my read level (summariser over the HTML page), not verified against the typeset PDF** — I could not spend a fetch on the PDF.

5. **`not an instrumented environment` is too broad as written.** The paper instruments and logs illuminance continuously for 10-to-30-day runs and reports its periodicity. The entry's own observation is about the *nuisance* variables; stated as a flat denial of instrumentation it is false on the paper's central measurement.

6. **Neighbours of the constancy sentence: not obtained.** I have the Methods sentence verbatim but not the sentences adjacent to it in Methods; the adjacent sentences I report are from the Results soundproof-box passage. Sub-claim (b) is therefore answered in full for the quotation and its scope, and **incompletely for the Methods neighbours**. Not a negative finding about the paper.

7. **`WITHOUT REPORTING ANY LOG` is an unenumerated universal over part of the artifact.** Classifying it as the rule requires:
   - **Instances I opened:** the nature.com article page — Abstract, Results, Methods, figure captions, the Supplementary Information file list, Data Availability. Over these, the claim is **true**: no log, trace, table or summary over time of temperature, humidity, sound, vibration, CO2 or personnel access.
   - **Instances I did NOT open:** the **Supplementary Information PDF** and the **supplementary video**. COULD NOT READ, not read-and-empty.
   - **Therefore:** the no-log claim is **true over the instances I opened, and unenumerated over the Supplementary PDF.** It is not established as a universal across the whole publication. That said, the kind of document that could overturn it is a supplementary environmental-monitoring figure or table; a supplementary PDF *is* the kind of document that could carry one, so this is a real gap and not a formality. I am naming it as an unopened instance, not nominating it as a likely refutation.

8. **No defect in the identifier point.** PMC10987682 and the journal hit are one document, confirmed by conversion in one call. The entry's identifier hygiene is correct here, and it correctly treated the PMCID as something to convert rather than a route.

## ROUTES THAT FAILED

- `https://doi.org/10.1038/s41598-024-58415-x` — **first attempt rate-limited at the target** (`RATE_LIMIT_EXCEEDED`, source `target`). A second attempt returned a 302 to the nature.com article URL with a `code=` and `error=cookies_not_supported` query string.
- `curl https://pmc.ncbi.nlm.nih.gov/tools/idconv/...` — `curl: (56) CONNECT tunnel failed, response 403`. Tool-scoped at the proxy; WebFetch reached the same URL immediately afterwards and returned the JSON.
- `curl https://www.nature.com/articles/s41598-024-58415-x` — `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, 0 bytes. Same tool-scoped refusal.
- `https://www.ncbi.nlm.nih.gov/pmc/utils/idconv/v1.0/?ids=...` — 302 to `https://pmc.ncbi.nlm.nih.gov/tools/idconv/api/v1/articles/`. Not a failure; the old endpoint now redirects and the redirect must be followed by hand.

**Route correction for the ledger's own notes.** The standing note says *nature.com fails both ways even for open access*. That is **not what happened here**: `WebFetch` on the nature.com article URL (reached via the doi.org 302, query string intact) returned Abstract, Results, Methods, figure captions, the Supplementary list and Data Availability in one call. What failed on nature.com was `curl`, with the same proxy-scoped `CONNECT ... 403` that fails on every host under curl here. The note appears to generalise a curl-shaped failure into a host block. No NSF PAR, institutional-repository or scholar.archive.org route was needed, and none was attempted.

## BEARING ON THE LEDGER ENTRY

**Hold, with one leg struck and one narrowed.**

- **The constancy-quotation leg HOLDS.** The sentence is verbatim (modulo the degree sign), it is in Methods, its opening words scope the interior of the soundproof box, and the clause **asserts** 22 °C and 50% RH as maintained conditions with no instrument, interval, tolerance or excursion given. This is the entry's best example and it survives inspection.

- **The no-log leg HOLDS over everything I opened, and must be re-stated as enumerated rather than universal.** Temperature and humidity are announced; sound is bounded at `< 40 dB`; vibration and CO2 are absent; personnel access is a protocol stipulation (`the experimenters did not approach the room`) read out by nothing. The entry should say *no log in the article text, figures, captions, Supplementary file list or Data Availability — Supplementary PDF unopened* rather than *without reporting any log*. That is the difference between a checked finding and an unenumerated universal, and the batch before this one was burned by exactly that difference.

- **NARROW the framing phrase.** `not an instrumented environment` should become *the nuisance variables are not instrumented*. The paper logs illuminance continuously across 10-to-30-day runs and reports a periodic component in it. Left as a flat denial, the phrase is false on the paper's own central measurement, and an opponent of the entry needs only the LM illuminance periodogram to say so.

- **STRIKE the tau leg as written and rebuild it.** `tau = 24.5 +/- 0.4 h` with arms given as LD/LF/LL/DD is wrong on three counts at once: wrong arm (it is LM, unlisted), wrong signal (illuminance, not locomotion), and the dispersion is the Abstract's `+/- 0.4` where Results print `+/- 0.5`. Replace with: *Results report a periodogram illuminance period of 24.5 +/- 0.5 h in the LM (self-controlled-light) arm, n = 76 mice; the locomotor period for the same mice is 24.4 +/- 0.5 h; the Abstract restates the illuminance figure as 24.5 +/- 0.4 h.* Note also that LF carries no numeric period, so listing it as an arm with a value is unsupported, and that a near-identical `24.5 +/- 0.5` belongs to the random-hole control — a number one word away from the claim's.

- **CORRECT the citation front matter.** First author initial J, not M; third author Y. Takeuchi, not H.

- **The one-document leg HOLDS and is now confirmed, not assumed.** PMC10987682 converts to DOI 10.1038/s41598-024-58415-x, PMID 38565587 — the same article. The entry's identifier hygiene is sound on this point: it flagged an unconverted PMCID as something to resolve rather than counting it as a second source, and the resolution confirms exactly one document. If the entry carries an unopened-prior count that includes the PMCID as a separate item, that count should drop by one.

- **CONVERT to a promotion condition:** the entry's no-log observation can be promoted from *true over what was opened* to *true of the publication* by one further read — the Supplementary Information PDF. That is the right kind of document to settle it (a supplementary PDF is where an environmental-monitoring figure or table would live if one existed). Until it is opened, the entry should carry the no-log finding as enumerated, with the Supplementary PDF named as the one unopened instance.
