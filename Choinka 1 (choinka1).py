n = int(input())

numChar = 1

for i in range(n):
    print(numChar * "#")
    numChar += 1

numChar = 1

for i in range(n + 1):
    print(numChar * "#")
    numChar += 1