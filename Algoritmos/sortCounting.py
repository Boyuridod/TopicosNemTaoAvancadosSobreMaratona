def countingSort(vetor, reverse=False):
    menor = min(vetor)
    maior = max(vetor)
    count = [0] * ((maior - menor) + 1)
    ordenado = []

    for i in vetor:
        count[i - menor] += 1

    if(not reverse):
        for i in range(0, (maior - menor + 1)):
             if(count[i] != 0):
                  for j in range(count[i]):
                       ordenado.append(i + menor)
    else:
        for i in range((maior - menor), -1, -1):
             if(count[i] != 0):
                  for j in range(count[i]):
                       ordenado.append(i + menor)

    return ordenado

vetor = [4, 5, 1, 2, 7, 6, 1, 3, 1, 10]

print(vetor)
print(countingSort(vetor))
print(countingSort(vetor, reverse=True))

vetor = [2, 18, 10, 1, 4, 4, 72, -2, 39]

print(vetor)
print(countingSort(vetor))
print(countingSort(vetor, reverse=True))