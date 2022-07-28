// 8. Write a function to print PASCAL Triangle. (TSRN)
/*
                1
            1       1
        1       2       1
    1       3       3       1

*/
#include<stdio.h>

//  Function declaration
void pascalTriangle(int);
int factorial(int, int);
int combination(int, int);

// main function
int main() {
    int num;
    printf("Enter the row of pascal triangle: ");
    scanf("%d", &num);
    pascalTriangle(num);
    return 0;
}

// function for combination
int combination(int n, int r) {
    if (n == 0 && r == 0)
        return 1;
    return factorial(n, r) / factorial(r, r);
}

//  function for fcatorial
int factorial(int num, int stop_factorial) {
    int fact = 1;
    if (num > 0) {
        while (stop_factorial != 0) {
            fact = fact * num;
            num--;
            stop_factorial--;
        }
    }
    return fact;
}


//  Pascal Triangle Function
void pascalTriangle(int row) {
    int k = row + 1, l = k, count = 1;
    for (int i = 1; i <= row; i++) {
        int col = 0;
        for (int j = 1; j <= row + (row - 1); j++) {
            if (j >= k - i && j <= l - i) {
                if (count)
                {
                    // printf("* ");
                    printf("%d ", combination(i - 1, col));
                    col++;
                    count = 0;
                }
                else
                {
                    printf("  ");
                    count = 1;
                }
            }
            else {
                printf("  ");
                count = 1;
            }
        }
        l = l + 2;
        printf("\n");
    }
}
