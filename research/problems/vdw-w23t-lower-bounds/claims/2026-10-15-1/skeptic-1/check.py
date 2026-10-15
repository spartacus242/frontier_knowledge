import sys,re
D='/home/claude/frontier_knowledge/research/problems/vdw-w23t-lower-bounds/claims/2026-10-15-1/'
s=open(D+'colouring_t33_n1068.txt').read().strip()
md=open(D+'claim.md').read()
blk=re.findall(r'```\n([01]+)\n```',md)
print('len',len(s),'chars',set(s),'matches claim.md block:',blk and blk[0]==s)
n=len(s)
def longest(col,c):
    # col: list of colours indexed 1..n
    S=set(i for i in range(1,len(col)) if col[i]==c)
    best=0;wit=None
    N=len(col)-1
    for d in range(1,N):
        for a in range(1,N+1):
            if a in S and (a-d not in S):
                L=0;x=a
                while x in S: L+=1;x+=d
                if L>best: best=L;wit=(a,d)
    return best,wit
col=[None]+list(s)
print('count0',s.count('0'),'count1',s.count('1'))
for c in '01': print('colour',c,'longest AP (len,(a,d))',longest(col,c))
# swapped colours
print('swapped: colour1 seen as 0 longest',longest(col,'1')[0],'<3?')
# reversed string (reflection invariance check)
r=[None]+list(s[::-1])
print('reversed:',[longest(r,c)[0] for c in '01'])
# extension test: can n+1 be added?
for c in '01':
    t=[None]+list(s+c); print('append',c,[longest(t,x)[0] for x in '01'])
