a = 0

arr = []

while a != -1:
    a = int(input())
    arr.append(a)

print(len(set(arr)) - 2)