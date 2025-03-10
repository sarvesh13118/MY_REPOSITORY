#include <stdio.h>

int main() {
    char membershipStatus;
    float amountSpent, discount = 0, finalAmount;

    printf("Are you a member? Enter 'Y' for Yes or 'N' for No: ");
    scanf(" %c", &membershipStatus);

    printf("Enter the amount spent (in Rs): ");
    scanf("%f", &amountSpent);

    if (membershipStatus == 'Y' || membershipStatus == 'y') {
        if (amountSpent > 10000) {
            discount = amountSpent * 0.10; 8;
        }
    } else if (membershipStatus == 'N' || membershipStatus == 'n') {
        if (amountSpent > 15000) {
            discount = amountSpent * 0.05; 
        }
    }

    finalAmount = amountSpent - discount;

    printf("Discount: Rs %.2f\n", discount);
    printf("Final Amount to be Paid: Rs %.2f\n", finalAmount);

    return 0;
}

