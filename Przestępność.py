def czy_przestepny(rok):
    if rok % 4 == 0:
        if rok % 100 == 0:
            if rok % 400 == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False


rok = int(input())
if czy_przestepny(rok):
    print("TAK")
else:
    print("NIE")
