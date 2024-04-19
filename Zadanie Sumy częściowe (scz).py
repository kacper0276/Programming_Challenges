n = int(input())

arr = list(map(int, input().split()))

value = sum(arr)
result = str(value) + " "

for i in range(len(arr) - 1):
    value -= arr[i]
    result += str(value) + " "

print(result)