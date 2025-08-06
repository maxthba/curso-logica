x = int(input("digite um numero de inicio"))
y = int(input("digite um numero de final"))
soma = 0
for i in range (x,y):
    if i%2 != 0:
        soma +=i
print(f"a soma dos numeros impares entre {x} e {y} é: {soma}")
    
