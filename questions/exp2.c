// write a c program to swap two numbers.
#include <stdio.h>
int main() {
    int a, b, temp;
    //input two numbers.
    printf("Enter the first number (A):    ");
    scanf("%d", &a);
    printf("Enter the second number (B):    ");
    scanf("%d", &b);
    //swap two numbers
    temp = a;
    a = b;
    b = temp;
    // output the swapped numbers.
    printf(" after  swapping: A = %d,B = %d\n", a, b);
    return 0;
}