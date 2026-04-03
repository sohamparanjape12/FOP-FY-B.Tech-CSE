#include <stdio.h>

int main() {
    // Assignment 1: Simple Calculator

    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    if(op == '+') printf("Result: %.2f", a + b);
    else if(op == '-') printf("Result: %.2f", a - b);
    else if(op == '*') printf("Result: %.2f", a * b);
    else if(op == '/') printf("Result: %.2f", a / b);
    else printf("Invalid operator");

    return 0;
}