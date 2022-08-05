// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// SPARSE MATRIX :- If the number of 0 present in matrix is greater than non-zero value then that matrix is called Sparse Matrix
#include<stdio.h>

int main() {
    int size, noOfZero = 0, noOfNonZero = 0;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    //  Logic
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (matrix[row][col] == 0)
                noOfZero++;
            else
                noOfNonZero++;
        }
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    if (noOfZero > noOfNonZero)
        printf("The matrix is Sparse Matrix");
    else
        printf("The matrix is not Sparse Matrix");

        return 0;
}