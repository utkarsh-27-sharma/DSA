# Enter your code here. Read input from STDIN. Print output to STDOUT
def readints():
    return [int(fld) for fld in input().split()]

def newposs(poss, arr, MOD):
    arrsq = [elt*elt%MOD for elt in arr]
    return set((a+b)%MOD for a in arrsq for b in poss)

k, m = readints()
poss = {0}
for _ in range(k):
    n, *arr = readints()
    assert len(arr)==n
    poss = newposs(poss, arr, m)
print(max(poss))
