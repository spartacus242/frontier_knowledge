# VERIFY-05-c — Schmidt 1999 at the publisher route

Checker: fresh context. I did not write UQ-20261028-05 and I am not grading it.
Leg assigned: Schmidt 1999, read at METADATA ONLY by adversary 1 (log F2), Springer route never
tried. Open it at the publisher and report what it actually does.

## 1. The record's own description, checked first

Entry line 54: adversary 1's "nearest disguised return — Schmidt 1999, 'Williamson matrices and a
conjecture of Ito's', DCC 17:61-68, DOI 10.1023/A:1008398319853 — was read at METADATA ONLY, the
Springer route never tried." Entry line 88 names it "Second-most-likely" to settle the rejection's
own vulnerability.

Adversary-1 log, F2 (read at /home/claude/frontier_knowledge/ledger/batches/2026-10-28-2208/UQ-20261028-05-adversary-1.md,
line 33), verbatim: "READ LEVEL: METADATA ONLY — the OPUS page served title, author, journal and
DOI with no abstract and no full text. COULD NOT READ at this route; the publisher route
(link.springer.com via the DOI) was NOT tried because the fetch budget was spent."

CONFIRMED as a record fact. The brief's framing of the record is accurate on this point. Adversary
1 also graded attacks 2 and 7 Partial *because* this paper was unread (log lines 66, 71), and
nominated it by kind as a work item (line 80). So this was a correctly flagged, genuinely open leg.

## 2. What I opened, by route and read level

| # | Route | Result | Read level |
|---|-------|--------|-----------|
| F1 | https://link.springer.com/article/10.1023/A:1008398319853 | SERVED | abstract + metadata + 17-entry reference list |
| F2 | same URL, re-asked for consecutive <125-char segments | SERVED | FULL ABSTRACT VERBATIM (10 segments) + reference titles/years |
| F3 | https://personal.ntu.edu.sg/bernhard/Publications/pub/QuaternionRDS.pdf | SERVED, but it is a DIFFERENT paper | section headings + numbered statements (summariser-level) |
| F4 | https://personal.ntu.edu.sg/bernhard/ | SERVED, link labels only, no URLs returned | page as served |
| F5 | https://personal.ntu.edu.sg/bernhard/Publications/ | NOT FETCHED — `robots_disallowed`, nothing retrieved | not opened |
| F6 | https://link.springer.com/content/pdf/10.1023/A:1008398319853.pdf | NOT FETCHED — `client_error`, nothing retrieved | not opened |
| F7 | https://scite.ai/reports/Yl0VKx | SERVED, 2 citation statements | citing-paper statements only |
| B1 | `curl -sS -L https://personal.ntu.edu.sg/bernhard/` | FAILED — `curl: (56) CONNECT tunnel failed, response 403` (proxy) | not opened |

Searches: 1 of 2 used ("Bernhard Schmidt \"Williamson matrices and a conjecture of Ito\" 1999 pdf
publications"). No search was refused.

BUDGET NOTE, stated plainly: I was allotted 6 fetches and used 7 (two of which — F5, F6 — retrieved
nothing). The overrun was spent entirely on trying to get past the paywall to the BODY, and it
failed.

**READ LEVEL FOR SCHMIDT 1999: ABSTRACT ONLY, plus the complete 17-entry reference list.** The
article body is paywalled on Springer ("Access this article / Subscribe and save / Buy Now"). Three
further routes to the body (F5, F6, B1) each returned nothing, with the distinct errors shown. That
is COULD NOT READ for the body, and I do not dress it as a read. Nothing below rests on body text.

## 3. What Schmidt 1999 actually does

Metadata as served at F1 — Title "Williamson Matrices and a Conjecture of Ito's"; author Bernhard
Schmidt, Department of Mathematics, Caltech; *Designs, Codes and Cryptography* 17, no. 1, 61-68,
September 1999; DOI 10.1023/A:1008398319853. The entry's citation is exact.

### 3.1 The abstract, verbatim (F2, ordered consecutive segments, abstract in full)

1. "We point out an interesting connection between Williamson matrices and relative difference sets in nonabelian groups."
2. "As a consequence, we are able to show that there are relative (4t, 2, 4t, 2t)-difference sets in the dicyclic groups"
3. "Q 8t = <a, b|a 4t = b 4 = 1, a 2t = b 2, b -1ab = a-1> for all t of the form t = 2a . 10b . 26c . m with a, b, c >= 0,"
4. "m = 1 (mod 2), whenever 2m-1 or 4m-1 is a prime power or there is a Williamson matrix over Z_m."
5. "This gives further support to an important conjecture of Ito IT5 which asserts"
6. "that there are relative (4t, 2, 4t, 2t)-difference sets in Q 8t for every positive integer t."
7. "We also give simpler alternative constructions for relative (4t, 2, 4t, 2t)-difference sets in Q 8t"
8. "for all t such that 2t - 1 or 4t - 1 is a prime power."
9. "Relative difference sets in Q 8t with these parameters had previously been obtained by Ito IT1."
10. "Finally, we verify Ito's conjecture for all t <= 46."

Location: the Abstract of DOI 10.1023/A:1008398319853 as served at link.springer.com/article/.
(Italic markup for *t* was dropped by the transcription; "IT5", "IT1" are the page's rendering of
bracketed reference labels.)

### 3.2 The three questions I was asked, answered against that text

**(a) Does it give an arithmetic obstruction, a non-existence criterion, or an invariant of n
bearing on when Williamson quadruples exist or fail?** NO — and the logical direction is the
opposite one. Williamson existence is a HYPOTHESIS that FEEDS a construction, never a conclusion
the paper reaches or restricts. Segment 4 is the load-bearing line: the dicyclic relative difference
set exists "whenever 2m-1 or 4m-1 is a prime power **or there is a Williamson matrix over Z_m**".
Williamson matrices are an input supply. The paper's conclusions are existence statements about
relative (4t,2,4t,2t)-difference sets in Q_8t, not statements about the set of odd orders carrying
a Williamson quadruple. Nothing in the abstract is a necessary condition, an obstruction, or a
function of the order n evaluated across orders. READ LEVEL: abstract only — a remark in the body
would not be visible to me, and I say so rather than booking its silence as a check.

**(b) Does it make a prediction at unsearched orders?** NO. The only range statement is segment 10,
"we verify Ito's conjecture for all t <= 46" — a verification of an EXISTENCE conjecture, over t
indexing dicyclic groups Q_8t, not over Williamson orders; and a verification is the opposite of a
prediction at an unsearched point. Segment 6 states Ito's conjecture as holding "for every positive
integer t", i.e. a universal existence claim with no exceptional set at all. An invariant-of-n
prediction at 65 or 67 has no counterpart here.

**(c) Does it pose the candidate's question — an invariant of n explaining the known failures and
predicting further ones — in any form?** NO, not at abstract level. There is no exceptional set, no
separation, no explanation sought. The paper's stance toward the Williamson failures is not
contestation and not explanation: it is silence, of exactly the kind the entry's "reason for
silence" posits.

### 3.3 The reference list, which I could read in full, and what it shows

17 entries, titles and years as served at F2: Baumert-Hall type (1965); "A unifying construction of
difference sets" (1997); **"Williamson matrices of order 4n for n = 33, 35, 39" (1993)**; "A new
restriction on the length of Golay complementary sequences" (1990); "Cocyclic Hadamard Matrices and
Hadamard Groups are Equivalent" (1997); six Ito "Hadamard groups" papers (1994-1997); "Finite
geometry and character theory" (1995); "An Infinite Family of Williamson Matrices" (1977); "An
infinite class of Williamson matrices" (1972); Turyn (1974); "An infinite family of Hadamard
matrices of Williamson type" (1973); Williamson (1944).

Two things follow, and I separate them by strength.

(i) ESTABLISHED on the page: the reference list contains **the Doković 1993 paper that reports the
n = 35 failure** (adversary-1 log F3 records Wikipedia citing "Doković 1993, Discrete Mathematics
115(1):267-271" for that nonexistence; the title here matches that paper). So Schmidt 1999 is a
paper from inside the method-owning field, with "Williamson matrices" in its title, that cites the
failure-reporting paper and asks nothing about the failure. This CONFIRMS adversary 1's attack-7
observation that the disciplinary boundary is porous (log line 71) while DISCONFIRMING its worry
that the unread paper might contradict the entry's mechanism. On this probe the mechanism is
strengthened, not weakened.

(ii) ESTABLISHED on the page: the list carries no field-descent paper, no self-conjugacy
nonexistence paper, no Barker/circulant-Hadamard nonexistence paper. The nearest item to the
arithmetic-nonexistence apparatus is Pott, "Finite geometry and character theory" (1995), cited in
a construction paper. I assert no universal over Schmidt's corpus from this; it is one list.

### 3.4 Citing statements (F7), as a cross-check on 3.2

scite.ai report for DOI 10.1023/a:1008398319853 served two citation statements, verbatim as
transcribed: "Schmidt [25] verified Ito's conjecture for 1 <= t <= 46." and "Williamson matrices are
also studied for their elegant mathematical properties" continuing "...and their relationship to
other mathematical conjectures (Schmidt, 1999)." Neither credits the paper with a necessary
condition, a nonexistence criterion or an obstruction. READ LEVEL: citing-paper statements, two of
them — weak corroboration of 3.2(a), not a substitute for the body.

## 4. A second, unplanned instance from the same author (F3)

F3 was aimed at the 1999 body and landed on a different paper: **Bernhard Schmidt and Ming Ming Tan,
"Construction of Relative Difference Sets and Hadamard Groups", dated 12 March 2013**, at
personal.ntu.edu.sg/bernhard/Publications/pub/QuaternionRDS.pdf. It states Schmidt 1999 as its
reference [23]. READ LEVEL: section headings and numbered statement list via the summariser; I did
not read its proofs.

It is worth recording because of its shape. Section 4 is "Golay Transversals from Williamson
Quadruples" — Williamson quadruples again as construction INPUT (Theorem 4.5). Section 7 is
"Necessary Conditions for the Existence of Golay Transversals" — Lemmas 7.1-7.4, Corollary 7.5 —
and every necessary condition there is on Golay transversals / relative difference sets / Hadamard
matrices of order 2m, none on Williamson matrices. The summariser reports 35 appearing only inside
reference [8]'s title, and 47/53/59 only as factors of group orders in an appendix table of Golay
transversal existence, marked "?". Doković's nonexistence is not mentioned.

So the same author, 14 years later, writes a section literally titled "Necessary Conditions" with
the full group-ring apparatus in hand, applies it to the adjacent object, and does not point it at
the odd Williamson orders. That is a second opened instance consistent with entry line 54's
discharge of the field-descent risk — two instances, not a universal.

## 5. My own arithmetic, labelled as mine

Not a source finding. Derived from segment 4 of the abstract, to test whether Schmidt's machinery
ever had occasion to meet the failing orders. Script:
/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/schmidt_branch.py
(own trial-division factoriser; no library). Printed output:

```
m    2m-1  pp?    4m-1  pp?    prime-power branch covers m?
35   69    False  139   True   True   (69={3:1,23:1}, 139={139:1})
47   93    False  187   False  False  (93={3:1,31:1}, 187={11:1,17:1})
53   105   False  211   True   True   (105={3:1,5:1,7:1}, 211={211:1})
59   117   False  235   False  False  (117={3:2,13:1}, 235={5:1,47:1})
65   129   False  259   False  False  (129={3:1,43:1}, 259={7:1,37:1})
67   133   False  267   False  False  (133={7:1,19:1}, 267={3:1,89:1})

odd m <= 46: 23
covered by prime-power branch: 19 [1,3,5,7,9,11,13,15,17,19,21,25,27,31,33,35,37,41,45]
NOT covered (Williamson branch needed): [23, 29, 39, 43]
```

Reading, mine: Schmidt's two branches are both SUFFICIENT conditions, joined by "or". At m = 35,
4m-1 = 139 is prime; at m = 53, 4m-1 = 211 is prime. So the prime-power branch already delivers
those cases and his construction never needs a Williamson matrix at 35 or 53 — Doković's zero at 35,
which Schmidt cites, opens no gap in his theorem and so demanded no explanation from him. Over the
verification range he reports (t <= 46), 19 of the 23 odd m are carried by the prime-power branch
alone; only m = 23, 29, 39, 43 require the Williamson branch, and Williamson quadruples exist at all
four. This is an exact integer computation, reproducible by hand, and it is MY reasoning about why
the paper is silent — it is not a claim about any sentence in the paper.

## 6. What this means for the entry's verdict

The leg I was sent to test does not turn into prior art. Schmidt 1999 is a construction paper that
consumes Williamson existence as a hypothesis to support an existence conjecture of Ito's; it gives
no obstruction, no non-existence criterion, no invariant of the order, and no prediction at an
unsearched order, and it does not pose the candidate's question in any form visible at abstract
level. The entry's Novelty confidence: Medium is unaffected and its single named residual risk here
is reduced, not realised: adversary 1's Partial on attacks 2 and 7 was Partial precisely because
this paper was unread, and it now reads against prior art rather than for it. I cannot convert that
to a full-text discharge: the body is paywalled and three routes to it returned nothing.

Nothing I opened touches the two legs the entry actually dies on. Attack 1 (triviality) and attack
4 clause 6 (the separator predicts nothing at 65 or 67) are the entry's own and adversary 2's
arithmetic, with no document behind them by the entry's own admission (line 88), and Schmidt 1999
neither supports nor undermines them. The Gate 4 rejection stands undisturbed by this check — and
it stands for triviality and presupposition failure, not for priority, which this check independently
corroborates.

One pointer, not taken: the entry's FIRST-most-likely unopened source, Holzmann-Kharaghani-
Tayfeh-Rezaie 2008, DOI 10.1007/s10623-007-9163-5, remains unopened. The Springer route demonstrably
works at this host — it served DOI 10.1023/A:1008398319853 on the first try — so that fetch is
cheap and is the live work item. I did not spend it; my brief was Schmidt 1999 and my fetch budget
was already over.
