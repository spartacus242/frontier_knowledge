// Compute max n (so value = max+1) for M-type with stride s and block width w (block i = [(i-1)s, (i-1)s+w-1]),
// and G-type with max gap g.  Iterative deepening on n until IMPOSSIBLE.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAXB 8192
static int s,w,mode,target; static int x[1024]; static uint8_t forb[MAXB]; static long long nodes;
static int rec(int i){
    if(i==target) return 1;
    int lo,hi;
    if(mode==0){ lo=i*s; hi=i*s+w-1; } else { if(i==0){lo=0;hi=0;} else {lo=x[i-1]+1; hi=x[i-1]+w;} }
    for(int v=lo; v<=hi; v++){
        if(forb[v]) continue; nodes++;
        for(int j=0;j<i;j++){int t=2*v-x[j]; if(t<MAXB) forb[t]++;}
        x[i]=v; if(rec(i+1)) return 1;
        for(int j=0;j<i;j++){int t=2*v-x[j]; if(t<MAXB) forb[t]--;}
    }
    return 0;
}
int main(int argc,char**argv){
    mode=(argv[1][0]=='G'); s=atoi(argv[2]); w=atoi(argv[3]); int nmax=argc>4?atoi(argv[4]):200;
    int n;
    for(n=1;n<=nmax;n++){ target=n; memset(forb,0,sizeof forb); nodes=0; if(!rec(0)) break; }
    printf("%s stride=%d width/gap=%d : max size=%d  value=%d (nodes at failing n=%lld)\n",mode?"G":"M",s,w,n-1,n,nodes);
    fflush(stdout); return 0;
}
