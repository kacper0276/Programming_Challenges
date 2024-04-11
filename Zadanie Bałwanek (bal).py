def balwan(x, k):
    a = k * 2
    b = a * 2

    if a + b + k <= x:
        return (a + b + k) * 1000

    b = k / 2
    if a + b + k <= x:
        return (a + b + k) * 1000

    a = b / 2
    if a + b + k <= x:
        return (a + b + k) * 1000

    return 0


x, k = map(int, input().split())

print(int(balwan(x, k)))