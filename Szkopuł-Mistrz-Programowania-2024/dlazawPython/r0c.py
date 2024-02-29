from r0clib import podnies, odstaw, do_przodu, do_tylu, w_prawo, w_lewo

def main():
    x_end, y_end = podnies()
    x_act=0
    y_act=0

    while(True):
        if x_act<x_end:
            w_prawo()
            x_act=x_act+1
        if x_act>x_end:
            w_lewo()
            x_act=x_act-1
        if y_act<y_end:
            do_przodu()
            y_act=y_act+1
        if y_act>y_end:
            do_tylu()
            y_act=y_act-1
        if y_act==y_end and x_act==x_end:
            odstaw()

main()
