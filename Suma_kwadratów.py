def suma_kwadratow_wzor(n):
    return (n * (n + 1) * (2 * n + 1)) // 6

n = int(input().strip())

print(suma_kwadratow_wzor(n))
