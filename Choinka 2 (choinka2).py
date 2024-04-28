n = int(input())

numChar = 1
numDot = n

for i in range(n):
    print(f"{numDot * '.'}{numChar * '#'}{numDot * '.'}")
    numChar += 2
    numDot -= 1

numChar = 1
numDot = n

for i in range(n + 1):
    print(f"{numDot * '.'}{numChar * '#'}{numDot * '.'}")
    numChar += 2
    numDot -= 1