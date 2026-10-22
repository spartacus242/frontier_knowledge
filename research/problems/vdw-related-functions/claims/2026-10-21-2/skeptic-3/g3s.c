/* Exhaustive backtracking search for 3-AP-free sets {0 = x1 < x2 < ... < xn}
 * with all consecutive gaps in [1, s].  Decides whether n = TARGET elements are
 * possible, and reports the largest n reached within the searched part.
 *
 * usage: g3s s target prefixdepth prefixindex
 *   The search tree is split by the first `prefixdepth` gaps; prefixindex in
 *   [0, s^prefixdepth) selects which fixed prefix of gaps this run explores
 *   (gap_j = 1 + digit_j of prefixindex written in base s).  All prefixes
 *   together partition the whole tree, so running every prefixindex is an
 *   exhaustive search.
 *
 * Invariant: forb[p] = number of pairs (y < x) of chosen elements with 2x-y = p,
 * i.e. forb[p] > 0 iff adding p would create a 3-AP with an earlier pair.
 * Since new elements are always larger than all previous ones, the only 3-APs
 * that could be created by adding z are {y, x, z} with y < x < z, z = 2x - y.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXPOS 2048
static int S, TARGET;
static int x[256];
static int forb[MAXPOS];
static int best = 0;
static unsigned long long nodes = 0;
static int found = 0;

static void dfs(int n) {          /* n elements chosen: x[0..n-1] */
    nodes++;
    if (n > best) best = n;
    if (n >= TARGET) {
        found = 1;
        printf("FOUND %d-element set:", n);
        for (int i = 0; i < n; i++) printf(" %d", x[i]);
        printf("\n");
        return;
    }
    int last = x[n-1];
    for (int g = 1; g <= S; g++) {
        int z = last + g;
        if (forb[z]) continue;
        /* add z */
        for (int i = 0; i < n; i++) forb[2*z - x[i]]++;
        x[n] = z;
        dfs(n + 1);
        for (int i = 0; i < n; i++) forb[2*z - x[i]]--;
        if (found) return;
    }
}

int main(int argc, char **argv) {
    if (argc != 5) { fprintf(stderr, "usage: %s s target prefixdepth prefixindex\n", argv[0]); return 2; }
    S = atoi(argv[1]); TARGET = atoi(argv[2]);
    int pd = atoi(argv[3]); long idx = atol(argv[4]);
    if (TARGET * S * 2 + 2 >= MAXPOS) { fprintf(stderr, "MAXPOS too small\n"); return 2; }
    memset(forb, 0, sizeof forb);
    x[0] = 0;
    int n = 1;
    int gaps[64];
    for (int j = 0; j < pd; j++) { gaps[j] = 1 + (idx % S); idx /= S; }
    if (idx != 0) { fprintf(stderr, "prefixindex out of range\n"); return 2; }
    /* apply prefix gaps; if the prefix itself is infeasible, part is empty */
    for (int j = 0; j < pd; j++) {
        int z = x[n-1] + gaps[j];
        if (forb[z]) {
            printf("PART s=%d target=%d pd=%d idx=%s prefix_infeasible_at_gap %d best=%d nodes=0 result=NO\n",
                   S, TARGET, pd, argv[4], j, n);
            return 0;
        }
        for (int i = 0; i < n; i++) forb[2*z - x[i]]++;
        x[n++] = z;
    }
    dfs(n);
    printf("PART s=%d target=%d pd=%d idx=%s prefix=", S, TARGET, pd, argv[4]);
    for (int j = 0; j < pd; j++) printf("%d%s", gaps[j], j+1<pd?",":"");
    printf(" best=%d nodes=%llu result=%s\n", best, nodes, found ? "YES" : "NO");
    return 0;
}
