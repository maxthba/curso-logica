#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c=getchar()) != '\n' && c != EOF) {}
}


int main()
{
    double larg;
    double alt;
    double val_m;
    double valor_t;
    double area;
    printf("digite o valor da largura do terreno:\n");
    scanf("%lf", &larg);
    limpar_entrada();

    printf("digite o valor da altura do terreno:\n");
    scanf("%lf", &alt);
    limpar_entrada();

    printf("digite o valor em reais por metro quadrado:\n");
    scanf("%lf", &val_m);
    limpar_entrada();
    
    area = (larg*alt);
    valor_t = (val_m*area);


    printf("Area do terreno: %.2lf valor total: %.2lf", area, valor_t);
    


    return 0;
}
