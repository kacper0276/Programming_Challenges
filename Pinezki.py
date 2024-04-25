n = int(input())
arr = list(map(int, input().split()))
result = 0
maxJump = 0

for i in range(n):
    if arr[i] == 1:
        result += 1
    else:
        if result > maxJump:
            maxJump = result
        result = 0

if result > maxJump:
    maxJump = result

print(maxJump)