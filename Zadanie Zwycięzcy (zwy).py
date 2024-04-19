n = int(input())

arr = list(map(int, input().split()))
maxValue = max(arr)
result = ""

for i in range(len(arr)):
    if arr[i] == maxValue:
        result += chr(i + 65)

print(result)