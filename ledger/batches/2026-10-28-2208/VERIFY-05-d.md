# VERIFY-05-d — fresh-context check of UQ-20261028-05

Checker had not seen the entry before this run. Assigned leg: the two documents
no reader opened — Holzmann, Kharaghani, Tayfeh-Rezaie, DOI 10.1007/s10623-007-9163-5
(2008), and Đoković 1993 — which are the entry's stated sole reason for withholding
a High novelty grade (entry line 54).

BUDGET: 2/2 searches spent, 6/6 fetches spent. Exhausted before full text was reached.

## 1. What I opened, with route and read level

### HKT 2008, "Williamson matrices up to order 59", Des. Codes Cryptogr. 46 (2008) 343–352

ROUTE THAT WORKED: `https://link.springer.com/article/10.1007/s10623-007-9163-5`
(direct DOI-suffix resolution at the publisher, first try, no redirect). The entry
records that "no DOI resolution was attempted" at Gate 2; the DOI resolves cleanly
and the abstract and full reference list are served to an unauthenticated fetcher.

READ LEVEL: **abstract (verbatim) + full reference list + front matter**. NOT full text.

COULD NOT READ the body. Routes tried and their errors:
- `link.springer.com/content/pdf/10.1007/s10623-007-9163-5.pdf` → WebFetch:
  `failed at its site (client_error), and nothing of the page was retrieved`.
- Article page itself states the body is paywalled: "log in via an institution",
  subscription from $39.99/month, single-article PDF USD 39.95.
- Author publication page `math.ipm.ac.ir/~tayfeh-r/papersandpreprints.htm`: the entry
  for this paper carries a document link whose label is truncated to "(ps," and
  WebFetch's markdown conversion dropped every href on the page. Two fetches spent on
  it, both returning the citation text without any URL. **The href exists in the raw
  HTML and is the single cheapest unexploited route left.**
- Raw retrieval of that page, and of `api.crossref.org/works/10.1007/...` and
  `api.semanticscholar.org/graph/v1/paper/DOI:10.1007/...`, via curl: all refused at
  the egress proxy — `curl: (56) CONNECT tunnel failed, response 403`,
  proxy diagnostic `connect_rejected ... the host is not allowed for this session`.
  These are facts about this container's egress, not about the documents.
- Two searches for an open-access copy (`...pdf`; `...repository OR core.ac.uk OR
  opus.uleth.ca OR researchgate full text`) returned no copy of this paper — only
  Bright's SAT+CAS corpus, the two 2026 arXiv papers, and a Wikipedia page.

### Đoković 1993

READ LEVEL: **not opened — exact citation only.** Recovered verbatim from HKT 2008's
own reference list, which the entry did not have:

> "Doković D.Ž. (1993). Williamson matrices of order 4n for n = 33,35,39. Discrete Math. 115: 267–271"
> "Doković D.Ž. (1992). Williamson matrices of orders 4 ·29 and 4 ·31. J. Combin. Theory Ser. A. 59: 309–311"

COULD NOT READ: budget exhausted. No DOI in hand, the Elsevier PII for a 1993
Discrete Mathematics article is not constructible without a lookup, and the two
lookup services that would supply it are proxy-blocked (above). **This is a spent
budget, not an absence.**

One Đoković document I did open, as the nearest reachable substitute:
`arxiv.org/abs/0903.5053`, Djokovic, "Supplementary difference sets with symmetry for
Hadamard matrices" (v2, 2009-12-05), READ LEVEL: abstract + abstract page, full.
It does **not** mention the 1993 paper and says nothing about nonexistence at 35, 47,
53 or 59. It adds nothing to this leg. (It does report new *skew Hadamard* matrices at
n = 47 — an existence result for a different object, not a Williamson quadruple.)

## 2. What HKT 2008's abstract says, verbatim and in place

Location: the article's Abstract, as printed on the Springer landing page. Requested
as ordered consecutive segments under 125 characters each, after a first fetch returned
only a paraphrase. All five segments are verbatim:

1. "A recent result of Schmidt has brought Williamson matrices back into the spotlight."
2. "In this article, a new algorithm is introduced to search for hard to find Williamson matrices."
3. "We find all nonequivalent Williamson matrices of odd order n up to n = 59."
4. "It turns out that there are none for n = 35, 47, 53, 59 and it seems that the Turyn class"
5. "may be the only infinite class of these matrices."

Keywords: "Symmetric circulant matrices; Williamson matrices; Hadamard matrices".
AMS 05B20. Received 28 Aug 2007, revised 1 Dec 2007, accepted 11 Dec 2007, online
5 Jan 2008. 13 references. No table caption is exposed on the landing page.

### Answers to the four questions in the brief

**(a) Which orders searched, what found.** "all nonequivalent Williamson matrices of
odd order n up to n = 59"; "there are none for n = 35, 47, 53, 59".
READ LEVEL: abstract, verbatim. This is the **first direct, non-citation-mediated
confirmation in this run** of the entry's presuppositions 1 and 2, at the primary
source. It does not add a second independent group: these are the same three authors
whose Table 1 the 2026 paper reproduces, so the entry's presupposition 4 ("one support,
not two") STANDS unchanged.

**(b) Any arithmetic or structural explanation of the failures, as against the search
results.** The abstract prints **none**, and its own phrasing is a search-outcome
phrasing: "*It turns out that* there are none for n = 35, 47, 53, 59". The paper
describes itself as introducing "a new algorithm ... to search for hard to find
Williamson matrices" — method and scarcity, not obstruction. CONSISTENT with the
entry's motivating gap. But this is an ABSTRACT-ONLY read and **cannot settle** whether
the body prints arithmetic at the failing orders. The entry itself names this paper as
"the one place that would print whatever per-character or PSD structure the search
actually exploited at 35, 47, 53 and 59, which is member (iv) in all but name". That
question is **STILL UNSETTLED.** Its silence here is not a check that passed.

**(c) An invariant-based account, or a prediction for larger orders.** Not an invariant
account — but a **prediction does exist, and the entry does not record it**: "it seems
that the Turyn class may be the only infinite class of these matrices" (abstract,
segments 4–5). This is a published structural conjecture about larger orders, by the
group that owns all four zeros, sitting in the abstract of the paper the entry's own
first step names. It bears directly on the entry's fecundity question "Is the failure
set finite?".

MY OWN REASONING, flagged as mine: this conjecture is *not* the candidate's quantity
and *not* a separating invariant. Turyn-class membership is a function of n alone
(n = (q+1)/2 for q a prime power ≡ 1 mod 4), and I computed it over odd n ≤ 70:
Turyn-class odd orders are {3,5,7,9,13,15,19,21,25,27,31,37,41,45,49,51,55,57,61,63,69}.
Realisable orders 11, 23, 29, 33, 39, 43 lie OUTSIDE it, so it does not separate
realisable from non-realisable and takes no stand at a given n. It predicts only that
non-Turyn examples are finitely many. It issues no value at 65 or 67 either. So it is
not a prior formulation of the candidate's question and **does not create a priority
problem for the entry.** It does, however, make the entry's framing ("never explained",
no prediction in the literature) understated for this one unopened source.

**(d) Does it state the candidate's question as open.** The abstract does not. Cannot
be checked in the body. READ LEVEL: abstract only — UNVERIFIED.

## 3. A correction to the entry's record, from HKT's own reference list

The entry treats the arithmetic-nonexistence apparatus as never having landed on
Williamson quadruples, resting that on adversary 2's term sweep of Schmidt's "The field
descent method" (entry line 54) and on adversary 2's Disguise 3 (line 40). HKT 2008's
**first sentence** reads: "A recent result of Schmidt has brought Williamson matrices
back into the spotlight", and its reference list carries

> "Schmidt B. (1999). Williamson matrices and a conjecture of Ito's. Des. Codes Cryptogr. 17: 61–68"

So the method-owning field *has* landed on Williamson matrices, and is by the primary
source's own account the motivation for the 2008 enumeration. This does not touch
novelty — the entry's novelty claim is about the separation statistic, not about
arithmetic nonexistence generally — but it **strengthens adversary 1's attack 7**
(the boundary is porous, and Schmidt 1999 is unread) and it weakens the entry's
"reason for silence" as written. Schmidt 1999, DOI 10.1023/A:1008398319853, remains
at metadata only and is now the highest-value unopened document in this file.

Second correction, from the 1993 citation's own title. The entry says the four zeros
"rest on Dokovic 1993 and on one group (Holzmann-Kharaghani-Tayfeh-Rezaie 2008)".
Đoković 1993 covers "order 4n for n = 33, 35, 39" — its scope reaches 39. At most it
can support the zero at 35; it **cannot** be a support for 47, 53 or 59. So the zeros at
47, 53 and 59 rest on HKT 2008 alone. This makes presupposition 4's independence
problem slightly WORSE, not better. READ LEVEL for this: citation title only, which is
adequate for scope and nothing else.

## 4. Numbers I computed myself

Code: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chk.py`
and an inline rerun; pure-integer Python, no libraries (sympy absent), `ord2(n)` the
multiplicative order of 2 mod n by repeated doubling, `cosets(n)` the orbit count of
x -> 2x on Z/n by explicit orbit walk, separation by exhaustive enumeration of
`itertools.combinations(frame, 4)`.

The entry's stated frame of 33 orders is not stated explicitly in the entry; I
recovered it from its own C(33,4) = 40,920 and its count of 29 realisable orders. It is
odd n = 1..59 complete, plus 61, 63, 69 — 33 orders, 4 failing, 29 realisable. My first
run used a 31-order frame (3..59, 63, 69) and gave 76.8%; on the entry's frame the
figures reproduce exactly.

| quantity | entry | my run | agree |
|---|---|---|---|
| pairs at the four failures | (12,6), (23,3), (52,2), (58,2) | 35→(12,6), 47→(23,3), 53→(52,2), 59→(58,2) | yes |
| value sets disjoint across the split | yes | yes | yes |
| distinct pair values | 32 of 33 | 32 of 33 | yes |
| injective on | 31 of 33 | 31 (sole collision (20,3) = {25, 41}) | yes |
| 4-subsets of the frame separated | 31,930 of 40,920 = 78.0% | 31,930 of 40,920 = 78.0% | yes |
| pair(65), pair(67) | (12,7), (66,2) | (12,7), (66,2) | yes |
| either value occurring on either side | neither | neither — absent from the whole 33-order frame | yes |
| other reading: ord_2 = 12 at realisable orders | 13, 39, 45 | 13, 39, 45 | yes |
| other reading: coset values {2,3,6} recur | yes | 2→{3,5,11,13,19,29,37}, 3→{7,9,17,23,25,41}, 6→{21,69} | yes |

Hand check, not taken on trust: 2^12 = 4096 = 35·117 + 1, and 35·117 = 4095, so
ord_2(35) = 12 provided no smaller exponent works — confirmed by the walk.

So the entry's load-bearing kill arithmetic is now reproduced a **third** time, in a
fresh context, cell for cell. It is exact integer arithmetic, not empirical. The soft
part the entry already flags — that 78% separation of arbitrary 4-subsets implies "this
is not a test" — remains unsourced, and I found no null-model convention; I spent no
budget looking, since the entry already records that the query which would ground it
returned none.

Collateral check of the entry's framing of 65 and 67 as the smallest odd orders of
unknown status: Turyn's class covers 61, 63 and 69 but neither 65 nor 67 (q = 129 and
q = 133 are not prime powers). Consistent with the entry. MY OWN REASONING; "unknown"
depends on all known constructions, not Turyn's alone, so this corroborates rather than
establishes.

## 5. What this means for the entry's verdict

The leg I was sent to test is **UNVERIFIED, leaning the entry's way.**

- HKT 2008 is now partly opened. At abstract-plus-references level it does **not**
  publish the candidate's quantity, so the entry's novelty claim survives first contact
  with the document the entry itself named as most likely to settle it.
- Its full text is still unread, and Đoković 1993 is entirely unopened. So the entry's
  **Medium novelty confidence is still correctly withheld from High** — for exactly the
  reason the entry gives. One document half-read and one unread is not two supports.
- The member-(iv) question — what structure the 2008 search actually exploited at the
  four failing orders — is the one thing the body would settle and the one thing I could
  not reach. It remains open in both directions.
- Nothing I found disturbs the Gate 4 rejection. Its load-bearing leg is arithmetic, I
  reproduced it exactly, and no document was ever needed for it.
- Two things the entry should add: the Turyn-only-infinite-class conjecture, which is a
  published prediction about larger orders that the entry's "never explained" framing
  misses; and the scope fact that Đoković 1993 reaches only n = 39, so 47, 53 and 59
  rest on one group alone.

Cheapest next routes, in order: the dropped href on the IPM author page (raw HTML, one
retrieval, a PostScript or PDF copy of the full text by one of the authors); then
Schmidt 1999 at DOI 10.1023/A:1008398319853 at link.springer.com/article/, the same
route that worked here on the first try; then Đoković 1993 via a DOI lookup from a
host this container can reach.
