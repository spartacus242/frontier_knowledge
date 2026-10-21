#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// M: blocks mode; G: gap mode.  usage: dfs M s  | dfs G s ; prints max 3AP-free size reached +1
int s; char in[4000]; int x[400]; int best=0; int mode;
int ok(int v){ // v new max element; any 3AP (a,b,v): a=2b-v
  for(int d=1; 2*d<=v; d++) if(in[v-d]&&in[v-2*d]) return 0; return 1;}
void dfsM(int i){ // i = number placed
  if(i>best)best=i;
  for(int v=i*s; v<=i*s+s-1; v++){ if(ok(v)){in[v]=1;x[i]=v;dfsM(i+1);in[v]=0;}}
}
void dfsG(int n,int last){
  if(n>best)best=n;
  for(int v=last+1; v<=last+s; v++){ if(ok(v)){in[v]=1;dfsG(n+1,v);in[v]=0;}}
}
int main(int c,char**a){ s=atoi(a[2]); memset(in,0,sizeof in);
 if(a[1][0]=='M') dfsM(0); else {in[0]=1; dfsG(1,0);}
 printf("%s(3,%d) = %d  (max free size %d)\n",a[1],s,best+1,best); }
