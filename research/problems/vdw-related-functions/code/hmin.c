/* H_s(k): the least N such that some k-element 3-AP-free subset of {0, ..., N-1} has every gap between consecutive
   elements at most s. Usage: hmin s K   prints "k H_s(k)" for k = 1..K (stops early if some k is impossible).
   For each k, tries N = H(k-1)+1, ... and asks for such a set containing 0 and N-1 (a minimal N forces both ends).
   Elements are placed left to right with forward checking (each chosen pair forbids 2x - a). After placing x with j
   elements still to come (including N-1): x + H(j+1) - 1 <= N-1 (x and the rest are consecutive elements, so they form a
   gap-bounded 3-AP-free (j+1)-set) and x + j*s >= N-1 (j more gaps of at most s); and no s consecutive forbidden positions
   may lie in (x, N-1). */
#include <stdio.h>
#include <stdlib.h>
static int H[256], N, s, X[256], forb[4096];
static long long nodes;
static int blocked(int x) { int run = 0; for (int p = x + 1; p < N - 1; p++) { if (forb[p]) { if (++run >= s) return 1; } else run = 0; } return 0; }
static int rec(int n, int k) {     /* n elements placed, the last is X[n-1] */
    nodes++;
    int x0 = X[n - 1];
    if (n == k - 1) return !forb[N - 1] && N - 1 - x0 <= s;
    int j = k - n;                  /* still to place, including N-1 */
    for (int x = x0 + 1; x <= x0 + s; x++) {
        if (x + H[j] - 1 > N - 1) break;
        if (x + (j - 1) * s < N - 1) continue;
        if (forb[x]) continue;
        X[n] = x;
        for (int i = 0; i < n; i++) { int y = 2 * x - X[i]; if (y < N) forb[y]++; }
        int ok = !forb[N - 1] && !blocked(x) && rec(n + 1, k);
        for (int i = 0; i < n; i++) { int y = 2 * x - X[i]; if (y < N) forb[y]--; }
        if (ok) return 1;
    }
    return 0;
}
int main(int argc, char **argv) {
    s = atoi(argv[1]); int K = atoi(argv[2]);
    H[1] = 1; H[2] = 2; printf("1 1\n2 2\n"); fflush(stdout);
    for (int k = 3; k <= K; k++) {
        int found = 0;
        for (N = H[k - 1] + 1; N <= (k - 1) * s + 1; N++) {
            X[0] = 0;
            for (int i = 0; i < N; i++) forb[i] = 0;
            if (rec(1, k)) { found = 1; break; }
        }
        if (!found) { printf("# no %d-element set\n", k); return 0; }
        H[k] = N; printf("%d %d\n", k, N); fflush(stdout);
    }
    return 0;
}
