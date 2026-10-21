# VERIFY — Sloley AIChE crude-unit fouling abstracts (Sources A and B)

Checker note. Fresh context. Reports what the sources serve, not whether anyone was right.
Budget used: 1 search, 4 fetches (cap 6 / 5).

---

## Citations as the sources themselves serve them

**SOURCE A** — front matter as served on the proceedings record page:

- Title as served: `(166c) Crude Unit Fouling:Consequences and Costs` — **no space after the colon**, as served. (The claim writes it "Crude Unit Fouling: Consequences and Costs".)
- Author as served: `Andrew W. Sloley - Presenter, Advisian (WorleyParsons Group)`
- Conference as served: `2019 Spring Meeting and 15th Global Congress on Process Safety` (the claim writes "2019 AIChE Spring Meeting / 15th Global Congress on Process Safety")
- Group: `22nd Topical Conference on Refinery Processing`
- Session: `Energy Conservation II`
- Paper number: `166c` (carried in the title string and the URL slug)
- ISBN: `978-0-8169-1109-7`
- Keywords: `Refining; Heat Transfer`
- Year: 2019
- No DOI is served on the page.
- URL: https://proceedings.aiche.org/conferences/aiche-spring-meeting-and-global-congress-on-process-safety/2019/proceeding/paper/166c-crude-unit-foulingconsequences-and-costs

**SOURCE B** — front matter as served:

- Title as served: `(14c) Crude Unit Fouling: What's Normal? Why is it Important?` — **"What's Normal?" with an apostrophe**, not "What is Normal?" as the claim writes it.
- Author as served: `Andrew W. Sloley`, presenter, `Advisian (WorleyParsons Group)`
- Venue as served: `10th AIChE Southwest Process Technology Conference`
- Group: Southwest Process Technology Conference
- Session: `Petroleum Refining Technology 2`
- Paper number: `14c`
- Year: 2018
- ISBN: **not served** on this page (A's page does serve one; B's does not).
- No DOI served.
- URL: https://proceedings.aiche.org/conferences/southwest-process-technology-conference/2018/proceeding/paper/14c-crude-unit-fouling-whats-normal-why-it-important

**Third form of B's title, from A's own reference list.** A cites B as, verbatim as served including the page's mojibake:

> "A. W. Sloley, âCrude Unit Fouling: Whatâs Normal? Whyâs it Important?,â presented at the AIChE" / "Southwest Process Technology Conference, Galveston, TX, 2018."

(Two consecutive returned fragments, joined at `AIChE` / `Southwest`.) Note `Whyâs it Important?` — A's reference renders it **"Why's it"**, where B's own front matter renders it **"Why is it"**. Per front-matter rule, B's own page governs: `What's Normal? Why is it Important?`. The `â` sequences are the page's own encoding damage standing in for curly quotes; reproduced as served, not corrected.

**Source type.** Both are AIChE *conference proceedings paper records* — presentation abstracts, not peer-reviewed journal articles, not reviews in the formal sense, not protocols or guidelines. A announces primary analysis (operating-data comparisons, a Monte Carlo study, cost estimates). B announces a mixed object: a literature extraction (`an analysis of fouling factors extracted from published reports of crude units`) plus primary data (`initial publication of fouling factor data from several crude unit performance tests`).

---

## Read level and routes

**Both sources: ABSTRACT ONLY.** Not "could not read" and not "not found" — both records resolved, served their front matter and their complete abstract text, and both gate the full paper.

- A: abstract served in full. Access notice as served: `Do you already own this? Log in to access this content.` with a `Checkout` control. Prices as listed, no currency stated: AIChE Pro Members 150.00; Employees of CCPS Member Companies 150.00; AIChE Graduate Student Members Free; AIChE Undergraduate Student Members Free; AIChE Explorer Members 225.00; Non-Members 225.00.
- B: abstract served in full. Same notice: `Do you already own this? Log in to access this content.` Prices as listed: AIChE Pro Members 250.00; AIChE Graduate Student Members 250.00; AIChE Undergraduate Student Members 250.00; AIChE Explorer Members 300.00; Non-Members 300.00.

**Routes that failed: none.** No fetch was refused, no host blocked, no 403/429 encountered. No DOI is served by either record, so DOI resolution was not applicable. The paywalled full text was not purchased and was therefore not read — that is a gate, not a failed route. One partial refusal to record: the fetch-summariser **declined** a whole-abstract verbatim transcription of A on the ground that it would reproduce most of the page; A's abstract was instead assembled from the segmented quotations returned by the first and fourth fetches. B's abstract transcribed cleanly as 31 ordered consecutive segments.

---

## (a) Does each page exist with that author, title, venue and year?

**Yes for both, with three front-matter discrepancies against the claim as handed to me.**

Both records exist, are live, and serve Andrew W. Sloley of Advisian (WorleyParsons Group) as presenter, at the venues and years claimed. The discrepancies are in the title strings and are the claim's, not the pages':

1. A's served title has **no space after the colon**: `Crude Unit Fouling:Consequences and Costs`.
2. B's served title is **`What's Normal?`**, not `What is Normal?` as the claim writes it. The URL slug confirms: `14c-crude-unit-fouling-whats-normal-why-it-important`.
3. The claim's venue string for A compresses `2019 Spring Meeting and 15th Global Congress on Process Safety` into "2019 AIChE Spring Meeting / 15th Global Congress on Process Safety".

None of these affect identification. All three are the kind of short-form drift rule (7) warns about: the claim's title for B matches neither B's own front matter nor A's reference to B.

---

## (b) The two quoted strings, each checked alone and unprimed

### From A

Claimed string: `Operating data from four crude units supported the use of fouling factors at three times TEMA values.`

**VERBATIM, and a complete sentence.** Returned identically on two independent fetches of the page.

Surrounding text, as served — this is the reconstruction of A's abstract from the returned segments (assembled from 9 consecutive quoted returns on fetch 1, confirmed on fetch 4; labelled a reconstruction):

> "Heat exchanger fouling adds considerable cost to both crude unit construction and operation. Higher fouling shifts optimum heat recovery investment to higher capital and lower energy recovery. Previous work [1] based on a literature identified reasonable fouling factors for commercial units. These factors are at last three times higher than the commonly used TEMA (Tubular Exchanger Manufacturer Association) values. For highly fouling crudes, the fouling factors may reach eight times TEMA values. **Operating data from four crude units supported the use of fouling factors at three times TEMA values. Fouling rates may vary dramatically from unit to unit and from exchanger to exchanger within the same unit.** The previous work focused on using unit-average fouling rates. This paper includes:
> - additional comparisons with operating data,
> - a Monte Carlo analysis comparing using average fouling rates versus a distribution of fouling rates,
> - an analysis identifying specific preheat configurations that have higher risk of operating problems with fouling,
> - estimates of energy efficiency and capacity costs of fouling in crude units."

**Grammar on both sides of the cut.** The string is a whole sentence, so nothing is severed mid-clause. But the clause on the **right** is load-bearing and is lost when the sentence travels alone: A's very next sentence is `Fouling rates may vary dramatically from unit to unit and from exchanger to exchanger within the same unit.` A states the 3x point multiplier and then immediately warns that the quantity it multiplies varies dramatically across units and across exchangers inside one unit. Quoting the four-unit sentence detached from that is quoting a point estimate without the author's own caveat against treating it as one.

Two further things the served text does to this sentence:

- **`supported`, not established or estimated.** The four units' operating data are offered as corroboration of a multiplier derived elsewhere, not as the sample the multiplier was computed from. The multiplier's provenance, in A's own words, is `Previous work [1] based on a literature identified reasonable fouling factors for commercial units.` (served as-is; `based on a literature` is the page's own wording, incomplete English, not corrected here).
- **Two formulations, one hedged, one not** (rule 4). A gives the multiplier twice: `These factors are at last three times higher than the commonly used TEMA ... values.` — unhedged, and carrying the citation `[1]`; and `For highly fouling crudes, the fouling factors may reach eight times TEMA values.` — hedged with `may reach` and conditioned on `highly fouling crudes`. The four-unit sentence is a third formulation, unhedged, no citation, 3x.
- **Transcription anomaly to flag, not correct:** the page as served reads `at last three times`, not "at least three times". Fetch 1 and fetch 4 both returned `at last` inside quotation marks, and fetch 4 explicitly stated the page reads "at last," not "at least." A paraphrase in fetch 3 rendered it "at least". I report it as served and flag it: either the page carries a typo for "at least", or the reader damaged it. Do not quote this sentence as "at least" without re-reading the page.

### From B

Claimed string: `data from typical plants show the TEMA values are extremely low compared to experience in many units.`

**VERBATIM, but it is a SENTENCE FRAGMENT, not a sentence.** The page serves it with a concessive connector in front:

> "Nevertheless, data from typical plants show the TEMA values are extremely low compared to experience in many units."

(Reconstructed from two consecutive returned segments, joined at `compared to` / `experience in many units`.)

Whole sentence with the clause on either side, from B's 31-segment verbatim transcription:

> "Published values of fouling factors (and fouling rates) often lack basic information on many of the factors affecting fouling. **Nevertheless, data from typical plants show the TEMA values are extremely low compared to experience in many units.** This presentation includes:"

**Grammar on both sides of the cut.** Dropping `Nevertheless,` strips the concession the sentence exists to make. In B, this sentence is a *despite-the-missing-metadata* assertion: the preceding sentence says published fouling factors and rates `often lack basic information on many of the factors affecting fouling`, and `Nevertheless` carries the claim forward in spite of that acknowledged deficiency. Quoted without `Nevertheless`, it reads as a clean empirical finding rather than as a judgement the author is explicitly making over incomplete published data. This is a cut that changes the epistemic standing of the string while leaving every word verbatim.

Also note what the sentence does **not** contain: no number, no multiplier, no units count. `extremely low compared to experience` is a **direction with an intensifier**, and `data from typical plants` and `many units` are both undeclared frames.

---

## (c) Read level per page, restated

- **A: abstract only.** Full abstract and full front matter served openly; full paper behind an AIChE login/purchase wall (`Do you already own this? Log in to access this content.`; 225.00 non-member, free to AIChE student members).
- **B: abstract only.** Same, at 300.00 non-member, 250.00 Pro member. B's page serves no ISBN.

Neither page is "could not read" and neither is "not found". Everything reported in this note is from openly served abstract-level text.

---

## (d) THE DECIDING QUESTION: is there a distribution of realized against tabulated fouling resistance?

**No. Neither page reports a distribution, a bias-and-spread pair, percentiles, or any variance statistic of realized against tabulated fouling resistance over any declared frame of units.**

What is actually on the pages, in ascending order of strength:

- **B gives a direction only.** `extremely low compared to experience in many units`. No central value, no spread, no count, no frame.
- **A gives point multipliers only.** 3x (twice: once cited to [1], once as supported by four units) and `may reach eight times` for `highly fouling crudes`. These are point values, one of them a conditional ceiling. No distribution is reported around either.
- **A announces a Monte Carlo analysis, and reports none of its results.** The announcement, verbatim, is one bullet of a four-bullet list of what the paper includes: `a Monte Carlo analysis comparing using average fouling rates versus a distribution of fouling rates,`. Confirmed on a direct question: the page reports **no results and no numbers** from it. So: announced, yes; results on the page, no.

Three regime distinctions matter here and all three cut against using A's Monte Carlo as a distribution of realized-vs-tabulated fouling resistance:

1. **Rate, not resistance.** A's multipliers against TEMA are stated over fouling *factors* (a thermal resistance). A's Monte Carlo is announced over fouling *rates* (`average fouling rates versus a distribution of fouling rates`). A's own abstract moves between the two quantities; the announced distribution is over the rate, not over the realized/tabulated resistance ratio.
2. **A method comparison, not a measured population.** The announced estimand is the difference between two *modelling choices* — designing/evaluating with a unit-average fouling rate versus with a distribution of fouling rates. The comparator is `average fouling rates`, i.e. the approach of the previous work (`The previous work focused on using unit-average fouling rates.`). A simulated input distribution used to test a design method is not an empirical distribution of realized fouling against TEMA, and a Monte Carlo's input distribution is not evidence about the population unless its parameters are reported — and they are not on this page.
3. **n = 4, used as corroboration.** Four units cannot and do not carry a reported spread in A; the page gives no percentile, standard deviation, variance or range, and says nothing about how the four were drawn.

**Rule (9) caution, and it applies squarely to B.** B contains two sentences that look like they bear on this gap and do not:

- `Recent work has focused on probabilistic and statistical methods of evaluating fouling systems. Nevertheless, fouling factors remain in common use.` — B notes that a probabilistic literature **exists** and that practice has not adopted it. That is B pointing at other people's work, not B supplying a distribution, and not B flagging the absence of one.
- `Published values of fouling factors (and fouling rates) often lack basic information on many of the factors affecting fouling.` — this is an absence of **covariate/metadata** (crude type, exchanger service, operating conditions, desalting, cleaning history) in the published literature. It is **not** a statement that the distribution of realized-vs-TEMA resistance is unreported. A source noting the absence of a different thing is not a flag of the gap being checked. These two must not be merged into a claim that B identifies the distribution gap.

---

## (e) Service class, number of units, and selection

**A:**
- **Count:** `four crude units`, verbatim. Also, from [1] by attribution, `commercial units` (no count given on A's page).
- **Service class:** none stated for the four units. The abstract's only service-level specificity is in a different bullet, about the paper's content rather than the data: `an analysis identifying specific preheat configurations that have higher risk of operating problems with fouling`. No crude type, exchanger type, hot-end/cold-end, pre-desalter/post-desalter or position is attached to the four units. Crude character enters only as the qualifier on the 8x figure: `For highly fouling crudes`.
- **Selection:** **not stated.** Asked directly, the page gives no sampling frame, no selection criterion, no inclusion rule, no geography and no operator. The four units are `operating data from four crude units` and nothing more. Unit of analysis is left ambiguous between the unit and the exchanger by the very next sentence (`from unit to unit and from exchanger to exchanger within the same unit`).

**B:**
- **Count:** `several crude unit performance tests`, verbatim — a word, not a number. B's served abstract gives **no numeric count of units or plants anywhere.** Its other frame words are `data from typical plants` and `many units`, both undeclared.
- **Service class:** none for its own data. B instead enumerates what fouling varies with, verbatim: `crude types, blends, and processing history,` / `interaction of multiple fouling mechanisms,` / `exchanger type and configuration,` / `temperatures and pressures in individual exchangers,` / `flow rates, pressure drops, and other operating conditions,` / `desalting effectiveness,` / `contaminants and additives in use, and` / `cleaning history.` That list is the author's account of why a single fouling factor is complex; it is **not** a description of his own sample's service class.
- **Selection:** **not stated**, for either stream. The published-report stream is `fouling factors extracted from published reports of crude units` with no stated search or inclusion criterion; the primary stream is `several crude unit performance tests` with no stated selection.

**What each page measures** (rule 6), in its own words: B's unit of analysis is the **fouling factor** (`a fouling factor summarizes heat exchanger fouling tendencies`), with TEMA tabulated values as comparator and `experience in many units` as the reference condition; its stated endpoints are an extraction from published reports and an initial publication of test-derived fouling factors, with the stated purpose `a review of the importance of using the right fouling factor in design and operating optimization`. A's unit of analysis shifts to the **fouling rate** for the Monte Carlo, with `unit-average fouling rates` as comparator, and its declared endpoints are cost-side: `estimates of energy efficiency and capacity costs of fouling in crude units`, plus `Higher fouling shifts optimum heat recovery investment to higher capital and lower energy recovery.` Neither page states an estimand of the form "realized fouling resistance relative to TEMA, with uncertainty."

**Attribution gap worth recording** (rule 5). A attributes the 3x and 8x multipliers to `Previous work [1]`, i.e. to B. B's served abstract contains **no numeric multiplier at all** — its strongest statement is the unquantified `extremely low`. The numbers may well be in B's full presentation, which is paywalled. This is a **COULD NOT READ**, not an absence: I cannot confirm from B's abstract that B states 3x or 8x, and I do not report that it fails to.

---

## Defects

1. **B's quoted string is cut before `Nevertheless,`.** Every word verbatim, but the excision removes the concession that the preceding sentence sets up (`Published values of fouling factors (and fouling rates) often lack basic information on many of the factors affecting fouling.`). The fragment reads as a finding; in the source it is a judgement advanced in spite of acknowledged gaps in the published data. Verbatim-but-misquoted by cut.
2. **A's quoted string is a whole sentence but travels without the sentence that qualifies it.** `Fouling rates may vary dramatically from unit to unit and from exchanger to exchanger within the same unit.` follows it immediately. Using the 3x/four-unit sentence as a point multiplier is using it against the author's next breath.
3. **`supported` is not `established`.** A's four units corroborate a multiplier whose provenance A assigns to literature work in [1]. Treating n=4 as the evidentiary base for 3x inverts the page's own logic.
4. **Title drift in the claim, against front matter.** B is `What's Normal?`, not `What is Normal?`; A's title has no space after the colon. A's own reference to B renders it differently again (`Why's it Important?` vs B's `Why is it Important?`). Rule 7: B's page governs.
5. **Page-level text damage, flagged not corrected.** A reads `These factors are at last three times higher...` (`at last`, not `at least`) and `Previous work [1] based on a literature identified...`. A's reference [1] carries `â` mojibake for curly quotes. Reproduced as served. One reader pass silently normalised `at last` to "at least" in paraphrase — do not inherit that normalisation.
6. **Regime mismatch on the deciding question.** A's announced Monte Carlo is over fouling **rates** and compares two **modelling choices** (unit-average versus distribution). The question asks for a distribution of realized against **tabulated fouling resistance** over a declared frame of units. A's announcement is silent in that regime, not supportive of it — and in any case no Monte Carlo result appears on the page.
7. **No declared frame anywhere.** `four crude units` (no selection, no service class), `several crude unit performance tests`, `data from typical plants`, `many units`. No percentile, standard deviation, variance or range is served by either page. No numeric spread statistic exists in the openly served text to re-derive at any threshold.
8. **Two near-misses that must not be read as the gap being flagged.** B's `Recent work has focused on probabilistic and statistical methods...` points at others' work; B's `Published values ... often lack basic information...` is an absence of covariates, not of a distribution. Neither is B noting that realized-vs-TEMA spread goes unreported.
9. **Read level is a hard ceiling here.** Both findings rest on abstract-level text behind an AIChE paywall (225.00 / 300.00 non-member). Whether A's Monte Carlo reports a bias and spread, and whether B tabulates per-unit fouling factors, is **unread, not absent.** Any verdict that treats these abstracts as evidence of what the papers do not contain exceeds what was read.
