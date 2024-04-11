n = int(input())
array = []

array = list(map(int, input().split()))

array.sort()
print(abs(array[len(array) - 1] - array[0]))
