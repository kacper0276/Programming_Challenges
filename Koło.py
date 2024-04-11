import math

r = float(input())

obwod = 2 * math.pi * r
pole = math.pi * pow(r, 2)

obwod = round(obwod, 3)
pole = round(pole, 3)

print("%.3f" %pole)
print("%.3f"  %obwod)