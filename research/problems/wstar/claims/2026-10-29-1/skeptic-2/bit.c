// bitset DFS: exhaustive search for good s-colouring of [1,n]. args: n s K start
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <immintrin.h>
typedef unsigned __int128 u128; typedef unsigned long long u64;
int n,s,K; long long start=0,jobid=0; long long nodes=0,jn0; u128 FULL;
typedef struct { u128 B[7]; u128 F[7]; u128 A; int col[128]; } St;
static u128 SPAR[2]; // parity masks over 128 bits
static inline u128 rev128(u128 x){ u64 lo=(u64)x,hi=(u64)(x>>64); return ((u128)__builtin_bswap64(0)<<0)|0; }
static inline u64 rev64(u64 x){ x=((x>>1)&0x5555555555555555ULL)|((x&0x5555555555555555ULL)<<1); x=((x>>2)&0x3333333333333333ULL)|((x&0x3333333333333333ULL)<<2); x=((x>>4)&0x0F0F0F0F0F0F0F0FULL)|((x&0x0F0F0F0F0F0F0F0FULL)<<4); return __builtin_bswap64(x);}
static inline u128 R128(u128 x){ return ((u128)rev64((u64)x)<<64)|rev64((u64)(x>>64)); }
// reflect about i: bit k -> 2i-k
static inline u128 refl(u128 b,int i){ u128 r=R128(b); int sh=2*i-127; if(sh>=0) r<<=sh; else r>>=(-sh); return r&FULL; }
// spread: bit k -> 2k-i
static inline u128 spread(u128 b,int i){
  u64 lo=(u64)b, hi=(u64)(b>>64); const u64 M=0x5555555555555555ULL;
  u128 L=((u128)_pdep_u64(lo>>32,M)<<64)|_pdep_u64(lo&0xffffffffULL,M); // bits 0..127
  u64 H=_pdep_u64(hi&0xffffffffULL,M); // bits 128..191 -> as high word
  if(i==0) return L&FULL;
  return ((L>>i)|((u128)H<<(128-i)))&FULL; }
// ends p(i),q(k) same parity: bit k -> (i+k)/2
static inline u128 mid(u128 b,int i){ int par=i&1; u64 mk=par?0xAAAAAAAAAAAAAAAAULL:0x5555555555555555ULL;
  u64 lo=(u64)b, hi=(u64)(b>>64);
  u128 c=(u128)_pext_u64(lo,mk) | ((u128)_pext_u64(hi,mk)<<32);
  int u=(i-par)/2; return (c<<(u+par))&FULL; }
static inline int ok_place(St*S,int i,int c){
  // returns 0 if conflict/wipeout
  u128 *F=S->F,*B=S->B;
  for(int x=1;x<=s;x++){ u128 bx=B[x]; if(!bx) continue;
    int z=2*c-x; if(z>=1&&z<=s) F[z]|=refl(bx,i);
    z=2*x-c; if(z>=1&&z<=s) F[z]|=spread(bx,i);
    if(((c+x)&1)==0) F[(c+x)/2]|=mid(bx,i); }
  B[c]|=(u128)1<<i; S->A|=(u128)1<<i; S->col[i]=c;
  u128 all=FULL; for(int y=1;y<=s;y++){ if(F[y]&B[y]) return 0; all&=F[y]; }
  if(all&~S->A&FULL) return 0; return 1; }
static inline int ctz128(u128 x){ u64 lo=(u64)x; return lo?__builtin_ctzll(lo):64+__builtin_ctzll((u64)(x>>64)); }
static inline int clz_pos(u128 x){ u64 hi=(u64)(x>>64); return hi?127-__builtin_clzll(hi):63-__builtin_clzll((u64)x); }
int sol[128]; int found=0;
int pick(St*S){ u128 g[8]; g[0]=FULL; for(int k=1;k<=s+1;k++)g[k]=0;
  for(int y=1;y<=s;y++){ u128 w=S->F[y]; for(int k=s;k>=1;k--) g[k]|=g[k-1]&w; }
  u128 un=~S->A&FULL;
  for(int k=s-1;k>=0;k--){ u128 cand=g[k]&~g[k+1]&un; if(cand){
      // closest to centre: key |2i-(n-1)|
      int best=-1,bk=1<<30; u128 lowhalf=cand&(((u128)1<<(n/2))-1), up=cand&~(((u128)1<<(n/2))-1);
      if(lowhalf){int i=clz_pos(lowhalf); int kk=abs(2*i-(n-1)); best=i;bk=kk;}
      if(up){int i=ctz128(up); int kk=abs(2*i-(n-1)); if(kk<bk){best=i;bk=kk;}}
      return best; } }
  return -1; }
int rec(St*S,int depth){
  if(depth==n){ for(int i=0;i<n;i++)sol[i]=S->col[i]; return 1; }
  nodes++;
  int jobhere=0; if(K&&depth==K){ if(jobid++<start) return 0; jobhere=1; jn0=nodes; }
  int p=pick(S); int ret=0;
  for(int c=1;c<=s;c++){
    if((S->F[c]>>p)&1) continue;
    if(depth==1){ int c0=S->col[ (n-1)/2 ]; // first placed position (n/2-1 or centre)
      if(n%2==0){ if(!(c0<=c && c0+c<=s+1)) continue; } }
    if(depth==0 && n%2==1 && c>(s+1)/2) continue;
    St T=*S; // copy
    if(ok_place(&T,p,c)){ if(rec(&T,depth+1)){ret=1;break;} }
  }
  if(jobhere&&!ret){ printf("JOB %lld found=0 nodes=%lld\n",jobid-1,nodes-jn0); fflush(stdout);} 
  if(jobhere&&ret) printf("JOB %lld found=1\n",jobid-1);
  return ret; }
int main(int argc,char**argv){ n=atoi(argv[1]); s=atoi(argv[2]); K=argc>3?atoi(argv[3]):0; start=argc>4?atoll(argv[4]):0;
  FULL=(((u128)1)<<n)-1; St S; memset(&S,0,sizeof S);
  // depth-0 pick must be fixed centre: pick() with nothing -> sets
  int r=rec(&S,0);
  printf("DONE n=%d s=%d good=%d nodes=%lld jobs=%lld\n",n,s,r,nodes,jobid);
  if(r){for(int i=0;i<n;i++)printf("%d",sol[i]);puts("");} }
