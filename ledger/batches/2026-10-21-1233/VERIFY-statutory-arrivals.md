# VERIFY — statutory returns and the chemistry shares of Li-ion batteries ARRIVING at recyclers

Checker note. Fresh context. Written 2026-10-21.
Query budget used: 3 of 6 searches; 5 of 5 fetches (cap reached — stopped).

## TASK AS HANDED

Settle whether an authority or a statutory return already PUBLISHES the chemistry
shares of end-of-life lithium-ion batteries ARRIVING at recyclers, in any region.
Open at least one actual return or guidance document rather than reasoning from titles.

## HEADLINE

PARTLY. A statutory instrument now exists that makes **battery chemistry a mandatory
reporting dimension on the arriving/treated side**, including a line item for
"the quantity of batteries from a chemistry supplied to recycling". But the chemistry
classes it uses are the **recycling-efficiency target classes** — lead-acid,
lithium-based, nickel-cadmium, others — i.e. **"lithium-based" is ONE bucket**.
It therefore does NOT publish shares *within* lithium-ion (NMC / LFP / LCO / NCA / LMO).
This is the regime distinction that decides the claim: the instrument's chemistry axis
sits one level above the axis the question asks about.

## PRIMARY DOCUMENT OPENED

### Citation, as the sources serve it

Commission Implementing Regulation (EU) 2025/2289 of 13 November 2025 — "on rules for
applying Regulation (EU) 2023/1542 ... to the reporting format, assessment methods, and
operational conditions for collecting and treating waste batteries." CELEX 32025R2289.
Entry into force (first date): 11 December 2025. A corrigendum exists, dated 2026-02-20
(EUR-Lex lists `.../2025/2289/corrigendum/2026-02-20/oj/eng/pdf`); I did not open it.

Front-matter caveat, flagged rather than papered over: the **OJ volume/page reference was
NOT obtained**. The EUR-Lex ELI page served metadata only (title, document date, entry into
force), not the body. The title, date and CELEX number above are front-matter; the body
content below is from a third-party mirror, not from the OJ text itself.

### Read level

- **EUR-Lex official (`eur-lex.europa.eu/eli/reg_impl/2025/2289/oj/eng`): METADATA ONLY.**
  Title, document date 13 Nov 2025, entry into force 11 Dec 2025. No recitals, no articles,
  no annexes. Explicitly NOT a full-text read.
- **Third-party mirror (`lawplayer.com/eu/act/32025R2289`): FULL TEXT, MEDIATED.** The
  fetch reader had the whole act (it reported articles, all three annexes and footnotes),
  but I received its report of the text, with only short fragments returned as strings.
  I did not obtain long verbatim passages, and the mirror itself states "The official
  EUR-Lex version prevails."
- Net read level for the body: **full text, read through a mirror and a summariser;
  verbatim coverage limited to short fragments.** Not "abstract only", not "could not read".

### Routes that failed

| Route | Outcome |
|---|---|
| `curl` → `eur-lex.europa.eu:443` | CONNECT tunnel failed, HTTP 403, `connect_rejected`. Tool-scoped per the routing brief; WebFetch reached the same host. |
| WebFetch → `eur-lex.europa.eu/eli/reg_impl/2025/2289/oj/eng` | 200 but **body not served** — metadata and navigation only. |
| WebFetch → `umwelt-online.de/recht/eu/25d/25d_2289.htm` (full-text mirror) | SERVER_ERROR from target. |
| WebFetch → `umweltbundesamt.de/en/node/14352` | **ROBOTS_DISALLOWED.** This is COULD NOT READ, not NOT FOUND. |

Fetch cap reached at that point; I stopped instead of routing around it.

## CLAIM A — does a statutory return publish tonnages or shares BY CELL CHEMISTRY?

**NO, at cell-chemistry granularity. YES, at coarse chemistry-class granularity.**

Chemistry is unambiguously a reporting dimension. Strings as served by the mirror:

- Article 1(2): *"shall be differentiated into battery chemistries."*
- Article 1(4): *"in accordance with the battery chemistries referred to in the recycling
  efficiency targets"*
- Annex I, Tables 1–5: a **"Battery chemistries"** column. Table 6: a **"Battery chemistry"**
  column.
- Annex I footnote: *"'Others' means any other battery chemistries not already listed"*

The granularity is fixed by Article 1(4)'s cross-reference — chemistries "referred to in the
recycling efficiency targets". Annex II's own table headings show what those classes are:

- Table 1: *"Recycling efficiency and recovery of materials of lead-acid batteries"*
- Table 2: *"Recycling efficiency and recovery of materials of lithium-based batteries"*
- Table 3: *"Recycling efficiency and recovery of materials of nickel-cadmium batteries"*
- Table 4: *"Recycling efficiency and recovery of materials of other waste batteries"*

So the chemistry axis is four-valued: lead-acid / **lithium-based** / nickel-cadmium / others.
The reader reported explicitly that the act **"does not mention NMC, LFP, LCO, NCA, or
'lithium-ion'"** and **"uses only broad groupings such as 'lithium-based'."**

**Regime statement.** Regulation 2025/2289 establishes a chemistry breakdown whose unit is
the *recycling-efficiency target class*, because its purpose is to compute a per-class
recycling efficiency rate (Annex I Table 6: *"Recycling efficiency rate per battery
chemistry"*). Inside that regime, "lithium-based" is an atom. The question handed to me asks
for shares *of the composition of that atom*. The instrument is **silent** there — not
contradicting the need, and not supplying it.

## CLAIM B — does it cover ARRIVALS at recyclers, or only placed-on-market / collection?

**YES, arrivals are covered, and chemistry is attached to them.**

The decisive string, Annex III item F.5 as served:

> *"The quantity of batteries from a chemistry supplied to recycling"*

That is a quantity, resolved by chemistry, at the point of supply to recycling — i.e. the
arriving stream, not the placed-on-market stream. Annex III is the *"Format for the quality
check report accompanying the data referred to in Annex I"*, so F.5 is a quality-check item
on an Annex I datum, which places the arriving-side chemistry quantity inside Annex I itself.

Grammar-on-both-sides caution, stated rather than hidden: I have F.5 as a standalone noun
phrase. I did **not** see the sentence or table cell it sits in, so I cannot confirm whether
it is a *reported* figure, a *denominator used in a calculation*, or a *field the quality
check interrogates*. The distinction matters for "publishes" and I could not settle it
within the fetch cap.

I also did **not** verify the exact Annex I Table 1 row labels for "collected" versus
"delivered to recycling". The reader confirmed the tables exist and are per category with a
chemistry column; it did not return those row labels.

## CLAIM C — tonnages by statutory category only?

Categories are present **in addition to** chemistry, not instead of it. Annex I table
headings, as served:

- Table 1: *"Portable batteries"*
- Table 2: *"Light means of transport (LMT) batteries"*
- Table 3: *"Starting, lighting and ignition (SLI) batteries"*
- Table 4: *"Industrial batteries"*
- Table 5: *"Electric vehicle (EV) batteries"*

Article 1(2) refers to the categories *"set out in Article 1(3)"* of Regulation (EU)
2023/1542 without enumerating them. So the Annex I grid is **category × chemistry-class**,
which is more than category-only — but still one level coarser than cell chemistry on the
chemistry axis.

## CLAIM D — element-level input composition?

**Not of the arriving input.** Annex I Table 7 is *"Recovery of materials rate per material"*,
and the ERP trade summary lists *"Recovery of critical raw materials"* among the reported
items. Those are **recovery rates on the output side**, with the material as the unit — not
an element-level assay of what arrived. Annex II Tables 1–4 likewise pair *"Recycling
efficiency and recovery of materials"* per chemistry class.

So element-level numbers exist in this instrument as **recovery performance**, whose estimand
is a rate per material, not **input composition**, whose estimand would be a mass fraction of
the arriving stream.

## CLAIM E — confidentiality / aggregation to protect business information?

**No business-confidentiality clause found; a document-level confidentiality claim exists.**

The only confidentiality wording the reader found is in the Annex III quality-check report
template:

> *"Claim for confidentiality"*
> *"to the public (on the Commission's webpage):"*
> *"Yes, with the exception of specific section(s) for specific reasons"*
> *"No, neither on the Commission's webpage, nor to the members of the TAC."*

That is a Member State's publication choice over its own quality-check report. The reader
stated the text **"contains no wording on business-sensitive information."**

Important non-inference, per the brief's rule that silence is not a prohibition: the absence
of a business-confidentiality clause does **not** establish that per-chemistry arrival
tonnages will in fact be published at recycler resolution. It establishes only that this
instrument does not impose such a clause. Equally, the presence of a document-level
confidentiality option is **not** evidence that the chemistry data will be withheld.

## SECONDARY SOURCE OPENED

**ERP Recycling, "Batteries: Commission adopts implementing rules for waste reporting",
news item dated 16 January 2026** (`erp-recycling.org`). **Read level: full text.**
This is a **trade-association news column**, not a return, a guideline or a primary
instrument, and it carries **no regulation number** — it describes an implementing regulation
"adopted on 13 November" without the year. Its chemistry wording is *"their chemical
composition"* only; it **lists no chemistry categories or types**. It attributes the content
to the Commission. Usable as corroboration that chemistry is a reporting axis; useless on
granularity, and it must not be cited for the chemistry classes.

## CANDIDATES NOT SETTLED — and the distinction kept strict

| Candidate | Status |
|---|---|
| Umweltbundesamt "Altbatterien" / BattG returns | **COULD NOT READ.** `umweltbundesamt.de/en/node/14352` → ROBOTS_DISALLOWED. Not NOT FOUND. |
| ZVEI "Recycling-Batterien 2025" | **NOT QUERIED** (budget). A ZVEI "Faktenblatt Recycling" PDF surfaced in search but was not opened. No finding. |
| Regulation (EU) 2023/1542 Art. 75 / reporting annexes | **NOT READ.** Only reached through 2025/2289's cross-references. Its own chemistry wording is unverified. |
| Commission recycling-efficiency annex | Partially reached as **Annex II of 2025/2289** (headings only). |
| Eurostat batteries data | **NOT QUERIED.** No finding either way. |
| Slovenian ARSO returns | **NOT QUERIED.** No finding either way. |

Nothing here supports a claim that these sources *lack* cell-chemistry data. They are
unexamined, which is a different finding from examined-and-absent.

## DEFECTS

1. **OJ front matter incomplete.** Volume/page reference for 2025/2289 not obtained; the
   EUR-Lex ELI page served metadata only. Title/date/CELEX are front-matter; the body is
   from a mirror that disclaims primacy.
2. **Corrigendum of 2026-02-20 not opened.** Any of the quoted annex wording could have been
   amended by it. Unverified.
3. **Verbatim coverage is fragmentary.** All body strings are short fragments returned by a
   summariser over a mirror. I did not attempt an ordered-consecutive-segment reconstruction,
   because the fetch cap was reached. No string here should be treated as OJ-verified.
4. **Annex III F.5 read without its surrounding clause.** Cannot distinguish a published
   figure from a calculation denominator or a quality-check prompt — and that distinction is
   exactly what "already PUBLISHES" turns on.
5. **Annex I Table 1 row labels not obtained.** The split between "collected" and
   "supplied to recycling" within the arriving side is unconfirmed.
6. **No actual published return was opened.** Only the instrument prescribing the format.
   Whether any return under 2025/2289 has yet been filed or published — and with what first
   reference year — was **not checked**. The task asked for a return or a guidance document;
   what I delivered is a guidance/format instrument.
7. **Regime mismatch is the load-bearing finding and must not be flattened.** "Reported by
   battery chemistries" is true of this instrument and false of the question's granularity.
   Citing Article 1(2) or Annex I's "Battery chemistries" column as evidence that cell
   chemistry shares of arriving Li-ion are published would be precisely the
   proved-in-one-regime-used-in-another defect.
8. **Single-source dependency on one mirror** for every body string. No independent
   confirmation of the Annex II table headings that fix the granularity.
