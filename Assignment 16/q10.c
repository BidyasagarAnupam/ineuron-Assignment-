// 10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>

// main function
int main() {
    int size, countOne = 0, maxValue, maxValueAT = 0;
    printf("Enter the size of size of matrix: ");
    scanf("%d", &size);

    int matrix[size][size], temp[size];
    printf("Enter %d elements of a matrix\n", size * size);
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }
    //  Logic
    for (int row = 0; row < size; row++) {
        countOne = 0;
        for (int col = 0; col < size; col++) {
            if (matrix[row][col] == 1)
                countOne++;
            else
                continue;
        }
        temp[row] = countOne; // store the number of one in another array row wise
    }

    maxValue = -9999999;
    for (int row = 0; row < size; row++) {
        if (maxValue < temp[row]) {
            maxValue = temp[row];
            maxValueAT = row;
        }
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    if (maxValue != 0)
        printf("\nThe maximum number of 1 is in %dth row", maxValueAT + 1);
    else
        printf("\nThere is no 1 in the matrix");

    return 0;
}