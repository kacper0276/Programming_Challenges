from r3clib import sluchaj, odpowiedz

def liczbWzorFunkcji(x1, y1, x2, y2):
    m = (y2 - y1) / (x2 - x1)
    b = y1 - m * x1
    return m, b

def funkcja_liniowa(x, m, b):
    y = m * x + b
    return y


def oblicz_x(y, m, b):
    x = (y - b) / m
    return x

def main():
    x1 = 0
    y1 = 0
    x2 = 1
    y2 = 1
    wzorX, wzorY = 0, 0
    findMove = False
    while (True):
        if not findMove:
            x = sluchaj(x1, y1, x2, y2)
            if x == 1:
                x2 += 1
            if x == -1:
                x2 -= 1
            if x == 0:
                findMove = True
                wzorX, wzorY = liczbWzorFunkcji(x1, y1, x2, y2)
        else:
            y3 = y2
            y4 = -1
            x4 = x2

            while True:
                y3 += 1
                y4 -= 1

                if wzorX < 0:
                    x2 -= 1
                    x4 += 1
                    y2 = funkcja_liniowa(x2, wzorX, wzorY)
                    x3 = sluchaj(x1, y4, x4, y2)
                    x = sluchaj(x1, y3, x2, y2)
                elif wzorX > 0:
                    x2 += 1
                    x4 -= 1
                    y2 = funkcja_liniowa(x2, wzorX, wzorY)
                    x3 = sluchaj(x1, y4, x4, y2)
                    x = sluchaj(x1, y3, x2, y2)
                if x3 == 0:
                    odpowiedz(oblicz_x(y3, wzorX, wzorY), y4)
                if x == 0:
                    odpowiedz(oblicz_x(y3, wzorX, wzorY), y3)

main()
