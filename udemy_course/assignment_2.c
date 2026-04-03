#include <stdio.h>

int main() {
    // Assignment 2: Swap Without Third Variable

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d", a, b);

    return 0;
}