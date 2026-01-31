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

void main(){
    int ch;
    float num1, num2, result;
    bool isRunning = true;

    while (isRunning){
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &ch);

        switch (ch){
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 == 0){
                    printf("Error: Division by zero is not allowed.\n\n");
                    break;
                }
                result = divide(num1, num2);
                printf("Result: %.2f\n\n", result);
                break;
            case 5:
                isRunning = false;
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    }
}