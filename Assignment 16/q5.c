// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>

int main() {
    int size, sum = 0;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    //  Logic for sum
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row + col == size - 1)
                sum = sum + matrix[row][col];
            else
                continue;
        }
    }
    printf("The sum of left diagonal matrix is %d", sum);
    return 0;
}