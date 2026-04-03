#include <stdio.h>

int main() {
    // Assignment 4: Reverse a 3-digit Number

    int num, rev;

    printf("Enter 3-digit number: ");
    scanf("%d", &num);

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    printf("Reversed number: %d", rev);

    return 0;
}