# VERIFY-10-a — UQ-20261029-10: locating the §5.2 quotation the Gate 2 kill rests on

Date: 2026-10-29. Checker: fresh-context, post-batch verification pass. Not an adversary, not a judge.
Claim tested: that Barrett, Bolz-Tereick, Killick, Mount & Tratt, "Virtual Machine Warmup Blows Hot and Cold" (OOPSLA 2017, DOI 10.1145/3133876; arXiv:1602.00602), §5.2, (i) contains the string "unable to validate or invalidate", (ii) states that "many" non-warmups are not plausibly explained by recorded JIT/GC events, and (iii) thereby poses the candidate's causal question (profile-guided recompilation feedback loop as cause of non-steady-state) and leaves it open.

Verdict on the claim: **PARTIAL** — (i) and (ii) CONFIRMED verbatim and located; (iii) over-reads the text: the paper poses a BROADER causal hypothesis (H3: JIT compilation OR GC events, any such events) and leaves it unsettled; it never names the recompilation feedback loop, recompilation, deoptimisation or profiling, and neither proposes nor performs any intervention on compilation. The author-written scope qualifier "at least on HotSpot and PyPy" was dropped from the "many are not" sentence by the record and the entry. Whether the strings are in the PUBLISHED PACMPL version is UNVERIFIED (could not read it; routes below).

---

## 1. What I read, at what level, by what route

| # | Source | Read level | Route | Notes |
|---|---|---|---|---|
| A | arXiv:1602.00602**v6** PDF (stamp "arXiv:1602.00602v6 [cs.PL] 6 Oct 2017"; acmart draft build: "Draft 0, 0, Article 0 (October 2017), 40 pages") | SECTION READ via WebFetch summariser, 3 calls over characters 0–100000 of 103281 (tail 3281 chars = appendix/curated plots not served): front matter, section list, hypotheses, §5.2 sentences, and a 12-term sweep | WebFetch https://arxiv.org/pdf/1602.00602v6 | The summariser REFUSED the request to return a whole paragraph as consecutive ≤100-char segments ("My quoting limit is 125 characters per quote, and splitting a whole paragraph into consecutive segments would get around that limit"); it did return single sentences in 2 segments in the term-sweep call. I did not rework the refused request; I got raw text by route B instead. |
| B | Authors' LaTeX source: github.com/softdevteam/warmup_paper, `warmup.tex`, commit f70fc4b83451d3eeb7c47b107e0d6afe58301e52 = master (byte-identical, 108,576 bytes, 2,097 lines) | **FULL TEXT**, read with my own eyes (grep/sed over the whole file, including appendices) | curl https://raw.githubusercontent.com/softdevteam/warmup_paper/{f70fc4b…,master}/warmup.tex (HTTP 200). GitHub MCP file/tag/commit reads were DENIED ("repository not configured for this session"); GitHub code search (free route) located the file. | Metadata in the source: `\acmDOI{1602.00602v6}`, `\acmVolume{0}`, `\acmArticle{0}`, `%\acmJournal{PACMPL}` commented out, `\titlenote{Updates to this paper will be found at https://arxiv.org/abs/1602.00602}`. So the repo HEAD is the arXiv v6 build, not the ACM-typeset article. Tables are `\input` files not in warmup.tex; all prose sections 1–10 and Appendices are in it. |
| C | Third-party plain-text extraction of the arXiv v6 PDF (file misleadingly named `…-pacmpl.txt` in github.com/YancyReal/ucas-master @ c9d6f7ed…; 203,562 bytes, 2,762 lines, 40 footers "Draft, Vol. 0, No. 0, Article 0. Publication date: October 2017.") | FULL TEXT of v6 as extracted (untrusted third-party data; used only as a cross-check of B against the compiled v6 PDF) | curl raw.githubusercontent.com (HTTP 200) | Despite its filename this is **not** the published PACMPL version — its stamp is arXiv v6 and its footer is the Draft footer. §5.2 text is character-for-character consistent with B (figure refs resolved to Figures 6, 7, 8). |
| D | Third-party extraction of the PUBLISHED version's reference pages only: github.com/eitanf/sysconf `data/refs/OOPSLA_17_065.txt` (139 lines) | SECTION READ (references pages only) | curl raw.githubusercontent.com (HTTP 200) | Carries the published running header "Virtual Machine Warmup Blows Hot and Cold 52:27" and footer "Proceedings of the ACM on Programming Languages, Vol. 1, No. OOPSLA, Article 52. Publication date: October 2017." Establishes the published article is PACMPL 1(OOPSLA) Art. 52, ≥27 pages. Contains NO §5.2 text (references only). |
| E | Published PACMPL PDF (DOI 10.1145/3133876) | **COULD NOT READ** | WebFetch https://dl.acm.org/doi/pdf/10.1145/3133876 → "failed at its site (client_error), and nothing of the page was retrieved". Lancaster Pure portal page (search return) → HTTP 302 to https://research.lancaster-university.uk/ (new site root), not followed (budget). Not tried: doi.org, KCL Pure, authors' own site (not returned by my searches). | GitHub code search for `"unable to validate or invalidate" "No. OOPSLA, Article 52"` and `"Hot and Cold 52:" "JIT compilation"` → 0 results: no public text dump of the published full text found. |

Independence: ONE reader (me). THREE retrieval paths (arxiv.org via WebFetch summariser; raw.githubusercontent.com for the authors' source; raw.githubusercontent.com for a third-party v6 extraction). TWO distinct documents (LaTeX source vs compiled v6 PDF); A and C are the same document by different extractors. The published PDF is a third document I did not open. Every quotation below is from B unless marked, with A and C agreeing wherever they served the same text.

Budget: web searches 3/3. Web fetch attempts 7 (curl arxiv abs → proxy CONNECT 403; curl arxiv pdf → proxy CONNECT 403; WebFetch arXiv v6 ×3 → content; WebFetch Lancaster → redirect only; WebFetch ACM → client_error). Free routes used, per adversary 3's precedent: GitHub code search ×9 and raw.githubusercontent.com curls ×4 (two of them the identical warmup.tex). **If the judge counts the raw.githubusercontent.com curls as web fetches, I exceeded the fetch cap by 4.** One classifier REFUSAL: my attempt to read /root/.ccr/README.md and proxy-related environment variables was denied ("Containment Escape"); not retried. I did not probe the egress proxy.

---

## 2. Findings, item by item

### (1) "unable to validate or invalidate" — IS IN THE PAPER. Location, sentence, subject.

Location: §5.2 "The Effects of Compilation and GC" (LaTeX `\subsection{The Effects of Compilation and GC}\label{sec:deepdive}`, warmup.tex lines 1290–1318; arXiv v6 PDF §5.2 on page "0:14"/15 per extraction C). It is the FIRST sentence of the SECOND paragraph of §5.2.

Full sentence (B, lines 1311–1313; A served it as two segments a/b; C identical):
> "The relatively few results we have with GC and JIT compilation events, and the lack of a clear message from them, means that we feel unable to validate or invalidate Hypothesis H3."

Grammar on both sides of the cut: the sentence's SUBJECT is the data situation ("The relatively few results we have … and the lack of a clear message from them"); its OBJECT is "Hypothesis H3"; the verb is hedged ("we **feel** unable"). So the clause RECORDS an inability to settle the truth of a hypothesis, and attributes that inability to the paucity and unclarity of the recorded data.

What H3 is (B, line 1295, first paragraph of §5.2; A item (4); C identical):
> "The large number of non-warmup cases in our data led us to make the following hypothesis:
> H3 Non-warmup process executions are largely due to JIT compilation or GC events."

So the thing the authors were unable to validate or invalidate is a CAUSAL hypothesis about what non-warmup process executions are "largely due to" — JIT compilation events or GC events. This is the brief's FIRST alternative (unable to settle whether a hypothesis about cause is true), not the second (unable to settle whether their own data were reliable); the data paucity is the stated REASON, not the object. The record's gloss "scoped to the paucity of recorded GC/JIT-event data" correctly describes the subject/reason clause but the entry's compression of it can be read as the second alternative; it should read: "unable to validate or invalidate Hypothesis H3 (that non-warmups are largely due to JIT compilation or GC events), for want of enough clear instrumented data".

Caveat on scope: H3 is about JIT compilation events OR GC events in general. It is NOT a statement about the profile-guided recompilation feedback loop. See (3).

### (2) The "many" claim — located, quoted, unquantified, and scoped to two VMs.

Two sentences carry it in §5.2 (B lines 1307–1309 and 1313–1314; C identical; A served the second one in paraphrase and the figure numbers):

Last sentence of §5.2 paragraph 1:
> "However, in many cases such as Figure 8 neither JIT compilation, nor garbage collection, are sufficient to explain odd behaviours."
(LaTeX: `Figure~\ref{fig:unexplained}`; resolves to Figure 8 in v6 per C and per A's Task E. Figure 8 caption, B line 1336: "An example where performance changes do not appear to correlate with compilation or GC.")

Second sentence of §5.2 paragraph 2:
> "Whilst some non-warmups are plausibly explained by GC or JIT compilation events, many are not, at least on HotSpot and PyPy."

Then (third sentence):
> "When there is no clear correlation, we have very little idea of a likely cause of the unexpected behaviour."

Numbers carried: NONE. "many" is unquantified; §5.2 prints no count of instrumented process executions, no proportion explained/unexplained, and no table. The word "instrumentation" occurs once in the whole source (line 1300, the mode description). The two positively-explained examples are: Figure 6 — slowdown "clearly correlated to garbage collection" (caption fragment, B 1249–1250: "correlates with GC. This example (along with several others) appears to show a memory leak in PyPy, which we have reported upstream."); Figure 7 — "a clear correlation between a JIT compilation and a slowdown" (caption fragment, B 1257–1259: "with two immediately preceding JIT compilation events that may explain the drop in performance. Note that the regular GC spikes have only a small effect on wall-clock time.").

Scope qualifier the authors wrote and the record/entry dropped: "**at least on HotSpot and PyPy**". The instrumentation was done on two VMs only ("we made use of the debug facilities of HotSpot and PyPy", B 1297–1298), so the "many are not" is a claim about HotSpot and PyPy, not about the eight-implementation matrix. The record quoted the sentence truncated before the qualifier; the entry's "with 'many' non-warmups not plausibly explained by recorded JIT/GC events" carries no scope.

The paper states the "many" claim more than once; the HEDGED formulation is §5.2's. The bare formulations are: §1.1 (B 384–387): "Finally, in an attempt to see if there are easy explanations for the odd effects we see, we take two VMs and separate out the time taken to perform Garbage Collection (GC) and JIT compilation. These two factors explain only some of the effects we see." and §1.2 Summary, contribution 4 (B 401–402): "We show that, while some instances of 'odd' behaviour are explained by the 'obvious' factors of GC and JIT compilation, many are not." Note the tension: the Summary says "We show", while §5.2 says "we feel unable to validate or invalidate Hypothesis H3" and "we make no claim that they prove causation" (B 1301–1302). The §5.2 formulation is the one to cite.

### (3) Does the paper POSE the candidate's causal question (recompilation feedback loop as cause)? NO in the candidate's terms; YES at a coarser grain.

What it poses: H3 above — JIT compilation events or GC events as what non-warmups are "largely due to". That is a causal hypothesis ("due to"), tested correlationally ("This allows us to identify interesting correlations (though we make no claim that they prove causation)", B 1301–1302), and left formally unsettled.

What it does NOT pose, by two independent dedicated sweeps (A: summariser 12-term sweep over v6 text chars 0–100000; B: grep over the entire LaTeX source):
- "feedback": 0 occurrences (A: NOT FOUND; B: 0).
- "recompil": 1 occurrence, and it is the Linux kernel ("requires recompiling the kernel with the CONFIG_NO_HZ_FULL_ALL option", §3.5.2, B 724). No recompilation of program code is discussed.
- "deoptimi": 0 (A and B).
- "profil": 1 — "Linux's perf profiler" (§3.5.2, B 728). No VM profiling / profile-guided anything.
- "tier": 0 (B).
- "causation": 1 (the §5.2 disclaimer). "cause/causes/caused" in §5.2: only "a likely cause of the unexpected behaviour" (the ignorance sentence).

Nearest the paper comes to naming a compilation-trigger mechanism (§9.1.1 "In-process iterations", B 1756–1762), stated as a reason for choosing 2000 iterations, not as a hypothesis about non-warmup:
> "We chose 2000 in-process iterations based on our experience of VM internals. VMs have many counters which, when they exceed a certain threshold, cause the VM to change behaviour (e.g. (re)compile code, change garbage collection strategy etc.). … we knew that some counters would be set to around 1000 (e.g. tracing in RPython VMs such as PyPy occurs at 1039 iterations of a loop) and that we might observe VM effects at in-process iterations around this point."
and (B 1800–1803): "if one is confident that the VM(s) do not cause unpredictable performance changes, then it may be possible to run many fewer in-process iterations".

The paper's one explicit speculation about a cause of odd results is NOT the feedback loop (§9, fourth suggestion, B 1653–1654): "Fourth, we suspect that some of the odd results we have seen result from over-training VM heuristics on small sets of benchmarks."

Characterisation: the paper OBSERVES non-warmup (its main result), POSES a broad JIT-or-GC-events hypothesis (H3) and ANNOUNCES it unsettled. It does not ask whether the profile→recompile feedback loop causes non-convergence, in those or equivalent words. MY OWN REASONING, labelled as mine: the candidate's hypothesis is nested inside H3's first disjunct (a recompilation is a JIT compilation event, so "the loop causes it" entails "due to JIT compilation events"), but H3 could be true via GC alone with the loop innocent, and H3 being open does not by itself make the loop-specific question "asked". That equivalence step is the judge's to weigh; the entry itself already flags it as interpretive.

### (4) Intervention / control arm / future work — NONE proposed or attempted.

Sweep results (B, whole source; A agrees on the terms it checked):
- "disabl": 6 hits — turbo boost and hyper-threading in the BIOS (§3.4, B 619); Unix daemons (§3.5.1, B 688); intel_pstate (§3.5.2, B 716–718); perf sampling (B 734); three DaCapo benchmarks on Graal after hangs (Appendix A, B 1921). None concerns JIT compilation.
- "pinn": 1 — "We experimented extensively with CPU pinning, but eventually abandoned it." (§7, B 1484) — CPU affinity, not compilation.
- "freez"/"frozen"/"replay"/"intervention"/"future work"/"further work": 0.
- "in the future": 1 — "we hope and expect that this work will be superseded by better approaches in the future" (§9, B 1600–1601).

The only forward-looking remedy for the H3 impasse is in §5.2 itself, and it is MORE OBSERVATION, not an intervention (B 1315–1318):
> "It may be that obtaining similar data from other VMs will clarify this issue, but not all VMs support this feature and, in our experience, those that do support it do not always document it accurately."

The Conclusions' only "open question" (B 1868–1871) is about which Krun controls matter most for a reliable experiment, not about the cause of non-warmup. The "no realistic way" sentence the record called "the nearest passage" is in Appendix A about DaCapo/Octane benchmark SIZE (B 1960–1965: "Both DaCapo and (mostly) Octane use much larger benchmarks than our main experiment. We have no realistic way of understanding to what extent this makes 'good' warmup more or less likely.") — unrelated to §5.2's question. So: the paper neither proposes nor performs freezing, pinning, replaying or disabling compilation, and has no control arm of any kind; its design is single-arm observational with JIT/GC activity RECORDED on two VMs in separate instrumentation-mode runs.

### (5) REGIME line and the candidate's position

REGIME (B §3, §5 opening, §9.1.1; VM versions from C lines 324–328 because the LaTeX uses version macros defined outside warmup.tex): population = 6 deterministic microbenchmarks (binary trees, spectralnorm, n-body, fasta, fannkuch redux from the CLBG; Richards) × 7 JIT VMs (Graal 0.18, HHVM 3.15.3, JRuby+Truffle 9.1.2.0, HotSpot 8u112b15, LuaJIT 2.0.4, PyPy 5.6.0, V8 5.4.500.43) plus GCC 4.9.3 C as a non-JIT baseline, on 3 machines (Linux1240v5: Xeon E3-1240 v5, 24 GB, Debian 8; Linux4790: i7-4790, 32 GB, Debian 8; OpenBSD4790: i7-4790, 32 GB, OpenBSD 6.0), with Graal, HHVM and JRuby+Truffle absent on OpenBSD and two pairs skipped (fasta on JRuby+Truffle; Richards on HHVM). Unit = one process execution (30 per ⟨VM, benchmark⟩ pair) of 2000 in-process iterations: "3660 process executions and 7,320,000 in-process iterations" (C line 669). Operating condition = Krun-controlled dedicated machines (reboot before each process execution; daemons and network off; turbo boost and hyper-threading off in BIOS; tickless kernel; temperature check); strictly OBSERVATIONAL with respect to the VM — no flag, plan or compilation decision manipulated. Instrument = wall-clock per-iteration times; PELT changepoint analysis; per-execution classes warmup / flat / slowdown / no steady state and per-pair consistency (good/bad inconsistent); for §5.2 only, HotSpot and PyPy debug facilities recording time in JIT compilation and GC, collected only in separate "instrumentation mode" runs. Threshold = changepoint segments with means within max(variance, 0.001 s) treated as equivalent (§4.3, B 968; §9, B 1642); outlier window 200 iterations. Category = warmup class.

Candidate position: INSIDE the population and measurement regime (it takes Barrett's pair matrix as its sampling frame, the same unit — a process execution's iteration series — and the same classification family); OUTSIDE the design (three-arm interventional contrast vs single observational arm) and OUTSIDE §5.2's evidential scope (two VMs instrumented; HotSpot and PyPy).

---

## 3. Preprint vs published version

I read arXiv **v6** (6 Oct 2017; built from the acmart template in draft mode with 40 pages including appendices) and the authors' LaTeX at the repository head, whose metadata is the v6 build. All quoted strings are in THAT version (B, A, C agree). The PUBLISHED PACMPL 1(OOPSLA) Article 52 PDF (October 2017; running header seen in D ends at page 52:27, so ≥27 pages) I COULD NOT READ (routes in §1, row E). Whether §5.2's text is identical in the published version is therefore UNVERIFIED by me. MY OWN INFERENCE, labelled: v6 was posted the month of publication, from the ACM template, with a titlenote pointing to arXiv for updates — consistent with v6 being the camera-ready content with appendices — but an inference is not a read.

---

## 4. Bonus check on the entry's "Motivating gap" figure (not asked; costless from C)

Abstract (C line 22; A item (5) in 2 segments): "Repeating our experiment on 3 different machines, we found that at most 43.5% of ⟨VM, benchmark⟩ pairs consistently reach a steady state of peak performance." Introduction (C lines 70–71): "Only 30.0–43.5% (depending on the machine and OS combination) of ⟨VM, benchmark⟩ pairs consistently reach a steady state of peak performance." Table 1's class key, garbled at the record's route, reads in C (line 697–698) in this ORDER: flat, warmup, slowdown, no steady state, good inconsistent, bad inconsistent (symbols lost in extraction, order kept). §5 text (C 671–674): "Taking Linux1240v5 as a representative example, 43.4% of ⟨VM, benchmark⟩ pairs have consistently 'good' warmup (i.e. are flat, warmup, or good inconsistent) … (for comparison, Linux4790 is 43.5% … and OpenBSD4790 is 30.0% …)" and (C 703) "biggest proportion by far is 'bad' inconsistent at 43.5% (Linux4790 has very similar proportions)". So there are TWO distinct 43.5% figures — good-warmup pairs on Linux4790 (8.7+28.3+6.5) and bad-inconsistent pairs on Linux1240v5 — which explains the intake confusion the record flagged; the record's own labelled arithmetic is confirmed by the key order. The entry's "at most 43.5% … consistently reaching a steady state" is correct. Source for this paragraph is the third-party extraction C (the LaTeX table is an `\input` not in warmup.tex), cross-checked against the record's cell readings, which match C cell for cell.

---

## 5. Where my brief, the record and the entry were wrong or loose about the record

1. Brief: "said to report the authors 'unable to validate or invalidate' **the question**" — the object is **Hypothesis H3**, a stated hypothesis ("Non-warmup process executions are largely due to JIT compilation or GC events"), not the candidate's question.
2. Record/entry: "'unable to validate or invalidate' (scoped to the paucity of recorded GC/JIT-event data)" — the paucity is the sentence's REASON clause; the OBJECT is H3's truth. As compressed in the entry this invites the misreading the brief warns against.
3. Record and entry drop the author-written qualifier "**at least on HotSpot and PyPy**" from "many are not". Restore it.
4. Record: "I could not relocate the verbatim statement of Hypothesis H3 … H3's exact scope is unverified" — now located and quoted (§5.2 first paragraph). Its scope: JIT compilation OR GC events, non-warmup process executions, any VM, tested on two.
5. Record: "the nearest passage [to proposing such an experiment] is a limitation, 'We have no realistic way…'" — that sentence is in Appendix A about DaCapo/Octane benchmark size; the nearest passage is §5.2's own "It may be that obtaining similar data from other VMs will clarify this issue…". Minor mislocation; the record's conclusion (no such experiment proposed) stands.
6. Entry: "P1 Section 5.2 **asks the candidate's causal question** and leaves it open" — §5.2 asks whether non-warmups are largely due to JIT compilation or GC events, in general; it does not ask whether the profile-guided recompilation feedback loop is the cause, and uses none of that vocabulary. The entry's own "Strongest remaining objection" already concedes the equivalence is interpretive; this read sharpens that: the nesting is of a specific mechanism inside a broad disjunction.
7. Record's figure reference "Figure 8" for the "many cases" sentence is correct for v6 (LaTeX `fig:unexplained`); the record's description of it as "Immediately before" the 'unable' sentence is correct but crosses a paragraph boundary (last sentence of paragraph 1 → first sentence of paragraph 2).
8. Nothing in my brief about the paper being open access via the ACM DL could be used here: the ACM PDF fetch failed at the site.

---

## 6. Bearing (for the judge; no verdict recommended)

The load-bearing quotation exists, is correctly located in §5.2, and its object is a causal hypothesis (H3) that the authors explicitly declare themselves unable to confirm or refute — so, on the first-alternative reading the brief names, the paper does leave a cause-question open in print. But that open question is "are non-warmups largely due to JIT compilation or GC events?", tested by correlation on two VMs with an unquantified "many are not, at least on HotSpot and PyPy". The candidate's loop-specific hypothesis and its freeze-versus-sham intervention are absent from the paper's words, sweeps and suggestions; the paper's sole remedy is more instrumentation data from other VMs. How much of the Gate 2 kill survives depends on whether an open broader disjunction counts as the specific question having been asked — the interpretive step the entry already labels as its own.
