// 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>

//  function  declaration
int digitCount(int);

//  main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The digit of %d is %d", num, digitCount(num));
    return 0;
}

//  function start
int count = 0;
int digitCount(int number) {
    if (number > 0)
    {
        count++;
        digitCount(number / 10);
        return count;
    }

}