# UQ-20261016-61 verification notes

Searches (1 of 6 used):
1. "Birrell 2012 back-calculation time to diagnosis undiagnosed HIV prevalence surveillance doi 10.1515/1948-4690.1055" -> found De Gruyter Brill page for the paper (title: Estimating Trends in Incidence, Time-to-Diagnosis and Undiagnosed Prevalence using a CD4-based Bayesian Back-calculation).

Fetches (5 of 5 used):
1. https://ard.bmj.com/content/73/12/e77 (all three strings together) -> opened OK
2-4. same URL, one string each -> opened OK (cached page)
5. https://www.degruyterbrill.com/document/doi/10.1515/1948-4690.1055/html -> opened OK (abstract)
Not opened: PMC, Europe PMC, PubMed (blocked/not needed).

Strings checked (per page-summariser, each checked individually and jointly):
- "neglected in their analysis and interpretation all the patients with recent symptom onset who were not yet diagnosed" -> VERBATIM (sentence continues "and are therefore not part of their database")
- "a realistic approximation only for former disease-onset decades" -> VERBATIM (continues ", that is, for patients with symptom onset 20-40 years ago")
- "we need another 20 years passing by" -> VERBATIM ("However, in order to demonstrate this reduction reliably, we need another 20 years passing by.")
Caveat: verbatim status is from a small-model summariser, not raw text.

Q2: No statistical correction proposed or applied. Letter says analysis must account for "missing observations (diagnoses to be expected in the future)", notes Fries et al. called it "right censoring", authors prefer "an incorrect analysis and incorrect data interpretation". Only remedy: wait ~20 more years.
Q3: Unit: individual AS patients grouped by symptom-onset year cohort. Disputed: average diagnostic delay (onset to diagnosis) and claimed decrease since 2000; biased for recent onset cohorts.

Secondary (Birrell 2012): Bayesian back-calculation on HIV/AIDS diagnosis surveillance data for England & Wales augmented by CD4 at diagnosis; jointly estimates incidence, diagnosis rate, time-to-diagnosis trends, time-since-infection and undiagnosed prevalence. Finding: decreasing time-to-diagnosis, stable incidence. Comparator: none explicit.

Conclusion: CONFIRMED.
