k, w, m = map(int, input().split())
wynik = 0

while k <= w:
    k += m
    wynik += 1

print(wynik)