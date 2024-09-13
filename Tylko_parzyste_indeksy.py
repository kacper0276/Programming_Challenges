n = int(input())

wejscie = input()

tablica = list(map(int, wejscie.split()))

print(' '.join(map(str, tablica)))

print(' '.join(map(str, tablica[::2])))
