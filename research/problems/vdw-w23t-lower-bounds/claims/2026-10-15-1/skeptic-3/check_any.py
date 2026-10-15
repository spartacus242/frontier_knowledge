import sys
sys.path.insert(0, '.')
from check import longest_ap, sat_clause_check
s=open(sys.argv[1]).read().strip()
print("len",len(s),"alphabet",sorted(set(s)))
print("longest0",longest_ap(s,'0'),"longest1",longest_ap(s,'1'))
print("3AP clauses on 0:",sat_clause_check(s,3,'0'))
print("33AP clauses on 1:",sat_clause_check(s,33,'1'))
