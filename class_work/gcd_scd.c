#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, gcd;
    int scd = -1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 = abs(num1);

    for(int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    for(int i=2; i<=num1 && i<=num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;
        }
        if (scd == -1) {
            printf("No SCD found for %d and %d\n", num1, num2);
            break;
        } else {
            printf("SCD of %d and %d is %d\n", num1, num2, scd);
            break;
        }
    }
}