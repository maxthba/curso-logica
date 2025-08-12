#include <stdio.h>

int main()
{
    int n;
    double soma = 0, media = 0;

    printf("digite quantos numeros deseja: ");
    scanf("%i", &n);

    double vet[n];

    for (int i = 0; i<n; i++){
        printf("digite um numero:\n");
        scanf("%lf", &vet[i]);
        soma += vet[i];
    }

    media = (double)soma / n;

    printf("valores = ");
    for (int i =0; i<n; i++){
        printf("%.2lf ", vet[i]);
    }
    printf("\nsoma = %.2lf", soma);
    printf("\nmedia = %.2lf", media);

    return 0;
}
