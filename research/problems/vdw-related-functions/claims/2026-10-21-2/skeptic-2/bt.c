// exhaustive: is there a 3-AP-free set of N elements, x1=0, consecutive gaps <=S ?
// usage: bt S N D part nparts   (prefixes of D elements; prefix index % nparts == part)
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint64_t u64;
#define W 8
static int S,N,D,part,nparts;
static int chosen[128];
static u64 nodes=0,pfx=0,pruned=0;
static int found=0,maxdepth=0;
static inline int getb(const u64*F,int q){return (F[q>>6]>>(q&63))&1;}
// upper bound on how many more elements can be added after b given forbidden F
static int ubound(const u64*F,int b){
  // a9[q]=1 iff F[q..q+S-1] all 1
  u64 a[W],t[W];
  for(int i=0;i<W;i++)a[i]=F[i];
  int len=1;
  while(len*2<=S){ // a &= a>>len
    for(int i=0;i<W;i++){
      int ws=len>>6, bs=len&63; u64 v=0;
      if(i+ws<W){v=a[i+ws]>>bs; if(bs&&i+ws+1<W)v|=a[i+ws+1]<<(64-bs);}
      t[i]=a[i]&v;
    }
    for(int i=0;i<W;i++)a[i]=t[i];
    len*=2;
  }
  if(len<S){ int sh=S-len; // a &= F>>sh   (covers positions q..q+len-1 and q+sh..q+sh+len-1)
    for(int i=0;i<W;i++){
      int ws=sh>>6, bs=sh&63; u64 v=0;
      if(i+ws<W){v=a[i+ws]>>bs; if(bs&&i+ws+1<W)v|=a[i+ws+1]<<(64-bs);}
      t[i]=a[i]&v;
    }
    for(int i=0;i<W;i++)a[i]=t[i];
  }
  // end: first q>b with a[q]=1 (else W*64)
  int q=b+1,end=W*64;
  for(int i=q>>6;i<W;i++){ u64 v=a[i]; if(i==(q>>6)) v&=~0ULL<<(q&63); if(v){end=i*64+__builtin_ctzll(v);break;}}
  // count unforbidden in (b,end)
  int c=0;
  for(int i=q>>6;i<W;i++){
    u64 v=~F[i];
    if(i==(q>>6)) v&=~0ULL<<(q&63);
    int lo=i*64; if(lo>=end)break;
    if(end<lo+64) v&=(1ULL<<(end-lo))-1;
    c+=__builtin_popcountll(v);
  }
  return c;
}
static void dfs(int k,const u64*F){ // k elements chosen, last = chosen[k-1]
  if(k>maxdepth)maxdepth=k;
  if(k==N){found++; printf("FOUND:");for(int i=0;i<k;i++)printf(" %d",chosen[i]);printf("\n");fflush(stdout);return;}
  nodes++;
  int b=chosen[k-1];
  if(k==D){ if((pfx++%nparts)!=part)return; }
  if(k+ubound(F,b)<N){pruned++;return;}
  for(int c=b+1;c<=b+S;c++){
    if(getb(F,c))continue;
    if(c>9999)break;
    u64 G[W];
    for(int i=0;i<W;i++)G[i]=F[i];
    for(int i=0;i<k;i++){int p=2*c-chosen[i]; if(p<W*64)G[p>>6]|=1ULL<<(p&63);}
    chosen[k]=c;
    if(c+0>=W*64-1)continue;
    dfs(k+1,G);
    if(found)return;
  }
}
int main(int argc,char**argv){
  S=atoi(argv[1]);N=atoi(argv[2]);D=atoi(argv[3]);part=atoi(argv[4]);nparts=atoi(argv[5]);
  if(N*S>=W*64-S){fprintf(stderr,"too big\n");return 1;}
  u64 F[W]={0}; chosen[0]=0;
  int k0=1;
  if(argc>6){ char*p=argv[6]; int cnt=0; int v;
    while(*p){ v=strtol(p,&p,10); if(*p==',')p++; if(cnt>0){ for(int i=0;i<cnt;i++){int q=2*v-chosen[i]; if(q<W*64)F[q>>6]|=1ULL<<(q&63);} } chosen[cnt++]=v; }
    k0=cnt; }
  dfs(k0,F);
  printf("RESULT S=%d N=%d D=%d part=%d/%d found=%d nodes=%llu prefixes=%llu pruned=%llu maxdepth=%d\n",S,N,D,part,nparts,found,(unsigned long long)nodes,(unsigned long long)pfx,(unsigned long long)pruned,maxdepth);
}
