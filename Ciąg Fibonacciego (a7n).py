def Fibo(n):
    a , b = 1, 1
    for i in range(n - 1):
        b += a
        a = b - a
    return a


num = int(input())

print(Fibo(num))