# Skeptic-3 report on claim 2026-10-21-2: G(3,9) = 49 (not 48)

Only `claim.md` was read from the repository. All code, logs and results are in this folder.

## 1. REPRODUCED? — YES

### (a) Witness check (`check_witness.py`, log `witness_check.log`)
The 48 printed integers are strictly increasing, distinct, every consecutive gap is in {1,...,9}
(max 9, min 1), and a brute-force check over all pairs a<b finds no c = 2b-a in the set, i.e. no 3-term
arithmetic progression. Translating by +1 gives positive integers, so the witness meets the definition
exactly as quoted (k = 3, s = 9). Hence G(3,9) >= 49.

### (b) Exhaustive impossibility of 49 (`g3s.c`, driver `run_parts.sh`, results `parts/*.out`, `all_parts.txt`)
Independent C backtracking search written from scratch: fix x_1 = 0 (translation invariance), extend by a
gap g in 1..9, maintain forb[p] = number of pairs y < x already chosen with 2x - y = p (a new, larger
element z creates a 3-AP iff forb[z] > 0, since z is the largest element). Search for a 49th element.
The tree was partitioned by the first three gaps into 9^3 = 729 disjoint parts, each run as its own
process writing its own result file (resumable).

Result: all 729 parts finished, every one `result=NO`; 2.08e11 nodes in total. Maximum depth reached
was 48, in exactly three parts (gap prefixes 8,1,8 = the claim's witness; 9,8,6 = its reverse; 9,8,9).
So no 49-element 3-AP-free set with consecutive gaps <= 9 exists; the maximum is exactly 48 and
G(3,9) = 49, exactly as claimed.

### Validation against the rest of Table 1 (`validate_small.log`, `validate_78.log`)
Same program, target = printed value and printed value - 1:
- s=2: 5 NO, 4 YES (G=5, matches); s=3: 9 NO, 8 YES (G=9); s=4: 11 NO, 10 YES (G=11);
  s=5: 17 NO, 16 YES (G=17); s=7: 33 NO, 32 YES (G=33); s=8: 37 NO (9.9e8 nodes), 36 YES (G=37).
- s=6: 22 YES (a 22-element set exists), 23 NO, so G(3,6) = 23, not 22 as printed: a second,
  independent table error (not part of this claim; noted for the record).

### Secondary method (`sat_check.py`, log `sat_small.log`)
CaDiCaL (python-sat) encoding of the same question agrees with the backtracker where it finished:
s=6: 22 SAT (witness verified), 23 UNSAT; s=7: 33 UNSAT. s=8 did not finish in 15 min; s=9 not attempted
by SAT (the exhaustive C search is the reproduction).

### Could the printed 48 be right under another reading?
- Under the paper's own quoted definition ("least n such that every such n-set contains a 3-AP"),
  48 is wrong: the 48-element witness is a 48-set with no 3-AP.
- Under the Nathanson-style convention (G = largest length of a 3-AP-free bounded-gap sequence), 48
  would be right, but then 5, 9, 11, 17, 33, 37 would all be off by one (maxima are 4, 8, 10, 16, 32, 36).
  No single reading makes the row correct; under the quoted definition, s=6 and s=9 are each one too small.
- Positivity / fixed starting point change nothing (translation invariance). A 3-AP with d = 0 is not a
  3-element subset, so "k-term AP" means positive common difference, the standard reading.

## 2. NOVEL? — YES (no source publishes G(3,9) = 49 or corrects the entry)

Web searches (WebSearch), all with outcome:
1. "5, 9, 11, 17, 23, 33, 37, 49" arithmetic progression — unrelated AP/OEIS hits.
2. "5, 9, 11, 17, 22, 33, 37, 48" van der Waerden — generic vdW pages; none has this row.
3. Brown Landman Robertson "Bounds on some van der Waerden numbers" G(k,s) ... table correction — paper pages only; no correction.
4. 3-AP-free set consecutive gaps at most s maximum size G(3,9) 48 OR 49 Landman Robertson — unrelated.
5. OEIS "gaps at most" "arithmetic progression" sequence 4, 8, 10, 16, 22, 32, 36, 48 — unrelated OEIS entries.
6. Landman Robertson "Ramsey Theory on the Integers" errata second edition corrections table G(k,s) — book pages, 2004 errata sheet.
7. "van der Waerden" "gaps" "at most s" k-term arithmetic progression "G(3" ... 48 49 (extended) — Brown–Hare 1997, Landman–Robertson special-gaps papers, journal PDF; no values.
8. Tom Brown Simon Fraser publications list ... corrigendum — paper list; no corrigendum.
9. mathoverflow OR math.stackexchange largest set no 3-term AP "consecutive" gaps bounded by s ... — no thread.
10. "5, 9, 11, 17" "33, 37" OEIS arithmetic progression gap — unrelated.
11. "Bounds on some van der Waerden numbers" cited by G(k,s) OR "gaps at most" OR "bounded gaps" ... (extended) — citing papers; none mentions G(k,s) values.
12. OEIS "4, 8, 10, 16, 22, 32, 36" — unrelated.
13. OEIS "5, 9, 11, 17, 23, 33, 37" — unrelated.
14. maximum size of a set with no three-term arithmetic progression and all consecutive differences at most 9 is 48 — unrelated.
15. "Ramsey Theory on the Integers" Landman Robertson errata ... site:colgate.edu OR site:westga.edu OR site:ams.org — book pages, reviews.
16. "Bounds on van der Waerden numbers and some related functions" G(k,s) table 48 49 correction OR wrong OR erroneous — nothing.
17. Wikipedia van der Waerden number "bounded gaps" G(k,s) Brown Landman Robertson — Wikipedia has no G(k,s).
18. "no 3-term arithmetic progression" "gap" "at most 9" OR "gaps at most 9" maximal set 48 elements — unrelated.
19. OEIS "5, 9, 11, 17, 22, 33, 37, 48" — unrelated.  20. OEIS "9, 11, 17, 22, 33, 37, 48" — unrelated.  21. OEIS "9, 11, 17, 23, 33, 37, 49" — unrelated.
22. "Ramsey Theory on the Integers" second edition chapter "sequences with bounded gaps" ... table — found Nathanson 1980.
23. arxiv 3-term AP free sequences bounded gaps exact values computer search "Brown, Landman and Robertson" 2008 table (extended) — nothing with values.
24. Nathanson "Arithmetic progressions contained in sequences with bounded gaps" Rabung ... — Fox–Schildkraut arXiv:2608.20533, Alon–Zaks.
25. Rabung "On applications of van der Waerden's theorem" OR "bounded gaps" ... — same set.
26. "nearly consecutive sequences without long arithmetic progressions" — Fox–Schildkraut, Alon–Zaks, Stanley-sequence papers (unrelated).
27. mathoverflow longest sequence consecutive differences at most s no three-term arithmetic progression — no thread.
28. "Ramsey Theory on the Integers" 2014 "10.2" OR "10.1" "gaps" ... table — nothing.

Pages fetched (WebFetch):
- arxiv.org/abs/0706.4420 — only v1 (29 Jun 2007); no journal ref, no errata comment.
- arxiv.org/pdf/0706.4420 — confirms quoted definition and Table 1 row G(3,s) = 5, 9, 11, 17, 22, 33, 37, 48, ?; "standard backtrack algorithm".
- ar5iv 0706.4420 — abstract only mentions the table.
- math.colgate.edu/~aaron/pap/VdwBounds.pdf (journal version, JCTA 115 (2008) 1304–1309, DOI 10.1016/j.jcta.2008.01.005) — Section 3 and the G/M table were REMOVED; only the w(k,3;2) table remains. Entry neither corrected nor repeated.
- augusta.elsevierpure.com entry — bibliographic data; no corrigendum.
- arxiv.org/pdf/1201.3842 — no G(k,s); no 48/49.
- oeis.org/A171081 — w(3,n); no G(k,s).
- ams.org postpub stml-73 — no errata content.
- cs.umd.edu RTI-LR.pdf — 2004 errata sheet (1st ed.); nothing on bounded-gap tables.
- math.colgate.edu/~aaron — no errata for the paper or book.
- sfu.ca/~vjungic/tbrown/index.html — Tom Brown's list; no corrigendum.
- sfu.ca tom-22.pdf (Brown–Hare 1997) — G(k;r) asymptotics only.
- en.wikipedia.org/wiki/Van_der_Waerden_number — no bounded-gap function.
- Nathanson, Canad. Math. Bull. 23 (1980) — defines G(k,r), M(k,r); inequalities only.
- web.math.princeton.edu/~nalon/PDFS/vdw7.pdf (Alon–Zaks) — asymptotics only.
- arxiv.org/abs/2608.20533 and PDF (Fox–Schildkraut, Aug 2026) — g(k;r) asymptotic bound only; no exact values; no mention of BLR's table.
- INTEGERS o43 (Brown–Jungić–Poelstra 2014) — double APs; different function.
- gasarch sanepoly.pdf — no G(k,s).
- bookstore.ams.org/STML/73 and gasarch ramseyint.pdf (review of 2nd ed.) — chapter list; no bounded-gap table.
- old.maa.org/node/671587 — review of Graham–Butler; irrelevant.
- Blocked: gasarch VDWgaps.pdf (robots), Google Scholar (robots), zbMATH query (client error), dblp (Anubis). OEIS search pages blocked; individual A-pages found were all unrelated.

Limitation: the full text of the Landman–Robertson book (either edition) could not be inspected directly;
reviews, TOC and the errata sheet show no bounded-gap table. No source found states G(3,9) = 49 or flags
the arXiv table entry as wrong.

## 3. HONEST? — YES
The frozen definition requires, for a k = 3 entry of Table 1 (M or G) that is "?" or wrong: (a) an explicit
3-AP-free object of size v-1 meeting the printed definition, (b) exhaustive proof that size v is impossible,
(c) not already published. The claim targets the G(3,9) entry (printed 48, wrong), gives a 48-element
witness meeting the definition verbatim (a), asserts — and I reproduced — that 49 is impossible (b), and
(c) nothing published was found. Not narrowed (exact value, not merely "published value disproved");
definition unaltered.

## Verdict
SIGN-OFF (see `verdict.txt`).
