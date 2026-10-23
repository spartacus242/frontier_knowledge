/* Exhaustive search: does there exist x_i in [s(i-1), s*i-1], i=1..n, with no 3-term AP?
 * MRV branching (block with fewest live candidates), bitset forbidden set, dead-block pruning.
 * usage: mrv.bin s n [block=value ...]   (blocks 1-based, values absolute)
 * prints: RESULT s n SAT|UNSAT nodes=... [solution]
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
typedef uint64_t u64;
#define MAXW 8
static int s, n, N, W;
static u64 blockmask[64][MAXW];
static int assigned[64];       /* value or -1 */
static int chosen[64], nchosen = 0;
static unsigned long long nodes = 0;
static inline int getbit(const u64 *b, int p){ return (b[p>>6]>>(p&63))&1; }
static inline void setbit(u64 *b, int p){ b[p>>6] |= (u64)1<<(p&63); }
static int popc(const u64 *a, const u64 *b){ int c=0; for(int w=0;w<W;w++) c+=__builtin_popcountll(a[w]&~b[w]); return c; }

static int rec(const u64 *F){
    nodes++;
    if (nchosen == n) return 1;
    /* pick unassigned block with min live candidates */
    int best=-1, bestc=1<<30;
    for(int i=0;i<n;i++) if(assigned[i]<0){
        int c = popc(blockmask[i], F);
        if(c==0) return 0;
        if(c<bestc){ bestc=c; best=i; }
    }
    u64 F2[MAXW];
    for(int v=s*best; v<s*best+s; v++){
        if(getbit(F,v)) continue;
        memcpy(F2,F,sizeof(u64)*W);
        for(int w=0;w<W;w++) F2[w] |= blockmask[best][w];
        for(int j=0;j<nchosen;j++){
            int a=chosen[j];
            int p=2*v-a; if(p>=0&&p<N) setbit(F2,p);
            p=2*a-v;     if(p>=0&&p<N) setbit(F2,p);
            if(((a+v)&1)==0) setbit(F2,(a+v)/2);
        }
        assigned[best]=v; chosen[nchosen++]=v;
        if(rec(F2)) return 1;
        nchosen--; assigned[best]=-1;
    }
    return 0;
}

int main(int argc, char **argv){
    s=atoi(argv[1]); n=atoi(argv[2]); N=s*n; W=(N+63)/64;
    if(W>MAXW||n>64){fprintf(stderr,"too big\n");return 2;}
    memset(blockmask,0,sizeof blockmask);
    for(int i=0;i<n;i++) for(int v=s*i;v<s*i+s;v++) setbit(blockmask[i],v);
    for(int i=0;i<n;i++) assigned[i]=-1;
    u64 F[MAXW]; memset(F,0,sizeof F);
    for(int k=3;k<argc;k++){
        int b,v; if(sscanf(argv[k],"%d=%d",&b,&v)!=2){fprintf(stderr,"bad arg\n");return 2;}
        b--; if(b<0||b>=n||v<s*b||v>=s*b+s){fprintf(stderr,"bad fix\n");return 2;}
        if(getbit(F,v)){ printf("RESULT %d %d UNSAT nodes=0 (fixed value forbidden)",s,n); for(int k2=3;k2<argc;k2++)printf(" %s",argv[k2]); printf("\n"); return 0; }
        for(int w=0;w<W;w++) F[w]|=blockmask[b][w];
        for(int j=0;j<nchosen;j++){ int a=chosen[j]; int p=2*v-a; if(p>=0&&p<N) setbit(F,p); p=2*a-v; if(p>=0&&p<N) setbit(F,p); if(((a+v)&1)==0) setbit(F,(a+v)/2); }
        assigned[b]=v; chosen[nchosen++]=v;
    }
    int r=rec(F);
    printf("RESULT %d %d %s nodes=%llu", s, n, r?"SAT":"UNSAT", nodes);
    for(int k=3;k<argc;k++) printf(" fix:%s",argv[k]);
    if(r){ printf(" sol:"); for(int i=0;i<n;i++) printf(" %d",assigned[i]); }
    printf("\n");
    return 0;
}
