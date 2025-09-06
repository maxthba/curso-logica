x = int(input("Digite o numero de comeco: "))
y = int(input("Digite o numero de final: "))

soma_impares = 0

if x>y:
    troca = x
    x = y
    y = troca

for i in range (x+1, y):
    if i % 2 != 0:
        soma_impares = soma_impares + i

print(f"Soma de impares = {soma_impares}")