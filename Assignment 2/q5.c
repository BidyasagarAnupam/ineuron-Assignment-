// Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter a three digits number: ");
    scanf("%d", &a);

    for (int i = 1; i <= 3; i++)
    {
        sum += (a % 10);
        a /= 10;
    }
    printf("The sum of the given numbers  is %d", sum);
    return 0;
}