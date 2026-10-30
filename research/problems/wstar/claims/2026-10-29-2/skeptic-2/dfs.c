// DFS over positions 1..n in order; forbid via counts. Symmetry: chi(1)<=3 (colour reversal). resumable by first-two-level prefix.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n,S; int c[100]; long long nodes=0; int maxd=0;
// check position p colour x against earlier: for each d with p-2d>=1: a=p-2d,b=p-d: need 2*c[b]-c[a]!=x
static inline int ok(int p,int x){for(int d=1;p-2*d>=1;d++){if(2*c[p-d]-c[p-2*d]==x)return 0;}return 1;}
int found=0;
void rec(int p){
  nodes++; if(p>maxd){maxd=p;}
  if(p>n){found=1;for(int i=1;i<=n;i++)printf("%d",c[i]);printf("\n");return;}
  for(int x=1;x<=S;x++){ if(p==1&&x>(S+1)/2)break; if(ok(p,x)){c[p]=x;rec(p+1);if(found)return;}}
}
int main(int a,char**v){n=atoi(v[1]);S=atoi(v[2]);rec(1);printf("n=%d S=%d found=%d nodes=%lld maxdepth=%d\n",n,S,found,nodes,maxd);}
