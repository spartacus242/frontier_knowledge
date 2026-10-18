# UQ-20261018-20 — Source read: NCCD 2018 recommendations (Galluzzi et al., Cell Death Differ 25:486–541)

Reader role: first-hand source reader. Date: 2026-10-18.
Source: doi 10.1038/s41418-017-0012-4.

## READ LEVEL (declare first)

**PARTIAL — published version PDF, via summariser (not raw).**

What I read: Introduction; Fig. 1 legend; **Box 1 "Operational definitions"**; and the running-text
sections *Intrinsic apoptosis, Extrinsic apoptosis, MPT-driven necrosis, Necroptosis, Ferroptosis,
Pyroptosis, Parthanatos*. The converted text available to the fetch summariser **stopped mid-sentence
inside Parthanatos** (last visible fragment: "decrease poly(ADP-"; last topic: ARH3/IDUNA and AIF
release).

What I did NOT read: everything after Parthanatos — i.e. entotic cell death, lysosome-dependent cell
death, autophagy-dependent cell death, immunogenic cell death, NETotic cell death and any further
modality sections, **the concluding remarks**, the reference list, and the author-affiliation block.
That is roughly the second half of a 56-page article (486–541).

No unmediated (raw) read was possible: every Bash/curl route was refused by the egress proxy
(see Failed routes). All quotations below are therefore **summariser-mediated**, and I cannot certify
any string as byte-verbatim. Where the summariser reported a quotation as cut short, I say so.

## Failed routes (exact errors)

1. `curl https://www.nature.com/articles/s41418-017-0012-4` →
   `curl: (56) CONNECT tunnel failed, response 403`; proxy status recorded
   `kind: connect_rejected, detail: "gateway answered 403 to CONNECT (policy denial or upstream failure)", host: www.nature.com:443`.
   Per /root/.ccr/README.md this is a policy denial — recorded, not retried.
2. `curl https://api.crossref.org/works/10.1038/s41418-017-0012-4` →
   `curl: (56) CONNECT tunnel failed, response 403`; agent-proxy note:
   `api.crossref.org:443 — connect_rejected (the egress proxy refused the connection or could not reach the host...)`.
3. `curl -I` on `discovery.ucl.ac.uk`, `kops.uni-konstanz.de`, `diposit.ub.edu`,
   `repository.uantwerpen.be` → all four `curl: (56) CONNECT tunnel failed, response 403`.
   Conclusion: **Bash egress to arbitrary external hosts is policy-blocked in this session; FULL TEXT RAW
   is unobtainable here by any route.**
4. `WebFetch https://www.nature.com/articles/s41418-017-0012-4` →
   `{"error_type":"CLIENT_ERROR","source":"target","message":"There was an error while fetching."}`
   **The stated publisher route does not work from here**, open access notwithstanding.
5. PMC / Europe PMC: not attempted (hard-blocked per standing instruction).

**Route that works:** the UCL Discovery copy of the *published version* PDF:
`https://discovery.ucl.ac.uk/id/eprint/10043343/1/s41418-017-0012-4.pdf` (reached via the eprint page
`https://discovery.ucl.ac.uk/id/eprint/10043343/`). A second working mirror, unread:
`https://kops.uni-konstanz.de/bitstreams/51e17b1e-a53b-4e57-a42c-3a8360b601e7/download`.
This is the **published paper**, not a preprint.

Budget: **1 web search; 7 WebFetch calls (6 returned content, 1 target error)**. Plus 6 curl URL attempts
that were refused at the proxy and returned zero bytes. Fetch budget is exhausted; see Reader errors.

## Q1 — Existence, title, author line, citation

**Exists.** Title, as printed on the first page:
"Molecular mechanisms of cell death: recommendations of the Nomenclature Committee on Cell Death 2018".

**Printed byline on page 1 (as converted):** only `Lorenzo Galluzzi^1,2,3 · Ilio Vitale^4,5 · et al.`
— i.e. the PDF's own first page carries two names and "et al." for this consortium; the full ordered
list sits in the author-information block, which is in the part of the PDF I could not read.

**Therefore checked against Crossref's ordered `author` array** (the sanctioned alternative):
1 Lorenzo Galluzzi, 2 Ilio Vitale, 3 Stuart A. Aaronson, 4 John M. Abrams, 5 Dieter Adam,
6 Patrizia Agostinis, 7 Emad S. Alnemri, 8 Lucia Altucci, 9 Ivano Amelio, 10 David W. Andrews,
11 Margherita Annicchiarico-Petruzzelli, 12 Alexey V. Antonov — **169 entries in total** — last three in
order: **Laurence Zitvogel, Gerry Melino, Guido Kroemer**.
Note the order: Galluzzi first, Kroemer last (senior/corresponding position), Melino second-to-last.

Journal **Cell Death & Differentiation** (Crossref short form "Cell Death Differ"), **volume 25**,
issue 3, pages **486–541**, **2018** (online 23 Jan 2018), doi 10.1038/s41418-017-0012-4.
This matches the citation as given in the brief.

## Q2 (DECISIVE) — How are the modalities defined?

**Mechanistic/counterfactual in form, with morphology explicitly demoted — but no general decision rule
is stated in the half I read.**

Definitions are collected in **Box 1, "Operational definitions"** (several are restated in running text,
e.g. "We propose to define ferroptosis as…"). Their grammatical form is dependence on named molecules,
often with pharmacological inhibitability written into the definition itself:

- Necroptosis — "critically depends on MLKL, RIPK3, and (at least in some settings) on the kinase activity of RIPK1" (not reported cut)
- Ferroptosis — "A form of RCD initiated by oxidative perturbations of the intracellular microenvironment" (continues) … "under constitutive control by GPX4 and can be inhibited by iron chelators and lipophilic antioxidants" (not reported cut)
- Pyroptosis — "A type of RCD that critically depends on the formation of plasma membrane pores" (**cut**; continues "by members of the gasdermin protein family")
- Parthanatos — "A modality of RCD initiated by PARP1 hyperactivation" (continues)
- Entotic cell death — "A type of RCD that originates from actomyosin-dependent cell-in-cell internalization (entosis)" (continues "and is executed by lysosomes")
- Intrinsic apoptosis — "Type of RCD initiated by perturbations of the extracellular or intracellular microenvironment" (continues "demarcated by MOMP")

The committee states the basis of its own classification (two independent un-primed calls returned this
sentence identically):

- "to precisely define major cell death modalities on a genetic, biochemical, pharmacological, and functional" — continuing, per the summariser, "(rather than morphological) basis"
- "to distinguish essential (causal) from accessory (correlative) aspects of the death process"
- "we propose here an updated classification of cell death modalities" / "centered on molecular and essential aspects of the process"
- on the older morphological scheme: "this morphological classification is still extensively employed, irrespective of multiple limitations" (**cut**; continues "and caveats")
- "to address the issues related to the use of a nomenclature of cell death based on morphological grounds"

Counterfactual/interventional language also carries the top-level RCD/ACD split: RCD "can be modulated
(i.e., delayed or accelerated) by pharmacological or genetic interventions", while accidental cell death
is "caused by extreme physical, chemical, or mechanical cues" and is "instantaneous and uncontrollable".
That interventional criterion is used to separate *regulated* from *accidental* death, **not** stated as
the rule for assigning a particular modality. The committee's evidential standard for dependence claims
is visible in the MPT section: PPIF/CYPD is "the only protein whose in vivo requirement for MPT induction
has been formally validated".

**Role of each kind of criterion:** observational features appear as *accessory/correlative* and as a
*spectrum*, mechanism appears as *essential/causal* and as the definitional content. **Neither
sufficiency nor necessity of any single criterion is asserted as a general rule anywhere in the portion
I read.** Whether the concluding remarks state one, I could not read.

## Q3 — Does it say modality cannot be identified from observation alone?

**No explicit general statement in the portion I read — NOT FOUND at PARTIAL level (Intro, Box 1,
Fig. 1 legend, and the modality sections through Parthanatos).** The concluding remarks, where such a
methodological statement would most plausibly sit, are unread. This is *not* a check that passed.

The closest printed thing, and it does imply the point, is the **Fig. 1 legend**:
"Each type of RCD can manifest with an entire spectrum of morphological features ranging from fully
necrotic to fully apoptotic" (not reported cut). If one modality spans the whole morphological range,
morphology cannot by itself assign modality. Supporting, weaker: the morphological classification is
kept "irrespective of multiple limitations" (**cut**: "and caveats"), and the essential(causal) vs
accessory(correlative) distinction above. A direct, un-primed probe asking whether the article says
observation alone is insufficient and intervention required was answered: the article "never states"
this in the visible text.

## Q4 — Markers/stains/morphological criteria recommended for identifying a modality (and in tissue)

Within the read portion the article **discusses** detection correlates but, as read, does not put
forward a marker panel *as a means of assigning modality*, and **does not address fixed tissue sections,
histology, IHC or in-situ detection at all** (summariser, asked directly: "not addressed in the text I
can see"). Items named, with the article's own caveats:

- Morphotypes (type I/II/III: cytoplasmic shrinkage, pyknosis, karyorrhexis, blebbing; vacuolization; neither) — historical scheme, carried with "limitations, and caveats".
- Phosphatidylserine exposure — apoptosis correlate; caveat: "PS exposure may not universally accompany intrinsic (and extrinsic) apoptosis".
- DNA fragmentation (CASP3→ICAD) — apoptosis correlate; no caveat reported.
- Electron microscopy of ferroptotic mitochondria — "electron-dense ultrastructure, reduced/disappeared cristae, and ruptured OMM" (**cut**: more features precede).
- Δψm dissipation after MOMP — no assay named.
- Caspase inhibitors Z-VAD-fmk, Q-VD-OPh — caveat: "generally delays (but does not prevent) intrinsic apoptosis in vitro and in vivo".
- Pathway inhibitors as discriminators: Nec-1 (RIPK1), NSA (MLKL), ferrostatin-1 / liproxstatin-1 (ferroptosis), CsA/SfA/JW47 (CYPD).
- GSDMD/GSDME cleavage — pyroptotic pore step.
- End-stage confound: "In vitro, end-stage apoptosis is generally followed by complete breakdown of the plasma membrane" (**cut**; continues into the secondary-necrosis point) — i.e. apoptotic corpses end up looking necrotic.

Note the **aggregation level** of every one of these: they are properties asserted of *a single cell or
corpse* (or of cultures/mouse models in the cited experiments) — per-cell features and per-cell
dependence claims. Nothing in the read portion is framed as a tissue-level or population-level measure.

## Q5 — Any quantitative share of deaths by modality?

**NOT FOUND in the portion I read**, after a direct search prompt for any number, percentage,
proportion, rate or fraction of cells dying or of modality share. Unread second half not checked.
Numbers that do appear are of other kinds: "~10% reduction in ischemic area over area at risk" (mouse
cardiac injury), "complete penetrance" of embryonic lethality in Gpx4−/− mice, and the qualitative
"a majority of cancer cells" for type II cells requiring BID cleavage in extrinsic apoptosis — a
statement about cell types, not about the share of deaths. No call for such a measurement was found
either, in the read portion.

## Q6 — Physiological vs pathological death; healthy adult tissue

The article's distinction is drawn on *perturbation*, not on health/disease vocabulary (the summariser
noted the text does not use "disease" to draw it):

- RCD "can occur in the absence of any exogenous environmental perturbation"; such forms are "generally referred to as programmed cell death (PCD)".
- PCD (Box 1): "Particular form of RCD that occurs in strictly physiological scenarios", which "does not relate to perturbations of homeostasis" and "does not occur in the context of failing adaptation to stress" (summariser split the clause to stay under its length limit).
- Stress-driven RCD arises when perturbations are "too intense or prolonged for adaptative responses to cope with stress".
- Regulated cell death (Box 1): "Form of cell death that results from the activation of one or more signal transduction modules" (clause split by summariser).
- Accidental cell death (Box 1): "caused by extreme physical, chemical, or mechanical cues", "instantaneous and uncontrollable".

On healthy adult tissue: RCD can operate "as a built-in effector of physiological programs for
development or tissue turnover"; necroptosis acts "as a PCD subroutine, at least in specific settings",
including "the maintenance of adult T-cell homeostasis"; apoptotic cells undergo "rapid clearance by
macrophages or other cells with phagocytic activity"; and for ferroptosis, "The precise role of
ferroptosis in development and tissue homeostasis, however, remains to be fully elucidated."

## Reader errors / caveats (rule 12)

- **Fetch budget fully spent (7 WebFetch), and 3 of those 7 went on route discovery** because the
  publisher route in the brief does not work from here. 6 further curl URL attempts were refused at the
  proxy and returned nothing; if those count as fetches, I overran the budget on *attempts* while
  reading nothing through them. I stopped at each refusal and did not rework it.
- **The whole second half of the article is unread** and I had no budget left to page into it. A follow-up
  reader should fetch the same UCL PDF with `offset` set past the Parthanatos section and target the
  concluding remarks specifically for Q3 and Q5.
- **No raw read was achievable**, so no string here is certified byte-verbatim; several are flagged by the
  summariser as cut near its ~125-character limit, and I have not completed any cut string.
- Two strings were independently reproduced word-for-word by separate un-primed calls (the
  "genetic, biochemical, pharmacological, and functional" aim sentence; the "irrespective of multiple
  limitations" sentence), which is the strongest corroboration available under these conditions.
- All prompts were open questions about what the document says; I did not hand the fetcher strings to
  confirm, so no finding here rests on a primed confirmation.
- No personal identifier was placed in any URL, query string or header; Unpaywall was not used.
