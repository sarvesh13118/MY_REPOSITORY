#include<stdio.h>
#define EMPLOYEE_COUNT 10
struct employee{
    char name[50];
    int id;
    int age;
    float salary;
};
int main(){
    struct employee employees[EMPLOYEE_COUNT];
    printf("Enter the details of the employees:\n");
    for(int i = 0; i < EMPLOYEE_COUNT; i++){
        printf("Enter the name of employee %d: ", i+1);
        scanf("%s", employees[i].name);
        printf("Enter the id of employee %d: ", i+1);
        scanf("%d", &employees[i].id);
        printf("Enter the age of employee %d: ", i+1);
        scanf("%d", &employees[i].age);
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%f", &employees[i].salary);
    }
    printf("The details of the employees are:\n");
    for(int i = 0; i < EMPLOYEE_COUNT; i++){
        printf("Name: %s\n", employees[i].name);
        printf("Id: %d\n", employees[i].id);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    return 0;
}
