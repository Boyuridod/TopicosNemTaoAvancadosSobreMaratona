def countingSort(vetor, reverse=False):
    count = {}
    ordenado = []

    for i in vetor:
        try:
            count[i] += 1
        except:
            count[i] = 1

    if(not reverse):
        for numero, qtt in sorted(count.items()):
            for i in range(qtt):
                ordenado.append(numero)
    else:
        for numero, qtt in sorted(count.items(), reverse=True):
            for i in range(qtt):
                ordenado.append(numero)

    return ordenado

vetor = [4, 5, 1, 2, 7, 6, 1, 3, 1, 10]

print(vetor)
print(countingSort(vetor))
print(countingSort(vetor, reverse=True))