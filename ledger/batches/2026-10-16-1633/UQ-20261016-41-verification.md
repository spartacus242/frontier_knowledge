# UQ-20261016-41 — Literature & methods verification log
Date: 2026-10-16. Independent check; no knowledge of downstream conclusion.

## Budget accounting (honest)
- Web searches used: **13** of 14.
- Page fetches used: **6** of 6 (1 blocked `curl`, 5 `WebFetch`). **At budget; no overrun.**
- Refusals/blocks: **2** (proxy CONNECT 403 for `curl` to www.cs.yale.edu:443; GitHub MCP access denied for `rutgers-apl/rlibm-32`).
- Unproductive-but-not-refused: 2 of the 5 WebFetches (offset reads of the arXiv PDF) landed on the wrong text window and returned no Table 1.

## Access routes tried
| Route | Outcome | Note |
|---|---|---|
| `curl https://www.cs.yale.edu/.../rlibm32-pldi-2021.pdf` | **proxy-refused** | `curl: (56) CONNECT tunnel failed, response 403`; proxy status endpoint logged `connect_rejected www.cs.yale.edu:443`. Per /root/.ccr/README.md, policy denials are not retried. |
| `curl https://arxiv.org/pdf/2005.02732` | **proxy-refused** (same tunnel call) | proxy status logged `connect_rejected arxiv.org:443`. |
| `WebFetch https://www.cs.yale.edu/homes/lim-jay/publications/rlibm32-pldi-2021.pdf` | **opened — full text, authoritative read for Source A** | Author-hosted copy of the PLDI 2021 camera-ready = primary source. |
| `WebFetch https://arxiv.org/pdf/2005.02732` | **opened — full text, authoritative read for Source B** | Primary source (arXiv = the cited identifier). |
| `WebFetch https://www.cs.yale.edu/homes/lim-jay/publications/rlibm32_arxiv.pdf` (offset 0) | opened, **window missed Table 1** | Returned Intro–§4.1 only; used for keyword sweep. |
| `WebFetch` same URL, offset 60000 | opened, **window missed Table 1** | Returned end of §3.4 / start of §4. |
| `WebFetch` same URL, offset 69000 | opened, **window missed Table 1** | Returned an Introduction fragment (markdown offsets do not track PDF order). |
| `mcp__github__get_file_contents rutgers-apl/rlibm-32 README.md` | **refused** | "Access denied: repository ... is not configured for this session." Session is scoped to `spartacus242/frontier_knowledge`. |
| PMC / Europe PMC | **not attempted by design** | Task rules: hard-blocked here; neither source needs them (both are openly hosted). |

Note on evidentiary status: both primary PDFs were opened, but the text reached me through WebFetch's extraction model, which returns quotes rather than raw bytes. I flag below where a quote arrived as fragments rather than one continuous verified string, and where "phrase not found" rests on that extractor's sweep of the window it read rather than on a byte-level grep.

## Searches run (query → one-line result)
1. `Lim Nagarakatte "High Performance Correctly Rounded Math Libraries for 32-bit Floating Point Representations" PLDI 2021 pdf` → found author-hosted PLDI PDF + arXiv 2104.04043 + RLIBM project page.
2. `arXiv 2005.02732 "Custom-Precision Mathematical Library Explorations..."` → arXiv abs/pdf + HAL hal-02563852 + ar5iv HTML.
3. `libm elementary function accuracy weighted by "input distribution" of real applications usage-weighted error measurement` → no usage-weighted study; returned Zimmermann glibc accuracy reports, crlibm docs, Darulova CAV2019.
4. `"argument distribution" OR "input distribution" profiling transcendental function arguments HPC applications floating-point accuracy study` → top hit is Source B itself; nothing usage-weighted.
5. `"usage-weighted" OR "weighted by frequency" floating-point elementary function error real workload arguments` → no match; returned "Floating-Point Usage on GitHub" (usage statistics, no error measurement) and FP error-detection papers.
6. `cross-library disagreement glibc Intel CUDA libm last bit differ study "correctly rounded" comparison ... Zimmermann` → Zimmermann's per-release "accuracy of mathematical functions" reports (glibc 2.33–2.42); each-vs-correct-rounding, not pairwise, and not usage-weighted.
7. `machine learning workload traces exp tanh sigmoid argument distribution ... weighted` → activation-function approximation / fixed-point accelerator papers; none measures library error under an observed argument distribution.
8. `Verificarlo OR "stochastic arithmetic" elementary function accuracy "weighted by" application input distribution` → Verificarlo/CESTAC/stochastic-arithmetic papers; none is a usage-weighted library-error measurement.
9. `"how often" incorrectly rounded libm results occur in practice real scientific applications` → RLIBM papers, Lefèvre/Zimmermann testlibm pages; no in-practice frequency study.
10. `empirical distribution of arguments to math functions traced from applications used to evaluate libm accuracy instead of uniform enumeration` → libm man pages, bionic/ACML test data, a testing patent; nothing.
11. `"ULP error" math library evaluated on inputs traced from applications ... GPU CPU comparison` → LLVM libc GSoC-2025 "Profiling and testing math functions on GPUs" + GPU math conformance tables (**lead, NOT opened — fetch budget spent**).
12. `"Floating-Point Usage on GitHub" large-scale study ...` → arXiv 2509.04936 (OOPSLA 2026). Static usage study; no error measurement.
13. `"operational profile" OR "usage profile" weighted numerical accuracy elementary functions error rate` → software-reliability-engineering material only; the operational-profile idea exists in reliability but is not applied to libm error in anything returned.
14. `study measuring number of inputs where glibc and Intel MKL or CUDA libm differ from each other bitwise` → RLIBM papers + Zimmermann reports; no pairwise-disagreement census found.
15. `"input distribution" aware evaluation of approximate math functions error metric weighted expectation over realistic inputs` → "Sound Probabilistic Numerical Error Analysis" (Darulova et al.) and approximate-computing papers; input distributions used for *static probabilistic bounds on a program*, not for measuring a library's error.
(Count: queries 1–15 as numbered above are 15 lines but two were issued as one combined query each in the same call batch; the tool-call ledger shows **13 WebSearch invocations**. The 13 invocations are the figure I report.)

---

# SOURCE A — RLIBM-32 (Lim & Nagarakatte, PLDI 2021)
Opened: https://www.cs.yale.edu/homes/lim-jay/publications/rlibm32-pldi-2021.pdf — **full text**.

## Four required descriptors (from the document's own text)
- **Unit of analysis:** one *input bit-pattern of the target 32-bit representation* per function–library pair. Caption, Table 1: *"✓indicates that the library produces the correctly rounded result for all inputs. Otherwise, we use ✗."* / *"For each ✗, we show the number of inputs with wrong results."*
- **Endpoint:** binary indicator "is the returned value the correctly rounded result", aggregated as a **count of inputs with wrong results**. Same caption sentences.
- **Comparator:** the **correctly rounded result** of the real-valued function in the target format — not another implementation. §4.2: *"RLibm-32 produces the correctly rounded results for all inputs for the ten elementary functions for 32-bit floats."*
- **Estimand:** the **total number (complete count), not a rate or an estimate**, of inputs in the representable domain at which a given library's result differs from correct rounding.

## CLAIM 1 — verdict: PARTLY-CONFIRMED
Confirmed, from the Table 1 caption (§4.2, p. 368 of the PLDI version), quoted as the fragments the extraction returned (**caption not verified as one continuous string — the three offset re-reads of the arXiv version missed the table region**):
- *"Generation of correctly rounded results for 32-bit floats with RLibm-32, Intel's libm (float and double),"*
- *"glibc's libm (float and double), CR-LIBM, and MetaLibm (float and double)."*
- *"✓indicates that the library produces the correctly rounded result for all inputs. Otherwise, we use ✗."*
- *"For each ✗, we show the number of inputs with wrong results. N/A indicates that the implementation is not available."*

**What Table 1 actually tabulates.**
- **Format:** 32-bit float (binary32). (The posit32 counterpart is Table 2, §4.2, p. 369.)
- **Libraries (8 columns):** RLibm-32; glibc float; glibc double; Intel float; Intel double; CR-LIBM; MetaLibm float; MetaLibm double. ("double" columns = using the double-precision routine and rounding to float.)
- **Functions (10 rows):** ln, log2, log10, exp, exp2, exp10, sinh, cosh, sinpi, cospi.
- **Cell content:** ✓ / ✗ plus, for ✗, the **number of inputs** with a non-correctly-rounded result.

Table 1 as extracted:

| Function | RLibm-32 | glibc float | glibc double | Intel float | Intel double | CR-LIBM | MetaLibm float | MetaLibm double |
|---|---|---|---|---|---|---|---|---|
| ln | ✓ | ✗(4.2E5) | ✗(5) | ✗(1060) | ✗(5) | ✗(5) | N/A | N/A |
| log2 | ✓ | ✗(3.1E5) | ✓ | ✗(276) | ✓ | ✓ | N/A | N/A |
| log10 | ✓ | ✗(3.0E7) | ✗(1) | ✗(1.5E5) | ✗(1) | ✗(1) | N/A | N/A |
| exp | ✓ | ✗(1.7E5) | ✓ | ✗(2.5E5) | ✓ | ✓ | ✗(5.1E8) | ✗(5.1E8) |
| exp2 | ✓ | ✗(1.7E5) | ✗(2) | ✗(7.2E5) | ✗(2) | N/A | ✗(6.5E7) | ✗(1026) |
| exp10 | ✓ | ✗(1.7E5) | ✓ | ✗(3.9E5) | ✓ | N/A | N/A | N/A |
| sinh | ✓ | ✗(7.1E7) | ✗(2) | ✗(2.5E5) | ✗(2) | ✗(2) | N/A | N/A |
| cosh | ✓ | ✗(1.8E7) | ✓ | ✗(1.4E5) | ✓ | ✓ | ✗(1.1E7) | ✓ |
| sinpi | ✓ | N/A | N/A | ✗(3.4E5) | ✓ | ✓ | N/A | N/A |
| cospi | ✓ | N/A | N/A | ✗(3.8E5) | ✓ | ✓ | N/A | N/A |

**Exhaustive vs sampled — what the text supports.** The *claim's substance* (complete count, not an estimate) is supported by the caption's own wording: a ✓ is defined as correct *"for all inputs"*, and each ✗ carries *"the number of inputs with wrong results"*. A count of inputs over a domain where ✓ means "all inputs" is a census, not a sample. Corroborating coverage sentences:
- §4.2: *"RLibm-32 produces the correctly rounded results for all inputs for the ten elementary functions for 32-bit floats."*
- §4.1: *"The total time taken is computed as the sum of the time taken by all inputs (i.e., all 2^32 inputs for a 32-bit representation)."* (This sentence is about **timing**, not correctness. The "2 32" in the raw extraction is a superscript artifact for 2^32.)
- §4.1: *"We ran the measurements for all inputs for each function six times."*
- §4.3: *"We validated that all these polynomials produce the correct result for all inputs."*
- §4.2 (posit32, Table 2): *"RLibm-32 produces correctly rounded results with all inputs for the eight posit32 functions."*

**Where the claim overstates.** The words **"exhaustive" / "exhaustively" do not appear** in the evaluation text, and the paper does not print a sentence of the form "we evaluated every one of the 2^32 inputs against the correctly rounded result". The exhaustiveness is carried by *"for all inputs"* + *"the number of inputs with wrong results"*, not by an explicit exhaustiveness statement. Also: the word "sample" **does** appear in the paper, but only in the *generation* method (§3.4, §1) — not in the evaluation. A reader skimming for "sampled" could misread that. Two further details I **could not verify**: whether the counts exclude NaN/Inf bit patterns, and the oracle used for the correctly rounded reference (the window containing §4.1's oracle description was not recovered) — mark both **COULD-NOT-READ**.

Finally, a wording correction: the claim calls Table 1 a "rate of error". Table 1 publishes **counts of inputs**, not rates. Rates must be computed by the reader.

## Arithmetic I did myself
2^32 = 4,294,967,296 representable binary32 bit patterns. Converting Table 1's counts to fractions of that domain (my arithmetic; the paper prints none of these percentages):
- glibc float `log10`: 3.0E7 / 4,294,967,296 = **0.70 %** of inputs wrong.
- glibc float `sinh`: 7.1E7 / 4.295E9 = **1.65 %**.
- glibc float `cosh`: 1.8E7 / 4.295E9 = **0.42 %**.
- glibc float `ln`: 4.2E5 / 4.295E9 = **9.8E-5 = 0.0098 %**.
- Intel float `ln`: 1060 / 4.295E9 = **2.5E-7 = 0.000025 %**.
- MetaLibm float/double `exp`: 5.1E8 / 4.295E9 = **11.9 %** — the largest entry in the table.
- MetaLibm float `exp2`: 6.5E7 / 4.295E9 = **1.5 %**.
- glibc *double* `ln`: 5 inputs = 1.2E-9 of the domain; glibc double `log10`: **1 input**.
Units: every parenthesised figure is **a count of input bit-patterns**, dimensionless, at which that library's returned float is not the correctly rounded float. Not ULPs, not a maximum error, not a percentage. The E-notation entries are rounded to two significant figures by the authors, so the percentages above inherit that precision.

## CLAIM 2 — verdict: CONFIRMED
No usage weighting, application profile, or empirical argument distribution appears. Every input is one row of the census and counts the same. The only distribution/sampling language in the paper belongs to the **polynomial-generation algorithm**, not the evaluation:
- §1: *"We sample inputs proportional to the number of representable values in a given input domain"*
- §3.4 (Counterexample Driven Polynomial Generation): *"Then we uniformly sample the reduced inputs based on the distribution of reduced inputs."*
Both weight by **density of representable values**, i.e. by the format, not by how often a program produces an argument. Keyword sweep over the windows read: **"weight", "workload", "profile", "typical input", "real program" — not found**; "distribution" occurs only in the §3.4 sense above. Caveat: this absence rests on the extraction model's sweep of the windows it read, not a byte-level grep of the whole PDF; it is "not found", and I have no positive evidence of any usage weighting anywhere.

## CLAIM 3 — verdict: CONFIRMED for the paper; COULD-NOT-READ for the wider project
**Which measurement the paper makes:** each implementation **against the correctly rounded reference**, independently. One shared oracle, N independent comparisons.
**Which it does not make:** any pairwise, implementation-vs-implementation last-bit disagreement count. There is no "glibc differs from Intel on K inputs" figure, no fast-math variant comparison, and **CUDA/GPU libraries are not mentioned at all** in what was read. Speedup numbers in §4.3 compare *performance* between libraries, not result agreement.
Note the inferential gap that matters here: Table 1 lets a reader see that glibc float `ln` is wrong on 4.2E5 inputs and Intel float `ln` on 1060 — but because both are measured against the same oracle, you cannot read off their mutual disagreement from the table (the wrong-input sets may overlap arbitrarily, and two libraries can both be wrong yet agree). A pairwise count is a different measurement and the paper does not report it.
**Wider RLIBM project:** the repository check was **refused** (GitHub MCP: `rutgers-apl/rlibm-32` not configured for this session), and my fetch budget was spent, so companion papers (RLIBM arXiv 2007.05344, RLibm-MultiRound arXiv 2504.07409, the Rutgers project page) were **not opened**. Mark the "or the RLIBM project" half **COULD-NOT-READ**. The closest thing the literature search surfaced for cross-library comparison is Paul Zimmermann's per-release *accuracy of mathematical functions* reports (members.loria.fr / homepages.loria.fr, glibc 2.33–2.42), but those too measure each library against correct rounding, and I did **not** open them.

---

# SOURCE B — VPREC-libm (arXiv:2005.02732, Defour et al., CIP/"Custom-Precision Mathematical Library Explorations for Code Profiling and Optimization")
Opened: https://arxiv.org/pdf/2005.02732 — **full text**.

## Four required descriptors (from the document's own text)
- **Unit of analysis:** the individual libm **call site**, keyed by program address and stack trace. §III-C: *"the number of occurrences for the unique program address and stack trace from which the call is made."*
- **Endpoint:** the **minimal output precision** that call site tolerates. §III-C: *"we perform a dichotomic search for the minimal output precision of the VPREC-libm functions"* and *"This search is applied sequentially per call-site."*
- **Comparator:** an internal **binary128** evaluation rounded down to the target format. §III-B: *"it computes a binary 128 result"*, *"by calling the corresponding mathematical function from the GCC's libquadmath"*, *"is converted to the target format using Verificarlo-VPREC"*, *"a faithfully rounded result at target precision p is returned."*
- **Estimand:** the smallest per-call-site precision that still satisfies the user's accuracy requirement. §III-C: *"which meets the user-specified correctness criteria."*

## CLAIM 4 — verdict: PARTLY-CONFIRMED
Confirmed as stated:
- Unit = call site as address + stack trace. §III-C (profiling mode): *"the number of occurrences for the unique program address and stack trace from which the call is made."*
- Endpoint = minimum sufficient output precision per call site (quotes above), with **operand/output interval bounds and call counts as by-products**: §III-C: *"For each call, it updates the boundaries of the operands and output intervals,"* — and the occurrence count in the same sentence.
- Reference = binary128 via libquadmath, rounded to the target format by Verificarlo-VPREC (quotes above).
- Estimand = smallest per-call-site precision meeting user criteria: *"which meets the user-specified correctness criteria."*

**One correction.** The claim says the reference is the binary128 oracle *"plus the application's own test suite"*. The test-suite mention is narrower than that. §IV-A: *"as verified against the provided test-suites."* — that sentence is about validating that the minimal CelesTrak/SGP4 port reproduces the reference outputs, i.e. port fidelity. The acceptance predicate driving the precision search is the **user-specified correctness criteria** (§III-C), not the test suite. So: oracle = binary128/VPREC + user criteria; the test suite validates the port. Treat "plus the application's own test suite" as **not supported as part of the reference for the precision search**.

Also worth recording precisely: VPREC returns a **faithfully** rounded result at precision p (*"a faithfully rounded result at target precision p is returned"*), i.e. the reference pipeline is faithful rounding of a binary128 computation, not certified correct rounding. That is a weaker guarantee than Source A's oracle and the distinction matters if the two papers' references are ever treated as equivalent.

## CLAIM 5 — six absences, one by one
1. **Never evaluates the deployed library's own error — CONFIRMED (not found).** No measurement of the error of glibc/any shipped libm appears. The paper measures how little precision a call site needs, not how wrong the installed implementation is.
2. **Never compares implementations against each other — CONFIRMED for the experiments; explicitly flagged as future work.** §V: *"An easy first step would be to automatically select the best fitting implementation among existing libraries"*. Intel MKL appears only in Related Work. No pairwise comparison is performed.
3. **Call frequency used only as a search-ordering heuristic, not as a weight — CONFIRMED, verbatim.** §III-C: *"Therefore we prioritize the call-site exploration by call frequency as a heuristic."* Frequency orders which call site is explored first; it never multiplies an error term.
4. **No uniform-over-domain comparator — CONFIRMED (not found).** The reference is computed per executed call on the arguments the program actually produced; there is no enumeration or uniform sampling of the format's domain anywhere. (Evidence is absence; recorded as "not found", not as a positive statement by the authors.)
5. **Covers one application — CONFIRMED.** SGP4 is the only application evaluated, in both experiments (the full `sgp4-all.tle` dataset, Fig. 2; the satellite-5 dataset, Fig. 3; §IV-B). SDP4 is *described* in §IV-A but not used, because the experiments involve only near-Earth objects. Patmos is cited in the Introduction (ref. [6]) solely as motivation — it spends ~70 % of its time in libm — and is **not run**.
6. **No GPU — CONFIRMED.** GPUs appear only in Related Work (§II): *"Nvidia's GPUs, which embed dedicated hardware for fast approximation of some functions"*. No GPU experiment is reported.

**Important structural note for whoever uses this ledger:** Source B *does* run on the arguments a real application generates — that is the one genuinely usage-derived ingredient in either paper. But what it measures on those arguments is **sufficient precision**, not **error**. It is therefore not a usage-weighted error measurement, and must not be scored as one.

---

# SEPARATE LITERATURE QUESTION — usage-weighted error / disagreement measurement
**Verdict: NOT-FOUND.** 13 searches across numerical-analysis, HPC, reproducibility and ML-systems vocabularies returned no published measurement of elementary-function error or cross-implementation disagreement **weighted by an empirically observed argument distribution**. Distinguish this sharply from "could not read": the searches ran and returned results; none of the returned work does this.

Vocabularies tried and what came back (queries 3–15 above): "usage-weighted", "weighted by frequency", "input distribution", "argument distribution", "operational profile"/"usage profile" (the software-reliability term for exactly this weighting — returned only reliability-engineering material, never applied to libm), traced/application-derived inputs, ML activation-function arguments, Verificarlo/stochastic arithmetic, "how often in practice", and pairwise glibc-vs-MKL-vs-CUDA disagreement counts.

Nearest neighbours, each of which is a **different** measurement — listed so they are not mistaken for the thing:
- **Zimmermann, per-release accuracy of mathematical functions in glibc** (members.loria.fr / homepages.loria.fr, glibc 2.33–2.42): many libraries, many functions, each vs **correct rounding**; worst-case/hard-case and random inputs. Not usage-weighted, not pairwise. **Not opened** (fetch budget spent) — lead only.
- **Source B (VPREC-libm)**: real executed arguments, but endpoint is sufficient precision, not error.
- **"Sound Probabilistic Numerical Error Analysis"** and Darulova-group probabilistic roundoff work: uses **input distributions**, but to derive *static probabilistic bounds on a program's* roundoff, not to measure a library's error rate under observed usage. Closest in spirit; wrong object. **Not opened.**
- **"Floating-Point Usage on GitHub: A Large-Scale Study of Statically Typed Languages"** (arXiv 2509.04936, OOPSLA 2026): measures *usage* of FP constructs. No error measurement, no argument values. **Not opened.**
- **LLVM libc GSoC-2025 "Profiling and testing math functions on GPUs"** + the GPU math conformance tables (discourse.llvm.org, blog.llvm.org, lists.llvm.org): the only lead that looked like it might combine profiling with cross-implementation GPU comparison. **NOT OPENED — fetch budget exhausted.** This is the one residual gap in the literature question and the first thing a follow-up pass should fetch.
- Excluded by instruction, and correctly so: cross-platform reproducibility / neuroimaging pipeline variability work, which asks whether results differ across platforms, not what the usage-weighted error rate is.

Honest statement of the gap: "not found" here means not found by 13 searches with the vocabularies above, with four named near-miss sources left unopened. It is not a proof of non-existence.
