#include <stdio.h>
#include <stdbool.h>

float add(float a, float b){
    return a + b;
}

float subtract(float a, float b){
    return a - b;
}

float multiply(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}

float power(float a, float b){
    float result = 1;
    for(int i = 0; i < b; i++){
        result *= a;
    }
    return result;
}

float factorial(float a){
    if (a == 0){
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}

void main(){
    int ch;
    float num1, num2, result;
    bool isRunning = true;

    while(isRunning){
        printf("\n====Calculator Menu====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Factorial\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 != 0){
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = power(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = factorial(num1);
                printf("Result: %.2f\n", result);
                break;
            case 7:
                isRunning = false;
                printf("Exiting the calculator!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

}