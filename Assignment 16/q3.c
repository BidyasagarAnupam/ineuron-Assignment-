// 3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);
    int matrix[size][size], transpose[size][size];

    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            transpose[row][col] = matrix[col][row];
        }
    }
    printf("Transpoe is \n");
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d ", transpose[row][col]);
        }
        printf("\n");
    }
    return 0;
}