// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>

int main() {
    int size, rowSum = 0, colSum = 0;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    printf("The sums are\n");
    //  for sum of rows
    for (int row = 0; row < size; row++) {
        rowSum = 0;
        for (int col = 0; col < size; col++) {
            printf("%d  ", matrix[row][col]);
            rowSum = rowSum + matrix[row][col];
        }
        printf("    %d", rowSum);
        printf("\n");
    }
    printf("\n");
    //  for sum of column
    for (int row = 0; row < size; row++) {
        colSum = 0;
        for (int col = 0; col < size; col++) {
            colSum = colSum + matrix[col][row];
        }
            printf("%d ", colSum);
    }

    return 0;
}