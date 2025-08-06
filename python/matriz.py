
m = int(input("quantas linhas:"))
n = int(input("quantas colunas:"))
matriz = []

for i in range(m):
    linha = []
    for j in range (n):
        valor = int(input("digite o valor:"))
        linha.append(valor)
    matriz.append(linha)
print(matriz)
        