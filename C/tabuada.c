#include <stdio.h>

int main()
{
    int n, i;
    int resultado;

    printf("digite um numero para ver a tabuada do mesmo: ");
    scanf("%i", &n);
    for(i=1;i<=10;i++){
        resultado = n*i;
        printf("\n%i X %i = %i\n", n, i, resultado);
    }
    return 0;
}
