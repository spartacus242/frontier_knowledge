// Same exhaustive DFS as dfs.c, but forbidden positions {2c-a : a in A} are added
// with a word-level shifted copy of the reflected set R = {K-a : a in A}.
// usage: dfs2 s [prefix gaps...]  ; output format identical to dfs.c
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#define MAXN 80
#define W 8
#define K (W*64-1)
typedef struct { uint64_t w[W]; } bs;
static int s,best=0,a[MAXN],bestset[MAXN]; static long long nodes=0;
static bs F[MAXN], R[MAXN];
static inline int isf(const bs*f,int p){return (f->w[p>>6]>>(p&63))&1;}
static inline void setb(bs*f,int p){ if(p>=0&&p<=K) f->w[p>>6]|=1ULL<<(p&63);}
// dst |= src shifted by t (bit i -> bit i+t), truncated to [0,K]
static inline void orshift(bs*dst,const bs*src,int t){
  if(t>=0){ int q=t>>6,r=t&63;
    for(int i=W-1;i>=q;i--){ uint64_t v=src->w[i-q]<<r; if(r&&i-q-1>=0) v|=src->w[i-q-1]>>(64-r); dst->w[i]|=v; }
  } else { int u=-t,q=u>>6,r=u&63;
    for(int i=0;i+q<W;i++){ uint64_t v=src->w[i+q]>>r; if(r&&i+q+1<W) v|=src->w[i+q+1]<<(64-r); dst->w[i]|=v; }
  }
}
static inline void add(int d,int c){ // build level d from level d-1 by adding c
  F[d]=F[d-1]; orshift(&F[d],&R[d-1],2*c-K); R[d]=R[d-1]; setb(&R[d],K-c); a[d]=c;
}
static void dfs(int d){
  nodes++;
  if(d>best){best=d;memcpy(bestset,a,sizeof(int)*d);}
  if(d>=MAXN-1){fprintf(stderr,"overflow\n");exit(1);}
  int x=a[d-1];
  if(x+s>K){fprintf(stderr,"range\n");exit(1);}
  for(int c=x+1;c<=x+s;c++){ if(isf(&F[d-1],c)) continue; add(d,c); dfs(d+1); }
}
int main(int argc,char**argv){
  s=atoi(argv[1]); memset(F,0,sizeof F); memset(R,0,sizeof R);
  a[0]=0; setb(&R[0],K); int d=1;
  for(int k=2;k<argc;k++){ int c=a[d-1]+atoi(argv[k]);
    if(isf(&F[d-1],c)){printf("prefix invalid\n");return 0;} add(d,c); d++; }
  dfs(d);
  printf("s=%d prefix_len=%d best=%d nodes=%lld set:",s,d,best,nodes);
  for(int i=0;i<best;i++)printf(" %d",bestset[i]); printf("\n");
}
