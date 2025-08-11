#include <stdio.h>

int main()
{
    double nota1, nota2, media;

    printf("digite primeira nota:\n");
    scanf("%lf", &nota1);

    printf("digite segunda nota:\n");
    scanf("%lf", &nota2);

    media = (double)(nota1+nota2)/2.0;

    if (media>=60.00){

        printf("PASSOU!!\nMedia = %.1lf", media);

    }
    else{

        printf("REPROVOUU!!!!!!\nMedia = %.1lf", media);
    }

    return 0;
}
