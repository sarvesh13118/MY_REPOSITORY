#include<stdio.h>
int main()
{
    float Maths , Science , English , Geography , Histroy , Total , Percentage;
    printf("Enter the marks of Maths: ");
    scanf("%f", &Maths);
    printf("enter the marks of Science: ");
    scanf("%f", &Science);
    printf("Enter the marks of English: ");
    scanf("%f", &English);
    printf("Enter the marks of Geography: ");
    scanf("%f", &Geography);
    printf("Enter the marks of Histroy: ");
    scanf("%f", &Histroy);
    Total = Maths + Science + English + Geography + Histroy;
    Percentage = (Total / 500) * 100;
    printf("The total marks is: %f\n", Total);
    printf("The percentage is: %f\n", Percentage);
    return 0;
}