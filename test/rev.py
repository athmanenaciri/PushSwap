#!/usr/bin/python3
import sys

a = sys.argv
a.pop(0)
for it in reversed(a):
    print(it, end =", ")
print("")
