/* Exhaustive search for w*(3; r) without SAT: backtracking over colour domains with forward checking.
   Usage: wdfs r n [pos colour ...]   (optional fixed colours; positions 1..n)
   Decides whether some r-colouring of [1, n] has no 3-term AP x < y < z (y - x = z - y) whose colours c(x), c(y), c(z)
   satisfy c(y) - c(x) = c(z) - c(y) (monochromatic included). Each position keeps a bitmask of allowed colours; when a
   position gets a colour, for every coloured position j the third member k of each 3-AP through both loses the one colour
   that would complete a bad pattern. Positions left with one colour are assigned at once (unit propagation); an empty
   domain backtracks. Branching: the uncoloured position with the fewest colours left, ties to the most central.
   Prints FOUND with a colouring, or NONE, and the node count. */
#include <stdio.h>
#include <stdlib.h>
#define MAXN 160
static int r, n, col[MAXN + 1], ncol, order[MAXN + 1];
static unsigned char dom[MAXN + 2][MAXN + 1];   /* domain snapshots per depth */
static long long nodes;
static int popc(unsigned v) { return __builtin_popcount(v); }
/* colour position p with c at depth level D; propagate; returns 0 on wipeout. Uses a queue of forced positions. */
static int assign(unsigned char *d, int p0, int c0) {
    int q[MAXN + 1], qc[MAXN + 1], qh = 0, qt = 0;
    q[qt] = p0; qc[qt++] = c0;
    while (qh < qt) {
        int p = q[qh], c = qc[qh++];
        if (col[p]) { if (col[p] != c) return 0; continue; }
        if (!(d[p] >> (c - 1) & 1)) return 0;
        col[p] = c; order[ncol++] = p; d[p] = 1u << (c - 1);
        for (int t = 0; t < ncol - 1; t++) {
            int j = order[t], y = col[j];
            int ks[3], fc[3], m = 0;
            ks[m] = 2 * j - p; fc[m++] = 2 * y - c;            /* j is the middle */
            ks[m] = 2 * p - j; fc[m++] = 2 * c - y;            /* p is the middle */
            if (((p + j) & 1) == 0) { ks[m] = (p + j) / 2; fc[m++] = (c + y) & 1 ? 0 : (c + y) / 2; }   /* k the middle */
            for (int u = 0; u < m; u++) {
                int k = ks[u], f = fc[u];
                if (k < 1 || k > n || f < 1 || f > r) continue;
                if (!(d[k] >> (f - 1) & 1)) continue;
                if (col[k]) return 0;                       /* already coloured f: bad AP */
                d[k] &= ~(1u << (f - 1));
                if (!d[k]) return 0;
                if (popc(d[k]) == 1) { q[qt] = k; qc[qt++] = __builtin_ctz(d[k]) + 1; }
            }
        }
    }
    return 1;
}
static int rec(int D) {
    nodes++;
    unsigned char *d = dom[D];
    int best = -1, bs = 99, bk = 0;
    for (int p = 1; p <= n; p++) if (!col[p]) {
        int s = popc(d[p]), key = abs(2 * p - n - 1);
        if (s < bs || (s == bs && key < bk)) { bs = s; bk = key; best = p; }
    }
    if (best < 0) return 1;
    for (int c = 1; c <= r; c++) if (d[best] >> (c - 1) & 1) {
        int save = ncol;
        for (int p = 1; p <= n; p++) dom[D + 1][p] = d[p];
        if (assign(dom[D + 1], best, c) && rec(D + 1)) return 1;
        while (ncol > save) col[order[--ncol]] = 0;
    }
    return 0;
}
int main(int argc, char **argv) {
    if (argc < 3 || argc % 2 == 0) { fprintf(stderr, "usage: wdfs r n [pos colour ...]\n"); return 2; }
    r = atoi(argv[1]); n = atoi(argv[2]);
    if (r < 1 || r > 8 || n < 1 || n > MAXN) return 2;
    for (int p = 1; p <= n; p++) dom[0][p] = (1u << r) - 1;
    int ok = 1;
    printf("wdfs r=%d n=%d fixed=", r, n);
    for (int a = 3; a + 1 < argc; a += 2) {
        int p = atoi(argv[a]), c = atoi(argv[a + 1]);
        printf("%d:%d,", p, c);
        if (ok && !assign(dom[0], p, c)) ok = 0;
    }
    int res = ok && rec(0);
    printf(" %s nodes=%lld", res ? "FOUND" : "NONE", nodes);
    if (res) { printf(" : "); for (int p = 1; p <= n; p++) printf("%d", col[p]); }
    printf("\n");
    return 0;
}
