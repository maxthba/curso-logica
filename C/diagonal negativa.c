#include <stdio.h>

int main()
{
    int n, qnt_negativos = 0;

    printf("qual a ordem da matriz?: ");
    scanf("%i", &n);

    int mat[n][n];

    for (int l = 0; l<n;l++){
        for(int c = 0; c<n;c++){
            printf("\ndigite o elemento da posicao [%i, %i]: ", l+1, c+1);
            scanf("%i", &mat[l][c]);

        }
    }
    for (int l = 0; l<n;l++){
        for(int c = 0; c<n;c++){
            if (mat[l][c]<0){
                qnt_negativos +=1;
            }
        }
    }

    printf("\nquantidade de negativos: %i", qnt_negativos);
    printf("\nDiagonal principal: ");
    for (int i = 0; i < n; i++){
        printf(" %i ", mat[i][i]);
    }
    return 0;
}
