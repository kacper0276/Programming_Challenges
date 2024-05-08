inputFruits = input()
fruitsList = inputFruits.split()
result = 0

for numFruit in fruitsList:
    result += int(numFruit)

print(result)