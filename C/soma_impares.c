#include <stdio.h>

int main()
{
    int x, y, impares,i;
    printf("\ndigite x: ");
    scanf("%i", &x);

    printf("\ndigite y: ");
    scanf("%i", &y);

    impares = 0;
    for (i=x+1;i<y;i++){
        if(i%2!=0){
            impares += i;
        }
    }
    printf("\na soma dos numeros impares e: %i", impares);
    return 0;
}
