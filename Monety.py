def minimalna_liczba_monet_do_przewrocenia(n, monety):
    awersy = monety.count(0)
    rewersy = n - awersy
    return min(awersy, rewersy)


n = int(input())
monety = list(map(int, input().split()))

print(minimalna_liczba_monet_do_przewrocenia(n, monety))
