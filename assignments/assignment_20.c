#include <stdio.h>

void swap_with_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_without_pointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers: a = %d, b = %d\n", a, b);
}


void main() {
    // Assignment 20: Write a program to swap numbers with and without using pointers.

    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping with pointers
    swap_with_pointers(&a, &b);
    printf("After swapping with pointers: a = %d, b = %d\n", a, b);

    // Swapping without pointers
    swap_without_pointers(a, b);
}