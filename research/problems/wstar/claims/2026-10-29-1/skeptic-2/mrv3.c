// DFS with MRV + full forward checking. args: n s tiebreak(0 low-index,1 middle-out) [fixed prefix of colours for pos order job: "first position colour" via argv4 optional]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n,s,tb; int tot[128]; int col[128]; int forb[128][8]; int nf[128]; int assigned=0;
long long nodes=0;
int trail[1<<20][2]; int tp=0; // entries (t,z) incremented
static inline int addf(int t,int z){ if(z<1||z>s) return 1; trail[tp][0]=t; trail[tp][1]=z; tp++;
  tot[t]++; if(forb[t][z]++==0) nf[t]++;
  if(col[t]==z) return 0; if(col[t]==0 && nf[t]==s) return 0; return 1;}
int place(int p,int c){ col[p]=c; assigned++; int ok=1;
  if(forb[p][c]) ok=0; // should not happen
  for(int q=1;q<=n;q++){ if(q==p||!col[q])continue; int cq=col[q];
    int sum=p+q; if(!(sum&1)){int m=sum/2; int cs=c+cq; if(!(cs&1)) if(!addf(m,cs/2)) ok=0;}
    int r=2*p-q; if(r>=1&&r<=n) if(!addf(r,2*c-cq)) ok=0;
    r=2*q-p; if(r>=1&&r<=n) if(!addf(r,2*cq-c)) ok=0;
  } return ok;}
void unplace(int p,int mark){ while(tp>mark){tp--; int t=trail[tp][0],z=trail[tp][1]; tot[t]--; if(--forb[t][z]==0) nf[t]--;} col[p]=0; assigned--;}
int pick(){ int best=-1,bd=99,bk=1<<30; for(int p=1;p<=n;p++){ if(col[p])continue; int d=s-nf[p]; int k= tb==1? abs(2*p-n-1): tb==0? p : tb==2 ? -tot[p] : -tot[p]*1000+abs(2*p-n-1); if(d<bd||(d==bd&&k<bk)){bd=d;best=p;bk=k;}} return best;}
long long jobid=0,start=0; int K=0; long long jn0; int sol[128]; int anyf=0;
int rec(){
  if(assigned==n){ memcpy(sol,col,sizeof col); return 1;} nodes++;
  int jobhere=0;
  if(K && assigned==K){ if(jobid++<start) return 0; jobhere=1; jn0=nodes; }
  int p=pick(); 
  for(int c=1;c<=s;c++){ if(forb[p][c])continue;
    if(assigned==0 && c>(s+1)/2) break;
    int mark=tp; int ok=place(p,c); int r=0; if(ok) r=rec(); unplace(p,mark); if(r){ if(jobhere){printf("JOB %lld found=1\n",jobid-1);} return 1;} }
  if(jobhere){ printf("JOB %lld found=0 nodes=%lld\n",jobid-1,nodes-jn0); fflush(stdout);} return 0;}
double knuth(){ double est=0,w=1; srand(12345);
  return 0;}
int main(int argc,char**argv){ n=atoi(argv[1]); s=atoi(argv[2]); tb=atoi(argv[3]); K=argc>4?atoi(argv[4]):0; start=argc>5?atoll(argv[5]):0;
  for(int i=6;i<argc;i++){int p,c; sscanf(argv[i],"%d:%d",&p,&c); place(p,c);} 
  if(getenv("KN")){ int N=atoi(getenv("KN")); double tot=0; srand(7);
   for(int it=0;it<N;it++){ double w=1,cnt=0; int mk[200],mp[200],md=0; int base=tp;
     while(assigned<n){ cnt+=w; int p=pick(); int cs[8],m=0; for(int c=1;c<=s;c++){ if(forb[p][c])continue; if(assigned==0&&c>(s+1)/2)break; cs[m++]=c;}
       if(!m)break; int c=cs[rand()%m]; w*=m; mk[md]=tp; mp[md]=p; md++; int ok=place(p,c); if(!ok)break; }
     tot+=cnt; while(md>0){md--; unplace(mp[md],mk[md]);} }
   printf("estimated nodes %.3e\n",tot/N); return 0;}
  int r=rec(); printf("DONE n=%d s=%d tb=%d good=%d nodes=%lld jobs=%lld\n",n,s,tb,r,nodes,jobid);
  if(r){for(int i=1;i<=n;i++)printf("%d",sol[i]);puts("");} }
