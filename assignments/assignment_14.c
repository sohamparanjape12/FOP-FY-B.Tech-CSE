#include <stdio.h>

void main() {
    // Assignment 14 - Binary to Decimal

    int binary;
    int decimal = 0;
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        decimal += (binary % 10) * (1 << i);
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);

}