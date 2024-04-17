n = int(input())
left = True

if n == 1:
    print(1)

else:
    for i in range(1, n * n, n):
        if left:
            for j in range(i, i + n):
                print(j, end=" ")
            left = False
        else:
            for j in range(i + n - 1, i - 1, -1):
                print(j, end=" ")
            left = True
        print("")