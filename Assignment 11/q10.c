// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>

// function declaration
int factorial(int);
int sumOfSeries(int);

// main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of ");
    for (int i = 1; i <= num; i++) {
        if (i < num)
            printf("%d!/%d + ", i, i);
        else
            printf("%d!/%d ", i, i);
    }
    printf("= %d", sumOfSeries(num));
    return 0;
}

//  Factorial Function
int factorial(int number) {
    int product = 1;
    for (int i = 2;i <= number - 1; i++) {
        product *= i;
    }
    return product;
}

//  Sum of Series Function
int sumOfSeries(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum = sum + factorial(i);
    }
    return sum;
}
