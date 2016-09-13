#!/bin/python3

import sys


n = int(input().strip())

k = 1
i = n
while(i != 0):
    space = ' ' * (i - 1)
    has = '#' * k
    out = space + has
    print(out)
    i -= 1
    k += 1
