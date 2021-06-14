# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
s,i = input().split()
i = int(i)
s = list(s)
s.sort()
for j in range(1,i+1):
    for com in list(combinations(s,j)):
        print(''.join(com))
