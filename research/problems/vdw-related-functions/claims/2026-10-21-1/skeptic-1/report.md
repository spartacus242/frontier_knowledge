# Skeptic 1 report, claim 2026-10-21-1 (saved by the researcher from the skeptic's hand-back text; the harness blocked the skeptic from writing this file itself)

Verdict: SIGN-OFF (REPRODUCED YES, NOVEL YES, HONEST YES).

## 1. Reproduced: YES
Two independent exhaustive methods: `bt.c` (C backtrack with forward checking) and `check.py` (SAT, CaDiCaL 1.5.3 via python-sat).
Witnesses: all four valid under the quoted definitions.
- M(3,4) = 19 (printed 18): 18 blocks possible; 19 impossible by backtrack (10,875 nodes) and SAT.
- M(3,5) = 31 (printed 29): 30 possible; 31 impossible by backtrack (1,307,059 nodes) and SAT.
- M(3,6) = 38 (printed 37): 37 possible by both; 38 impossible by backtrack (385,801,805 nodes). SAT check of 38 unfinished
  after 60 min (left running, output to `sat_M6_38.txt`).
- G(3,6) = 23 (printed 22): 22 possible; 23 impossible by backtrack (257,387 nodes) and SAT.
- Agrees with printed M(3,2)=7, M(3,3)=11, G(3,2..5)=5,9,11,17, G(3,7)=33; backtrack confirms G(3,8)=37.
- Readings tested, none fits the printed table: closed blocks [(i-1)s, is] (M = 9,13,21,33); gaps < s (G shifted by one, 17 at
  s=6); blocks [(i-1)s+1, is] (translation, unchanged); "maximum size" instead of "least n" (fits M(3,4), M(3,6) only).

## 2. Novel: YES
No publication of the corrected values and no erratum found. arXiv 0706.4420: v1 only, no erratum. Journal version (JCTA 115 (2008)
1304-1309, DOI 10.1016/j.jcta.2008.01.005; Brown's preprint tom-4.5.pdf) drops M and G; its table has only w(k,3;2) and w1(k,3).
Brown-Hare 1997: G(k,2) only (5, 10, 19, 37 for k=3..6). Landman-Robertson: AMS stml-73 page lists no errata; the 2004
first-edition errata sheet has only a w(5,3,3;3) correction.
Queries and fetches (30): the paper title search; arXiv pdf and abs; the Elsevier journal page; tom-4.5.pdf; Brown's index;
tom-22.pdf and VDWgaps.pdf; sequence searches "5, 9, 11, 17, 23, 33", "7, 11, 19, 31, 38", "4, 8, 10, 16, 22, 32",
"6, 10, 18, 30, 37", the printed rows "5, 9, 11, 17, 22, 33, 37, 48" and "7, 11, 18, 29, 37, 48", "5, 9, 11, 17, 23, 33, 37"
(OEIS A043731, A095725, A023267 opened, irrelevant); extended search on 3-AP-free bounded-gap sets (Brown-Hare, CMB bounded-gaps
paper, Brown-Jungic-Poelstra, Integers 14 A43 fetched: different function w*); Landman-Robertson errata 2nd ed.; bounded gaps in
the book; citations of 0706.4420 with M(k,s)/G(k,s); erratum searches; "G(3,6)" / "M(3,4)=19" / "M(3,5)=31"; Brown-Hare citers
(Alon-Zaks fetched, asymptotic only); MathOverflow bounded-gap 3-AP search; "one element from each block"; GKP book and
arXiv 1404.7348 fetched (no M or G); Semantic Scholar citations API blocked by the proxy (403).
Caveat: the full text of the Landman-Robertson 2nd edition (2014) could not be read.

## 3. Honest: YES
Corrected exact values for four entries printed wrong, each with a witness of size v-1 under the printed definitions and an
exhaustive impossibility proof at v; no claim on other entries; not published per question 2.
