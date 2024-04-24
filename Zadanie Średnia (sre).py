    import math

    n = int(input())
    arr = list(map(int, input().split()))
    a, b = map(int, input().split())

    suma = sum(arr[a-1:b])

    print(math.floor(suma / ((b-a)+1)))