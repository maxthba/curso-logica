#include <stdio.h>

int main()
{
    int x, y;
    do{
        printf("digite x:\n");
        scanf("%i", &x);

        printf("digite y:\n");
        scanf("%i", &y);

        if(x>y){
            printf("crescente\n\n");
        }
        else{
            printf("decrescente\n\n");
        }
    }
    while(x!=y);

    return 0;
}
