#include <stdio.h>

int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int factorial_non_recursive(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main () {

    // Assignment 06 - Program to calculate factorial of a number with and without recursion

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num == 0 || num == 1) {
        printf("Factorial of %d is 1.\n", num);
    } else {
        printf("Factorial of %d (recursive) is: %d\n", num, factorial_recursive(num));
        printf("Factorial of %d (non-recursive) is: %d\n", num, factorial_non_recursive(num));
    }
}