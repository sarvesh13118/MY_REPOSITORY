#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the first number: ");
scanf("%d", &a);
printf("Enter the second number: ");
scanf("%d", &b);
printf("Enter the third number: ");
scanf("%d", &c);
if (a>b && a>c)
{
    printf("The first number is the greatest number");
}
else if (b>a && b>c)
{
    printf("The second number is the greatest number");
}
else
{
    printf("The third number is the greatest number");
}
 
}
