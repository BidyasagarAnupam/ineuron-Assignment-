// 8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size], upperTriangularMatrix[size][size];
    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    // Logic
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (col >= row) {
                upperTriangularMatrix[row][col] = matrix[row][col];
            }
            else {
                upperTriangularMatrix[row][col] = 0;
            }
        }
    }
    printf("The upper triangular matrix is :\n");
    // Printing the value
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d ", upperTriangularMatrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}