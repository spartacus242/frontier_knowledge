/* Exhaustive search with propagation: exists x_i in [s(i-1), s*i-1], i=1..n, 3-AP-free?
 * State: S (chosen values), F (forbidden positions bitset), Fv[v] (positions incompatible with v given S).
 * Candidate v in unassigned block is viable iff after choosing v no unassigned block is dead.
 * Non-viable candidates are removed (added to F) and this is iterated to a fixpoint; then branch on MRV block.
 * Optional reversal symmetry: with --sym, require x_1 - 0 <= (N-1) - x_n  (i.e. x_1 <= N-1-x_n), valid because
 * v -> N-1-v maps block i to block n+1-i and preserves 3-APs.
 * usage: mrv2.bin s n [--sym] [block=value ...]
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
typedef uint64_t u64;
#define MAXW 8
#define MAXN 512
static int s, n, N, W, sym = 0;
static u64 blockmask[64][MAXW];
static int bw0[64], bw1[64];                /* word range of each block */
static int assigned[64];
static int chosen[64], nchosen = 0;
static unsigned long long nodes = 0, props = 0;
static inline int getbit(const u64 *b, int p){ return (b[p>>6]>>(p&63))&1; }
static inline void setbit(u64 *b, int p){ b[p>>6] |= (u64)1<<(p&63); }

/* Fv stored per depth: Fv[d][v][W]. depth <= n. memory: 52*512*8*8 = 1.7MB ok */
static u64 Fv[65][MAXN][MAXW];

static void addpairs(u64 (*fv)[MAXW], int a){
    /* for every v: add positions w such that {a,v,w} is a 3-AP: 2a-v, 2v-a, (a+v)/2 */
    for(int v=0; v<N; v++){
        if(v==a) continue;
        int p=2*a-v; if(p>=0&&p<N) setbit(fv[v],p);
        p=2*v-a;     if(p>=0&&p<N) setbit(fv[v],p);
        if(((a+v)&1)==0) setbit(fv[v],(a+v)/2);
    }
}

/* block b dead under forbidden set F|G ? */
static inline int dead(int b, const u64 *F, const u64 *G){
    for(int w=bw0[b]; w<=bw1[b]; w++) if(blockmask[b][w] & ~F[w] & ~G[w]) return 0;
    return 1;
}
static inline int deadF(int b, const u64 *F){
    for(int w=bw0[b]; w<=bw1[b]; w++) if(blockmask[b][w] & ~F[w]) return 0;
    return 1;
}

/* propagate: remove non-viable candidates until fixpoint. returns 0 if contradiction */
static int propagate(u64 *F, u64 (*fv)[MAXW]){
    int changed = 1;
    while(changed){
        changed = 0;
        for(int b=0;b<n;b++) if(assigned[b]<0){
            if(deadF(b,F)) return 0;
            for(int v=s*b; v<s*b+s; v++){
                if(getbit(F,v)) continue;
                /* is v viable? check every other unassigned block */
                int ok=1;
                for(int c=0;c<n && ok;c++) if(c!=b && assigned[c]<0 && dead(c,F,fv[v])) ok=0;
                if(!ok){ setbit(F,v); changed=1; props++; if(deadF(b,F)) return 0; }
            }
        }
        if(sym && changed){ /* symmetry re-check handled in rec via F only; nothing here */ }
    }
    return 1;
}

static int rec(u64 *F, int depth){
    nodes++;
    if (nchosen == n) return 1;
    if(!propagate(F, Fv[depth])) return 0;
    int best=-1, bestc=1<<30;
    for(int i=0;i<n;i++) if(assigned[i]<0){
        int c=0; for(int w=bw0[i]; w<=bw1[i]; w++) c+=__builtin_popcountll(blockmask[i][w]&~F[w]);
        if(c==0) return 0;
        if(c<bestc){ bestc=c; best=i; }
    }
    u64 F2[MAXW];
    for(int v=s*best; v<s*best+s; v++){
        if(getbit(F,v)) continue;
        for(int w=0;w<W;w++) F2[w] = F[w] | blockmask[best][w] | Fv[depth][v][w];
        if(sym){
            /* enforce x_1 <= N-1-x_n: when both assigned (or now) prune accordingly */
            int a = (best==0)? v : assigned[0];
            int z = (best==n-1)? v : assigned[n-1];
            if(a>=0 && z>=0 && a > N-1-z) continue;
            if(a>=0 && z<0){ /* forbid z with N-1-z < a  i.e. z > N-1-a */
                for(int q=N-a; q<N; q++) setbit(F2,q);
            }
            if(z>=0 && a<0){ for(int q=N-z; q<s; q++) setbit(F2,q); } /* forbid a > N-1-z, a in block 1 */
        }
        memcpy(Fv[depth+1], Fv[depth], sizeof(u64)*MAXW*N);
        addpairs(Fv[depth+1], v);
        assigned[best]=v; chosen[nchosen++]=v;
        if(rec(F2, depth+1)) return 1;
        nchosen--; assigned[best]=-1;
    }
    return 0;
}

int main(int argc, char **argv){
    s=atoi(argv[1]); n=atoi(argv[2]); N=s*n; W=(N+63)/64;
    if(W>MAXW||n>64||N>MAXN){fprintf(stderr,"too big\n");return 2;}
    memset(blockmask,0,sizeof blockmask);
    for(int i=0;i<n;i++){ for(int v=s*i;v<s*i+s;v++) setbit(blockmask[i],v); bw0[i]=(s*i)>>6; bw1[i]=(s*i+s-1)>>6; }
    for(int i=0;i<n;i++) assigned[i]=-1;
    u64 F[MAXW]; memset(F,0,sizeof F);
    memset(Fv[0],0,sizeof(u64)*MAXW*N);
    int k0=3;
    if(argc>3 && strcmp(argv[3],"--sym")==0){ sym=1; k0=4; }
    for(int k=k0;k<argc;k++){
        int b,v; if(sscanf(argv[k],"%d=%d",&b,&v)!=2){fprintf(stderr,"bad arg\n");return 2;}
        b--; if(b<0||b>=n||v<s*b||v>=s*b+s){fprintf(stderr,"bad fix\n");return 2;}
        if(getbit(F,v)){ printf("RESULT %d %d UNSAT nodes=0 (fixed value forbidden)",s,n); for(int k2=k0;k2<argc;k2++)printf(" fix:%s",argv[k2]); printf("\n"); return 0; }
        for(int w=0;w<W;w++) F[w]|=blockmask[b][w]|Fv[0][v][w];
        addpairs(Fv[0], v);
        assigned[b]=v; chosen[nchosen++]=v;
    }
    if(sym){
        int a=assigned[0], z=assigned[n-1];
        if(a>=0 && z>=0 && a > N-1-z){ printf("RESULT %d %d UNSAT nodes=0 (symmetry-excluded)",s,n); for(int k2=k0;k2<argc;k2++)printf(" fix:%s",argv[k2]); printf("\n"); return 0; }
        if(a>=0 && z<0) for(int q=N-a;q<N;q++) setbit(F,q);
        if(z>=0 && a<0) for(int q=N-z;q<s;q++) setbit(F,q);
    }
    int r=rec(F,0);
    printf("RESULT %d %d %s nodes=%llu props=%llu%s", s, n, r?"SAT":"UNSAT", nodes, props, sym?" sym":"");
    for(int k=k0;k<argc;k++) printf(" fix:%s",argv[k]);
    if(r){ printf(" sol:"); for(int i=0;i<n;i++) printf(" %d",assigned[i]); }
    printf("\n");
    return 0;
}
