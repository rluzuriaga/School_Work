#!/bin/python3

import sys


time = input().strip()

if (time[8] == 'A' or time[8] == 'a'):
    if (time[:2] == '12'):
        new_hh = '00'
        new_time = new_hh + time[2:8]
        print(new_time)
    else:
        new_time = time[:8]
        print(new_time)
elif(time[8] == 'P' or time[8] == 'p'):
    if (time[:2] == '12'):
        new_time = time[:8]
        print(new_time)
    else:
        temp = int(time[:2])
        new_hh = temp + 12
        new_hh = str(new_hh)
        new_time = new_hh + time[2:8]
        print(new_time)

    
