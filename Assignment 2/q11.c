/*
Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*/
#include <stdio.h>
int main()
{
    int num, dit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Also enter a digit: ");
    scanf("%d", &dit);

    printf("Number = %d and digit = %d then the resulting number is %d", num, dit, ((num * 10) + dit));
    return 0;
}