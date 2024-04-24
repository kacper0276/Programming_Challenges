a, b, c = map(int, input().split())

if a + b == c:
    print(a, " + ", b, " == ", c)

if a - b == c:
    print(a, " - ", b, " == ", c)

if a * b == c:
    print(a, " * ", b, " == ", c)

if b != 0 and a / b == c:
    print(a, " / ", b, " == ", c)

if b != 0 and a % b == c:
    print(a, " % ", b, " == ", c)
