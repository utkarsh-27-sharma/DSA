# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations_with_replacement
s,k = input().split(' ')
k = int(k)
s = [x for x in s]
s.sort()
l = list(combinations_with_replacement(s,k))
l.sort()
for i in l:
    s = ''
    for k in i:
        s+=k
    print(s)
