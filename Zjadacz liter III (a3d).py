zdanie = input()

if len(zdanie) < 10:
    print(zdanie[0: len(zdanie): 2])
else:
    print(zdanie[1], zdanie[-3:])