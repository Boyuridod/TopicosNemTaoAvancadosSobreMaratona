# # Exemplo de código
# numero = 7 # Um número ímpar

# # Aplica o operador AND bit a bit com 1
# resultado = numero & 1

# if resultado == 1:
#     print(f"{numero} é ímpar")
# else:
#     print(f"{numero} é par")

# numero_par = 8 # Um número par

# resultado_par = numero_par & 1

# if resultado_par == 1:
#     print(f"{numero_par} é ímpar")
# else:
#     print(f"{numero_par} é par")


def isImpar(x):
    return (x & 1)

print(isImpar(10))
print(isImpar(1))
print(isImpar(0))
print(isImpar(2))
print(isImpar(9999))
print(isImpar(7))