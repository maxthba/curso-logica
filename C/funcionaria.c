#include <stdio.h>
#include <string.h>
int main (){

    int idade;
    double salario, altura;
    char genero;
    char nome [20];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy (nome, "maria silva");
    
    printf("idade: %i\n", idade);
    printf("salario: %.2lf\n", salario);
    printf("altura: %.2lf\n", altura);
    printf("genero: %c\n", genero);
    printf("nome: %s\n", nome);

    printf("\nA funcionaria %s, de sexo %c, ganha %.2lf reais e tem %i anos", nome, genero, salario, idade);

    return 0;
}