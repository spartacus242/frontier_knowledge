/* Fast exhaustive search: exists x_i in [s(i-1), s*i-1], i=1..n, with no 3-term AP?
 * Forbidden positions kept as a byte array with per-block live counts; MRV branching; dead-block pruning.
 * Options: --sym  (reversal symmetry: require x_1 <= N-1-x_n)
 *          --tie=K  tie-break among min-count blocks: 0 lowest index, 1 nearest centre, 2 highest index
 * usage: mrv3.bin s n [--sym] [--tie=K] [block=value ...]
 * prints RESULT line; nodes = number of search-tree nodes (including root).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAXN 512
#define MAXB 64
static int s, n, N, sym = 0, tie = 0;
static int assigned[MAXB];
static int chosen[MAXB], nchosen = 0;
static unsigned long long nodes = 0;

typedef struct { unsigned char forb[MAXN]; signed char cnt[MAXB]; } State;

static inline int forbid(State *st, int p){ /* returns 1 if block became dead */
    if(!st->forb[p]){ st->forb[p]=1; if(--st->cnt[p/s]==0 && assigned[p/s]<0) return 1; }
    return 0;
}

static int rec(const State *st){
    nodes++;
    if(nchosen==n) return 1;
    int best=-1, bestc=1<<30;
    int centre = n/2;
    for(int i=0;i<n;i++) if(assigned[i]<0){
        int c=st->cnt[i];
        if(c==0) return 0;
        int better;
        if(tie==3){ better = (best<0) || abs(i-centre) < abs(best-centre); }   /* static centre-outward, counts ignored */
        else better = c<bestc;
        if(tie!=3 && c==bestc){
            if(tie==1) better = abs(i-centre) < abs(best-centre);
            else if(tie==2) better = 1;
        }
        if(better){ bestc=c; best=i; }
    }
    State st2;
    for(int v=s*best; v<s*best+s; v++){
        if(st->forb[v]) continue;
        memcpy(&st2, st, sizeof(State));
        assigned[best]=v;   /* so forbids landing in this block are ignored */
        int dead=0;
        for(int j=0;j<nchosen && !dead;j++){
            int a=chosen[j];
            int p=2*v-a; if(p>=0&&p<N) dead|=forbid(&st2,p);
            p=2*a-v;     if(p>=0&&p<N) dead|=forbid(&st2,p);
            if(((a+v)&1)==0) dead|=forbid(&st2,(a+v)/2);
        }
        if(!dead && sym){
            if(best==0 && assigned[n-1]<0){ for(int q=N-v;q<N;q++) dead|=forbid(&st2,q); }
            else if(best==n-1 && assigned[0]<0){ for(int q=N-v;q<s;q++) dead|=forbid(&st2,q); }
        }
        if(dead){ assigned[best]=-1; continue; }
        chosen[nchosen++]=v;
        if(rec(&st2)) return 1;
        nchosen--; assigned[best]=-1;
    }
    return 0;
}

int main(int argc, char **argv){
    s=atoi(argv[1]); n=atoi(argv[2]); N=s*n;
    if(n>MAXB||N>MAXN){fprintf(stderr,"too big\n");return 2;}
    State st; memset(&st,0,sizeof st);
    for(int i=0;i<n;i++){ assigned[i]=-1; st.cnt[i]=s; }
    int k=3;
    while(k<argc && argv[k][0]=='-'){
        if(strcmp(argv[k],"--sym")==0) sym=1;
        else if(strncmp(argv[k],"--tie=",6)==0) tie=atoi(argv[k]+6);
        else {fprintf(stderr,"bad option %s\n",argv[k]);return 2;}
        k++;
    }
    int k0=k;
    int dead=0;
    for(;k<argc;k++){
        int b,v; if(sscanf(argv[k],"%d=%d",&b,&v)!=2){fprintf(stderr,"bad arg\n");return 2;}
        b--; if(b<0||b>=n||v<s*b||v>=s*b+s||assigned[b]>=0){fprintf(stderr,"bad fix\n");return 2;}
        if(st.forb[v]) dead=1;
        for(int j=0;j<nchosen;j++){ int a=chosen[j]; int p=2*v-a; if(p>=0&&p<N) dead|=forbid(&st,p); p=2*a-v; if(p>=0&&p<N) dead|=forbid(&st,p); if(((a+v)&1)==0) dead|=forbid(&st,(a+v)/2); }
        assigned[b]=v; chosen[nchosen++]=v;
        for(int q=s*b;q<s*b+s;q++) st.forb[q]=1; st.cnt[b]=0;
    }
    if(sym){
        int a=assigned[0], z=assigned[n-1];
        if(a>=0 && z>=0 && a > N-1-z) dead=1;
        if(a>=0 && z<0) for(int q=N-a;q<N;q++) dead|=forbid(&st,q);
        if(z>=0 && a<0) for(int q=N-z;q<s;q++) dead|=forbid(&st,q);
    }
    int r = dead ? 0 : rec(&st);
    printf("RESULT %d %d %s nodes=%llu%s tie=%d", s, n, r?"SAT":"UNSAT", nodes, sym?" sym":"", tie);
    for(int k2=k0;k2<argc;k2++) printf(" fix:%s",argv[k2]);
    if(r){ printf(" sol:"); for(int i=0;i<n;i++) printf(" %d",assigned[i]); }
    printf("\n");
    return 0;
}
