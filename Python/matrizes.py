M : int
N : int

M = int(input("Digite quantas linhas a matriz vai ter: "))
N = int(input("Digite quantas colunas a matriz vai ter: "))

mat = [[0 for  x in range(N)] for x in range(M)]

for i in range (0, M):
    for j in range (0, N):
        mat[i][j] = int(input(f"Digite o valor do elemento[{i}, {j}]: "))

print("MATRIZ DIGITADA: ")
for i in range (0, M):
    for j in range( 0, N):
        print(f"{mat[i][j]} ", end="")
    print()