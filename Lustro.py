n = int(input())
wynik = 0

while n:
    wynik = wynik * 10 + n % 10
    n = int(n / 10)

print(int(wynik))
