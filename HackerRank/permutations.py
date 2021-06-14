# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools
s,k = input().split(' ')
k = int(k)
l = list(itertools.permutations(s,k))
l.sort()
for i in l:
    s = ''
    for k in i:
        s+=k
    print(s)
