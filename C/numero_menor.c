#include <stdio.h>

int main()
{
    int p_num, s_num, t_num, menor;

    printf("digite o primeiro numero:.\n");
    scanf("%i", &p_num);
    menor = p_num;

    printf("digite o primeiro numero:.\n");
    scanf("%i", &s_num);

    if(s_num<menor){
        menor = s_num;
    }

    printf("digite o primeiro numero:.\n");
    scanf("%i", &t_num);

    if(t_num<menor){
        menor = t_num;
    }

    printf("menor numero e: %i", menor);

    
    return 0;
}
