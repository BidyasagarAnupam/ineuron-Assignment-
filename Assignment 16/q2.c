// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
#include<stdlib.h>

int main() {

    int size = 3, sum = 0;
    int arr1[size][size];
    int arr2[size][size];
    int result[size][size];

    // user input
    printf("Enter the elements of 1st matrix: \n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix: \n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    //  main logic
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // printing
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    system("\nPause");
    return 0;
}