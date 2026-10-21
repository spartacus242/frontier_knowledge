/* Exhaustive backtracking with forward checking for M(3,s) and G(3,s) (Brown-Landman-Robertson).
   Usage: fc M|G s T   -- decides whether a 3-AP-free choice of T elements exists.
   M: x_i in [(i-1)s, is-1], i = 1..T.   G: x_1 = 0 (translation), 1 <= x_{i+1} - x_i <= s.
   Forward checking: every chosen pair a < x forbids 2x - a; prune when a block (M) or an s-window the sequence must
   cross (G) is entirely forbidden.  Reflection symmetry (M: x -> Ts-1-x) is NOT used, to keep the check simple. */
#include <stdio.h>
#include <stdlib.h>
#define MAXP 8192
static int forb[MAXP], X[2048], s, T; static char mode; static long long nodes = 0; static unsigned char in[MAXP];
static int L, first = -1; /* positions 0..L-1 */
static int blocked_M(int n) { for (int j = n; j < T; j++) { int k; for (k = j*s; k < j*s + s; k++) if (!forb[k]) break; if (k == j*s + s) return 1; } return 0; }
static int blocked_G(int n) { /* last element x = X[n-1], r = T - n more needed: final >= x + r */
    int x = X[n-1], r = T - n, run = 0;
    for (int p = x + 1; p < x + r && p < L; p++) { if (forb[p]) { if (++run >= s) return 1; } else run = 0; }
    return 0;
}
static int rec(int n) {
    nodes++;
    if (n == T) return 1;
    int lo, hi;
    if (mode == 'M') { lo = n*s; hi = lo + s - 1; if (n == 0 && first >= 0) lo = hi = first; } else if (n == 0) { lo = hi = 0; } else { lo = X[n-1] + 1; hi = X[n-1] + s; }
    for (int x = lo; x <= hi; x++) {
        if (forb[x]) continue;
        X[n] = x; in[x] = 1;
        for (int i = 0; i < n; i++) { int y = 2*x - X[i]; if (y < L) forb[y]++; }
        int pr = (n + 1 < T) && (mode == 'M' ? blocked_M(n + 1) : blocked_G(n + 1));
        if (!pr && rec(n + 1)) return 1;
        for (int i = 0; i < n; i++) { int y = 2*x - X[i]; if (y < L) forb[y]--; }
        in[x] = 0;
    }
    return 0;
}
int main(int argc, char **argv) {
    mode = argv[1][0]; s = atoi(argv[2]); T = atoi(argv[3]); L = (mode == 'M') ? T*s : (T - 1)*s + 1;
    if (argc > 4) first = atoi(argv[4]); if (L > MAXP) return 2;
    int r = rec(0);
    printf("%c s=%d T=%d %s nodes=%lld", mode, s, T, r ? "FOUND" : "NONE", nodes);
    if (r) { printf(" :"); for (int i = 0; i < T; i++) printf(" %d", X[i]); }
    printf("\n"); return 0;
}
