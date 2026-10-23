# VERIFY - Reuter 2014 "high probability" quotation: verbatim, but scoped to channel-null cells under a single bursting shock
Checker: fresh context. Budget used: 5 WebFetch, 1 WebSearch. Date 2026-10-22. (Template date as prescribed by the task; this check actually ran 2026-10-23. One additional outbound attempt was made with curl and never connected - CONNECT tunnel 403 at the proxy, reported not retried.)

## CLAIM

The entry carries, for presupposition P2 (lysis is a per-cell observable distinguishable from growth arrest and channel-mediated solute loss):

> P2 lysis a per-cell observable distinguishable from growth arrest and channel-mediated solute loss (partly established - Reuter 2014: lysis "occurs with a high probability, but the precise path differs between individual cells")

Source as the entry cites it: Reuter M., Hayward N.J., Black S.S., Miller S., Dryden D.T.F., Booth I.R. (2014), 'Mechanosensitive channels and bacterial cell wall integrity: does life end with a bang or a whimper?', Journal of the Royal Society Interface 11:20130850, DOI 10.1098/rsif.2013.0850. The entry's read: ABSTRACT, reconstructed from five fragments through the summariser's quotation cap.

This is a fidelity check at the junctions, plus a scope check on the opener.

## READ LEVEL

PARTIAL, and more than the entry had.

- The ABSTRACT: read IN FULL, verbatim, assembled from fifteen ordered consecutive segments served by the summariser from the publisher's own CC BY 3.0 PDF (Aberdeen AURA repository bitstream). Junction-verified; labelled a reconstruction from 15 consecutive fragments.
- Introduction, Methods section 2.5, Results sections 3.1 and 3.2: PARTIAL - short targeted verbatim lines only, returned by the summariser against a directed prompt. I did not read these sections as continuous prose, so I can see no more of their context than the lines below.
- Discussion: NOT READ.
- Figures, tables and any FACS percentages: NOT READ. Consequently I cannot name a number behind "high probability" (see DEFECTS FOUND).

Route that worked: WebSearch located the University of Aberdeen AURA record (authors Reuter, Hayward, Black, Miller, Dryden, Booth); its /full metadata page gave the bitstream URL; WebFetch on https://aura.abdn.ac.uk/bitstreams/50443b5d-1fb9-405d-b648-9325d9dee870/download served the publisher PDF.

Front matter check (authors taken from the repository record and the PDF, not from any short form): Reuter, Marcel; Hayward, Nicholas J; Black, Susan S; Miller, Samantha; Dryden, David T F; Booth, Ian R. J. R. Soc. Interface 11: 20130850, 2014, CC BY 3.0. This matches the entry's citation.

## WHAT THE SOURCE SAYS (quotations as served)

(a) Read level and routes - above.

(b) THE SENTENCE, WHOLE AND AS PRINTED, WITH ITS NEIGHBOURS.

The words appear ONCE in the paper, in the ABSTRACT. Reconstruction from consecutive segments, junctions verified:

Sentence before:
> "Fluorescence-activated cell sorting and electron microscopy complement these studies."

The sentence itself:
> "These analyses show that lysis occurs with a high probability, but the precise path differs between individual cells."

Sentence after:
> "By monitoring the loss of cytoplasmic green fluorescent protein, we have determined that some cells release this protein but remain phase dark (granular) consistent with the retention of the majority of large proteins."

VERDICT ON FIDELITY: the entry's reconstruction is VERBATIM. The string 'occurs with a high probability, but the precise path differs between individual cells' matches the printed sentence word for word, and the entry places "lysis" outside the quotation marks, so the grammatical subject is not misattributed either. There is no bad junction. The five-fragment reconstruction survived.

The two sentences that open the abstract and set the scope (also verbatim, same reconstruction):
> "Mechanogated channels are fundamental components of bacterial cells that enable retention of physical integrity during extreme increases in cell turgor."
> "Optical tweezers combined with microfluidics have been used to study the fate of individual Escherichia coli cells lacking such channels when subjected to a bursting stress caused by increased turgor."

(c) WHAT THE OPENER SCOPES.

"These analyses show that..." is an anaphor. "These analyses" are the ones named in the two preceding sentences: optical tweezers plus microfluidics on "individual Escherichia coli cells LACKING such channels", "subjected to a bursting stress caused by increased turgor", complemented by "Fluorescence-activated cell sorting and electron microscopy". So the clause is scoped to:

- Organism: *Escherichia coli*. Strains named in the paper: FRAG1 and MJF465 (MJF465 is the channel-deletion background; FRAG1 the parent).
- Cell type: cells LACKING mechanosensitive channels - this is the abstract's own words, not an inference.
- Shock: a single hypo-osmotic downshock constituting "a bursting stress". Results 3.1 as served: "grown to mid-exponential phase in LB containing 0.5 M NaCl and subjected to a 0.5 M NaCl hypo-osmotic shock". Methods 2.5 as served: "subject single cells to a hypo-osmotic shock from LB". Results 3.2 as served: "transfer individual cells from a high (approx. 0.5 M NaCl) to low osmolarity solution".
- Timescale: "The time span of these events induced by hypo-osmotic shock varies but is of the order of milliseconds."

The clause ASSERTS the quantity (a high probability of lysis). It does not deny it and does not record a move away from it. But it asserts it for channel-null cells under a single supra-threshold bursting shock. Nothing in the sentence, or in its neighbours, is about repeated or sub-lytic loading, and nothing is about channel-competent cells.

(d) THE ENDPOINT ACTUALLY OBSERVED, AND WHETHER IT IS PER-CELL.

Per-cell: YES, and the abstract says so in its own words - "the fate of individual Escherichia coli cells", "the precise path differs between individual cells", and from Results 3.2 as served, "transfer individual cells from a high (approx. 0.5 M NaCl) to low osmolarity solution".

The endpoint is LOSS OF ENVELOPE / CONTENT INTEGRITY, scored optically per cell, in two classes, both called lysis:
> "By monitoring the loss of cytoplasmic green fluorescent protein, we have determined that some cells release this protein but remain phase dark (granular) consistent with the retention of the majority of large proteins."
> "By contrast, most cells suffer cataclysmic wall failure leading to loss of granularity but with the retention of DNA and overall cell shape (protein-depleted ghosts)."
Results, as served: "Two distinct lytic events were observed."; "'leakers', showed cell lysis in 1-3 s"; "phase-contrast microscopy confirmed that the cell was still retained in the optical trap".

So the endpoint is loss of membrane/wall integrity and loss of cytoplasmic content, not loss of viability. I saw NO colony-forming, regrowth or viability assay in what was served to me; absence here is a fact about my PARTIAL read of the body, not a finding about the paper.

(e) LYSIS vs GROWTH ARREST, AND LYSIS vs CHANNEL-MEDIATED SOLUTE LOSS.

Growth arrest: I found NOTHING. The summariser stated flatly "The paper does not discuss growth arrest", but that is the summariser's negative report over a PARTIAL read, not a verbatim quotation, and I treat it as COULD NOT CHECK rather than as a demonstrated absence. What I can say positively from the text I did see is structural and is enough: the assay is a millisecond-timescale optical-trap observation of a single shock - "The time span of these events induced by hypo-osmotic shock varies but is of the order of milliseconds" - with no growth readout anywhere in the quoted material. An instrument that resolves milliseconds of bursting is not an instrument that scores growth arrest, so this paper cannot be the source that separates the two.

Channel-mediated solute loss: the paper does treat it, at the level of mechanism, as the thing that PREVENTS the failure it is observing. Introduction, as served:
> "MS channels gate on the millisecond timescale to effect large-scale release of solutes"
> "modulate the osmotic (threshold) shock at which cell death occurs"
and the abstract's closing sentence:
> "The data are interpreted in terms of the timing of mechanosensitive channel gating relative to osmotically induced water influx."

Note carefully what the paper's own within-lysis distinction is: GFP-releasing but still phase-dark "leakers" versus "cataclysmic wall failure" ghosts. That is a distinction between TWO LYTIC PATHS. GFP is a ~27 kDa protein; its escape is not channel-mediated osmolyte efflux. So the paper discriminates catastrophic wall failure from a leakier wall failure - it does not offer a measurement that discriminates lysis from intact-channel solute loss as a competing per-cell OUTCOME in the same experiment.

(f) ONE SENTENCE. No - this source establishes that per-cell lysis is observable and classifiable by optical trapping plus GFP loss in channel-null *E. coli* under a single bursting hypo-osmotic shock, which grounds the instrument half of P2 but not the "distinguishable from growth arrest" half, and it does so entirely outside the candidate's regime of repeated sub-lytic downshocks on channel-competent cells.

## REGIME

The source's regime, in its own words:
- Population / unit of analysis: "individual Escherichia coli cells lacking such channels"; "the fate of individual *E. coli* cells". Strains FRAG1 and MJF465.
- Operating condition: "a bursting stress caused by increased turgor"; a single hypo-osmotic downshock, "a 0.5 M NaCl hypo-osmotic shock" from medium at "approx. 0.5 M NaCl"; events "of the order of milliseconds".
- Instruments: "Optical tweezers combined with microfluidics", plus "Fluorescence-activated cell sorting and electron microscopy", plus phase-contrast and GFP fluorescence.
- Threshold / category: binary and sub-binary lysis classes - "leakers" (GFP out, phase dark, granular, large proteins retained) versus "protein-depleted ghosts" (loss of granularity, DNA and shape retained). "Two distinct lytic events were observed."

The candidate's regime (from the entry): single *E. coli* cells in a microfluidic trap, repeated hypo-osmotic downshocks of fixed amplitude EACH BELOW the single-shock lytic threshold, fixed recovery interval, per-cell hazard as a function of cycle index, in a growing arm and a wall-synthesis-inhibited arm.

Does the claim sit inside the source's regime? Only partly, and on the axis that matters least:
- INSIDE: single-cell optical/microfluidic observation of lysis in *E. coli*; per-cell scoring of a lytic endpoint.
- OUTSIDE on amplitude: the source applies a "bursting stress" - supra-threshold by construction. The candidate's whole design is sub-lytic amplitudes. A high lysis probability under a bursting shock says nothing about per-cell lysis scoring under shocks chosen not to lyse.
- OUTSIDE on cycle count: one shock, not a cycle series. No cycle index exists in this paper.
- OUTSIDE on genotype: the quoted probability is for cells LACKING mechanosensitive channels. The candidate does not specify a channel-null background, and channel-competent cells are precisely the ones in which "channel-mediated solute loss" is a live alternative to lysis - the leg of P2 this source is cited for.
- OUTSIDE on growth: the source's readout is milliseconds in a trap; the candidate needs lysis told apart from growth arrest over a recovery interval and a cycle budget, which requires a growth readout this paper does not report in anything I read.

## DEFECTS FOUND

1. NO MISQUOTATION. The five-fragment reconstruction is verbatim and the junctions are clean. The entry also correctly puts "lysis" outside the quotation marks. Whoever assembled it did not break it. This sub-claim comes back clean and should be recorded as clean.

2. THE SCOPE-SETTING OPENER WAS DROPPED, and it matters twice. The cut begins after "These analyses show that lysis". "These analyses" are analyses of "individual Escherichia coli cells LACKING such channels" subjected to "a bursting stress". So (i) the high lysis probability is a property of a channel-deletion background, and (ii) it is a property of a supra-threshold single shock. The entry's P2 gloss - that lysis is distinguishable from CHANNEL-MEDIATED SOLUTE LOSS - is supported by a sentence drawn from cells that HAVE NO CHANNELS to lose solute through. That is a scope inversion, and it is the sharpest defect here.

3. "HIGH PROBABILITY" IS PUBLISHED, NOT QUANTIFIED IN ANYTHING I READ. The abstract ASSERTS a qualitative probability. I can name no number, no numerator class and no denominator for it: I did not read the FACS or microscopy tallies, so I cannot say how many of how many cells lysed, nor whether the denominator is trapped cells, sorted cells or imaged fields. Per the discipline: on my read this source ASSERTS the quantity qualitatively; it is not a quantity I can carry. Anyone wanting a lysis fraction must open Results and the figures - which is the kind of document that could settle it, and it is the same document, so this is not a new-source nomination.

4. THE "GROWTH ARREST" LEG OF P2 IS NOT CARRIED BY THIS SOURCE. The paper's endpoint is loss of GFP / loss of granularity on a millisecond timescale in an optical trap. No growth or viability readout appears in anything served to me. I mark the paper's silence on growth arrest as COULD NOT CHECK (PARTIAL read), but the instrument argument stands independently: a millisecond bursting assay does not separate lysis from growth arrest, because it never observes growth.

5. WITHIN-LYSIS DISTINCTION MISREAD AS A LYSIS-vs-NOT DISTINCTION, if "the precise path differs between individual cells" is leaned on. The paths that differ are two LYTIC paths ("leakers" vs "protein-depleted ghosts"), not lysis versus survival, versus arrest, or versus solute efflux. The sentence's per-cell variability is variability in HOW cells burst.

6. CITATION FRONT MATTER: no correction needed. Authors, year, volume, article number and DOI as the entry carries them match the repository record and the PDF. The only cosmetic point is that the PDF styles the journal "J. R. Soc. Interface"; "Journal of the Royal Society Interface" is the correct full title, so the entry is right. I did not verify the online-publication date (the article carries a 2014 volume-11 citation; an earlier online date is plausible but UNVERIFIED here).

## ROUTES THAT FAILED

- https://royalsocietypublishing.org/doi/10.1098/rsif.2013.0850 - WebFetch, client_error, nothing retrieved.
- https://royalsocietypublishing.org/doi/full/10.1098/rsif.2013.0850 - WebFetch, client_error, nothing retrieved.
- https://royalsocietypublishing.org/doi/pdf/10.1098/rsif.2013.0850 - WebFetch, client_error, nothing retrieved. (Three failures at the publisher host, i.e. the entry's stated route; note the entry nonetheless got the abstract there, so this may be transient rather than a host block. Not probed further.)
- curl to the AURA bitstream - "CONNECT tunnel failed, response 403" at the agent proxy. Per /root/.ccr/README.md this is a policy denial for that tool; NOT retried and NOT routed around. WebFetch then reached the same URL, which is the documented tool-scoped-403 pattern.
- PMC / Europe PMC: NOT ATTEMPTED (hard-blocked here). The search surfaced PMC3869158 for this article; recorded as an identifier to convert, never used as a route.
- The AURA item page also advertised a bitstream at http://localhost:4000/... - a repository misconfiguration, not a route; ignored.

Searches: 1 (WebSearch for the title plus author names, which returned the Aberdeen AURA record). No search was refused by the classifier. Note that the same article surfaced under several of that search's result URLs (ncbi PMC, abdn.elsevierpure.com, aura.abdn.ac.uk item / handle / signposting / aura-test): those are repeated TITLE MATCHES for ONE document and are counted as one source, never as corroboration.

## BEARING ON THE LEDGER ENTRY

NARROW P2, and change the reason it is called partly established. Do not strike the quotation.

- The fidelity worry is answered: the quotation is verbatim, the junctions hold, and the entry attributes the subject correctly. Record that explicitly so the next pass does not re-litigate it.
- But the quotation's scope will not bear the weight P2 puts on it. Rewrite the P2 note so it says what the source actually supports: that per-cell lysis IS an observable - individual *E. coli* cells in optical tweezers plus microfluidics, scored by GFP loss and phase contrast, resolving two distinct lytic paths on a millisecond timescale. That is a real and useful grounding for the candidate's instrument, and it is the strongest thing this source gives the entry.
- Delete from P2's support, on this source, the claim that lysis is distinguishable from CHANNEL-MEDIATED SOLUTE LOSS. The sentence cited comes from cells "lacking such channels"; it cannot discriminate an outcome those cells cannot have.
- Delete from P2's support, on this source, the claim that lysis is distinguishable from GROWTH ARREST. This paper measures no growth in anything I read, and its millisecond trap assay could not.
- Note the amplitude mismatch where P2 is stated: the probability quoted is for "a bursting stress", i.e. supra-threshold. The candidate's regime is sub-lytic amplitudes, and the entry's own R1 (a reproducibly non-lytic-at-cycle-1 but lytic-within-budget band) remains flagged and unestablished. Reuter 2014 does not touch R1.
- A cleaner statement of what P2 now rests on: P2's observability leg is ESTABLISHED by this source for single-shock supra-threshold lysis in channel-null *E. coli*, and the discrimination legs (vs growth arrest, vs channel-mediated solute loss) are UNESTABLISHED by it. Whether that counts as "partly established" overall is the entry's call, but it is partly established on a narrower basis than the entry's current parenthesis implies.
- On the rejection: this does not move the Rejected verdict, and it does not rehabilitate anything. It does mean the entry's rejection leans on C5 at least as narrowly as the entry's own worry suggests, because one of the presuppositions recorded as propped up by Reuter 2014 is propped up only in part. If the record wants P2's discrimination legs supported, the kind of document that would do it is a single-cell time-lapse study with BOTH a lysis readout and a post-shock growth/regrowth readout on channel-competent cells under sub-lytic shocks - not this paper, and I name no specific candidate for it, since naming one I have not opened would be a guess.
