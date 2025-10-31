def countingSort(vetor, reverse=False):
    menor = min(vetor)
    maior = max(vetor)
    count = [0] * (maior + 1)
    ordenado = []

    for i in vetor:
        count[i] += 1

    if(not reverse):
        for i in range(menor, maior + 1):
             if(count[i] != 0):
                  for j in range(count[i]):
                       ordenado.append(i)
    else:
        for i in range(maior, menor - 1, -1):
             if(count[i] != 0):
                  for j in range(count[i]):
                       ordenado.append(i)

    return ordenado

vetor = [4, 5, 1, 2, 7, 6, 1, 3, 1, 10]

print(vetor)
print(countingSort(vetor))
print(countingSort(vetor, reverse=True))