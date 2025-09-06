N = int(input("Digite a ordem da matriz (no maximo 10): "))
while N>10:
    N = int(input("Digite a ordem da matriz (no maximo 10): "))

mat = [[0 for x in range (N)] for x in range (N)]

qnt_negativo = 0

for i in range(0, N):
    for j in range(0, N):
        mat[i][j] = int(input(f"Digite o valor do elemento[{i}, {j}]: "))
        if mat[i][j]<0:
            qnt_negativo = qnt_negativo + 1
    
print("DIAGONAL PRINCIPAL: ")
for i in range(0, N):
    for j in range(0, N):
        if i == j:
            print(f"{mat[i][j]} ", end="")
print(f"\nQUANTIDADE DE NEGATIVOS = {qnt_negativo}")