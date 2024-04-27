def odtworz_zapiski(liczba_slow, dane):
    stos_plytkich = []
    stos_glebokich = []
    zapiski = []

    for _ in range(liczba_slow):
        slowo, rodzaj, *numer = dane.pop(0).split()
        numer = int(numer[0]) if numer else None

        if slowo == "dziekuje":
            if rodzaj == "plytki":
                stos_plytkich.append(numer)
            elif rodzaj == "gleboki":
                stos_glebokich.append(numer)
        elif slowo == "prosze":
            if rodzaj == "plytki":
                if stos_plytkich:
                    zapiski.append(stos_plytkich.pop())
            elif rodzaj == "gleboki":
                if stos_glebokich:
                    zapiski.append(stos_glebokich.pop())

    return zapiski


n = int(input())
stos_glebokie = []
stos_plytkie = []

dane_wejsciowe = [input() for _ in range(n)]

result = odtworz_zapiski(n, dane_wejsciowe)

for i in result:
    print(i)
