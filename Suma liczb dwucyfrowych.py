def czyDwucyfrowa(n):
    digit = 0
    while n:
        digit += 1
        n = int(n / 10)
    return digit == 2


n = int(input())
wynik = 0

arr = list(map(int, input().split()))

for i in range(len(arr)):
    if czyDwucyfrowa(arr[i]):
        wynik += arr[i]
print(wynik)
