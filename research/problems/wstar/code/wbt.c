/* Second, independently written exhaustive search for w*(3; r) (cross-check of wdfs.c; shares no code with it).
   Usage: wbt r n w c_1 ... c_w   fixes the colours of the w central positions to c_1..c_w, then colours the remaining
   positions in a fixed centre-out order (alternately just left and just right of the coloured block), checking each new
   colour against every 3-AP whose other two members are already coloured. No look-ahead: plain backtracking.
   A 3-AP a < b < c is bad when col(b) - col(a) == col(c) - col(b). Prints FOUND with the colouring, or NONE. */
#include <stdio.h>
#include <stdlib.h>
static int r, n, col[200], seq[200], m;
static long long nodes;
static int okpos(int p) {          /* is col[p] consistent with all coloured positions? */
    int c = col[p];
    for (int d = 1; p - 2 * d >= 1 || p + 2 * d <= n || (p - d >= 1 && p + d <= n); d++) {
        if (p - 2 * d >= 1 && col[p - 2 * d] && col[p - d] && col[p - d] - col[p - 2 * d] == c - col[p - d]) return 0;
        if (p + 2 * d <= n && col[p + d] && col[p + 2 * d] && c - col[p + d] == col[p + d] - col[p + 2 * d]) return 0;
        if (p - d >= 1 && p + d <= n && col[p - d] && col[p + d] && c - col[p - d] == col[p + d] - c) return 0;
    }
    return 1;
}
static int rec(int k) {
    nodes++;
    if (k == m) return 1;
    int p = seq[k];
    for (int c = 1; c <= r; c++) {
        col[p] = c;
        if (okpos(p) && rec(k + 1)) return 1;
    }
    col[p] = 0;
    return 0;
}
int main(int argc, char **argv) {
    r = atoi(argv[1]); n = atoi(argv[2]); int w = atoi(argv[3]);
    if (argc != 4 + w || n >= 200) return 2;
    int lo = (n + 1 - w) / 2 + 1, ok = 1;
    for (int j = 0; j < w; j++) col[lo + j] = atoi(argv[4 + j]);
    for (int j = 0; j < w; j++) if (!okpos(lo + j)) ok = 0;
    int L = lo - 1, R = lo + w;
    while (L >= 1 || R <= n) { if (L >= 1) seq[m++] = L--; if (R <= n) seq[m++] = R++; }
    int res = ok && rec(0);
    printf("wbt r=%d n=%d cube=", r, n);
    for (int j = 0; j < w; j++) printf("%d", col[lo + j] ? col[lo + j] : atoi(argv[4 + j]));
    printf(" %s nodes=%lld", res ? "FOUND" : "NONE", nodes);
    if (res) { printf(" : "); for (int p = 1; p <= n; p++) printf("%d", col[p]); }
    printf("\n");
    return 0;
}
