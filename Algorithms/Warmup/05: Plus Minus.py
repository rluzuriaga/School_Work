#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]


pos = 0
neg = 0
zero = 0

for number in arr:
    if (number > 0):
        pos += 1
    elif (number < 0):
        neg += 1
    elif (number == 0):
        zero += 1
    else:
        print("Error")

final_pos = int(pos) / int(n)
final_neg = int(neg) / int(n)
final_zero = int(zero) / int(n)

print(final_pos)
print(final_neg)
print(final_zero)
