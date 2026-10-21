// Exhaustive backtracking for M(3,s) and G(3,s) exactly as defined in the claim packet.
// M mode: x_i in [(i-1)s, is-1] (1-indexed), 3-AP-free; find max n for which such X exists; M(3,s)=max+1.
// G mode: x_1=0 (WLOG, translation invariance), x_i - x_{i-1} in [1,s], 3-AP-free; max size; G(3,s)=max+1.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAXB 4096
static int s, mode, target;          // target = number of elements we try to achieve
static int x[512];
static uint8_t forb[MAXB];           // forb[v]>0 means v would complete a 3-AP with chosen elements
static long long nodes=0;
static int best=0;
static int found=0;
static int bestx[512];

static int rec(int i){               // choose x[i] (0-indexed i)
    if(i==target){ found=1; memcpy(bestx,x,sizeof(int)*target); return 1; }
    int lo,hi;
    if(mode==0){ lo=i*s; hi=(i+1)*s-1; }
    else { if(i==0){lo=0;hi=0;} else { lo=x[i-1]+1; hi=x[i-1]+s; } }
    for(int v=lo; v<=hi; v++){
        if(forb[v]) continue;
        nodes++;
        // add v: forbid 2v-y for all earlier y (y<v so 2v-y>v)
        for(int j=0;j<i;j++){ int w=2*v-x[j]; if(w<MAXB) forb[w]++; }
        x[i]=v;
        if(i+1>best){ best=i+1; memcpy(bestx,x,sizeof(int)*best); }
        if(rec(i+1)) return 1;
        for(int j=0;j<i;j++){ int w=2*v-x[j]; if(w<MAXB) forb[w]--; }
    }
    return 0;
}
int main(int argc,char**argv){
    if(argc<4){fprintf(stderr,"usage: search M|G s n\n");return 1;}
    mode = (argv[1][0]=='G');
    s=atoi(argv[2]); target=atoi(argv[3]);
    if((long)target*s+s >= MAXB){fprintf(stderr,"too big\n");return 1;}
    memset(forb,0,sizeof forb);
    int r=rec(0);
    printf("%s s=%d n=%d : %s  (nodes=%lld, deepest=%d)\n", mode?"G":"M", s, target, r?"EXISTS":"IMPOSSIBLE", nodes, best);
    if(r){ for(int i=0;i<target;i++) printf("%d ",bestx[i]); printf("\n"); }
    return 0;
}
