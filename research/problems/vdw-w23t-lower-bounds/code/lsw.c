// Clause-weighting (PAWS-like) local search for good 2-colourings of [1..n]:
// colour 0 (x=0) has no 3-AP, colour 1 (x=1) has no t-AP.
// usage: ls n t palin(0/1) seed maxflips cb [initfile] [outfile]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
static uint64_t rs;
static inline uint64_t rnd(){rs^=rs<<13;rs^=rs>>7;rs^=rs<<17;return rs;}
static inline double urand(){return (rnd()>>11)*(1.0/9007199254740992.0);}
int n,t,palin,nv,nc;
int *cstart,*clen,*cl; char *cpol; // clause literals (vars), polarity: 1 => need some var==1 ; 0 => need some var==0
int *ostart,*olen,*occ;
int *satc,*brk,*cw; long *wb,*wm; int *wlist,nw; char*inw; char *x; int *unsat,*upos,nun;
int var_of(int i){ return palin? (i<=n+1-i? i: n+1-i) : i; } // 1-based positions -> var id
int main(int argc,char**argv){
  n=atoi(argv[1]);t=atoi(argv[2]);palin=atoi(argv[3]);rs=strtoull(argv[4],0,10)*2654435761ULL+88172645463325252ULL;
  long long maxf=atoll(argv[5]);double wp=atof(argv[6]); long bumps=0; long smooth=getenv("SMOOTH")?atol(getenv("SMOOTH")):10;
  nv=n+1;
  // count clauses
  long cap=0; for(int k=0;k<2;k++){int L=k?t:3; for(int d=1;(long)(L-1)*d<n;d++) cap+= n-(long)(L-1)*d; }
  long totlit=0; for(int k=0;k<2;k++){int L=k?t:3; for(int d=1;(long)(L-1)*d<n;d++) totlit+=(long)L*(n-(L-1)*d);}
  cstart=malloc(sizeof(int)*(cap+1));clen=malloc(sizeof(int)*cap);cpol=malloc(cap);cl=malloc(sizeof(int)*totlit);
  nc=0;long p=0; int *tmp=malloc(sizeof(int)*(t+3)); char *seen=calloc(nv,1);
  // for palindromic mode, dedupe clauses: canonical (mirror) clauses appear twice; keep both (harmless)
  for(int k=0;k<2;k++){int L=k?t:3;
    for(int d=1;(long)(L-1)*d<n;d++) for(int a=1;a+(L-1)*d<=n;a++){
      int m=0; for(int j=0;j<L;j++){int v=var_of(a+j*d); if(!seen[v]){seen[v]=1;tmp[m++]=v;}}
      for(int j=0;j<m;j++)seen[tmp[j]]=0;
      if(palin){ int b=n+1-(a+(L-1)*d); if(b<a) continue; } // mirror image duplicates
      cstart[nc]=p;clen[nc]=m;cpol[nc]=k?0:1; for(int j=0;j<m;j++)cl[p++]=tmp[j]; nc++;
    }}
  olen=calloc(nv,sizeof(int));ostart=malloc(sizeof(int)*(nv+1));
  for(int c=0;c<nc;c++)for(int j=0;j<clen[c];j++)olen[cl[cstart[c]+j]]++;
  ostart[0]=0;for(int v=0;v<nv;v++)ostart[v+1]=ostart[v]+olen[v];
  occ=malloc(sizeof(int)*ostart[nv]); int *fill=calloc(nv,sizeof(int));
  for(int c=0;c<nc;c++)for(int j=0;j<clen[c];j++){int v=cl[cstart[c]+j];occ[ostart[v]+fill[v]++]=c;}
  x=calloc(nv,1); satc=calloc(nc,sizeof(int)); brk=calloc(nv,sizeof(int)); unsat=malloc(sizeof(int)*nc); upos=malloc(sizeof(int)*nc);
  const char*initf=argc>7?argv[7]:0; const char*outf=argc>8?argv[8]:"sol.txt";
  for(int v=1;v<nv;v++) x[v]= (urand()<0.8);
  if(initf&&strcmp(initf,"-")){FILE*f=fopen(initf,"r"); if(f){char s[100000]; if(fscanf(f,"%99999s",s)==1){int L=strlen(s); for(int i=1;i<=n;i++){int v=var_of(i); if(i<=L) x[v]=s[i-1]=='1';}} fclose(f);} }
  nun=0;
  cw=malloc(sizeof(int)*nc); wb=calloc(nv,sizeof(long)); wm=calloc(nv,sizeof(long)); wlist=malloc(sizeof(int)*nc); inw=calloc(nc,1); nw=0;
  for(int c=0;c<nc;c++){cw[c]=1;int s=0,last=-1;for(int j=0;j<clen[c];j++){int v=cl[cstart[c]+j]; if(x[v]==cpol[c]){s++;last=v;}} satc[c]=s; if(s==0){upos[c]=nun;unsat[nun++]=c; for(int j=0;j<clen[c];j++)wm[cl[cstart[c]+j]]++;} else if(s==1) {brk[last]++; wb[last]++;}}
  int best=nun; long long f; char *bx=malloc(nv); memcpy(bx,x,nv);
  for(f=0;f<maxf && nun>0;f++){
    int c=unsat[rnd()%nun]; int L=clen[c]; int v=-1; long bs=-(1L<<60); int nt=0;
    for(int j=0;j<L;j++){int u=cl[cstart[c]+j]; long sc=wm[u]-wb[u]; if(sc>bs){bs=sc;v=u;nt=1;} else if(sc==bs && rnd()%(++nt)==0) v=u;}
    if(bs<=0){
      if(urand()<wp){ v=cl[cstart[c]+rnd()%L]; }
      else { // bump weights of all unsat clauses
        for(int k=0;k<nun;k++){int cc=unsat[k]; cw[cc]++; if(!inw[cc]){inw[cc]=1;wlist[nw++]=cc;} for(int j=0;j<clen[cc];j++) wm[cl[cstart[cc]+j]]++;}
        if(++bumps%smooth==0){ // decrease all weights >1 by one
          int k2=0; for(int k=0;k<nw;k++){int cc=wlist[k]; cw[cc]--; int st=cstart[cc],ln=clen[cc];
            if(satc[cc]==0){for(int j=0;j<ln;j++)wm[cl[st+j]]--;}
            else if(satc[cc]==1){for(int j=0;j<ln;j++){int u=cl[st+j]; if(x[u]==cpol[cc]){wb[u]--;break;}}}
            if(cw[cc]>1) wlist[k2++]=cc; else inw[cc]=0; }
          nw=k2; }
        continue;
      }
    }
    // flip v
    x[v]^=1;
    for(int o=ostart[v];o<ostart[v+1];o++){int cc=occ[o]; int st=cstart[cc],ln=clen[cc];
      if(x[v]==cpol[cc]){ // became satisfying literal
        satc[cc]++;
        if(satc[cc]==1){ int u=unsat[--nun]; unsat[upos[cc]]=u; upos[u]=upos[cc]; brk[v]++; wb[v]+=cw[cc]; for(int jj=0;jj<ln;jj++) wm[cl[st+jj]]-=cw[cc]; }
        else if(satc[cc]==2){ for(int jj=0;jj<ln;jj++){int u=cl[st+jj]; if(u!=v && x[u]==cpol[cc]){brk[u]--;wb[u]-=cw[cc];break;}} }
      } else {
        satc[cc]--;
        if(satc[cc]==0){ upos[cc]=nun; unsat[nun++]=cc; brk[v]--; wb[v]-=cw[cc]; for(int jj=0;jj<ln;jj++) wm[cl[st+jj]]+=cw[cc]; }
        else if(satc[cc]==1){ for(int jj=0;jj<ln;jj++){int u=cl[st+jj]; if(x[u]==cpol[cc]){brk[u]++;wb[u]+=cw[cc];break;}} }
      }
    }
    if(nun<best){best=nun; memcpy(bx,x,nv);}
  }
  if(nun==0){FILE*fo=fopen(outf,"w"); for(int i=1;i<=n;i++)fputc('0'+x[var_of(i)],fo); fputc('\n',fo); fclose(fo); printf("SOLVED n=%d t=%d flips=%lld\n",n,t,f);}
  else { char bf[512]; snprintf(bf,512,"%s.best",outf); FILE*fo=fopen(bf,"w"); if(fo){for(int i=1;i<=n;i++)fputc('0'+bx[var_of(i)],fo); fputc('\n',fo); fclose(fo);} printf("FAIL n=%d t=%d best=%d now=%d flips=%lld\n",n,t,best,nun,f); }
  return nun!=0;
}
