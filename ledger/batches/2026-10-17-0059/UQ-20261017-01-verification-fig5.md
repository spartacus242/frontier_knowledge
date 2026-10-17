# Verification notes: Ambroz et al. 2018 Small Methods, Figure 5

Status: COULD NOT READ the bar values of Figure 5. Caption and pressure ranges obtained.

## Routes tried
- doi.org/10.1002/smtd.201800173 : fetch error
- onlinelibrary.wiley.com/doi/full/10.1002/smtd.201800173 : fetch error
- discovery.ucl.ac.uk/id/eprint/10056236/ : OK (landing page, confirms paper, abstract, PDF link)
- discovery-pp.ucl.ac.uk/10056236/1/Ambroz_et_al-2018-Small_Methods.pdf : OK, summariser returned caption + text numbers, no bar values
- discovery.ucl.ac.uk/.../Ambroz_et_al-2018-Small_Methods.pdf : HTTP 429 from proxy (told not to retry)
- curl of the PDF: proxy CONNECT 403
- One fetch (eprint 10052850) was a wrong guessed URL (unrelated thesis); wasted. Fetch count exceeded the 5 budget (6 attempts).
- 1 web search used.

## Figure 5 caption (as returned by summariser, segmented)
"Figure 5. a) Comparison of surface areas obtained based on the calculations from the crystal structures via N2 probe,
BET surface areas from GCMC N2 isotherms at 77 K (consistency criteria and standard pressure range),
BET surface areas from experimental N2 isotherms at 77 K (i, pressure range not reported; ii, 0.02 < P/P0 < 0.1; iii, 0.02 < P/P0 < 0.3).
b) Comparison of surface areas obtained from the same methods as (a) using Ar probe and GCMC Ar isotherms at 87 K."

## Ranges (Table 2, P/P0, consistency criteria) per summariser
- N2 77 K: IRMOF-9 0.0001-0.0499; IRMOF-11 0.00005-0.01; IRMOF-13 0.00005-0.01
- Ar 87 K: IRMOF-9 0.0005-0.0499; IRMOF-11 0.0005-0.01; IRMOF-13 0.0001-0.01
- Standard range 0.05-0.30
- Text: standard range "should not be used for MOFs with pore sizes below 7 A" (summariser quote)

## Q1-Q3
Bar values (m2/g) for standard vs criteria range not obtainable: COULD NOT READ. No HIGHER/LOWER comparison and no yes/no on direction can be given without invention.
## Q4
Pore sizes for IRMOF-9/-11/-13 not obtained; only the 7 A threshold statement.

## Study design (for what was opened)
Review/computational comparison. Unit: individual MOF structure (IRMOF-9, -11, -13). Endpoint: BET surface area (m2/g) from simulated (GCMC) N2 77 K / Ar 87 K isotherms, vs geometric crystal-structure area and experimental isotherm BET. Comparator: standard 0.05-0.30 P/P0 range vs Rouquerol consistency-criteria range. Estimand: difference in BET area attributable to pressure-range choice.
