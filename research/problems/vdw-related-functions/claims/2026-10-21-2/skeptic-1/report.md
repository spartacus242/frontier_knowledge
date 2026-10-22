# Skeptic-1 report: claim 2026-10-21-2 (G(3,9) = 49, printed 48)

Only claim.md was read; nothing else in the repository was opened.

## 1. REPRODUCED? YES

**(a) Witness** (`check_witness.py`): 48 distinct integers, sorted, consecutive gaps between 1 and 9 (max 9), and no 3-AP over all pairs (a<b), checking whether 2b-a is in S. So G(3,9) >= 49 under the definition as quoted.

**(b) Exhaustive search** (`dfs.c`, then `dfs2.c`): a plain DFS over x1 = 0 and each next element in x+1..x+9, rejecting a candidate c if c = 2b-a for some earlier a<b in the set (forbidden bitset). There is no pruning other than this, so the whole tree is explored. It reports the largest set found.
- Validation against the table: s = 2,3,4,5,7,8 give max 4,8,10,16,32,36, so G = 5,9,11,17,33,37, which matches the printed values. s=8 took 987,327,046 nodes.
- An independent SAT encoding (`sat_check.py`, CaDiCaL 1.5.3: 3-AP clauses, window/gap clauses, sequential-counter cardinality) agrees for s=5 (16 SAT, 17 UNSAT), s=6 (22 SAT, 23 UNSAT) and s=7 (32 SAT, 33 UNSAT). s=8 and n=37 timed out after 1200 s, so that run is inconclusive. SAT was not used for s=9.
- `dfs2.c` is the same DFS with word-shift bitset updates. Its node counts are identical to `dfs.c` for s=2..8, and on a sample s=9 part.
- For s=9 the search was split into all 9^4 = 6561 prefixes of the first 4 gaps (`driver.sh`, `runpart.sh`, `parts/*.out`), and `aggregate.py` combines them (`aggregate.out`):
  - 3319 prefixes are invalid (they contain a 3-AP), 3242 were searched and 0 output files are malformed.
  - The search visited 208,428,330,460 nodes in total.
  - **The maximum size over all parts is 48.** No 49-element set exists, so G(3,9) = 49 exactly. The search also found the claim's witness and two other 48-sets.
- **Could the printed 48 be right?** Not under any reasonable reading:
  - With the definition as printed (x1<...<xn, gaps <= s), G = 49.
  - A strict-gap reading (< 9, i.e. <= 8) gives 37.
  - Reading the table as the maximum AP-free size (G-1) would make the s = 2,3,4,5,7,8 entries wrong.
  - No consistent reading gives 48 here while keeping the other entries correct.
- Side observation, not part of this claim: s=6 gives max 22, so G(3,6) = 23, but the table prints 22. This is the same off-by-one, confirmed by both DFS and SAT.

## 2. NOVEL? YES (no prior publication found; the journal and book full texts were not accessible)

Queries and outcomes:
1. WebSearch `"5, 9, 11, 17, 23, 33, 37, 49" sequence`: unrelated OEIS entries and puzzles, nothing relevant.
2. WebSearch `"5, 9, 11, 17, 22, 33, 37, 48"`: unrelated OEIS entries.
3. WebSearch `3-term arithmetic progression free set bounded gaps "G(3,9)" van der Waerden`: general 3-AP papers, plus Brown–Hare (Canad./JCTA bounded gaps). No values.
4. WebFetch https://oeis.org/A171081: this is w(3,n). It does not cover bounded gaps.
5. WebSearch `OEIS least n every set n integers consecutive differences at most s contains 3-term arithmetic progression`: nothing relevant.
6. WebSearch `Brown Landman Robertson "Bounds on some van der Waerden numbers" small values table G(k,s)`: found the arXiv paper, ar5iv and the Elsevier Pure page.
7. WebFetch the ar5iv rendering of 0706.4420: the rendering does not include the table.
8. WebFetch the Elsevier Pure record (JCTA 115(7) 2008, 1304–1309): the abstract covers only w(k,m;2), w(k;s) bounds and a table of w(k,3;2). It does not mention G or the bounded-gap functions, and lists no corrections.
9. WebFetch https://arxiv.org/pdf/0706.4420: v1 only. The definition is confirmed verbatim, and Table 1 lists G(3,s) = 5,9,11,17,22,33,37,48,?.
10. WebFetch https://arxiv.org/abs/0706.4420v1: one version, with no journal-ref or comments.
11. WebSearch `Landman Robertson "Ramsey Theory on the Integers" errata`: found the AMS page and an errata PDF on gasarch.
12. WebFetch the AMS stml-73 post-publication page: no errata content.
13. WebFetch the gasarch RTI-LR.pdf (errata for the 1st edition, 2004): the only table fix concerns w(5,3,3;3). Nothing on bounded gaps.
14. WebSearch `arithmetic progressions "bounded gaps" 3-term exact values computed backtrack "gaps at most" Landman`: nothing relevant.
15. WebSearch `Tom C. Brown Simon Fraser publications list arithmetic progressions bounded gaps`: found the paper list.
16. WebFetch the Tom Brown paper list (sfu.ca/~vjungic/tbrown): no values of G(3,s) and no corrections.
17. WebFetch the gasarch VDWgaps.pdf (Brown–Hare 1997): only G(k,2) values.
18. WebSearch (extended) `"Bounds on some van der Waerden numbers" ... "bounded gaps" OR "G(k,s)" OR "M(k,s)"`: nothing relevant.
19. WebSearch `mathoverflow longest sequence without 3-term arithmetic progression consecutive gaps bounded`: found Fox–Schildkraut arXiv 2608.20533.
20. WebFetch arXiv 2608.20533 (Fox–Schildkraut, "On nearly consecutive sequences..."): asymptotic results only. No k=3 table and no mention of the BLR table.
21. WebSearch `Ramsey Theory on the Integers ... table "G(3" ... 33 37`: nothing relevant.
22. WebSearch `"gap number" arithmetic progression "g(3" exact values ...`: nothing relevant.
23. WebSearch `"G(3,9)" "49" arithmetic progression`: nothing relevant.
24. WebSearch `OEIS longest 3-AP-free sequence with differences at most n "4, 8, 10, 16"`: unrelated OEIS entries.
25. WebFetch EJC v20i4p29 (Ahmed–Dybizbański–Snevily): about r(k,n), not gaps.
26. WebFetch the Princeton page for Alon–Zaks, "Progressions in sequences of nearly consecutive integers": asymptotic results only.
27. WebFetch the Wikipedia article "Van der Waerden number": nothing on G.
28. WebSearch `"Bounds on van der Waerden numbers and some related functions" cited by`: no citing paper with values.
29. WebSearch `"3-term arithmetic progression" "gaps at most" exact value 49 48 computer search ...`: nothing relevant.
30. WebSearch `Brown Landman Robertson Table 1 G(3,s) error corrected value`: nothing relevant.

Caveats: I could not read the full journal text or the 2nd edition of the book (2014). The journal abstract suggests the G/M material was not in the journal version.

## 3. HONEST? YES

The frozen definition requires one k=3 table entry for M or G that is "?" or wrong. The claim meets it on every point:
- G(3,9) is printed as 48 and is wrong.
- An explicit 3-AP-free object of size v-1 = 48 meets the printed definition.
- An exhaustive proof shows size v = 49 is impossible.
- No prior publication was found.

The claim was not narrowed: it states the exact value, and the definition is used verbatim.

## Verdict
SIGN-OFF
