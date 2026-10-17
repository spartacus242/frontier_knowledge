# UQ-20261017-04 working notes (budget: 7 searches, 6 fetches; used 5 searches, 6 fetches)
## Searches
1. Pallikara et al title -> found arXiv 2203.01244, IOP 10.1088/2516-1075/ac78b3 (OK)
2. Hellman/Abrikosov TDEP -> links only: arXiv 1303.1145, 1103.5590 (OK, titles only)
3. Errea/Calandra/Mauri SSCHA -> links only: arXiv 1311.3083 (OK, titles only)
4. SCAILD Souvatzis -> links only: arXiv 0803.1325 (PRL 2008), 0903.4247. NOT OPENED (fetch budget gone) -> SCAILD part COULD NOT READ
5. phonons at experimental geometry -> links only (phonopy review 1506.08498, others). NOT OPENED -> part 3 COULD NOT READ
## Fetches (6/6)
1 arxiv.org/abs/2203.01244 : OK. Abstract page lists authors Pallikara, Kayastha, Skelton, Whalley (NOT Harvey). Abstract does not itself state zero-force requirement.
2 arxiv.org/html/2203.01244 : OK. Summariser returned: "to a stationary point on the potential-energy surface (PES)" (II A); "the forces are equal to zero" (II A); "a well-converged geometry optimisation is a prerequisite" (II C); "the forces on the atoms in the initial structure are assumed to be zero" (II C)
3 arxiv.org/html/2203.01244 (re-check): confirmed II.C "Since the forces on the atoms in the initial structure are assumed to be zero (c.f. Equation (1))," ... "a well-converged geometry optimisation is a prerequisite,"; tightened force criteria may be needed.
4 iopscience 10.1088/2516-1075/ac78b3 : OK. Electronic Structure 4, 033002 (2022), topical review; "the forces are equal to zero, so that the linear term in u vanishes" (Sec 2.1). Author list on page truncated to first author.
5 arxiv.org/pdf/1303.1145 (TDEP, Hellman & Abrikosov PRB 88, 144301): equilibrium positions refined in loop. "Guess equilibrium positions, usually the ideal lattice positions." ; "These forces are then used to move the atoms in a steepest descent scheme towards equilibrium positions." Not checked as a separate exact-string query (summariser quotes only).
6 arxiv.org/pdf/1311.3083 (SSCHA, Errea-Calandra-Mauri PRB 89, 064302): "contains two group of parameters: the R_eq equilibrium positions and the Φ force-constants matrix"; "The minimization is performed with respect to all the free parameters in the trial harmonic Hamiltonian."; R_eq changes only within symmetry-allowed subspace. Paper describes no option to hold R fixed (absence in a summary, not proof of absence).
## Conclusion
Part 1: right in substance; "not well defined" is overstated: HA expansion has a linear term that is simply dropped; at nonzero forces the dynamical matrix is computable but is not the curvature at a stationary point; Pallikara says zero forces assumed, optimisation prerequisite. Citation: Whalley not Harvey; Electronic Structure 2022.
Part 2: TDEP and SSCHA: reference positions updated by method (as published). Fixing at supplied geometry is not described; not shown impossible (codes may offer it - unverified). SCAILD not read. "none can" is overstated: only supported for the algorithms as published; SSCHA/TDEP instability flags (imaginary renormalised frequencies) arise at the converged positions, not the experimental one.
Part 3: not established; no paper opened.
