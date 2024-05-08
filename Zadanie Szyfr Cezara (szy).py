def szyfrCezara(typZadania, zmienianie, napis):
    wynik = ""
    if typZadania == 1:
        for znak in napis:
            if (65 <= ord(znak) <= 90) or (97 <= ord(znak) <= 122):
                litera = zmienianie + ord(znak)
                if (litera > ord('Z') and znak.isupper()) or (litera > ord('z') and not znak.isupper()):
                    litera -= 26
                wynik += chr(litera)
            else:
                wynik += znak
        return wynik
    if typZadania == 2:
        for znak in napis:
            if (65 <= ord(znak) <= 90) or (97 <= ord(znak) <= 122):
                litera = ord(znak) - zmienianie
                if (litera < ord('a') and not znak.isupper()) or (litera < ord('A') and znak.isupper()):
                    litera += 26
                wynik += chr(litera)
            else:
                wynik += znak
        return wynik


typZadania = int(input())
zmienianie = int(input())
napis = input()

print(szyfrCezara(typZadania, zmienianie, napis))