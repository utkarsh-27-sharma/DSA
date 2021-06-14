import numpy

n,m=map(int,input().split())

lista=[list(map(int,input().split())) for i in range(n)]
a=numpy.array(lista)

print(numpy.transpose(a))
print(a.flatten())
# https://www.hackerrank.com/challenges/np-transpose-and-flatten/problem
