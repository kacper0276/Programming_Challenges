import math

b = int(input())
log = math.log2(b)
help = int(log)

if log == help:
    print("%.0f" % help)
else:
    print(help + 1)