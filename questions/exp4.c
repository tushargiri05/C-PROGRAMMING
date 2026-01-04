#include <stdio.h>
int main() {
    int num1, num2;
    int sum, difference, product, modulus;
    float quotient; 
    printf("Simple Integer Calculator\n");
    printf("--------------------------\n");
    
    printf("Enter the first integer (A): ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }
    printf("Enter the second integer (B): ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }
    sum = num1 + num2;
    // Subtraction
    difference = num1 - num2;
     // Multiplication
    product = num1 * num2;
 // 3. Display Results
    printf("\n--- Results ---\n");
    printf("Input A: %d\n", num1);
    printf("Input B: %d\n", num2);
    printf("--------------------------\n");

    printf("1. Addition (A + B): %d\n", sum);
    printf("2. Subtraction (A - B): %d\n", difference);
    printf("3. Multiplication (A * B): %d\n", product);

    if (num2 != 0) {
       quotient = (float)num1 / num2;
        modulus = num1 % num2;
        printf("4. Division (A / B): %.2f\n", quotient);
        printf("5. Modulus (A %% B): %d\n", modulus); 
    } else {
        printf("4. Division (A / B): Cannot divide by zero.\n");
        printf("5. Modulus (A %% B): Cannot calculate modulus by zero.\n");
    }

    return 0;
}