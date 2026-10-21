// Cross-check against Rabung (1975): max span (x_last - x_1) of a 3-AP-free increasing sequence with all gaps <= s.
// Rabung's N*(s,3) should equal max span + 1.  Exhaustive DFS (finite since G(3,s) exists).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXB 4096
static int s,x[512],best=0; static unsigned char forb[MAXB]; static long long nodes=0;
static void rec(int i){
    if(x[i-1]>best) best=x[i-1];
    for(int v=x[i-1]+1; v<=x[i-1]+s; v++){
        if(forb[v]) continue; nodes++;
        for(int j=0;j<i;j++){int t=2*v-x[j]; if(t<MAXB) forb[t]++;}
        x[i]=v; rec(i+1);
        for(int j=0;j<i;j++){int t=2*v-x[j]; if(t<MAXB) forb[t]--;}
    }
}
int main(int argc,char**argv){ s=atoi(argv[1]); x[0]=0; rec(1); printf("s=%d max span=%d  => N*(%d,3)=%d (nodes %lld)\n",s,best,s,best+1,nodes); }
