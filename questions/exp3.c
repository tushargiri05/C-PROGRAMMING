#include <stdio.h>

int main() {
    // Variable declarations and initialization
    int a = 10;
    float b = 12.34;
    char c = 'A';
    double d = 123.456;

    // Printing values and sizes
    printf("Integer value: %d\t Size: %zu bytes\n", a, sizeof(a));
    printf("Float value: %.2f\t Size: %zu bytes\n", b, sizeof(b));
    printf("Character value: %c\t Size: %zu bytes\n", c, sizeof(c));
    printf("Double value: %.3lf\t Size: %zu bytes\n", d, sizeof(d));

    return 0;
}
