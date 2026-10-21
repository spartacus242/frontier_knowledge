/* Min-conflicts local search for M(3,s) witnesses: choose c_i in [0,s) per block i (x_i = i*s + c_i), minimise the number
   of 3-APs among {x_i}. Usage: lsM s n seed maxsteps [noise%].  Prints a witness when the count reaches 0. */
#include <stdio.h>
#include <stdlib.h>
static int s, n, X[512], pos[8192];   /* pos[x] = block index + 1 if chosen, else 0 */
static int has(int t, int i, int j) { return t >= 0 && t < n*s && pos[t] && pos[t]-1 != i && pos[t]-1 != j; }
static int conflicts_at(int i, int x) { /* number of 3-APs {x, y, t} with y, t chosen in other blocks */
    int c = 0;
    for (int j = 0; j < n; j++) { if (j == i) continue; int y = X[j];
        c += has(2*y - x, i, j) + has(2*x - y, i, j) + (((x + y) & 1) == 0 ? has((x + y) / 2, i, j) : 0); }
    return c / 2;
}
static int total() { int c = 0; for (int i = 0; i < n; i++) c += conflicts_at(i, X[i]); return c / 3; }
int main(int argc, char **argv) {
    s = atoi(argv[1]); n = atoi(argv[2]); srand(atoi(argv[3])); long long maxs = atoll(argv[4]); int noise = argc > 5 ? atoi(argv[5]) : 10;
    for (int i = 0; i < n; i++) { X[i] = i*s + rand() % s; pos[X[i]] = i + 1; }
    int best = 1 << 30;
    for (long long step = 0; step < maxs; step++) {
        int bad[512], nb = 0;
        for (int i = 0; i < n; i++) if (conflicts_at(i, X[i])) bad[nb++] = i;
        if (!nb) { printf("FOUND s=%d n=%d step=%lld :", s, n, step); for (int i = 0; i < n; i++) printf(" %d", X[i]); printf("\n"); return 0; }
        int t = total(); if (t < best) { best = t; }
        int i = bad[rand() % nb]; pos[X[i]] = 0;
        int bc = 1 << 30, cand[16], nc = 0;
        if (rand() % 100 < noise) { cand[0] = i*s + rand() % s; nc = 1; }
        else for (int c = 0; c < s; c++) { int x = i*s + c, k = conflicts_at(i, x); if (k < bc) { bc = k; nc = 0; } if (k == bc) cand[nc++] = x; }
        X[i] = cand[rand() % nc]; pos[X[i]] = i + 1;
    }
    printf("FAIL s=%d n=%d best=%d\n", s, n, best); return 1;
}
