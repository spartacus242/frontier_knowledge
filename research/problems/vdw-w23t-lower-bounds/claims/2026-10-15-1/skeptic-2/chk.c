#include <stdio.h>
#include <string.h>
int main(int c,char**v){static char s[5000];FILE*f=fopen(v[1],"r");fgets(s,5000,f);int n=strlen(s);while(n&&(s[n-1]=='\n'||s[n-1]=='\r'))s[--n]=0;
printf("len=%d\n",n);int bad=0,c0=0,c1=0;for(int i=0;i<n;i++){if(s[i]=='0')c0++;else if(s[i]=='1')c1++;else bad++;}
printf("zeros=%d ones=%d other=%d\n",c0,c1,bad);
for(int off=0;off<=1;off++){ /* off=1: integers 0..n-1 shifted */
 int best[2]={0,0};
 for(int a=0;a<n;a++)for(int d=1;a+d<n;d++){int col=s[a]-'0';int L=1;int x=a;
   if(a-d>=0&&s[a-d]==s[a])continue; /* only maximal starts */
   while(x+d<n&&s[x+d]==s[a]){x+=d;L++;}
   if(L>best[col])best[col]=L;}
 printf("longest AP colour0=%d colour1=%d (0-index/1-index irrelevant: translation invariant)\n",best[0],best[1]);break;}
/* also count 3-APs in colour 0 and 33-APs in colour1 */
long n3=0,n33=0;for(int a=0;a<n;a++)for(int d=1;a+32*d<n;d++){int ok=1;for(int k=0;k<33;k++)if(s[a+k*d]!='1'){ok=0;break;}n33+=ok;}
for(int a=0;a<n;a++)for(int d=1;a+2*d<n;d++)if(s[a]=='0'&&s[a+d]=='0'&&s[a+2*d]=='0')n3++;
printf("3AP in 0: %ld ; 33AP in 1: %ld\n",n3,n33);
/* longest 1-AP by d */
return 0;}
