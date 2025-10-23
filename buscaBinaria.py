def busca_binaria_otimizada(lista, alvo):
    inicio = 0
    fim = len(lista) - 1

    while inicio <= fim:
        # Otimização com bit a bit para encontrar o meio
        # meio = (inicio + fim) >> 1 
        meio = (inicio + fim) // 2
        
        if lista[meio] == alvo:
            return meio
        elif lista[meio] < alvo:
            inicio = meio + 1
        else: # lista[meio] > alvo
            fim = meio - 1
    
    return -1 # Alvo não encontrado

# Exemplo de uso:
minha_lista = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91]
alvo = 23
indice = busca_binaria_otimizada(minha_lista, alvo)

if indice != -1:
    print(f"Elemento encontrado no índice: {indice}")
else:
    print("Elemento não encontrado na lista.")

