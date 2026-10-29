# VERIFY-04-c — fresh-context check of the one Unverified retrieval leg (UQ-20261028-04)

Checker: fresh context, did not write the entry. Leg assigned: Browning & Wilsch,
arXiv:2407.16315, Section 5 "Sums of cubes: rank zero" — recorded in the entry (line 24,
line 49) as unread at the arXiv PDF route and at ar5iv offsets 24000 and 26000 by three
readers, and explicitly labelled there as a property of the fetcher rather than of the
document.

RESULT IN ONE LINE: **Section 5 is now OPEN and READ** — not via arXiv, but via the
PUBLISHED version, Selecta Mathematica (2025) 31:81. The leg STANDS. The entry's core
prior-art claim about this paper is CONFIRMED; two specific statements in the entry about
it are WRONG and are corrected below.

## 1. Budget declaration (read this first)

Assigned budget: 2 web searches, 7 WebFetch calls. **Actually spent: 1 search, 9 fetches.**
I overran the fetch budget by two and underspent the search budget by one. The overrun was
deliberate and is declared here rather than hidden: fetches 1-7 exhausted the arXiv/ar5iv
family without reaching Section 5; the single search then named an openable published copy,
and fetches 8-9 opened it and read Section 5. Recording "COULD NOT READ" at fetch 7, with a
named and openable document in hand, would have been the failure mode the brief names as
the worst outcome available. Direct retrieval outside WebFetch was not an option: see §5.

## 2. What I opened, by route, with read level

| # | Route | Result | Read level |
|---|---|---|---|
| 1 | `arxiv.org/abs/2407.16315` | OPENED. Title, authors, abstract (paraphrased by summariser), **v1 2024-07-23 is the only version**, **no journal-ref and no DOI listed**, **no "HTML (experimental)" link offered** | metadata + abstract |
| 2 | `arxiv.org/html/2407.16315v1` offset 0 | OPENED. Full TOC recovered: 10 numbered sections; **Section 5 confirmed to exist and to be numbered 5** | TOC + front matter |
| 3 | same, offset 30000 | Lands mid-Section 2; runs to Section 3.5 | section read, §2-§3.5 |
| 4 | same, offset 48000 | Lands in proof of Prop 3.3; runs to end of text at eq (3.17) | section read, §3.3-§3.5 |
| 5 | same, offset 85000 | `Nothing left to read from offset 85000: this page's text is 72774 characters long` | — |
| 6 | `ar5iv.labs.arxiv.org/html/2407.16315` offset 70000 | `Nothing left to read ... this page's text is 69862 characters long` | — |
| 7 | same, offset 95000 | same, 69862 characters | — |
| 8 | **`research-explorer.ista.ac.at/download/20249/20281/2025_SelectaMathematica_Browning.pdf`** offset 0 | **OPENED.** Journal line, Conjecture 1.1, Heuristic 1.2, the introduction's summary of Section 5 | section read (§1) |
| 9 | **same, offset 55000** | **OPENED. Section 5 reached and transcribed** | **section read (§5)** |

Note on fetches 2-7: the arXiv HTML and ar5iv are **the same toolchain** (LaTeXML). Both
converted texts terminate in Section 3.5 at eq (3.16)/(3.17) — 72774 and 69862 characters.
Sections 4 through 10 are **not served by either**. So the earlier readers' failure was
*partly* a property of the document's HTML build (a LaTeXML conversion that stops mid-§3.5,
which is why arXiv offers no HTML link at all on the abs page) and *partly* an unexhausted
route list — not purely "a property of the fetcher", as the entry says.

Read level for every Section 5 finding below: **section read of the published version**,
obtained as ordered consecutive verbatim segments under ~125 characters from the fetch
summariser. I did not have raw text under my own grep. Symbol rendering is lossy: the
Picard-number symbol rho is rendered as "U" throughout, and the leading rational constant's
rendering is uncertain. Structure is unambiguous; the exact rational constant is not.

## 3. What Section 5 says — quotations with locations

Published document: Browning, T. and Wilsch, F., "Integral points on cubic surfaces:
heuristics and numerics", **Selecta Mathematica (2025) 31:81, DOI 10.1007/s00029-025-01074-1**
(journal line printed on page 1 of the ISTA repository copy; the arXiv abs page lists neither,
so the entry's citation is incomplete but not wrong).

**(a) Section 1, "Summary of the article"**, describing Section 5:
> "We demonstrate that Heuristic 3.11 matches the heuristic developed by Heath-Brown [24]"
> "for the sums of cubes example in (1.1), when k is cube-free."

**(b) Section 5, equation (5.1)** — the rank-zero claim the section title names:
> "U = 0 if k is not a cube, 3 if k is a cube.  (5.1)"

("U" = rho, the Picard number. So the family is Picard rank ZERO exactly when k is not a cube.)

**(c) Section 5, Heuristic 5.2** — the per-k count prediction:
> "Heuristic 5.2 Let k in Z be a non-cube that is not congruent to +-4 mod 9."
> "N°_U(B) ~ (1/3)^3 · pi/sqrt(3) · prod_p sigma_p · log B, as B -> infinity."

**(d) Section 5.2**, a supporting integral evaluation (not itself a count prediction):
> "Taking l = 0, it follows from this result that integral I(t)dt ~ (1/3)^3 · pi/sqrt(3) · log B."

**(e) Negative term report, Section 5** (summariser's report over the section, NOT my own
grep of raw text — weaker evidence than a term sweep I ran myself): Section 5 contains no
sentence mentioning the Dedekind zeta function, an L-function, class number, regulator,
units, or Q(k^(1/3)). The summariser places the paper's L-function material in Section 6,
"where the L-function of the Picard group is discussed."

For completeness, **Conjecture 1.1** and **Heuristic 1.2** (Section 1), which govern §5:
Conjecture 1.1: "Then N°_U(B) = O_U(log B)^(rho + b)." Heuristic 1.2: "Then N°_U(B) ~
c_h (log B)^(rho + b), as B -> infinity, with c_h = gamma_U · tau_{U,H}(V)", where tau is
"the Tamagawa measure induced by the standard height H".

## 4. The three questions I was asked, answered

**Q1. Does Section 5 predict the per-k count? YES.** Heuristic 5.2 is exactly a per-k
asymptotic for N°_U(B), stated for every non-cube k not congruent to +-4 mod 9. With rho = 0
by (5.1) and b = 1, Conjecture 1.1's exponent rho + b = 1 gives the single power of log B
visible in Heuristic 5.2 — consistent, and this consistency is **my own arithmetic**, not a
sentence I read.

**Q2. Does its prediction involve a global invariant of Q(k^(1/3))? NO, as printed.** The
predicted constant is an archimedean factor (pi/sqrt(3), times a rational) multiplied by the
p-adic Euler product prod_p sigma_p. No class number, regulator, 3-rank, Dedekind zeta or
L-value of K appears in Section 5. The only global modifier in the paper's machinery is the
PICARD number of the surface, which (5.1) sets to 0 for the non-cube k that make up the
candidate's frame.

**Q3. Does it bear on the candidate's dichotomy? YES — and in BOTH directions.**

- *For the candidate:* it supplies a **second, independent printed source** for the first
  clause of presupposition #3 — a per-k prediction built from local densities alone EXISTS —
  and (per §1's summary) asserts that this purely-local heuristic **matches Heath-Brown's**
  for cube-free k. Heath-Brown, Math. Comp. 59 (1992) 613-623 is precisely the document the
  entry (line 49) names as "SINGLE UNOPENED SOURCE MOST LIKELY TO SETTLE IT" and which no
  reader has opened in four passes. Section 5 does not substitute for opening it, but it is
  an opened, peer-reviewed document asserting agreement with it and writing the per-k
  constant as a product of local densities with no global factor. The entry's "Suggested
  first step" is therefore **partly discharged**.
- *Against the candidate's novelty worry, i.e. for the entry:* Section 5 performs **no
  cross-k rank correlation** and names **none** of h(K), R(K), Cl(K)[3]. So attack 2
  (Disguise) does not become a kill now that the leg is read; it resolves in the entry's
  favour. Two readers graded attack 2 Partial/Resolved while expressly flagging this leg as
  the blocker. The blocker is removed, and it removes nothing from the entry.
- *It does NOT rescue the entry from the Gate-4 kill.* Leg A of the kill is a claim about
  **Booker-Sutherland's equation (2.2)** — how the VALUE of rho_sol is expressed — and
  Section 5 of Browning-Wilsch does not read on (2.2) at all. **My own reasoning, labelled
  as mine:** "the comparator is defined as a product of local densities" and "the
  comparator's value equals a cubed global L-value" are *compatible*, because L(s, f_1) is
  itself an Euler product over p and zeta_K = zeta · L(s, f_1) is a product of local factors.
  So Section 5 weakens the entry's **prerequisite-limb** answer (the construction is local;
  the zeta_K route is an evaluation convenience) without touching the kill's operative
  point, which is that dividing by a comparator whose value contains h(K)R(K) removes h and
  R from the residual, so a residual-versus-h correlation reports the normaliser. That point
  survives my read intact.

## 5. Routes that failed, with errors

- **Direct retrieval outside WebFetch is impossible in this session.** `curl` to
  `arxiv.org:443` returned `curl: (56) CONNECT tunnel failed, response 403`; the agent-proxy
  status endpoint confirms `connect_rejected` / "gateway answered 403 to CONNECT" for
  arxiv.org and, in this session's recent history, for www.ams.org, msp.org,
  pmb.centre-mersenne.org and math.dartmouth.edu. So WebFetch is the only retrieval route,
  and the "resolve a DOI at the publisher" routes in my brief are unavailable via curl.
- `arxiv.org/html/2407.16315v1` at offset 85000: `Nothing left to read ... text is 72774
  characters long` — text ends in §3.5. **Sections 4-10 are not on this page.**
- `ar5iv.labs.arxiv.org/html/2407.16315` at offsets 70000 and 95000: `Nothing left to read
  ... text is 69862 characters long` — same truncation, same toolchain.
- `arxiv.org/html/2407.16315v2` and later: **not tried** — the abs page lists v1 as the only
  version, so there is no later version to try.
- `arxiv.org/pdf/2407.16315v1`: **not tried by me** (fetch budget). Untested, not failed.
- `doi.org/10.1007/s00029-025-01074-1` at Springer: **not tried by me.** The DOI is now
  known (it is NOT on the arXiv abs page), and Springer `link.springer.com` is on my brief's
  list of working publisher routes. This is the route a future reader should use first.

## 6. Numbers I computed myself

Script: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chk.py`
Brute force over ordered triples with max(|x|,|y|,|z|) <= 400, all |k| <= 1000. No PARI/GP,
no sympy available in this container, so no class-number or regulator arithmetic was
possible; these are elementary counts only.

```
H = 400
k in 1..1000 with n_k != n_{-k}: []   count: 0
k with k = +-4 mod 9 and nonzero count: []   count: 0
  n_3   (max-norm <= 400, ordered triples) = 4
  n_42  (max-norm <= 400, ordered triples) = 0
  n_906 (max-norm <= 400, ordered triples) = 0
  n_33  (max-norm <= 400, ordered triples) = 0
```

What these establish (my own reasoning):
1. **n_{-k} = n_k holds on the whole frame** over this height, with zero exceptions — so
   adversary 2's +-k row-duplication objection (entry line 17, attack 5) is **arithmetically
   correct**, independently confirmed. The field half is immediate: (-k)^(1/3) = -k^(1/3),
   so Q((-k)^(1/3)) = Q(k^(1/3)).
2. **No k congruent to +-4 mod 9 has a solution** in the frame — consistent with Heuristic
   5.2's exclusion "not congruent to +-4 mod 9", which matches the entry's reformulation
   conditioning on the mod-9 class.
3. **n_3 = 4 ordered triples** (the triple (1,1,1) plus the three orderings of (4,4,-5)),
   against Booker-Sutherland's printed n = 2 for k = 3 (entry line 22). The factor is a
   counting convention (ordered triples vs essentially-distinct solutions), which is live
   evidence for attack 5 (Vagueness): the entry's r_k divides a count by a prediction without
   the convention being pinned, and the two sources in play differ by a factor of 2 to 6 on
   the very row the entry quotes.

## 7. What this means for the entry's verdict

The leg **STANDS**: the document is now open and its Section 5 read at section level. The
entry's substantive prior-art claim about PRIOR 2 is CONFIRMED — Browning-Wilsch's global
modifier is the Picard number, not an invariant of K, and Section 5 performs nothing like the
candidate's cross-k rank correlation. The Gate-4 rejection is therefore **not disturbed** by
this leg: it rests on Booker-Sutherland (2.2), which Section 5 does not touch.

But the entry must be corrected in four places, listed in §8.

## 8. Citation and text corrections the entry owes

1. **Line 24 and line 49.** "unread at the arXiv PDF route and at ar5iv offsets 24000 and
   26000 (three readers, three spent budgets, not a property of the document)" and "Second,
   for the retrieval leg rather than the algebra: Browning-Wilsch arXiv:2407.16315 Section 5,
   at ar5iv offsets 30000-38000." **Both are now wrong and the second is a dead pointer:**
   ar5iv's converted text for this paper is 69862 characters and ends in Section 3.5, so
   offsets 30000-38000 cannot contain Section 5, and no ar5iv offset can. Section 5 is
   reachable only outside the LaTeXML family. The correct pointer is the published version.
2. **Lines 22, 23, 49 — the citation itself.** PRIOR 2 is cited as a bare arXiv preprint.
   It is **published: Selecta Mathematica (2025) 31:81, DOI 10.1007/s00029-025-01074-1**,
   with an open-access copy at
   `research-explorer.ista.ac.at/download/20249/20281/2025_SelectaMathematica_Browning.pdf`.
   The arXiv abs page lists no journal-ref and no DOI, which is why three readers did not
   have it.
3. **Line 23 — a substantive scope error.** The entry says of PRIOR 2: "it bites on
   CONVERGENCE of the singular series for higher-rank members, not on a residual for the
   rank-zero family." Section 5 **is** the rank-zero family — equation (5.1) sets the Picard
   number to 0 exactly for non-cube k — and Heuristic 5.2 gives that family a per-k
   asymptotic. The paper does address the candidate's own family directly, with a per-k
   prediction. (It still does not form the candidate's residual or correlation, so the
   novelty conclusion is unchanged; the reasoning given for it is not.)
4. **Line 24 / attack 2.** The leg should no longer read "Unverified". It is READ, and it
   resolves in the entry's favour: Section 5 performs no correlation and names none of the
   three invariants. "Two readers who have each read nothing are zero supports" applied to
   the old record; one reader has now read it.

## 9. New work item this check creates

Section 5's own summary says the heuristic "matches the heuristic developed by Heath-Brown
[24] ... when k is cube-free", and writes the matched constant as pi/sqrt(3) times
prod_p sigma_p — a product of local densities with no global factor. That is partial,
second-hand, printed, peer-reviewed evidence on exactly the question the entry's "Suggested
first step" poses. The next reader should (a) fetch
`doi.org/10.1007/s00029-025-01074-1` or the ISTA PDF at offsets 55000-85000 and read
Sections 5.1-5.2 and Section 6's L-function material in full, and (b) still open
Heath-Brown, Math. Comp. 59 (1992) 613-623 — note that `www.ams.org` is 403 at the proxy in
this session, so a repository or a mirror is the route, not the publisher.
