// Exhaustive backtracking: does a good s-colouring of [1,n] exist?
// good = no 3-AP a<b<c with col(b)-col(a)==col(c)-col(b).
// Left-to-right fill with forward checking. Symmetry: complement c->s+1-c, force col(1) <= ceil(s/2).
// Usage: bt n s P ckptfile [countall]. Work split by prefixes of length P; completed prefix ids appended to ckptfile.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 200
int n,s,P,countall; int col[MAXN+1]; int forb[MAXN+1][8]; // forb count per colour
long long nodes=0, found=0;
static inline int ok(int i,int c){ return forb[i][c]==0; }
static void place(int i,int c,int delta){
  for(int j=1;j<i;j++){ int k=2*i-j; if(k>n) continue; int c3=2*c-col[j]; if(c3>=1&&c3<=s) forb[k][c3]+=delta; }
}
int dfs(int i){ // returns 1 if found and stopping
  nodes++;
  if(i>n){ found++; if(found==1){ printf("GOOD:"); for(int t=1;t<=n;t++) printf("%d",col[t]); printf("\n"); fflush(stdout);} return !countall; }
  for(int c=1;c<=s;c++){
    if(i==1 && c> (s+1)/2) break;
    if(!ok(i,c)) continue;
    col[i]=c;
    // forward check: placing c creates new forbiddances; detect wipeout
    place(i,c,+1);
    int wipe=0;
    for(int j=1;j<i && !wipe;j++){ int k=2*i-j; if(k>n) continue; int any=0; for(int d=1;d<=s;d++) if(!forb[k][d]){any=1;break;} if(!any) wipe=1; }
    if(!wipe){ if(dfs(i+1)){ place(i,c,-1); return 1;} }
    place(i,c,-1);
    col[i]=0;
  }
  return 0;
}
int main(int argc,char**argv){
  n=atoi(argv[1]); s=atoi(argv[2]); P=atoi(argv[3]); const char*ck=argv[4]; countall=argc>5;
  // read done prefix ids
  char *done=calloc(1<<24,1); FILE*f=fopen(ck,"r"); long id;
  if(f){ char line[256]; while(fgets(line,256,f)){ if(sscanf(line,"DONE %ld",&id)==1) done[id]=1; if(strncmp(line,"GOOD",4)==0 && !countall){ printf("already found: %s",line); return 0;} } fclose(f);}
  // enumerate prefixes of length P via odometer
  int pre[64]; for(int t=1;t<=P;t++) pre[t]=1; long pid=0;
  while(1){
    if(!done[pid]){
      memset(forb,0,sizeof forb); memset(col,0,sizeof col);
      int valid=1;
      if(pre[1]>(s+1)/2) valid=0;
      for(int t=1;t<=P && valid;t++){ if(!ok(t,pre[t])){valid=0;break;} col[t]=pre[t]; place(t,pre[t],+1); }
      long long before=nodes, fb=found; int stop=0;
      if(valid) stop=dfs(P+1);
      FILE*o=fopen(ck,"a");
      if(found>fb && !countall){ fprintf(o,"GOOD "); for(int t=1;t<=n;t++) fprintf(o,"%d",col[t]); fprintf(o,"\n"); }
      fprintf(o,"DONE %ld nodes %lld found %lld\n",pid,nodes-before,found-fb); fclose(o);
      if(stop){ printf("FOUND\n"); return 0; }
    }
    pid++;
    int t=P; while(t>=1 && pre[t]==s){ pre[t]=1; t--; } if(t<1) break; pre[t]++;
  }
  printf("FINISHED n=%d s=%d nodes=%lld found=%lld\n",n,s,nodes,found);
  return 0;
}
