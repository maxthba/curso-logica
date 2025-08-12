#include <stdio.h>

int main()
{
    int idade, soma = 0, num_p = 0;
    double media;

    printf("digite uma idade:\n");
    scanf("%i", &idade);
    if (idade <= 0){
        printf("IMPOSSIVEL CALCULAR");
        return 0;
    }
    soma += idade;
    num_p += 1;
    do{
        printf("digite outra idade:\n");
        scanf("%i", &idade);
        if(idade<=0){
            break;
        }
        soma += idade;
        num_p += 1;
    }
    while(idade>0);
    media = (double)soma / num_p;
    printf("media das idades e:%.2lf", media);


    return 0;
}
