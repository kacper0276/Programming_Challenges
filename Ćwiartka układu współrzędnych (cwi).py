x, y = map(int, input().split())

if x == 0 and y == 0:
    print(0)
elif x == 0 and y != 0:
    print("OY")
elif x != 0 and y == 0:
    print("OX")
elif x > 0 and y > 0:
    print("I")
elif x > 0 and y < 0:
    print("IV")
elif x < 0 and y > 0:
    print("II")
elif x < 0 and y < 0:
    print("III")