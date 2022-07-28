// 8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>

//  Function Declaration
void fibonacciSeries(int);

//  main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fibonacciSeries(num);
    return 0;
}

//  Function Start
int preNum1 = 1, preNum2 = 1, sum = 0;
void fibonacciSeries(int num) {
    if (num == 1)
        printf("1 ");
    else if (num == 2)
        printf("1 1 ");
    else
    {
        fibonacciSeries(num - 1);
        sum = preNum1 + preNum2;
        preNum1 = preNum2;
        preNum2 = sum;
        // printf("Prev num 1 is %d and Prev Num 2 is %d\n", preNum1, preNum2);
        printf("%d ", sum);
    }

}