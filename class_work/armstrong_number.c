#include <stdio.h>
#include <math.h>

void main(){
    int num, temp, digit, digits;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp!=0){
        temp /= 10;
        digits += 1;
    }

    while(temp != 0){
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if(sum == num){
        printf("%d is an Armstrong number.", num);
    } else{
        printf("%d is not an Armstrong number.", num);
    }
}