#include <stdio.h>
#include <math.h>

int main()
{
    double b_ret, a_ret, area, perimetro, diagonal;

    printf("digite a base do retangulo:");
    scanf("%lf", &b_ret);

    printf("digite a altura do retangulo:");
    scanf("%lf", &a_ret);

    area = b_ret*a_ret;
    perimetro = 2*b_ret+2*a_ret;
    diagonal = sqrt(b_ret*b_ret + a_ret*a_ret);

    printf("area: %.4lf\n", area);
    printf("perimetro: %.4lf\n", perimetro);
    printf("diagonal: %.4lf\n", diagonal);
    
    return 0;
}
