import sys

n,k,q = [int(i) for i in input().split(' ')]
a = [int(i) for i in input().split(' ')]

for _ in range(q):
    query = int(input())
    print(a[(query+n-k)%n])
