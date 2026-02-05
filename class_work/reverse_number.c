#include <stdio.h>
#include <math.h>

void main(){
    int num, temp, digit, digits;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    digits = 0;

    while(temp!=0){
        temp /= 10;
        digits += 1;
    }

    temp = num;
    while(temp != 0){
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    printf("Reversed Number: %d\n", rev);
}