# UQ-20261016-38 — Independent verification log

**Source under check:** Fan, Sabolčec, Ansaripour, Tarun, Jaggi, Bosselut, Schlag,
"Can Performant LLMs Be Ethical? Quantifying the Impact of Web Crawling Opt-Outs",
arXiv:2504.06219. Version read: **v2 (2025-08-05)**; v1 submitted 2025-04-08.

**Date of check:** 2026-10-16

---

## 0. Access record and a material caveat about the quotes

| # | URL | Tool | Outcome |
|---|-----|------|---------|
| F1 | https://arxiv.org/abs/2504.06219 | WebFetch | **opened** — metadata, author list, version history |
| F2 | https://arxiv.org/pdf/2504.06219 | WebFetch | **opened** — title block, affiliations, section headings |
| — | https://arxiv.org/html/2504.06219v2 | raw `curl` | **PROXY-REFUSED** — `curl: (56) CONNECT tunnel failed, response 403`. Egress policy does not allow arxiv.org for raw curl from this session. Not retried or routed around. |
| — | `$HTTPS_PROXY/__agentproxy/status` | Bash | **REFUSED by local permission classifier** ("Credential Exploration"). Could not read proxy-side failure detail. |
| F3 | https://arxiv.org/html/2504.06219v2 | WebFetch | **opened** — Sections 3 and 4 |
| F4 | https://arxiv.org/html/2504.06219v2 | WebFetch | **opened** — Section 5, tables, full-text term search |
| F5 | https://arxiv.org/html/2504.06219v2 | WebFetch | **opened** — pedantic verification pass on strings, captions, Table 1/4 |
| F6 | https://icml.cc/virtual/2025/48727 | WebFetch | **opened** — venue record |

**Fetch count: 6 of 6 budget (at limit).** Refusals/blocks: **2** (one egress 403 on raw
curl, one local permission denial on the proxy status endpoint). Neither is a check that
passed.

**CAVEAT THAT QUALIFIES EVERY QUOTE BELOW.** Because raw HTTP to arxiv.org is blocked for
this session, the full text was reachable **only through WebFetch**, which renders the page
and answers via a summarizing model rather than handing back the raw document. That model
**refuses to emit any quotation longer than ~125 characters.** Consequences:

1. All quotes below are short fragments. Several sentences are therefore **truncated**, and
   where a sentence exceeds the limit I say so rather than reconstruct it.
2. I could not `grep` the document myself. The absence findings in Claim 7 are
   **model-reported full-text searches**, not searches I executed. I treat them as strong
   but not equal to a local grep, and I flag that in the Claim 7 verdict.
3. To mitigate, the two most load-bearing strings (the "minimal" phrase and the 8%
   sentence) were requested in **two independent fetch passes with differently-worded
   prompts** (F3 and F5). Both passes returned the identical wording, which is the best
   corroboration available under this access path.

---

## 1. Queries run

| # | Query | One-line result |
|---|-------|-----------------|
| S1 | `"Can Performant LLMs Be Ethical" "Quantifying the Impact of Web Crawling Opt-Outs" venue` | Returned arXiv v1/v2 pages **and** an ICML 2025 virtual page (icml.cc/virtual/2025/48727) — the lead on venue. |
| S2 | `Fan Sabolcec Schlag "Data Compliance Gap" arXiv 2504.06219 ICML 2025 OpenReview` | No DOI or proceedings record surfaced; only the arXiv PDF plus unrelated "compliance gap" papers. |

**Search count: 2 of 14 budget.**

---

## 2. The four words, from the document's own text

**UNIT OF ANALYSIS — FineWeb-Edu documents, stratified by their domain's current
robots.txt; and 1.5B-parameter models trained on the resulting corpora.**
- Sec. 3: `"We analyze the FineWeb-Edu dataset"`
- Sec. 3: `"excluding any documents that, as of January 2025, disallow crawling"`
- Sec. 3 (Fig. 2): `"the Top 20 filtered URL domains"` — domains used for *reporting*, documents for the stratification.
- Table 2 caption: `"between 1.5B models trained from scratch on 100B tokens"`

**ENDPOINT — composition statistics, token volume, benchmark accuracy, and verbatim
memorization.** Four distinct families:
- Composition: Fig. 3 caption, `"Distribution of WebOrganizer (Wettig et al., 2025) topic and format domains"`
- Volume: Sec. 3, `"the compliant version contains 8% fewer training tokens."`
- Accuracy: Sec. 5.2, `"we evaluate models on general knowledge understanding using LM-Eval-Harness developed by Gao et al. (2024)"`; Sec. 5.2, `"We use the Pinocchio dataset from Hu et al. (2023)"`
- Memorization: Sec. 5.4, `"the longest common continuous substrings (LCCS)"`; Table 4 columns `LCCS↓, BLEU↓, NYTimes-MCC↓, NYTimes-MCQ↑`
- A **fifth** endpoint not named in the claim set: Table 1, 50-gram overlap rate with three publisher domains.

**COMPARATOR — the unfiltered corpus against the robots.txt-filtered corpus, plus
subtractive and additive variants.**
- Sec. 3: `"We refer to the original, unfiltered dataset as non-compliant"`
- Sec. 3: `"the filtered version as compliant"`
- Sec. 5.2, news-removed: excludes `"all newspaper articles from these domains in our compliant corpus"`; appears as row `-News` in Table 2
- Sec. 5.3 additive variants (Table 3): `Compliant + News`, `Compliant + Med`, `Compliant + MathSci`, described as `"augmented by reintegrating domain-specific non-compliant documents"`

**ESTIMAND — the "Data Compliance Gap" (DCG), measured leave-one-out, in two settings.**
- Sec. 4.1: `"We define DCG as the downstream performance gap between the compliant and non-compliant trained models."`
- Sec. 4.2: `"We measure DCG using the standard Leave-One-Out approach."`
- Sec. 4.2, two settings: M1 = exact measure from full pretraining from scratch; M2 =
  approximation from continual pretraining, `"reintegrating non-compliant data into compliant training to approximate the DCG."`

---

## 3. Numbers checked (Claim 5)

### 3.1 "8% fewer tokens"
Sec. 3, "Data Filtering" paragraph:
> `"In comparison to the non-compliant corpus, the compliant version contains 8% fewer training tokens."`

- It is a number **of training tokens**, relative, not of documents or domains.
- **Stated with no uncertainty interval and no error bar.** The date qualifier
  "as of January 2025" sits earlier in the section, on the robots.txt filtering step, not
  on this sentence.
- Corroboration the paper itself offers: `"This ratio is consistent with what was reported in Longpre et al. (2024)."`
- **Arithmetic not independently checkable**: the paper gives no absolute token counts for
  the two corpora, so 8% cannot be recomputed from the document. The only absolute figure
  found is Sec. 5.3, `"the compliant dataset (4.5T tokens)"`, with **no non-compliant
  counterpart**, so no ratio can be formed. Appendix D.1 gives per-domain-group approximate
  totals (~1B, ~10B, ~1.4B tokens), which are not corpus totals.
- Separate and distinct figure, Sec. 5.2: `"an approximate 4% reduction in total tokens"` —
  this is the **news-removed** variant, not the compliance filter. The two must not be
  conflated.

### 3.2 The "minimal" phrase
Sec. 3, subsection "Data Distribution Change After Robots.txt Filtering". The fragment
appears **character-for-character**, confirmed in two independent passes:
> `"distribution differences between compliant and non-compliant data are minimal"`

The full sentence exceeds the 125-char ceiling of the access path, so it is **not reproduced
here in full**. Both passes report that it continues past the fragment to name exceptions:
a decrease in News Articles and Science & Tech, and an increase in Personal Blogs. The
phrase is therefore **hedged in its own sentence**, and quoting the fragment alone
overstates it.

### 3.3 42.5 vs 42.8
**Table 2.** Caption: `"Compliance gap evaluated over standard common knowledge benchmarks between 1.5B models trained from scratch on 100B tokens."`

Columns: Arc-C | Arc-E | CSQA | OBQA | MMLU | PIQA | SIQA | HS | LBD | WG | Avg

| Row | values | Avg |
|---|---|---|
| Non-compliant | 34.1 / 70.0 / 20.8 / 27.4 / 32.0 / 71.5 / 40.4 / 42.0 / 34.7 / 52.2 | **42.5** |
| Compliant | 32.8 / 69.1 / 20.2 / 26.0 / 32.0 / 71.0 / 41.5 / 42.0 / 35.4 / 57.5 | **42.8** |
| -News | 35.1 / 69.1 / 20.6 / 25.4 / 31.8 / 70.6 / 40.5 / 42.0 / 37.2 / 55.2 | 42.6 |

- These are **average accuracies over the ten listed general-knowledge benchmarks**, for
  1.5B models, 100B tokens, from scratch, LM-Eval-Harness.
- **Arithmetic I checked myself** on the reported digits:
  - Non-compliant sum = 34.1+70.0+20.8+27.4+32.0+71.5+40.4+42.0+34.7+52.2 = 425.1;
    /10 = **42.51 → 42.5 ✓**
  - Compliant sum = 32.8+69.1+20.2+26.0+32.0+71.0+41.5+42.0+35.4+57.5 = 427.5;
    /10 = **42.75 → 42.8 ✓** (rounds up)
  - -News sum = 35.1+69.1+20.6+25.4+31.8+70.6+40.5+42.0+37.2+55.2 = 427.5;
    /10 = **42.75 → 42.8, but the table prints 42.6.** Flagged as an
    **unreconciled discrepancy of 0.15** in the -News row. Two readings are possible: a
    digit I received from the mediated read is wrong, or the printed average is. I could not
    adjudicate this without raw document access (fetch budget exhausted). It does not touch
    the 42.5/42.8 pair under check.
  - Direction: **the compliant model scores HIGHER (42.8 > 42.5)**, i.e. the measured gap at
    this scale is +0.3 in favour of compliance. Both differences (0.3, 0.1) are far inside
    the run-to-run noise one would expect at 1.5B/100B, and **the table carries no seeds,
    no standard deviations and no confidence intervals**, so no uncertainty can be carried
    through. The honest reading is "no detectable difference", not "compliance helps".
  - The 5.3-point WG (WinoGrande) spread, 52.2 → 57.5, is the single largest per-benchmark
    movement and runs *in favour of* the compliant model; it is most of what lifts the
    compliant average.

### 3.4 LCCS 23.11 → 21.27
**Table 4.** Caption begins: `"Memorization and factual knowledge assessment of New York Times articles across various models"` and continues `"using 256-token prefix prompts."`

- `23.11` = row **`PT + CD (Non-compl. 100B)`**
- `21.27` = row **`PT + CD (Compl., 100B)`**
- Both under the **256-token prefix** condition.
- Expansion, Sec. 5.4: `"the longest common continuous substrings (LCCS)"`, introduced
  `"as an indication of"` ... `"verbatim memorization."`
- **UNITS ARE NOT STATED IN THE PAPER.** Both verification passes report that the document
  never says whether LCCS is counted in characters or tokens, and never gives the
  computation. The only setup detail is `"we extracted the first 128, 256, and 512 tokens as prompts"`. So "23.11 → 21.27" is a decrease in a **unit-unspecified** overlap-length
  statistic. Note also that a *longest* substring length of 23.11 is a **mean over articles**
  (it is non-integral), though the paper does not label it as a mean.
- Article count, Sec. 5.4: `"We sampled 12'800 New York Times articles"` — note the
  typographically unusual apostrophe thousands separator. **12,800 confirmed.**
- No uncertainty is attached to either LCCS value.

### 3.5 "Consistent signal only on medical tasks"
Sec. 5.3:
> `"Among the three domains, only the Medical tasks show a consistent signal."`

Takeaway 4, Sec. 5.3:
> `"A noticeable compliance gap exists when non-compliant medical domain data are introduced at a later stage of training."`

Appendix A records a measurement limitation on one of the other domains:
> `"we are unable to reliably evaluate domain-specific knowledge in Math & Science"`

This matters: the "only medical" result is **partly a statement about which evaluations
worked**, not purely about which domains have a gap. The three domains are News, Medical,
Math & Science; benchmarks named are Reuters-QA, PubMedQA, SciQ, plus PubHealth under
Pinocchio (`"which covers samples from PubHealth"`, Sec. 5.2).

---

## 4. Claim-by-claim conclusions

**Claim 1 (UNIT) — CONFIRMED.** FineWeb-Edu documents, stratum assigned from the domain's
most recent robots.txt as of January 2025, plus 1.5B models trained on the resulting
corpora. All four supporting quotes located (Sec. 3; Table 2 caption).

**Claim 2 (ENDPOINT) — CONFIRMED.** All four named endpoints are present and located:
WebOrganizer topic+format (Fig. 3), token loss (Sec. 3, 8%), LM-Eval-Harness + Pinocchio +
domain QA (Sec. 5.2–5.3), verbatim memorization of 12,800 NYT articles (Sec. 5.4, Table 4).
Incomplete only in that it omits a fifth endpoint, the Table 1 50-gram overlap rate.

**Claim 3 (COMPARATOR) — CONFIRMED, but understated.** The unfiltered/filtered pair and the
news-removed variant all exist as stated. The claim omits the three **additive** comparators
in the continual-pretraining arm (`Compliant + News`, `Compliant + Med`,
`Compliant + MathSci`, Table 3), which is where the paper's one positive finding comes from.
Describing the comparator as only "unfiltered vs filtered plus news-removed" therefore
misses the design that produces the medical result.

**Claim 4 (ESTIMAND) — CONFIRMED.** "Data Compliance Gap" is the authors' own term
(Sec. 4.1); leave-one-out is stated in the authors' own words (Sec. 4.2); token-loss
prevalence is reported (Sec. 3). Addition: the paper distinguishes M1 (exact, from scratch)
from M2 (approximate, continual pretraining), which the claim does not mention.

**Claim 5 (NUMBERS) — CONFIRMED with three qualifications.** All five figures found in the
stated roles. Qualifications: (i) 8% cannot be independently recomputed, as no absolute
token counts are given; (ii) the "minimal" phrase is real but is hedged by exceptions inside
its own sentence; (iii) LCCS units are never stated in the paper, and no figure in Table 2
or Table 4 carries any uncertainty, so the 42.5/42.8 difference cannot be distinguished
from noise. Also logged: an unreconciled 0.15 arithmetic discrepancy in the Table 2 `-News`
average, and the distinct 4% news-removal token figure which must not be read as the
compliance figure.

**Claim 6 (content vs volume) — CONFIRMED: the paper does compare content, not only
volume.** Three composition comparisons across strata:
1. WebOrganizer **topic and format** cluster distributions — `"we used WebOrganizer (Wettig et al., 2025) to cluster documents based on both topic and format"`, `"We then visualized the distribution of these clusters in Figure 3."`
2. **Top-20 filtered domains** by document-count difference — Fig. 2 caption, `"Top 20 filtered URL domains based on differences in document counts"` ... `"along with their corresponding taxonomy."`
3. **50-gram overlap** with three publisher domains — Table 1 caption, `"Percetange of documents that have a 50-gram match with documents coming from nytimes.com, medicalxpress.com, or stackexchange.com domains"` [sic: "Percetange" is the paper's own typo]. Values compliant vs non-compliant: nytimes.com 0.267% vs 0.354%; medicalxpress.com 0.637% vs 0.702%; stackexchange.com 0.348% vs 0.539%.

Plus volume (8% tokens). **What is NOT compared across strata:** educational quality
scores, document length, language, duplication rate. So the composition comparison is real
but **coarse** — cluster-level topic/format shares, a domain ranking, and three hand-picked
50-gram probes. There is no comparison of the *within-topic* quality or content of excluded
versus retained documents.

**Claim 7 (missing-data machinery) — CONFIRMED ABSENT, with a method caveat.** Reported
ABSENT on full-text search including appendices: `MAR`, `MNAR`, `missing at random`,
`ignorability`, `ignorable`, `selection model`, `inverse probability`, `propensity`,
`reweight`/`reweighting`, `importance weighting`, `censoring`, `survey weight`, and
`upsampling`. No attempt anywhere to correct or reweight the compliant corpus to stand in
for the pre-exclusion corpus. The nearest thing in the paper is **reintegration for
measurement, not correction** — Sec. 5.3: `"The proportion of non-compliant tokens added reflects their natural distribution in the original corpus"`, and Sec. 4.2's M2,
`"reintegrating non-compliant data into compliant training to approximate the DCG."`
That holds the mixing proportion at its natural value in order to *estimate the gap*; it
does not reweight the retained data to represent what was removed.
**Caveat:** per Section 0, these absences are reported by the fetch tool's full-text search,
not by a grep I ran, because raw document access was blocked. The finding is consistent
across the passes and consistent with the paper's framing, but it is one evidential step
removed from a local search.

**Claim 8 (FineWeb-Edu only; most recent robots.txt) — PARTLY-CONFIRMED.**
- *Education-filtered FineWeb-Edu:* confirmed as the inspected and pretrained corpus
  (`"We analyze the FineWeb-Edu dataset"`). The paper does **not** state that the continual
  pretraining data is FineWeb-Edu only, so that part is unverified rather than confirmed.
  External material does enter, but as **evaluation and probe** material, not training
  corpora: PubMedQA, SciQ, Reuters-QA, PubHealth as benchmarks, and NYT articles for the
  memorization probe (Sec. 5.4, `"we filter out all New York Times articles from the non-compliant corpus"`). C4, RefinedWeb and Dolma are named in the introduction only as
  examples of crawl corpora, not used.
- *Most recent robots.txt:* confirmed — Sec. 3, `"we ensure full compliance by filtering based on the most recent version."` No fixed historical reference date is used for the
  filtering. **One qualification:** historical robots.txt *is* used elsewhere in the paper —
  Fig. 1 tracks blocking over time via the Internet Archive API — but that is a timeline
  description, not the stratification rule.
- Consequence worth recording: because the stratum is assigned by the *current*
  robots.txt, a document crawled lawfully in 2008 is labelled non-compliant if its domain
  blocks today. The strata are a counterfactual "what if we re-crawled now", not a record
  of historical permission.

**Claim 9 (VENUE) — PARTLY-CONFIRMED.** Precisely:
- **arXiv abs page (v2, 2025-08-05): no comments field, no journal reference, no DOI.** All
  three absent.
- **Paper's own header/title block: no venue footnote.** Affiliations only — `"EPFL, Switzerland"`, `"ETH Zürich, Switzerland"`, with `"denotes equal supervision"` on three
  authors. No venue in headers, footnotes, Acknowledgement or Ethics Statement; venues
  appear only in the reference list for cited works.
- **No DOI record found** (S2 surfaced none).
- **However**, a verifiable third-party venue record exists: https://icml.cc/virtual/2025/48727
  prints the venue label as `"Poster in Workshop: DataWorld: Unifying data curation frameworks across domains"`, i.e. **an ICML 2025 workshop poster, not a main-conference
  ICML 2025 paper**, with an OpenReview forum at `openreview.net/forum?id=1ZLgEyLPwz` and
  no PMLR proceedings entry for the paper.
- So: "ICML 2025" is defensible only if qualified as a workshop poster, and it is **not**
  verifiable from any of the three places the claim asks about.

---

## 5. Does the paper do the thing described?

Yes for the four words as stated, with two caveats that matter for any downstream use.

It is a **descriptive comparison of two corpora and of models trained on each**: it compares
composition (coarse topic/format shares, a domain ranking, three 50-gram probes) and volume
(8% of tokens) across the strata, and compares downstream accuracy and memorization of
models trained on each. Its headline estimand, the DCG, is a leave-one-out **performance
gap between two trained models**, not an estimate of what the excluded content contained.

It is **not** a missing-data analysis. It contains none of the machinery for treating
exclusion as a selection problem, and it never attempts to make the retained corpus stand in
for the pre-exclusion one. Its near-null general-knowledge result is an uncertainty-free
comparison of two single runs (42.5 vs 42.8, no seeds, no intervals), and its one positive
result is confined to the medical domain under additive reintegration — itself partly shaped
by Appendix A's admission that Math & Science could not be reliably evaluated.
