#include <stdio.h>

int main() {
    int num1 = 5;  
    int num2 = 3;  
    int result;
    result = num1 & num2;
    printf("Bitwise AND of %d and %d is %d\n", num1, num2, result); 
    result = num1 | num2;
    printf("Bitwise OR of %d and %d is %d\n", num1, num2, result); 
    result = num1 ^ num2;
    printf("Bitwise XOR of %d and %d is %d\n", num1, num2, result);
    result = ~num1;
    printf("Bitwise NOT of %d is %d\n", num1, result); 
    result = num1 << 1;
    printf("Left Shift of %d by 1 position is %d\n", num1, result); 
    result = num1 >> 1;
    printf("Right Shift of %d by 1 position is %d\n", num1, result); 

    return 0;
}
