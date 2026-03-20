#include <stdio.h>
#include <stdlib.h>

void main() {
    // Assignment 15 - Pseudo Random Number Generator

    int seed; // You can change the seed value for different sequences
    printf("Enter a seed number: ");
    scanf("%d", &seed);
    srand(seed);

    printf("Generated pseudo random number: %d\n", rand());
}