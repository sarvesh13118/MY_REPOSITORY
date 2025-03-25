#include <stdio.h>
#include <math.h> 
int main() {
    int n, i;
    float sum = 0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];  
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];  
    }
    avg = sum / n;
    printf("Average: %.2f\n", avg);
    printf("Floor of Average: %.2f\n", floor(avg));
    printf("Ceil of Average: %.2f\n", ceil(avg));
    printf("Rounded Average: %.2f\n", round(avg));
    return 0;
}
