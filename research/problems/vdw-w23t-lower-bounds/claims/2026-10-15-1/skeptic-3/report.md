# Skeptic-3 report on claim packet 2026-10-15-1 (w(2;3,33) > 1068)

Date: 2026-10-15. Files read: only `../claim.md` and `../colouring_t33_n1068.txt`.
All code in this folder was written from scratch (`check.py`, `check_any.py`, `align.py`, `oeis_a33_chunks.py`).

## 1. REPRODUCED? -- YES

Checker: `check.py` (brute force over every start a and every difference d >= 1, extending each
monochromatic AP as far as it goes; plus an independent SAT-style pass that enumerates every clause,
i.e. every 3-AP inside [1..1068] for colour 0 and every 33-AP inside [1..1068] for colour 1, and
checks each clause is satisfied). Output (`check_output.txt`):

```
raw file bytes = 1069; ends with newline: False      (1068 chars + one trailing byte, stripped)
claim.md string identical to file string: True
length = 1068, alphabet = ['0','1'], count '0' = 93, count '1' = 975
longest AP in colour 0: 2   (e.g. start 11, d 17)
longest AP in colour 1: 32  (e.g. start 13, d 23)
SAT-style: 284622 3-AP clauses on colour 0, 0 violated
SAT-style: 17292 33-AP clauses on colour 1, 0 violated
VERDICT: PASS
```

Off-by-one / indexing attempts:
- 0-based vs 1-based indexing: irrelevant (APs are translation invariant).
- Reversed string: PASS (longest0 = 2, longest1 = 32).
- Swapped colours: FAIL (215396 3-AP violations) -- the claim uses the correct colour convention
  ('0' = sparse 3-AP-free colour with 93 zeros; '1' = 33-AP-free colour).
- Trailing byte: file is 1069 bytes; after strip() exactly 1068 chars, identical to claim.md.
- Extension sanity: appending or prepending either colour breaks validity (longest0 = 3 or
  longest1 = 33), so the string proves exactly w(2;3,33) > 1068, i.e. >= 1069, and nothing more.
- Longest APs are tight (2 and 32), so no slack hides a misreading of the AP lengths.

## 2. NOVEL? -- NO

The bound w(2;3,33) > 1068 (>= 1069) is already superseded in the public record. OEIS A171081
("Van der Waerden numbers w(2;3,n)") carries an approved comment dated Aug 21 2026 stating
a(33) >= 1072 (i.e. w(2;3,33) > 1071), with a certificate file, by Juan Lopez Marcano. This
predates the claim packet (Oct 15 2026) and is strictly stronger than > 1068.

Queries run and what each found:

| # | Query / fetch | Result |
|---|---|---|
| 1 | WebSearch "van der Waerden number w(2;3,33) lower bound" | arXiv:1102.5433 (AKS), Wikipedia, arXiv 2608.20824 (general w(k) bound, no specific t); nothing on t=33 |
| 2 | WebSearch Ahmed Kullmann Snevily "w(2;3,t)" further lower bounds table | AKS arXiv / DAM 2014, Swansea cronfa record; nothing newer |
| 3 | WebSearch "OEIS A171081 van der Waerden w(2;3,n)" | A171081, A171082, A157199 etc. |
| 4 | WebSearch "w(2;3,t)" lower bounds 2024-2026 arXiv | abigailhaddad/vdw-records (W(3,19..25) only, nothing for t=33); AKS; Monroe-style papers |
| 5 | WebFetch Wikipedia "Van der Waerden number" | off-diagonal table stops at w(2;3,20) = 389; no t=33 entry |
| 6 | WebFetch https://oeis.org/A171081 (twice, 2nd asking for verbatim quotes) | COMMENTS: "a(31) >= 954, a(33) >= 1072; the previous best lower bounds were a(31) >= 931, a(33) >= 1064 (Ahmed, Kullmann, and Snevily, 2014). - Juan Lopez Marcano, Aug 21 2026". LINKS: a171081_1.txt "a31_greater_than_or_equal_to_954_signature.txt", a171081_2.txt "a33_greater_than_or_equal_to_1072_signature.txt", Zenodo record 21943191 "Improved lower bounds for the van der Waerden numbers w(2;3,t)" (2026). STATUS: approved. |
| 7 | WebFetch https://arxiv.org/abs/1102.5433 and v4 PDF | Table 3 "further (strict) lower bounds": t=31 > 930, t=32 > 1006, t=33 > 1063, t=34 > 1143, t=35 > 1204. Confirms the packet's reading of AKS. |
| 8 | WebFetch https://zenodo.org/records/21943191 and its README.txt | Preprint by Lopez Marcano (Uber AI), Aug 15 2026, DOI 10.5281/zenodo.21943191; files main.pdf, README.txt, verify.py, t31_n931, t31_n940. README: "THEOREM: w(2;3,31) >= 941". main.pdf fetch was rate-limited (HTTP 429), not read. The t=33 certificate lives on OEIS, not in this Zenodo v1. |
| 9 | WebFetch https://oeis.org/A171081/a171081_2.txt (t=33 certificate), several chunked fetches | Page text reported as 1072 characters (= 1071-char 0/1 string + newline), consistent with a colouring of [1071] and a(33) >= 1072. The WebFetch summariser garbles long runs of 1s, so no exact transcription was obtainable; three independent chunk fetches (offsets 360, 720, and the tail of a full fetch) agreed exactly on the last ~711 characters, but the first ~360 differed between fetches. My best assembly `oeis_a33_string.txt` has 1068 chars (3 short) and fails `check_any.py` -- a transcription artefact, not evidence against the OEIS entry. Direct download of oeis.org, zenodo.org, web.archive.org and r.jina.ai is blocked by the sandbox proxy (403 CONNECT). |
| 10 | WebSearch mathoverflow / math.stackexchange "w(2;3,33)" / "W(3,33)" | No MO/MSE posts on this value |
| 11 | WebSearch "W(3,33)" OR "w(3,33)" OR "w(2;3,33)" with 1068/1069/1072 and with 2026 | Only generic pages (Wikipedia, datagenetics, Bergelson-Richter survey arXiv 2603.25922 with no off-diagonal table) |
| 12 | WebSearch Kullmann OKlibrary "3,33" | Only AKS and general Monroe / Blankenship-Cummings-Taranchuk papers |
| 13 | WebSearch Heule Kouril Monroe off-diagonal W(3,t) t>30 | Nothing beyond AKS for t>30 |
| 14 | WebSearch Google Scholar "w(2;3,t)" | AKS, 2102.01543, 1701.05603 -- none about t=33 |
| 15 | WebSearch zenodo Lopez Marcano | Only the author's LinkedIn; Zenodo record was reached via the OEIS link |

State of the literature as of 2026-10-15:
- AKS 2014 (arXiv:1102.5433 Table 3): w(2;3,33) > 1063 -- what the packet cites as "published best".
- OEIS A171081 (approved, Aug 21 2026, Lopez Marcano): w(2;3,33) >= 1072, with a length-1071
  certificate linked from the entry. This is the current best public lower bound and beats the
  claim's > 1068 by three.
- Wikipedia lists nothing for t > 20.

Caveat: I could not independently verify the OEIS 1071-certificate from inside this sandbox, so
the stronger bound is "publicly asserted with a certificate on an approved OEIS entry" rather
than "verified by me". Even so, the packet's claim is not novel: a stronger bound was in the
public record 8 weeks before the claim.

## 3. HONEST? -- YES (with a caveat on the premise)

- AKS define w(2;3,t) exactly as the packet does and state Table 3 bounds as strict
  inequalities "w(2;3,t) > n". So "w(2;3,33) > 1063" means what the packet says (good colouring
  of [1063]; w >= 1064). OEIS's "previous best a(33) >= 1064" agrees.
- A valid colouring of {1..1068} (colour 0 3-AP-free, colour 1 33-AP-free) proves
  w(2;3,33) > 1068, i.e. >= 1069. My checker confirms the artifact gives exactly this.
- The frozen definition (n >= 1064, colour 0 no 3-AP, colour 1 no 33-AP) is met literally with
  n = 1068. Nothing was narrowed or weakened; the claim does not overstate the artifact.
- Caveat: the premise "Published best lower bound ... > 1063" was already outdated when the
  packet was frozen (OEIS: >= 1072 since Aug 21 2026). "Improving the published bound" is true
  only relative to the 2014 paper, not relative to current knowledge. This is a literature-search
  failure, not a redefinition, so HONEST = YES but SIGN-OFF = NO because NOVEL = NO.

## Verdict
REPRODUCED=YES NOVEL=NO HONEST=YES SIGN-OFF=NO
