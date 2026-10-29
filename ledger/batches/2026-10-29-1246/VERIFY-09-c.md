# VERIFY-09-c — UQ-20261029-09: why the two readers split, and whether the triviality leg is sourced

Checker role: fresh-context verification of ONE claim-cluster; not an adversary, not a judge. I did not open VERIFY-09-a or VERIFY-09-b (VERIFY-09-b.md exists in the batch directory; not read). No `mcp__hearthbot__` tool called.

Budget: 5 web searches of 5, 5 WebFetch of 5, both fully spent. Free-route curl: raw.githubusercontent.com served twice (README.md 14,833 bytes; mamba2.py 17,479 bytes); huggingface.co refused twice (`curl: (56) CONNECT tunnel failed, response 403` — tool-scoped per the route facts; WebFetch then served both files); arxiv.org/html refused once (same 403; WebFetch served it); export.arxiv.org `curl: (6) Could not resolve host` (not retried; the arXiv abstract page via WebFetch replaced it).

## Sources and read levels

| Source | Route | Read level |
|---|---|---|
| UQ-20261029-09-entry.md | local | FULL TEXT |
| UQ-20261029-09-record.md (154 lines) | local | FULL TEXT |
| UQ-20261029-09-adversary-1.md | local | FULL TEXT |
| UQ-20261029-09-adversary-2.md | local | FULL TEXT |
| LEDGER.md | local | SECTION READ: lines 144–215 (Gate 4, Gate 5, schema, operating rules) plus grep hits at lines 23–31, 60, 76–82, 98, 123–125 |
| ledger/batches/2026-10-28-2208.md and 2026-10-28-2208/JUDGE-COMPUTE.md | local | SECTION READ: grep context around "exact finite computation" (lines 37–65; lines 1–7) |
| tiiuae/falcon-mamba-7b `config.json` | WebFetch #1 | FULL FILE |
| state-spaces/mamba2-1.3b `config.json` | WebFetch #4 | FULL FILE |
| state-spaces/mamba `README.md` | curl | FULL FILE (Pretrained Models table read) |
| state-spaces/mamba `mamba_ssm/modules/mamba2.py` | curl | SECTION READ: lines 36–50 (defaults), 104–110 (conv_dim), 343–356 (`allocate_inference_cache`) |
| arXiv:2602.11408v1 (GHOST, Menezes & Kyrillidis) | WebFetch #2, arxiv.org/html, summariser | SECTION READ: Appendix A, Figure 1 caption, Section 5, Table 3, front matter — targeted sweeps, not the whole paper |
| arXiv:2609.07681 abstract page | WebFetch #3, arxiv.org/abs, summariser | ABSTRACT ONLY plus metadata (abstract assembled from 16 consecutive fragments; verified by sentence continuity) |
| arXiv:2606.10932 (Shinde, "Density Field State Space Models…") | WebFetch #5, arxiv.org/pdf, summariser | SECTION READ: front matter, §3.4, §4.1, Appendix D as reported; abstract came back as a summary only (verbatim refused by the 125-char cap; I did not request segments) |
| Dambre et al. 2012 | — | NOT ATTEMPTED (outside this check's five questions; budget spent on them) |

All adversary-log reads of other papers (2607.11796, 2510.03279, 2504.19561) are reported here as THE LOGS' CLAIMS; I did not open those three.

---

## (1) Did the two readers have the same facts?

**Adversary 1 opened (read levels as A1 claims them):**
- arXiv:2609.07681, abstract page — ABSTRACT ONLY.
- arXiv:2510.03279 (MemMamba), abstract page — ABSTRACT ONLY.
- arXiv:2607.11796 (Bhattacharya, "An Exact Instrument for State Usage…"), PDF — "full text through the summariser".
- arXiv:2602.11408v1 (GHOST), HTML — "full text through the summariser".
- `mamba_ssm/modules/mamba2.py` and `README.md` of state-spaces/mamba via raw.githubusercontent.com (curl) — full files, line numbers cited.
- Plus LEDGER.md lines 144–215 and the record.
- UNOPENED: two huggingface.co config files (curl 403, no WebFetch left — A1 names them only by function: the files that would have replaced its Falcon-Mamba and small-Mamba2 dimension recollections); Dambre 2012 (COULD NOT READ — budget, explicitly so labelled).

**Adversary 2 opened (as A2 claims them):**
- arXiv:2504.19561 (Parnichkun et al., ESS/TSS), PDF — "full main text via the PDF route through the summariser"; Appendix E.7/F.5 not served.
- arXiv:2609.07681, PDF — "full main text"; Appendix K not served; Lemma 4.5 inequality garbled.
- tiiuae/falcon-mamba-7b `config.json` — FULL FILE.
- Plus the record and the Depth rule (cites "Jace, 2026-10-28 rule" and the `Terminal estimand:` requirement, so LEDGER.md's Depth section too).
- Not fetched BY CHOICE: Dambre; 2402.01032 §3.5; 1611.09913; 2602.04852.

**Overlap:** exactly ONE paper in common — arXiv:2609.07681 — and at DIFFERENT read levels by DIFFERENT routes (A1 abstract page, abstract only; A2 PDF, full main text). Everything else is disjoint. A1 had GHOST, 2607.11796 and the Mamba-2 source code that A2 never saw; A2 had 2504.19561 (the ESS/TSS paper), the Falcon config and the body of 2609.07681 (Lemma 4.5's S×b bound, Algorithm 2 "Hidden State Inversion") that A1 never saw.

**Is the disagreement about shared facts or different reads?** The fatal-versus-Provisional split is NOT a fact asymmetry. Both logs build the identical arithmetic fact — recovered bits ≤ L·log2|V| and a nominal carry of order 10^8 bits, hence a headline-fraction ceiling of order 10^-4 at L=4096 — from DIFFERENT primary inputs (A1: GHOST's printed per-layer state for Mamba2-1.3B; A2: Falcon-Mamba-7B's config integers), and both then file the SAME consequence (Gate 3's "a few percent vs near 1" dichotomy is unreachable; the fraction limb is limb A times a constant) under different attacks: A1 under 1 and 4, A2 under 6 and 8 (and 5). Each log says this in its own words — A1: "Unresolved on attacks 1 and 4 (the same single leg…)"; A2: "attacks 1/6/8 turn on which limb is terminal and the record never says." So the split is classificatory, over shared arithmetic. The one document asymmetry that changes a grade's CONTENT is 2504.19561: it drives A2's attack 2 wording, A2's second ground under attack 6 (an existing rank-based utilization axis) and A2's falsification of silence-mechanism (2) under attack 7 — none of which is attack 1 or 4. Both graded attack 2 Partial regardless.

Independence of the shared arithmetic leg: independent READERS (A2 states it did not read A1's log — self-reported), independent DOCUMENTS (GHOST vs config.json), independent RETRIEVAL PATHS (arxiv.org/html vs huggingface.co raw; both through the WebFetch summariser, so one TOOL, two hosts). I add a third reading of both primaries below (my WebFetch calls hours after theirs, outside the 15-minute cache).

Note on A1's query 8: it contained the exact phrase `"effective state size"` yet returned GHOST, EmbeddingRWKV and Stuffed Mamba and NOT 2504.19561 (whose title hyphenates "Effective State-Size"); A2's query 4 with the same phrase did return it. So the one fact A2 had and A1 lacked came from a vocabulary A1 ALSO tried — a search-return difference, not a vocabulary gap. A1 could also have followed the record's Gate 2 query 9 line, which lists `arXiv:2504.19561` as a bare identifier under the sentence "No utilization-fraction title anywhere in the return"; A1 did not, and A2 caught it.

---

## (2) Attack 1 (triviality): is A1's leg sourced, or the reader's own algebra?

**What A1 actually claims** (attack table row 1): "The headline limb — 'what fraction of its nominal capacity does the model realize' — is answerable in a page: by the candidate's own numerator definition recovered bits ≤ L·log2|V|, and GHOST prints a per-layer state of 2.1 MB × 48 layers, so the fraction at every L in the ladder is ≤ ~2 × 10^-4 for any decoder and any outcome (arithmetic above, mine, on printed numbers). The order of magnitude is settled before any model is run." A1 concedes in the same row: "The first limb (recovered bits versus L, in bits, from the exposed state) is not trivial and nobody opened prints it". So A1's triviality claim is scoped to the FRACTION's order of magnitude (an upper bound on it), not to "the answer" — the brief over-scopes this (see Brief errors).

**The leg is a chain of five steps; A1 labels each:**

1. Inequality. Attack 4, clause C5, first bullet: "Cross-entropy of a discrete predictive distribution is non-negative (−log p ≥ 0 for p ≤ 1; MY OWN ELEMENTARY REASONING, no source needed beyond the definition), so **recovered bits ≤ L·log2|V|** for every decoder, however good." — OWN, labelled. Not sourced to any opened document. It is a one-step exact deduction from the record's own estimator (record line 40: "recovered bits (L·log2|V| minus the decoder's per-position cross-entropy summed over positions, in bits)"): the estimator is L·log2|V| − Σ CE_i with every CE_i ≥ 0, so it is ≤ L·log2|V| for every decoder, model and seed. I re-derived it; it holds unconditionally. A2's version is the information-theoretic statement I(prefix; state) ≤ H(prefix), also own, also labelled ("Textbook information theory; I did not open a primary source for it, and the search that would have grounded it was not run."). A1's version is the tighter one for this record, because it bounds the declared ESTIMATOR whatever the true mutual information is.

2. Denominator inputs. "(GHOST, F4, printed) per-layer state memory for the main Mamba2 model: '2.1 MB per layer in float 32' (Appendix A); layer count: '48 layers with 128 states each' (Figure 1 caption)." — SOURCED to an opened document (A1: full text via summariser). **I verified both strings** (WebFetch #2, arxiv.org/html/2602.11408v1, section read): Appendix A "The Inference Bottleneck" contains, as a 2-fragment reconstruction verified by continuity, "For Mamba 2-1.3B with H = 64, P = 64, N = 128, this is" + "$64 \times 64 \times 128 \times 4 = 2.1$ MB per layer in float 32", followed by "or approximately 100 MB across 48 layers." Figure 1 caption: "Each point represents one of the 6,144 hidden states (48 layers with 128 states each)." Section 5: "used Mamba2-1.3B with Huggingface default precision (float32)" under "Unless otherwise noted". Table 3 sizes: 130M, 370M, 780M, 1.3B, 2.7B. Front matter: Michael Menezes, Anastasios Kyrillidis.

3. Model identity. "MY INFERENCE: these describe Mamba2-1.3B, the paper's main experimental model (§5 says most experiments use Mamba2-1.3B)" — labelled OWN, with a stated robustness bound ("at most a factor of ~4 in either direction and does not reverse"). **This step is in fact PRINTED in the source**: the Appendix A sentence opens "For Mamba 2-1.3B with H = 64, P = 64, N = 128". A1 under-claimed its sourcing here, and the entry's Vulnerability paragraph ("where the model-identity step is A1's own inference") inherits the under-claim. The identity is also consistent with the release's own declaration: state-spaces/mamba2-1.3b `config.json` (FULL FILE, WebFetch #4) gives `d_model` 2048, `n_layer` 48, `vocab_size` 50277, `ssm_cfg: {layer: "Mamba2"}`; mamba2.py defaults (lines 40–45) `d_state=128, d_conv=4, expand=2, headdim=64, ngroups=1`, so nheads = 2·2048/64 = 64 = H, headdim 64 = P, d_state 128 = N.

4. Unit conversion and ratio. "MY ARITHMETIC: nominal bits (fp32…) = 48 × 2.1 MB = 100.8 MB = 8.06 × 10^8 bits; in bf16 … 4.03 × 10^8 bits" and "≤ 69,632 / 4.03 × 10^8 ≈ 1.7 × 10^-4 (bf16) or ≤ 8.6 × 10^-5 (fp32)" — OWN, labelled; exact finite computation; re-run below and reproduced.

5. Consequence. "Consequence (MY REASONING ABOUT THE CLAIM'S LOGIC): on the declared frame the 'fraction of nominal capacity realized' is a number about the prefix ladder, not about the model's state code. … the record's dichotomy … cannot be reached by any observation the frame permits." — OWN, labelled.

**The sentence where A1 says which:** Recommended verdict: "The leg is arithmetic on printed numbers plus one elementary inequality from the record's own definition, labelled as mine throughout; the model-identity inference for GHOST's 2.1 MB figure is mine and is stated."

**Which kind is it?** Steps 1–4 are an exact finite computation on declared/printed quantities (one inequality from the record's own definition; two printed strings; a release's config integers), and re-running it from the primaries reproduces every figure — and strengthens it, since step 3 turns out to be printed rather than inferred. Step 5 is NOT a computation: it is a reading of the record's logic — that Gate 3's diagnostic use of the fraction makes the fraction terminal, so a pre-pinned fraction makes the question trivial (attack 1) and its discriminating range a false presupposition (attack 4). A2 performed the same computation and filed the same consequence under attacks 6 and 8. So: the NUMBER is its own support; the FILING that makes A1's grade Unresolved rather than Partial is the reader's own reasoning, and A1 labelled it as such. A1 also anticipated the cap: "If a verifier holds that an arithmetic leg is 'own inference' and caps attack 4 at Partial, attack 1 still stands on the same numbers" — my own observation: attack 1 rests on the identical five-step leg, so whatever cap applies to the leg applies to both attacks alike; the fallback does not escape it.

**Where the rules sit (checked):** LEDGER.md line 26 carries "A figure the adversary derives itself must be labelled as its own arithmetic and must carry the source's stated uncertainty through. A kill that cannot be sourced is Partial at best, never Unresolved" and "treat a multi-leg kill whose load-bearing leg is your own reasoning as Partial." LEDGER.md does NOT carry the exact-finite-computation exemption; that sentence lives in ledger/batches/2026-10-28-2208.md line 61 ("The rule to carry forward is about the read level and independence of a kill's support … and a computation is its own support") and JUDGE-COMPUTE.md line 3. Grep of LEDGER.md for "finite computation", "its own support", "re-run" returned nothing.

---

## (3) Attack 4 (presupposition failure): which presupposition, and did A2 address the same one?

**A1's false presupposition, in A1's words (clause C5):** "'Nominal capacity = state dimension × numeric precision' is a scale the realized bits can approach, so the fraction discriminates between coding regimes — the record's Gate 3 argues from 'a few percent' versus 'near 1'." Graded "FALSE by arithmetic on numbers printed in a source I opened, under the candidate's own numerator definition." A1 considered and rejected the measurand exemption for it: "The one legitimate save — that the question *reports* the contested clause as a measurand — does not apply: the fraction's range is assumed in the significance argument, not measured as a share-of-failures."

**A2's attack-4 clauses:** seven, numbered. The only FALSE one that A2 says bites is (7): "*the Arora/Jelassi bound is tight enough that a realized figure bears on it* — **FALSE on my arithmetic**: at every feasible L the counting bound is slack by 3–4 orders of magnitude". A2's response: "Clause (7) is the only one that bites, and it is a **motivation** clause, not a clause the question cannot be asked without." A2 invoked the measurand exemption for P1 and R1 (decoder-truth gap; hybrid denominator), not for the fraction's range.

**Same presupposition?** No. A1's C5 is about whether the FRACTION's attainable range discriminates coding regimes (Gate 3's dichotomy read as a presupposition of the question). A2's (7) is about whether the Arora/Jelassi BOUND is tight enough to be informed by a realized figure (Gate 0's motivating-gap anchoring). They share one arithmetic ground and are different propositions. A2 DID address A1's proposition — but under attack 5 ("every attainable outcome is 'a tiny fraction', so no result can discriminate the two states of the world Gate 1 says it discriminates"), attack 6 ("**both arms are arithmetically unreachable** at the declared ladder") and attack 8 (limb B "is **limb A multiplied by a known constant**") — never as an attack-4 clause. The entry's row 4 ("A2 grades the same clause (7) FALSE but calls it a motivation clause") conflates the two propositions; what is the same is the arithmetic, not the clause.

A2's "0.039% vs 0.0005% is a factor of 78" (attack 1 response): the 0.039% is the Falcon ceiling at L=4096; the 0.0005% has no stated origin in the log and reads as an illustrative lower value — my reading, flagged as such.

---

## (4) Depth checks

- A1: "DEPTH CHECK (Jace, 2026-10-28): **Pass**" on its own restatement — object ("the recurrent state tensor a trained sub-quadratic language model produces while running on an input"), deletion, rows, clause check (considered clause (c), rejected). Returned Pass.
- A2: "DEPTH CHECK (Jace, 2026-10-28 rule) — **PASS**" on its own restatement — object ("the recurrent state tensors of trained sub-quadratic language models — how much of a prefix the running computation still carries in them"), deletion, rows, clause check (tested (c) against the Falcon config as an instance). Returned Pass.
- Record: Gate 0 Depth, line 16: "both tests re-applied to the wording as submitted, then to the Gate 1 reformulation"; line 47: "The Depth block was re-applied to this reformulated wording: object, deletion and rows tests pass unchanged." Pass both times.

**Count:** three agents, FOUR applications (record × 2, A1 × 1, A2 × 1), all Pass. The entry's "Depth passed all three re-applications" is correct as a count of agents and short by one as a count of applications. Confirmed schema defect (A2's catch, verified on record lines 16–22 and 47): the record's Depth block has Object, Deletion, Rows, Clause check, Variation check and `depth_pass = true`, and NO `Terminal estimand:` line, which LEDGER.md line 80 requires of the candidate's DEPTH block. Neither adversary's check names a terminal estimand either, but LEDGER.md line 146 asks the adversary only for the two tests plus Pass/Fail, so that is not a defect of the logs.

---

## (5) Disguise counts and vocabularies

**Floor:** LEDGER.md line 24: "it must search at least 8 new queries for the Disguise attack in vocabularies Gate 2 did not try."

**A1:** 9 searches = 8 Disguise (q1–q8) + 1 identification (q9, Dambre). Floor met on count. Vocabularies: reservoir short-term/linear memory capacity (ESN, Jaeger); Mamba hidden-state inversion/privacy; rate–distortion/lossy context compression; fast weights/Hopfield/Gardner storage capacity; Chinese; LSTM decoding-past-tokens/mutual information/information bottleneck/predictive information; DeltaNet/test-time-regression memory capacity; "state utilization"/"effective state size"/"effective rank"/information redundancy.

**A2:** 9 searches = 8 Disguise (q2–q9) + 1 identification (q1, 2609.07681). Floor met on count. Vocabularies: echo-state short-term memory capacity/memory function applied to Mamba; text-embedding inversion (vec2text) bits recoverable; "effective state size" memory utilization; historical RNN capacity bits per parameter (Collins et al.); Chinese; LM memorization bits per parameter; state quantization/state-cache compression; control-theory observability/input reconstruction.

**Vocabulary-novelty against Gate 2's 11 (my own assessment, not a log finding):** A2's q5 and q7 use Gate 2 q8's "bits per parameter" vocabulary and returned the two papers Gate 2 had already returned there (1611.09913, record line 63/122; 2505.24832, line 63) — re-treads by vocabulary and by return. A1's q6 shares Gate 2 q8's "mutual information between hidden state and input" core. A1 q1 and A2 q2 are the same field as Gate 2 q6 (reservoir computing) under a different term (memory capacity vs information processing capacity). Everything else is new vocabulary. If the judge counts strictly, A2 has 6 clean new vocabularies and A1 7; on count alone both have 8.

**Covered between them:** reservoir memory capacity; inversion (state and embedding); rate–distortion; Hopfield/fast-weight capacity; Chinese; information bottleneck/predictive information; DeltaNet; state utilization/effective state size/effective rank; bits per parameter (historical and memorization); state quantization; control-theory observability.

**On-point vocabularies NEITHER tried** — the words the information-theory and reservoir-computing literatures use for "how much about the input is recoverable from the state":
- V-information / "usable information" under computational constraints (Xu et al. 2020) — the formalisation of "information recoverable by a declared decoder family", i.e. the candidate's own numerator.
- Minimum-description-length / codelength probing (Voita & Titov 2020) — "bits extractable from a representation" in NLP probing.
- Active information storage / information dynamics (Lizier) — "how much of the past is stored in the state" in bits.
- Fisher memory curve / Fisher memory matrix (Ganguli, Huh & Sompolinsky 2008) — the reservoir field's input-recoverability measure beside Jaeger's memory capacity.
- Computational mechanics: statistical complexity, excess entropy, crypticity (Crutchfield) — stored information about the past in bits.
- State entropy / bits per state element / effective bit-width of the state.
- Channel-capacity framing of the recurrence; neuroscience "bits of stimulus information" neural decoding.

**I ran the first five as one sweep each (5 searches, all spent); returns at title level, NOT opened unless stated:**
- S1 (V-information): no V-information paper at all; 2512.15653 (record Prior 1) at three routes = one document; otherwise Mamba explainers and off-point papers (2411.06968; 2024.wmt-1.111; Nature s41598-025-87574-8; 2025.acl-long.76 "The Hidden Attention of Mamba Models"; 2025.ijcnlp-long.138 "Differential Mamba").
- S2 (MDL probing): 2512.15653 again; a secondary "Evaluating Neural Representations via Minimum Description Length" page (not resolved to its paper, not opened); 2503.18970 S4 survey; explainers. No MDL probe on an SSM state.
- S3 (active information storage / Fisher memory): arXiv:2104.07454 "Memory Capacity of RNNs with Matrix Representation"; arXiv:1309.1524 (also Gate 2 q6's return); arXiv:2305.01457 "Memory of recurrent networks: Do we compute it right?"; ICML 2026 poster 62823 "Information dynamics and Memory in Neural Networks through Fisher Information Diffusion" (+ slides); arXiv:1506.06602; PMC2596211 (blocked route; identity not established — likely but not confirmed Ganguli et al. 2008); ESANN es2012-189 (also A1 q1's and A2 q2's return). None by title about a trained LM's state.
- S4 (bits per element / state entropy): 2609.07681; 2411.11843 Bi-Mamba (A2 q8's return); **arXiv:2606.10932 "Density Field State Space Models: 1-Bit Distillation, Efficient Inference, and Knowledge Organization in Mamba-2" (Shinde; NEW — in neither log; OPENED at section level, WebFetch #5): NOT FOUND for (a) bits of prefix recoverable from the state, (b) state information content/MI/entropy in bits, (c) realized/nominal or utilization fraction, (d) bits per state element; evaluates Mamba-2 1.3B only; prints compression (278 MB), perplexity 14.3 → 49.2, accuracy, throughput; its "fixed SSM state (524 KB)" (§4.1) is a byte size.** Also 2512.15653, GHOST 2602.11408, ICML 2026 slides 64537 (unidentified).
- S5 (computational mechanics): Crutchfield-school papers only — 0902.1209 (three routes), 1108.1510 (two), 1012.0356 (two), PRL 103 094101; par.nsf.gov/10204733 (unidentified); 2020.scil-1.11 (SCiL 2020, title not shown, not opened). None about SSM/Mamba states.

So the named gaps are real (neither log tried them) and, at one sweep each, none surfaced a prior printing the candidate's quantity for a trained recurrent LM; one new population-matching document was opened and does not print it. One sweep per vocabulary is not absence; it is five unrun second sweeps.

---

## Arithmetic re-run from the primaries (my own; every input named)

**A2's leg, from tiiuae/falcon-mamba-7b config.json (FULL FILE):** `hidden_size` 4096, `intermediate_size` 8192, `state_size` 16, `conv_kernel` 4, `num_hidden_layers` 64, `vocab_size` 65024, `torch_dtype` bfloat16, `expand` 16 — every integer as A2 reported, including the `expand: 16` vs `intermediate_size: 8192` inconsistency.
- ssm 8192×16 = 131,072; conv 8192×4 = 32,768; per layer 163,840; ×64 = 10,485,760 elements; ×16 bits = 167,772,160 bits (= 20.0 MiB).
- log2(65024) = 15.98868. Ceilings: L=16 → 1.525e-6; L=64 → 6.099e-6; L=256 → 2.440e-5; L=1024 → 9.759e-5; L=4096 → 65,489.7 bits / 167,772,160 = 3.903e-4. L for ratio 1: 10,493,181 tokens.
- Alternative reading expand=16 (d_inner 65,536): nominal 1.342e9 bits; ceiling at L=4096 4.879e-5. Matches A2 (3.90e-4; 1.5e-6; 1.05e7; 4.9e-5).

**A1's leg, from GHOST Appendix A (printed: Mamba 2-1.3B, H=64, P=64, N=128, "2.1 MB per layer in float 32", "approximately 100 MB across 48 layers") and state-spaces/mamba2-1.3b config.json (`n_layer` 48, `d_model` 2048, `vocab_size` 50277) with mamba2.py defaults (`d_state` 128, `d_conv` 4, `expand` 2, `headdim` 64, `ngroups` 1):**
- ssm_state/layer = 64×64×128 = 524,288 elements ×4 B = 2,097,152 B = 2.097 MB (GHOST: 2.1 MB); ×48 = 100.7 MB (GHOST: ~100 MB; A1: 100.8 MB).
- ssm-only nominal: fp32 8.053e8 bits (A1 8.06e8); bf16 4.027e8 (A1 4.03e8).
- conv_state/layer = d_conv × (d_inner + 2·ngroups·d_state) = 4 × 4,352 = 17,408 elements = 3.3% of ssm_state (A1: "a few percent").
- A1's numerator bound 4096×17 = 69,632 bits → bf16 ssm-only 1.729e-4 (A1 1.7e-4); fp32 8.647e-5 (A1 8.6e-5); L=16 → 6.76e-7 (A1 ≤7e-7); L for 0.5 → 1.18e7 (A1 ~1.2e7).
- With the actual vocab 50277 (log2 = 15.6176) and ssm+conv: bf16 ceiling at L=4096 = 1.538e-4; fp32 7.688e-5.

**Same-kind check:** both sides of every ratio are in bits; the numerator is the maximum the record's own estimator can return (the prefix entropy) and the denominator is numel × dtype width — and that pairing is the record's own definition of the headline fraction (line 40), not the adversaries' construction. The two models' ceilings at L=4096 differ by 2.5× (Falcon 3.9e-4 vs Mamba2-1.3B 1.5e-4) because Falcon-Mamba-7B (Mamba-1, d_state 16) carries a SMALLER recurrent state, 1.68e8 bits, than Mamba2-1.3B (d_state 128), 4.16e8 bits; both releases are inside the candidate's declared population, and the larger ceiling, 3.9e-4, is the one the entry's row 1 quotes.

---

## Brief errors

1. "The ledger's rule is that a kill whose load-bearing leg is the reader's own reasoning is Partial at best — unless it is an exact finite computation, which is its own support." The first half is LEDGER.md line 26. The exemption is NOT in LEDGER.md; it is a 2026-10-28 batch note's "rule to carry forward" (ledger/batches/2026-10-28-2208.md line 61; JUDGE-COMPUTE.md line 3). Whether it binds here is the judge's call; the brief presents it as codified.
2. "adversary 1's claim is in effect that the answer is derivable in a page from the prefix-entropy inequality." A1's claim is narrower: the headline FRACTION's order of magnitude (an upper bound) is derivable in a page; A1 concedes limb A "is not trivial and nobody opened prints it". The brief's "the answer" over-scopes A1.
3. Nothing else in the brief is wrong about the record; "without seeing adversary 1's log" is A2's own statement and could only be confirmed from it.

## Citation and entry corrections (the entry, not the brief)

1. Author order for arXiv:2609.07681. The arXiv abstract page (WebFetch #3) lists: Yuval Koren, Assaf Ben-Kish, Raja Giryes, Lior Wolf, Itamar Zimerman; submitted 2026-09-07, v1 only. A1's order is correct; A2's "Zimerman, Koren, Ben-Kish, Giryes, Wolf" (claimed "from front matter (F2)") is not the abstract page's order, and the entry carries A2's order in both its nearest-prior (3) and its row-2 text. I did not read the PDF's front matter; the abstract page is arXiv metadata.
2. Entry, Vulnerability paragraph: "where the model-identity step is A1's own inference" — the identity is printed in GHOST Appendix A ("For Mamba 2-1.3B with H = 64, P = 64, N = 128, this is … 2.1 MB per layer in float 32"). The leg is more sourced than A1 and the entry say.
3. Entry row 4: "A2 grades the same clause (7) FALSE" — A2's (7) (Arora/Jelassi bound tightness) is a different proposition from A1's C5 (the fraction's discriminating range); same arithmetic, different clause; A2 addressed C5's proposition under attacks 5, 6 and 8.
4. Entry Status line: "Depth passed all three re-applications" — three agents, four applications (the record ran it on both wordings).

## Bearing (no verdict recommended)

The two logs do not disagree about any fact: they derive one exact ceiling from two independent primaries and file its consequence under different attack numbers, and the ledger's fatality rule turns on the number of the attack. The numeric leg re-runs exactly from the primaries and is better sourced than either log claimed (the model identity is printed). The step that makes A1's grade Unresolved rather than Partial — that the pre-pinned fraction makes the question trivial and its discriminating range a false presupposition, rather than making Gate 3's dichotomy void — is a reading of which limb is terminal, labelled by A1 as its own reasoning, and the record's Depth block omits the `Terminal estimand:` line that would have settled it. On attack 2 the readers had different documents and reached the same grade. Both met the Disguise floor on count, with two of A2's and one of A1's sweeps re-treading Gate 2's vocabulary by my assessment; the vocabularies neither tried are named above, and one sweep each in five of them surfaced no prior printing the quantity, with one new document opened and found not to.
