#include<stdio.h>
int main()
{
    int num1 = 7, num2 = 2;
    float result;

    result = (float)num1 / num2;

    printf("Explicit Casting Result: %.2f\n", result);

    return 0;
}