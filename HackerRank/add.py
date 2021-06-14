# Enter your code here. Read input from STDIN. Print output to STDOUT
num = raw_input()
dist = set()
for i in range(int(num)):
    dist.add(raw_input())
print len(dist)
