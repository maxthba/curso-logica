#include <stdio.h>
int main()
{
    int s;
    int m;
    int h;

    printf("digite uma quantidade de segundos:");
    scanf("%i", &s);

    m = s/60;
    s = s%60;
    h = m/60;
    m = m%60;

    printf("horas: %i, minutos: %i, segundos: %i", h, m, s);
    return 0;
}
