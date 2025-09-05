N = int(input("Quantos numeros voce vai digitar no vetor: "))
vet  = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = float(input("Digite um numero: "))

print()
print("numeros digitados: ")
for i in range (0, N):
    print(f"{vet[i]:.1f}")