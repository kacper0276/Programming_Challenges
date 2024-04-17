a, b, k = map(int, input().split())
wynik = 0

for i in range(a, b + 1):
    if i % k == 0:
        wynik += 1
print(wynik)