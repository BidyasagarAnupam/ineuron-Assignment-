// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size], lowerTriangularMatrix[size][size];
    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    //  Logic
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (col <= row) {
                lowerTriangularMatrix[row][col] = matrix[row][col];
            }
            else {
                lowerTriangularMatrix[row][col] = 0;
            }
        }
    }
printf("The lower triangular matrix is :\n");
    // Printing the value
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d ", lowerTriangularMatrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}