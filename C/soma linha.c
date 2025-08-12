#include <stdio.h>

int main()
{
    int m, n;
    
    printf("digite o numero de linhas: ");
    scanf("%i", &m);

    printf("\ndigite o numero de colunas: ");
    scanf("%i", &n);

    int mat [m][n];
    double vet [m];

    for (int l = 0; l<m; l++){
        for(int c = 0; c<n; c++){
            printf("\nDigite o elemento [%i, %i]:", l+1, c+1);
            scanf("%i", &mat[l][c]);
        }
    }
    
    int soma = 0;

    for( int l = 0; l<m; l++){
        for( int c = 0; c<n; c++){
            soma += mat[l][c];
        }
        vet[l]= soma;
        soma = 0;
    }
    printf("\nO vetor e: ");
    for (int i =0; i<m; i++){
        printf(" %.1lf ", vet[i]);
    }
    return 0;
}
