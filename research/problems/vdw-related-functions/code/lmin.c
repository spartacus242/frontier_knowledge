/* Lmin(k): the least N such that some k-element subset of {0, ..., N-1} has no 3-term AP (OEIS A065825 indexes the same
   numbers). Usage: lmin K   prints Lmin(1..K).  For each k, tries N = Lmin(k-1)+1, ... and asks for a 3-AP-free k-set
   containing 0 and N-1 (a minimal N forces both ends). Elements are placed left to right; j elements still to place after
   x need x + Lmin(j+1) - 1 <= N - 1 (they and x form a 3-AP-free (j+1)-set). */
#include <stdio.h>
#include <stdlib.h>
static int L[256], N, K, X[256], forb[1024];
static long long nodes;
static int rec(int n, int k) {     /* n elements placed, the last is X[n-1] */
    nodes++;
    if (n == k - 1) {               /* last element is N-1 */
        if (forb[N - 1]) return 0;
        return 1;
    }
    int j = k - n;                  /* still to place, including N-1 */
    for (int x = X[n - 1] + 1; x + L[j] - 1 <= N - 1; x++) {
        if (forb[x]) continue;
        if (x + L[j] - 1 > N - 1) break;
        X[n] = x;
        for (int i = 0; i < n; i++) { int y = 2 * x - X[i]; if (y < N) forb[y]++; }
        int ok = rec(n + 1, k);
        for (int i = 0; i < n; i++) { int y = 2 * x - X[i]; if (y < N) forb[y]--; }
        if (ok) return 1;
    }
    return 0;
}
int main(int argc, char **argv) {
    K = argc > 1 ? atoi(argv[1]) : 30;
    L[1] = 1; L[2] = 2; printf("1 1\n2 2\n"); fflush(stdout);
    for (int k = 3; k <= K; k++) {
        for (N = L[k - 1] + 1; ; N++) {
            if (N >= 1000) return 1;
            X[0] = 0;
            for (int i = 0; i < N; i++) forb[i] = 0;
            if (rec(1, k)) break;
        }
        L[k] = N; printf("%d %d\n", k, N); fflush(stdout);
    }
    return 0;
}
