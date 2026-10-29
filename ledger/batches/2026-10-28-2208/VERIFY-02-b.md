# VERIFY-02-b — first-hand re-read of Dutarte 1983/84

Checker: fresh context, did not write the entry. Entry checked:
`/home/claude/frontier_knowledge/ledger/batches/2026-10-28-2208/UQ-20261028-02-entry.md`.
Adversary logs not read: the three claims under test (Dutarte's pair, his eq. (3),
derived-vs-measured) all live in the entry itself (lines 20, 30, 36, 59-60), so the
entry's own citation was the only thing needed. Budget: 0 of 1 searches, 5 of 6 fetches.

## What I opened, by what route, at what read level

Target: Philippe Dutarte, "Compatibilite avec le Spiegelungssatz de probabilites
conjecturales sur le p-rang du groupe des classes", DOI 10.5802/pmb.a-40.

- Route 1 (failed): `curl` direct to `https://pmb.centre-mersenne.org/item/10.5802/pmb.a-40.pdf`
  -> `curl: (56) CONNECT tunnel failed, response 403`, HTTP 000, 0 bytes. Agent proxy
  refused the tunnel; no local copy of the PDF was obtainable, so no local pdftotext /
  glyph-level read was possible.
- Route 2 (worked, 5 fetches): WebFetch on the same publisher URL, each call asking for
  ordered consecutive verbatim French segments under ~125 characters, OCR artifacts intact,
  explicitly not translated.

READ LEVEL: **full text, section by section, via publisher PDF through a summariser, with
character-level verbatim transcription requested and obtained for the title, INTRODUCTION,
the definitions of k, k', r, r', delta, equations (1), (2), (3), the whole derivation from
(3) to the compatibility sentence, the complete heading list, and sections 4.1-4.2.** I did
not see page images.

IMPORTANT, and it vindicates the entry's hedge rather than removing it: the OCR damage is in
**the document's own text layer**. The PDF is a scan of a 1984 typescript; its extracted text
renders Greek delta variously as `o`, `o`-circumflex, `5` and `6`, loses superscript minus
signs, and loses exponents. That is a property of the source, not of the Gate 0-3 reader's
summariser or of mine. No text-layer route will do better; only page images would.

## (1) The pair, the prime, and the compatibility conclusion — CONFIRMED

Pair, section 1 (verbatim, OCR as printed):

> "Nous considerons une extension quadratique reell e de <Q , notee"
> "k = <Q ( ,/m ),et l'extension quadratique imaginaire , notee k' = Q ( J - 3 m ) ,"
> "qui lui est associe e par adjonction a (c)de s racine s cubiques de l'unite ,"
> "ou k' est tel que si k = (c)( ,/m ) , m > 0 , alor s k' = <Q( 3m ) ."

So k = Q(sqrt m), m > 0, and k' = Q(sqrt(-3m)). Exactly the candidate's pair.

Prime, INTRODUCTION: > "Nous limiterons notre etude a p = 3 , cas ou"
The paper's title says "p-rang" but the study is restricted to p = 3 by an explicit sentence.

Heading list, verbatim and in order (from the fetch that enumerated them):
INTRODUCTION . / 1 . - A PROPOS DU THEOREME DE SCHOLZ . / 2 . - STRUCTURE DES GROUPES
D'UNITES LOCALES EN 3 . / 3 . - COMPATIBILITE DES CONJECTURES DE H. COHEN ET H.W. LENSTRA
AVEC LE THEOREME DE SCHOLZ . / 3.1. Enonces de H. Cohen et H.W. Lenstra . /
3.2. Compatibilite avec le theoreme de Scholz . / 4 . - REPARTITION DES UNITES FONDAMENTALES
3-PRIMAIRES . / 4.1. Compatibilite theorique . / 4.2. Etude statistique . / REFERENCES .

Conclusion sentence, end of section 3.2, located immediately after the chain of equalities
that re-derives law (2):

> "Le s lois (l) et (2) sont"
> "donc compatibles ave c l'enonce du theoreme de Schol z ."

LOCATION: section 3.2, final sentence, two OCR lines. The entry (line 30 and the Gate 0-3
quotation in the brief) quotes it as "Les lois (1) et (2) sont donc compatibles avec l'enonce
du theoreme de Scholz" — that is the same sentence with OCR spacing normalised and the
OCR's `l` restored to `1`. **The record's quotation is accurate and locatable. CONFIRMED.**

Also confirmed at first hand, and this closes an item the entry carried as Unverified at
line 20 ("the equivalence of his delta = 0 case with the +1 jump is Unverified by both
adversaries"): Dutarte defines the 0/1-valued map by Scholz's theorem as

> "Enfin le theoreme de Schol z permet de definir l'application :"
> "0 si 3-rg ( i|f(Clk)) = 3-rg(Cl k ) + 1"
> "1 si 3-rg ( t(Cl k )) = 3-rg(Cl k )"

and writes the transport relation

> "Pour Cl k (in) fl , r' o f (Cl k ) = r (Cl k ) + 1 - o (Clk ) ,"

i.e. r' = r + 1 - delta. **delta = 0 is exactly the +1 jump, stated twice, in the document.
That leg is no longer Unverified: CONFIRMED.**

Also: > "ou o et o' mesurent les defauts de 3-primarite ." (section 1/2) — delta is the
3-primarity defect, which is why the symbol is a delta ("defaut").

## (2) Equation (3), character by character

As the source's text layer renders it, section 3.2:

> "Si l'on considere que les images des generateurs de R0/kx3 sont determinees de facon independante"
> "les unes des autres et selon une loi d'equiprobabilite , on peut alors poser :"
> "P (o = 0 I r = a) = 3" (a+l )"
> "(3)"

Character-level report I asked for and received: **the exponent after the 3 contains no minus
sign or hyphen in the extracted text; the character immediately after the `3` is a double
quote `"`, standing in for a lost superscript minus.** The same loss is visible in eq. (1),
which the OCR renders `3- a(a+l)` with the minus surviving, and in eq. (2), `3 " a ^`, where
it does not. So the dropped minus is an OCR artifact, confirmed by its inconsistency across
three adjacent equations in the same document.

The record's reading, line 20: `P(delta = 0 | r = a) = 3^-(a+1)`.

Verdict on the reading: **correct in every part.**
- Conditioning event and conditioner: `delta = 0` given `r = a` — matches the OCR exactly.
- The damaged character is **delta (lower-case Greek delta)**, rendered `o` / `o`-circumflex /
  `5` / `6` by the OCR. This identification is MY INFERENCE, labelled as mine, and it rests on
  three things in the document: the OCR's own variant renderings of one symbol; Dutarte's gloss
  "o et o' mesurent les defauts de 3-primarite" (defaut -> delta); and the symbol's role in
  r' = r + 1 - delta with values 0 and 1. The brief's framing ("a delta rendered as the letter
  o") is right.
- The exponent is `-(a+1)`, negative. Settled three independent ways, all mine:
  (a) 3^(a+1) >= 3 for a >= 0 and cannot be a probability, so the minus is forced;
  (b) with j(a) = 3^-(a+1) the derivation closes EXACTLY in rational arithmetic, and with
      3^+(a+1) it does not and produces a negative "probability" at a = 0 (numbers below);
  (c) solving Dutarte's own recursion forward for the unknown jump law from (1) and (2)
      returns 1/3, 1/9, 1/27, ... uniquely.

## My own arithmetic

Script: `/tmp/claude-0/-home-claude-frontier-knowledge/a6b26651-5b07-5d11-a078-d31795831aa4/scratchpad/chk2.py`
(run with `python3 -I`). Exact rationals (`fractions.Fraction`), eta_infinity truncated at 300
factors. Laws taken in the shapes the OCR of (1) and (2) gives:
  (1) P(r=a)  = 3^-a(a+1) * eta_inf * eta_a^-2 * (1 - 3^-(a+1))^-1
  (2) P'(r'=a) = 3^-a^2    * eta_inf * eta_a^-2
Both sum to 1 (0.9999999999999999... -> printed 1.0 for each over a = 0..59), and
P(r=0) = 0.8401891168919234, P'(r'=0) = 0.5601260779279490. The 0.8402 matches the figure the
entry quotes from Malle's Table 9 at rank 0, which is an independent check that I have the
right pair of laws. (My first attempt used eta_a^-2 without the (1-3^-(a+1))^-1 factor; it
summed to 0.7023 and failed, and the OCR fragment "n oe n ; 2( i -3-^r 1" is that very factor.)

Dutarte's recursion, which he writes out himself:
  P'(r'=a) = P(r=a-1) * P(delta=0|r=a-1) + P(r=a) * P(delta=1|r=a)

With j(a) = 3^-(a+1), EXACT equality in rational arithmetic at every a = 0..9:
  a=0  P'=0.560126077927948995  rec=0.560126077927948995  EXACT=True
  a=1  P'=0.420094558445961719  rec=0.420094558445961719  EXACT=True
  a=2  P'=0.019691932427154456  rec=0.019691932427154456  EXACT=True
  a=3  P'=0.000087390232664887  rec=0.000087390232664887  EXACT=True
  a=4  P'=0.000000040964171562  rec=0.000000040964171562  EXACT=True
  a=5  P'=0.000000000002098431  rec=0.000000000002098431  EXACT=True
  a=6..9 EXACT=True
With j(a) = 3^+(a+1): a=0 gives rec = -1.680378233783847 against P' = 0.560126077927949,
and no a matches. Sign settled.

Forward solve for the unknown j from (1) and (2) alone:
  j(0)=1/3  j(1)=1/9  j(2)=1/27  j(3)=1/81  j(4)=1/243  j(5)=1/729  j(6)=1/2187  j(7)=1/6561
each equal to 3^-(a+1) as an exact rational.

This **upgrades the entry's own flagged vulnerability (line 60)**: adversary 1's uniqueness
claim for j(a) = 3^-(a+1) was "checked only in floating point at b = 0..5 to 1e-12". It is now
exact in rational arithmetic at a = 0..9, and the forward solve shows uniqueness constructively.
Caveat, mine: uniqueness here is uniqueness GIVEN laws (1) and (2) in the shapes above and
given Dutarte's rank-level recursion. It is not a statement about the full 3-part.

## (3) Derived or measured — DERIVED, under stated assumptions

**DERIVED, and the derivation is fully visible.** Equation (3) is POSITED, not measured: the
verb is "on peut alors poser", governed by an explicit conditional —

> "Si l'on considere que les images des generateurs de R0/kx3 sont determinees de facon independante"
> "les unes des autres et selon une loi d'equiprobabilite , on peut alors poser :"

The assumptions, stated by Dutarte:
1. The images of the generators of R_0/k^(x3) in k^x/k^(x3) are **mutually independent**;
2. and **equidistributed** (loi d'equiprobabilite), i.e. each hits 0 with probability 1/3.
   Section 3.2 makes that explicit: "nous avons implicitement suppose que la probabilite pour
   que cp(e ) vaille 0" / "est , comme pour les ocj , de l/ 3".
   Section 4.1 restates it: "en presupposant l'equiprobabi lite d'occurenc e des applications cp",
   "en supposant l'independance et l'equiprobabi lite , nous avons implicitement sup -pos e que".
3. Carried from section 1/2: Scholz's theorem, Leopoldt's Spiegelungssatz, the local-unit
   structure at 3 of section 2, plus a normalisation "Quitte a les remplacer par une puissanc e
   etranger e a 3 , on peut suppose r les elements". NOTE, mine: R_0 is never given an explicit
   definition in the served text; the nearest is section 1(ii), "ou les radicaux R' et R sont
   de s sous-groupe s de K contenant K ." So the object the independence hypothesis is imposed
   on is, in the text I could read, under-specified.
4. Underneath, the Cohen-Lenstra conjectural laws (1) and (2) themselves, attributed to [1].

Then (3) is USED to derive (2) from (1), which is the compatibility argument:

> "En appliquant ( *) , on a alor s :"
> "P'(r ' = a) = P ( r - o + 1 = a ) = P(r - o = a - 1) ."
> "Or on a l'egalite r - o = a - 1 si o = 0 et r = a - 1,ou bien si o = 1 et r = a,"
> "P'(r ' = a) = P ( o = 0 , r = a-l)+P(o= 1 , r=a )"
> "= P (r = a - i)p( o = 0 | r = a - l) + P(r=a)P(o=l|r=a) ."
> "En utilisant (l) et (3) , on obtient donc :"
> ... > "Ce qu'obtiennent independamment de (l) Cohen et Lenstra ."
> "On pourrait de facon analogue retrouve r l'expression P (r = a) donnee par"
> "(l) a partir de cell e de P1 (r1 = a) donnee par (2) . Le s lois (l) et (2) sont"
> "donc compatibles ave c l'enonce du theoreme de Schol z ."

No table of numerical data anywhere; no computation over discriminants of 3-class groups.

**One refinement the entry should take.** The entry (line 36) says Dutarte "measures nothing
over discriminants (his only empirical content is a test on fundamental units' 3-primarity)".
That is right about the class-group conditional law, and I confirm there is no such measurement.
But the empirical content is less unrelated than the entry's parenthesis implies: section 4.1
is headed "Compatibilite theorique" and derives, from the SAME independence-and-equiprobability
hypothesis that yields (3), that one third of fundamental units should be 3-primary; section 4.2,
"Etude statistique", then tests that:

> "Nous avons mis en oeuvre un algorithme permettant , par developpement en fraction continue de Jm , de calcule r rapidement"
> "La generation au hasard , a deux reprise s , de 1000 discriminants g compris entre 0 et 10"
> "Nous avons ensuite soumis l'hypothese << un tiers des unites"
> "fondamentales sont 3-primaires >> au test statistique du x ."
> "compris entre 0 et 10 nous permet de donner une reponse positive"
> "avec un risque d'erreur de 5 %"

So: two random samples of 1000 discriminants, upper bound 10^(something) — the exponent is lost
in the OCR text layer and I could not recover it — chi-square at 5%, hypothesis not rejected.
This is a small empirical test of the a = 0 / unit-level corollary of the hypothesis behind (3),
not a measurement of P(r_3(-3m) = r_3(m)+1 | Cl_3). The entry's category verdict (derivation,
not published answer) survives intact; the parenthesis should say that the unit test is a test
of the hypothesis that generates (3), which makes Dutarte very slightly MORE than a pure
derivation and does not touch the candidate's quantity.

## What this means for the entry's verdict

The Dutarte leg **STANDS**, in every particular the entry rests on it for, and two items the
entry carried as Unverified are now settled affirmatively:

- Line 20's UNVERIFIED ("Dutarte's eq. (3) reads P(delta = 0 | r = a) = 3^-(a+1) with delta = 0
  equivalent to the +1 jump. Read only once ... OCR damage") -> **CONFIRMED on both halves**, at
  first hand, by a second reader. The entry may move this out of Presuppositions-Unverified.
- Line 59-60's vulnerability (one reader, floating-point-only corroboration of the jump law) ->
  **the single-reader problem is cured** and the algebra is now exact rather than 1e-12 floating
  point. The residual honest caveat is only that uniqueness is conditional on laws (1) and (2)
  and on the rank-level recursion.
- Line 36's NUMBER CHECK ("Dutarte DERIVES and PREDICTS 3^-(a+1) at rank level and measures
  nothing over discriminants") -> **CONFIRMED**, with the one refinement above about section 4.2.

Consequences for the rejection. The entry's line 59 says "If the Fouvry-Kluners leg fell, the
verdict would survive on Dutarte alone, because the canonical wording's own conditioning clause
is false against it." That fallback is now first-hand verified: Dutarte, in 1984, treats exactly
the candidate's pair at exactly the candidate's prime, writes the compatibility statement the
intake said "no such statement appears to have been written down", and PREDICTS the residual
structure the canonical question says the single-field heuristics "neither predict nor forbid".
The FALSE presupposition at line 19 is confirmed false against the document itself. So the Gate 2
finding of a disguised known with a false motivating gap is grounded independently of
Fouvry-Kluners and independently of Sawin-Wood.

What this check does NOT touch, and the entry should keep saying so: Dutarte is rank-level and
derived, so the candidate's narrow limb — the MEASURED conditional at full-module grain over
d <= X — is untouched by this leg, and the entry's line 36 ("no universal of the form 'no paper
prints this' is asserted here") and its routing of the measurement limb remain correct. Nothing
I read bears on Fouvry-Kluners' unserved numerals, on Lee 2002, or on the unopened 3-rank table.

## Budget

0 of 1 searches used (none needed; the entry named the document and the DOI resolved).
5 of 6 fetches used, all on the single target URL. 1 fetch unspent. One route failed (curl via
the agent proxy, 403 CONNECT tunnel failed) and is recorded as a fetcher fact, not a document fact.
