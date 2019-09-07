#!/bin/python3

import os
import sys

# Complete the solve function below.
def solve(n):
    if(n == 0):
        return "0";
    else:
        ans = ""
        while(n != 0):
            ans = str(n%2) + ans
            n = n/2
        print(type(ans))
        ans.replace("1","9")
        return ans

ans = solve(10)
print(ans)
