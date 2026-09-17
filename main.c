#include <stdio.h>

int main(void)
{
    float a;
    float b;
    float result;

    printf("enter numerator : ");
    scanf("%f", &a);

    printf("enter denominator : ");
    scanf("%f", &b);

    result = a / b;

    printf("result : %f\n", result);

    return 0;
}