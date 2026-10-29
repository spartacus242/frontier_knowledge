# VERIFY-02-e — fresh-context check of the ROUTING row for UQ-20261028-02

Checker: fresh context, did not write the entry. Budget allowed: 2 searches, 4 fetches.
Budget spent: 2 searches, 4 fetches (fully spent; one lead left unopened for that reason and is
marked COULD NOT READ — BUDGET, not NOT FOUND).
Entry checked: UQ-20261028-02-entry.md. Adversary 2 log read only at lines 140-200 and 255-295,
where the attack-2 claim under test lives. Citations taken from the ENTRY, not from the log labels.

## WHAT I OPENED

1. **Fouvry & Klüners, "On the Spiegelungssatz for the 4-rank", Algebra & Number Theory 4 (2010)
   no. 5, 493-508.** Route: https://msp.org/ant/2010/4-5/ant-v4-n5-p01-p.pdf — opened first try,
   no error. THREE fetches (targeted transcription requests: body items; then structure/headings;
   then Section 1 pp. 493-498 verbatim). **READ LEVEL: full text via summariser, targeted —
   section-and-paragraph read with verbatim transcription of the specific sentences, equations
   (2),(3),(5),(6),(7),(8),(9),(10),(11), Conjecture 1.2, Theorem 1.8, Corollary 1.9, and the
   complete heading list with page numbers.** Numerals WERE served to me (they were not served to
   adversary 2, whose budget ran out; that was a fetcher/budget fact, as the log correctly said).
2. **Rozenhart, Jacobson & Scheidler, "Computing Quadratic Function Fields with High 3-Rank via
   Cubic Field Tabulation".** Route: https://cspages.ucalgary.ca/~rscheidl/Papers/3-rank-tab.pdf —
   opened first try. ONE fetch. **READ LEVEL: targeted section read via summariser** (identity,
   scope, Tables 3-4 headers, Section 7, reference list).
   This is the document the entry nominates as "the unopened computational table paper" that could
   close the routing row.
3. **Sawin & Wood, arXiv:2301.00791.** Route: https://ar5iv.labs.arxiv.org/html/2301.00791 — opened
   first try. ONE fetch. **READ LEVEL: partial — Section 1.1/1.2/1.3 excerpt plus Conjecture 1.1
   hypotheses and Remarks 1.3/1.4 as served; Sections 9, 11, 12 NOT served and NOT read.**
4. **Yoonjin Lee, J. Number Theory 92(1) (2002) 37-66, DOI 10.1006/jnth.2001.2699** — the entry's
   own nominated lead-by-kind. **COULD NOT READ — BUDGET.** Routes tried: https://doi.org/10.1006/
   jnth.2001.2699 returned HTTP 302 to https://linkinghub.elsevier.com/retrieve/pii/S0022314X0192699X
   (the redirect was reported, not followed). One search located https://pure.ewha.ac.kr/en/
   publications/cohen-lenstra-heuristics-and-the-spiegelungssatz-number-fields/ (an abstract-level
   institutional record). I had one fetch left and spent it on Sawin-Wood instead, judging the
   module-grain hypothesis question higher-stakes than an abstract-only read that by my own rules
   could not settle grain. So Lee 2002 remains unread past its title, by budget. NOT a finding
   about the document.

Searches run (2 of 2): (i) Lee 2002 open copy — found only the Ewha abstract record and unrelated
Klüners asymptotics papers; (ii) a query aimed squarely at a published measured per-G conditional
("computed conditional distribution 3-class group structure Q(sqrt d) Q(sqrt -3d) reflection pair
fundamental discriminants numerical verification Dutarte 3^-(r+1)") — no returned title prints that
quantity; nothing from it was opened, budget spent. That is a non-finding, not an absence check.
No search was refused.

## (1) IS THE POSING SENTENCE VERBATIM, AT THE LOCATION CLAIMED?

**The sentences: YES, verbatim. The location label: NO — the entry mis-states it, and the
mis-statement is one the entry leans on rhetorically.**

- CONFIRMED verbatim, Fouvry-Klüners p. 504, inside **Section 3, whose heading is
  "3. Proofs of our main results"**, under the **run-in (paragraph) heading "The case p=3."**:
  > "Analyzing the proof of Theorem 1.8, we see that everything works for p = 3 as soon as we have a
  > suitable proven version of Conjecture 1.2."
  The entry quotes the clause from "we see that everything works..." onward, which is accurate as a
  clause. The two sentences before it are "Following the technique used in the proof of (11), we can
  perform this infinite series." / "Hence we can pass from each of the four equalities of
  Theorem 1.8 to each of the four equalities of Corollary 1.10."
- CONFIRMED verbatim, **Section 1, p. 495**, immediately after displayed equation (11):
  > "But this equality is conjectural for the moment."
  The entry attributes this to "section 1, of the 3-rank equality (11)" — **correct**.
- **FALSE AS WRITTEN**: the entry says at line 31 "Section 3 is headed 'The case p = 3'", and
  repeats "with its own section heading" (lines 36, 49, 59). The full heading list, as printed with
  pages: 1. Introduction (493); 1.1 The Damey-Payan Theorem and Gerth's contribution (496);
  2. General results on the 4-rank (499); 3. Proofs of our main results (501); 4. Some remarks (506);
  References (507). "The case p=3." is a **run-in heading within Section 3 at p. 504**, alongside
  "The main step." (502) and "A weighted version." (505). The phrase occurs nowhere else in the paper.
  The substance survives (a 2010 paper by the named audience has a paragraph headed with the
  candidate's prime, saying what the p = 3 case waits on); the grain of the claim does not.
- Conjecture 1.2, as served: it is **not** a reflection conjecture; it is the Cohen-Lenstra p-rank
  density conjecture, "(i) Prob-({D in D- : rk_p(C_D) = r}) = a_p^-(r) := p^{-r^2} eta_inf(p)
  eta_r(p)^{-2}" and "(ii) Prob+(...) = a_p^+(r) := p^{-r^2-r} eta_inf(p) eta_r(p)^{-1}
  eta_{r+1}(p)^{-1}", with eta_k(t) := prod_{j=1..k}(1 - t^{-j}) (4). The entry and adversary 2 use
  it correctly as "an unproven input".

## (2) IS THE ESTIMAND STRONGER THAN WHAT IS IN PRINT? — **NO AT RANK GRAIN. This is the main correction.**

Fouvry-Klüners **Section 1, p. 494-495** prints the candidate's rank-grain conditional, at the
candidate's **prime (3)**, for the candidate's **pair (D, -3D)**, over the candidate's **population
(positive fundamental discriminants)**. Verbatim, with locations:

- Attribution sentence, Section 1 p. 494: "Dutarte [1984], further pushing the probabilistic model
  leading to the heuristics of Cohen-Lenstra [1984], proposed" / "a value of the second frequency,
  namely:" — and the conjecture is labelled "Conjecture 1.1 [Dutarte 1984, Formula 3, p. 8]".
- **Equation (2)**: "lim_{X->+inf} #{D : 0 <= D <= X, rk3(C_D) = r, rk3(C_-3D) = r + 1} /
  #{D : 0 <= D <= X, rk3(C_D) = r} = 3^{-(r+1)}."
- The conditional-probability convention, p. 494: "This conjectural equality can be seen as a
  conditional probability under the following convention:" ... equation (3) defines Prob+ as natural
  density over positive fundamental discriminants ... "With these definitions, Conjecture 1.1 is just
  a statement concerning the existence and value of a conditional probability."
- **Equation (5)**, introduced by "In other words, Dutarte believes that for any r >= 0 we have the
  equality": "Prob+(rk3(C_-3D) = r + 1 and rk3(C_D) = r | rk3(C_D) = r) = 3^{-r-1}."
- **Equations (6),(7)** (joint densities): "= 3^{-(r+1)} a+_3(r)" and "= (1 - 3^{-(r+1)}) a+_3(r)".
- **Equation (11)**, Section 1 p. 495: "Prob+(rk3(C_-3D) = rk3(C_D) + 1) = lim_{R->inf}
  sum_{r=0}^R 3^{-(r+1)} a+_3(r) = eta_inf(3) sum 3^{-(r+1)^2} eta_r(3)^{-2} (1-3^{-(r+1)})^{-1}"
  **"= 0.29765117 . . . ."** followed by "But this equality is conjectural for the moment." and then
  **"It has been tested on a computer by Dutarte [1984, §4.2]."** /
  **"We ran similar experiments and the constants are close, but not too close."**

Consequences for the row, each of which contradicts something the entry asserts:

(a) The entry's NUMBER CHECK (line 36) says "No source named anywhere in this record prints the
    candidate's quantity" and that Fouvry-Klüners at p = 3 merely "ANNOUNCE a route conditional on
    an unproven input". **At rank grain that is false.** They print the conditional law as an
    explicit conditional probability (2)/(5), the joint densities (6)/(7), and the aggregate numeral
    0.29765117..., in Section 1, before any of their own 4-rank theorems. The "route conditional on
    an unproven input" characterisation belongs to the p = 3 analogue of Theorem 1.8 / Corollary 1.10
    at p. 504, not to the rank-grain conditional, which is in print at p. 494 as Dutarte's.
(b) The entry's UNVERIFIED presupposition (line 20) — that Dutarte's eq. (3) reads
    P(delta = 0 | r = a) = 3^{-(a+1)} with delta = 0 equivalent to the +1 jump — is now
    **CONFIRMED at second hand, with a page citation**: Fouvry-Klüners cite it as
    "[Dutarte 1984, Formula 3, p. 8]" and state it in exactly the +1-jump conditional form over
    positive fundamental discriminants. READ LEVEL: full targeted read of Fouvry-Klüners; I did
    **not** open Dutarte, so this is secondary-source confirmation, not a first-hand read.
(c) The entry says the measurement limb is untouched. In print there are **two reported computer
    tests of the aggregate at rank grain**: Dutarte 1984 §4.2, and Fouvry-Klüners' own
    ("We ran similar experiments and the constants are close, but not too close"). No numerals for
    those experiments appear in the text served to me. So the measurement limb is not virgin:
    what is missing is a MODERN measurement with confidence intervals, and the per-G grain.
(d) What genuinely is not in this paper: **group structure**. Asked directly, the document yields
    only p-ranks and 4-ranks; the class group appears as "a finite abelian group" (p. 493) with
    p-rank defined as dim_{F_p} A/A^p. Section 3 says nothing about full group structure. So the
    row's surviving novelty is **the module grain, plus a measurement with error bars** — exactly
    the reduction my brief anticipated.

### Mathematics I ran myself (exact rationals, not floating point)

Script: /tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/fk11.py
(python3 -I, fractions.Fraction, eta_inf truncated at j <= 200 so truncation error < 3^-200).

- Fouvry-Klüners (11), form A, sum_{r>=0} 3^{-(r+1)} a_3^+(r) = **0.297651172917...**
- Fouvry-Klüners (11), form B, eta_inf(3) sum 3^{-(r+1)^2} eta_r(3)^{-2} (1-3^{-(r+1)})^{-1}
  = **0.297651172917...**; A - B = **0 exactly** in rationals. Both match the printed
  "0.29765117 . . ." to all 8 printed digits. The paper's numeral and its two printed forms check out,
  and the OCR of the garbled exponent in form B is pinned by the match.
- eq. (9) marginals: sum_{r<=40} a_3^+(r) = 1.0 and sum_{r<=40} a_3^-(r) = 1.0.
- eq. (10) complement: sum (1 - 3^{-(r+1)}) a_3^+(r) = 0.702348827083, and the two sum to
  1.000000000000.
- **Transport identity, the entry's line-60 vulnerability, re-run exactly**:
  a_3^-(b) = a_3^+(b)(1 - 3^{-(b+1)}) + a_3^+(b-1) 3^{-b} holds with difference **exactly 0** as
  rationals for b = 0..12 (adversary 1 had floating point to 1e-12 at b = 0..5 only). Values:
  a_3^-(0) = 0.560126077927949, a_3^-(1) = 0.420094558445962, a_3^-(2) = 0.019691932427154,
  a_3^-(3) = 0.000087390232665, a_3^-(4) = 0.000000040964172, a_3^-(5) = 0.000000000002098.
- **MY OWN REASONING, not sourced**: with a_3^+(r) > 0 for all r, the recursion determines j
  inductively — b = 0 gives j(0) from a^-(0) = a^+(0)(1 - j(0)), and each later b determines j(b)
  from quantities already fixed — so j(a) = 3^{-(a+1)} is the unique jump law transporting the
  real-quadratic 3-rank law onto the imaginary one. That is my derivation; no document I opened
  states the uniqueness. **It is a statement about RANKS only and transports nothing to per-G grain**:
  the premise it quantifies over is the rank marginal, so it is silent on whether the conditional
  depends on G beyond rank(G). The entry's own line 22 ("DECLARED A MEASURAND") is right about that.

## (3) DOES ANYONE STEP OVER THE ROW'S BAR BY A SUPERIOR ROUTE?

- **The entry's own nominated closer is closed, negatively — good news for the row.**
  cspages.ucalgary.ca/~rscheidl/Papers/3-rank-tab.pdf is **not** a number-field 3-rank table. It is
  Rozenhart, Jacobson & Scheidler, "Computing Quadratic Function Fields with High 3-Rank via Cubic
  Field Tabulation": quadratic **FUNCTION** fields over F_5, F_7, F_11, F_13, discriminant degree up
  to 11 (Tables 3-4), **3-ranks only, no group invariants**, and **no joint or conditional
  frequency** — "The paper does not report how often r3(-3d) = r3(d) + 1 occurs, and it does not
  compare any observed rate with a predicted 3^-(r+1)". Its only reflection-pair content is one
  Section 7 example ("but its unusual dual field of discriminant -3D has"), escalatory /
  non-escalatory language, and Lee's reflection papers in the reference list. So the entry's
  line-60 worry ("if it prints the jump frequencies the routing below is wrong") is **resolved: it
  does not**, and the row is not pre-empted from there.
- **Rank grain IS partly stepped over**, by Fouvry-Klüners §1 (prediction, aggregate numeral) plus
  the two reported computer tests (Dutarte §4.2; Fouvry-Klüners' own). Not a per-G result and not a
  confidence-interval result, but enough that the row cannot claim the rank-grain quantity.
- **Module grain: the row's novelty is at material risk, and the entry's reason for dismissing the
  risk is wrong.** The entry (line 35) excludes Sawin-Wood because "the candidate's pair sits
  outside their hypothesis (Q does not contain mu_3)". The hypothesis is on the **base** field, and
  the natural base here is K_0 = Q(sqrt -3), which does contain mu_3. Conjecture 1.1 as served:
  "Let Gamma be a finite group and p a prime p nmid |Gamma|." / "Let K_0 be a number field with u
  infinite places containing the p^r th roots of unity but not the p^{r+1} th roots of unity, for
  some r >= 1." For p = 3, Gamma = Z/2: 3 does not divide 2, Q(sqrt -3) contains mu_3 but not mu_9
  (r = 1), u = 1 complex place (Remark 1.4). **The hypotheses are met.** Further, their own Section
  1.1 names this very case as prior work — "Malle [Mal08] gave suggested conjectures for K_0=Q and
  Gamma=Z/3Z,Z/5Z, as well as K_0=Q(-3) and Gamma=Z/2Z" — and Section 1.3 says "In Section 11, we
  discuss the match between Malle's number field data and our conjectures (which is excellent)."
  Whether Conjecture 1.1 + Theorem 1.2 actually yield the per-G joint law for the two eigenspaces of
  this pair I **could not confirm**: the served excerpt gives only the general measure nu and works
  out Gamma = C_7, p = 2 as its example; **Sections 9, 11 and 12 were not served and I had no fetch
  left**. So: module-grain novelty is **UNVERIFIED and at risk**, not established, and not refuted.
- **STRING NOT LOCATED.** The two strings the entry attributes to Sawin-Wood §1.1 — "imply that f_i
  and f_j cannot be statistically independent of each other" and "can be used to give an explicit
  formula for the dependence between those two representations" — I could **not locate** in the §1.1
  text served to me, which did not serve the Scholz sentences either. The nearest served sentences
  are different wording: "Second, we do not predict the distribution of the parts of Cl_{K|K_0}[p^inf]
  corresponding to different irreducible representations of Gamma are all independent (as all previous
  conjectures have)." and "The behavior that we conjecture involves explicit dependence between an
  irreducible representation and its dual (but otherwise independence between different
  representations)." Both adversaries report the entry's strings from their own reads; my read was
  partial and my summariser served a different slice, so **this is a non-confirmation at partial read
  level, not a refutation**, and I do not reattribute the strings anywhere.

## (4) IS THE ROW'S WITHDRAWAL CONDITION STATED CORRECTLY? — **NO.**

The entry's routing caveat (line 64) reads: "that absence is Unverified, and the unopened 3-rank
table paper could close it." Two defects:
1. **It names the wrong document.** I opened it: function fields, ranks only, no joint frequency. It
   cannot close the row, so as a withdrawal trigger it is inert.
2. **It omits both live triggers.** (i) A published per-G module-grain joint law — Sawin-Wood
   Conjecture 1.1 with K_0 = Q(sqrt -3), Gamma = Z/2, p = 3, whose hypotheses ARE satisfied and
   whose Sections 9/11-12 are unread. (ii) At rank grain the row has no novelty to withdraw: it is
   already closed in print by Fouvry-Klüners (2)/(5)/(11) plus two reported computer tests, so the
   row must not claim it.

## VERDICT ON THE ROW: **REWRITE** (do not write as drafted; do not drop)

Posing is confirmed at first hand, with a corrected location. The row's bar ("someone posed it in
print, and the Source column shows it unanswered") is met for a **narrower** problem than drafted.
Corrected cells for ledger/routed-open-problems.md:

| Date | Ledger ID | Problem | Source showing it is open | Tier | Picked |
|---|---|---|---|---|---|
| 2026-10-28 (cells corrected 2026-10-29, VERIFY-02-e) | UQ-20261028-02 | At p = 3, is the reflection-pair conditional law for (Q(sqrt d), Q(sqrt -3d)) over positive fundamental discriminants determined by the 3-RANK alone — i.e. does P(r_3(-3d) = r_3(d)+1 | Cl_3(Q(sqrt d)) = G) equal 3^-(r_3(G)+1) for every finite abelian 3-group G — or does it depend on G beyond its rank? NOT OPEN AT RANK GRAIN: Fouvry-Klüners eq. (2)/(5) print the conditional 3^-(r+1) (attributed to "Dutarte 1984, Formula 3, p. 8") and eq. (11) its aggregate 0.29765117..., computer-tested by Dutarte §4.2 and by Fouvry-Klüners themselves. Computable part: measure the per-G conditional over fundamental discriminants d <= 10^8-10^9 with confidence intervals and test whether it factors through the rank; separately re-measure the aggregate against 0.29765117..., since Fouvry-Klüners report "the constants are close, but not too close". Read Sawin-Wood arXiv:2301.00791 §§9, 11-12 FIRST: their Conjecture 1.1's hypotheses are satisfied for K_0 = Q(sqrt -3), Gamma = Z/2, p = 3, and if those sections give the per-G joint law the module-grain part is already conjecturally settled. | Fouvry & Klüners, "On the Spiegelungssatz for the 4-rank", ANT 4 (2010) no. 5, 493-508: §1 p. 495, after eq. (11), "But this equality is conjectural for the moment."; §3 "Proofs of our main results", run-in heading "The case p=3.", p. 504, "Analyzing the proof of Theorem 1.8, we see that everything works for p = 3 as soon as we have a suitable proven version of Conjecture 1.2." The paper reaches only 3-ranks and 4-ranks, never group structure. | A for the aggregate re-measurement; B for the per-G limb, whose novelty is UNVERIFIED pending Sawin-Wood §§9, 11-12 | |

Withdrawal condition to carry in the row, replacing the drafted one: **withdraw if Sawin-Wood
arXiv:2301.00791 §§9/11-12, or any later paper, prints the per-G joint law for K_0 = Q(sqrt -3),
Gamma = Z/2, p = 3, or if any paper prints a measured per-G conditional with error bars. NOT
withdrawn by cspages.ucalgary.ca/~rscheidl/Papers/3-rank-tab.pdf — opened 2026-10-29: Rozenhart-
Jacobson-Scheidler, quadratic FUNCTION fields, 3-ranks only, no joint frequency.**

## WHAT THIS MEANS FOR THE ENTRY'S VERDICT

The rejection **hardens**. The leg the verdict stands on (Fouvry-Klüners) survives my first-hand
read on substance and gains force: not only was the question asked at the candidate's prime, the
rank-grain conditional and its aggregate numeral are in print at p. 494-495 and have been
computer-tested twice. Line 59's "if the Fouvry-Klüners leg fell, the verdict would survive on
Dutarte alone" is now moot in a second way: Fouvry-Klüners carry Dutarte's formula with a page
citation, so the two legs are welded, and the entry's UNVERIFIED on Dutarte's eq. (3) should be
upgraded to CONFIRMED (secondary source, Fouvry-Klüners §1, Conjecture 1.1 and eq. (2)/(5)).

Corrections the entry should absorb: (a) lines 31/36/49/59 — "Section 3 is headed 'The case p = 3'"
becomes "run-in heading 'The case p=3.' within §3 'Proofs of our main results', p. 504"; (b) line 36
NUMBER CHECK — "No source named anywhere in this record prints the candidate's quantity" is FALSE at
rank grain and must be restricted to module grain, and "Fouvry-Klüners ... at p = 3, ANNOUNCE a route
conditional on an unproven input" must be restricted to their Theorem 1.8 / Corollary 1.10 analogue,
not to the rank-grain conditional; (c) line 20 — Dutarte's eq. (3) upgraded to CONFIRMED at second
hand; (d) line 35 — the hypothesis ground for excluding Sawin-Wood is wrong, since the hypothesis
is on K_0 = Q(sqrt -3), which does contain mu_3, and §1.1 itself names Gamma = Z/2 over that base;
(e) line 60's third nominated settler is spent and returned negative.
