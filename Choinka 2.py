n = int(input())

spacje = n
gwiazdki = 1

for i in range(n):
    print(spacje * " ", end="")
    print(gwiazdki * "*")
    spacje -= 1
    gwiazdki += 2

spacje = n
gwiazdki = 1

for i in range(n):
    print(spacje * " ", end="")
    print(gwiazdki * "*",)
    spacje -= 1
    gwiazdki += 2

print((2 * n + 1) * "*", end="")