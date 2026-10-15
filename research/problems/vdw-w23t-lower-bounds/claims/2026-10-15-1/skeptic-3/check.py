#!/usr/bin/env python3
"""Independent checker (skeptic-3). Written from scratch.

Reads the colouring string, verifies length/alphabet, and checks:
  - colour '0' contains no 3-term AP (a, a+d, a+2d), d>=1
  - colour '1' contains no 33-term AP, d>=1
Also reports the longest monochromatic AP in each colour, for every
interpretation (0-based / 1-based indices give the same result since
APs are translation-invariant; we also check reversed string and the
file with/without trailing newline, and the string from claim.md).
Method 1: brute force over all (a, d), extend as far as possible.
Method 2: SAT-style: enumerate every clause (every AP of length 3 and
          of length 33 inside [1..N]) and check it is satisfied.
"""
import sys, re, os

HERE = os.path.dirname(os.path.abspath(__file__))
CLAIM_DIR = os.path.dirname(HERE)

def load_file():
    raw = open(os.path.join(CLAIM_DIR, "colouring_t33_n1068.txt"), "rb").read()
    return raw

def load_claim_md():
    txt = open(os.path.join(CLAIM_DIR, "claim.md")).read()
    m = re.search(r"```\s*\n([01]+)\s*\n```", txt)
    return m.group(1) if m else None

def longest_ap(s, colour):
    """Longest AP entirely of `colour`, brute force over all start a and d>=1."""
    n = len(s)
    best = 0; best_ad = None
    for a in range(n):
        if s[a] != colour:
            continue
        for d in range(1, n - a):
            L = 1
            x = a + d
            while x < n and s[x] == colour:
                L += 1
                x += d
            if L > best:
                best = L; best_ad = (a + 1, d)   # 1-based start
    return best, best_ad

def sat_clause_check(s, k, colour):
    """Enumerate every AP of length k inside [0..n-1]; clause = 'not all colour'.
    Return (num_clauses, num_violated, first violation)."""
    n = len(s)
    total = 0; bad = 0; first = None
    for d in range(1, (n - 1) // (k - 1) + 1):
        for a in range(0, n - (k - 1) * d):
            total += 1
            ok = False
            for j in range(k):
                if s[a + j * d] != colour:
                    ok = True
                    break
            if not ok:
                bad += 1
                if first is None:
                    first = (a + 1, d)
    return total, bad, first

def analyse(label, s):
    print(f"=== {label} ===")
    print(f"length = {len(s)}")
    print(f"alphabet = {sorted(set(s))}")
    print(f"count of '0' = {s.count('0')}, count of '1' = {s.count('1')}")
    if set(s) - {'0', '1'}:
        print("FAIL: non 0/1 characters present")
        return False
    l0, ad0 = longest_ap(s, '0')
    l1, ad1 = longest_ap(s, '1')
    print(f"longest AP in colour 0: {l0} (start,d 1-based = {ad0})")
    print(f"longest AP in colour 1: {l1} (start,d 1-based = {ad1})")
    c3 = sat_clause_check(s, 3, '0')
    c33 = sat_clause_check(s, 33, '1')
    print(f"SAT-style: 3-AP clauses on colour 0: {c3[0]} clauses, {c3[1]} violated, first={c3[2]}")
    print(f"SAT-style: 33-AP clauses on colour 1: {c33[0]} clauses, {c33[1]} violated, first={c33[2]}")
    ok = (len(s) == 1068 and l0 <= 2 and l1 <= 32 and c3[1] == 0 and c33[1] == 0)
    print("VERDICT:", "PASS" if ok else "FAIL")
    return ok

if __name__ == "__main__":
    raw = load_file()
    print(f"raw file bytes = {len(raw)}; ends with newline: {raw.endswith(b'\\n')}")
    s_file = raw.decode().strip()
    s_md = load_claim_md()
    print(f"claim.md string identical to file string: {s_md == s_file}")
    ok = analyse("file string (stripped)", s_file)
    # alternative interpretations
    analyse("reversed string", s_file[::-1])
    analyse("swapped colours (0<->1)", s_file.translate(str.maketrans('01', '10')))
    # robustness: does the colouring extend? check prefix/suffix 1069 not applicable; check that
    # appending either colour to the string creates a violation (sanity: is 1068 maximal for this string)
    for c in '01':
        t = s_file + c
        l0, _ = longest_ap(t, '0'); l1, _ = longest_ap(t, '1')
        print(f"append '{c}': longest0={l0}, longest1={l1} -> {'still valid (extends!)' if l0<=2 and l1<=32 else 'breaks'}")
    for c in '01':
        t = c + s_file
        l0, _ = longest_ap(t, '0'); l1, _ = longest_ap(t, '1')
        print(f"prepend '{c}': longest0={l0}, longest1={l1} -> {'still valid (extends!)' if l0<=2 and l1<=32 else 'breaks'}")
    sys.exit(0 if ok else 1)
