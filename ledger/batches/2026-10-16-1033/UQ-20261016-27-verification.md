# Post-batch verification log — fresh-context checker, 2026-10-16 10:33 UTC batch

Each checker was handed one load-bearing claim from the adversary's report plus its cited source, and
NOT the adversary's reasoning or the judge's verdict. `q=` is its search count. This log is the
checker's own text as returned; the final EFFECT paragraph of some sections was cut by the runner's
output cap, marked [...] where that happened.

---

vaccine-lot-variance | UQ-27-lot | PARTLY_CONFIRMED | q= 15 refused= 0
--- POSED IN PRINT?
YES — posed once, in print, and left unanswered, but only in the narrow one-off form; NOT posed anywhere as a general estimand.

POSED, verbatim: MMWR 1984;33(24):349 — "This finding suggested a cohort effect, such as a faulty vaccine lot or particular provider, but none was found." Paired with the reason it could not be pursued: "Although detailed vaccine information was not available from providers of vaccine," This is on the protection axis — the setting is a measles outbreak among already-vaccinated high school students, i.e. vaccine failure — and CDC confirms no other lot investigation is described. So the question was raised, could not be checked for want of lot-level exposure data, and was closed by inability rather than by evidence. By whom: CDC/Illinois outbreak investigators, 1984. That is the "posed-and-open" instance, and it is 42 years old.

NOT POSED: in none of the other ledger-cited sources does the protection-axis question appear as a question, a named parameter, or a stated future-work item.
- Bundestag 20/7534 — safety in its title; no question touches Wirksamkeit, Schutzwirkung, Immunogenität, Potenz or Impfdurchbrüche. Its nearest limb, "Qualitätsunterschiede bei den unterschiedlichen Chargen von COVID-19-Impfstoffen," says quality, not potency or protection.
- Bundestag 20/7813 — answers on Verdachtsfälle only; does not raise effectiveness.
- PEI 18 Aug 2023 — endpoint is adverse-event reports only; protection never mentioned, in the statement or in PEI's 2024 follow-up position.
- Dec 2009 Sanofi/MedImmune recalls — CDC pre-empts the question by asser
--- EFFECT:
Separating the two claims as asked:

CLAIM A — the novelty kill FAILS on three independent grounds; it should not drop novelty to Low.
1. AXIS MISMATCH, decisive. The preprint's endpoint is three-month all-cause mortality — a harm endpoint, titled by its own authors "A Batch-Dependent Safety Signal" and cross-validated against adverse-reaction rates. The candidate's question is about field PROTECTION (infection or severe clinical outcome). There is no infection endpoint, no comparator, no VE estimate in the preprint. A safety-axis analysis cannot be prior art for a protection-axis question.
2. NO VARIANCE COMPONENT. As the ledger suspected: per-batch rates plus cluster analysis, no random effect, no ICC, no variance decomposition. If the candidate's contribution is a between-lot dispersion estimand, that estimand is not in this paper on any endpoint.
3. NOT PEER-REVIEWED. The page says so explicitly ("This version is not peer-reviewed"). It also carries real defects: an impossible date, R²=1 on a one-batch cluster, post-hoc exclusion of a high-rate batch, undisclosed outlier counts. Even on the safety axis it is weak prior art.
So: source confirmed to exist and be cited accurately; inference from it refuted. Hence PARTLY_CONFIRMED overall. The adversary verified a citation and then over-read it — the standard "an attack is Resolved only when concrete evidence defeats it" cuts against this kill, and the kill's fatal ground does not survive.

CLAIM B — CONFIRMED, and the adversaries deserve full credit. log(1−VE)=log(RR) is the canonical scale (VE is bounded at 1; log(VE) has a vanishing derivative there and a near-degenerate variance exactly where vaccines operate; all VE inference is in fact built on log-RR and back-transformed). The 9x/19x factor is exactly VE/(1−VE), not "roughly" — my arithmetic gives 9.0000 and 19.0000 as first-order values, with two-lot exact checks at 9.01–9.12 and 19.06–20.12. This is a genuine specification defect: if the candidate's estimand is written as the SD of log(VE), it must be restated as the SD of log(1−VE), and any pre-specified effect size on the wrong scale is off by an order of magnitude. This does not kill the question; it
[...] cut by the runner's output cap.
