N = int(input("Digite quantos numeros deseja digitar: "))
vet = [0 for x in range(N)]

soma = 0
for i in range(0, N):
    vet[i] = int(input(f"Digite o numero do elemento[{i}]: "))
    soma = soma + vet[i]

print(f"VALORES = ", end = "")
for i in range (0, N):
    print(f"{vet[i]} ", end = "")
print(f"\nSOMA = {soma}")
media = soma/N
print(f"MEDIA = {media}")
