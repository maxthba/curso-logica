#include <stdio.h>
int main()
{
    int n;

    printf("quantos numeros quer digitar?");
    scanf("%i", &n);

    int vet[n];

    for (int i = 0; i<n; i++){
        printf("\ndigite o numero: ");
        scanf("%i", &vet[i]);
    }

    printf("\nnumeros negativos: \n");
    for (int i = 0; i<n; i++){
         if(vet[i]<0){
            printf("\n %i \n", vet[i]);
         }
    }
    return 0;
}
