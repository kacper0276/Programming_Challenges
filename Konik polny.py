import math

x, s = map(int, input().split())

result = 0

while x > 0:
    x -= s
    if s / 2 >= 2:
        s = math.floor(s / 2)
    else:
        s = 1
    result += 1

print(result)