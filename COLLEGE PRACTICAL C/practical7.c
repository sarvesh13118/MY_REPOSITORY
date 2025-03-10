#include<stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("The number is zero.\n");
    } else if (a > 0) {
        if (a % 2 == 0) {
            printf("The number is Positive Even.\n");
        } else {
            printf("The number is Positive Odd.\n");
        }
    } else {
        if (a % 2 == 0) {
            printf("The number is Negative Even.\n");
        } else {
            printf("The number is Negative Odd.\n");
        }
    }

    return 0;
}
