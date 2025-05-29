num = int(1e5)

for i in range(num):
    if i % (num // 100) == 0:
        print(f'Progresso: {i * 100 // num}%', end='\r')

print("Progresso: 100%")

print(num)