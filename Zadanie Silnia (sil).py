def silnia(n):
    if n == 1 or n == 0:
        return 1

    return n * silnia(n - 1)


n = int(input())
print(silnia(n))