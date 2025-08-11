#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[10], nome2[10];
    int idade1, idade2;
    double media;

    printf("digite o primeiro nome:\n");
    fgets(nome1, 10, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("digite a primeira idade:\n");
    scanf("%i", &idade1);
    getchar();

    printf("digite o segundo nome:\n");
    fgets(nome2, 10, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("digite a segunda idade:\n");
    scanf("%i", &idade2);

    media = (double)(idade1+idade2)/2.0;
    printf("a media de idades entre %s e %s e: %.1lf", nome1, nome2, media);
    return 0;
}
    