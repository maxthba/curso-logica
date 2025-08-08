#include <stdio.h>
int main(){

    int a;
    int b;
    int temp;

    a = 5;
    b = 13;
    temp = 5;

    printf("a = %i\n", a);
    printf("b = %i\n", b);

    a = b;
    b = temp;

    printf("apos inverter \n");
    printf("a = %i\n", a);
    printf("b = %i\n", b);


    return 0;
}