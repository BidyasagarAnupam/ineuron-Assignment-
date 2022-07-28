// 1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>

//  Function declaration
int sumOfNNaturalNum(int);

//  main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum from 1 to %d is %d", num, sumOfNNaturalNum(num));
    return 0;
}

//  function start
int sumOfNNaturalNum(int n) {
    if (n == 1)
        return 1;
    return n + sumOfNNaturalNum(n - 1);
}