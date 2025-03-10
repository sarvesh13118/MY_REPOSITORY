#include<stdio.h>
int main()
{
    float Length , breadth , area;
    printf("Enter the Length of the rectangle:" );
    scanf("%f", &Length);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&breadth);
    
    area=Length*breadth;
    printf("The area of the rectangle is %f",area);
    return 0;
}