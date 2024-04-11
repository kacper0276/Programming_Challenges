n = int(input())

arr = list(map(int, input().split()))
suma = 0
wynik = ""

for index in range(len(arr)):
    suma = suma + arr[index]
    wynik = wynik + str(suma) + " "

print(wynik)