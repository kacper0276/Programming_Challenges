def czy_palindrom(n):
   return True if n == n[::-1] else False

napis = input()

if czy_palindrom(napis):
    print("tak")
else:
    napis = napis + napis[::-1].upper()
    print(napis)