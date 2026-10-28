/* Tabu min-conflicts local search for colourings of [1, n] with r colours avoiding 3-APs that are monochromatic or whose
   colours form an AP (w*(3; r) lower bounds). Usage: wls r n seed maxsteps   prints FOUND <colouring> or FAIL. */
#include <stdio.h>
#include <stdlib.h>
static int r, n, col[512], tabu[512][16];
static int bad3(int x, int y, int z) { return y - x == z - y; }
static int conf_at(int i, int c) {        /* number of bad APs containing i if i had colour c */
    int k = 0;
    for (int d = 1; i + 2 * d < n; d++) k += bad3(c, col[i + d], col[i + 2 * d]);
    for (int d = 1; i - 2 * d >= 0; d++) k += bad3(col[i - 2 * d], col[i - d], c);
    for (int d = 1; i - d >= 0 && i + d < n; d++) k += bad3(col[i - d], c, col[i + d]);
    return k;
}
static int total(void) { int k = 0; for (int a = 0; a < n; a++) for (int d = 1; a + 2 * d < n; d++) k += bad3(col[a], col[a + d], col[a + 2 * d]); return k; }
int main(int argc, char **argv) {
    r = atoi(argv[1]); n = atoi(argv[2]); srand(atoi(argv[3])); long long maxs = atoll(argv[4]);
    for (int i = 0; i < n; i++) col[i] = 1 + rand() % r;
    int cur = total(), best = cur;
    for (long long step = 0; step < maxs && cur > 0; step++) {
        /* pick a random bad AP, move one of its elements to the best non-tabu colour */
        int bi = -1, bc = -1, bd = 1 << 30, cnt = 0;
        for (int tries = 0; tries < 50 && bi < 0; tries++) {
            int a = rand() % n, dmax = (n - 1 - a) / 2; if (!dmax) continue;
            int d = 1 + rand() % dmax;
            if (!bad3(col[a], col[a + d], col[a + 2 * d])) continue;
            int pos[3] = {a, a + d, a + 2 * d};
            for (int q = 0; q < 3; q++) {
                int i = pos[q], base = conf_at(i, col[i]);
                for (int c = 1; c <= r; c++) if (c != col[i]) {
                    int delta = conf_at(i, c) - base;
                    int ok = tabu[i][c] <= step || cur + delta < best;
                    if (ok && (delta < bd || (delta == bd && rand() % (++cnt) == 0))) { bd = delta; bi = i; bc = c; }
                }
            }
        }
        if (bi < 0) { int i = rand() % n; bi = i; bc = 1 + rand() % r; bd = conf_at(i, bc) - conf_at(i, col[i]); }
        tabu[bi][col[bi]] = step + 5 + rand() % 10;
        col[bi] = bc; cur += bd; if (cur < best) best = cur;
    }
    if (cur == 0 && total() == 0) { printf("FOUND "); for (int i = 0; i < n; i++) printf("%d", col[i]); printf("\n"); }
    else printf("FAIL best=%d\n", best);
    return 0;
}
