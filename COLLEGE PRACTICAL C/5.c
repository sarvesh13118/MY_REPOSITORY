#include<stdio.h>
int main(){
    int day ;
    printf("Enter the day :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesdayday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
        
    
    default:
    printf("Invalid Day ! Please Enter the Correct Day Number");
        break;
    }
    
}