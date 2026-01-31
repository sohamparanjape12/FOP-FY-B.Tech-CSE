#include <stdio.h>

void main(){
    int arr1[2][2];
    int arr2[2][2];
    int add_arr[2][2];

    printf("Enter elements of 2x2 matrix A:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");

    printf("Enter elements of 2x2 matrix B:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            add_arr[i][j] = arr1[i][j] +  arr2[i][j];
        }
    }              

    printf("Result:\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("+\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("=\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", add_arr[i][j]);
        }
        printf("\n");
    }
}