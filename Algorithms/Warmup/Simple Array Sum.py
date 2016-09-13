#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

output = 0
for inter in arr:
    output = output + inter

print(output)
