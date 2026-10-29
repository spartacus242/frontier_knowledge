# VERIFY-02-d — CHECK: the lead nominated by kind that nobody opened

Checker: fresh context, did not write UQ-20261028-02. Budget: 2 web searches and 6 fetches, ALL SPENT
(2 searches, 6 fetches). No budget remained for a seventh route; where that bit, it is said below.

## The claim under check

Entry lines 60 and 64 (`UQ-20261028-02-entry.md`): the third item of THE REJECTION'S OWN VULNERABILITY is
"the unopened computational table cspages.ucalgary.ca/~rscheidl/Papers/3-rank-tab.pdf, the likeliest home
of an already-printed figure; if it prints the jump frequencies the routing below is wrong and the kill
only hardens", and the Routing row carries the caveat "that absence is Unverified, and the unopened 3-rank
table paper could close it". Adversary 2's log line 68 is where the URL enters the record: returned on its
search 5, "(a 3-rank TABLE paper; NOT OPENED)", repeated at its lines 195-196 and 295 as "the single most
likely home of an already-computed figure". I read only those lines of the logs.

## 1. THE NOMINATED FILE — OPENED

ROUTE: direct fetch of https://cspages.ucalgary.ca/~rscheidl/Papers/3-rank-tab.pdf — HTTP 200, served, three
separate fetches (metadata+headings; sections 6 and 8.2; section 2 + Table 3 column structure + a data row).
NOT a dead link. READ LEVEL: section read via summariser, with verbatim segments requested under 125
characters; table column headers and one data row transcribed cell by cell. No OCR loss except that the
summariser reports the primes garbled in the extracted text of section 2 (the ell/backtick problem: "`-rank"
for "ell-rank", "r0" for "r prime"), which it flagged itself.

IDENTITY, established properly (the record had only a URL and the word "table"):
- Title: "COMPUTING QUADRATIC FUNCTION FIELDS WITH HIGH 3-RANK VIA CUBIC FIELD TABULATION"
- Authors: P. Rozenhart, M. J. Jacobson, Jr., R. Scheidler
- The PDF itself carries no year; references run to 2013. Publication, from Scheidler's own list at
  cspages.ucalgary.ca/~rscheidl/publications.html (fetch 4, READ LEVEL metadata only):
  "Rocky Mountain Journal of Mathematics 45 (2015), no. 6, 1985-2022". My search 1 independently returned
  projecteuclid.org/euclid.rmjm/1457960344, consistent with RMJM; I did not open it (budget).

THE DECISIVE FACT THE RECORD DID NOT HAVE: **this is a FUNCTION-FIELD paper, not a number-field table.**
Its objects are quadratic function fields F_q(t, sqrt(D)) over F_5, F_7, F_11, F_13 with deg(D) up to 11.

WHAT IT PRINTS. Section headings as served: 1 Introduction; 2 Preliminaries; 3 Tabulating Quadratic Function
Fields with non-zero 3-rank; 4 An Improved Algorithm for -3D imaginary; 5 Complexity of the Improved
Algorithm; 6 Conjectures and Results on Class Group Distributions; 7 Numerical Results; 8 Observations on
our Numerical Data (8.1 Divisibility Properties of the Field Counts, 8.2 Comparison of 3-rank Data to
Heuristics); 9 Conclusion; References. Tables: 1 and 2 O-constants in run times; 3 "3-ranks of quadratic
function fields over Fq with -3D imaginary"; 4 "...with -3D unusual"; 5 timings; 6 and 7 minimal genera.

Table 3's columns, transcribed in order: "q" | "deg(D), g" | "# of D" | "3-rank" | "Total" | "Total elapsed
time". The "3-rank" column is the 3-rank of "Fq(t, sqrt D)"; "Total" is "the total number of fields with
given deg(D) value found with that 3-rank". One row verbatim: `5   3, 1   200   1   80   0.00 seconds`.
**No column reports the 3-rank of the partner field F_q(t, sqrt(-3D)). No entry is a count of PAIRS
classified by both ranks.** The "-3D imaginary / -3D unusual" in the captions is a SIGNATURE CONDITION
selecting which D are tabulated, not a second measured rank.

DOES IT PRINT THE JUMP, A CONDITIONAL LAW, OR A BEARING COUNT? NO, on three separate asks:
- It does name the event. Section 2, Preliminaries: "The cases r = r' + 1 and r = r0 are referred to as
  escalatory and non-escalatory, respectively." (the "r0" is the garbled r-prime). That IS the +1 jump,
  in Diaz y Diaz / Belabas vocabulary. Also section 2: "Then the real discriminant D0 = nD is said to be
  the dual of D, and the real quadratic function field K0" ... "= Fq(t, sqrt D0) is the dual of the unusual
  quadratic function field K = Fq(t, sqrt D)."
- But every frequency it states is SINGLE-FIELD. Section 6 serves equation (6.2), "the probability that the
  `-rank of an ideal class group of an imaginary quadratic function field is equal to r", = eta_inf(l) /
  (eta_r(l)^2 l^{r^2}); equation (6.4) for q = 1 mod l; Conjecture 6.1 (Friedman-Washington) and Theorem 6.2
  (Ellenberg-Venkatesh-Westerland) giving eta_inf(l)/|Aut(A)|, "with a frequency inversely proportional to
  the number of automorphisms of A"; Theorem 6.3 (Garton). Section 8.2 compares data the same way: "the
  dotted line denotes the proportion of 3-rank one values found up to a given bound found by our algorithm",
  "As seen in Figure 1, our data mostly agrees with the predicted asymptotic probability (6.2)."
- Theorem 2.3's counts are conditional ON the case, not a frequency OF it: "In the non-escalatory case, all
  (3r-1)/2 classes of fields have signature (1, 1; 1, 1; 1, 1)"; "In the escalatory case, (3^r - 1)/2 classes
  of fields have signature (1, 1; 1, 1; 1, 1) and the remaining" ... "3^r such classes have signature (1, 3)."
- The only place both ranks of a pair appear is ONE WORKED EXAMPLE in section 7: "We were able to produce
  examples of escalatory and non-escalatory cases over F5; this was ascertained by computing" ... "the class
  groups of these particular quadratic function fields and their corresponding dual discriminants"; "For
  example, the real quadratic function field of discriminant D = t10 + 2t9 + t8 + 4t7 + 2t6 + 3t5 +" ...
  "3t4 + 4t3 + 3t2 + t has 3-rank 2, but its unusual dual field of discriminant -3D has 3-rank 3."
  n = 1 anecdote. No proportion, no density, no conditional law, no joint distribution of (r, r').
- "reflection" does not occur in the document at all; "Spiegelungssatz" occurs only in reference [22],
  "Yoonjin Lee, Cohen-Lenstra heuristics and the Spiegelungssatz; function fields, Journal of Number Theory
  106 (2004)". Section 2 attributes the rank relation to Lee [23]; the inequality itself did not come back
  in clean form ("In the latter case, the regulator of K0/Fq(t) is a multiple of ` (see Lee [23])"), so I
  record the Scholz-for-function-fields statement as COULD NOT READ VERBATIM (summariser says the primes are
  garbled in the extracted text), not as absent.

SO: the lead nominated by kind is a DEAD END for the entry's estimand. It is a function-field tabulation of
single-field 3-ranks; it prints no frequency of the +1 jump, no conditional law, and no count classified by
both ranks of a reflection pair. The routing row's caveat is NOT realised by this file.

INCIDENTAL, and the record should have it: this paper's reference [22] is Yoonjin Lee, "Cohen-Lenstra
heuristics and the Spiegelungssatz; function fields", J. Number Theory 106 (2004) — the function-field
companion to the entry's unopened Lee 2002 number-field paper. That corroborates Lee's existence and subject
at second hand (READ LEVEL: a reference-list line in another document). Nothing more.

## 2. THE SAME LEAD, BY KIND, IN THE NUMBER-FIELD LITERATURE — AND IT IS NOT EMPTY

My brief's framing was that this file is "the likeliest home of an already-printed jump frequency". That
framing is wrong about WHICH file, and the record's underlying worry is better founded than the record knew.
One search with no date filter (search 1, terms "escalatory non-escalatory 3-rank quadratic fields table
Diaz y Diaz Belabas proportion discriminants reflection") returned math.u-bordeaux.fr/~kbelabas/pub/r3.pdf.
I opened it (fetch 5; READ LEVEL: section read via summariser, verbatim segments under 125 characters).

IDENTITY: Karim Belabas, "On quadratic fields with large 3-rank". Citation from Belabas's own publication
list, math.u-bordeaux.fr/~kbelabas/research/ (fetch 6, READ LEVEL metadata only), entry [13]: "Mathematics
of Computation, Vol. 73 (2004), pp. 2061-2074". (Same list, entry [06]: "On the mean 3-rank of quadratic
fields", Compositio Mathematica, Vol. 118 (1999), pp. 1-9.)

WHAT IT PRINTS, with locations:
- Section 4.2.3, Conjecture 4.3, attributed to Dutarte. Quotation located there: "Conjecture 4.3 (Dutarte).
  Let P be the Cohen-Lenstra "probability"; then". The formulas served are
      P(delta(D) = 0 | r_3(D) = r) = 3^{-r-1}   and   P(delta(D) = 1 | r_3(-3D) = r) = 3^{-r},
  with the Scholz defect defined as delta(D) = 1 + r_3(D) - r_3(-3D).
- Section 5.1: lists of discriminants, "There are 26 such imaginary fundamental discriminants, and they all
  satisfy r3(Delta) = 4"; a companion list on the real side. Section 5.2: a distribution of 1618 real fields
  of 3-rank 4 by interval, header line "Total 1618 fields 110 days 16686 clusters".
- An APPLICATION of the conditional law to his own enumeration: "we should have r3(-Delta) = 4 with
  probability 3-4 ~ 1.2%", and a prediction of "roughly 1618/35 ~ 6.7" real fields whose complex mirror has
  3-rank 5, against which the paper "reports exactly 6" (the "35" and "3-4" are the summariser's rendering of
  3^5 and 3^{-4}).

MY OWN ARITHMETIC (mine, not the paper's), run to check that these are the same law the entry's
presupposition names, `python3 -I -c ...`:
    Dutarte law at a = r_3 = 4:  3^-(a+1) = 0.00411522633744856 = 1/243
    N = 1618 real fields of 3-rank 4, predicted jumps = N * 3^-5 = 6.65843621399177
    1618/243 = 6.658436213991769        (matches the paper's "~ 6.7")
    other branch, 3^-r at r = 4 = 0.012345679012345678  (matches the paper's "~ 1.2%")
So Belabas's "roughly 1618/3^5" IS the entry's 3^{-(a+1)} at a = 4, and his 1.2% IS 3^{-4}. The two served
formulas are internally consistent with his own defect definition, and with each other under Scholz.

CONSEQUENCES FOR THE ENTRY, each marked:
(a) The entry's UNVERIFIED presupposition (line 20) — "Dutarte's eq. (3) reads P(delta = 0 | r = a) =
    3^-(a+1) with delta = 0 equivalent to the +1 jump. Read only once ... via summariser with OCR damage
    (delta served as "o")" — is now CORROBORATED by a second, independent, clean document: Belabas states
    the same constant, attributes it to Dutarte, and prints the defect definition from which delta = 0 is
    EXACTLY r_3(-3D) = r_3(D) + 1 (my step: delta = 1 + r_3(D) - r_3(-3D) = 0 iff r_3(-3D) = r_3(D)+1).
    That is the equivalence both adversaries left Unverified. It should move from UNVERIFIED to ESTABLISHED,
    sourced to Belabas, Math. Comp. 73 (2004) 2061-2074, section 4.2.3, Conjecture 4.3.
(b) The entry's absence claim — "no reader found a published measurement", "two queries aimed squarely at it
    returned nothing printing it" — is now WEAKER than the record states. Belabas prints a measured count
    against the 3^{-(a+1)} jump law: predicted 6.7, observed 6, in the r_3 = 4 cell. MY OWN READING of its
    limits: it is rank-level not module-level, one cell (a = 4) not a rule-generated set of G, over a
    high-3-rank-selected sub-family found by cubic-field tabulation rather than all fundamental d <= X, and
    with no confidence interval. So it is NOT the entry's estimand, and the narrow routable limb survives;
    but the routing caveat can no longer be written as if nothing measured against this law is in print.
(c) It also adds a FOURTH independent group holding the jump law in print in 2004, which hardens Gate 2's
    askedness finding rather than loosening it.

## 3. WHAT I COULD NOT ESTABLISH

- The verbatim Scholz/Lee inequality in section 2 of the Rozenhart-Jacobson-Scheidler paper: COULD NOT READ
  (primes garbled in the extracted text, per the summariser's own flag). Not absent — unread.
- Whether the Rozenhart-Jacobson-Scheidler RMJM citation is exactly 45 (2015) no. 6, 1985-2022 rests on the
  author's own publications page plus a consistent Project Euclid URL from search; I did not open the
  journal page. READ LEVEL: metadata only.
- Whether Belabas 2004 contains any further jump-frequency table outside sections 4.2.3, 5.1 and 5.2:
  NOT ESTABLISHED, budget exhausted (6/6 fetches, 2/2 searches). An absence here would be a spent budget,
  not a finding, and I do not record one.
- Nothing in this check touched Fouvry-Kluners' unserved numerals or Lee 2002. Those remain unopened by
  anyone, exactly as the entry says.

## 4. VERDICT ON THE LEG I TESTED

The leg is: "the unopened 3-rank table paper could close [the absence]; if it prints the jump frequencies the
routing is wrong". Tested at first hand, that leg STANDS AS WRITTEN for the nominated file: the file opens,
it is Rozenhart-Jacobson-Scheidler, RMJM 45 (2015) 1985-2022, it is a FUNCTION-FIELD single-field 3-rank
tabulation, and it prints no jump frequency, no conditional law and no pair-classified count. The routing row
is not wrong on that account, and the entry's Rejected verdict is untouched by this check.
The entry's DESCRIPTION of the file is wrong and should be corrected: it is not a number-field class-group
table and was never the likeliest home of this figure. The right file of that kind is Belabas, Math. Comp. 73
(2004) 2061-2074, which prints Dutarte's conditional law verbatim and one measured count against it — which
confirms the entry's one unverified presupposition and makes its "no published measurement" caveat narrower
than stated.
