#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c=getchar()) != '\n' && c != EOF) {}
}


int main()
{
    double larg;
    double compr;
    double val_m;
    double valor_t;
    double area;
    printf("digite o valor da largura do terreno:\n");
    scanf("%lf", &larg);
    limpar_entrada();

    printf("digite o valor da comprimento do terreno:\n");
    scanf("%lf", &compr);
    limpar_entrada();

    printf("digite o valor em reais por metro quadrado:\n");
    scanf("%lf", &val_m);
    limpar_entrada();
    
    area = (larg*compr);
    valor_t = (val_m*area);


    printf("Area do terreno: %.2lf valor total: R$%.2lf", area, valor_t);
    


    return 0;
}
