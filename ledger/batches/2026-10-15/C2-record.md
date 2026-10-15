# C2 record — Gates 0–3

**ID:** UQ-C2-PLACEHOLDER

**Domain(s):** Ramsey theory / van der Waerden numbers; SAT and #SAT (symmetry, model counting); combinatorics on words (palindromes).

## Gate 0 — Intake

**Question (canonical, original intake):** At the extremal length n = w(2;3,t)−1, what fraction of all good 2-colourings (colour 0 3-AP-free, colour 1 t-AP-free) are palindromic, and how does that fraction behave as t grows?

**Presupposition check found a problem.** The data already published imply most of the answer. The second ("unsatisfiable") component q of pdw(2;3,t) (OEIS A198685, from Ahmed–Kullmann–Snevily) is below w(2;3,t) for t = 4,5,6,7,8,10,11,13,14,15,16,19. For those t, no palindromic good partition of length w−1 exists, so the fraction is exactly 0. It can be nonzero only when the palindromic gap pdg = w − q is 0, which happens for t = 3, 9, 12, 17, 18 (AKS Table 6) and t = 20 (q = 389 = w). For t = 17 the fraction is exactly 1: AKS report "precisely one solution" at n = 278, and since reversal maps solutions to solutions, a unique solution must be a palindrome. So Alt 1 ("increasingly forced to be symmetric") is already refuted by zeros at large t (t = 15, 16, 19). The asymptotic part reduces to AKS's own open problem 2 (whether pdg = 0 infinitely often).

**Reformulated question (Gate 1, the one reformulation allowed):** For t with palindromic gap pdg(2;3,t) = 0, i.e. t ∈ {3, 9, 12, 17, 18, 20}, how many good partitions exist at n = w(2;3,t)−1, what fraction of them are palindromic, and is a zero gap always accompanied by a small, palindrome-dominated threshold solution set (as at t = 17)? Equivalently: does the threshold solution set's size or symmetry structure distinguish gap-0 values of t from gap>0 values?

**Alternative formulations:**
- A1: Is pdg(2;3,t) = 0 a signature of a nearly unique, reversal-invariant extremal colouring?
- A2: Among the t where a palindromic solution survives to the threshold, how many non-palindromic solutions coexist with it?
- (Original Alt 1/Alt 2 recorded; Alt 1 is refuted as stated above.)

**Motivating gap:** AKS (arXiv:1102.5433) compute pdw(2;3,t) and use palindromes to conjecture bounds. They give one threshold solution count (t = 17: one solution) and send readers to Kouril's work ([42]) for other counts. In what was read, nobody tabulates palindromic versus total threshold counts for w(2;3,t). The sibling Schur problem has exactly this tabulation (Heule 2017). Local search in this repo found palindromic seeds far better than unrestricted search.

**Presuppositions:**
1. w(2;3,t) exact for t ≤ 19 (established); t = 20 = 389 was conjectured by AKS and verified by Kouril according to Wikipedia (established, secondary source).
2. pdw values exact for t ≤ 27 (AKS, established) and conjectured exact for t ≤ 35.
3. Reversal maps good partitions to good partitions (trivially true).
4. Full enumeration at the threshold is feasible for t ≤ 20 (plausible; AKS footnote says enumeration costs no more than the UNSAT proof for t = 17; the UNSAT proofs for t = 18–20 are heavy but done). FLAGGED: enumeration cost for t = 18 and 20 is unverified.
5. The interpretation "pdg = 0 ⇔ a palindromic solution exists at w−1" (q = w means palindromic satisfiable at q−1 = w−1): follows from the definitions in A198685.

## Gate 1 — What would count as an answer

- The exact count N(t) of good partitions at w−1 and the palindromic count P(t), for t ∈ {3, 9, 12, 18, 20} (t = 17 is known: N = P = 1). Obtainable by an exact #SAT run or all-solutions enumeration on the standard vdW CNF, plus the palindromic CNF. Cross-check: P(t) from the palindromic instance alone; N − P must be even (non-palindromic solutions come in reversal pairs).
- For the structural part: a table of N(t) for all t ≤ 20, including gap>0 values, to test whether pdg = 0 ⇔ "N small / P/N large". This holds or fails on that finite range. A proof for all t is not expected, so the answer is empirical. That is acceptable and well-posed.
- It is a question, not a thesis. It passes Gate 1 after reformulation.

## Gate 2 — Novelty

**Ledger check:** no duplicate among C1–C5 in this batch. Ledger file not consulted by this agent (instructions limited it to intake and gate files).

**Queries run (16):**
1. `palindromic van der Waerden numbers number of solutions`: AKS 1102.5433, OEIS A198685; no counts.
2. `van der Waerden numbers w(2;3,t) number of extremal colorings certificates counted`: AKS; Ahmed 2013 JIS; no off-diagonal counts.
3. `Kouril van der Waerden number solutions count W(3,t) extremal partitions enumerated`: Kouril–Paul W(2,6) PDF; Wikipedia.
4. `Kullmann OKlibrary van der Waerden "number of solutions" tawSolver green-tao`: AKS; Green-Tao numbers paper (1004.0653); nothing on palindromic counts.
5. `symmetric extremal colorings van der Waerden palindrome lower bound structure of extremal colourings`: Banakh symmetric colourings (other sense); nothing relevant.
6. `"palindromic" van der Waerden "number of solutions" OR "solution counts" SAT`: Dransfield–Marek–Truszczyński; AKS.
7. `OEIS number of 2-colorings of 1..n with no 3-term AP in color 0 and no t-term in color 1`: rainbow-AP papers; no counting sequence.
8. `#SAT model counting van der Waerden instances number of models threshold`: generic #SAT benchmarks; nothing vdW-specific.
9. `w(2;3,t) van der Waerden new values 2020 2023 2024 SAT certificate t=20 t=21`: no newer w(2;3,t) paper surfaced beyond AKS.
10. `Ramsey extremal graphs fraction circulant cyclic symmetric all critical graphs enumeration R(4,5) 656` (Ramsey-graph jargon): McKay Ramsey-graph data; analogous symmetric-extremal theme, not vdW.
11. `binary words avoiding arithmetic progressions palindromes longest word combinatorics on words` (words jargon): repetition avoidance in APs; unrelated.
12. `"good partitions" van der Waerden "palindromic" Ahmed Kullmann Snevily 2014 Discrete Applied Mathematics`: OEIS A198684/5; AKS.
13. `Herwig Heule van Lambalgen van Maaren cyclic zipping lower bounds van der Waerden numbers`: EJC 2007 cyclic zipper; symmetric certificates as a construction tool; no counts.
14. `are extremal solutions symmetric Ramsey-type problems reflection symmetry breaking fraction of symmetric models SAT` (symmetry-breaking jargon): generic symmetry-breaking papers.
15. `van der Waerden extremal certificate "palindrome" observed all solutions reversal symmetric W(3,t) Kouril thesis`: **Heule, Schur Number Five (1711.08076)**; Heule–Walsh "Symmetry within Solutions" (1004.2624).
16. `longest sequence of two colours with no three evenly spaced red ... how many mirror-symmetric` (lay wording): nothing relevant.

**Pages opened:** arXiv abs and PDF of 1102.5433, ar5iv HTML; OEIS A198684, A198685; Kouril–Paul W(2,6) PDF; Ahmed JIS 2013; Dransfield et al. cs/0310064; Herwig et al. EJC 2007; Heule–Walsh 1004.2624; Heule 1711.08076; Wikipedia vdW numbers. Caveat: the fetch tool could not show AKS §6–7 or the bibliography, so reference [42] (Kouril, cited for "solution-counts") was not identified or opened. It may hold threshold counts for some w(2;3,t).

**Nearest prior formulations (opened):**
1. Ahmed, Kullmann, Snevily, "On the van der Waerden numbers w(2;3,t)", arXiv:1102.5433 (2011; Discrete Appl. Math. 174, 2014), https://arxiv.org/abs/1102.5433. Defines pdw(2;3,t) and the palindromic gap; asks whether gap 0 recurs infinitely often (§5.4 open problem 2) and whether palindromic problems are "more structured" (open problems 4–5). Gives one threshold count (t = 17: one solution) and points to [42] for other counts.
2. M. Heule, "Schur Number Five", arXiv:1711.08076 (2017/AAAI 2018), https://arxiv.org/abs/1711.08076. Reports all 2,447,113,088 extreme certificates for S(5)=161 at n=160, of which 315,853,824 are modular and 334,752 of the modular ones are palindromes (and notes an earlier source gave 309,408 palindromic). This is the same question (palindromic share of the extremal solution set) for the Schur problem.
3. Kouril & Paul, "The van der Waerden Number W(2,6) Is 1132", Experimental Math. 17(1), 2008, https://www.cs.umd.edu/users/gasarch/TOPICS/vdw/1132.pdf. All 3552 extreme partitions at n=1131, built from a 56-bit block with reversal and negation structure. A symmetry-structured threshold enumeration, for a diagonal vdW number.
(Also near: Heule & Walsh, "Symmetry within Solutions", arXiv:1004.2624. Internal symmetry of vdW certificates, with no counts for vdW.)

**How the candidate differs from each:**
1. vs AKS: AKS settle existence (gap) and pose asymptotics of the gap. They do not report N(t) or P(t) at the threshold except t = 17. The reformulated candidate asks for counts and fraction, and whether the solution set's structure explains gap = 0. It is a refinement of their open problems 2 and 4, not a restatement. AKS ref [42] might contain total counts, which would shrink the gap to "the palindromic fraction only".
2. vs Heule 2017: same quantity (palindromic share of the extremal certificates), but for Schur S(5), not off-diagonal vdW w(2;3,t), and no dependence on a parameter t or relation to a palindromic gap.
3. vs Kouril–Paul: diagonal W(2,6) with reversal-negation structure; no off-diagonal family, no palindromic fraction, no link to pdw.

**Novelty confidence: Medium (reformulated); Low (original as stated).** The original's "behaviour as t grows" is mostly settled by published pdw/w data (fraction 0 for 12 of 18 t ≤ 20; 1 at t = 17) and its asymptotic core is AKS's open problem. The reformulated question has no exact prior found. Heule 2017 is a close neighbour that asks the same thing for Schur numbers, and the unopened AKS [42] might already list totals.

**Asked-but-open?** The asymptotic part ("as t grows") effectively is: AKS §5.4 open problem 2 ("Does the palindromic gap attain 0 infinitely often?") and problem 1 (span behaviour) are open per arXiv:1102.5433 v4. That part should be routed to `ledger/routed-open-problems.md`. The finite counting part (gap-0 t, threshold N and P) is not posed there.

## Gate 3 — Significance

- **Consequence:** If gap-0 values of t coincide with tiny, palindrome-dominated threshold sets (like t = 17), palindromic search is a reliable exact-value predictor exactly at those t. The size of N(t) would also flag which conjectured values (t = 21–39, from palindromic bounds) are likely exact, which affects how much trust AKS's conjectured table deserves. If not (large N with small P/N at gap-0 t), palindromic agreement with w is coincidental, and palindromic bounds are a weaker heuristic than AKS's conjectures assume. Either way the result is modest. It changes heuristics and confidence, not a theorem.
- **Audience:** SAT/Ramsey computation groups (Kullmann, Heule, Kouril, Ahmed) choosing whether to spend cluster time on palindromic versus full instances, and #SAT benchmark builders (structured instances with known counts).
- **Fecundity:** Opens (a) a sequence N(t) for the OEIS; (b) whether gap-0 is predicted by a structural invariant of the solution set (backbone size, as Heule links palindromic symmetry to low backbone in Schur); (c) the same tabulation for other off-diagonal families w(2;4,t) and for Green–Tao numbers.
- **Anchoring:** AKS open problems 1, 2, 4, 5 (palindromic span/gap, "structuredness" of palindromic instances); Heule's backbone and palindrome observation for Schur 5; this repo's observation that palindromic seeds outperform unrestricted local search.
- **Verdict:** Passes narrowly. Significance is real but confined to a small computational-Ramsey community.

## Reason for silence (candidate mechanism)

Results tables in SAT-Ramsey work report decision outcomes (SAT/UNSAT, bounds). Full model counts at the threshold cost extra and only feed a conjecture, so they are run only when a uniqueness or structure claim is made (Kouril W(2,6), Heule Schur 5) and are otherwise relegated to footnotes or cited tool outputs (AKS footnote and [42]). Asking about the palindromic fraction also needs both tables, pdw and threshold counts, side by side, and nobody has published them together.
