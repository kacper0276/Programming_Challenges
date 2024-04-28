n = int(input())
arr = list(map(int, input().split()))

if arr[-1] == 15:
    print("DOWN")

elif arr[-1] == 0:
    print("UP")

elif len(arr) > 1 and arr[-1] > arr[-2]:
    print("UP")

elif len(arr) > 1 and arr[-1] < arr[-2]:
    print("DOWN")

elif len(arr) == 1 and arr[-1] != 15:
    print("UNKNOWN")