// Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a >= 100 && a <= 999)
    {
        printf("%d is a three digits number", a);
    }
    else
    {
        printf("%d is not a three digits number", a);
    }

    return 0;
}