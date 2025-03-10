#include <stdio.h>
int main(){
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    switch(month){
        case 1:
            printf("January\n");
            printf("February\n");
            break;
        case 2:
            printf("February\n");
            printf("March\n");
            break;
        case 3:
            printf("March\n");
            printf("April\n");
            break;
        case 4:
            printf("April\n");
            printf("May\n");
            break;
        case 5:
            printf("May\n");
            printf("June\n");
            break;
        case 6:
            printf("June\n");
            printf("July\n");
            break;
        case 7:
            printf("July\n");
            printf("August\n");
            break;
        case 8:
            printf("August\n");
            printf("September\n");
            break;
        case 9:
            printf("September\n");
            printf("October\n");
            break;
        case 10:
            printf("October\n");
            printf("November\n");
            break;
        case 11:
            printf("November\n");
            printf("December\n");
            break;
        case 12:
            printf("December\n");
            printf("January\n");
            break;
        default:
            printf("Invalid month number\n");
    }
    return 0;
}