// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>

int main() {
    int size = 3;
    int matrix1[size][size], matrix2[size][size], result[size][size];
    printf("Enter 9 elements of matrix 1\n");
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix1[row][col]);
        }
    }
    printf("Enter 9 elements of matrix 2\n");
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix2[row][col]);
        }
    }
    printf("The sum of two matrix is:\n");
    for (int row = 0;row < size; row++) {
        for (int col = 0; col < size; col++) {
            result[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    }
    for(int row = 0; row<size; row++) {
        for(int col = 0; col<size; col++) {
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }
    return 0;
}