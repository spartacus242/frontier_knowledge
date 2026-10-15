# Skeptic-2 report

## 1. REPRODUCED? YES
Own C checker (chk.c): for every start a and every d>=1, counts maximal runs; also direct count of 3-APs in colour 0 and 33-APs in colour 1.
Output (out.txt):
len=1068; zeros=93 ones=975 other=0
longest AP colour0=2, colour1=32
3AP in 0: 0 ; 33AP in 1: 0
File has 1069 bytes = 1068 chars + newline. Indexing (0- or 1-based) is irrelevant: AP-freeness is translation invariant, so no off-by-one reading can change the result. Longest colour-1 AP is 32 < 33, so the colouring is valid for w(2;3,33) > 1068 (a valid colouring of [n] shows w > n).

## 2. NOVEL? NO
Queries (WebSearch/WebFetch):
- "van der Waerden number w(2;3,t) lower bounds table Ahmed Kullmann Snevily": Wikipedia, 2102.01543, JIS Ahmed, arXiv 1102.5433.
- arxiv.org/pdf/1102.5433 fetch: Table 3 gives w(2;3,33) > 1063 (31:>930, 32:>1006, 34:>1143). Confirms the packet's published figure.
- Wikipedia "Van der Waerden number": lists w(2;3,t) only up to t=20; nothing for t=33.
- arxiv 2102.01543: only asymptotics, cites w(3,30)>=903; nothing for 33.
- Ahmed "Some More Van der Waerden Numbers" (JIS): no t>=31 bounds.
- Web search "w(2;3,33)" van der Waerden; MathOverflow/MSE query; extended search for newer papers: nothing new/ no MO/MSE hits beyond the same papers.
- OEIS A171081 (fetched twice): comment by Juan Lopez Marcano, Aug 21 2026: "a(31) >= 954, a(33) >= 1072; previous best lower bounds a(31) >= 931, a(33) >= 1064 (Ahmed, Kullmann, Snevily 2014)". OEIS a(n) is w itself, so a(33)>=1072 means w(2;3,33) > 1071, which already exceeds the claimed >1068. (Not independently verified: I did not see Marcano's colouring, only the OEIS comment.)
=> The claim improves the 2014 paper but is NOT a new record: a stronger bound (1072) was recorded in OEIS two months before the claim date. Also the packet's "published best" is stale.

## 3. HONEST? UNSURE (leaning NO as to "improvement over best known")
- Definition match: ">1063" in the paper = OEIS "a(33)>=1064"; consistent with packet. A good colouring of [1068] does give w > 1068 (w >= 1069). Frozen definition (n>=1064, explicit colouring) is literally met by the artifact.
- However the packet frames it as improving "the published best lower bound"; the best known (OEIS, Aug 2026) is already 1072, so the claim is not state-of-the-art. The frozen definition itself did not demand beating the current best, but it was benchmarked against a stale baseline.

SIGN-OFF=NO because novelty fails.
