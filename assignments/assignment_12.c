#include <stdio.h>
#include <stdlib.h>

int calc_gcd(int num1, int num2){
    int gcd;
    for(int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int calc_scd(int num1, int num2){
    int scd = -1;
    for(int i=2; i<=num1 && i<=num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;
        }
        if (scd == -1) {
            return -1;
            break;
        } else {
            return scd;
            break;
        }
    }
}

void main() {

    // Assignment 12
    // Program to perform mathematical operations on two numbers
    // - Smallest Common Divisor (SCD)
    // - Greatest Common Divisor (GCD)

    int num1, num2, gcd;
    int scd = -1;
    int ch;
    int running = 1;

    while (running == 1){
        printf("Select an option:\n");
        printf("1. Find GCD\n");
        printf("2. Find SCD\n");
        printf("3. Exit\n");
        scanf("%d", &ch);

        if (ch == 1 || ch == 2){
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        num1 = abs(num1);
        num2 = abs(num2);

        switch(ch) {
            case 1:
                gcd = calc_gcd(num1, num2);
                printf("GCD of %d and %d is %d\n", num1, num2, gcd);
                break;
            case 2:
                scd = calc_scd(num1, num2);
                if(scd == -1) {
                    printf("No Common Divisor\n");
                } else {
                    printf("SCD of %d and %d is %d\n", num1, num2, scd);
                }
                break;
            case 3:
                running = 0;
                exit(0);
                break;
            default:
                printf("Invalid option selected.\n");
        }

        printf("\n\n");
    }
}