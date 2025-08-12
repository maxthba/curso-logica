#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, a, b, c;

    printf("defina a:\n");
    scanf("%lf", &a);

    printf("defina b:\n");
    scanf("%lf", &b);

    printf("defina c:\n");
    scanf("%lf", &c);
    
    x1 = (double)-b + (double)sqrt(b*b - 4*a*c)/(double)2*a;
    x2 = (double)-b - (double)sqrt(b*b - 4*a*c)/(double)2*a;

    printf("x1: %lf\nx2:%lf", x1, x2);
    return 0;
}
