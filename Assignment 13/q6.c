// 6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>

//  Function declaration
int factorialOfANumber(int);

//  main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial %d is %d", num, factorialOfANumber(num));
    return 0;
}

//  function start
int factorialOfANumber(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n* + factorialOfANumber(n - 1);
}