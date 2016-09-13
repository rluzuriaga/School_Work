#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]


summ = 0
i = 0
for a in arr:
    summ += a

print(summ)
