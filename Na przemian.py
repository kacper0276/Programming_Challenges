n = int(input())
arr = list(map(int, input().split()))
zuza = ""
antek = ""

for index in range(0, len(arr), 2):
    zuza = zuza + str(arr[index]) + " "

for index in range(1, len(arr), 2):
    antek = antek + str(arr[index]) + " "

print(zuza)
print(antek)