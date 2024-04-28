a, b = map(int, input().split())
wynik = 0

for i in range(a, b + 1):
    if i % 3 == 0 or i % 5 == 0:
        wynik += 1

print(wynik)