# Skeptic-2 report, claim 2026-10-21-2 (G(3,9)=49 vs printed 48)

## 1. REPRODUCED: YES
(a) wit.py: the 48 integers are strictly increasing, distinct, max consecutive gap 9 (min 1), and contain NO 3-term AP (all pairs a<b checked against membership of 2b-a). So a gap<=9 3-AP-free 48-set exists; "every 48-set with gaps<=9 has a 3-AP" (printed 48) is false.
(b) bt.c: own C backtracking (x1=0, next element in (last,last+9], forbidden-bitset of 2b-a, plus pruning: count of non-forbidden positions reachable before a run of 9 forbidden ones must be >= elements still needed). Positions kept in 512 bits (elements <= 9*48=432). Split into 1000 parts (prefix of 9 elements, prefix index mod 1000; 1,716,873 prefixes, identical in every part) via runpart.sh/driver.sh. All 1000 parts finished: every RESULT line has found=0 for N=49 (56.9e9 nodes in total, incl. repeated prefix enumeration). Hence no 49-set exists, G(3,9)=49.
Validation of the code: with the same program, (S,N): found at N=g-1 and not found at N=g for S=2..5,7,8 reproduces table values 5,9,11,17,33,37 (S=8: N=36 found, N=37 exhaustive none, 30 s). For S=9 the program, started from a 16-element prefix of the witness, finds the witness at N=47,48 (so pruning never kills it) and none at N=49. A CaDiCaL SAT encoding (sat.py) independently agrees for S=2..7 (S=7: N=33 UNSAT, 11.6 s); it was too slow for S=8/9 (aborted), so the S=9 impossibility rests on the C search only (one implementation, no independent second exhaustive run; proof is a node search, not a certificate).
Side finding: for S=6 the program and SAT both find a 22-element set (so G(3,6)>=23, exhaustive none at 23 => G(3,6)=23), i.e. the printed 22 is also wrong; this matches the task's sequence 5,9,11,17,23,33,37,49.
Could printed 48 be right under another reading? Reading "largest 3-AP-free size" gives 48 for s=9 (max is exactly 48) but then s=2..5,7,8 printed entries would be off by one (they equal least-n values); strict gaps <s shifts all entries. Under the quoted definition the printed 48 is wrong.

## 2. NOVEL: YES (as far as accessible sources show; limited)
Queries (WebSearch/WebFetch):
- "van der Waerden numbers G(3,9) Brown Landman Robertson bounds on some van der Waerden numbers" -> arXiv 0706.4420, ar5iv, Elsevier-pure abstract; no new values.
- "sequence 5, 9, 11, 17, 23, 33, 37, 49 arithmetic progression gaps at most s" -> nothing matching; fetched oeis A394594 (unrelated covering sequence); gasarch VDWgaps.pdf: only G(k,2) values (G(3,2)=5), nothing on G(3,6)/G(3,9).
- fetch arxiv.org/abs/0706.4420 (v1 only, no errata comment); arxiv.org/pdf/0706.4420: Table 1 row G(3,s) s=2..9 = 5 9 11 17 22 33 37 48, "?" after.
- "G(3,6)" OR "G(3,9)" ... table corrected 23 49 -> unrelated papers (1201.3842 checked: no G(3,s); 1304.1829 etc).
- Landman Robertson Ramsey Theory on the Integers second edition gap G(k,s) errata -> only book reviews/catalog records; no errata found; book text itself not accessible.
- "Bounds on some van der Waerden numbers" J. Combin. Theory A 115 (2008) 1304 -> only abstract page (journal full text not accessible).
- fetched OEIS A171081 (w(3,n)), no relation. OEIS query "maximum size set integers no 3-term AP consecutive differences at most n 17,22 / 17,23 33 37" -> A003003/A003005/A005047 etc., none the sequence.
- mathoverflow / math.stackexchange query -> nothing relevant. Wikipedia Van der Waerden number page: no gap functions.
- Tom Brown paper list (sfu.ca/~vjungic/tbrown): only titles, no errata/G(3,s).
- arXiv 2608.20533 (nearly consecutive sequences without long APs, gap number g(k;r)): asymptotic only, no exact small values, no mention of the table.
- Integers 2003 a10int2003, Landman-Greenwell 1990: unrelated.
No source found giving G(3,9)=49 or flagging the entry. Caveat: could not read the JCTA version, the book, or OEIS search; absence is not proof.

## 3. HONEST: YES
Claim states exactly the definition quoted from the paper, asserts both halves (witness of size 48, impossibility of 49), concerns a single k=3 entry marked wrong in the table, matching the frozen definition (a)+(b). Not narrowed. Only residual: "not already published" is verified only to the extent of accessible sources.

## Verdict: SIGN-OFF (impossibility is a single-implementation exhaustive search; novelty check limited to accessible sources)
