#include<stdio.h>
int main()
{
    float basic_salary, gross_salary, da, hra;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    
        da = basic_salary * 0.40;
        hra = basic_salary * 0.20;
        gross_salary = basic_salary + da + hra;
        printf("The gross salary is: %f", gross_salary);
        return 0;
}