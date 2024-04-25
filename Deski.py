n = int(input())
arr = list(map(int, input().split()))

arr.sort()

if n > 3:
    print(arr[-4] * arr[-4])
else:
    print(0)