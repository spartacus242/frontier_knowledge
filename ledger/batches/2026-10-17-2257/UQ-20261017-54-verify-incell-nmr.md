# UQ-20261017-54 verify in-cell NMR (Luchinat et al. 2021)

Read level: PDF (via summariser, 2 fetches of the same PDF; no verbatim long quotes, short fragments only)

## Calls
- Fetch 1: journals.iucr.org qt5006.pdf -> OK (summary: citation, Table 3, methods fragments, discussion fragment)
- Search 1: title query -> found iucr pdf, PMC8489230 (blocked, not opened), flore.unifi.it, cris.unibo.it
- Fetch 2: same PDF, targeted quote prompt -> OK
Total: 1 search, 2 fetches.

## Findings
1. Luchinat E, Barbieri L, Cremonini M, Pennestri M, Nocentini A, Supuran CT, Banci L. Acta Cryst D77, 1270-1281 (2021). doi 10.1107/S2059798321009037.
2. Human carbonic anhydrase II, 4 sulfonamide ligands (MZA, AAZ, ETZ, SLC-0111), HEK 293T cells.
3. Table 3 (nM): MZA 37+/-1 in vitro; in-cell 37 is NOT independent (reference value; footnote reported as "From competition with AAZ in vitro"). AAZ 15 in vitro vs 18+/-1 in-cell closed tube. SLC 79+/-3 in vitro vs 95+/-8 closed tube and 111+/-11 bioreactor. ETZ 0.45+/-0.02 in vitro vs 1.6+/-0.3 and 3.7+/-0.6 (bioreactor runs 2 and 3; closed tube n.d.). All numbers exist, units nM (Kd).
4. Not measured in situ. Closed tube: ligands "in a large molar excess with respect to the protein" (free ~ total). Bioreactor: free ligand "constant and known". Held by design.
5. Paper's aim is to show the method measures intracellular Kd; verdict: "the intracellular Kd values obtained by in-cell NMR were similar to the values obtained by NMR in vitro". Not posed as an open question about difference. ETZ bioreactor slightly lower affinity (factor ~3.5-8), attributed to slow diffusion.
6. One protein (CA II), several ligands.

Caveat: the two summaries disagreed on MZA footnote wording and ETZ discussion location; exact wording unverified.
