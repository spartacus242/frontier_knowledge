# UQ-20261016-34 — verification of a rejection ground

Claim under check: Schlegel, Yin, Bates et al., "Whole-brain annotation and
multi-connectome cell typing of Drosophila", Nature 634:139-152 (2024)
[doi 10.1038/s41586-024-07686-5] "already answers the candidate question and
publishes the number the candidate says does not exist".

Candidate question: detection limit for a cell-type-to-cell-type connection-weight
difference in a dense whole-brain connectome, **measured by independent
re-reconstruction of the same image volume**.

Verdict: PARTLY_CONFIRMED. Quotes are real; unit is cell-type edges; but the
comparator is a forward noise model, not a re-reconstruction. Leg 1 of the
rejection (the number exists) holds; leg 2 (it answers *this* question) fails.

---

## (a) Are the quoted sentences in the paper, and what unit do they apply to?

Two independent reads (bioRxiv preprint PDF of the same work; published Nature
HTML) both return the sentences. Renderings, as returned:

- Preprint: "On average, 65% of the observed variability of edge weight between
  hemispheres fell within the range" [truncated by the fetch summarizer]
- Nature:  "On average, 65% of the observed variability of edge weight between
  hemispheres fell within the range expected."
- Preprint: "differences in edge weights of +/-30% or less may be entirely due to
  technical noise and should not be over-interpreted."
- Nature:   "differences in edge weights of 30% or less may be entirely due to
  technical noise and should not be overinterpreted."
- Preprint, Discussion, under heading "How do we know which edges are important?":
  "In our hands, a model of technical noise could explain up to 30% difference in
  edge weights."
- Preprint: "the connectome we observe is shaped not just by biological
  variability but also by technical noise"
- Preprint: "observed variability is greater than can be accounted for by
  technical noise"

=> The claim's two quoted sentences are present in substance. The "+/-" and the
hyphen in "over-interpreted" match the preprint rendering; the published
rendering came back without them. Punctuation/hyphenation of the *published*
sentence is UNSETTLED (the fetch summarizer twice asserted a "125-character
limit" and would not emit long verbatim strings). Substance is identical.

"approaching 100% for weaker synapses": the Nature read returned this only as
paraphrase ("The paper adds that this fraction approached 100% for weaker
synapses"). The preprint read did not surface it. NOT verified verbatim;
substance plausible and consistent with Fig. 4I. The quantity is a fraction of
*edge pairs*, so "weaker edges/connections" rather than "weaker synapses".

UNIT — settled, and it is cell-type-level:
- "We use the term "edge" to describe the set of connections between two cell
  types," with weight = "the number of unitary synapses forming that connection."
- Fig. 4I legend: "Fraction of FlyWire left/right edge pairs that fall within the
  5-95% quantiles for the modelled technical noise."
- Model step: "Repeated application of this procedure generated a distribution of
  edge weights between each cell type pair"
=> cell-type-to-cell-type edges, NOT neuron-to-neuron. This happens to match the
unit the candidate asks about, which is in the claim's favour.

## (b) What is the comparator? Forward model or re-reconstruction?

FORWARD MODEL. Confirmed verbatim, from Fig. 4H legend / Results "Interpreting
connectomes" / Methods:

- "the impact of technical noise on a fictive ground truth model was assessed"
- "The raw weight from the connectome for each individual edge is scaled up by
  the computed completion rate"
- "This model was randomly subsampled according to postsynaptic completion rate"
- "synapses were randomly added and deleted according to the false-positive and
  -negative rates"  [rates taken from the cited synapse-detection paper, ref. 64]
- "Repeated application of this procedure generated a distribution of edge
  weights between each cell type pair"
- completion-rate example given (mushroom body): "this ranges from 46% in FlyWire
  right to 77% in hemibrain"
- "which is within the 5-95% quantiles expected due to technical noise alone"

So the pipeline is: observed edge weight -> scale up by completion rate to build a
fictive ground truth -> subsample by postsynaptic completion rate -> add/delete
synapses at the detector's FP/FN rates -> repeat -> 5-95% quantile band. The
*observed* side of the comparison is the FlyWire left-vs-right hemisphere edge
pair. Nowhere is the same image volume re-segmented, re-reconstructed or
re-proofread independently and the two results compared.

Two consequences worth recording:
1. Left vs right within one volume is NOT a technical replicate: the two
   hemispheres are different tissue, so an L/R difference mixes biological
   variability with technical noise. That is precisely why the authors needed the
   forward model to partition them. The +/-30% figure is therefore a
   model-derived band, not a measured repeat-measurement noise floor.
2. My own reading, labelled as mine: if 65% is the average and it "approaches
   100%" for weak edges, then for strong edges the fraction inside the noise band
   must be well below 65% — i.e. the paper's own result says the +/-30% rule is
   conservative for weak edges and does not characterise strong edges. The paper
   itself says the observed variability "is greater than can be accounted for by
   technical noise". No arithmetic of mine is needed for the verdict, and I
   computed no new figures.

=> The candidate's premise (b) is CORRECT: the number is forward-model-derived,
not from an independent re-reconstruction.

## (c) Has anyone published an edge-weight detection limit from independent
## re-reconstruction / repeated independent proofreading of the same volume?

Not found within budget (14 searches). Nearest candidates, and their status:

- Schneider-Mizell et al. 2016, eLife 5:e12059, "Quantitative neuroanatomy for
  connectomics in Drosophila". Abstract (read via the bioRxiv landing page for
  10.1101/026617) states they compared "iterative reconstruction to the consensus
  of multiple reconstructions"; "Omission of individual twigs accounted for 96% of
  errors"; "Thus the robustness of a strong connection to detailed twig anatomy
  was associated with robustness to reconstruction error." That is the right
  *design* (repeated independent reconstruction of the same neurons in one volume)
  but the abstract gives a qualitative association, no edge-weight threshold.
  COULD NOT READ the full text (elifesciences.org PDF returned a JS-disabled
  error page; PMC blocked). So I cannot rule out a quantitative edge-level
  agreement figure inside it. This is "could not read", not "not found".
- "Beyond Agreement: Standardizing Crowdsourced Synapse Annotations through
  Proofreading in EM Connectomics", bioRxiv 2025.09.26.678851 — surfaced in
  search, NOT read. Subject is synapse-annotation agreement, not an edge-weight
  noise floor.
- MICrONS "Proofreading and Data Quality" tutorial page (tutorial.microns-explorer.org)
  — surfaced, NOT read.
- hemibrain (Scheffer et al. 2020 eLife 9:e57443), FlyWire (Dorkenwald et al.),
  MICrONS (Nature 2025 s41586-025-08790-w), H01 — no search hit surfaced a
  published edge-weight detection limit from re-reconstruction. Full texts NOT
  read; budget exhausted. Absence of a search hit is weak evidence.

## Query list (14 searches; 14/14 used)

1. Schlegel Yin Bates "Whole-brain annotation and multi-connectome cell typing of Drosophila" Nature 2024 edge weight technical noise 30% -> found PMC11446831 + metadata mirrors
2. "65% of the observed variability of edge weight between hemispheres" technical noise -> no hit on the exact phrase; unrelated neuroimaging papers
3. biorxiv Schlegel "multi-connectome cell typing" ... "technical noise" edge weight full text -> found bioRxiv full PDF 10.1101/2023.06.27.546055
4. nature.com s41586-024-07686 Whole-brain annotation ... -> confirmed DOI 10.1038/s41586-024-07686-5 via ideas.repec listing
5. inter-proofreader agreement connectome edge weight reproducibility two independent reconstructions same EM volume -> eLife 12059 (Schneider-Mizell), Focused Proofreading (arXiv 1409.1199)
6. "may be entirely due to technical noise" edge weights connectome Schlegel -> no hit on the exact phrase (full texts not indexed)
7. Schneider-Mizell 2016 "Quantitative neuroanatomy for connectomics" independent reconstruction tracer error -> eLife 12059 + bioRxiv 026617v2
8. connectome proofreading variability "independently proofread" same neurons ... edge level -> eLife 12059 again; nothing new
9. MICrONS H01 "inter-annotator"/"inter-proofreader" agreement repeated proofreading -> bioRxiv 2025.09.26.678851; microns-explorer proofreading tutorial; CAVE
10. Scheffer hemibrain eLife 2020 assessment accuracy proofread twice connection weight reproducibility -> eLife 57443 pages, hemibrain preprint; nothing on repeat proofreading at edge level
11. Dorkenwald FlyWire 2022 Nat Methods automated segmentation vs manual CATMAID same FAFB volume -> FFN/local-shape-descriptor papers; nothing on edge-weight agreement
12. connectome "noise floor" detection limit re-proofreading repeated segmentation edge weight 2025 2026 (extended) -> Autoproof, SynAnno, VICE; no detection-limit paper
13. "redundant reconstruction" OR "two independent tracers" OR "repeated proofreading" ... threshold -> eLife 12059 again
14. connectome "technical replicate" independent re-reconstruction same EM volume ... FAFB CATMAID FlyWire edge weight correlation (extended) -> s41586-024-07686-5, MICrONS s41586-025-08790-w, CAVE; no technical-replicate study

No search was refused by a safety classifier.

## Fetch list (6 fetches; 6/6 used)

1. https://www.ncbi.nlm.nih.gov/pmc/articles/PMC11446831/ -> 302 redirect, no content
2. https://pmc.ncbi.nlm.nih.gov/articles/PMC11446831 -> browser-verification interstitial ("Checking your browser..."); COULD NOT READ
3. https://www.biorxiv.org/content/10.1101/2023.06.27.546055.full.pdf -> SUCCESS; source of the edge definition, the noise-model steps and the Discussion sentence
4. https://www.nature.com/articles/s41586-024-07686-5 -> SUCCESS (partial; summarizer refused long verbatim); confirmed 65% and 30% sentences in the published version
5. https://elifesciences.org/articles/12059.pdf -> "JavaScript is disabled" error page; COULD NOT READ
6. https://www.biorxiv.org/content/early/2016/02/17/026617.full.pdf+html -> landing page / abstract only; full text not delivered

Non-counted failures: Bash curl to pmc.ncbi.nlm.nih.gov, www.biorxiv.org and
escholarship.org all failed with "CONNECT tunnel failed, response 403"
(egress proxy host allowlist). `curl .../__agentproxy/status` was denied by the
auto-mode permission classifier (reason: Exfil Scouting) — a permission denial,
not a safety refusal of a literature query.
