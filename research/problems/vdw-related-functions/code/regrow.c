/* Local search for longer gap-bounded 3-AP-free sets: remove w consecutive elements of a set and try to refill the hole
   with w + 1 elements (or, at either end, regrow w + 1 elements past the new end). Exhaustive within each hole.
   Usage: regrow s wmin wmax < set.txt   prints any improved set found (one per line, sorted). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 256
#define LEN 8192
static int s, n, A[MAXN], fixedv[MAXN], nf, cur[MAXN], nc, forb[LEN], OFF = 2048;
static long long nodes, cap;
static int isfixed[LEN];
static void mark(int x, int d) {
    for (int i = 0; i < nf; i++) { int a = fixedv[i];
        int p = 2 * x - a; if (p + OFF >= 0 && p + OFF < LEN) forb[p + OFF] += d;
        p = 2 * a - x; if (p + OFF >= 0 && p + OFF < LEN) forb[p + OFF] += d;
        if (((a + x) & 1) == 0) forb[(a + x) / 2 + OFF] += d; }
    for (int i = 0; i < nc; i++) { int a = cur[i];
        int p = 2 * x - a; if (p + OFF >= 0 && p + OFF < LEN) forb[p + OFF] += d;
        p = 2 * a - x; if (p + OFF >= 0 && p + OFF < LEN) forb[p + OFF] += d;
        if (((a + x) & 1) == 0) forb[(a + x) / 2 + OFF] += d; }
}
/* place k elements after position x, the next fixed element is hi (or none if hi == INT_MAX), gaps <= s */
static int fill(int x, int k, int hi) {
    if (++nodes > cap) return 0;
    if (k == 0) return hi == 1 << 30 || hi - x <= s;
    for (int g = 1; g <= s; g++) {
        int y = x + g;
        if (hi != 1 << 30 && y >= hi) break;
        if (forb[y + OFF]) continue;
        if (hi != 1 << 30 && hi - y > k * s) continue;   /* the rest cannot reach hi */
        mark(y, 1); cur[nc++] = y;
        if (fill(y, k - 1, hi)) return 1;
        nc--; mark(y, -1);
    }
    return 0;
}
static void report(void) {
    int out[MAXN], m = 0;
    for (int i = 0; i < nf; i++) out[m++] = fixedv[i];
    for (int i = 0; i < nc; i++) out[m++] = cur[i];
    for (int i = 0; i < m; i++) for (int j = i + 1; j < m; j++) if (out[j] < out[i]) { int t = out[i]; out[i] = out[j]; out[j] = t; }
    int mn = out[0]; printf("n=%d :", m); for (int i = 0; i < m; i++) printf(" %d", out[i] - mn); printf("\n"); fflush(stdout);
}
int main(int argc, char **argv) {
    s = atoi(argv[1]); int wmin = atoi(argv[2]), wmax = atoi(argv[3]); cap = argc > 4 ? atoll(argv[4]) : 200000000LL;
    while (n < MAXN && scanf("%d", &A[n]) == 1) n++;
    for (int w = wmin; w <= wmax; w++)
        for (int st = 0; st + w <= n; st++) {
            /* hole = elements st .. st+w-1 removed; refill with w+1 between A[st-1] and A[st+w] */
            nf = 0; nc = 0; memset(forb, 0, sizeof forb);
            for (int i = 0; i < n; i++) if (i < st || i >= st + w) fixedv[nf++] = A[i];
            for (int i = 0; i < nf; i++) for (int j = i + 1; j < nf; j++) {   /* forbid from fixed pairs */
                int a = fixedv[i], b = fixedv[j], p;
                p = 2 * b - a; if (p + OFF < LEN) forb[p + OFF]++;
                p = 2 * a - b; if (p + OFF >= 0) forb[p + OFF]++;
                if (((a + b) & 1) == 0) forb[(a + b) / 2 + OFF]++;
            }
            nodes = 0;
            int ok;
            if (st + w == n) ok = fill(A[st - 1], w + 1, 1 << 30);          /* regrow at the right end */
            else if (st == 0) {                                              /* regrow at the left end: mirror */
                ok = 0;   /* handled by running on the reversed set */
            } else ok = fill(A[st - 1], w + (getenv("SAME") ? 0 : 1), A[st + w]);
            if (ok) { report(); return 0; }
        }
    printf("none\n");
    return 0;
}
