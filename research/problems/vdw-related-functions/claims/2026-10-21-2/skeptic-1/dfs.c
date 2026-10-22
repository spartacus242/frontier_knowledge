// Exhaustive DFS: max size of a 3-AP-free set {0=x1<...<xn} with consecutive gaps <= s.
// usage: dfs s [prefix gaps...]   (prefix fixes the first gaps; searches all extensions)
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#define MAXN 80
#define W 16  /* 1024 bits */
static int s, best=0, a[MAXN]; static long long nodes=0; static int bestset[MAXN];
static uint64_t F[MAXN][W];
static inline int isf(uint64_t*f,int p){return (f[p>>6]>>(p&63))&1;}
static inline void setf(uint64_t*f,int p){ if(p<W*64) f[p>>6]|=1ULL<<(p&63);}
static void dfs(int d){ // a[0..d-1] placed, F[d-1] forbidden set
  nodes++;
  if(d>best){best=d;memcpy(bestset,a,sizeof(int)*d);}
  if(d>=MAXN-1){fprintf(stderr,"overflow\n");exit(1);}
  int x=a[d-1];
  for(int c=x+1;c<=x+s;c++){
    if(isf(F[d-1],c)) continue;
    memcpy(F[d],F[d-1],sizeof(F[d]));
    for(int i=0;i<d;i++) setf(F[d],2*c-a[i]);
    a[d]=c; dfs(d+1);
  }
}
int main(int argc,char**argv){
  s=atoi(argv[1]); memset(F,0,sizeof F); a[0]=0; int d=1;
  for(int k=2;k<argc;k++){ int c=a[d-1]+atoi(argv[k]);
    if(isf(F[d-1],c)){printf("prefix invalid\n");return 0;}
    memcpy(F[d],F[d-1],sizeof(F[d])); for(int i=0;i<d;i++) setf(F[d],2*c-a[i]); a[d++]=c; }
  dfs(d);
  printf("s=%d prefix_len=%d best=%d nodes=%lld set:",s,d,best,nodes);
  for(int i=0;i<best;i++)printf(" %d",bestset[i]); printf("\n");
}
