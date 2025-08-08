#include <stdio.h>
int main(){

    double s_inicial, per, s_final;

    printf("salario incial: ");
    scanf("%lf", &s_inicial);

    printf("percentual:");
    scanf("%lf", &per);

    s_final = s_inicial*(1+per/100);

    printf("salario incial: %2.lf salario final: %2.lf", s_inicial, s_final);

    return 0;
}