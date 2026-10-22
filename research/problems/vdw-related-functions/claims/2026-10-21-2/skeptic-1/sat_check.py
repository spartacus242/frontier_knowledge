# Independent SAT check: does a 3-AP-free set {0=x1<...<xn} with gaps <= s exist?
import sys
from pysat.solvers import Cadical153
from pysat.card import CardEnc, EncType
s,n=int(sys.argv[1]),int(sys.argv[2]); N=s*(n-1)
x=lambda i:i+1; y=lambda i:N+2+i; top=2*N+3
C=[[x(0)]]
for a in range(N+1):
  for d in range(1,(N-a)//2+1): C.append([-x(a),-x(a+d),-x(a+2*d)])
for k in range(N+1):
  C.append([-x(k),y(k)])
  if k<N: C.append([-y(k+1),y(k)])
for i in range(1,N-s+2):
  if i+s<=N: C.append([-y(i+s)]+[x(j) for j in range(i,i+s)])
card=CardEnc.atleast([x(i) for i in range(N+1)],bound=n,top_id=top,encoding=EncType.seqcounter)
S=Cadical153(bootstrap_with=C+card.clauses)
r=S.solve()
if r:
  m=S.get_model(); X=[i for i in range(N+1) if m[x(i)-1]>0]
  g=[X[i]-X[i-1] for i in range(1,len(X))]
  ok=all(2*b-a not in set(X) for i,a in enumerate(X) for b in X[i+1:]) and max(g)<=s
  print(s,n,"SAT",len(X),"verified" if ok else "BAD",X)
else: print(s,n,"UNSAT")
