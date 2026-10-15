# Skeptic-1 report: claim 2026-10-15-1 (w(2;3,33) > 1068)

## 1. REPRODUCED: YES
I wrote two checkers from scratch: check.py (1-indexed, longest AP per colour, plus reversal and extension tests) and check2.py (a naive 0-indexed exhaustive count). A third one, check_any.py, is a generic checker.

check.py output:
```
len 1068 chars {'1','0'} matches claim.md block: True
count0 93 count1 975
colour 0 longest AP (len,(a,d)) (2, (72, 1))
colour 1 longest AP (len,(a,d)) (32, (595, 1))
reversed: [2, 32]
append 0 [3, 32]     append 1 [2, 33]   (the colouring is maximal and cannot be extended to 1069)
```
check2.py output: 0 3-APs in colour 0, 0 33-APs in colour 1, and 14 32-APs in colour 1.

- The file is 1069 bytes, which is 1068 characters of 0/1 plus a trailing newline.
- The AP property does not change under a shift of index (1- or 0-based) or under reversal, so no off-by-one interpretation breaks it.
- With the colours swapped, the colouring fails (colour 1 has 32-APs, so it is not 3-AP-free). The packet's convention (0 = 3-AP-free colour) is the one that holds.

## 2. NOVEL: NO
Queries I ran and what each found:
1. WebSearch "van der Waerden number w(2;3,33) lower bound": found arXiv 1102.5433, Wikipedia, arXiv 2608.20824 (Campos–Fox–Schildkraut, about diagonal w(k), not relevant), and others.
2. WebSearch '"w(2;3,t)" new lower bounds ... 2024-2026': found github abigailhaddad/vdw-records. It covers 3-colour W(3,19..25), not t=33.
3. WebFetch arxiv.org/abs/1102.5433: v4, 2014. Gives lower bounds for 20<=t<=39.
4. WebFetch arxiv.org/pdf/1102.5433v4: Table 3 gives w(2;3,33) > 1063. This confirms the packet's citation.
5. WebFetch arxiv.org/html/2608.20824v1: asymptotic w(k) only. Nothing on t=33.
6. WebFetch the github vdw-records repo: no t>25 claim.
7. WebFetch the Wikipedia article "Van der Waerden number": its table stops at t=20. Cites AKS 2014 and Monroe 2019.
8. WebSearch "OEIS A171081 ...": found the A171081 page.
9. WebSearch '"w(2;3,33)" OR "W(3,33)"': nothing beyond AKS.
10. **WebFetch oeis.org/A171081**: the entry has a comment by Juan Lopez Marcano (Aug 21, 2026): "a(31) >= 954, a(33) >= 1072". It says the previous bests were 931 and 1064 (AKS 2014). It links signature files a171081_1.txt and a171081_2.txt and a Zenodo preprint.
11. WebFetch arxiv 1603.03301v4 (Monroe): the excerpt says nothing on mixed w(2;3,t).
12. WebSearch on Kullmann/Ahmed/Heule SAT local search: only AKS and older work.
13. **WebFetch oeis.org/A171081/a171081_2.txt**: returned a 0/1 string. Direct curl was blocked (proxy 403), so I saved the WebFetch text as dl_oeis/a171081_2_via_webfetch.txt and ran my checker on it:
    ```
    len 1071; 3APs colour0: 0; longest colour1 AP: 32
    ```
    That file is therefore a valid certificate that **w(2;3,33) > 1071**, which is stronger than the claimed > 1068. It is not a superstring of the claim's colouring (152 positions differ in the first 1068).
14. WebFetch zenodo.org/records/21943191: Lopez Marcano, "Improved lower bounds for the van der Waerden numbers w(2;3,t)". Preprint v1, published Aug 15, 2026.
15. WebSearch for Lopez Marcano's title: no further hits beyond AKS-related pages.
16. WebSearch on MathOverflow/MSE for w(2;3,t) lower bounds: no MO/MSE thread with newer bounds. Hits were AKS, Ahmed's JIS paper and arXiv 1701.05603.

So 1063 is no longer the best known lower bound. Since August 2026 the best publicly recorded bound is w(2;3,33) >= 1072 (i.e. > 1071), from OEIS A171081 and Zenodo 21943191. I checked its certificate independently. The claim, 1068, is weaker than this already-public result, so it is not novel. It only improves on the 2014 bound that the packet cites.

Caveat: the 1071-string came through WebFetch, which uses a summarising model, so in principle it could have been altered. Even so, a 1071-character string that passes the check is in itself a valid certificate, whatever its source. The OEIS comment states the same bound independently.

## 3. HONEST: YES (with respect to the frozen definition)
- AKS 2014 uses "w(2;3,t) > n" to mean that a good partition of [n] exists. Table 3's "w(2;3,33) > 1063" is exactly what the packet says.
- A good colouring of {1..1068} does prove w(2;3,33) > 1068, by the definition of w as the least N forcing an AP.
- The frozen definition (n >= 1064, explicit colouring, colour 0 3-AP-free, colour 1 33-AP-free) is met literally. Nothing has been narrowed or redefined.
- However, the packet's "Published best lower bound" premise is out of date: it omits the 2026 OEIS/Zenodo bound of 1072. The claim "improving the published bound" is true only against the 2014 paper, not against the current state of the art. That is a novelty failure, not a dishonesty in the packet's definition.

## Verdict
REPRODUCED=YES NOVEL=NO HONEST=YES SIGN-OFF=NO
