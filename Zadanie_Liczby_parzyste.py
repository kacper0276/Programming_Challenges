n = int(input())
for _ in range(n):
    liczba = int(input())
    if liczba % 2 == 0:
        print(liczba, end=" ")
    else:
        print(liczba * 2, end=" ")
