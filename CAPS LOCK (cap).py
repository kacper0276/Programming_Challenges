zdanie = input()
szukana = input()
lenSzukana = len(szukana)

for i in range(len(zdanie)):
    if zdanie[i:i+lenSzukana].casefold() == szukana.casefold():
        zdanie = zdanie[:i] + zdanie[i:i+lenSzukana].upper() + zdanie[i+lenSzukana:]


print(zdanie)