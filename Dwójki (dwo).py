x = int(input())

if x < 1:
    print(0)
else:
    potega = 1
    wynik = 0
    while potega * 2 <= x:
        potega *= 2
        wynik += 1
    print(wynik + 1)