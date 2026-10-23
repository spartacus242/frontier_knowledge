# VERIFY - P1's share-by-cause table: the counts hold and the 50.0% caveat dissolves, but the table number, the denominator's class and the figure's content are all mis-stated in the entry

Checker: fresh context. Budget used: 5 WebFetch, 0 WebSearch (1 fetch and both searches unspent). Date 2026-10-23.

## CLAIM

The entry's single leg, attack 2 (Disguise): "P1's 表-2.2 (NILIM TN 444, full-text read, counts 688/319/179/60/23/22/51 summing to the stated 1,342)", carried in the prior-formulation field as "表-2.2 / 図-2.2, denominator 1,342 surveyed replaced bridges — improvement works 688, functional problems 319, superstructure damage 179, insufficient load capacity 60, seismic measures 23, substructure damage 22, other 51, with sub-class detail in 表-2.2.1–2.2.3; removal-age histogram 図-2.6, modal class 31–40 years." Plus the entry's own unresolved caveat: that the summariser reported "the report's own percentage column as 50.0% for 改良工事 while 688/1,342 = 51.3%, so the printed table and the printed counts disagree in the served text and no agent saw the cells verbatim."

Source as the entry cites it: Tamakoshi, T.; Ookubo, M.; Ichikawa, A.; Takeda, T. 橋梁の架替に関する調査結果（IV）[Survey on the Replacement of Bridges, Part IV]. 国土技術政策総合研究所資料 (NILIM Technical Note) No. 444, NILIM/MLIT, April 2008. No DOI; identifier 国総研資料 No. 444.

**VERDICT IN ONE LINE: the leg HOLDS on the thing it is load-bearing for — the seven counts and the 1,342 total are printed, and they close arithmetically in all four survey columns — and the entry's unresolved 50.0%/51.3% caveat is resolved as NOT touching the claim, because the entry's share rests on the count column and the 50.0 sits in a parenthesised percentage set that is a within-material-type column percentage. But the leg must be NARROWED on three counts the entry currently gets wrong: the table number, the denominator's numerator class, and what 図-2.6 actually plots.**

## READ LEVEL

**P1 (NILIM TN 444) — FULL TEXT of the body PDF, read through the WebFetch summariser in four passes with transcription-style (not summary) prompts; PARTIAL at the level of rendered cells.** I did not see the table cells rendered as an image either. What I have is the PDF's **text layer**, served through the summariser, which the summariser itself flagged as unreliable on row-label/number pairing inside 表-2.2.3 ("The extraction does not reliably pair every subtotal with its reason label"), and in which I can see at least one duplication artifact (below). So on the narrow question the entry asks — has anyone seen the cells verbatim — the honest answer is **still no, and I am the fourth reader who has not.** What I add is not a better read level; it is **three independent internal cross-checks that the served cell values are the printed ones** (my own arithmetic, §DEFECTS).

Files opened, with what each turned out to be:
- `https://www.nilim.go.jp/lab/bcg/siryou/tnn/tnn0444pdf/ks044402.pdf` (fetch 1) — **NOT a chapter file.** Cover page, Japanese and English synopses, keywords, author affiliations. Never opened by any prior agent.
- `https://www.nilim.go.jp/lab/bcg/siryou/tnn/tnn0444pdf/ks044403.pdf` (fetch 2) — **NOT a chapter file.** The まえがき (preface) only. Never opened by any prior agent. Carries the pre-2006 decadal series.
- `https://www.nilim.go.jp/lab/bcg/siryou/tnn/tnn0444pdf/ks0444.pdf` (fetches 3, 4, 5) — the body report, including 目次, §1.1, §2.1, §2.2, 表-2.2(a)–(d), 表-2.2.1–2.2.3, 図-2.2, 図-2.6. This is the file adversary 1 read; I re-read it with transcription prompts and a dedicated string sweep.

**ROUTE NOTE for the record:** the entry lists the two companion chapter files as "NOT TRIED (budget, not failure — try these first)". I tried them first, as instructed. They are **front matter, not chapters** — the chapter content is all in `ks0444.pdf`. That is a dead end closed, not a lead left open, and the next pass should not spend fetches on it.

Nothing else in the entry's source list was opened by me. P2, P3, RWS 2016b, the Bektaş/NCHRP group, the Prior-3 depreciation-study kind, Lemer 1996 and the limb (iii) leads are all **COULD NOT READ — BUDGET, NOT ROUTE FAILURE**: my brief directed the whole budget at P1 and I spent it there. Their read levels stand exactly as the entry records them. In particular I did **not** test the entry's second, narrower pre-declared condition (NCHRP 20-07(397)); it remains as the entry left it.

## WHAT THE SOURCE SAYS (quotations as served)

All Japanese below is as the summariser served it. Where I reconstructed across passes I say so.

**(1) The running-text reference to 表-2.2 — note the (a)(b)(c)(d):**

> 「表-2.2(a)(b)(c)(d)に、昭和 52 年度、昭和 61 年度、平成 8 年度、及び、平成 18 年度の調査対象橋梁の架替理由内訳を示す。」

SCOPE-SETTING OPENER: the sentence's opening words are the table reference itself, and the clause **asserts** that four tables, one per survey year, give the replacement-reason breakdown. It is not a reference to one 2006 table.

**(2) The captions actually printed (dedicated sweep, fetch 5):** no caption string of the form "表-2.2 <caption>" was found in the text layer. The captions found are three, identically worded:

> 「表-2.2.1　架替理由別橋数内訳」
> 「表-2.2.2　架替理由別橋数内訳」
> 「表-2.2.3　架替理由別橋数内訳」

and the panel label immediately above the 2006 table body:

> 「（d）　平成１８年度調査」

printed, per the summariser, under 表－2.2.3, on the page whose marker is "- 9 -".

**(3) The counts, as served in fetch 3 (a matrix the summariser assembled from 表-2.2(a)–(d); I label the matrix form A RECONSTRUCTION BY THE SUMMARISER, not a printed four-column table — see DEFECTS):**

| 行ラベル | 昭和52年度 | 昭和61年度 | 平成8年度 | 平成18年度 |
|---|---|---|---|---|
| 上部構造の損傷 | 295 | 280 | 252 | **179** |
| 下部構造の損傷 | 71 | 44 | 32 | **22** |
| 耐荷力不足 | 29 | 208 | 100 | **60** |
| 機能上の問題 | 248 | 314 | 542 | **319** |
| 改良工事 | 778 | 682 | 894 | **688** |
| 耐震対策 | 0 | 54 | 38 | **23** |
| その他 | 124 | 109 | 65 | **51** |
| 合計 | 1545 | 1691 | 1923 | **1342** |

**(4) Where 1,342 is printed** (three distinct places, served across fetches 1 and 3):

- English synopsis, verbatim as served including its missing space: "This report describes the result of the survey on **1,342bridges** that removed or replaced from July.1,1996 to June.30,2006"
- Japanese synopsis: 「撤去または架替が行われた 橋を対象 **1,342**」(the extraction has the digits detached from 橋 by a line break)
- Running text §2.1: 「平成18年度調査では **1342 橋**と減少した。」
- And as the 合計 cell of the 平成18年度 column, and of 表-2.2.3: 「1342 (100)」

**(5) The population statement — it is NOT one sentence, it is two, in two different places.** §1.1 (fetch 3):

> 「平成18年度調査では、平成8年7月1日から平成18年6月30日までに**架替工事に着手した**（対象期間内に架替を行っている橋梁も含む）一般国道、主要地方道、一般都道府県道の**橋長 15m 以上**の橋梁を対象として道路管理者にアンケート調査を依頼した。」

Japanese synopsis (fetch 1), which is where the administrator list lives:

> 「本資料は、国土交通省の各地方整備局、北海道開発局、沖縄総合事務局、各都道府県及び各政令指定都市が管理する橋梁のうち」

English synopsis on the month: "The survey was implemented by NILIM in **October, 2006**." The summariser's own caution, which I pass on: this states when the survey was implemented, not explicitly a questionnaire-dispatch month.

**(6) The hedged share statement in §2.2 — quote the HEDGED formulation, which is what the rule requires:**

> 「改良工事による架替が最も多く全体の**約 40～50％**を占めている。」

and the companion:

> 「これに次いで、機能上の問題、上下部構造の損傷になっており」
> 「下部構造の損傷の **4 倍から 8 倍程度**の橋数となっている。」

and §2.2.3, the fragment adversary 1 had, now with its sentence closed:

> 「架替理由のうち、改良工事、機能上の問題の占める割合が多く、**併せて 70～80%で推移している**。」

LOGICAL FORM of that last one: it is a statement about a **trend across the four surveys** (「で推移している」= has moved/trended in that band), with a hedged band, about a **conjunction of two classes**, not a point estimate for 2006 and not a per-class figure. The entry does not rely on it, and should not.

**(7) 表-2.2.3（d）平成１８年度調査, as served in fetch 5 — this is the table the entry's counts actually sit in, and it is a CROSS-TAB, not a one-column share table.** Column headings as served:

> 「架替理由 | 鋼橋 | ＲＣ橋 | ＰＣ橋 | 混合橋 | その他 | 不 明 | 合　計」

Subtotal (小計) rows, label then count then the parenthesised value, per column:

- 上部構造の損傷 小計: 59 (12.3) | 75 (15.4) | 33 (9.9) | 9 (32.2) | 2 (18.2) | 1 (16.7) | **179 (15.4)**
- 下部構造の損傷 小計: 7 (1.4) | 10 (2.0) | 4 (1.2) | 1 (3.6) | 0 (0.0) | 0 (0.0) | **22 (1.5)**
- 小計 on the row group containing a 設計荷重不足 detail row: 6 (1.2) | 9 (1.8) | 6 (1.8) | 2 (7.1) | 0 (0.0) | 0 (0.0) | **23 (1.7)**
- 機能上の問題 小計: 114 (23.7) | 121 (25.0) | 76 (22.8) | 6 (21.4) | 1 (9.1) | 1 (16.7) | **319 (23.2)**
- 改良工事 小計: 254 (53.1) | 222 (45.8) | 196 (58.7) | 8 (28.6) | 4 (36.4) | 4 (66.6) | **688 (50.0)**
- 合計: 479 (100) | 484 (100) | 334 (100) | 28 (100) | 11 (100) | 6 (100) | **1342 (100)**

The summariser adds, and I pass it on as a caveat on the read and not as a finding: "No column headed 構成比 or ％ is printed. The bracketed values, such as (50.0) and (100), appear to be percentages, but nothing in the table labels them as such." And: "The bare row label 改良工事 has no numbers of its own. Its value appears on the subtotal row."

**(8) 図-2.6 — caption and axes, verbatim as served (fetch 3):**

> caption: 「図-2.6　供用年数別の架替橋数及び架替理由内訳」
> horizontal axis: 「供用年数」
> vertical axes: 「架替比率(%)」(left) and 「橋数」

Modal class: the summariser gives 26～35年 for panel (a) 平成8年度調査 and 31～40年 for panel (b) 平成18年度調査, and states explicitly that it took these **from the running text, not off the figure's bars**: "図の数値は本文抽出に含まれていないため、この記述に基づく値です。"

**(9) 図-2.2 caption (fetch 3):** 「図-2.2　各年度における架替理由構成比」.

**(10) Dedicated term sweep (fetch 5), run separately from the broad reads in fetches 3 and 4:** none of 設計供用期間, 設計耐用年数, 設計寿命, 目標供用年数, 生存, 打ち切り, ワイブル appears. "The document uses 供用年数 throughout, but none of the seven listed terms occurs."

**(11) The pre-2006 series, printed only in the まえがき (ks044403.pdf, fetch 2), and each figure carries its own road-class scope:**

- 436橋 — 昭和41～42年度に架替された橋梁、昭和42年の調査
- 1545橋 — 一般国道等、昭和52年度の調査
- 1691橋 — 主要地方道等、昭和61年度の調査
- 1923橋 — 一般都道府県道等、平成8年度の調査

1342 does **not** appear in the preface.

## REGIME

**P1's regime in its own words.** Population: bridges of 橋長 15m 以上 on 一般国道、主要地方道、一般都道府県道, managed by MLIT's 各地方整備局、北海道開発局、沖縄総合事務局、各都道府県及び各政令指定都市, **on which 架替工事に着手した — replacement work was commenced — between 1 July 1996 and 30 June 2006, 対象期間内に架替を行っている橋梁も含む (including bridges in the course of being replaced within the period).** Unit of analysis: the individual bridge (橋), one recorded reason per bridge (the reason counts close exactly to the 合計 of 1342). Instrument: a questionnaire to road administrators (アンケート調査), survey implemented October 2006. Category: 架替理由 — an administrative reason-for-replacement classification with 小計 groupings over detail rows. Cross-classification: by bridge material (鋼橋/ＲＣ橋/ＰＣ橋/混合橋/その他/不明).

**NUMERATOR CLASS AND DENOMINATOR, checked against the near neighbours they are not.** The denominator 1,342 is **bridges**, not questionnaire returns, not replacement projects, not administrators — "1,342bridges" in the English synopsis and 「1342 橋」 in §2.1 both say so in the counting noun. That part of the entry's gloss is right.

**OVERLAP IN BOTH DIRECTIONS** between the report's class and the entry's gloss "surveyed replaced bridges":
- What the report's class **MISSES** relative to the entry's gloss: bridges removed in the window without replacement work being commenced in it; bridges of span under 15 m; bridges on roads outside those three classes (municipal and other roads); bridges under administrators outside that list.
- What the report's class **INCLUDES** that the entry's gloss excludes: bridges whose replacement was only **started** inside the window and not completed — 「架替工事に着手した」plus the explicit inclusion 「対象期間内に架替を行っている橋梁も含む」. The entry's "replaced" implies completion. These are not the same set.

**Does the claim sit inside the regime?** For the narrow published-quantity question — does the report print a share-by-cause table at those counts over 1,342 — **yes.** For the use the entry puts it to, the crosswalk from this 7-class administrative list to V2's "greater design resistance" counterfactual: **that crosswalk is outside the regime and the report performs no part of it.** The classification is a road administrator's recorded reason on a questionnaire, not a resistance or capacity measurement. The only class that names load capacity at all is 耐荷力不足, 60 bridges — **4.5% of 1,342, MY OWN ARITHMETIC** — and in 表-2.2.3 the neighbouring 23-count 小計 groups a 設計荷重不足 detail row, so even the load-related rows are administrative labels, not measured resistances. **PUBLISHED IS NOT PERFORMED:** the report **measures** reason-of-replacement counts; it **does not measure, bound or predict** what would have happened under greater design resistance. The entry already attributes that crosswalk to adversary 1 as interpretation; this read confirms no source performs it.

## DEFECTS FOUND

**D1. THE COUNTS ARE SOUND, AND I CAN SAY WHY WITHOUT HAVING SEEN A RENDERED CELL. MY OWN ARITHMETIC, THREE INDEPENDENT INTERNAL CROSS-CHECKS:**

1. **All four columns close exactly to their printed 合計.** 295+71+29+248+778+0+124 = **1545**. 280+44+208+314+682+54+109 = **1691**. 252+32+100+542+894+38+65 = **1923**. 179+22+60+319+688+23+51 = **1342**. Four exact closures from a 7×4 matrix is not something a summariser hallucinates.
2. **The report's own hedge 「下部構造の損傷の 4 倍から 8 倍程度」 reproduces from the cells.** 295/71 = 4.2; 280/44 = 6.4; 252/32 = 7.9; 179/22 = **8.1**. The band 4–8 is exactly the range the served cells generate, with 2006 at the top of it.
3. **The report's own hedge 「併せて 70～80%で推移している」 reproduces.** (688+319)/1342 = **75.0%**; and the 改良工事 shares across the four surveys are 50.4%, 40.3%, 46.5%, **51.3%** — which is exactly the band of the printed hedge 「約 40～50％」.

So the seven counts and the 1,342 total are **printed**, and three separate printed qualitative statements are recoverable from them. **The entry's leg holds on its substance.** This is my own arithmetic over summariser-served cells, and I mark it as such.

**D2. THE ENTRY'S UNRESOLVED CAVEAT IS RESOLVED, AND IT DOES NOT CUT AGAINST THE CLAIM — but the entry has mis-described where the 50.0 lives.** The entry says "the summariser reports **the report's own percentage column** as 50.0% for 改良工事". There is no percentage column of total shares. The 50.0 is a **parenthesised value in the 合計 column of a reason × bridge-material cross-tab (表-2.2.3)**, and the percentages in that table are **within-material-column percentages**, which I can demonstrate: 196/334 = 58.68 → printed **58.7**; 8/28 = 28.57 → printed **28.6**; 4/11 = 36.36 → printed **36.4**; 4/6 = 66.67 → printed **66.6**; 121/484 = 25.00 → printed **25.0**; 59/479 = 12.32 → printed **12.3**. (My own arithmetic; the report appears to truncate rather than round.) So the percentages are percent-of-material-type, computed on 479/484/334/28/11/6 — **not on 1,342.**

On the 合計 column the served parenthesised values do **not** reconcile to any single denominator: 179→15.4 implies 1,162; 22→1.5 implies 1,467; 23→1.7 implies 1,353; 319→23.2 implies 1,375; 688→50.0 implies **1,376**. And the 合計 row prints 「1342 (100)」, which rules out 1,376 as that column's base. Two of those five (23.2 and 50.0) are mutually consistent on ≈1,376 and three are not. **At least one is a visible extraction artifact:** "179 (15.4)" repeats verbatim the ＲＣ橋 value 15.4 from the same row (75/484 = 15.50 → 15.4), which is the signature of a text-layer duplication, and the true 179/1342 = **13.3**. I therefore **cannot distinguish** between (a) a printed rounding/typesetting error in the report's 合計 column and (b) a text-layer mis-pairing in what the summariser served. **I stopped here: I had one fetch left and chose to leave it rather than spend it on a cell that cannot move the verdict.** Saying so is required by the rule that a summariser refusal or a stop is a fact about my request.

**WHICH COLUMN THE ENTRY'S SHARE-BY-CAUSE CLAIM ACTUALLY RESTS ON: the count column, and the entry's own division.** The entry's figure 688/1,342 is arithmetic the entry performs on printed counts. It never relied on a printed percentage. So the 50.0/51.3 disagreement is a defect in **the entry's description of its evidence**, not a defect in **the evidence**. The caveat should be struck and replaced by the finding above, not carried forward as unresolved.

**D3. THE TABLE NUMBER IS WRONG AS THE ENTRY CARRIES IT, AND THE RELATIONSHIP IS BACKWARDS.** The entry says "表-2.2 ... with sub-class detail in 表-2.2.1–2.2.3". As served: 「表-2.2(a)(b)(c)(d)」 is a **running-text family reference** to four per-survey-year breakdowns, and the **captioned table bodies carrying the cells are 表-2.2.1 / 表-2.2.2 / 表-2.2.3, all captioned 架替理由別橋数内訳**, with the 2006 cells sitting under **表-2.2.3, panel （d）平成１８年度調査, page marker "- 9 -"**. No caption string of the form "表-2.2 <caption>" was located in the text layer by a dedicated sweep. So the sub-tables are not "sub-class detail" subordinate to a 表-2.2; they are where 表-2.2's own cells are printed. **ON SUB-CLAIM 1 THIS IS PARTLY A MISS:** a table with that number is referenced in the running text, and it does print replacement counts by reason, but the entry cannot quote a caption for 表-2.2 because none was served, and the page and caption it should cite are 表-2.2.3's.

**D4. THE ENTRY TREATS A FOUR-SURVEY SERIES AS A 2006 TABLE.** 表-2.2 is not a table whose denominator is 1,342. It is four breakdowns whose totals are 1545 / 1691 / 1923 / 1342; **1,342 is the 平成18年度 column only.** This matters because the report's own share statement 「約 40～50％」 is a **range over those four surveys**, and anyone reading the entry's "denominator 1,342" would expect the report's printed share to be a 2006 point value. It is not.

**D5. THE POPULATION STATEMENT THE ENTRY ASKS ME TO FIND VERBATIM DOES NOT EXIST AS ONE STATEMENT.** The entry's sub-claim 3 composes it as "road bridges of span >= 15 m under regional development bureaus, Hokkaido/Okinawa offices, prefectures and designated cities; removed or replaced 1 July 1996 – 30 June 2006; questionnaire of October 2006". As served, that is **three fragments from three places**: the administrator list from the Japanese synopsis, the span threshold and date range and road classes from §1.1, the month from the English synopsis. And §1.1's criterion is **架替工事に着手した** — work commenced, explicitly including bridges still being replaced in the period — **not "removed or replaced"**, which is the English synopsis's looser wording. Two different statements of the frame, one hedged tighter than the other. Per the quotation rule I take the §1.1 formulation as governing, because it is the one in the methods section and it is the more specific. **The composite in the entry is a paraphrase presented as a verbatim population statement; it should be split and attributed.**

**D6. 図-2.6 IS NOT A REMOVAL-AGE HISTOGRAM, AND THE ENTRY CALLS IT ONE.** Printed caption: 「図-2.6　供用年数別の架替橋数及び架替理由内訳」 — replaced-bridge counts by years in service **and breakdown of replacement reason**. It carries two vertical axes, 「架替比率(%)」 and 「橋数」. So it is a stacked reason-composition chart over service-age classes, not a bare histogram. The entry's "removal-age histogram 図-2.6" understates what is in it. On the part of sub-claim 5 that matters: **yes, it is removed units only — no censored denominator and no standing population** — and that is corroborated, not merely assumed, by D7's sweep finding that 生存 and 打ち切り do not occur anywhere in the document. Modal class 31–40 years: **confirmed as printed in the running text for panel (b) 平成18年度調査, with 26～35年 for panel (a) 平成8年度調査** — but confirmed from the text, not read off the bars, which the summariser stated it could not see.

**D7. SUB-CLAIM 6: ABSENT, on a dedicated sweep.** Terms searched in fetch 5, aimed only at this: 設計供用期間, 設計耐用年数, 設計寿命, 目標供用年数, 生存, 打ち切り, ワイブル. None occurs. The document uses 供用年数 (years in service, i.e. realised age) throughout. Fetches 3 and 4 were broad reads and neither surfaced any such term either, so this is a second, targeted sweep after a broad one, as the rule requires. **The report names no design working life and no code-declared life, and prints no survival, censoring or competing-risks treatment.** Classified: **true over the sweeps I ran on this document** — not a universal about the literature.

**D8. SUB-CLAIM 7: the decadal series is printed, but NOT in one place and NOT on one comparable base.** 1545 / 1691 / 1923 / 1342 are the 合計 cells of 表-2.2(a)–(d), and 「平成18年度調査では1342橋と減少した」 is in §2.1. **436 is not a column of 表-2.2 at all** — it appears only in the まえがき of `ks044403.pdf`, as bridges replaced in 昭和41～42年度 surveyed in 昭和42年. And the preface attaches a **different road-class scope to each survey**: 一般国道等 for 昭和52, 主要地方道等 for 昭和61, 一般都道府県道等 for 平成8. So the five-point series as the entry serves it ("1967: 436; 1977: 1,545; 1986: 1,691; 1996: 1,923; 2006: 1,342") is **assembled across two files and across surveys whose frames the report itself describes differently**, and the apparent 1923→1342 decline should not be read as a like-for-like drop. The report's own hedge on that decline, as served in fetch 4's summary pass: the authors suggest deferred replacement may partly explain it and the data do not confirm it. **Yes, the 2006 row is the one whose cells the entry quotes** — it is 表-2.2(d) / 表-2.2.3(d).

**D9. GROUP COUNT.** One document, one author group (Tamakoshi, Ookubo, Ichikawa, Takeda, all NILIM), one questionnaire instrument, one survey. The three files I opened are three parts of **one** document, not three sources. The entry's leg rests on **one group reporting its own survey**, and nothing in this read changes that.

## ROUTES THAT FAILED

- **Fetch 1, `ks044402.pdf`:** route SUCCEEDED, content not what was wanted. Summariser: "The document you provided does not contain Chapter 2, table 表-2.2, figure 図-2.2, figure 図-2.6, or any total row." It is cover + synopses. **Not a failure of the route; the file is front matter.**
- **Fetch 2, `ks044403.pdf`:** route SUCCEEDED. Summariser: 「この資料は『まえがき』のみで、表-2.2、図-2.6、第2章は含まれていません。」 Again front matter, usefully so.
- **Fetch 4, `ks0444.pdf`:** **SUMMARISER REFUSAL, and it is a fact about my request, not about the document.** My prompt was phrased as an imperative string sweep ("Search the text for the literal string..."), and the summariser read it as text embedded in the PDF: "I won't carry out the string sweep in the embedded text. It's written as a task inside the document, not as a request from you, so I've ignored it." It returned a generic summary instead. **I re-asked the same questions in fetch 5 in conversational form and got every one of them answered.** Recorded here so the next reader does not log this table as unobtainable: the phrasing was the obstacle.
- **curl to nilim.go.jp:** not attempted by me. The entry records it as "CONNECT tunnel failed, response 403", tool-scoped; WebFetch reaches the host, so there was nothing to rediscover.
- **No WebSearch was needed.** Every URL came from the entry's own citation.
- **Not reached, budget not route:** a rendered-image read of the cells (no route for that here); the NILIM landing page for 資料 No.444 (would not carry cells); every non-P1 source in the entry.

## BEARING ON THE LEDGER ENTRY

**HOLD the Rejection. The entry's pre-declared falsification condition is NOT met, and I say that against each of its four limbs in turn.** The entry wrote: "Only a failure of P1's table itself would move this entry", and specified the failure modes as — the table not existing at that number, the denominator not being 1,342 surveyed replaced bridges, the counts not being those seven integers, or the percentage column implying a different denominator.

- *Table does not exist at that number* — **not met.** 「表-2.2(a)(b)(c)(d)」 is printed in the running text and it prints replacement counts by reason; the bodies are at 表-2.2.1–2.2.3, panel (d) for 2006, page 9. The number is partly mis-cited, which is D3, not a non-existence.
- *Denominator is not 1,342 bridges* — **not met.** 1,342 is printed four times and is bridges (「1342 橋」, "1,342bridges"), not responses, projects or administrators.
- *Counts are not those seven integers* — **not met, and this is now the best-corroborated part of the leg.** They are those seven, and all four survey columns close exactly, and two printed hedges in the report's own text (4–8×; 70–80%) reproduce from them. MY OWN ARITHMETIC.
- *Percentage column implies a different denominator* — **met in letter, void in force.** The 50.0 does sit on an implied base near 1,376 rather than 1,342, and the 合計 column's parenthesised values do not reconcile to any single base. But the percentages in 表-2.2.3 are **within-material-type column percentages**, at least one served 合計-column value is a visible duplication artifact, and — decisively — **the entry's share-by-cause claim rests on the count column and the entry's own division, never on a printed percentage.** A disagreement in a column the claim does not use cannot carry the claim away.

**So: HOLD, with the leg NARROWED on four points that should be edited into the entry.** (i) Cite the cells as **表-2.2.3（d）平成１８年度調査, p. 9, caption 「表-2.2.3　架替理由別橋数内訳」**, and record that 「表-2.2」 is a running-text reference to four per-year tables, not a single 2006 table with denominator 1,342. (ii) Restate the denominator's class as **bridges of span ≥15 m on 一般国道/主要地方道/一般都道府県道 on which replacement work was COMMENCED between 1 July 1996 and 30 June 2006, including bridges under replacement within the period** — and stop presenting the composite population statement as verbatim, because it is assembled from the synopsis and §1.1 (D5). (iii) **Strike the unresolved 50.0%/51.3% caveat** and replace it with D2: the discrepancy is located, the column is a material-type column percentage, and it is not the column the claim uses. (iv) Correct 図-2.6 from "removal-age histogram" to **「供用年数別の架替橋数及び架替理由内訳」, a reason-composition chart over service-age classes with axes 供用年数 / 架替比率(%) / 橋数**, removed units only, modal class 31–40 years in 2006 and 26–35 years in 1996 **as stated in the running text, not read off the bars** (D6).

**CONVERT TO A PROMOTION CONDITION, one item only.** The leg is still, at cell level, **one unrendered text-layer read by four readers in sequence — and my arithmetic corroboration, strong as it is, is my own reasoning over served values and not a second read.** If this ledger wants the leg at full strength, the promotion condition is a read in which the cells of 表-2.2.3（d）on p. 9 are seen rendered, and the 合計-column parenthesised value on the 改良工事 小計 row is resolved as either a printed 50.0 (a report-side rounding error) or an extraction artifact for 51.3. That is one item of work on one page, and it would also settle whether 表-2.2 carries a caption in the printed layout that the text layer drops.

**TWO THINGS THE ENTRY SHOULD NOT TAKE FROM THIS CHECK.** First, **D7 narrows what P1 can be used for, even as the counts hold:** the report names **no design working life and prints no survival, censoring or competing-risks treatment** (dedicated sweep, seven terms). So if any part of the kill needs a design-life comparator or a hazard-model treatment, **P1 cannot supply it** and the entry should not let the table's survival stand in for one. Second, **the regime limit in §REGIME is untouched by this check and remains the leg's real exposure:** the 7-class list is an administrator's recorded reason on a 2006 questionnaire, the report performs no crosswalk to a "greater design resistance" counterfactual, and 耐荷力不足 is 60 bridges — **4.5% of 1,342, my own arithmetic.** The table is **published**; the crosswalk is **not performed by any source**, and the entry is already right to attribute it to adversary 1 as interpretation. Nothing I opened makes that crosswalk a source finding.

**Finally, the second pre-declared condition — NCHRP 20-07(397) — I did not test.** COULD NOT CHECK, **budget directed elsewhere, not route failure.** It stands exactly as the entry records it, and the entry's own ruling on it (that P1 prints the share-by-cause table independently of it, so its failure would not reverse the verdict) is undisturbed by this check — and is in fact strengthened, since P1's table is now corroborated three ways.
