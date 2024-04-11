a, b = map(int, input().split())

wyniki = []
znaki = []

wyniki.append(a * b)
wyniki.append(a + b)
wyniki.append(a - b)
if b != 0:
    wyniki.append(a / b)

max = max(wyniki)

if wyniki[0] == max:
    znaki.append("*")
if wyniki[1] == max:
    znaki.append("+")
if wyniki[2] == max:
    znaki.append("-")
if b != 0:
    if wyniki[3] == max:
        znaki.append("/")

if len(znaki) > 1:
    print("NIE")
else:
    res = ""

    if a < 0:
        res = res + "({})"
    else:
        res = res + "{}"
    res = res + "{}"
    if b < 0:
        res = res + "({})"
    else:
        res = res + "{}"
    res = res + "="
    if max < 0:
        res = res + "({})"
    else:
        res = res + "{}"

    for el in range(len(znaki)):
        print(res.format(a, znaki[el], b, max))