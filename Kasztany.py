def sumArray(arr):
    suma = 0
    for el in range(1, len(arr)):
        suma = suma + arr[el]

    return suma


d = int(input())

for a in range(d):
    arr = list(map(int, input().split()))
    print(sumArray(arr))