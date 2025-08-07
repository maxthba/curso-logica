#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c=getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main (){

    int idade;
    double salario, altura;
    char genero;
    char nome [20];

    printf("digite a idade do funcionario:");
    scanf("%i", &idade);

    printf("digite o salario:");
    scanf("%lf", &salario);

    printf("digite a altura:");
    scanf("%lf", &altura);
    
    limpar_entrada();
    printf("digite o genero:");
    scanf("%c", &genero);

    limpar_entrada();
    printf("digite o nome:");
    ler_texto(nome, 20);
    
    printf("\nidade: %i\n", idade);
    printf("salario: %.2lf\n", salario);
    printf("altura: %.2lf\n", altura);
    printf("genero: %c\n", genero);
    printf("nome: %s\n", nome);

    printf("\nA funcionaria %s, de sexo %c, ganha %.2lf reais e tem %i anos", nome, genero, salario, idade);

    return 0;
}