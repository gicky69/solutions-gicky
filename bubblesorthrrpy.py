#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countSwaps' function below.
#
# The function accepts INTEGER_ARRAY a as parameter.
#

def countSwaps(a):
    # Write your code here
    r = 0
    for i in range(len(a)):
        
        for k in range(0, len(a) - i - 1):
            if a[k] > a[k+1]:
                temp = a[k]
                a[k] = a[k+1]
                a[k+1] = temp
                r += 1
                
    print("Array is sorted in",r,"swaps.")
    print("First Element:",a[0])
    print("Last Element:",a[-1])
        

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    countSwaps(a)
