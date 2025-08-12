#include <string.h>
#include <stdio.h>

int main()
{
    int n, menor = 0;
    double porcentagem, media_altura = 0;

    printf("quantas pessoas deseja registrar: ");
    scanf("%i", &n);
    getchar();
    char nome[n][50];
    double altura [n];
    int idade [n] ;

    for (int i =0; i<n; i++){
        printf("\ndigite o nome: ");
        fgets(nome[i], 50, stdin);
        nome[i][strcspn(nome[i], "\n")] = 0;
        
        printf("\ndigite sua altura: ");
        scanf("%lf", &altura[i]);
        media_altura += altura[i];

        
        printf("\nDigite sua idade ");
        scanf("%i", &idade[i]);
        getchar();
    }
    media_altura = media_altura / n;
    printf("\n\nMedia de altura: %.2lf", media_altura);
    for (int i = 0; i<n; i++){
        if (idade[i]<16){
            menor += 1;
            printf("\n\nNome: %s", nome[i]);
            printf("\n\nAltura: %.2lf", altura[i]);
            printf("\n\nIdade: %i", idade[i]);

        }
    }

    porcentagem = (double)(100*menor)/(double)n;

    printf("\nPorcentagem de pessoas com menos de 16 anos: %.2lf%%", porcentagem);

    return 0;
}
