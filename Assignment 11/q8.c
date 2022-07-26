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

// main function
int main() {
    int num;
    printf("Enter the row of pascal triangle: ");
    scanf("%d", &num);
    pascalTriangle(num);
    return 0;
}

//  Pascal Triangle Function
void pascalTriangle(int row) {
    int k = row + 1, l = k, count = 1;
    int pascalNumber = 1; //TODO...................................         .........      .........   
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row + (row - 1); j++) {
            if (j >= k - i && j <= l - i) {
                if (count)
                {
                    printf("* ");
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
