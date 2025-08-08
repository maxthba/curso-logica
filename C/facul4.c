#include <stdio.h>

int main()
{
    double peso, altura, resultado;

    printf("digite o peso:");
    scanf("%lf", &peso);

    printf("digite a altura:");
    scanf("%lf", &altura);

    resultado = peso/(altura*altura);
    printf("seu imc e:%lf", resultado);
    return 0;
}
