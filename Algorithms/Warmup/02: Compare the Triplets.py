#!/bin/python3

import sys


a0,a1,a2 = input().strip().split(' ')
a0,a1,a2 = [int(a0),int(a1),int(a2)]
b0,b1,b2 = input().strip().split(' ')
b0,b1,b2 = [int(b0),int(b1),int(b2)]

ap = 0
bp = 0
if (a0 > b0):
    ap += 1
elif (b0 > a0):
    bp += 1
else:
    pass

if (a1 > b1):
    ap += 1
elif (b1 > a1):
    bp += 1
else:
    pass

if (a2 > b2):
    ap += 1
elif (b2 > a2):
    bp += 1
else:
    pass

output = str(ap) + ' ' + str(bp)
print(output)
