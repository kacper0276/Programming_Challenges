def min2Digit(num):
    digit = 0
    while num > 0:
        num = int(num / 10)
        digit += 1
        if digit >= 2:
            return True
    return False


arr = list(map(int, input().split()))
min = 10392109482147


for i in range(len(arr)):
    if min2Digit(arr[i]) and arr[i] < min:
        min = arr[i]

if min == 10392109482147:
    print(0)
else:
    print(min)