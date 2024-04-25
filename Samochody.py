n = int(input())

arr = list(map(int, input().split()))
wynik = 0

for i in range(n):
    if arr[i] == 0:
        wynik += arr[i + 1:].count(1)

print(wynik)