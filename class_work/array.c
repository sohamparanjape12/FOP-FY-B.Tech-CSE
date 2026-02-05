#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter Array Elements: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements are: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    int a[3];
    int b[3];
    int c[3];

    printf("\n\nEnter Array A Elements: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter Array B Elements: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    for(int i=0; i<3; i++) {
        c[i] = a[i] + b[i];
    }
    printf("\nSum of Arrays [A+B]: \n");
    for(int i=0; i<3; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}