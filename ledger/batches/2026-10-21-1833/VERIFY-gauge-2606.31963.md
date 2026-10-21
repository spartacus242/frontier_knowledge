# VERIFY — arXiv:2606.31963 (gauge / signed-permutation coordinate transport)

## CLAIM

As the ledger entry cites it: arXiv:2606.31963, "Signed-Permutation Coordinate Transport for
RMSNorm Transformers". Adversary 2 reports opening it. Sub-claims handed to me:

- (a) the identifier exists and carries that title;
- (b) two strings are the paper's own words: "permutation-only alignment is symmetry-incomplete
  for RMSNorm models" and "coordinate names are reproducible only relative to an explicit gauge";
- (c) the paper defines a top-k overlap metric by activation magnitude, with some k;
- (d) whether it prints any CROSS-SEED overlap figure for largest residual-stream dimension
  indices in two independently initialised runs of one recipe, or whether the only cross-seed
  figure is a per-coordinate sign agreement (~50% mismatch, 10M params, d=256);
- (e) what the paper measures;
- (f) in what regime, and whether it says anything about coordinate identity across
  independently seeded runs.

## READ LEVEL

**Full text** (PDF, v1), via https://arxiv.org/abs/2606.31963 then
https://arxiv.org/pdf/2606.31963. Abstract page served; PDF served and was read through the
summariser across four prompts, including appendices (Appendix H reached, Appendix O not
served in the extracted content). No route refused; no searches needed. 5 fetches, 0 searches.

All quotations below are **as served by the summariser from the PDF**. Multi-fragment strings are
labelled as reconstructions with the fragment count, assembled only from ordered consecutive
returns overlapping at the junction.

## WHAT THE SOURCE SAYS (quotations as served)

### (a) Identity — confirmed

Front matter, page 1 of the PDF and the abstract page:

- Title: **"Signed-Permutation Coordinate Transport for RMSNorm Transformers"** — exactly the
  title the entry quotes.
- Author: **John Sweeney**, sole author. Affiliation **Sideplane AI**
  (john.sweeney@sideplane.ai; https://sideplane.ai).
- arXiv ID **2606.31963v1**; submitted **2026-06-30**; version v1, 2026-06-30.
- Subjects: **cs.LG, cs.CL, stat.ML**.
- No date printed on page 1 itself.

The entry quoted no author list, so there is nothing to contradict; the author is recorded here
from the front matter rather than from any short form.

### (b) The two strings — both verbatim, both in the ABSTRACT

**String 1: "permutation-only alignment is symmetry-incomplete for RMSNorm models"** — appears
verbatim. Its full sentence, as served:

> "Thus permutation-only alignment is symmetry-incomplete for RMSNorm models."

Clause on the left: the sentence opens with **"Thus"**, i.e. it is a conclusion drawn from the
preceding sentence, which (as served, paraphrased by the summariser) states that the native
discrete gauge depends on architecture — LayerNorm residual charts have permutation gauge
`S_d`, while **RMSNorm charts with generic per-channel gain** have signed-permutation gauge
`B_d`. Clause on the right: the next sentence introduces sign-marginalized Hungarian matching
and the structural accuracy ceiling of raw signed-correlation matching in the
decorrelated-coordinate case.

So the string is accurate, but the paper's own sentence is inferential and inherits the premise
"generic per-channel gain". Detached from that premise it reads as an unconditional property of
RMSNorm models, which is not what the sentence does.

**String 2: "coordinate names are reproducible only relative to an explicit gauge"** — appears
verbatim, as the **final sentence of the abstract**. Reconstruction from **2 consecutive
fragments**, verified by the overlap "coordinate names are":

> "Finally, we give gauge-sweep audits for indexlevel interpretability claims: coordinate names
> are reproducible only relative to an explicit gauge."

Clause on the left: the string sits after a **colon**, as the upshot of "gauge-sweep audits for
index-level interpretability claims". Clause on the right: none — end of abstract. Preceding
sentence concerns stateful training (signed transport of AdamW state preserves the resumed
trajectory, permutation-only state transport diverges).

Note "indexlevel" is **as served**: the PDF extraction has lost the hyphen in "index-level". I
reproduce the damage rather than correct it.

A near-identical formulation appears in the **conclusion** per the abstract-page summary
("index-level interpretability claims are reproducible only relative to an explicit gauge"), and
Section 6 is headed **"6 Gauge audits expose coordinate non-reproducibility"**. The abstract
formulation is unhedged and carries no citation.

### (c) Top-k overlap metric — DEFINED, k = 10

Appendix H "Experimental details", under the run-in bold heading **"Evaluation metrics"** (before
H.1 and H.2), in prose with **no equation**. Reconstruction from **2 consecutive fragments**,
overlap "activation magnitude with":

> "Top-k overlap counts shared indices between top-k coordinates by activation magnitude with
> k=10."

So: yes, defined by **activation magnitude**, with **k = 10**. Sentence before defines logit error
("the maximum absolute difference in output logits between original and gauge-transformed
models, with threshold ~10^-4 for gauge invariance"); sentence after begins the linear-CKA
definition, which by contrast is given as a formula. The paper's own treatment is therefore a
one-line prose definition, lighter than its neighbours.

**Printed values:** no number anywhere is **labelled** "top-k overlap". k=10 counts do appear in
**Table 8** (gauge audits) under other labels — "top coords." and "top attributions": raw
coordinates 0/10 top coordinates and 0/10 attributions, versus gauge-fixed 10/10 and 10/10; also
0/2 → 2/2 BERT knowledge neurons. Those come from **gauge-transformed versions of the same
model**, not from independent runs.

### (d) Cross-seed overlap of largest residual-stream indices — NOT PRINTED

The paper prints **no** percentage or count of shared top-k residual-stream indices between two
independently initialised runs. Confirmed on a direct, separately asked question.

The only quantity measured on **independently initialised** models is per-coordinate **sign
mismatch**, in **Section 5 "Coordinate-preserving merging"**, in **running prose** (not a table
cell or caption). Reconstruction from **4 consecutive fragments**, junction overlaps
"two RMSNorm transformers", "sign mismatch without", "75% barrier reduction":

> "In the 10M independent-seed experiment with no basis change, two RMSNorm transformers trained
> from different seeds develop about 50% sign mismatch without an imposed gauge, and $B_d$
> alignment gives a 75% barrier reduction versus unaligned and a 37% relative improvement over
> $S_d$ ."

- Hedge: **"about"** 50%. No uncertainty interval, no n.
- Model: custom **10M-parameter** Llama-style transformer, **4 layers, d=256, RMSNorm** — the
  d=256 figure is **not in that sentence**; it is in Appendix H under "Small-scale and other
  architectures". Number of seeds/pairs not stated beyond "two".
- Companion numbers, **Table 7** (merge barriers, 10M RMSNorm independent seeds): **1.68
  unaligned / 0.66 S_d / 0.42 B_d**. The "75%" and "37%" in the sentence are the author's own
  conversions of those barrier numbers.
- Sentence before, reconstruction from **3 consecutive fragments** (overlaps "and 1.1B rows",
  "at production and"):

  > "The 10M row is a small-scale natural independent-seed sanity check; the 7B and 1.1B rows are
  > exact-symmetry tests that isolate the sign variable at production and mid scales."

- A second occurrence of "sign mismatch" is in **Section 1 (Introduction)**, reconstruction from
  **3 consecutive fragments** (overlaps "appears between seeds", "improves the barrier"):

  > "In independently trained 10M-parameter RMSNorm transformers, sign mismatch appears between
  > seeds without an external basis change, and signed alignment improves the barrier from 0.66
  > to 0.42 over permutation-only."

  This formulation is **unhedged** and **omits the ~50% figure**; it carries no citation. Section 5
  also speaks of "destructive sign mismatch" for the Llama-2-7B experiment.

So the entry's fallback description in (d) is correct: the only cross-seed figure is a
per-coordinate sign quantity, about 50% mismatch, on a 10M-parameter d=256 RMSNorm pair, printed
in Section 5 prose (with the underlying barriers in Table 7).

### (e) What the paper measures, in its own words

- **Unit of analysis:** residual-stream **coordinates** under the signed-permutation gauge `B_d`,
  and the artifacts indexed by them — steering vectors, SAE features, LoRA updates, optimizer
  state, top-k sets. From the abstract, as served: "We then make coordinate-preserving transport,
  rather than function-level merging, the primary object"; the cross-run method is "composing
  saved-checkpoint local $B_d$ gauges along same-base fine-tuning trajectories".
- **Endpoints:** permutation-recovery percentage; max absolute logit error (threshold ~10^-4);
  SAE NMSE; steering effect size (%); adapter accuracy and "gain preserved" (%); merge barrier
  height (peak above chord); held-out logit relative MSE.
- **Comparators:** direct endpoint matching; permutation-only `S_d` transport; endpoint-via-base
  and hybrid-via-base; unaligned merges; raw coordinates versus gauge-fixed.
- **Estimand:** recovery of a **recorded ground-truth coordinate correspondence from a randomly
  sampled `B_d` gauge**, plus behaviour preservation under exact reparameterization.

**Headline numbers and what they are over.** Table 4, **Qwen2.5-1.5B** (RMSNorm, 28 layers,
d=1536), at **1500 steps**: endpoint **60.3 ± 32.6**, transport-via-base **91.1 ± 8.7**,
endpoint-via-base **11.4 ± 3.6**. These are **permutation-recovery percentages of residual
coordinates over 18 run pairs** (9 "cross-seed", 9 cross-dataset). The 9 "cross-seed" pairs are
**different fine-tuning seeds from a shared base**, not independent initialisations, and the
recovery is scored against a **recorded** sampled gauge.

Other experiments as printed: gauge invariance (Table 2) max logit errors 1.1e-4 (Qwen2.5-7B,
d=3584), 3.0e-5 (Llama-3.1-8B, d=4096), 8.6e-5 (TinyLlama-1.1B, d=2048), 2.3e-5 (BERT-base,
LayerNorm), 7.6e-5 (T5-small), 4.3e-6 (ViT-B/16). Steering (Table 5, one Qwen WikiText cross-seed
evaluation pair): sentiment `S_d` 17.2% vs `B_d` 95.8%; refusal effect `S_d` -32.2% vs `B_d`
+150.5%. SAE (TinyLlama-1.1B) NMSE `S_d` 1.08 vs `B_d` 0.004. Optimizer resume (Qwen2.5-0.5B,
AdamW, fp32) held-out logit relative MSE `B_d` 5.30e-10 vs `S_d` 3.50e-3, ratio 6.6e6. Refusal
reanalysis (Llama-2-7b-chat-hf): ablation drops refusal 20/20 → 3/20 on 20 harmful validation
prompts, cosine 0.984 with the released direction.

### (f) Genre

**Primary methods-and-experiments paper** with a theoretical component (Proposition 4.1 and the
gauge/chart framing) plus a **reanalysis** of someone else's refusal-direction result
(Llama-2-7b-chat-hf, cosine 0.984 with the released direction — that direction is another
group's, and the paper is re-examining it, not establishing it). Not a review, protocol,
guideline, editorial or column.

## REGIME

**What it establishes, and where.** The gauge claim is for **RMSNorm residual charts with generic
per-channel gain**, whose discrete gauge group is the signed permutations `B_d`; LayerNorm /
T5LayerNorm models (BERT-base, ViT-B/16, T5-small) appear as **gauge-invariance controls only**.
Scales span roughly **10M to 8B** parameters (Appendix H).

The decisive regime split is between two kinds of experiment, and the paper states it itself:
the 7B and 1.1B results are **"exact-symmetry tests that isolate the sign variable"** — a known
random `B_d` gauge is applied and then recovered — while the only **natural** independent-seed
evidence is explicitly **"a small-scale natural independent-seed sanity check"** at
**10M params, 4 layers, d=256**. Nearly every large headline number (91.1%, the Table 2 logit
errors, the Table 5 steering and SAE contrasts, the Table 6 optimizer ratio, the Table 8 audit
counts) is recovery-of-an-imposed-or-recorded gauge, not a measurement of what two
from-scratch runs naturally share.

**On independently seeded runs.** The paper does speak to this, but as a **negative theoretical
result**, not an empirical overlap measurement — Section 4, **Proposition 4.1**: "no canonical
coordinate transport between independently specified parameterizations" (continuing "exists from
function-level information alone"). Also Section 4: "pairwise high-scoring matches alone are
therefore not transport, only candidate pieces of an atlas." And Section 3 (probe budgets):
natural alignment between independently or differently trained models "is reported as stability
against a large-probe reference rather than as exact accuracy." Section 6 opens: "This section is
not a claim that coordinates are always the right units; it is an audit for pipelines that output
coordinate names."

So the paper's position is that cross-independent-run coordinate identity is **not canonically
defined** from function-level information and is reported only as stability. It does **not**
assert that empirical cross-seed index identity is meaningless, and it does **not** measure it.

**Does the claim handed to me sit inside that regime?** Sub-claims (a), (b), (c) and the (d)
fallback: yes. Any use of this paper as evidence about how much two independently initialised runs
share at the index level: **only** via the 10M/d=256 sign-mismatch sanity check — nothing at
production scale, and no top-k index overlap at all.

## DEFECTS FOUND

1. **Both quoted strings are abstract sentences, not results-section findings.** They are the
   paper's framing and its concluding slogan. Checked alone and unprimed, both are verbatim; but
   anyone citing them as the paper's demonstrated result is citing its claim, not its measurement.
2. **String 1 is cut before its premise.** The paper's sentence begins "Thus" and follows directly
   from "RMSNorm charts **with generic per-channel gain** have signed-permutation gauge `B_d`".
   Quoted bare, "permutation-only alignment is symmetry-incomplete for RMSNorm models" reads as
   unconditional. The words are exact; the conditioning is lost at the left-hand cut.
3. **String 2 is cut at a colon.** Its scope in the paper is "index-level interpretability claims"
   examined "gauge-sweep audits", stated as the audits' upshot. Lifted alone it generalises.
   Also, the PDF serves "indexlevel" — extraction damage, reported not corrected.
4. **Top-k overlap is DEFINED, never printed under its own name.** k=10, one prose line in
   Appendix H, no equation, while the neighbouring CKA metric gets a formula. The k=10 counts that
   do appear (Table 8: 0/10 → 10/10) are labelled "top coords." and "top attributions" and are
   measured on **gauge-transformed copies of one model**. A citation to this paper for a top-k
   overlap *evaluation* across runs is a citation to a definition.
5. **No cross-seed top-k index overlap exists in the paper at any scale.** Reading 91.1% as such a
   figure is a double regime error: it is permutation recovery against a **recorded** gauge, and
   its "cross-seed" pairs are **fine-tuning seeds off a shared base**, not independent
   initialisations. 60.3% is the same quantity for endpoint matching, with a ±32.6 spread that
   nearly swallows the gap — the stated uncertainty must travel with the number.
6. **The ~50% sign-mismatch figure is hedged, small, and un-intervalled.** "about 50%", running
   prose, from a single 10M-parameter 4-layer d=256 pair the author himself calls a sanity check;
   no n, no interval, d=256 stated only in Appendix H. The Introduction restates it **unhedged and
   without the 50% figure**, giving only the 0.66 → 0.42 barrier — two formulations, the stronger
   one less informative. The "75% barrier reduction" and "37% relative improvement" are the
   author's own conversions of the Table 7 barriers (1.68 / 0.66 / 0.42); the table prints the
   barriers, the sentence prints the percentages.
7. **The paper's statement about independent runs is a proposition, not a measurement.**
   Proposition 4.1 denies a *canonical* transport from function-level information. That is silent
   on how much two seeds empirically share. A ledger entry that treats Proposition 4.1 as evidence
   that cross-seed index identity was measured and found absent would be reading a theorem as a
   result.
8. **Appendix O not served.** The limitations / broader-impacts appendix is referenced in the text
   but did not come back in the extracted content, so any scale or architecture caveat stated only
   there is unread here. Within what was served, the stated limitation is that FFN transport "is
   less stable over long horizons".

## ROUTES THAT FAILED

None. Both https://arxiv.org/abs/2606.31963 and https://arxiv.org/pdf/2606.31963 served on first
attempt. No search was needed, no fetch was refused, no host was blocked, no identifier had to be
converted. Within the read, **Appendix O was not present in the extracted content** — a gap in
the served text, not a failed route. Budget used: 5 of 5 fetches, 0 of 6 searches.

## BEARING ON THE LEDGER ENTRY

- **(a) holds.** The identifier exists, the title is exactly as cited; author John Sweeney
  (Sideplane AI), v1, 2026-06-30. Adversary 2's report of opening it is consistent with the source.
- **(b) holds.** Both strings are verbatim the paper's own words. Qualify both as **abstract**
  sentences, and carry string 1's "Thus … generic per-channel gain" premise and string 2's
  "index-level interpretability claims" scope with them.
- **(c) holds, with a sharpening.** The metric is defined — activation magnitude, **k = 10**,
  Appendix H "Evaluation metrics" — but the paper **defines** it rather than reporting any value
  under that name. If the ledger entry says "defines", it is right; if it says "measures" or
  "reports", it overstates.
- **(d) holds in the fallback form the task anticipated.** No cross-seed residual-index overlap
  figure exists. The only independent-initialisation cross-seed number is **about 50% sign
  mismatch**, 10M parameters, 4 layers, **d=256**, Section 5 running prose, with Table 7 barriers
  1.68 / 0.66 / 0.42 behind it. Record the hedge and the scale.
- **(e)/(f) are now on the record above.** The entry should note that the paper's regime is
  overwhelmingly **exact-symmetry recovery of an imposed or recorded gauge**, and that its only
  natural independent-seed evidence is at 10M/d=256 — so the paper supports a claim about
  *gauge-relative* coordinate naming, and is **silent** on how much two production-scale
  from-scratch runs share at the index level.
