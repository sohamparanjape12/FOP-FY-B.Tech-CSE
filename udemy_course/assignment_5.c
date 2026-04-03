#include <stdio.h>

int main() {
    // Assignment 5: Celsius to Fahrenheit Converter

    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (9.0/5) * c + 32;

    printf("Fahrenheit = %.2f", f);

    return 0;
}