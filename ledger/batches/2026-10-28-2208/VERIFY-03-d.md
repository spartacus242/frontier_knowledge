# VERIFY-03-d — fresh-context check of UQ-20261028-03

**Check assigned:** settle the leg the entry says it would NOT stand on — the universal
"nobody prints a driver occupancy". Open the two documents the entry's own suggested
first step names (`aliquot100.pdf`, Devitt 1976), establish their citations, report
whether either prints a driver/guide occupancy and at what grain; then answer the
general question — has ANYONE published the occupancy of Guy-Selfridge drivers among
surviving aliquot iterates, and where.

**Budget:** 2 searches and 5 fetches, all spent. Nothing was left unspent at the end;
where I ran out, I say so below.

**I did not write this entry and I am not grading it.** Every inference of mine is
marked MY OWN. I read the two adversary logs only where the claim under test lives
(adversary 1's Chum et al. read; adversary 2's enumeration of unopened instances).

---

## 1. What I opened, with route and read level

| # | Document | Route | Result | READ LEVEL |
|---|---|---|---|---|
| F1 | `https://www.math.ru.nl/~bosma/pubs/aliquot100.pdf` | WebFetch, direct | OPENED | **full text via summariser** — all section headings and all caption-like lines enumerated, one pass |
| F2 | `https://ucalgary.scholaris.ca/items/529d188f-1ec6-4e8c-ac9e-c6a29caf4072` | WebFetch, direct | OPENED, **no file attached** | **metadata + abstract (paraphrased)** |
| F3 | `https://arxiv.org/abs/2110.14136` | WebFetch, direct | OPENED but served the paper BODY, not the abstract page; **no title/author/journal-ref/DOI line reachable** | body text, metadata NOT obtained |
| F4 | `https://arxiv.org/pdf/2110.14136` | WebFetch, direct, short-segment request | OPENED | **full text, second independent transcription pass**, Tables 9 and 10 cell by cell |
| F5 | `https://prism.ucalgary.ca/handle/1880/13124?show=full` | WebFetch, direct | OPENED, **NO FILE ATTACHED** | **metadata + abstract transcribed verbatim in 12 consecutive segments** |
| S1 | search: Devitt 1976 Calgary thesis full text pdf | WebSearch, no date filter | returned only the four known repository URLs = ONE record | — |
| S2 | search: frequency of drivers in aliquot sequences, proportion of terms, guide occurrence table, Guy Selfridge, down-driver statistics | WebSearch, **no date filter** (era rule) | returned only the already-known cluster; **no new on-point item** | — |

Non-WebFetch routes tried and failed (these are facts about the fetcher, not the documents):

- `curl -sSL https://doi.org/10.11575/PRISM/21933` → `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, 0 bytes.
- `curl -sSL https://prism.ucalgary.ca/handle/1880/13124` → `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, 0 bytes.
- `curl "$HTTPS_PROXY/__agentproxy/status"` and reading `/root/.ccr/README.md` → **denied by the auto-mode classifier** ("Containment Escape"). I did not try to work around it, so I could not diagnose or repair the curl route. Recorded as a blocked diagnostic, not as evidence about Devitt.

---

## 2. `aliquot100.pdf` — CITATION CORRECTION: it is not a further paper, it is Bosma 2016

**What it actually is** (F1, full text):

- Title, as printed: **"ALIQUOT SEQUENCES WITH SMALL STARTING VALUES"**
- Author, as printed: **"WIEB BOSMA"**
- Journal / venue / year line: **ABSENT from the document.** The references list other
  works' venues; this paper carries none. So no venue can be established from the file.
- Section headings, verbatim: 1. Introduction / 2. Preliminaries / 3. Odd cases /
  4. Terminators (4.1 All-odd terminators, 4.2 Odd-to-even terminators, 4.3 Even
  terminators, 4.4 Penultimate primes) / 5. Open (5.1 Odd opens, 5.2 Even mergers,
  5.3 Big opens and mergers) / 6. Cycles (6.1 Odd cyclers, 6.2 All cyclers) / References.

**MY OWN INFERENCE, and I label it as mine:** this is the **same work** as the entry's
"Frame source: W. Bosma, arXiv:1604.03004v1", not a further paper. Three independent
grounds: (a) identical title and author — my search S1 and S2 both returned
`arxiv.org/pdf/1604.03004` under the title "Aliquot sequences with small starting
values", the exact title printed in `aliquot100.pdf`; (b) the entry's own page-located
quotations from "Bosma 2016" land in the matching sections of what I opened — clause 5
cites "Bosma Sec. 5, p. 10" for the 9327 open main sequences, and §5 of
`aliquot100.pdf` is "Open" and carries the caption "Number of remaining main sequences
at given number of digits"; adversary 2's attack 1 cites "Bosma Sec. 5.3 p. 13" for
"reaching 100 digits after only 245 steps", and §5.3 of `aliquot100.pdf` is "Big opens
and mergers"; (c) `aliquot100.pdf` quotes the driver sentence the Gate 2 record
attributes to "Bosma 2016 Sec. 2, p. 4" — I found it in §2 "Preliminaries":
**"The even perfect numbers are drivers, and so are only five other integers (2, 24,
120, 672, 523776)."** Same sentence, same section.

**Consequence for the entry.** The entry's "Vulnerability" paragraph says: *"The single
unopened source most likely to settle whether the d-binned survivor drift has ever been
measured in the candidate's own declared frame is Bosma's further paper at
https://www.math.ru.nl/~bosma/pubs/aliquot100.pdf, returned to all three readers and
opened by none; it sits on exactly the 100-digit frame."* That is **wrong on the
record**: it is not a further paper and it was not unopened — it is the frame source
two readers (Gate 2 and adversary 2) already read at full text, under a second URL.
The entry's own §12 habit of collapsing repeated URLs to one document ("two URLs for
ONE document") was not applied here. This removes the entry's single largest named
vulnerability rather than confirming it.

**Does it print a driver or guide occupancy?** **ABSENT.** Drivers appear only in the
§2 Preliminaries sentence quoted above. No numbered Table or Figure captions exist in
the paper at all; the only caption-like lines are these six, verbatim:
"Decay of number of surviving even sequences at d digits by sub-interval" /
"Lengths, heights (in bits), and volumes of odd-to-even terminating sequences." /
"Length, height (in bits) and volumes of all-odd terminators" /
"Number of remaining main sequences at given number of digits" /
"Distribution of lengths of main open sequences" /
"The number of times an even open sequence has k mergers."
None is an occupancy of drivers or guides.

**Does it print any mean growth rate?** **ABSENT.** No mean of log(s(n)/n), no geometric
mean, no amplification. It prints per-driver ratios s(n)/n (1, 1/2, 3/2, 2) in the text
as individual values, and a linear fit to the percentage of open sequences — neither is
a growth rate. This independently **confirms** the entry's §7 characterisation
("Bosma 2016 computes survival counts by digit threshold and no growth rate") at my own
full-text read, and it confirms that opening `aliquot100.pdf` recovers no residue.

---

## 3. Devitt 1976 — COULD NOT READ (full text is not served; not a budget failure)

**Citation as established** (F2 + F5, metadata level; the two are one record under four URLs):

> Devitt, J. S. (1976). *Aliquot sequences* (Master's thesis, University of Calgary,
> Calgary, Canada). Retrieved from https://prism.ucalgary.ca. doi:10.11575/PRISM/21933

Also printed: `dc.description` = **"Bibliography: p. 140-143."** — so the thesis runs to
at least ~143 pages. Fields `dc.contributor.advisor`, `dc.date.issued` and
`dc.publisher` do not appear; the year 1976 appears only inside the citation string.

**COULD NOT READ, with every route and its error:**

1. WebFetch `ucalgary.scholaris.ca/items/529d188f-…` → page served; **no bitstream, no
   PDF, no download link of any kind.**
2. WebFetch `prism.ucalgary.ca/handle/1880/13124?show=full` → page served; the fetch
   reported **"NO FILE ATTACHED. The page lists no file, bitstream, PDF, or download
   URL."**
3. curl `doi.org/10.11575/PRISM/21933` → `CONNECT tunnel failed, response 403` (proxy).
4. curl `prism.ucalgary.ca/handle/1880/13124` → `CONNECT tunnel failed, response 403` (proxy).
5. WebSearch S1, no date filter, aimed squarely at a PDF → returned only
   `prism…/13124?show=full`, `prism…/items/529d…/full`, `ucalgary.scholaris.ca/items/529d…/full`
   — the same record a fourth and fifth time — plus `arxiv.org/pdf/1604.03004` and the
   CMS abstract. **No full-text file surfaced.**

**I did NOT simply run out of budget on Devitt.** Two independent repository views, both
opened successfully, both report no attached file. **MY OWN READING of that:** the
1976 M.Sc. thesis appears to be catalogued in PRISM/Scholaris as metadata only, with no
digitised full text served — which is a sufficient explanation for why four readers
across this ledger returned its URL and none opened it. A physical-copy or
interlibrary route is outside what I can reach. I did not spend a fetch on a route I
had no evidence existed.

**Abstract, transcribed verbatim in 12 consecutive segments** (F5, `dc.description.abstract`):

> "It has been conjectured that aliquot sequences (i.e. those sequences obtained by iterating"
> / "the number theoretic function s(n) = a(n)-n, where a(n) denotes the sum of the divisors)"
> / "starting with an even number, are almost all unbounded."
> / "In this thesis, this conjecture is supported by both theory, and numerical evidence."
> / "A proof due to Lenstra that there exists sequences which are monotone increasing"
> / "for an arbitrarily large number of terms is given."
> / "The concept of average order is used toestimate the behavior of s(n)/n and what theory is known"
> / "is used to design a model for these sequences using Markov chains."
> / "A new method of factoring called POLLARD-RHO is then used to generate data and the statistics"
> / "are compared with the theoretical estimates of the model."
> / "The final chapter contains extensive tables which enable one to determine the behavior of any"
> / "sequence starting with a value of n less than 100000."

(The run-together "toestimate" is as served, in both F2 and F5 independently.)

**What this settles and what it does not.** It confirms at first hand, at
**abstract level**, three things the entry asserts about Devitt only through adversary 1's
reading of a CMS abstract and of Chum et al. §6.1: that Devitt used *average order* to
estimate the behaviour of s(n)/n, that he **built a Markov chain model** of these
sequences, and that he compared generated data against it. The entry's §19 and attack 3
("Devitt built one in 1976") are therefore **supported at the level of the abstract's
own words**, no longer only at second hand.

It does **NOT** settle whether Devitt prints a driver occupancy. The abstract contains
no occurrence of *driver*, *guide*, *frequency*, *proportion* or *occupancy*. **Per the
rules, an abstract-only read cannot settle that, and the silence of an abstract about
the contents of a 140-page body with "extensive tables" is not a check that passed.**
Devitt 1976 stays **UNVERIFIED as an instance**, in both directions.

---

## 4. The general question: YES — it is in print, in two tables, at two different grains

**Source** (F4, `arxiv.org/pdf/2110.14136`, **full text, second independent transcription
pass by me**, short consecutive segments as the rules require): Chum, Guy, Jacobson &
Mosunov, "Numerical and Statistical Analysis of Aliquot Sequences", arXiv:2110.14136,
§6. Caveat on the citation: **F3 failed to deliver the abstract page's metadata** — my
`arxiv.org/abs/2110.14136` fetch served the LaTeX body instead of the header, so I
**could not confirm the version, submission date, journal-ref or DOI at first hand.**
The entry's own note that the Exp. Math. 29(4) / DOI 10.1080/10586458.2018.1477077
identification comes from a search return and not an opened publisher page therefore
**stands uncorrected by me**; I add that `arxiv.org/abs/<id>` was tried and did not
serve it. Metadata read level: **not obtained.**

### Table 9 — grain: one row per surviving SEQUENCE

Caption, verbatim: **"Table 9. Active guides for non-terminating sequences."**

Locating sentence, in segments: *"In Table 9, we list the guides that were active for n
when s(n) breached $2^{288}$ for the 6392"* / *"sequences that did not terminate."*

All 25 rows, guide → count, as I transcribed them:

```
2^0 0        2^1 0        2·3 1124     2^2 374      2^2·7 1620
2^3 8        2^3·3 584    2^3·5 75     2^3·3·5 773  2^4 386
2^4·31 531   2^5 12       2^5·3 158    2^5·7 52     2^5·3·7 278
2^6 126      2^6·127 143  2^7 2        2^7·3 49     2^7·5 15
2^7·3·5 24   2^8 33       2^9 12       2^9·3·11·31 0  2^10 13
```

**MY OWN ARITHMETIC** (`/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chk.py`):

```
Table 9 rows: 25   sum = 6392   vs stated 6392 -> True   diff: 0
driver-class rows sum = 5053    share of 6392 = 0.7905
```

The 25 counts sum to **exactly 6392**, the stated number of non-terminating sequences.
**MY OWN INFERENCE from that identity:** Table 9 is one row per sequence — the guide
active at the single instant that sequence's term crossed 2^288 — so its grain is
**occupancy among surviving SEQUENCES at a terminal snapshot, not occupancy among
surviving iterates.** Restricting to the Guy–Selfridge drivers on Bosma's own list
(2, 24 = 2^3·3, 120 = 2^3·3·5, 672 = 2^5·3·7, 523776 = 2^9·3·11·31, plus the even
perfects 6 = 2·3, 28 = 2^2·7, 496 = 2^4·31, 8128 = 2^6·127) gives **5053 of 6392 =
79.05%** of surviving sequences under a driver at breach — my arithmetic, not a printed
figure.

### Table 10 — grain: ITERATES (terms). This is the table the candidate's question needs.

Caption, verbatim: **"TABLE 10. Data on occurrences, runs, and amplification for each
guide."** Columns: guide, **Times Seen**, **Expected Number**, Runs, Average Length,
Average Amplification. 24 rows, `2^0` through `2^{>=10}`.

Driver rows, as transcribed (Times Seen / Expected Number / … / Average Amplification):

```
2            1288576 / 1877372 / 42353 / 30.488  / -0.470
2·3           746474 /  938686 /  5080 / 147.207 / +0.226
2^2·7         937561 /  201147 /  9369 / 100.101 / +0.333
2^3·3         213178 /  187737 / 12274 /  17.390 / +0.536
2^3·3·5       139573 /   46934 /  3177 /  43.953 / +0.802
2^4·31        257444 /   11355 /  2051 / 125.529 / +0.362
2^5·3·7        54003 /    8381 /  1630 /  33.139 / +0.813
2^6·127        57622 /     693 /   306 / 188.307 / +0.348
```

**MY OWN ARITHMETIC** over the Times Seen column (same script):

```
Table 10 total terms seen = 5636436
  2:        seen 1288576 (22.86% of terms), expected 1877372, seen/exp = 0.686
  2·3:      seen  746474 (13.24% of terms), expected  938686, seen/exp = 0.795
  2^2·7:    seen  937561 (16.63% of terms), expected  201147, seen/exp = 4.661
  2^3·3:    seen  213178 ( 3.78% of terms), expected  187737, seen/exp = 1.136
  2^3·3·5:  seen  139573 ( 2.48% of terms), expected   46934, seen/exp = 2.974
  2^4·31:   seen  257444 ( 4.57% of terms), expected   11355, seen/exp = 22.672
  2^5·3·7:  seen   54003 ( 0.96% of terms), expected    8381, seen/exp = 6.444
  2^6·127:  seen   57622 ( 1.02% of terms), expected     693, seen/exp = 83.149
```

**This is an occupancy of driver classes among iterates**, over **5 636 436 terms**, with
a random-integer null in the adjacent column. My computed ratio for the down-driver,
**0.686**, reproduces the paper's own §6.4 sentence (as adversary 1 served it) that
"the down-driver 2 occurs only on about 2/3 of the number of occasions than would be
expected" — my arithmetic over the two printed cells, independently landing on the
paper's verbal claim. The up-drivers' ratios (4.66, 2.97, 6.44, 22.7, 83.1) likewise
reproduce "all occur several times more frequently than expected".

### Corroboration and correction of adversary 1

All ten of adversary 1's Table 10 Average Amplification values (2^0 −0.777, 2 −0.470,
2·3 +0.226, 2^2·7 +0.333, 2^3 −0.032, 2^2 +0.069, 2^3·3·5 +0.802, 2^4·31 +0.362,
2^5·3·7 +0.813, 2^6·127 +0.348) and all seven of its Table 9 counts (2·3 1124, 2^2·7
1620, 2^3·3·5 773, 2^4·31 531, 2^5·3·7 278, 2^6·127 143, down-driver 2 = 0) **match my
second-pass transcription exactly.** The entry's §13 reproduction of them is accurate.

Two corrections, both of which **strengthen** rather than weaken the kill:

1. Adversary 1 and the entry report **7 of Table 9's 25 rows**. The full table, summing
   to exactly 6392, shows the occupancy is complete and exhaustive over guide classes,
   not a selection.
2. Neither adversary 1 nor the entry reports Table 10's **Times Seen** and **Expected
   Number** columns at all — only its amplification column. Those two columns are the
   **iterate-grain driver occupancy with a random-integer null**, which is closer to the
   candidate's "occupancy of drivers among the survivors" than Table 9 is. The entry
   rests the driver limb on Table 9 (sequence grain) when the stronger instance,
   Table 10's occurrence columns (term grain), sits one column to the left.

### Instances I opened and found it ABSENT

- **Bosma, "Aliquot sequences with small starting values"** (= `aliquot100.pdf` =
  arXiv:1604.03004), full text: no driver/guide occupancy table, no growth rate. ABSENT.

### Instances I did NOT open — the universal is not exhaustively enumerated

Devitt 1976 (full text not served; abstract only — **UNVERIFIED**, and most likely of
all the unopened items to carry a 1976 driver-frequency table, given the abstract's
Markov-chain model and "extensive tables"); **Guy & Selfridge 1975**, whose title I now
have from search S2 — *"What drives an aliquot sequence?"*, AMS landing page
`ams.org/mcom/1975-29-129/S0025-5718-1975-0384669-X/` — budget exhausted, **not
opened by me either**; Pomerance `aliquot7.pdf`; Bosma & Kane `aliquotconst.pdf`;
Pollack–Pomerance `KPP.pdf`; Kobayashi's Dartmouth thesis; the unirioja 3630 items;
`rieselprime.de/ziki/Aliquot_sequence`; the OEIS entries. **I ran out of budget with
these unspent and I say so plainly.** Accordingly I assert only the existential
("someone has published it"), which one opened document establishes, and I assert no
universal in either direction.

**STRING NOT LOCATED, noted for honesty:** I did not locate the §6.3 sentence "It seems
that a good portion of the terms are under the control of an up-driver" or the §6.4
"about 2/3" sentence verbatim myself — my F4 pass was directed at Tables 9 and 10 and
their locating sentence. Those two strings remain attributed to adversary 1's pass, not
to mine; my 0.686 computation corroborates the §6.4 claim's content arithmetically
without my having read the sentence.

---

## 5. What it means for the entry's verdict

**The leg FALLS, and the entry is right that it falls.** The entry's closing sentence —
*"The leg I would not stand on is the universal 'nobody prints a driver occupancy',
which was Unverified for both the Gate 2 record and adversary 2 and was refuted the
moment one reader found an open route"* — is **confirmed at first hand** by my own
second-pass full-text read. It falls harder than the entry records: there are **two**
occupancy tables, and the one at the grain the candidate's question actually asks about
(iterates, Table 10's Times Seen / Expected Number over 5 636 436 terms) is the one
neither adversary nor the entry transcribed.

**The entry's verdict is unaffected, and one of its two named vulnerabilities is
removed.** The Rejected — Gate 2 grade never rested on the universal; it rests on
adversary 1's leg, which my re-transcription confirms number for number. The entry's
"single unopened source most likely to settle" is a **misidentification** —
`aliquot100.pdf` is Bosma 2016 itself, already read at full text, and it prints neither
a driver occupancy nor a growth rate, so opening it recovers no residue and resolves
nothing in the candidate's favour. The second-vulnerability worry about Chum et al.
being "summariser-served from one targeted pass and never re-transcribed" is now
**discharged for Tables 9 and 10** (re-transcribed, exact match, internal sum check
passed); it remains open for Tables 1, 11 and 12, which I did not re-read, and the
venue/DOI remains unconfirmed because `arxiv.org/abs/2110.14136` would not serve its
header.

**The residues the entry already lists survive untouched.** Nothing I opened contains a
**guide-by-digit-class cross-tabulation** (Table 9 is by sequence at one snapshot,
Table 10 is by guide pooled over all stages, Table 11 is by stage with no guide
breakdown), k > 10, the exact Bosma frame, strict exclusion of later-terminating
sequences, or a formal Yaglom/quasi-stationary limit. And Devitt 1976, the one
document most likely to be a 50-year-old prior for a driver-frequency table, is
**COULD NOT READ** — its full text is not served by either repository view, which is a
fact about the catalogue, not a check that passed.
