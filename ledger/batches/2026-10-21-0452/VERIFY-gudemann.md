# VERIFY — Güdemann et al., arXiv:2308.08020

## Citation as the source itself serves it

Title, as printed (reconstruction from 3 consecutive segments, ar5iv rendering):
"Just what the doctor ordered: An evaluation of provider preference-based Instrumental Variable methods in observational studies, with application for comparative effectiveness of type 2 diabetes therapy"

Authors, printed order: **Laura M. Güdemann, Beverley M. Shields, John M. Dennis, Jack Bowden**, "on behalf of the MASTERMIND consortium" (ar5iv front matter). Note the umlaut: **Güdemann**, not "Gudemann".

arXiv:2308.08020v1, submitted 2023-08-15. Subject class: stat.ME. **No journal-ref, no DOI and no comments field on the abstract page.** Only one version (v1) is listed. No date is printed on the paper itself. Two web searches turned up no published journal version — only the arXiv record and mirrors (deepai, ar5iv). That is "none found", not "none exists".

## Read level

**Full text, read through the WebFetch summariser on the arXiv PDF** (https://arxiv.org/pdf/2308.08020v1), twice, plus a partial second rendering via ar5iv. I never held the raw text, so every string below is a summariser-mediated reconstruction from ordered consecutive segments, not a grep.

Routes that failed:
- `curl https://arxiv.org/pdf/2308.08020v1` — CONNECT tunnel failed, 403 (tool-scoped; WebFetch on the same URL worked).
- `curl https://ar5iv.labs.arxiv.org/html/2308.08020` — CONNECT tunnel failed, 403.
- WebFetch https://arxiv.org/abs/2308.08020v2 — **PROXY_REJECTED, HTTP 429 with a do-not-retry instruction.** Not retried. (The v1 abs page already showed v1 is the only version, so nothing turns on it.)
- ar5iv's HTML rendering is **truncated**: the body it served ends inside Section 2.3.2, so it contains no Discussion, no Section 3.4 and no Section 4. Its answers on whole-document term searches cover only the front half and are not evidence of absence.
- Fetch cap (5) reached; stopped rather than working around it.

## (a) Front matter

Holds, with one correction and one gap. Authors and title as above; the ledger's short form "Gudemann LM, Shields BM, Dennis JM, Bowden J (MASTERMIND)" matches the paper's own front matter in people and order (umlaut dropped). Year 2023 is the arXiv submission year; the paper carries no printed date. **No published journal version is recorded on arXiv and none was found by search** — so citing it as anything but an arXiv preprint would be unsupported.

## (b) The two quoted strings

**String 1 — "measurement bias unless all physicians within a practice have the same preference": VERBATIM, present in the Discussion (Section 5).**

Whole sentence (reconstruction, 3 consecutive segments):
"By constructing a surrogate on practice level, information of prescription pattern will be aggregated which will lead to measurement bias unless all physicians within a practice have the same preference."

Clause on the left: the quoted string is the tail of that sentence; what precedes it inside the same sentence is "By constructing a surrogate on practice level, information of prescription pattern will be aggregated which will lead to". The sentence immediately before: "In reality, patients will be treated by different physicians within a practice with different prescription preference." The cut does not distort: the surrounding grammar makes the mechanism *aggregation across physicians within a practice*, which is what the quote says.

The sentence immediately after was returned by the summariser as one unsegmented block well over its own quotation cap ("In summary, our study shows that IV methods using provider preference can be a useful tool for causal inference from observational health data, with both model-based and rule-based construction methods ... as long as changes in provider preference over time are incorporated."). I did not get it back in verified consecutive segments, so treat that one as unverified wording.

**String 2 — "treatment effect estimates from multiple constructions should be derived and their coherence assessed": verbatim AS A CLAUSE, but it is not the sentence.**

Full sentence as served (reconstruction, 2 consecutive segments):
"If possible, treatment effect estimates from multiple constructions should be derived and their coherence assessed [21]."

Clause on the left: **"If possible,"** — dropped by the quotation. Clause on the right: the citation **"[21]"** (Uddin et al.), also dropped. The sentence immediately before (reconstruction, 2 segments): "As Uddin et al. [21] and our own simulation study has concluded, the validity of a preference-based IV strongly depends on the suitability of the data it is applied to." The sentence after (3 segments): "In keeping with this spirit, in Section 4 we apply all of the rule and model-based construction methods discussed thus far to look at the comparative efficiency of two oral type 2 diabetes treatments."

Section attribution is uncertain: the PDF read placed it in "Section 3.4 (Results)" of the simulation study, but the following sentence says "in Section 4 we apply all of the ... methods discussed thus far", i.e. it sits at the close of the simulation-study material, before Section 4. I report the location as served and flag the ambiguity.

## (c) What the mismeasurement concern actually is

**Preference heterogeneity within an aggregated provider unit — a GP practice standing in for the individual prescribing physicians.** In the paper's own words (Discussion, reconstruction):

- "In reality, patients will be treated by different physicians within a practice with different prescription preference."
- "By constructing a surrogate on practice level, information of prescription pattern will be aggregated which will lead to measurement bias unless all physicians within a practice have the same preference."
- "Only information on the allocation of patients to practices is given in the data."

A second, more general formulation runs through the paper: the instrument Z is a constructed *surrogate* for unobserved provider preference PP, and error enters at construction.
- Introduction: "It remains a difficult quantity to accurately and unbiasedly measure [9]." and "This is motivated by the desire to minimise the measurement error of Z measuring PP".
- Section 3.4: "As IV(PP) is unbiased for all $n_j$ , the treatment effect estimates are very likely biased due to measurement error when constructing Z as surrogate for PP."

So there are two formulations: the *general* one (surrogate-for-latent-preference error, which the simulations quantify) and the *specific* one (aggregation over heterogeneous physicians within a practice, raised in the Discussion as a limitation of its own application, hedged and uncited). **Neither is about the recorded prescriber not being the decision-maker.**

## (d) The clinician named on the prescription vs the clinician who chose the drug

**Not raised, not measured, not recommended — on the full-PDF read, no such passage appears.** The targeted search (recorded / documented / attributed / signed / nurse / trainee / registrar / locum / delegated / "who actually prescribed") returned nothing, and the closest passage the summariser could offer was the within-practice heterogeneity sentence, which is a different defect. The ar5iv term search agreed (all terms absent) but covers only the truncated front half, so it adds little.

Two near-misses that must not be mistaken for this gap:
- "In most routine clinical databases, the reason underlying a treatment decision is not systematically recorded." That is the absence of the *reason*, not of the identity of the decision-maker.
- The within-practice heterogeneity sentence concerns several physicians each with their own preference being averaged into one practice-level instrument, not one clinician's choice being recorded under another clinician's name.

Caveat on strength: this is a negative finding mediated by a summariser over a PDF I could not grep. It is a confident "no passage found", not a machine-verified zero-hit count.

## (e) Level of its own instrument, and comparing constructions as a diagnostic

Level: **GP practice**, in the applied analysis.
- "IV construction took place at the level of the GP practice in UK routine clinical data."
- "Each practice treated on average 132 individuals with either drug over the study period."
- "Only information on the allocation of patients to practices is given in the data." — i.e. the data do not support an individual-prescriber instrument.
- The Methods are written generically for "provider j"; the Introduction notes the literature has used three levels: "Preference-based IVs have been constructed at three different healthcare provider levels in the literature", including "at the individual physician level".

Comparing constructions as a diagnostic: **yes, and twice.**
- Close of the simulation study: "If possible, treatment effect estimates from multiple constructions should be derived and their coherence assessed [21]." — hedged ("If possible") and carrying a citation to Uddin et al. [21].
- Discussion: "the application case study showed the usefulness of triangulating results from different construction methods as proposed by Uddin et al. [21]." — also attributed to Uddin et al.

So the recommendation is in the paper, but the paper presents it as Uddin et al.'s proposal that its own case study supports, not as its own novel recommendation.

## What the source is, and what it measures

A **primary methodological study**: a simulation study of instrument-construction methods plus an applied case study, not a review, protocol or guideline. Discussion: "In this paper we conducted a state of the art performance analysis of the known construction methods for a preference-based instrument." It also proposes a new model-based construction method.

Applied analysis, in its own words:
- Data: "We used routine data from the Clinical Practice Research Datalink (CPRD) Aurum (download November 2021)."
- Comparator: "comparing two oral type 2 diabetes (T2D) agents - Sodium-glucose Cotransporter-2 Inhibitors (SGLT2i) versus Dipeptidyl peptidase-4 inhibitors (DPP4i)".
- Endpoint: "12 month achieved HbA1c (mmol/mol), closest value to 12 months in the 9-15 months after treatment initiation, on unchanged therapy."
- Estimand (Figure 8 caption): "Estimation results of the relative treatment effect of SGLT2i versus DPP4i on the reduction of HbA1c (mmol/mol)."
Unit of analysis for the instrument is the GP practice; outcome is measured on the patient.

## Defects

1. **String 2 is quoted with its hedge cut off.** The source says "If possible, treatment effect estimates from multiple constructions should be derived and their coherence assessed [21]." Quoting from "treatment effect estimates" turns a feasibility-conditional recommendation into an unconditional one.
2. **String 2's attribution is cut off too.** Both formulations of the multiple-construction recommendation carry a citation to Uddin et al. [21]; the paper endorses and supports it rather than originating it. Citing Güdemann et al. as the source of the recommendation overstates it.
3. **Author name mis-set:** Güdemann, not Gudemann.
4. **Citation status:** arXiv preprint only — no journal-ref, no DOI, no published version found. Any ledger entry should say "preprint".
5. **(c) and (d) are genuinely different defects, and the paper only has the first.** Its mismeasurement concern is aggregation over heterogeneous physicians inside a practice (plus generic surrogate-for-latent-preference error). The recorded-prescriber-is-not-the-decider case is absent. Treating the practice-aggregation sentence as coverage of that case would be a misreading.
6. **Do not read "the reason underlying a treatment decision is not systematically recorded" as a flag of the identity gap.** It notes the absence of a different thing.
7. **Section attribution for string 2 is unresolved** (summariser said Section 3.4; the following sentence implies the close of Section 3 ahead of Section 4). Reported as served.
8. **Read-level limits:** every string is a summariser reconstruction from consecutive segments, not raw text; curl is 403 at this proxy for both arxiv.org and ar5iv; the ar5iv HTML is truncated at Section 2.3.2; the sentence following string 1 came back over the quotation cap unsegmented and is unverified.
