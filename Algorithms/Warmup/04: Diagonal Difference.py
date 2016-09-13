#!/bin/python3

import sys


n = int(input().strip())
a = []
for a_i in range(n):
    a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
    a.append(a_t)

sum1 = 0
sum2 = 0
i = n - 1
while(i >= 0):
    sum1 += a[i][i]
    i -= 1

i = 0
b = n - 1
while(b >= 0):
    sum2 += a[i][b]
    b -= 1
    i += 1

answer = sum1 - sum2
alt = answer
if(answer < 0):
    answer = alt - alt - alt
print(answer)
