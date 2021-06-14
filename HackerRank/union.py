# Enter your code here. Read input from STDIN. Print output to STDOUT
num1 = int(input())
setA = set(map(int, input().split()))
num2 = int(input())
setB = set(map(int, input().split()))

print(len(setA.union(setB)))
