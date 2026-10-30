#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n,S,K; int c[100]; long long nodes=0; int found=0;
static inline int ok(int p,int x){for(int d=1;p-2*d>=1;d++){if(2*c[p-d]-c[p-2*d]==x)return 0;}return 1;}
void rec(int p){
  nodes++;
  if(p>n){found=1;for(int i=1;i<=n;i++)printf("%d",c[i]);printf("\n");return;}
  for(int x=1;x<=S;x++){ if(ok(p,x)){c[p]=x;rec(p+1);if(found)return;}}
}
int main(int a,char**v){n=atoi(v[1]);S=atoi(v[2]);char*pre=v[3];K=strlen(pre);
 for(int i=1;i<=K;i++){c[i]=pre[i-1]-'0';if(!ok(i,c[i])){printf("%s INVALID\n",pre);return 0;}}
 rec(K+1);printf("%s %d %lld\n",pre,found,nodes);}
