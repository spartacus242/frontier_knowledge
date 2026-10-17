# UQ-20261017-02 verification notes

Searches run: 0 of 7 (none needed; all three URLs given). Fetches used: 6 of 6.
Caveat: all text read through the WebFetch summariser, not the raw PDFs; quotes are as returned by it (the summariser trimmed some to <125 chars).

## URLs
1. CCRI/12-05 https://www.bipm.org/utils/common/pdf/CC/CCRI/CCRI_Validity_of_IR_Comparisons.pdf - OPENED (2 fetches)
2. WG Recs 2016 https://www.coomet.net/.../Recommendations-CIPM-MRA-Review-1_13082016.pdf - OPENED (2 fetches)
3. IAWG-GD-01 https://www.bipm.org/documents/20126/56018277/IAWG-GD-01-IAWG_CC_approach_guidelines.pdf/... - OPENED (2 fetches)

## Exact strings checked (one at a time, second pass)
- Doc1: "the most recent replacing any earlier participation" - verbatim, Executive Summary (full sentence >125 chars: "may have one result in each comparison, the most recent replacing any earlier participation")
- Doc1: "only one of these should be quoted" - verbatim, Section 6
- Doc3: "at least three studies" - verbatim ("the NMI/DI should participate in at least three studies")
- Doc3: "during the last 10 y" - appears; document silent on whether older results are dropped/superseded
- Doc2: "monitoring the stability of standards" - verbatim, Key Point 8; words supersede/replace/valid/validity NOT found in text
- First pass only (not re-checked): Doc1 "This presumes that there have been no significant changes in staff, equipment or measurement methods"; "Equivalence will normally be based on the most recent comparison"; "there is no averaging of results over several qualities"; H*(10) air-kerma + conversion coefficients; "similar to". Doc3 "no fewer than 10 points"; "Broad scope CMCs can be submitted by grouping multiple analytes"; "how far does the light shine". Doc2 "The results of KCs and SCs should be interpreted as widely as reasonably applicable to indicate coverage of CMCs".

## Answers
Doc1 CCRI/12-05: (a) YES conditional, 10-yr default validity presuming no significant change; change triggers new comparison. (b) YES, most recent replaces earlier. (c) NO; opposite: quote only one comparison; no averaging across qualities. (d) YES limited (H*(10) via air kerma + conversion coefficients; activity via Measurement Methods Matrix; "similar to").
Doc2 2016 WG: (a) not addressed as validity rule (only in-house stability monitoring). (b) not addressed. (c) not addressed. (d) not addressed explicitly (only grouping of species/energies, no artificial subdivision of CMCs).
Doc3 IAWG-GD-01: (a) not addressed beyond 10-yr Record of Participation window. (b) not addressed. (c) YES (>=3 studies in 10 yr, >=10 points, 90% within -1..+1). (d) YES within analyte-group/matrix-challenge cells of the CC table; "how far does the light shine".

## Quantified vs not
Quantified: validity periods (10/15/20 yr) in Doc1; participation counts and fraction of normalised-deviation points within +-1 in Doc3. Not quantified: any statistical model of performance persistence, decay of evidence, uncertainty from age of a result or from extrapolation to another measurand/analyte; Doc2 quantifies nothing about this.
