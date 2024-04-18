n, m = map(int, input().split())

arr = [0 for i in range(n)]

wartosci = list(map(int, input().split()))
for i in range(len(wartosci)):
    if wartosci[i] == n + 1:
        maxValue = max(arr)
        arr = [maxValue for i in range(n)]
    else:
        arr[wartosci[i] - 1] += 1

res = ""
for i in range(len(arr)):
    res += str(arr[i]) + " "

print(res)
