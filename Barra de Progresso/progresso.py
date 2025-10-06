num = int(1e9 + 7)

for i in range(num):
    if i % (num // 100) == 0:
        print(f'Progresso: {i * 100 // num}%', end='\r')

print("Progresso: 100%")

print(num)