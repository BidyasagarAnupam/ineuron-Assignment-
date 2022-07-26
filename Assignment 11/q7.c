// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>

// Function declaration
void printFibonacciSeries(int);

// main fuction
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printFibonacciSeries(num);
    return 0;
}

// fuction start
void printFibonacciSeries(int number) {
    int num1 = 1, num2 = 1, sum = 0;
    if (number == 1) {
        printf("1");
    }
    else if (number == 2) {
        printf("1 1");
    }
    else {
        printf("1 1 ");
        for (int i = 3; i <= number; i++) {
            sum = num1 + num2;
            printf("%d ", sum);
            num1 = num2;
            num2 = sum;
        }
    }
}